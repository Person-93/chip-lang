pub use crate::ffi::*;
use std::{mem, ptr, str::FromStr};

pub mod context;

#[cxx::bridge(namespace = "chipc::mir")]
#[allow(clippy::needless_lifetimes)]
mod ffi {
  pub struct Package<'mir> {
    pub functions: &'mir [Function<'mir>],
  }

  #[derive(Copy, Clone)]
  pub enum Abi {
    None,
    Default,
    C,
  }

  #[derive(Copy, Clone)]
  pub enum Linkage {
    Intern,
    Extern,
  }

  #[derive(Copy, Clone)]
  pub enum PrimTy {
    Bool,
    Int8,
    Int16,
    Int32,
    Int64,
    Int128,
    ISize,
    UInt8,
    UInt16,
    UInt32,
    UInt64,
    UInt128,
    USize,
    Float32,
    Float64,
    Str,
    Unit,
    Never,
  }

  pub struct BasicBlock<'mir> {
    pub instructions: &'mir [Instr],
    pub terminal: &'mir TerminalInstr,
  }

  pub struct BinOperation {
    pub operand0: usize,
    pub operand1: usize,
    pub op: BinOp,
  }

  #[repr(u8)]
  pub enum BinOp {
    Add,
    FAdd,
    Sub,
    FSub,
    Mul,
    FMul,
    SDiv,
    UDiv,
    FDiv,
  }

  pub struct NumLit {
    pub(crate) repr: u64,
    pub(crate) bits: u8,
    pub(crate) kind: NumLitKind,
  }

  pub(crate) enum NumLitKind {
    Regular,
    Signed,
    Floating,
  }

  extern "Rust" {
    type Function<'mir>;
    unsafe fn path<'mir>(self: &Function<'mir>) -> &'mir Path;
    unsafe fn abi(self: &Function<'_>) -> Abi;
    unsafe fn linkage(self: &Function<'_>) -> Linkage;
    unsafe fn params<'f>(self: &'f Function<'_>) -> &'f [String];
    unsafe fn inputs<'f, 'mir>(
      self: &'f Function<'mir>,
    ) -> &'f [*const Type<'mir>];
    unsafe fn output<'mir, 'f>(self: &'f Function<'mir>) -> &'mir Type<'mir>;
    unsafe fn body<'mir>(self: &Function<'mir>) -> *const Body<'mir>;

    type Body<'mir>;
    unsafe fn variables<'b, 'mir>(
      self: &'b Body<'mir>,
    ) -> &'b [*const Type<'mir>];
    unsafe fn blocks<'mir>(self: &Body<'mir>) -> &'mir [BasicBlock<'mir>];

    type Type<'mir>;
    fn sized(self: &Type<'_>) -> bool;
    unsafe fn as_primitive<'mir>(self: &Type<'mir>) -> *const PrimTy;
    unsafe fn as_ref_type<'mir>(self: &Type<'mir>) -> *const Type<'mir>;

    type Path;
    fn mangle(self: &Path) -> String;

    type Instr;
    fn as_bin_op(self: &Instr) -> *const BinOperation;
    fn as_num_lit(self: &Instr) -> *const NumLit;

    type TerminalInstr;
    fn as_ret_void(self: &TerminalInstr) -> bool;
    fn as_ret_val(self: &TerminalInstr) -> *const usize;
  }
}

pub struct Function<'mir> {
  pub path: &'mir Path,
  pub abi: Abi,
  pub linkage: Linkage,
  pub params: Vec<String>,
  pub inputs: Vec<&'mir Type<'mir>>,
  pub output: &'mir Type<'mir>,
  pub body: Option<Body<'mir>>,
}

impl<'mir> Function<'mir> {
  fn path(&self) -> &'mir Path {
    self.path
  }

  fn abi(&self) -> Abi {
    self.abi
  }

  fn linkage(&self) -> Linkage {
    self.linkage
  }

  fn params(&self) -> &[String] {
    &self.params
  }

  fn inputs<'f>(&'f self) -> &'f [*const Type<'mir>] {
    unsafe { mem::transmute(self.inputs.as_slice()) }
  }

  fn output(&self) -> &'mir Type<'mir> {
    self.output
  }

  fn body(&self) -> *const Body<'mir> {
    match &self.body {
      Some(body) => body,
      None => ptr::null(),
    }
  }
}

pub struct Body<'mir> {
  pub variables: Vec<&'mir Type<'mir>>,
  pub blocks: &'mir [BasicBlock<'mir>],
}

impl<'mir> Body<'mir> {
  fn variables(&self) -> &[*const Type<'mir>] {
    unsafe { mem::transmute(self.variables.as_slice()) }
  }

  fn blocks(&self) -> &'mir [BasicBlock<'mir>] {
    self.blocks
  }
}

impl NumLit {
  pub fn from_bool(b: bool) -> Self {
    NumLit {
      bits: 1,
      repr: b.into(),
      kind: NumLitKind::Signed,
    }
  }

  pub fn from_i8(n: i8) -> Self {
    Self {
      kind: NumLitKind::Signed,
      ..Self::from_u8(n.try_into().unwrap())
    }
  }

  pub fn from_i16(n: i16) -> Self {
    Self {
      kind: NumLitKind::Signed,
      ..Self::from_u16(n.try_into().unwrap())
    }
  }

  pub fn from_i32(n: i32) -> Self {
    Self {
      kind: NumLitKind::Signed,
      ..Self::from_u32(n.try_into().unwrap())
    }
  }

  pub fn from_i64(n: i64) -> Self {
    Self {
      kind: NumLitKind::Signed,
      ..Self::from_u64(n.try_into().unwrap())
    }
  }

  pub fn from_i128(n: i128) -> Self {
    Self {
      kind: NumLitKind::Signed,
      ..Self::from_u64(n.try_into().unwrap())
    }
  }

  pub fn from_u8(n: u8) -> Self {
    Self {
      bits: 8,
      repr: n.into(),
      kind: NumLitKind::Regular,
    }
  }

  pub fn from_u16(n: u16) -> Self {
    Self {
      bits: 16,
      repr: n.into(),
      kind: NumLitKind::Regular,
    }
  }

  pub fn from_u32(n: u32) -> Self {
    Self {
      bits: 32,
      repr: n.into(),
      kind: NumLitKind::Regular,
    }
  }

  pub fn from_u64(n: u64) -> Self {
    Self {
      bits: 64,
      repr: n,
      kind: NumLitKind::Regular,
    }
  }

  pub fn from_f32(f: f32) -> Self {
    unsafe {
      let mut repr = 0;
      let p: *mut u64 = &mut repr;
      let p = p as *mut f32;
      *p = f;
      Self {
        bits: 32,
        repr,
        kind: NumLitKind::Floating,
      }
    }
  }

  pub fn from_f64(f: f64) -> Self {
    unsafe {
      let mut repr = 0;
      let p: *mut u64 = &mut repr;
      let p = p as *mut f64;
      *p = f;
      Self {
        bits: 32,
        repr,
        kind: NumLitKind::Floating,
      }
    }
  }
}

#[derive(Clone)]
pub enum Type<'mir> {
  Primitive(PrimTy),
  Basic,
  Tuple,
  Function,
  Selph,
  Ref(&'mir Type<'mir>),
  Err,
}

impl<'mir> Type<'mir> {
  pub fn sized(&self) -> bool {
    match self {
      Type::Primitive(PrimTy::Str) => false,
      Type::Primitive(_) => true,
      Type::Basic => todo!(),
      Type::Tuple => todo!(),
      Type::Function => todo!(),
      Type::Selph => todo!(),
      Type::Ref(_) => true,
      Type::Err => true,
    }
  }

  fn as_primitive(&self) -> *const PrimTy {
    match self {
      Type::Primitive(prim) => prim,
      _ => ptr::null(),
    }
  }

  fn as_ref_type(&self) -> *const Type<'mir> {
    match self {
      Type::Ref(inner) => *inner,
      _ => ptr::null(),
    }
  }
}

pub struct Path {
  pub segments: Vec<Box<str>>,
}

impl Path {
  #[must_use]
  fn mangle(&self) -> String {
    // TODO implement proper name mangling
    self.segments.join("$")
  }
}

impl FromStr for PrimTy {
  type Err = ();

  fn from_str(s: &str) -> Result<Self, Self::Err> {
    match s {
      "i8" => Ok(PrimTy::Int8),
      "i16" => Ok(PrimTy::Int16),
      "i32" => Ok(PrimTy::Int32),
      "i64" => Ok(PrimTy::Int64),
      "i128" => Ok(PrimTy::Int128),
      "isize" => Ok(PrimTy::ISize),
      "u8" => Ok(PrimTy::UInt8),
      "u16" => Ok(PrimTy::UInt16),
      "u32" => Ok(PrimTy::UInt32),
      "u64" => Ok(PrimTy::UInt64),
      "u128" => Ok(PrimTy::UInt128),
      "usize" => Ok(PrimTy::USize),
      "f32" => Ok(PrimTy::Float32),
      "f64" => Ok(PrimTy::Float64),
      "!" => Ok(PrimTy::Never),
      _ => Err(()),
    }
  }
}

pub enum Instr {
  BinOp(BinOperation),
  NumLit(NumLit),
}

impl Instr {
  fn as_bin_op(&self) -> *const BinOperation {
    match self {
      Instr::BinOp(bin_op) => bin_op,
      _ => ptr::null(),
    }
  }

  fn as_num_lit(&self) -> *const NumLit {
    match self {
      Instr::NumLit(lit) => lit,
      _ => ptr::null(),
    }
  }
}

#[derive(Copy, Clone)]
pub enum TerminalInstr {
  RetVoid,
  RetVal(usize),
}

impl TerminalInstr {
  pub const RET_VOID: &'static Self = &TerminalInstr::RetVoid;

  fn as_ret_void(&self) -> bool {
    matches!(self, TerminalInstr::RetVoid)
  }

  fn as_ret_val(&self) -> *const usize {
    match self {
      TerminalInstr::RetVal(idx) => idx,
      _ => ptr::null(),
    }
  }
}
