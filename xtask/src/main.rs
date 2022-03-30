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
  panic::set_hook(Box::new(panic_hook));

  Cli::parse().task.run()
}

fn panic_hook(info: &PanicInfo) {
  eprint!("panicked");

  if let Some(location) = info.location() {
    eprint!(": {location}");
  }

  if let Some(message) = info.payload().downcast_ref::<&str>() {
    eprint!(": {message}");
  } else if let Some(message) = info.payload().downcast_ref::<String>() {
    eprint!(": {message}");
  }

  eprintln!();

  process::exit(1);
}

const PROJECT_ROOT: &str = concat!(env!("CARGO_MANIFEST_DIR"), "/../");
