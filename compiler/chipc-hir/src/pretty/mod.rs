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
    let children = iter
      .into_iter()
      .flat_map(|item| -> Box<dyn Iterator<Item = _>> {
        let mut output = PrettyOutput {
          newline,
          ..item.pretty_print(ctx)
        };
        output.source = match output.source {
          Source::Tree { prefix, children } if prefix.is_empty() => {
            return Box::new(children.into_iter());
          }
          source => source,
        };
        Box::new(iter::once(output))
      })
      .collect();

    self.source = match self.source {
      Source::Leaf(prefix) => Source::Tree { prefix, children },
      Source::Tree {
        prefix,
        children: mut original_children,
      } => {
        original_children.extend(children);
        Source::Tree {
          prefix,
          children: original_children,
        }
      }
      Source::Dummy => Source::Tree {
        prefix: String::new(),
        children,
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
      Source::Leaf(text) if !text.is_empty() => {
        match formatted.last_char() {
          Some(c) if !c.is_whitespace() => formatted.0.push(" "),
          _ => (),
        }
        formatted.0.push(text);
      }
      Source::Leaf(_) => (),
      Source::Tree { prefix, children } => {
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
          if child.needs_leading_indentation() {
            formatted.indent(indentation);
          }
          child.format_impl(formatted, indentation);
          previous_newline = child.newline;
          if formatted.trailing_new_lines() == 0 {
            formatted.0.push("\n");
          }
        }
        for child in children {
          if child.newline
            && previous_newline
            && formatted.trailing_new_lines() < 2
          {
            formatted.0.push("\n");
          }
          if child.needs_leading_indentation() {
            formatted.indent(indentation);
          }
          previous_newline = child.newline;
          child.format_impl(formatted, indentation);
          if formatted.trailing_new_lines() == 0 {
            formatted.0.push("\n");
          }
        }
      }
      Source::Dummy => (),
    }
  }

  fn needs_leading_indentation(&self) -> bool {
    match &self.source {
      Source::Leaf(text) => !text.is_empty(),
      Source::Tree { prefix, .. } => !prefix.is_empty(),
      Source::Dummy => false,
    }
  }
}

pub struct Span;

enum Source {
  Leaf(String),
  Tree {
    prefix: String,
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

  fn trailing_new_lines(&self) -> usize {
    let mut newlines = 0;

    'outer: for s in self.0.iter().rev() {
      for c in s.chars().rev() {
        match c {
          '\n' => newlines += 1,
          '\r' => (),
          _ => break 'outer,
        }
      }
    }

    newlines
  }
}
