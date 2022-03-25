use crate::{command_ext::CommandExt, result_ext::ResultExt, PROJECT_ROOT};
use clap::Parser;
use std::fs::File;
use std::io::{Read, Seek, SeekFrom};
use std::{
  io::{self, Write},
  path::Path,
  process,
  process::Command,
  slice,
};

/// Generate the tree-sitter parser and optionally review the snapshot tests
#[derive(Parser)]
pub struct Cli {
  /// Run tests and review snapshots after parser is generated.
  #[clap(long)]
  test: bool,
}

pub fn main(Cli { test }: Cli) -> ! {
  let dir = Path::new(PROJECT_ROOT).join("tree-sitter");

  // generate the parser
  let mut yarn = Command::new("yarn");
  yarn.arg("generate").current_dir(&dir).wait().exit_on_err();

  // update the end of file to have exactly one newline
  fix_eof(&dir.join("src/grammar.json"))
    .context("failed fixing eol for 'grammar.json'")
    .exit_on_err();
  fix_eof(&dir.join("src/node-types.json"))
    .context("failed fixing eol for 'node-types.json'")
    .exit_on_err();

  if !test {
    process::exit(0);
  }

  crate::insta::main(crate::insta::Cli::default());
}

fn fix_eof(path: &Path) -> Result<(), io::Error> {
  let mut file = File::options().read(true).write(true).open(path)?;

  let mut pos: u64 = 0;
  let mut buffer = b'\n';
  let mut has_carriage_return = false;
  while buffer == b'\n' {
    pos += 1;

    file.seek(SeekFrom::End(-(pos as i64)))?;
    file.read_exact(slice::from_mut(&mut buffer))?;

    if buffer == b'\r' {
      has_carriage_return = true;
      pos -= 1;
      file.seek(SeekFrom::End(-(pos as i64)))?;
    }
  }

  match pos {
    2 => (),
    3 if has_carriage_return => (),
    _ => {
      let len = file.seek(SeekFrom::End(0))?;
      file.set_len(len - pos + 1)?;
      file.seek(SeekFrom::End(0))?;
      file.write_all(if has_carriage_return { b"\r\n" } else { b"\n" })?;
      file.sync_all()?;
    }
  }

  Ok(())
}
