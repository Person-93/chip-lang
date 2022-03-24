use std::{cell::Cell, marker::PhantomData};

#[derive(Copy, Clone, Ord, PartialOrd, Eq, PartialEq, Hash)]
pub struct HirId<'hir>(u32, PhantomData<&'hir ()>, PhantomData<*const ()>);

impl HirId<'_> {
  pub const ROOT_ID: HirId<'static> = HirId(0, PhantomData, PhantomData);
  pub const UNIT_ID: HirId<'static> = HirId(1, PhantomData, PhantomData);

  const END_RESERVED: u32 = 1;
}

#[derive(Copy, Clone, Ord, PartialOrd, Eq, PartialEq, Hash)]
pub struct BodyId<'hir>(pub(crate) HirId<'hir>);

pub struct HirIdFactory<'hir>(
  Cell<u32>,
  PhantomData<&'hir ()>,
  PhantomData<*const ()>,
);

impl Default for HirIdFactory<'_> {
  fn default() -> Self {
    Self(Cell::new(HirId::END_RESERVED), PhantomData, PhantomData)
  }
}

impl<'hir> HirIdFactory<'hir> {
  pub fn next_id(&self) -> HirId<'hir> {
    let n = self.0.get() + 1;
    self.0.set(n);
    HirId(n, PhantomData, PhantomData)
  }
}
