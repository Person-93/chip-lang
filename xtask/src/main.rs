#![forbid(unsafe_code)]

use anyhow::Result;
use clap::{Parser, Subcommand};

mod new_crate;
mod safety_check;

#[derive(Parser)]
struct Cli {
  #[clap(subcommand)]
  task: Task,
}

#[derive(Subcommand)]
enum Task {
  NewCrate(new_crate::Cli),
  SafetyCheck,
}

fn main() -> Result<()> {
  match Cli::parse().task {
    Task::NewCrate(cli) => new_crate::main(cli),
    Task::SafetyCheck => safety_check::main(),
  }
}
