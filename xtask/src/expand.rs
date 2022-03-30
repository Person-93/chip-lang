use clap::Parser;
use xtask_utils::run_cmd;

/// Run `cargo expand`, pipe the output to rustfmt, and save it to tmp.rs
#[derive(Parser)]
pub struct Cli {
  /// Expand only the specified test target
  #[clap(long)]
  test: Option<String>,

  /// Local path to module to expand
  item: Option<String>,
}

pub fn main(Cli { test, item }: Cli) -> ! {
  let test = test.map_or(String::new(), |test| format!("--test={test}"));
  let item = item.unwrap_or_default();

  let expand = format!("cargo expand {test} -- {item}");

  run_cmd!(expand | "rustfmt" > "tmp.rs");
}
