#![forbid(unsafe_code)]

use clap::{Parser, Subcommand};

mod command_ext;
mod generate_parser;
mod new_crate;
mod result_ext;
mod safety_check;

#[derive(Parser)]
struct Cli {
  #[clap(subcommand)]
  task: Task,
}

#[derive(Subcommand)]
enum Task {
  GenerateParser(generate_parser::Cli),
  NewCrate(new_crate::Cli),
  SafetyCheck,
}

fn main() -> ! {
  match Cli::parse().task {
    Task::GenerateParser(cli) => generate_parser::main(cli),
    Task::NewCrate(cli) => new_crate::main(cli),
    Task::SafetyCheck => safety_check::main(),
  }
}

const PROJECT_ROOT: &str = concat!(env!("CARGO_MANIFEST_DIR"), "/../");
