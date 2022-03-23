use anyhow::{Context, Result as AnyResult};
use clap::Parser;
use std::{fs, path::Path};

#[derive(Parser)]
pub struct Cli {
  /// The name of the new crate
  name: String,
}

const PROJECT_ROOT: &str = concat!(env!("CARGO_MANIFEST_DIR"), "/../");

pub fn main(Cli { name }: Cli) -> AnyResult<()> {
  let name = format!("chipc-{name}");
  let mut dir = Path::new(PROJECT_ROOT).join("compiler").join(&name);

  fs::create_dir(&dir).with_context(|| {
    format!("failed to create directory for crate `{name}`")
  })?;

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
  .with_context(|| {
    format!("failed to write cargo manifest for crate `{name}`")
  })?;

  dir.push("src");
  fs::create_dir(&dir).with_context(|| {
    format!("failed to create src directory for crate `{name}`")
  })?;

  dir.push("lib.rs");
  fs::write(dir, "#![forbid(unsafe_code)]\n")
    .with_context(|| format!("failed to create lib.rs for crate `{name}`"))?;

  println!("\ncreated crate `{name}`");

  Ok(())
}
