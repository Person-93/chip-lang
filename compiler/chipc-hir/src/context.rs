use crate::{
  Expr, GenericArg, HirId, HirIdFactory, Identifier, Infer, Item, LetBinding,
  Node, Package, Path, PathSegment, Statement, Type,
};
use std::{
  cell::{Cell, RefCell},
  collections::HashMap,
};

pub struct HirContext<'hir> {
  arena: HirArena<'hir>,
  nodes: Nodes<'hir>,
  pub root: &'hir Package<'hir>,
  id_factory: HirIdFactory<'hir>,
}

chipc_arena::declare_arena! {
  #[derive(Default)]
  pub struct HirArena<'hir> {
    {
      exprs: Expr<'hir>,
      infers: Infer<'hir>,
    }
    dropless {
      Package<'hir> Item<'hir> Identifier<'hir> Type<'hir> Statement<'hir>
      LetBinding<'hir> Path<'hir>PathSegment<'hir> GenericArg<'hir>
    }
  }
}

impl<'hir> HirContext<'hir> {
  pub fn new(
    arena: HirArena<'hir>,
    nodes: Nodes<'hir>,
    root: &'hir Package<'hir>,
    hir_id_factory: HirIdFactory<'hir>,
  ) -> Self {
    Self {
      arena,
      nodes,
      root,
      id_factory: hir_id_factory,
    }
  }

  pub fn next_id(&self) -> HirId<'hir> {
    self.id_factory.next_id()
  }

  pub fn nodes(&self) -> impl Iterator<Item = Node<'hir>> + '_ {
    self.nodes.0.values().copied()
  }

  pub fn exprs(&self) -> impl Iterator<Item = &Expr<'hir>> {
    self.arena.exprs.iter()
  }

  pub fn infers(&self) -> impl Iterator<Item = &Infer<'hir>> {
    self.arena.infers.iter()
  }
}

#[derive(Default)]
pub struct Nodes<'hir>(HashMap<HirId<'hir>, Node<'hir>>);

impl<'hir> Nodes<'hir> {
  pub fn insert<T>(&mut self, object: &'hir T)
  where
    Node<'hir>: From<&'hir T>,
  {
    let node = Node::from(object);
    self.0.insert(node.id(), node);
  }
}

pub struct Scopes<'hir> {
  scopes: RefCell<HashMap<HirId<'hir>, Scope<'hir>>>,
  mod_scope: Cell<HirId<'hir>>,
  block_scope: Cell<HirId<'hir>>,
}

impl Default for Scopes<'_> {
  fn default() -> Self {
    Scopes {
      scopes: Default::default(),
      mod_scope: Cell::new(HirId::ROOT_ID),
      block_scope: Cell::new(HirId::ROOT_ID),
    }
  }
}

impl<'hir> Scopes<'hir> {
  pub fn visit<T>(
    &self,
    id: HirId<'hir>,
    f: impl FnOnce(&Scope<'hir>) -> T,
  ) -> Option<T> {
    let scopes = self.scopes.borrow();
    scopes.get(&id).map(f)
  }

  pub fn mod_scope(&self) -> HirId<'hir> {
    self.mod_scope.get()
  }

  pub fn block_scope(&self) -> HirId<'hir> {
    self.block_scope.get()
  }

  pub fn with_mod_scope<T>(&self, id: HirId<'hir>, f: impl FnOnce() -> T) -> T {
    let mut scopes = self.scopes.borrow_mut();
    let scope = scopes.entry(id).or_insert_with_key(|id| Scope {
      id: *id,
      is_mod: true,
      parent_mod: self.mod_scope.get(),
      parent_block: self.block_scope.get(),
      mods: Default::default(),
      blocks: Default::default(),
    });
    assert!(scope.is_mod);

    let original_mod = self.mod_scope.replace(id);
    let original_block = self.block_scope.replace(id);

    scopes
      .get(&original_block)
      .unwrap()
      .mods
      .borrow_mut()
      .push(id);
    drop(scopes);

    let t = f();

    self.mod_scope.set(original_mod);
    self.block_scope.set(original_block);

    t
  }

  pub fn with_block_scope<T>(
    &self,
    id: HirId<'hir>,
    f: impl FnOnce() -> T,
  ) -> T {
    let mut scopes = self.scopes.borrow_mut();
    let scope = scopes.entry(id).or_insert_with_key(|id| Scope {
      id: *id,
      is_mod: false,
      parent_mod: self.mod_scope.get(),
      parent_block: self.block_scope.get(),
      mods: Default::default(),
      blocks: Default::default(),
    });
    assert!(!scope.is_mod);

    let original_block = self.block_scope.replace(id);
    scopes
      .get(&original_block)
      .unwrap()
      .mods
      .borrow_mut()
      .push(id);
    drop(scopes);
    let t = f();
    self.block_scope.set(original_block);
    t
  }
}

#[non_exhaustive]
pub struct Scope<'hir> {
  pub id: HirId<'hir>,
  pub is_mod: bool,
  pub parent_mod: HirId<'hir>,
  pub parent_block: HirId<'hir>,
  pub mods: RefCell<Vec<HirId<'hir>>>,
  pub blocks: RefCell<Vec<HirId<'hir>>>,
}

impl<'hir> Scope<'hir> {
  pub fn is_root(&self) -> bool {
    self.id == self.parent_mod
  }

  pub fn visit_parent_mod<T>(
    &self,
    scopes: &Scopes<'hir>,
    f: impl FnOnce(&Scope<'hir>) -> T,
  ) -> T {
    scopes.visit(self.parent_mod, f).unwrap()
  }

  pub fn visit_parent_block<T>(
    &self,
    scopes: &Scopes<'hir>,
    f: impl FnOnce(&Scope<'hir>) -> T,
  ) -> T {
    scopes.visit(self.parent_block, f).unwrap()
  }

  pub fn visit_mods<T>(
    &self,
    scopes: &Scopes<'hir>,
    mut f: impl FnMut(&Scope<'hir>) -> T,
  ) -> Vec<T> {
    self
      .mods
      .borrow()
      .iter()
      .copied()
      .map(|id| scopes.visit(id, &mut f).unwrap())
      .collect()
  }

  pub fn visit_blocks<T>(
    &self,
    scopes: &Scopes<'hir>,
    mut f: impl FnMut(&Scope<'hir>) -> T,
  ) -> Vec<T> {
    self
      .blocks
      .borrow()
      .iter()
      .copied()
      .map(|id| scopes.visit(id, &mut f).unwrap())
      .collect()
  }
}
