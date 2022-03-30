use crate::{BodyId, HirId};
use std::{
  cell::Cell,
  cmp::{max, min},
};

macro_rules! create_node_enum {
  (
    $(#[$attr:meta])*
    pub enum $name:ident {
      $($variant:ident),*,
    }
  ) => {
    $(#[$attr])*
    pub enum $name<'hir> {
      $($variant(&'hir $variant<'hir>)),*
    }

    $(
      #[automatically_derived]
      impl<'hir> From<&'hir $variant<'hir>> for $name<'hir> {
        fn from(val: &'hir $variant<'hir>) -> Self {
          Self::$variant(val)
        }
      }
    )*
  };
}

create_node_enum! {
  #[derive(Copy, Clone)]
  pub enum Node {
    Package,
    Function,
    LetBinding,
    Infer,
    Path,
    Identifier,
    Type,
    Expr,
  }
}

impl<'hir> Node<'hir> {
  pub fn id(&self) -> HirId<'hir> {
    match self {
      Node::Package(_) => HirId::ROOT_ID,
      Node::Function(Function { id, .. })
      | Node::LetBinding(LetBinding { id, .. })
      | Node::Infer(Infer { id, .. })
      | Node::Path(Path { id, .. })
      | Node::Identifier(Identifier { id, .. }) => *id,
      Node::Type(ty) => ty.id(),
      Node::Expr(expr) => expr.id(),
    }
  }
}

pub struct Package<'hir> {
  pub items: &'hir [Item<'hir>],
}

pub enum Item<'hir> {
  Function(Function<'hir>),
}

impl<'hir> Item<'hir> {
  pub fn id(&self) -> HirId<'hir> {
    match self {
      Item::Function(Function { id, .. }) => *id,
    }
  }
}

pub struct Function<'hir> {
  pub id: HirId<'hir>,
  pub name: Identifier<'hir>,
  pub vis: Visibility<'hir>,
  pub sig: FnSig<'hir>,
  pub params: &'hir [Identifier<'hir>],
  pub body: Option<BodyId<'hir>>,
}


pub struct FnSig<'hir> {
  pub constness: Constness,
  pub unsafety: Unsafety,
  pub extern_: Extern,
  pub inputs: &'hir [Type<'hir>],
  pub output: &'hir Type<'hir>,
}

pub enum Visibility<'hir> {
  Public,
  Private,
  Restricted { scope: HirId<'hir> },
}

pub enum Constness {
  Yes,
  No,
}

pub enum Unsafety {
  Yes,
  No,
}

#[derive(Copy, Clone)]
pub enum Extern {
  Yes(Abi),
  No,
}

#[derive(Copy, Clone)]
pub enum Abi {
  Default,
  C,
  Invalid,
}

pub enum Expr<'hir> {
  Literal(Literal<'hir>),
  Tuple(TupleExpression<'hir>),
  Codeblock(Codeblock<'hir>),
  Type(BasicType<'hir>),
  Unit(Unit<'hir>),
}

impl<'hir> Expr<'hir> {
  pub fn id(&self) -> HirId<'hir> {
    match self {
      Expr::Literal(Literal { id, .. })
      | Expr::Tuple(TupleExpression { id, .. })
      | Expr::Codeblock(Codeblock { id, .. })
      | Expr::Type(BasicType { id, .. })
      | Expr::Unit(Unit { id, .. }) => *id,
    }
  }

  pub fn as_body(&self) -> BodyId<'hir> {
    BodyId(self.id())
  }
}

pub struct Literal<'hir> {
  pub id: HirId<'hir>,
  pub kind: LiteralKind<'hir>,
}

pub enum LiteralKind<'hir> {
  Str(&'hir str),
  Bool(bool),
  Num(NumLit),
}

pub struct NumLit {
  pub dec_part: u128,
  pub float_part: Option<u128>,
  pub state: Cell<NumLitState>,
}

#[derive(Copy, Clone)]
#[must_use]
pub enum NumLitState {
  Unspecified,
  Float(FloatBits),
  Signed(IntBitsRange),
  Unsigned(IntBitsRange),
  ISize,
  USize,
  Err,
}

impl Default for NumLitState {
  fn default() -> Self {
    Self::Unspecified
  }
}

impl NumLitState {
  pub fn new<S: AsRef<str>>(s: S) -> Self {
    match s.as_ref() {
      "f32" => NumLitState::Float(FloatBits::ThirtyTwo),
      "f64" => NumLitState::Float(FloatBits::SixtyFour),
      "i8" => NumLitState::Signed(IntBits::Eight.into()),
      "i16" => NumLitState::Signed(IntBits::Sixteen.into()),
      "i32" => NumLitState::Signed(IntBits::ThirtyTwo.into()),
      "i64" => NumLitState::Signed(IntBits::SixtyFour.into()),
      "i128" => NumLitState::Signed(IntBits::OneTwentyEight.into()),
      "u8" => NumLitState::Unsigned(IntBits::Eight.into()),
      "u16" => NumLitState::Unsigned(IntBits::Sixteen.into()),
      "u32" => NumLitState::Unsigned(IntBits::ThirtyTwo.into()),
      "u64" => NumLitState::Unsigned(IntBits::SixtyFour.into()),
      "u128" => NumLitState::Unsigned(IntBits::OneTwentyEight.into()),
      "isize" => NumLitState::ISize,
      "usize" => NumLitState::USize,
      _ => NumLitState::Err, // TODO emit diagnostic
    }
  }

  pub fn float(self) -> Self {
    match self {
      NumLitState::Unspecified => NumLitState::Float(FloatBits::Unspecified),
      NumLitState::Float(_) => self,
      _ => NumLitState::Err, // TODO emit diagnostic
    }
  }

  pub fn float_32(self) -> Self {
    match self {
      NumLitState::Unspecified
      | NumLitState::Float(FloatBits::Unspecified)
      | NumLitState::Float(FloatBits::ThirtyTwo) => {
        NumLitState::Float(FloatBits::ThirtyTwo)
      }
      _ => NumLitState::Err, // TODO emit diagnostic
    }
  }

  pub fn float_64(self) -> Self {
    match self {
      NumLitState::Unspecified
      | NumLitState::Float(FloatBits::Unspecified)
      | NumLitState::Float(FloatBits::SixtyFour) => {
        NumLitState::Float(FloatBits::SixtyFour)
      }
      _ => NumLitState::Err, // TODO emit diagnostic
    }
  }

  pub fn signed(self) -> Self {
    match self {
      NumLitState::Unspecified => NumLitState::Signed(IntBitsRange::default()),
      NumLitState::Signed(_) => self,
      _ => NumLitState::Err, // TODO emit diagnostic
    }
  }

  pub fn unsigned(self) -> Self {
    match self {
      NumLitState::Unspecified => {
        NumLitState::Unsigned(IntBitsRange::default())
      }
      NumLitState::Unsigned(_) => self,
      _ => NumLitState::Err, // TODO emit diagnostic
    }
  }

  pub fn isize(self) -> Self {
    match self {
      NumLitState::Unspecified | NumLitState::ISize => NumLitState::ISize,
      _ => NumLitState::Err, // TODO emit diagnostic
    }
  }

  pub fn usize(self) -> Self {
    match self {
      NumLitState::Unspecified | NumLitState::USize => NumLitState::USize,
      _ => NumLitState::Err, // TODO emit diagnostic
    }
  }

  pub fn upper_bound(self, bound: IntBits) -> Self {
    match self {
      NumLitState::Signed(bits) => bits
        .upper_bound(bound)
        .map_or(NumLitState::Err, NumLitState::Signed),
      NumLitState::Unsigned(bits) => bits
        .upper_bound(bound)
        .map_or(NumLitState::Err, NumLitState::Unsigned),
      NumLitState::Err => NumLitState::Err,
      _ => panic!(),
    }
  }

  pub fn lower_bound(self, bound: IntBits) -> Self {
    match self {
      NumLitState::Signed(bits) => bits
        .lower_bound(bound)
        .map_or(NumLitState::Err, NumLitState::Signed),
      NumLitState::Unsigned(bits) => bits
        .lower_bound(bound)
        .map_or(NumLitState::Err, NumLitState::Unsigned),
      NumLitState::Err => NumLitState::Err,
      _ => panic!(),
    }
  }
}

#[derive(Copy, Clone)]
pub enum FloatBits {
  ThirtyTwo,
  SixtyFour,
  Unspecified,
}

#[derive(Copy, Clone)]
pub struct IntBitsRange {
  pub hi: IntBits,
  pub lo: IntBits,
}

impl IntBitsRange {
  fn upper_bound(self, bound: IntBits) -> Option<Self> {
    Self {
      hi: min(self.hi, bound),
      lo: self.lo,
    }
    .is_valid()
  }

  fn lower_bound(self, bound: IntBits) -> Option<Self> {
    Self {
      hi: self.hi,
      lo: max(self.lo, bound),
    }
    .is_valid()
  }

  fn is_valid(self) -> Option<Self> {
    (self.hi >= self.lo).then(|| self)
  }
}

impl Default for IntBitsRange {
  fn default() -> Self {
    Self {
      hi: IntBits::MIN,
      lo: IntBits::MIN,
    }
  }
}

impl From<IntBits> for IntBitsRange {
  fn from(bits: IntBits) -> Self {
    Self { hi: bits, lo: bits }
  }
}

#[derive(Copy, Clone, Ord, PartialOrd, Eq, PartialEq)]
pub enum IntBits {
  Eight,
  Sixteen,
  ThirtyTwo,
  SixtyFour,
  OneTwentyEight,
}

impl IntBits {
  pub const MIN: Self = IntBits::Eight;
  pub const MAX: Self = IntBits::OneTwentyEight;
}

pub struct TupleExpression<'hir> {
  pub id: HirId<'hir>,
  pub elements: &'hir [Expr<'hir>],
}

pub struct Codeblock<'hir> {
  pub id: HirId<'hir>,
  pub statements: &'hir [Statement<'hir>],
  pub trailing: Option<&'hir Expr<'hir>>,
}

pub enum Statement<'hir> {
  Expr(&'hir Expr<'hir>),
  LetBinding(&'hir LetBinding<'hir>),
}

pub struct LetBinding<'hir> {
  pub id: HirId<'hir>,
  pub ident: Identifier<'hir>,
  pub type_: Option<&'hir Type<'hir>>,
  pub value: &'hir Expr<'hir>,
}

pub enum Type<'hir> {
  Basic(BasicType<'hir>),
  Unit(Unit<'hir>),
  Tuple(TupleType<'hir>),
  Function(FunctionType<'hir>),
  Selph(SelfType<'hir>),
}

impl<'hir> Type<'hir> {
  pub fn id(&self) -> HirId<'hir> {
    match self {
      Type::Basic(BasicType { id, .. })
      | Type::Unit(Unit { id, .. })
      | Type::Tuple(TupleType { id, .. })
      | Type::Function(FunctionType { id, .. })
      | Type::Selph(SelfType { id, .. }) => *id,
    }
  }

  pub const UNIT: &'static Type<'static> =
    &Type::Unit(Unit { id: HirId::UNIT_ID });
}

pub struct BasicType<'hir> {
  pub id: HirId<'hir>,
  pub path: &'hir Path<'hir>,
  pub generics: &'hir [GenericArg<'hir>],
}

pub struct TupleType<'hir> {
  pub id: HirId<'hir>,
  pub elements: &'hir [Type<'hir>],
}

pub struct FunctionType<'hir> {
  pub id: HirId<'hir>,
  pub sig: FnSig<'hir>,
}

pub struct SelfType<'hir> {
  pub id: HirId<'hir>,
}

pub struct Unit<'hir> {
  pub id: HirId<'hir>,
}

pub enum GenericArg<'hir> {
  Infer(&'hir Infer<'hir>),
  Expr(&'hir Expr<'hir>),
}

pub struct Infer<'hir> {
  pub id: HirId<'hir>,
}

pub struct Path<'hir> {
  pub id: HirId<'hir>,
  pub start: PathStart<'hir>,
  pub segments: &'hir [PathSegment<'hir>],
}

pub enum PathStart<'hir> {
  Segment {
    rooted: bool,
    segment: PathSegment<'hir>,
  },
  Scoped(HirId<'hir>),
  Err,
}

pub struct PathSegment<'hir> {
  pub ident: Identifier<'hir>,
}

pub struct Identifier<'hir> {
  pub id: HirId<'hir>,
  pub value: &'hir str,
}
