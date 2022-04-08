extern "C" {
  fn answer_to_life_the_universe_and_everything() -> i32;
}

fn main() {
  unsafe {
    assert_eq!(answer_to_life_the_universe_and_everything(), 42);
  }
}
