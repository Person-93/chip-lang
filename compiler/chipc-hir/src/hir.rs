use crate::{BodyId, HirContext, HirId, HirPretty, PrettyOutput};
use chipc_macros::HirPretty;
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

#[derive(HirPretty)]
pub struct Package<'hir> {
  #[pretty(children(newline))]
  pub items: &'hir [Item<'hir>],
}

#[derive(HirPretty)]
#[pretty(transparent)]
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

#[derive(HirPretty)]
#[pretty(fmt = "{vis} {sig}{body}")]
pub struct Function<'hir> {
  pub id: HirId<'hir>,
  #[pretty(skip)]
  pub name: Identifier<'hir>,
  pub vis: Visibility<'hir>,
  #[pretty(fmt(with("FnSig::format", "Some((name, params))")))]
  pub sig: FnSig<'hir>,
  #[pretty(skip)]
  pub params: &'hir [Identifier<'hir>],
  #[pretty(fmt(with("print_fn_body", "")))]
  pub body: Option<BodyId<'hir>>,
}

fn print_fn_body<'hir>(
  body: &Option<BodyId<'hir>>,
  ctx: &HirContext<'hir>,
) -> PrettyOutput {
  body.map_or_else(PrettyOutput::default, |body| match ctx.get_body(body) {
    Expr::Codeblock(block)
      if block.statements.is_empty() && block.trailing.is_none() =>
    {
      PrettyOutput::new(String::from(": ()"))
    }
    Expr::Codeblock(block) if block.statements.is_empty() => {
      let mut pretty_output = String::from(": ");
      pretty_output += &block
        .trailing
        .unwrap()
        .pretty_print(ctx)
        .into_simple_string();
      PrettyOutput::new(pretty_output)
    }
    Expr::Codeblock(block) => PrettyOutput::default()
      .add_children(false, block.statements, ctx)
      .add_child(false, block.trailing, ctx),
    expr => {
      let mut pretty_output = String::from(": ");
      pretty_output += &expr.pretty_print(ctx).into_simple_string();
      PrettyOutput::new(pretty_output)
    }
  })
}

pub struct FnSig<'hir> {
  pub constness: Constness,
  pub unsafety: Unsafety,
  pub extern_: Extern,
  pub inputs: &'hir [Type<'hir>],
  pub output: &'hir Type<'hir>,
}

impl<'hir> FnSig<'hir> {
  fn format(
    &self,
    ctx: &HirContext<'hir>,
    info: Option<(&Identifier<'hir>, &'hir [Identifier<'hir>])>,
  ) -> PrettyOutput {
    let Self {
      constness,
      unsafety,
      extern_,
      inputs,
      output,
    } = self;

    let mut pretty_output = String::new();

    if *constness == Constness::Yes {
      pretty_output += "const";
    }
    if let Extern::Yes(abi) = extern_ {
      if !pretty_output.is_empty() {
        pretty_output.push(' ');
      }
      pretty_output += "extern";
      match abi {
        Abi::Default => {}
        Abi::C => pretty_output += " \"C\"",
        Abi::Invalid => pretty_output += " <INVALID-ABI>",
      }
    } else if *unsafety == Unsafety::Yes {
      if !pretty_output.is_empty() {
        pretty_output.push(' ');
      }
      pretty_output += "unsafe";
    }

    if !pretty_output.is_empty() {
      pretty_output.push(' ');
    }
    pretty_output += "fn";
    if let Some(name) = info.map(|info| info.0) {
      pretty_output.push(' ');
      pretty_output += name.value;
    }
    pretty_output.push('(');

    match info.map(|info| info.1) {
      None => {
        let mut inputs = inputs.iter();
        if let Some(input) = inputs.next() {
          pretty_output += &input.as_simple_string(ctx);
        }
        for input in inputs {
          pretty_output += ", ";
          pretty_output += &input.as_simple_string(ctx);
        }
      }

      Some(params) => {
        let mut params = params.iter().zip(inputs.iter());
        if let Some((ident, ty)) = params.next() {
          pretty_output += ident.value;
          pretty_output += ": ";
          pretty_output += &ty.as_simple_string(ctx);
        }

        for (ident, ty) in params {
          pretty_output += ", ";
          pretty_output += &ident.as_simple_string(ctx);
          pretty_output += ": ";
          pretty_output += &ty.as_simple_string(ctx);
        }
      }
    }

    pretty_output += ") -> ";
    pretty_output += &output.as_simple_string(ctx);

    PrettyOutput::new(pretty_output)
  }
}

#[derive(HirPretty)]
pub enum Visibility<'hir> {
  #[pretty(fmt = "pub")]
  Public,
  #[pretty(fmt = "priv")]
  Private,
  #[pretty(fmt = "pub()")]
  Restricted {
    #[pretty(skip)]
    scope: HirId<'hir>, // TODO pretty-print scope of visibility restriction
  },
}

#[derive(Copy, Clone, Eq, PartialEq)]
pub enum Constness {
  Yes,
  No,
}

#[derive(Copy, Clone, Eq, PartialEq)]
pub enum Unsafety {
  Yes,
  No,
}

#[derive(Copy, Clone, Eq, PartialEq)]
pub enum Extern {
  Yes(Abi),
  No,
}

#[derive(Copy, Clone, Eq, PartialEq)]
pub enum Abi {
  Default,
  C,
  Invalid,
}

#[derive(HirPretty)]
#[pretty(transparent)]
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

#[derive(HirPretty)]
#[pretty(transparent)]
pub struct Literal<'hir> {
  pub id: HirId<'hir>,
  pub kind: LiteralKind<'hir>,
}

#[derive(HirPretty)]
pub enum LiteralKind<'hir> {
  #[pretty(fmt = "\"{0:d}\"")]
  Str(&'hir str),
  #[pretty(fmt = "{0:d}")]
  Bool(bool),
  #[pretty(transparent)]
  Num(NumLit),
}

#[derive(HirPretty)]
#[pretty(fmt = "NumLit({dec_part:d}{float_part:d?} - type:{state})")]
pub struct NumLit {
  pub dec_part: u128,
  pub float_part: Option<u128>,
  pub state: Cell<NumLitState>,
}

#[derive(Copy, Clone, HirPretty)]
#[must_use]
pub enum NumLitState {
  #[pretty(fmt = "???")]
  Unspecified,
  #[pretty(fmt = "f{0}")]
  Float(FloatBits),
  #[pretty(fmt = "i{0}")]
  Signed(IntBitsRange),
  #[pretty(fmt = "u{0}")]
  Unsigned(IntBitsRange),
  #[pretty(fmt = "isize")]
  ISize,
  #[pretty(fmt = "usize")]
  USize,
  #[pretty(fmt = "<INVALID>")]
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

#[derive(Copy, Clone, HirPretty)]
pub enum FloatBits {
  #[pretty(fmt = "32")]
  ThirtyTwo,
  #[pretty(fmt = "64")]
  SixtyFour,
  #[pretty(fmt = "??")]
  Unspecified,
}

#[derive(Copy, Clone)]
pub struct IntBitsRange {
  pub hi: IntBits,
  pub lo: IntBits,
}

impl HirPretty<'_> for IntBitsRange {
  fn pretty_print(&self, ctx: &HirContext<'_>) -> PrettyOutput {
    if self.hi == self.lo {
      self.hi.pretty_print(ctx)
    } else {
      PrettyOutput::new(format!(
        "{}..{}",
        self.lo.as_simple_string(ctx),
        self.hi.as_simple_string(ctx),
      ))
    }
  }
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

#[derive(Copy, Clone, Ord, PartialOrd, Eq, PartialEq, HirPretty)]
pub enum IntBits {
  #[pretty(fmt = "8")]
  Eight,
  #[pretty(fmt = "16")]
  Sixteen,
  #[pretty(fmt = "32")]
  ThirtyTwo,
  #[pretty(fmt = "64")]
  SixtyFour,
  #[pretty(fmt = "128")]
  OneTwentyEight,
}

impl IntBits {
  pub const MIN: Self = IntBits::Eight;
  pub const MAX: Self = IntBits::OneTwentyEight;
}

#[derive(HirPretty)] // TODO pretty print tuple expression
pub struct TupleExpression<'hir> {
  pub id: HirId<'hir>,
  pub elements: &'hir [Expr<'hir>],
}

#[derive(HirPretty)]
#[pretty(fmt = "codeblock")]
pub struct Codeblock<'hir> {
  pub id: HirId<'hir>,
  pub statements: &'hir [Statement<'hir>],
  pub trailing: Option<&'hir Expr<'hir>>,
}

#[derive(HirPretty)]
#[pretty(transparent)]
pub enum Statement<'hir> {
  Expr(&'hir Expr<'hir>),
  LetBinding(&'hir LetBinding<'hir>),
}

// TODO optional colon in pretty printed let-binding
#[derive(HirPretty)]
#[pretty(fmt = "let {ident}:{type_} := {value}")]
pub struct LetBinding<'hir> {
  pub id: HirId<'hir>,
  pub ident: Identifier<'hir>,
  pub type_: Option<&'hir Type<'hir>>,
  pub value: &'hir Expr<'hir>,
}

#[derive(HirPretty)]
#[pretty(transparent)]
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

impl<'hir> HirPretty<'hir> for BasicType<'hir> {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    let Self {
      id: _,
      path,
      generics,
    } = self;

    let mut pretty_output = path.pretty_print(ctx).into_simple_string();
    if !generics.is_empty() {
      pretty_output += "::<";
      for generic in generics.iter() {
        pretty_output += &generic.pretty_print(ctx).into_simple_string();
      }
      pretty_output.push('>');
    }

    PrettyOutput::new(pretty_output)
  }
}

pub struct TupleType<'hir> {
  pub id: HirId<'hir>,
  pub elements: &'hir [Type<'hir>],
}

impl<'hir> HirPretty<'hir> for TupleType<'hir> {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    let mut pretty_output = String::from('(');
    for element in self.elements {
      pretty_output += &element.pretty_print(ctx).into_simple_string();
    }
    pretty_output.push(')');
    PrettyOutput::new(pretty_output)
  }
}

#[derive(HirPretty)]
#[pretty(transparent)]
pub struct FunctionType<'hir> {
  pub id: HirId<'hir>,
  #[pretty(fmt(with("FnSig::format", "None")))]
  pub sig: FnSig<'hir>,
}

#[derive(HirPretty)]
#[pretty(fmt = "Self")]
pub struct SelfType<'hir> {
  pub id: HirId<'hir>,
}

#[derive(HirPretty)]
#[pretty(fmt = "()")]
pub struct Unit<'hir> {
  pub id: HirId<'hir>,
}

#[derive(HirPretty)]
#[pretty(transparent)]
pub enum GenericArg<'hir> {
  Infer(&'hir Infer<'hir>),
  Expr(&'hir Expr<'hir>),
}

#[derive(HirPretty)]
#[pretty(fmt = "_")]
pub struct Infer<'hir> {
  pub id: HirId<'hir>,
}

#[derive(HirPretty)]
#[pretty(fmt = "{start}{segments}")]
pub struct Path<'hir> {
  pub id: HirId<'hir>,
  pub start: PathStart<'hir>,
  #[pretty(fmt(with("print_segments", "")))]
  pub segments: &'hir [PathSegment<'hir>],
}

fn print_segments<'hir>(
  segments: &'hir [PathSegment<'hir>],
  ctx: &HirContext<'hir>,
) -> PrettyOutput {
  let mut pretty_output = String::new();
  for segment in segments {
    pretty_output += "::";
    pretty_output += &segment.pretty_print(ctx).into_simple_string();
  }
  PrettyOutput::new(pretty_output)
}

#[derive(HirPretty)]
// TODO pretty-print PathStart
//  - lookup scope if it's scoped
pub enum PathStart<'hir> {
  #[pretty(fmt = "{rooted}{segment}")]
  Segment {
    #[pretty(fmt(with("print_rooted", "")))]
    rooted: bool,
    segment: PathSegment<'hir>,
  },
  Scoped(#[pretty(skip)] HirId<'hir>),
  #[pretty(fmt = "<INVALID-PATH-START>")]
  Err,
}

fn print_rooted(rooted: &bool, _: &HirContext<'_>) -> PrettyOutput {
  if *rooted {
    PrettyOutput::new("::".to_string())
  } else {
    PrettyOutput::default()
  }
}

#[derive(HirPretty)]
#[pretty(fmt = "{ident}")]
pub struct PathSegment<'hir> {
  pub ident: Identifier<'hir>,
}

pub struct Identifier<'hir> {
  pub id: HirId<'hir>,
  pub value: &'hir str,
}

impl HirPretty<'_> for Identifier<'_> {
  fn pretty_print(&self, _: &HirContext<'_>) -> PrettyOutput {
    PrettyOutput::new(String::from(self.value))
  }
}
