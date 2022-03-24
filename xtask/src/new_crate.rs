use crate::{result_ext::ResultExt, PROJECT_ROOT};
use clap::Parser;
use std::{fs, path::Path, process};

#[derive(Parser)]
pub struct Cli {
  /// The name of the new crate
  name: String,
}

pub fn main(Cli { name }: Cli) -> ! {
  let name = format!("chipc-{name}");
  let mut dir = Path::new(PROJECT_ROOT).join("compiler").join(&name);

  fs::create_dir(&dir)
    .with_context(|| format!("failed to create directory for crate `{name}`"))
    .exit_on_err();

  fs::write(
    dir.join("Cargo.toml"),
    format!(
      r#"[package]
name = "{name}"
version = "0.0.0"
edition = "2021"
publish = false
"#
    ),
  )
  .with_context(|| format!("failed to write cargo manifest for crate `{name}`"))
  .exit_on_err();

  dir.push("src");
  fs::create_dir(&dir)
    .with_context(|| {
      format!("failed to create src directory for crate `{name}`")
    })
    .exit_on_err();

  dir.push("lib.rs");
  fs::write(dir, "#![forbid(unsafe_code)]\n")
    .with_context(|| format!("failed to create lib.rs for crate `{name}`"))
    .exit_on_err();

  println!("\ncreated crate `{name}`");

  process::exit(0);
}
