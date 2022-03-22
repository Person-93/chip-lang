use std::str;
use tree_sitter::{Node, Parser, Point, Tree, TreeCursor};

#[macro_use]
mod macros;

pub struct Ast(Tree);

impl Ast {
  pub fn parse(source: &str) -> Self {
    let mut parser = Parser::new();
    parser.set_language(crate::grammar::language()).unwrap();
    Self::new(parser.parse(source, None).unwrap())
  }

  pub fn new(tree: Tree) -> Self {
    Self(tree)
  }

  pub fn root(&self) -> File {
    File::new(self.0.root_node()).unwrap()
  }
}

ast_nodes! {
  pub struct File ""
  pub enum Item {
    Function(Function),
    ExternBlock(ExternBlock),
  }
  pub struct Function "function"
  pub struct FunctionModifier "function_modifier"
  pub enum FunctionModifierKind {
    Const(KwConst),
    Unsafe(KwUnsafe),
    Extern(Extern),
  }
  pub struct Extern "extern"
  pub struct ExternBlock "extern_block"
  pub enum ExternItem {
    Function(ExternFunction),
  }
  pub struct ExternFunction "extern_function"
  pub struct Visibility "visibility_modifier"
  pub struct Path "path"
  pub struct PathSegment "segment"
  pub struct Attribute "attr"
  pub enum AttrData {
    Assign(AttrDataValue),
    Call(AttrArgIter),
  }
  pub enum AttrDataValue {
    Literal(Literal),
    Nested(AttrIter),
  }
  pub enum Type {
    Basic(BasicType),
    Tuple(TupleType),
    Function(FunctionType),
    SelfType(KwSelfType),
  }
  pub struct BasicType "basic_type"
  pub struct TupleType "tuple_type"
  pub struct FunctionType "function_type"
  pub enum Expr {
    Literal(Literal),
    TupleExpression(TupleExpression),
    CodeBlock(CodeBlock),
  }
  pub struct Identifier "identifier"
  pub enum Literal {
    Str(StrLit),
    Bool(BoolLit),
    Num(NumLit),
  }
  pub struct StrLit "string_literal"
  pub struct BoolLit "boolean_literal"
  pub struct NumLit "numeric_literal"
  pub struct TupleExpression "tuple_expression"
  pub struct CodeBlock "codeblock"
  pub enum Statement {
    LetBinding(LetBinding),
    Expr(Expr),
  }
  pub struct LetBinding "let_binding"
}

typed_iter! {
  pub struct AttrIter: Attribute
  pub struct ItemIter: Item
  pub struct AttrArgIter: AttrDataValue = "arg"
  pub struct InputIter: Expr = "input"
  pub struct StatementIter: Statement
  pub struct ExternItemIter: ExternItem = "item"
}

keywords! {
  KwSelfType "Self"
  KwConst "const"
  KwUnsafe "unsafe"
}

impl<'ast> File<'ast> {
  pub fn items(&self) -> ItemIter<'ast> {
    ItemIter::new(self.node())
  }
}

impl<'ast> Function<'ast> {
  pub fn attributes(&self) -> AttrIter<'ast> {
    AttrIter::new(self.node())
  }

  pub fn vis(&self) -> Option<Visibility> {
    self.optional_child("vis")
  }

  pub fn modifier(&self) -> Option<FunctionModifier> {
    self.optional_child("modifier")
  }

  pub fn name(&self) -> Identifier {
    self.required_child("name")
  }

  pub fn inputs(&self) -> InputIter<'ast> {
    InputIter::new(self.node())
  }

  pub fn output(&self) -> Option<Type<'ast>> {
    self.optional_child("output")
  }

  pub fn body(&self) -> Expr<'ast> {
    self.required_child("body")
  }
}

impl<'ast> FunctionModifier<'ast> {
  pub fn kind(&self) -> FunctionModifierKind<'ast> {
    self.required_child("modifier")
  }
}

impl<'ast> ExternBlock<'ast> {
  pub fn items(&self) -> ExternItemIter<'ast> {
    ExternItemIter::new(self.node())
  }
}

impl<'ast> ExternFunction<'ast> {
  pub fn vis(&self) -> Option<Visibility<'ast>> {
    self.optional_child("vis")
  }
}

impl<'ast> Attribute<'ast> {
  pub fn path(&self) -> Path<'ast> {
    Path(self.0.named_child(0).unwrap())
  }

  pub fn data(&self) -> Option<AttrData<'ast>> {
    self.optional_child("arg")
  }
}

impl<'ast> CodeBlock<'ast> {
  pub fn statements(&self) -> StatementIter<'ast> {
    StatementIter::new(self.node())
  }

  pub fn trailing(&self) -> Option<Expr<'ast>> {
    self.optional_child("trailing")
  }
}

impl<'ast> StrLit<'ast> {
  pub fn value<'source>(&self, source: &'source str) -> &'source str {
    &source[self.0.start_byte()..self.0.end_byte()]
  }
}

impl BoolLit<'_> {
  pub fn value(&self) -> bool {
    self.0.kind().parse().unwrap()
  }
}

impl<'ast> NumLit<'ast> {
  pub fn prefix(&self) -> Option<NumLitPrefix> {
    self.optional_child("prefix")
  }

  pub fn digits<'source>(&self, source: &'source str) -> &'source str {
    self
      .node()
      .child_by_field_name("digits")
      .unwrap()
      .utf8_text(source.as_bytes())
      .unwrap()
  }

  pub fn float_part<'source>(
    &self,
    source: &'source str,
  ) -> Option<&'source str> {
    self
      .node()
      .child_by_field_name("float_part")
      .map(|node| node.utf8_text(source.as_bytes()).unwrap())
  }

  pub fn suffix(&self) -> Option<&'static str> {
    self
      .node()
      .child_by_field_name("suffix")
      .map(|node| node.kind())
  }
}

pub struct NumLitPrefix<'ast> {
  node: Node<'ast>,
  pub value: NumLitPrefixValue,
}

forward_to_node!(NumLitPrefix);

impl<'ast> AstNode<'ast> for NumLitPrefix<'ast> {
  fn new(node: Node<'ast>) -> Option<Self> {
    match node.kind() {
      "0x" => Some(Self {
        node,
        value: NumLitPrefixValue::Hex,
      }),
      "0b" => Some(Self {
        node,
        value: NumLitPrefixValue::Bin,
      }),
      _ => None,
    }
  }

  fn node(&self) -> Node<'ast> {
    self.node
  }
}

pub enum NumLitPrefixValue {
  Bin,
  Hex,
}

trait AstNode<'ast>: Sized {
  fn new(node: Node<'ast>) -> Option<Self>;

  fn node(&self) -> Node<'ast>;

  fn optional_child<T: AstNode<'ast>>(&self, name: &str) -> Option<T> {
    self
      .node()
      .child_by_field_name(name)
      .map(|node| T::new(node).unwrap())
  }

  fn required_child<T: AstNode<'ast>>(&self, name: &str) -> T {
    self
      .node()
      .child_by_field_name(name)
      .map(T::new)
      .unwrap()
      .unwrap()
  }
}
