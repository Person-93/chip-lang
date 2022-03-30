use crate::HirContext;
use std::{
  fmt::{self, Display, Formatter},
  iter,
};

mod impls;

pub trait HirPretty<'hir> {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput;

  fn as_simple_string(&self, ctx: &HirContext<'hir>) -> String {
    self.pretty_print(ctx).into_simple_string()
  }
}

#[derive(Default)]
pub struct PrettyOutput {
  #[allow(dead_code)]
  span: Option<Span>,
  source: Source,
  newline: bool,
}

impl PrettyOutput {
  pub fn new(source: String) -> Self {
    Self {
      span: None,
      source: Source::Leaf(source),
      newline: false,
    }
  }

  pub fn with_span(span: Span, source: String) -> Self {
    Self {
      span: Some(span),
      source: Source::Leaf(source),
      newline: false,
    }
  }

  pub fn add_child<'hir>(
    self,
    newline: bool,
    item: impl HirPretty<'hir>,
    ctx: &HirContext<'hir>,
  ) -> Self {
    self.add_children(newline, iter::once(item), ctx)
  }

  pub fn add_children<'hir, T: HirPretty<'hir>>(
    mut self,
    newline: bool,
    iter: impl IntoIterator<Item = T>,
    ctx: &HirContext<'hir>,
  ) -> Self {
    self.source = match self.source {
      Source::Leaf(prefix) => Source::Tree {
        prefix,
        newline,
        children: iter
          .into_iter()
          .map(|item| PrettyOutput {
            newline,
            ..item.pretty_print(ctx)
          })
          .collect(),
      },
      Source::Tree {
        prefix,
        newline: original_newline,
        mut children,
      } => {
        children.extend(iter.into_iter().map(|item| PrettyOutput {
          newline,
          ..item.pretty_print(ctx)
        }));

        Source::Tree {
          prefix,
          newline: original_newline,
          children,
        }
      }
      Source::Dummy => Source::Tree {
        prefix: String::new(),
        newline,
        children: iter
          .into_iter()
          .map(|item| item.pretty_print(ctx))
          .collect(),
      },
    };
    self
  }

  pub fn into_simple_string(self) -> String {
    match self.source {
      Source::Leaf(s) | Source::Tree { prefix: s, .. } => s,
      Source::Dummy => String::new(),
    }
  }

  pub fn format(&self) -> Formatted {
    let mut f = Formatted::default();
    self.format_impl(&mut f, 0);
    f
  }

  fn format_impl<'f>(&'f self, formatted: &mut Formatted<'f>, indentation: u8) {
    match &self.source {
      Source::Leaf(text) => {
        match formatted.last_char() {
          Some(c) if !c.is_whitespace() => formatted.0.push(" "),
          _ => (),
        }
        formatted.0.push(text);
      }
      Source::Tree {
        prefix,
        newline: _,
        children,
      } => {
        let indentation = if prefix.is_empty() {
          indentation
        } else {
          match formatted.last_char() {
            Some('\n') => formatted.indent(indentation),
            Some(c) if !c.is_whitespace() => formatted.0.push(" "),
            _ => (),
          }

          formatted.0.push(prefix);
          formatted.0.push("\n");

          indentation + 1
        };

        let mut children = children.iter();
        let mut previous_newline = false;
        if let Some(child) = children.next() {
          child.format_impl(formatted, indentation);
          previous_newline = child.newline;
        }
        for child in children {
          if child.newline && previous_newline {
            formatted.0.push("\n");
          }
          previous_newline = child.newline;
          child.format_impl(formatted, indentation);
          formatted.0.push("\n");
        }
      }
      Source::Dummy => (),
    }
  }
}

pub struct Span;

enum Source {
  Leaf(String),
  Tree {
    prefix: String,
    newline: bool,
    children: Vec<PrettyOutput>,
  },
  Dummy,
}

impl Default for Source {
  fn default() -> Self {
    Self::Dummy
  }
}

#[derive(Debug, Default)]
pub struct Formatted<'f>(Vec<&'f str>);

impl Display for Formatted<'_> {
  fn fmt(&self, f: &mut Formatter<'_>) -> fmt::Result {
    for s in &self.0 {
      Display::fmt(s, f)?;
    }
    Ok(())
  }
}

impl Formatted<'_> {
  fn indent(&mut self, indentation: u8) {
    for _ in 0..indentation {
      self.0.push("  ");
    }
  }

  fn last_char(&self) -> Option<char> {
    self.0.last().and_then(|s| s.chars().next_back())
  }
}
