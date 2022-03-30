use crate::{HirContext, HirPretty, PrettyOutput};
use std::{cell::Cell, rc::Rc, sync::Arc};

impl<'hir, T: HirPretty<'hir> + ?Sized> HirPretty<'hir> for &T {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    (**self).pretty_print(ctx)
  }
}

impl<'hir, T: HirPretty<'hir> + ?Sized> HirPretty<'hir> for &mut T {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    (**self).pretty_print(ctx)
  }
}

impl<'hir, T: HirPretty<'hir> + ?Sized> HirPretty<'hir> for Box<T> {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    (**self).pretty_print(ctx)
  }
}

impl<'hir, T: HirPretty<'hir> + ?Sized> HirPretty<'hir> for Rc<T> {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    (**self).pretty_print(ctx)
  }
}

impl<'hir, T: HirPretty<'hir> + ?Sized> HirPretty<'hir> for Arc<T> {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    (**self).pretty_print(ctx)
  }
}

impl<'hir, T: HirPretty<'hir>> HirPretty<'hir> for Option<T> {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    self
      .as_ref()
      .map_or_else(Default::default, |t| t.pretty_print(ctx))
  }
}

impl<'hir, T: HirPretty<'hir> + Copy> HirPretty<'hir> for Cell<T> {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    self.get().pretty_print(ctx)
  }
}

impl<'hir, T: HirPretty<'hir>> HirPretty<'hir> for [T] {
  fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
    let mut source = String::new();

    let mut iter = self.iter();
    if let Some(item) = iter.next() {
      source = item.pretty_print(ctx).into_simple_string();
    }
    for item in iter {
      source += ", ";
      source += item.pretty_print(ctx).into_simple_string().as_str();
    }

    PrettyOutput::new(source)
  }
}
