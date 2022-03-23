#![forbid(unsafe_code)]

use insta::glob;
pub use insta::{
  assert_debug_snapshot, assert_display_snapshot, assert_json_snapshot,
  assert_snapshot, assert_yaml_snapshot,
};
use std::fs;

pub fn run_cases(mut func: impl FnMut(String)) {
  glob!("cases/*.chip", |path| {
    func(fs::read_to_string(path).expect("read snapshot test case"));
  });
}
