use crate::{CommandExt, ErrorExt, Parser, ResultExt};
use std::{env, process::Command};

/// Run `cargo nextest run` then `cargo insta review`
#[derive(Default, Parser)]
pub struct Cli {}

pub fn main(Cli {}: Cli) -> ! {
  cargo()
    .args(["nextest", "run"])
    .env("INSTA_FORCE_PASS", "1")
    .wait()
    .exit_on_err();
  cargo().args(["insta", "review"]).exec().exit();
}

fn cargo() -> Command {
  env::var_os("CARGO").map_or_else(|| Command::new("cargo"), Command::new)
}
