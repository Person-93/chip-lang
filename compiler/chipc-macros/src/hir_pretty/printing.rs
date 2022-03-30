use super::{
  transpose_ref, ChildrenSettings, Field, FieldFmt, FmtString,
  FmtStringModifier, FmtStringPart, HirPretty, Variant,
};
use darling::{
  ast::{Data, Fields, Style},
  Error,
};
use proc_macro2::{Span, TokenStream};
use quote::{format_ident, quote, ToTokens};
use syn::{spanned::Spanned, GenericParam, Ident, Lifetime, LifetimeDef};

impl ToTokens for HirPretty {
  fn to_tokens(&self, tokens: &mut TokenStream) {
    let ident = &self.ident;

    let (_, type_generics, where_clause) = self.generics.split_for_impl();

    let mut generics = self.generics.clone();
    if generics.params.is_empty() {
      generics
        .params
        .push(GenericParam::Lifetime(LifetimeDef::new(Lifetime::new(
          "'hir",
          Span::call_site(),
        ))))
    }

    let (impl_generics, _, _) = generics.split_for_impl();

    let body = self.body();

    tokens.extend(quote! {
      const _: () = {
        use crate::{HirPretty, PrettyOutput};
        #[automatically_derived]
        impl #impl_generics HirPretty<'hir> for #ident #type_generics #where_clause {
          fn pretty_print(&self, ctx: &crate::HirContext<'hir>) -> PrettyOutput {
            #body
          }
        }
      };
    });
  }
}

impl HirPretty {
  fn body(&self) -> TokenStream {
    let Self {
      ident: _,
      generics: _,
      data,
      fmt,
      transparent,
    } = self;

    match data {
      Data::Enum(variants) => {
        let variants = variants
          .iter()
          .map(|variant| variant.match_arm(*transparent));
        quote! { match self { #(#variants)* } }
      }
      Data::Struct(fields) => {
        let bindings = field_bindings(fields);
        let formatting = print_fields(fmt.as_ref(), fields, *transparent);
        quote! {
          let Self #bindings = self;
          #formatting
        }
      }
    }
  }
}

impl Variant {
  fn match_arm(&self, transparent: bool) -> TokenStream {
    let Self {
      ident,
      fields,
      fmt,
      transparent: self_transparent,
    } = self;
    let transparent = transparent || *self_transparent;
    let bindings = field_bindings(fields);
    let formatting = print_fields(fmt.as_ref(), fields, transparent);
    quote! { Self::#ident #bindings => #formatting, }
  }
}

fn field_bindings(fields: &Fields<Field>) -> TokenStream {
  match fields.style {
    Style::Tuple => {
      let idents = (0..fields.fields.len()).map(|idx| format_ident!("_{idx}"));
      quote! { ( #(#idents),* ) }
    }
    Style::Struct => {
      let idents = fields
        .fields
        .iter()
        .map(|field| field.ident.as_ref().unwrap());
      quote! { { #(#idents),* } }
    }
    Style::Unit => TokenStream::new(),
  }
}

fn print_fields(
  fmt: Option<&FmtString>,
  fields: &Fields<Field>,
  transparent: bool,
) -> TokenStream {
  match (fmt, transparent) {
    (Some(_), true) => todo!("handle conflicting instructions"),

    (None, true) => {
      let mut fields = filter_fields(fields.iter().enumerate());
      match fields.next() {
        None => todo!(),
        Some(_) if fields.next().is_some() => todo!(),
        Some((idx, field)) => {
          let Field {
            ident,
            ty,
            children,
            skip,
            fmt,
          } = field;

          let fmt = transpose_ref(fmt);

          let fmt = match fmt {
            Ok(fmt) => fmt,
            Err(err) => {
              return err
                .borrow_mut()
                .take()
                .expect("missing errors")
                .write_errors()
            }
          };

          let span = ident.as_ref().map_or_else(|| ty.span(), Spanned::span);
          let ident = ident.clone().unwrap_or_else(|| format_ident!("_{idx}"));

          if *skip {
            Error::custom(
              "transparent newtypes that derive HirPretty should not skip",
            )
            .with_span(&span)
            .write_errors()
          } else if children.is_some() {
            Error::custom("transparent newtypes that derive HirPretty should not have children")
              .with_span(&span)
              .write_errors()
          } else if let Some(fmt) = fmt {
            fmt.print(&ident)
          } else {
            quote! { HirPretty::pretty_print(#ident, ctx) }
          }
        }
      }
    }

    (None, false) => {
      let fields = filter_fields(fields.iter().enumerate());
      let fields = fields.map(print_field);
      quote! { PrettyOutput::default() #(#fields)* }
    }

    (Some(FmtString { text, parts }), false) => {
      let mut format_string = String::new();
      let mut format_args = Vec::new();
      let mut formatted_idents = Vec::new();
      for part in parts {
        match part {
          FmtStringPart::Lit(lit) => format_string += &text[lit.clone()],
          FmtStringPart::NewLine => format_string += "\n",
          FmtStringPart::Fmt(fmt, modifier) => {
            format_string += "{}";

            let substr = text[fmt.clone()].trim();

            let (ident, is_named) = match substr.parse::<usize>() {
              Ok(n) => (format_ident!("_{n}"), false),
              Err(_) => (format_ident!("{substr}"), true),
            };

            formatted_idents.push(ident);
            let ident = formatted_idents.last().unwrap();

            let field = if is_named {
              fields
                .fields
                .iter()
                .enumerate()
                .find(|(_, field)| field.ident.as_ref().unwrap() == ident)
            } else {
              let idx = substr.parse().unwrap();
              fields.fields.get(idx).map(|field| (idx, field))
            };

            let tokens = match field {
              // compile error because the ident will not be found
              None => ident.to_token_stream(),

              Some((_,  Field { ident:_, ty: _, children: None, skip: _, fmt })) => {
                let fmt = transpose_ref(fmt);

                match fmt {
                  Err(err) => err.borrow_mut().take().unwrap().write_errors(),

                  Ok(fmt) => match modifier {
                    FmtStringModifier::None => match fmt {
                      None => quote! {
                        HirPretty::pretty_print(#ident, ctx).format()
                      },
                      Some(fmt) => {
                        let formatted = fmt.print(ident);
                        quote! { PrettyOutput::into_simple_string(#formatted) }
                      }
                    },
                    FmtStringModifier::Display => quote! { #ident },
                    FmtStringModifier::DisplayOption => quote! {
                    {
                      use std::fmt::{Display, Formatter, Result};

                      struct Adapter<'a, T>(&'a Option<T>);

                      impl<T: Display> Display for Adapter<'_, T> {
                        fn fmt(&self, f: &mut Formatter<'_>) -> Result {
                          match self.0 {
                            Some(t) => t.fmt(f),
                            None => Ok(()),
                          }
                        }
                      }

                      Adapter(#ident)
                    }
                  },
                  },
                }
              }
              Some((_,field @ Field {
                children: Some(_),
                ..
              })) => {
                Error::custom(format!("`{ident}` is in the format string but it is marked with 'children'")).with_span(field).write_errors()
              }
            };

            format_args.push(tokens);
          }
        }
      }
      assert!(
        !format_string.is_empty(),
        "constructed empty fmt string from \"{text}\""
      );

      let children = fields.fields.iter().enumerate();
      let children = filter_fields(children);
      let children =
        children.filter_map(|(idx, field)| match field.ident.as_ref() {
          Some(ident) if formatted_idents.contains(ident) => None,
          None if formatted_idents.contains(&format_ident!("_{idx}")) => None,
          _ => Some(print_field((idx, field))),
        });

      quote! {
        PrettyOutput::new(format!(#format_string, #(#format_args),*))

        #(#children)*
      }
    }
  }
}

fn print_field((idx, field): (usize, &Field)) -> TokenStream {
  let Field {
    ident,
    ty: _,
    children,
    skip: _,
    fmt,
  } = field;

  let fmt = transpose_ref(fmt);

  match fmt {
    Err(err) => err.borrow_mut().take().unwrap().write_errors(),
    Ok(fmt) => {
      let ident = ident.clone().unwrap_or_else(|| format_ident!("_{idx}"));

      if let Some(ChildrenSettings { newline }) = children {
        quote! { .add_children(#newline, #ident.into_iter(), ctx) }
      } else if let Some(fmt) = fmt {
        let formatted = fmt.print(&ident);
        quote! { .add_child(false, #formatted, ctx) }
      } else {
        quote! { .add_child(false, #ident, ctx) }
      }
    }
  }
}

impl FieldFmt {
  fn print(&self, ident: &Ident) -> TokenStream {
    let Self { func, args } = self;
    quote! { (#func)(#ident, ctx, #args) }
  }
}

fn filter_fields<'f>(
  iter: impl Iterator<Item = (usize, &'f Field)>,
) -> impl Iterator<Item = (usize, &'f Field)> {
  iter
    .filter(|(_, field)| !field.skip)
    .filter(|(_, field)| !matches!(&field.ident, Some(ident) if ident == "id"))
}
