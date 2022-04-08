use chip_test_harness::nextest_main;
use chipc_codegen::CodeGen;
use std::{collections::HashSet, env, fs, path::Path, process::Command};
use tempdir::TempDir;

#[nextest_main(with_name)]
fn main(name: &str) {
  let mut chip = this_dir().join(name);
  chip.set_extension("chip");
  let chip = fs::read_to_string(chip).unwrap();
  let ast = chipc_ast::Ast::parse(&chip);
  let hir = chipc_ast_lowering::lower(name.to_owned(), &ast);
  let mir = chipc_hir_lowering::lower(&hir);

  let out_dir = TempDir::new("").unwrap();

  let mut codegen = CodeGen::new(name, mir.root);
  let mut obj_file = out_dir.path().join(name);
  obj_file.set_extension("o");
  codegen
    .pin_mut()
    .as_ref()
    .emit_obj_file(obj_file.to_str().unwrap());

  let mut archive_file = out_dir.path().join(format!("lib{name}"));
  archive_file.set_extension("a");
  let ar = Command::new("ar")
    .arg("r")
    .arg(&archive_file)
    .arg(obj_file)
    .spawn()
    .expect("failed spawning ar")
    .wait()
    .expect("failed waiting for ar");
  assert!(ar.success(), "ar failed with {ar}");

  let mut exe_file = out_dir.path().join(name);
  exe_file.set_extension(env::consts::EXE_EXTENSION);
  let mut rust_file = this_dir().join(name);
  rust_file.set_extension("rs");
  let rustc = Command::new("rustc")
    .arg("-L")
    .arg(out_dir.path())
    .arg("-l")
    .arg(name)
    .arg("-o")
    .arg(exe_file)
    .arg(rust_file)
    .spawn()
    .expect("failed spawning rustc")
    .wait()
    .expect("failed waiting for rustc");
  assert!(rustc.success(), "rustc failed with {rustc}");

  out_dir.close().unwrap();
}

fn cases() -> impl IntoIterator<Item = String> {
  let mut chips = HashSet::new();
  let mut rusts = HashSet::new();

  for entry in fs::read_dir(this_dir()).unwrap() {
    let path = entry.unwrap().path();
    if path.extension().unwrap().to_str().unwrap() == "rs" {
      rusts.insert(path.file_stem().unwrap().to_str().unwrap().to_owned());
    } else if path
      .extension()
      .map_or(false, |ext| ext.to_str().unwrap() == "chip")
    {
      chips.insert(path.file_stem().unwrap().to_str().unwrap().to_owned());
    }
  }

  chips.intersection(&rusts).cloned().collect::<Vec<_>>()
}

fn this_dir() -> &'static Path {
  Path::new(concat!(env!("CARGO_MANIFEST_DIR"), "/tests/object"))
}
