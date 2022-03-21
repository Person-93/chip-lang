pub use grammar::*;

#[path = "../grammar/bindings/rust/lib.rs"]
mod grammar;

#[cfg(test)]
mod tests {
  use crate::grammar;
  use insta::{assert_snapshot, glob};
  use std::{
    fmt::{self, Write},
    fs,
  };
  use tree_sitter::{Parser, Point, Tree, TreeCursor};

  #[test]
  fn snapshot() {
    let mut parser = Parser::new();
    parser
      .set_language(grammar::language())
      .expect("assign language to parser");

    glob!("cases/*.chip", |path| {
      parser.reset();
      let source = fs::read_to_string(path).expect("read snapshot test case");
      let tree = parser
        .parse(&source, None)
        .expect("parse snapshot test case");
      assert_snapshot!(print(&tree, &source));
    });
  }

  pub fn print(tree: &Tree, source: &str) -> String {
    let mut output = String::new();
    let mut cursor = tree.walk();
    output
      .print_node(&mut cursor, source, 0)
      .expect("debug format tree");
    output
  }

  impl<T: Write> NodePrinter for T {}

  trait NodePrinter: Write {
    fn print_node(
      &mut self,
      cursor: &mut TreeCursor,
      source: &str,
      indentation: u8,
    ) -> fmt::Result {
      let node = cursor.node();
      let kind = node.kind();
      let Point { row, column } = node.start_position();
      let Point {
        row: end_row,
        column: end_column,
      } = node.end_position();

      self.indent(indentation)?;
      write!(self, "{kind} @ {row}:{column}..{end_row}:{end_column}")?;
      if node.is_named() && node.child_count() == 0 {
        write!(self, "\t{}", node.utf8_text(source.as_bytes()).unwrap())?;
      }
      writeln!(self)?;

      if cursor.goto_first_child() {
        self.print_node(&mut cursor.clone(), source, indentation + 1)?;
        while cursor.goto_next_sibling() {
          self.print_node(&mut cursor.clone(), source, indentation + 1)?;
        }
      }

      Ok(())
    }

    fn indent(&mut self, indentation: u8) -> fmt::Result {
      for _ in 0..indentation {
        write!(self, "  ")?;
      }
      Ok(())
    }
  }
}
