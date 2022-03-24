#![forbid(unsafe_code)]

pub use self::nodes::*;
use tree_sitter::{Parser, Tree};

#[macro_use]
mod macros;
mod nodes;

pub struct Ast<'ast>(Tree, &'ast str);

impl<'ast> Ast<'ast> {
  pub fn parse(source: &'ast str) -> Self {
    let mut parser = Parser::new();
    parser
      .set_language(tree_sitter_chip::language())
      .expect("failed loading grammar");
    Self::new(
      parser.parse(source, None).expect("failed parsing source"),
      source,
    )
  }

  pub fn new(tree: Tree, source: &'ast str) -> Self {
    Self(tree, source)
  }

  pub fn root(&self) -> File {
    File::new(self.0.root_node()).expect("failed extracting root AST node")
  }

  pub fn source(&self) -> &'ast str {
    self.1
  }
}

mod private {
  pub trait Sealed {}
}
