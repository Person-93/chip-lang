#![forbid(unsafe_code)]

pub use insta::{
  assert_debug_snapshot, assert_display_snapshot, assert_json_snapshot,
  assert_snapshot, assert_yaml_snapshot, with_settings,
};
use std::{fs, path::Path};

const CASES_DIR: &str = concat!(env!("CARGO_MANIFEST_DIR"), "/cases");

pub fn cases() -> impl Iterator<Item = String> {
  Path::new(CASES_DIR).read_dir().unwrap().filter_map(|file| {
    let file = file.unwrap().path();
    (file.extension().unwrap().to_str().unwrap() == "chip")
      .then(|| file.file_stem().unwrap().to_str().unwrap().to_owned())
  })
}

pub fn run_case(name: &str) -> String {
  let mut path = Path::new(CASES_DIR).join(name);
  path.set_extension("chip");
  fs::read_to_string(&path).unwrap_or_else(|_| {
    panic!("failed to read file at {}", path.to_string_lossy())
  })
}
