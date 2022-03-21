use tree_sitter::Language;

#[cfg(test)]
mod tests;

pub fn language() -> Language {
  unsafe { tree_sitter_chip() }
}

extern "C" {
  pub(self) fn tree_sitter_chip() -> Language;
}
