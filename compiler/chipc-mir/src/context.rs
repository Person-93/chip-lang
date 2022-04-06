use crate::{BasicBlock, Function, Instr, Package, Path, TerminalInstr, Type};

pub struct MirContext<'mir> {
  pub arena: MirArena<'mir>,
  pub name: String,
  pub root: &'mir Package<'mir>,
}

chipc_arena::declare_arena! {
  #[derive(Default)]
  pub struct MirArena<'mir> {
    { path: Path, }
    dropless {
      Package<'mir> Function<'mir> Type<'mir> String &'mir Type<'mir>
      BasicBlock<'mir> Instr TerminalInstr
    }
  }
}

impl<'mir> MirContext<'mir> {
  pub fn new(
    arena: MirArena<'mir>,
    name: String,
    root: &'mir Package<'mir>,
  ) -> Self {
    MirContext { arena, name, root }
  }
}
