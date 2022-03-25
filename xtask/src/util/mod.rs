mod command_ext;
mod result_ext;

pub use self::{command_ext::*, result_ext::*};

pub const PROJECT_ROOT: &str = concat!(env!("CARGO_MANIFEST_DIR"), "/../");

#[macro_export]
macro_rules! tasks {
  ($($name:ident)*) => {
    $(mod $name;)*

    #[derive(Subcommand)]
    #[allow(non_camel_case_types)]
    enum Task {
      $($name($name::Cli)),*
    }

    fn main() -> ! {
      match Cli::parse().task {
        $(Task::$name(cli) => self::$name::main(cli)),*
      }
    }
  };
}
