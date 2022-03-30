#![forbid(unsafe_code)]

#[macro_use]
extern crate xtask_utils;

use clap::{Parser, Subcommand};
use std::{
  panic::{self, PanicInfo},
  process,
};

#[derive(Parser)]
struct Cli {
  #[clap(subcommand)]
  task: Task,
}

tasks! {
  insta
  new_crate
  parser
  safety_check
}

fn main() -> ! {
  Cli::parse().task.run()
}

const PROJECT_ROOT: &str = concat!(env!("CARGO_MANIFEST_DIR"), "/../");
