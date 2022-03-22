use insta::glob;
use std::fs;

pub fn run_cases(mut func: impl FnMut(String)) {
  glob!("cases/*.chip", |path| {
    func(fs::read_to_string(path).expect("read snapshot test case"));
  });
}
