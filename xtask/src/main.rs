#![forbid(unsafe_code)]

use clap::{Parser, Subcommand};

mod command_ext;
mod new_crate;
mod parser;
mod result_ext;
mod safety_check;

#[derive(Parser)]
struct Cli {
  #[clap(subcommand)]
  task: Task,
}

#[derive(Subcommand)]
enum Task {
  Parser(parser::Cli),
  NewCrate(new_crate::Cli),
  SafetyCheck(safety_check::Cli),
}

fn main() -> ! {
  match Cli::parse().task {
    Task::Parser(cli) => parser::main(cli),
    Task::NewCrate(cli) => new_crate::main(cli),
    Task::SafetyCheck(cli) => safety_check::main(cli),
  }
}

const PROJECT_ROOT: &str = concat!(env!("CARGO_MANIFEST_DIR"), "/../");
