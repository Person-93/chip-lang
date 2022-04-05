use cargo_metadata::{MetadataCommand, Target};
use clap::Parser;
use console::style;
use std::{
  fs::File,
  io::{BufRead, BufReader},
};
use xtask_utils::prelude::*;

const ALLOWED: &[&str] = &[
  // Directly allocates memory
  "chipc-arena",
  // Calls an extern function
  "tree-sitter-chip",
];

/// Check that all binary and library targets forbid unsafe code
#[derive(Parser)]
pub struct Cli {}

pub fn main(_: Cli) -> ! {
  let metadata = MetadataCommand::new().no_deps().exec().exit_on_err();

  let mut missing_forbid = 0;

  for package in &metadata.packages {
    if ALLOWED.contains(&package.name.as_str()) {
      continue;
    }

    for target in &package.targets {
      if !should_check(target) {
        continue;
      }

      let mut first_line = String::new();
      BufReader::new(File::open(&target.src_path).exit_on_err())
        .read_line(&mut first_line)
        .exit_on_err();

      if first_line.trim() != "#![forbid(unsafe_code)]" {
        missing_forbid += 1;

        let path = target
          .src_path
          .strip_prefix(&metadata.workspace_root)
          .unwrap();
        eprintln!(
          "{} should start with `{}`",
          style(path).bright().red().bold(),
          style("#![forbid(unsafe_code)]").bright().bold()
        );
      }
    }
  }

  // no need to take the time to run destructors
  std::process::exit(missing_forbid.clamp(0, 1));
}

fn should_check(target: &Target) -> bool {
  let mut is_bin_or_lib = false;
  for kind in &target.kind {
    if kind == "test" {
      return false;
    }
    if is_bin_or_lib || kind == "bin" || kind == "lib" {
      is_bin_or_lib = true;
    }
  }
  is_bin_or_lib
}
