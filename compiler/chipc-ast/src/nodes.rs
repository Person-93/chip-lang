use crate::private::Sealed;
use std::{any::type_name, str};
use tree_sitter::{Node, Point, TreeCursor};

pub trait AstNode<'ast>: Sized + Clone + Sealed {
  fn new(node: Node<'ast>) -> Option<Self>;

  fn node(&self) -> Node<'ast>;

  fn optional_child<T: AstNode<'ast>>(&self, name: &str) -> Option<T> {
    self.node().child_by_field_name(name).map(|node| {
      T::new(node).unwrap_or_else(|| {
        panic!(
          "unexpected node kind `{}` creating {}",
          node.kind(),
          type_name::<T>()
        )
      })
    })
  }

  fn required_child<T: AstNode<'ast>>(&self, name: &str) -> T {
    self.optional_child(name).unwrap_or_else(|| {
      panic!("missing field `{name}` creating {}", type_name::<T>())
    })
  }

  fn named_child<T: AstNode<'ast>>(&self, idx: usize) -> T {
    let child = self.node().named_child(idx).unwrap_or_else(|| {
      panic!(
        "expected named child at idx {idx} creating {}",
        type_name::<T>()
      )
    });
    T::new(child).unwrap_or_else(|| {
      panic!(
        "unexpected named child `{}` at idx {idx} creating {}",
        child.kind(),
        type_name::<T>(),
      )
    })
  }

  fn start_position(&self) -> Point {
    self.node().start_position()
  }

  fn end_position(&self) -> Point {
    self.node().end_position()
  }

  fn start_byte(&self) -> usize {
    self.node().start_byte()
  }

  fn end_byte(&self) -> usize {
    self.node().end_byte()
  }

  fn byte_range(&self) -> std::ops::Range<usize> {
    self.node().byte_range()
  }
}

ast_nodes! {
  pub struct File "file"
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
  pub enum VisibilityRestriction {
    Selph(KwSelfWord),
    Super(KwSuper),
    Package(KwPackage),
  }
  pub struct Path "path"
  pub enum GenericArg {
    Infer(KwInfer),
    Expr(Expr),
  }
  pub struct Attribute "attr"
  pub enum AttrDataValue {
    Literal(Literal),
    Nested(Attribute),
  }
  pub struct Annotated "annotated"
  pub enum Type {
    Basic(BasicType),
    Unit(Unit),
    Tuple(TupleType),
    Function(FunctionType),
    Selph(KwSelfType),
  }
  pub struct BasicType "basic_type"
  pub struct Unit "unit"
  pub struct TupleType "tuple_type"
  pub struct FunctionType "function_type"
  pub enum Expr {
    Literal(Literal),
    Tuple(TupleExpression),
    CodeBlock(CodeBlock),
    Basic(BasicType),
    Unit(Unit),
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
  pub struct Statement "statement"
  pub enum StatementKind {
    LetBinding(LetBinding),
    Expr(Expr),
  }
  pub struct LetBinding "let_binding"
}

typed_iter! {
  pub struct AttrIter: Attribute
  pub struct ItemIter: Item
  pub struct AttrArgIter: AttrDataValue = "arg"
  pub struct InputIter: Annotated = "input"
  pub struct FnTypeInputIter: Type = "input"
  pub struct StatementIter: Statement
  pub struct ExternItemIter: ExternItem = "item"
  pub struct SuperIter: KwSuper
  pub struct SegmentIter: Identifier = "segment"
  pub struct GenericArgIter: GenericArg = "generic_arg"
  pub struct TupleTypeIter: Type = "member"
  pub struct TupleExprIter: Expr = "member"
}

keywords! {
  KwConst "const"
  KwInfer "_"
  KwPackage "package"
  KwSelfWord "self"
  KwSelfType "Self"
  KwSuper "super"
  KwUnsafe "unsafe"
}

impl<'ast> File<'ast> {
  pub fn attributes(&self) -> AttrIter<'ast> {
    AttrIter::new(self.node())
  }

  pub fn items(&self) -> ItemIter<'ast> {
    ItemIter::new(self.node())
  }
}

impl<'ast> Function<'ast> {
  pub fn attributes(&self) -> AttrIter<'ast> {
    AttrIter::new(self.node())
  }

  pub fn vis(&self) -> Option<Visibility<'ast>> {
    self.optional_child("vis")
  }

  pub fn modifier(&self) -> Option<FunctionModifier<'ast>> {
    self.optional_child("modifier")
  }

  pub fn name(&self) -> Identifier<'ast> {
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
    let child = self
      .node()
      .child(0)
      .expect("function modifier node with no children");
    FunctionModifierKind::new(child).unwrap_or_else(|| {
      panic!(
        "unexpected child type `{}` in function modifier",
        child.kind()
      )
    })
  }
}

impl<'ast> Extern<'ast> {
  pub fn abi(&self) -> Option<StrLit<'ast>> {
    self.optional_child("abi")
  }
}

impl<'ast> ExternBlock<'ast> {
  pub fn abi(&self) -> Option<StrLit<'ast>> {
    self.optional_child("abi")
  }

  pub fn items(&self) -> ExternItemIter<'ast> {
    ExternItemIter::new(self.node())
  }
}

impl<'ast> ExternFunction<'ast> {
  pub fn vis(&self) -> Option<Visibility<'ast>> {
    self.optional_child("vis")
  }

  pub fn name(&self) -> Identifier<'ast> {
    self.required_child("name")
  }

  pub fn inputs(&self) -> InputIter<'ast> {
    InputIter::new(self.node())
  }

  pub fn output(&self) -> Option<Type<'ast>> {
    self.optional_child("output")
  }
}

impl<'ast> Visibility<'ast> {
  pub fn restriction(&self) -> Option<VisibilityRestriction<'ast>> {
    self.optional_child("restriction")
  }
}

impl<'ast> Path<'ast> {
  pub fn start(&self) -> PathStart<'ast> {
    use PathStart::*;
    let mut cursor = self.node().walk();
    assert!(cursor.goto_first_child(), "path node has no children");
    let field_name = loop {
      let field_name = cursor.field_name();
      if field_name.is_some() {
        break field_name;
      }
      if !cursor.goto_next_sibling() {
        break None;
      }
    };
    let field_name = field_name.expect("path node has no named children");

    match field_name {
      "rooted" => Segment(FirstSegment {
        rooted: AnonNode::new(cursor.node()),
        segment: self.required_child("first_segment"),
      }),
      "first_segment" => Segment(FirstSegment {
        rooted: None,
        segment: Identifier::new(cursor.node()).unwrap_or_else(|| {
          panic!(
            "expected identifier found `{}` creating {}",
            cursor.node().kind(),
            type_name::<PathStart>()
          )
        }),
      }),
      "package" => Package(KwPackage(cursor.node())),
      "self" => Selph(KwSelfWord(cursor.node())),
      "super" => Super(SuperIter::new(self.node())),
      kind => panic!("first child of path node has unexpected kind `{kind}`"),
    }
  }

  pub fn segments(&self) -> SegmentIter<'ast> {
    SegmentIter::new(self.node())
  }
}

#[derive(Clone)]
pub enum PathStart<'ast> {
  Segment(FirstSegment<'ast>),
  Package(KwPackage<'ast>),
  Selph(KwSelfWord<'ast>),
  Super(SuperIter<'ast>),
}

#[non_exhaustive]
#[derive(Copy, Clone)]
pub struct FirstSegment<'ast> {
  pub rooted: Option<AnonNode<'ast>>,
  pub segment: Identifier<'ast>,
}

impl<'ast> Attribute<'ast> {
  pub fn path(&self) -> Path<'ast> {
    self.named_child(0)
  }

  pub fn data(&self) -> Option<AttrData<'ast>> {
    AttrData::new(self.node())
  }
}

#[derive(Clone)]
pub enum AttrData<'ast> {
  Assign(AttrDataValue<'ast>),
  Call(AttrArgIter<'ast>),
}

impl<'ast> AstNode<'ast> for AttrData<'ast> {
  fn new(node: Node<'ast>) -> Option<Self> {
    node
      .child_by_field_name("value")
      .map(|value| AttrData::Assign(AttrDataValue::new(value).unwrap()))
      .or_else(|| {
        node
          .child_by_field_name("arg")
          .is_some()
          .then(|| AttrData::Call(AttrArgIter::new(node)))
      })
  }

  fn node(&self) -> Node<'ast> {
    match self {
      AttrData::Assign(child) => child.node(),
      AttrData::Call(child) => child.node(),
    }
  }
}

impl Sealed for AttrData<'_> {}

impl<'ast> Annotated<'ast> {
  pub fn ident(&self) -> Identifier<'ast> {
    self.named_child(0)
  }

  pub fn ty(&self) -> Type<'ast> {
    self.named_child(1)
  }
}

impl<'ast> BasicType<'ast> {
  pub fn path(&self) -> Path<'ast> {
    self.named_child(0)
  }

  pub fn generics(&self) -> GenericArgIter<'ast> {
    GenericArgIter::new(self.node())
  }
}

impl<'ast> TupleType<'ast> {
  pub fn elements(&self) -> TupleTypeIter<'ast> {
    TupleTypeIter::new(self.node())
  }
}

impl<'ast> FunctionType<'ast> {
  pub fn modifier(&self) -> Option<FunctionModifier<'ast>> {
    self.optional_child("modifier")
  }

  pub fn inputs(&self) -> FnTypeInputIter<'ast> {
    FnTypeInputIter::new(self.node())
  }

  pub fn output(&self) -> Option<Type<'ast>> {
    self.optional_child("output")
  }
}

impl<'ast> TupleExpression<'ast> {
  pub fn elements(&self) -> TupleExprIter<'ast> {
    TupleExprIter::new(self.node())
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

impl<'ast> Statement<'ast> {
  pub fn kind(&self) -> Option<StatementKind<'ast>> {
    let child = self.node().named_child(0)?;
    LetBinding::new(child)
      .map(StatementKind::LetBinding)
      .or_else(|| Expr::new(child).map(StatementKind::Expr))
  }
}

impl<'ast> LetBinding<'ast> {
  pub fn identifier(&self) -> Identifier<'ast> {
    self.named_child(0)
  }

  pub fn ty(&self) -> Option<Type<'ast>> {
    self.optional_child("type")
  }

  pub fn value(&self) -> Expr<'ast> {
    self.required_child("value")
  }
}

impl<'ast> Identifier<'ast> {
  pub fn value(&self, source: &'ast str) -> &'ast str {
    &source[self.byte_range()]
  }
}

impl<'ast> StrLit<'ast> {
  pub fn value<'source>(&self, source: &'source str) -> &'source str {
    &source[self.start_byte() + 1..self.end_byte() - 1]
  }
}

impl BoolLit<'_> {
  pub fn value(&self) -> bool {
    let kind = self
      .node()
      .child(0)
      .expect("boolean node with no children")
      .kind();
    kind
      .parse()
      .unwrap_or_else(|_| panic!("expected boolean node found `{kind}`"))
  }
}

impl<'ast> NumLit<'ast> {
  pub fn prefix(&self) -> Option<AnonNode<'ast>> {
    self.optional_child("prefix")
  }

  pub fn digits(&self) -> AnonNode<'ast> {
    self.required_child("digits")
  }

  pub fn float_part(&self) -> Option<AnonNode<'ast>> {
    self.optional_child("float_part")
  }

  pub fn suffix(&self) -> Option<AnonNode<'ast>> {
    self.optional_child("suffix")
  }
}

pub enum NumLitPrefixValue {
  Bin,
  Hex,
}

#[derive(Copy, Clone)]
pub struct AnonNode<'ast>(Node<'ast>);

impl<'ast> AnonNode<'ast> {
  pub fn value<'source>(&self, source: &'source str) -> &'source str {
    &source[self.0.byte_range()]
  }
}

impl<'ast> AstNode<'ast> for AnonNode<'ast> {
  fn new(node: Node<'ast>) -> Option<Self> {
    Some(Self(node))
  }

  fn node(&self) -> Node<'ast> {
    self.0
  }
}

impl Sealed for AnonNode<'_> {}
