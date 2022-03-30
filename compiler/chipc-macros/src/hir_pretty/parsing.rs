use super::{
  ChildrenSettings, Field, FieldFmt, FmtString, FmtStringModifier,
  FmtStringPart,
};
use darling::{Error, FromMeta, Result};
use std::{cell::RefCell, result::Result as StdResult, str::FromStr};
use syn::{punctuated::Punctuated, LitStr, Meta, MetaList, NestedMeta};

impl Field {
  pub(super) fn post_process(self) -> Result<Self> {
    let Self {
      ident: _,
      ty: _,
      children,
      skip,
      fmt,
    } = &self;
    let mut present = Vec::new();
    if children.is_some() {
      present.push("children");
    }
    if *skip {
      present.push("skip");
    }
    if fmt.is_some() {
      present.push("fmt")
    }

    match present.len() {
      0 | 1 => Ok(self),
      _ => Err(Error::custom(
        "expected only one of the following: children, skip, fmt",
      )),
    }
  }

  pub(super) fn convert_result(
    opt_res: Option<Result<FieldFmt>>,
  ) -> Option<StdResult<FieldFmt, RefCell<Option<Error>>>> {
    opt_res.map(|res| res.map_err(|err| RefCell::new(Some(err))))
  }
}

impl FromMeta for ChildrenSettings {
  fn from_word() -> Result<Self> {
    Ok(Self { newline: false })
  }

  fn from_list(items: &[NestedMeta]) -> Result<Self> {
    match items {
      [] => Ok(Self { newline: false }),
      [item] => {
        bool::from_nested_meta(item).map(|newline| ChildrenSettings { newline })
      }
      _ => Err(Error::too_many_items(1)),
    }
  }
}

impl FromStr for FmtStringModifier {
  type Err = Error;

  fn from_str(s: &str) -> Result<Self> {
    match s {
      "" => Ok(FmtStringModifier::None),
      "d" => Ok(FmtStringModifier::Display),
      "d?" => Ok(FmtStringModifier::DisplayOption),
      s => Err(Error::custom(format!(
        "invalid format string modifier '{s}'"
      ))),
    }
  }
}

impl Default for FmtStringModifier {
  fn default() -> Self {
    Self::None
  }
}

impl FromMeta for FmtString {
  fn from_string(text: &str) -> Result<Self> {
    let mut parts = Vec::new();
    let mut chars = text.char_indices();

    {
      let mut chars = chars.by_ref().peekable();
      let mut start = 0;
      while let Some((idx, current)) = chars.next() {
        match current {
          '{' if matches!(chars.peek(), Some((_, '{'))) => {
            // eat '{{'
            chars.next();
          }
          '{' => {
            // push previous part
            {
              let range = start..idx;
              if !range.is_empty() {
                parts.push(FmtStringPart::Lit(range));
                start = idx;
              }
              start += 1;
            }

            // advance to closing brace
            let (end, modifier, next_start) = loop {
              match chars.next() {
                None => {
                  return Err(Error::custom(format!(
                    "missing closing brace in fmt string: {text}"
                  )))
                }
                Some((idx, ':')) => {
                  let end = loop {
                    match chars.next() {
                      None => {
                        return Err(Error::custom(format!(
                          "missing closing brace in fmt string: {text}"
                        )))
                      }
                      Some((idx, '}')) => break idx,
                      Some(_) => (),
                    }
                  };
                  let modifier = idx + 1..end;
                  let modifier = text[modifier].trim();
                  break (idx, modifier, end + 1);
                }
                Some((idx, '}')) => {
                  break (idx, "", idx + 1);
                }
                Some(_) => (),
              }
            };

            parts.push(FmtStringPart::Fmt(start..end, modifier.parse()?));
            start = next_start;
          }
          '}' if matches!(chars.peek(), Some((_, '}'))) => {
            // eat '}}'
            chars.next();
          }
          '}' => {
            return Err(Error::custom(format!(
              "stray '}}' in format string: {text}"
            )));
          }
          '\n' => {
            {
              let range = start..idx;
              if !range.is_empty() {
                parts.push(FmtStringPart::Lit(range));

                start = idx + 1;
              }
            }
            parts.push(FmtStringPart::NewLine);
          }
          _ => (),
        }
      }
      let range = start..text.len();
      if !range.is_empty() {
        parts.push(FmtStringPart::Lit(range));
      }
    }

    Ok(FmtString {
      text: String::from(text),
      parts,
    })
  }
}

impl FromMeta for FieldFmt {
  fn from_list(items: &[NestedMeta]) -> Result<Self> {
    let err =
      || Error::custom("expected `fmt(with(\"<func>\", \"<args...>\"))`");

    match items {
      [] => Err(Error::too_few_items(1)),

      [_, _, ..] => Err(Error::too_many_items(1)),

      [NestedMeta::Lit(_)]
      | [NestedMeta::Meta(Meta::Path(_))]
      | [NestedMeta::Meta(Meta::NameValue(_))] => Err(err()),

      [NestedMeta::Meta(Meta::List(MetaList {
        path,
        paren_token,
        nested: args,
      }))] => {
        if !path.is_ident("with") {
          return Err(err().with_span(path));
        }

        let span = &paren_token.span;
        let err = || err().with_span(span);

        let mut iter = args.iter().fuse();
        let func = iter.next().ok_or_else(err)?;
        let args = iter.next().ok_or_else(err)?;
        if iter.next().is_some() {
          return Err(Error::too_many_items(2).with_span(span));
        }

        Ok(Self {
          func: LitStr::from_nested_meta(func)?.parse()?,
          args: LitStr::from_nested_meta(args)?
            .parse_with(Punctuated::parse_terminated)?,
        })
      }
    }
  }
}
