#![forbid(unsafe_code)]

use clap::{Parser, Subcommand};
use util::*;

mod util;

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
