#![forbid(unsafe_code)]
#![allow(dead_code, unused_variables)] // TODO remove allow

use chipc_arena::Arena;
use chipc_hir::{
  self as hir, Codeblock, Expr, Extern, FloatBits, HirContext, IntBits, Item,
  LetBinding, LiteralKind, NumLitState, Statement,
};
use chipc_mir::{
  self as mir,
  context::{MirArena, MirContext},
  Abi, BasicBlock, Body, Instr, Linkage, NumLit, Path, PrimTy, TerminalInstr,
  Type,
};
use std::iter;

pub fn lower<'mir, 'hir>(hir: &HirContext<'hir>) -> MirContext<'mir> {
  let ctx = LoweringContext::new(hir);
  let root = ctx.lower_package(hir.root);
  MirContext::new(ctx.arena, hir.name.clone(), root)
}

struct LoweringContext<'mir, 'hir: 'l, 'l> {
  hir: &'l HirContext<'hir>,
  arena: MirArena<'mir>,
}

impl<'mir, 'hir: 'l, 'l> LoweringContext<'mir, 'hir, 'l> {
  fn new(hir: &'l HirContext<'hir>) -> Self {
    LoweringContext {
      hir,
      arena: Default::default(),
    }
  }

  fn lower_package(
    &self,
    package: &hir::Package<'hir>,
  ) -> &'mir mir::Package<'mir> {
    let mut functions = Vec::new();
    for item in package.items {
      match item {
        Item::Function(function) => {
          functions.push(self.lower_function(function))
        }
      }
    }
    let functions = self.arena.alloc_iter(functions);
    let package = mir::Package { functions };
    self.arena.alloc(package)
  }

  fn lower_function(
    &self,
    function: &hir::Function<'hir>,
  ) -> mir::Function<'mir> {
    // TODO get actual path
    let path = self.arena.alloc(Path {
      segments: vec![function.name.value.to_owned().into_boxed_str()],
    });

    let (abi, linkage) = match function.sig.extern_ {
      Extern::Yes(hir::Abi::C) => (Abi::C, Linkage::Extern),
      Extern::Yes(hir::Abi::Invalid) => {
        panic!("invalid ABI found during HIR lowering")
      }
      Extern::Yes(hir::Abi::Default) => (Abi::Default, Linkage::Extern),
      Extern::No => (Abi::Default, Linkage::Intern),
    };

    let params = function
      .params
      .iter()
      .map(|ident| ident.value.to_owned())
      .collect();

    // TODO intern the types so we can return the same one
    let inputs = function
      .sig
      .inputs
      .iter()
      .map(|ty| &*self.arena.alloc(self.lower_type(ty)))
      .collect();

    let output = self.arena.alloc(self.lower_type(function.sig.output));

    let body = function.body.map(|body| self.lower_body(body));

    mir::Function {
      path,
      abi,
      linkage,
      params,
      inputs,
      output,
      body,
    }
  }

  fn lower_body(&self, body: hir::Body<'hir>) -> Body<'mir> {
    let hir::Body {
      expr,
      params,
      param_types,
    } = body;

    let mut variables = vec![];
    self.extract_body_variables(body.expr, &mut variables);

    let blocks = match expr {
      Expr::Literal(literal) => match &literal.kind {
        LiteralKind::Str(_) => todo!(),
        LiteralKind::Bool(b) => self.arena.alloc_iter(iter::once(BasicBlock {
          instructions: self
            .arena
            .alloc_iter(iter::once(Instr::NumLit(NumLit::from_bool(*b)))),
          terminal: self.arena.alloc(TerminalInstr::RetVal(0)),
        })),
        LiteralKind::Num(lit) => {
          self.arena.alloc_iter(iter::once(BasicBlock {
            instructions: self
              .arena
              .alloc_iter(iter::once(Instr::NumLit(self.lower_num_lit(lit)))),
            terminal: self.arena.alloc(TerminalInstr::RetVal(0)),
          }))
        }
      },
      Expr::Tuple(_) => todo!(),
      Expr::Codeblock(Codeblock {
        id: _,
        statements,
        trailing,
      }) => self.arena.alloc_iter(iter::once(BasicBlock {
        instructions: &[],
        terminal: TerminalInstr::RET_VOID,
      })),
      Expr::Type(_) => todo!(),
      Expr::Unit(_) => self.arena.alloc_iter(iter::once(BasicBlock {
        instructions: &[],
        terminal: TerminalInstr::RET_VOID,
      })),
    };

    Body { variables, blocks }
  }

  fn extract_body_variables(
    &self,
    expr: &Expr<'hir>,
    variables: &mut Vec<&'mir Type<'mir>>,
  ) {
    match expr {
      Expr::Literal(_) | Expr::Tuple(_) | Expr::Type(_) | Expr::Unit(_) => (),
      Expr::Codeblock(Codeblock {
        id: _,
        statements,
        trailing,
      }) => {
        for statement in statements.iter() {
          match statement {
            Statement::Expr(expr) => {
              self.extract_body_variables(expr, variables)
            }
            Statement::LetBinding(LetBinding {
              id: _,
              ident: _,
              type_,
              value,
            }) => {
              match type_ {
                Some(type_) => {
                  variables.push(self.arena.alloc(self.lower_type(type_)))
                }
                None => match self.infer_type(value) {
                  Some(ty) => variables.push(ty),
                  None => todo!(),
                },
              }
              self.extract_body_variables(value, variables);
            }
          }
        }
        if let Some(expr) = trailing {
          self.extract_body_variables(expr, variables);
        }
      }
    }
  }

  fn lower_type(&self, ty: &hir::Type<'hir>) -> Type<'mir> {
    match ty {
      hir::Type::Basic(ty) => self.lower_basic_type(ty),
      hir::Type::Unit(_) => Type::Primitive(PrimTy::Unit),
      hir::Type::Tuple(_) => todo!(),
      hir::Type::Function(_) => todo!(),
      hir::Type::Selph(_) => todo!(),
      hir::Type::Ref(_) => todo!(),
    }
  }

  fn lower_basic_type(&self, ty: &hir::BasicType<'hir>) -> Type<'mir> {
    match ty.path.as_ident() {
      Some(name) => match name.parse() {
        Ok(prim) => Type::Primitive(prim),
        Err(()) => todo!(),
      },
      None => todo!(),
    }
  }

  fn lower_num_lit(&self, lit: &hir::NumLit) -> mir::NumLit {
    match lit.state.get() {
      NumLitState::Unspecified if lit.float_part.is_some() => {
        let mut f = lit.dec_part as f32;
        if let Some(float_part) = lit.float_part {
          f += float_part as f32;
        }
        mir::NumLit::from_f32(f)
      }
      NumLitState::Unspecified => {
        mir::NumLit::from_i32(lit.dec_part.try_into().unwrap())
      }
      NumLitState::Float(FloatBits::ThirtyTwo) => {
        let mut f = lit.dec_part as f32;
        if let Some(float_part) = lit.float_part {
          f += float_part as f32;
        }
        mir::NumLit::from_f32(f)
      }
      NumLitState::Float(FloatBits::SixtyFour) => {
        let mut f = lit.dec_part as f64;
        if let Some(float_part) = lit.float_part {
          f += float_part;
        }
        mir::NumLit::from_f64(f)
      }
      NumLitState::Float(FloatBits::Unspecified) => {
        panic!("tried to lower an indeterminate num lit");
      }
      NumLitState::Signed(bits) => {
        if let Some(bits) = bits.as_single_val() {
          match bits {
            IntBits::Eight => {
              mir::NumLit::from_i8(lit.dec_part.try_into().unwrap())
            }
            IntBits::Sixteen => {
              mir::NumLit::from_i16(lit.dec_part.try_into().unwrap())
            }
            IntBits::ThirtyTwo => {
              mir::NumLit::from_i32(lit.dec_part.try_into().unwrap())
            }
            IntBits::SixtyFour => {
              mir::NumLit::from_i64(lit.dec_part.try_into().unwrap())
            }
            IntBits::OneTwentyEight => {
              mir::NumLit::from_i128(lit.dec_part.try_into().unwrap())
            }
          }
        } else if bits.contains(IntBits::ThirtyTwo) {
          mir::NumLit::from_i32(lit.dec_part.try_into().unwrap())
        } else {
          panic!("tried to lower an indeterminate num lit");
        }
      }
      NumLitState::Unsigned(bits) => {
        if let Some(bits) = bits.as_single_val() {
          match bits {
            IntBits::Eight => {
              mir::NumLit::from_u8(lit.dec_part.try_into().unwrap())
            }
            IntBits::Sixteen => {
              mir::NumLit::from_u16(lit.dec_part.try_into().unwrap())
            }
            IntBits::ThirtyTwo => {
              mir::NumLit::from_u32(lit.dec_part.try_into().unwrap())
            }
            IntBits::SixtyFour => {
              mir::NumLit::from_u64(lit.dec_part.try_into().unwrap())
            }
            IntBits::OneTwentyEight => {
              panic!("num lit can only be as high as u64::MAX")
            }
          }
        } else {
          panic!("tried to lower an indeterminate num lit");
        }
      }
      NumLitState::ISize => todo!(),
      NumLitState::USize => todo!(),
      NumLitState::Err => todo!(),
    }
  }

  //noinspection DuplicatedCode
  fn infer_type(&self, expr: &Expr<'hir>) -> Option<&'mir Type<'mir>> {
    match expr {
      Expr::Literal(hir::Literal {
        id: _,
        kind: LiteralKind::Str(_),
      }) => Some(self.arena.alloc(Type::Ref(&Type::Primitive(PrimTy::Str)))),

      Expr::Literal(hir::Literal {
        id: _,
        kind: LiteralKind::Bool(_),
      }) => Some(&Type::Primitive(PrimTy::Bool)),

      Expr::Literal(hir::Literal {
        id: _,
        kind: LiteralKind::Num(lit),
      }) => match lit.state.get() {
        NumLitState::Unspecified => Some(&Type::Primitive(PrimTy::Int32)),
        NumLitState::Float(FloatBits::ThirtyTwo) => {
          Some(&Type::Primitive(PrimTy::Float32))
        }
        NumLitState::Float(FloatBits::SixtyFour) => {
          Some(&Type::Primitive(PrimTy::Float64))
        }
        NumLitState::Float(FloatBits::Unspecified) => {
          Some(&Type::Primitive(PrimTy::Float32))
        }
        NumLitState::Signed(bits_range) => {
          bits_range.as_single_val().map(|bits| match bits {
            IntBits::Eight => &Type::Primitive(PrimTy::Int8),
            IntBits::Sixteen => &Type::Primitive(PrimTy::Int16),
            IntBits::ThirtyTwo => &Type::Primitive(PrimTy::Int32),
            IntBits::SixtyFour => &Type::Primitive(PrimTy::Int64),
            IntBits::OneTwentyEight => &Type::Primitive(PrimTy::Int128),
          })
        }
        NumLitState::Unsigned(bits_range) => {
          bits_range.as_single_val().map(|bits| match bits {
            IntBits::Eight => &Type::Primitive(PrimTy::UInt8),
            IntBits::Sixteen => &Type::Primitive(PrimTy::UInt16),
            IntBits::ThirtyTwo => &Type::Primitive(PrimTy::UInt32),
            IntBits::SixtyFour => &Type::Primitive(PrimTy::UInt64),
            IntBits::OneTwentyEight => &Type::Primitive(PrimTy::UInt128),
          })
        }
        NumLitState::ISize => Some(&Type::Primitive(PrimTy::ISize)),
        NumLitState::USize => Some(&Type::Primitive(PrimTy::USize)),
        NumLitState::Err => Some(&Type::Err),
      },

      Expr::Tuple(_) => todo!(),

      Expr::Codeblock(Codeblock {
        trailing: Some(expr),
        ..
      }) => self.infer_type(expr),

      Expr::Codeblock(Codeblock { trailing: None, .. }) => {
        Some(&Type::Primitive(PrimTy::Unit))
      }

      Expr::Type(_) => todo!(),

      Expr::Unit(_) => Some(&Type::Primitive(PrimTy::Unit)),
    }
  }
}
