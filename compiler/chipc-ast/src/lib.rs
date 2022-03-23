#![forbid(unsafe_code)]

pub use self::nodes::*;
use tree_sitter::{Parser, Tree};

#[macro_use]
mod macros;
mod nodes;

pub struct Ast(Tree);

impl Ast {
  pub fn parse(source: &str) -> Self {
    let mut parser = Parser::new();
    parser
      .set_language(tree_sitter_chip::language())
      .expect("failed loading grammar");
    Self::new(parser.parse(source, None).expect("failed parsing source"))
  }

  pub fn new(tree: Tree) -> Self {
    Self(tree)
  }

  pub fn root(&self) -> File {
    File::new(self.0.root_node()).expect("failed extracting root AST node")
  }
}

mod private {
  pub trait Sealed {}
}
