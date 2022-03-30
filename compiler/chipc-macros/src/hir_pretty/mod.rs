use darling::{
  ast::{Data, Fields},
  Error, FromDeriveInput, FromField, FromVariant,
};
use proc_macro2::Span;
use std::{cell::RefCell, ops::Range, result::Result as StdResult};
use syn::{
  punctuated::Punctuated, spanned::Spanned, Expr, Generics, Ident, Token, Type,
};

mod parsing;
mod printing;

#[derive(FromDeriveInput)]
#[darling(attributes(pretty))]
pub struct HirPretty {
  ident: Ident,
  generics: Generics,
  data: Data<Variant, Field>,
  #[darling(default)]
  fmt: Option<FmtString>,
  #[darling(default)]
  transparent: bool,
}

#[derive(FromVariant)]
#[darling(attributes(pretty))]
struct Variant {
  ident: Ident,
  fields: Fields<Field>,
  #[darling(default)]
  fmt: Option<FmtString>,
  #[darling(default)]
  transparent: bool,
}

#[derive(FromField)]
#[darling(attributes(pretty), and_then = "Self::post_process")]
struct Field {
  ident: Option<Ident>,
  ty: Type,
  #[darling(default)]
  children: Option<ChildrenSettings>,
  #[darling(default)]
  skip: bool,
  #[darling(default, map = "Self::convert_result")]
  fmt: Option<StdResult<FieldFmt, RefCell<Option<Error>>>>,
}

struct ChildrenSettings {
  newline: bool,
}

#[derive(Eq, PartialEq)]
struct FmtString {
  text: String,
  parts: Vec<FmtStringPart>,
}

#[derive(Eq, PartialEq)]
enum FmtStringPart {
  Lit(Range<usize>),
  NewLine,
  Fmt(Range<usize>, FmtStringModifier),
}

#[derive(Eq, PartialEq)]
enum FmtStringModifier {
  None,
  Display,
  DisplayOption,
}

struct FieldFmt {
  func: Expr,
  args: Punctuated<Expr, Token![,]>,
}

impl Spanned for Field {
  fn span(&self) -> Span {
    self
      .ident
      .as_ref()
      .map_or_else(|| self.ty.span(), |ident| ident.span())
  }
}

fn transpose_ref<T, E>(
  opt: &Option<StdResult<T, E>>,
) -> StdResult<Option<&T>, &E> {
  opt.as_ref().map(|res| res.as_ref()).transpose()
}
