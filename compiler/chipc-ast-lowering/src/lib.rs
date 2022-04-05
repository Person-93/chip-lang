#![forbid(unsafe_code)]

use chipc_arena::Arena;
use chipc_ast::{
  Annotated, Ast, Expr as AstExpr, ExternItem, FunctionModifierKind,
  GenericArg as AstGenericArg, Item as AstItem, Literal as AstLiteral,
  PathStart as AstPathStart, StatementKind, StrLit, Type as AstType,
  VisibilityRestriction,
};
use chipc_hir::{
  Abi, Constness, Expr, Extern, FnSig, GenericArg, HirArena, HirContext, HirId,
  HirIdFactory, Identifier, Infer, Item, Literal, LiteralKind, Node, Nodes,
  NumLit, NumLitState, Package, PathSegment, PathStart, Scopes, SelfType, Type,
  Unsafety, Visibility,
};
use std::{
  cell::{Cell, RefCell},
  iter,
};

pub fn lower<'ast: 'hir, 'hir>(
  name: String,
  ast: &'hir Ast<'ast>,
) -> HirContext<'hir> {
  LoweringContext {
    ast,
    arena: Default::default(),
    nodes: Default::default(),
    scopes: Default::default(),
    id_factory: Default::default(),
  }
  .lower_package(name)
}

struct LoweringContext<'ast: 'hir, 'hir> {
  ast: &'hir Ast<'ast>,
  arena: HirArena<'hir>,
  nodes: RefCell<Nodes<'hir>>,
  scopes: Scopes<'hir>,
  id_factory: HirIdFactory<'hir>,
}

impl<'ast: 'hir, 'hir> LoweringContext<'ast, 'hir> {
  fn lower_package(self, name: String) -> HirContext<'hir> {
    let items = self.ast.root().items().map(|item| self.lower_item(item));
    let items = self.arena.alloc_iter(items.flatten());

    let root = Package { items };
    let root = self.insert_node(root);

    HirContext::new(
      name,
      self.arena,
      self.nodes.into_inner(),
      root,
      self.id_factory,
    )
  }

  fn lower_item(
    &self,
    item: AstItem<'ast>,
  ) -> Box<dyn Iterator<Item = Item<'hir>> + '_> {
    match item {
      AstItem::Function(function) => Box::new(iter::once_with(move || {
        Item::Function(self.lower_function(function))
      })),
      AstItem::ExternBlock(block) => Box::new(self.lower_extern_block(block)),
    }
  }

  fn lower_function(
    &self,
    function: chipc_ast::Function<'ast>,
  ) -> chipc_hir::Function<'hir> {
    let id = self.id_factory.next_id();

    let (constness, unsafety, extern_) =
      self.lower_function_modifier(function.modifier());

    let (params, inputs): (Vec<_>, Vec<_>) = function
      .inputs()
      .map(|input| (input.ident(), input.ty()))
      .unzip();

    let params = self.scopes.with_block_scope(id, || {
      let params = params.into_iter().map(|param| self.lower_identifier(param));
      self.arena.alloc_iter(params)
    });

    let inputs = inputs.into_iter().map(|input| self.lower_type(input));
    let inputs = self.insert_nodes(inputs);

    let expr = self.scopes.with_block_scope(id, || {
      let expr = self.lower_expr(function.body());
      self.insert_node(expr)
    });

    chipc_hir::Function {
      id,
      name: self.lower_identifier(function.name()),
      vis: self.lower_visibility(function.vis(), true),
      sig: FnSig {
        constness,
        unsafety,
        extern_,
        inputs,
        output: self.lower_output_type(function.output()),
      },
      params,
      body: Some(expr.as_body()),
    }
  }

  fn lower_extern_block(
    &self,
    block: chipc_ast::ExternBlock<'ast>,
  ) -> impl Iterator<Item = Item<'hir>> + '_ {
    let abi = self.lower_abi(block.abi());

    block.items().map(move |item| match item {
      ExternItem::Function(function) => {
        Item::Function(self.lower_extern_function(function, abi))
      }
    })
  }

  fn lower_extern_function(
    &self,
    function: chipc_ast::ExternFunction<'ast>,
    abi: Abi,
  ) -> chipc_hir::Function<'hir> {
    let (names, types) = self.lower_params(function.inputs());

    chipc_hir::Function {
      id: self.id_factory.next_id(),
      name: self.lower_identifier(function.name()),
      vis: self.lower_visibility(function.vis(), true),
      sig: FnSig {
        constness: Constness::No,
        unsafety: Unsafety::Yes,
        extern_: Extern::Yes(abi),
        inputs: types,
        output: self.lower_output_type(function.output()),
      },
      params: names,
      body: None,
    }
  }

  fn lower_output_type(
    &self,
    ty: Option<chipc_ast::Type<'ast>>,
  ) -> &'hir Type<'hir> {
    ty.map_or(Type::UNIT, |output| {
      let output = self.lower_type(output);
      self.insert_node(output)
    })
  }

  fn lower_params(
    &self,
    params: impl Iterator<Item = Annotated<'ast>>,
  ) -> (&'hir [Identifier<'hir>], &'hir [Type<'hir>]) {
    let (names, types): (Vec<_>, Vec<_>) =
      params.map(|input| (input.ident(), input.ty())).unzip();

    let names = names.into_iter().map(|name| self.lower_identifier(name));
    let names = self.arena.alloc_iter(names);

    let types = types.into_iter().map(|ty| self.lower_type(ty));
    let types = self.insert_nodes(types);

    (names, types)
  }

  fn lower_expr(&self, expr: AstExpr<'ast>) -> Expr<'hir> {
    match expr {
      AstExpr::Literal(lit) => Expr::Literal(self.lower_literal(lit)),
      AstExpr::Tuple(expr) => Expr::Tuple(self.lower_tuple_expression(expr)),
      AstExpr::CodeBlock(block) => {
        Expr::Codeblock(self.lower_code_block(block))
      }
      AstExpr::Basic(ty) => Expr::Type(self.lower_basic_type(ty)),
      AstExpr::Unit(unit) => Expr::Unit(self.lower_unit(unit)),
    }
  }

  fn lower_literal(&self, lit: AstLiteral<'ast>) -> Literal<'hir> {
    let kind = match lit {
      AstLiteral::Str(lit) => LiteralKind::Str(lit.value(self.ast.source())),
      AstLiteral::Bool(lit) => LiteralKind::Bool(lit.value()),
      AstLiteral::Num(lit) => {
        let radix = match lit.prefix().map(|node| node.value(self.ast.source()))
        {
          Some("0x") => 16,
          Some("0b") => 2,
          Some(prefix) => panic!("invalid num lit prefix `{prefix}`"),
          None => 10,
        };
        let dec_part = lit.digits().value(self.ast.source());
        let dec_part = u128::from_str_radix(dec_part, radix)
          .unwrap_or_else(|_| panic!("failed parsing num lit `{dec_part}`"));
        let float_part = lit
          .float_part()
          .map(|node| node.value(self.ast.source()).parse().unwrap());
        let suffix = lit.suffix();

        let state = suffix.map_or(NumLitState::default(), |node| {
          NumLitState::new(node.value(self.ast.source()))
        });

        let state = if float_part.is_some() {
          state.float()
        } else {
          state
        };

        LiteralKind::Num(NumLit {
          dec_part,
          float_part,
          state: Cell::new(state),
        })
      }
    };
    Literal {
      id: self.id_factory.next_id(),
      kind,
    }
  }

  fn lower_tuple_expression(
    &self,
    expr: chipc_ast::TupleExpression<'ast>,
  ) -> chipc_hir::TupleExpression<'hir> {
    let elements = expr.elements().map(|element| self.lower_expr(element));
    let elements = self.insert_nodes(elements);

    chipc_hir::TupleExpression {
      id: self.id_factory.next_id(),
      elements,
    }
  }

  fn lower_code_block(
    &self,
    block: chipc_ast::CodeBlock<'ast>,
  ) -> chipc_hir::Codeblock<'hir> {
    let statements = block.statements().filter_map(|statement| {
      Some(match statement.kind()? {
        StatementKind::LetBinding(binding) => {
          let binding = self.lower_let_binding(binding);
          let binding = self.arena.alloc(binding);
          chipc_hir::Statement::LetBinding(binding)
        }
        StatementKind::Expr(expr) => {
          let expr = self.lower_expr(expr);
          let expr = self.arena.alloc(expr);
          chipc_hir::Statement::Expr(expr)
        }
      })
    });
    let statements = self.arena.alloc_iter(statements);

    let trailing = block
      .trailing()
      .map(|trailing| self.lower_expr(trailing))
      .map(|trailing| self.insert_node(trailing));

    chipc_hir::Codeblock {
      id: self.id_factory.next_id(),
      statements,
      trailing,
    }
  }

  fn lower_let_binding(
    &self,
    binding: chipc_ast::LetBinding<'ast>,
  ) -> chipc_hir::LetBinding<'hir> {
    let type_ = binding.ty().map(|ty| {
      let ty = self.lower_type(ty);
      &*self.arena.alloc(ty)
    });

    let value = self.lower_expr(binding.value());
    let value = self.arena.alloc(value);

    chipc_hir::LetBinding {
      id: self.id_factory.next_id(),
      ident: self.lower_identifier(binding.identifier()),
      type_,
      value,
    }
  }

  fn lower_type(&self, ty: AstType<'ast>) -> Type<'hir> {
    match ty {
      AstType::Basic(ty) => Type::Basic(self.lower_basic_type(ty)),
      AstType::Unit(ty) => Type::Unit(self.lower_unit(ty)),
      AstType::Tuple(ty) => Type::Tuple(self.lower_tuple_type(ty)),
      AstType::Function(ty) => Type::Function(self.lower_function_type(ty)),
      AstType::Selph(_) => Type::Selph(SelfType {
        id: self.id_factory.next_id(),
      }),
    }
  }

  fn lower_basic_type(
    &self,
    ty: chipc_ast::BasicType<'ast>,
  ) -> chipc_hir::BasicType<'hir> {
    let path = self.lower_path(ty.path());
    let path = self.insert_node(path);

    chipc_hir::BasicType {
      id: self.id_factory.next_id(),
      path,
      generics: self.lower_generic_args(ty.generics()),
    }
  }

  fn lower_tuple_type(
    &self,
    ty: chipc_ast::TupleType<'ast>,
  ) -> chipc_hir::TupleType<'hir> {
    let elements = ty.elements().map(|element| self.lower_type(element));
    let elements = self.insert_nodes(elements);

    chipc_hir::TupleType {
      id: self.id_factory.next_id(),
      elements,
    }
  }

  fn lower_function_type(
    &self,
    ty: chipc_ast::FunctionType<'ast>,
  ) -> chipc_hir::FunctionType<'hir> {
    let (constness, unsafety, extern_) =
      self.lower_function_modifier(ty.modifier());

    let inputs = ty.inputs().map(|input| self.lower_type(input));
    let inputs = self.insert_nodes(inputs);

    let output = ty.output().map_or(Type::UNIT, |output| {
      let output = self.lower_type(output);
      self.insert_node(output)
    });

    chipc_hir::FunctionType {
      id: self.id_factory.next_id(),
      sig: FnSig {
        constness,
        unsafety,
        extern_,
        inputs,
        output,
      },
    }
  }

  fn lower_function_modifier(
    &self,
    modifier: Option<chipc_ast::FunctionModifier<'ast>>,
  ) -> (Constness, Unsafety, Extern) {
    modifier.map_or((Constness::No, Unsafety::No, Extern::No), |modifier| {
      match modifier.kind() {
        FunctionModifierKind::Const(_) => {
          (Constness::Yes, Unsafety::No, Extern::No)
        }
        FunctionModifierKind::Unsafe(_) => {
          (Constness::No, Unsafety::Yes, Extern::No)
        }
        FunctionModifierKind::Extern(extern_) => (
          Constness::No,
          Unsafety::Yes,
          Extern::Yes(self.lower_abi(extern_.abi())),
        ),
      }
    })
  }

  fn lower_abi(&self, abi: Option<StrLit<'ast>>) -> Abi {
    abi.map_or(Abi::Default, |abi| match abi.value(self.ast.source()) {
      "c" | "C" => Abi::C,
      _ => Abi::Invalid, // TODO emit diagnostic
    })
  }

  fn lower_unit(&self, _unit: chipc_ast::Unit<'ast>) -> chipc_hir::Unit<'hir> {
    chipc_hir::Unit {
      id: self.id_factory.next_id(),
    }
  }

  fn lower_path(&self, path: chipc_ast::Path<'ast>) -> chipc_hir::Path<'hir> {
    let start = match path.start() {
      AstPathStart::Segment(first) => PathStart::Segment {
        rooted: first.rooted.is_some(),
        segment: PathSegment {
          ident: self.lower_identifier(first.segment),
        },
      },
      AstPathStart::Package(_) => PathStart::Scoped(HirId::ROOT_ID),
      AstPathStart::Selph(_) => PathStart::Scoped(self.scopes.mod_scope()),
      AstPathStart::Super(iter) => {
        fn get_parent<'hir>(
          id: HirId<'hir>,
          scopes: &Scopes<'hir>,
          super_count: usize,
        ) -> Option<HirId<'hir>> {
          if super_count == 0 {
            Some(id)
          } else {
            scopes
              .visit(id, |scope| (!scope.is_root()).then(|| scope.parent_mod))
              .unwrap()
          }
        }

        let super_count = iter.count();

        match get_parent(self.scopes.mod_scope(), &self.scopes, super_count) {
          Some(scope) => PathStart::Scoped(scope),
          None => PathStart::Err, // TODO emit diagnostic
        }
      }
    };

    let segments = path.segments().map(|segment| PathSegment {
      ident: self.lower_identifier(segment),
    });
    let segments = self.arena.alloc_iter(segments);

    chipc_hir::Path {
      id: self.id_factory.next_id(),
      start,
      segments,
    }
  }

  fn lower_generic_args(
    &self,
    generics: impl IntoIterator<Item = AstGenericArg<'ast>>,
  ) -> &'hir [GenericArg<'hir>] {
    let generics = generics.into_iter().map(|generic| match generic {
      AstGenericArg::Infer(_) => {
        let infer = Infer {
          id: self.id_factory.next_id(),
        };
        let infer = self.insert_node(infer);
        GenericArg::Infer(infer)
      }
      AstGenericArg::Expr(expr) => {
        let expr = self.lower_expr(expr);
        let expr = self.insert_node(expr);
        GenericArg::Expr(expr)
      }
    });

    self.arena.alloc_iter(generics)
  }

  fn lower_identifier(
    &self,
    ident: chipc_ast::Identifier<'ast>,
  ) -> Identifier<'hir> {
    Identifier {
      id: self.id_factory.next_id(),
      value: ident.value(self.ast.source()),
    }
  }

  fn lower_visibility(
    &self,
    vis: Option<chipc_ast::Visibility<'ast>>,
    default_private: bool,
  ) -> Visibility<'hir> {
    vis.map_or_else(
      || {
        if default_private {
          Visibility::Private
        } else {
          Visibility::Public
        }
      },
      |vis| match vis.restriction() {
        None => Visibility::Public,
        Some(VisibilityRestriction::Selph(_)) => Visibility::Restricted {
          scope: self.scopes.mod_scope(),
        },
        Some(VisibilityRestriction::Super(_)) => Visibility::Restricted {
          scope: self
            .scopes
            .visit(self.scopes.mod_scope(), |scope| scope.parent_mod)
            .unwrap(),
        },
        Some(VisibilityRestriction::Package(_)) => Visibility::Restricted {
          scope: HirId::ROOT_ID,
        },
      },
    )
  }

  fn insert_node<T>(&self, object: T) -> &'hir T
  where
    HirArena<'hir>: Arena<'hir, T>,
    Node<'hir>: From<&'hir T>,
  {
    let object = self.arena.alloc(object);
    self.nodes.borrow_mut().insert(object);
    object
  }

  fn insert_nodes<T, I>(&self, iter: I) -> &'hir [T]
  where
    HirArena<'hir>: Arena<'hir, T>,
    Node<'hir>: From<&'hir T>,
    I: IntoIterator<Item = T>,
  {
    let objects = self.arena.alloc_iter(iter);
    let mut nodes = self.nodes.borrow_mut();
    for object in objects.iter() {
      nodes.insert(object);
    }
    objects
  }
}
