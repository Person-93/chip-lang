use crate::PROJECT_ROOT;
use clap::Parser;
use std::{
  path::{Path, PathBuf},
  process,
  process::Command,
};
use xtask_utils::prelude::*;

/// Run a clang tool on the c++ part of the codebase
#[derive(Parser)]
pub struct Cli {
  /// Which clang tool to run
  #[clap(subcommand)]
  tool: Tool,
}

#[derive(Parser)]
enum Tool {
  /// Run clang-format
  Format,
  /// Run clang-tidy
  Tidy,
}

pub fn main(Cli { tool }: Cli) -> ! {
  let projects = glob("compiler/*/compile_commands.json").map(|mut json| {
    json.pop();
    json
  });
  match tool {
    Tool::Format => {
      for mut project in projects {
        let mut cmd = Command::new("clang-format");
        cmd.current_dir(&project).arg("-i");

        project.push("**");
        project.push("*.hpp");

        let pattern = glob(project.to_str().unwrap());
        cmd.args(pattern);

        project.pop();
        project.push("*.cpp");

        let pattern = glob(project.to_str().unwrap());
        cmd.args(pattern);

        cmd.wait().exit_on_err();
      }
      process::exit(0);
    }
    Tool::Tidy => {
      for mut project in projects {
        let mut cmd = Command::new("clang-tidy");
        cmd
          .current_dir(&project)
          .arg("-p")
          .arg(project.join("compile_commands.json"));

        project.push("**");
        project.push("*.cpp");

        let pattern = glob(project.to_str().unwrap());
        cmd.args(pattern);

        project.pop();
        project.pop();
        let project = project
          .strip_prefix(Path::new(PROJECT_ROOT).canonicalize().unwrap())
          .unwrap();
        println!("Running clang-tidy for '{}'...", project.display());

        cmd.wait().exit_on_err();
      }
      process::exit(0);
    }
  }
}

fn glob(path: &str) -> impl Iterator<Item = PathBuf> {
  glob::glob(Path::new(PROJECT_ROOT).join(path).to_str().unwrap())
    .unwrap()
    .map(|res| res.unwrap().canonicalize().unwrap())
}
