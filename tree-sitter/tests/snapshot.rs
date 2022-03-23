use chip_snapshot_tests::{assert_snapshot, run_cases};
use std::fmt::{self, Write};
use tree_sitter::{Parser, Point, Tree, TreeCursor};

fn main() {
  let mut parser = Parser::new();
  parser
    .set_language(tree_sitter_chip::language())
    .expect("assign language to parser");

  run_cases(|source| {
    parser.reset();
    let tree = parser
      .parse(&source, None)
      .expect("parse snapshot test case");
    assert_snapshot!(print(&tree, &source).trim());
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
    let field_name = cursor.field_name();
    let Point { row, column } = node.start_position();
    let Point {
      row: end_row,
      column: end_column,
    } = node.end_position();

    for _ in 0..indentation {
      write!(self, "  ")?;
    }
    if node.is_missing() {
      write!(self, "MISSING ")?;
    }
    if let Some(field_name) = field_name {
      write!(self, "{field_name}:")?;
    }
    write!(self, "{kind}")?;
    write!(self, " @ {row}:{column}..{end_row}:{end_column}")?;

    if (node.is_named() || field_name.is_some()) && node.child_count() == 0 {
      let value = node.utf8_text(source.as_bytes()).unwrap();
      if kind != value {
        write!(self, "\t{}", node.utf8_text(source.as_bytes()).unwrap())?;
      }
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
}
