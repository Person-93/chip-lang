use chip_snapshot_tests::{assert_snapshot, run_cases};
use chipc_ast::*;
use std::fmt::{Result, Write};

#[chip_test_harness::nextest_main]
fn main() {
  run_cases(|source| {
    let ast = Ast::parse(&source);
    let mut printer = AstPrinter(String::new(), &source);
    printer.print_ast(&ast).unwrap();
    assert_snapshot!(printer.0.trim());
  });
}

struct AstPrinter<'source, T: Write>(T, &'source str);

impl<T: Write> AstPrinter<'_, T> {
  fn print_ast(&mut self, ast: &Ast) -> Result {
    self.print_file(ast.root(), 0)
  }

  fn print_file(&mut self, file: File<'_>, indentation: u8) -> Result {
    self.indent(indentation)?;
    writeln!(self.0, "file")?;
    let indentation = indentation + 1;
    self.print_attrs(file.attributes(), indentation)?;
    self.print_items(file.items(), indentation)?;
    Ok(())
  }

  fn print_attrs(&mut self, attrs: AttrIter<'_>, indentation: u8) -> Result {
    for attr in attrs {
      self.print_attr(attr, indentation)?;
    }
    Ok(())
  }

  fn print_items(&mut self, items: ItemIter<'_>, indentation: u8) -> Result {
    for item in items {
      match item {
        Item::Function(function) => self.print_function(function, indentation),
        Item::ExternBlock(block) => self.print_extern_block(block, indentation),
      }?;
    }
    Ok(())
  }

  fn print_attr(&mut self, attr: Attribute<'_>, indentation: u8) -> Result {
    self.indent(indentation)?;
    self.append_attr(attr, "attr", indentation)
  }

  fn append_attr(
    &mut self,
    attr: Attribute<'_>,
    name: &str,
    indentation: u8,
  ) -> Result {
    writeln!(self.0, "{name}")?;
    let indentation = indentation + 1;
    self.print_path(attr.path(), indentation)?;
    if let Some(data) = attr.data() {
      self.print_attr_data(data, indentation)?;
    }
    Ok(())
  }

  fn print_attr_data(
    &mut self,
    attr_data: AttrData<'_>,
    indentation: u8,
  ) -> Result {
    match attr_data {
      AttrData::Assign(assign) => {
        self.print_attr_data_value(assign, "assign", indentation)?;
      }
      AttrData::Call(call) => {
        for arg in call {
          self.print_attr_data_value(arg, "arg", indentation)?;
        }
      }
    }
    Ok(())
  }

  fn print_attr_data_value(
    &mut self,
    value: AttrDataValue<'_>,
    name: &str,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    match value {
      AttrDataValue::Literal(literal) => {
        write!(self.0, "{name}: ")?;
        self.append_literal(literal, indentation)
      }
      AttrDataValue::Nested(attr) => self.append_attr(attr, name, indentation),
    }
  }

  fn print_function(
    &mut self,
    function: Function<'_>,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    writeln!(self.0, "function")?;
    let indentation = indentation + 1;

    self.print_identifier(function.name(), "name", indentation)?;

    self.print_attrs(function.attributes(), indentation)?;

    if let Some(vis) = function.vis() {
      self.print_visibility(vis, indentation)?;
    }

    if let Some(modifier) = function.modifier() {
      self.print_function_modifier(modifier, indentation)?;
    }

    self.print_inputs(function.inputs(), indentation)?;

    if let Some(output) = function.output() {
      self.print_type(output, "output", indentation)?;
    }

    self.print_expr(function.body(), "body", indentation)?;

    Ok(())
  }

  fn print_inputs(&mut self, inputs: InputIter<'_>, indentation: u8) -> Result {
    for input in inputs {
      self.print_annotated(input, "input", indentation)?;
    }
    Ok(())
  }

  fn print_visibility(
    &mut self,
    visibility: Visibility<'_>,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    write!(
      self.0,
      "vis: {}",
      match visibility.restriction() {
        Some(VisibilityRestriction::Selph(_)) => "self",
        Some(VisibilityRestriction::Super(_)) => "super",
        Some(VisibilityRestriction::Package(_)) => "package",
        None => "unrestricted",
      }
    )
  }

  fn print_function_modifier(
    &mut self,
    modifier: FunctionModifier<'_>,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    match modifier.kind() {
      FunctionModifierKind::Const(_) => writeln!(self.0, "modifier: const"),
      FunctionModifierKind::Unsafe(_) => writeln!(self.0, "modifier: unsafe"),
      FunctionModifierKind::Extern(extern_) => {
        write!(self.0, "modifier: extern")?;
        if let Some(abi) = extern_.abi() {
          write!(self.0, ": ")?;
          self.append_str_literal(abi)?;
        }
        writeln!(self.0)
      }
    }
  }

  fn print_extern_block(
    &mut self,
    extern_block: ExternBlock<'_>,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    writeln!(self.0, "extern block")?;
    let indentation = indentation + 1;
    for item in extern_block.items() {
      match item {
        ExternItem::Function(function) => {
          self.print_extern_function(function, indentation)
        }
      }?;
    }
    Ok(())
  }

  fn print_extern_function(
    &mut self,
    function: ExternFunction<'_>,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    writeln!(self.0, "extern function")?;
    let indentation = indentation + 1;

    self.print_identifier(function.name(), "name", indentation)?;

    if let Some(vis) = function.vis() {
      self.print_visibility(vis, indentation)?;
    }

    self.print_inputs(function.inputs(), indentation)?;

    if let Some(output) = function.output() {
      self.print_type(output, "output", indentation)?;
    }

    Ok(())
  }

  fn print_path(&mut self, path: Path<'_>, mut indentation: u8) -> Result {
    use PathStart::*;

    let mut segments = path.segments().peekable();
    let empty = segments.peek().is_none();

    self.indent(indentation)?;
    if !empty {
      writeln!(self.0, "path")?;
      indentation += 1;
    }

    match (path.start(), empty) {
      (Segment(first), true) if first.rooted.is_some() => {
        self.print_identifier(first.segment, "path: rooted", 0)?;
      }
      (Segment(first), false) if first.rooted.is_some() => {
        self.print_identifier(first.segment, "rooted", indentation)?;
      }
      (Segment(first), true) => {
        self.print_identifier(first.segment, "path", 0)?;
      }
      (Segment(first), false) => {
        self.print_identifier(first.segment, "first_segment", indentation)?;
      }
      (Package(_), true) => writeln!(self.0, "path: package")?,
      (Package(_), false) => {
        self.indent(indentation)?;
        writeln!(self.0, "segment: package")?;
      }
      (Selph(_), true) => writeln!(self.0, "path: Self")?,
      (Selph(_), false) => {
        self.indent(indentation)?;
        writeln!(self.0, "start: Self")?;
      }
      (Super(iter), _) => {
        let count = iter.count();
        assert!(count > 0, "SuperIter with no super");

        if empty {
          write!(self.0, "path: ")?;
        } else {
          self.indent(indentation)?;
        }
        writeln!(self.0, "super({count})")?;
      }
    }

    for segment in segments {
      self.print_identifier(segment, "segment", indentation)?;
    }

    Ok(())
  }

  fn append_literal(
    &mut self,
    literal: Literal<'_>,
    indentation: u8,
  ) -> Result {
    match literal {
      Literal::Str(lit) => self.append_str_literal(lit)?,
      Literal::Bool(lit) => {
        writeln!(self.0, "bool_lit: {}", lit.value())?;
      }
      Literal::Num(lit) => {
        let prefix = lit.prefix();
        let digits = lit.digits();
        let float_part = lit.float_part();
        let suffix = lit.suffix();
        if prefix.is_none() && float_part.is_none() && suffix.is_none() {
          self.print_anon(digits, "num_lit", 0)?;
        } else {
          writeln!(self.0, "num_lit")?;

          if let Some(prefix) = prefix {
            self.print_anon(prefix, "prefix", indentation)?;
          }

          self.print_anon(digits, "digits", indentation)?;

          if let Some(float_part) = float_part {
            self.print_anon(float_part, "float_part", indentation)?;
          }

          if let Some(suffix) = suffix {
            self.print_anon(suffix, "suffix", indentation)?;
          }
        }
      }
    }
    Ok(())
  }

  fn append_str_literal(&mut self, literal: StrLit<'_>) -> Result {
    writeln!(self.0, "str_lit: \"{}\"", literal.value(self.1))
  }

  fn print_annotated(
    &mut self,
    annotated: Annotated<'_>,
    name: &str,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    writeln!(
      self.0,
      "{name}: {}",
      annotated
        .ident()
        .node()
        .utf8_text(self.1.as_bytes())
        .unwrap()
    )?;
    self.print_type(annotated.ty(), "type", indentation + 1)?;
    Ok(())
  }

  fn print_type(
    &mut self,
    ty: Type<'_>,
    name: &str,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    write!(self.0, "{name}: ")?;

    match ty {
      Type::Basic(basic) => self.print_basic_type(basic, indentation)?,
      Type::Unit(_) => writeln!(self.0, "unit")?,
      Type::Tuple(tuple) => {
        writeln!(self.0, "tuple")?;
        for element in tuple.elements() {
          self.print_type(element, "element", indentation + 1)?;
        }
      }
      Type::Function(function) => {
        writeln!(self.0, "function")?;
        let indentation = indentation + 1;

        if let Some(modifier) = function.modifier() {
          self.print_function_modifier(modifier, indentation)?;
        }

        for input in function.inputs() {
          self.print_type(input, "input", indentation)?;
        }

        if let Some(output) = function.output() {
          self.print_type(output, "output", indentation)?;
        }
      }
      Type::SelfType(_) => writeln!(self.0, "Self")?,
    }
    Ok(())
  }

  fn print_basic_type(
    &mut self,
    basic: BasicType<'_>,
    indentation: u8,
  ) -> Result {
    writeln!(self.0, "basic")?;
    let indentation = indentation + 1;
    self.print_path(basic.path(), indentation)?;
    self.print_generic_args(basic.generics(), indentation)?;
    Ok(())
  }

  fn print_generic_args(
    &mut self,
    args: GenericArgIter<'_>,
    indentation: u8,
  ) -> Result {
    for arg in args {
      self.indent(indentation)?;
      match arg {
        GenericArg::Infer(_) => writeln!(self.0, "arg: infer"),
        GenericArg::Expr(expr) => self.print_expr(expr, "arg", indentation),
      }?;
    }
    Ok(())
  }

  fn print_expr(
    &mut self,
    expr: Expr<'_>,
    name: &str,
    indentation: u8,
  ) -> Result {
    match expr {
      Expr::Literal(literal) => {
        self.indent(indentation)?;
        write!(self.0, "{name}: ")?;
        self.append_literal(literal, indentation + 1)?;
      }
      Expr::TupleExpression(tuple) => {
        self.indent(indentation)?;
        writeln!(self.0, "{name}: tuple")?;

        for element in tuple.elements() {
          self.print_expr(element, "element", indentation + 1)?;
        }
      }
      Expr::CodeBlock(block) => {
        self.indent(indentation)?;
        writeln!(self.0, "{name}: codeblock")?;
        let indentation = indentation + 1;

        for statement in block.statements() {
          match statement.kind() {
            Some(StatementKind::LetBinding(binding)) => {
              self.print_let_binding(binding, "statement", indentation)?;
            }
            Some(StatementKind::Expr(expr)) => {
              self.print_expr(expr, "statement", indentation)?;
            }
            None => {
              self.indent(indentation)?;
              writeln!(self.0, "statement: empty")?;
            }
          }
        }

        if let Some(trailing) = block.trailing() {
          self.print_expr(trailing, "trailing", indentation)?;
        }
      }
      Expr::BasicType(basic) => {
        self.indent(indentation)?;
        writeln!(self.0, "{name}")?;

        self.print_basic_type(basic, indentation)?;
      }
      Expr::UnitType(_) => {
        self.indent(indentation)?;
        writeln!(self.0, "{name}: unit")?;
      }
    }
    Ok(())
  }

  fn print_let_binding(
    &mut self,
    binding: LetBinding<'_>,
    name: &str,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    writeln!(self.0, "{name}: let_binding")?;
    let indentation = indentation + 1;

    self.print_identifier(binding.identifier(), "ident", indentation)?;

    if let Some(ty) = binding.ty() {
      self.print_type(ty, "type", indentation)?;
    }

    self.print_expr(binding.value(), "value", indentation)?;

    Ok(())
  }

  fn print_identifier(
    &mut self,
    identifier: Identifier<'_>,
    name: &str,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    writeln!(self.0, "{name}: {}", &self.1[identifier.byte_range()])
  }

  fn print_anon(
    &mut self,
    anon: AnonNode<'_>,
    name: &str,
    indentation: u8,
  ) -> Result {
    self.indent(indentation)?;
    writeln!(self.0, "{name}: {}", anon.value(self.1))
  }

  fn indent(&mut self, indentation: u8) -> Result {
    for _ in 0..indentation {
      write!(self.0, "  ")?;
    }
    Ok(())
  }
}
