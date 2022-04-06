use chip_snapshot_tests::{assert_snapshot, cases, run_case};
use chipc_ast::Ast;
use chipc_codegen::CodeGen;
use cxx::let_cxx_string;

#[chip_test_harness::nextest_main(snapshot)]
fn main(name: &str) {
  let source = run_case(name);
  let ast = Ast::parse(&source);
  let hir = chipc_ast_lowering::lower("test-package".to_owned(), &ast);
  let mir = chipc_hir_lowering::lower(&hir);
  let mut code_gen = CodeGen::new("test-package", mir.root);
  let code_gen = code_gen.pin_mut();
  let code_gen = code_gen.as_ref();

  let_cxx_string!(output = "");
  code_gen.print_llvm_ir_to_string(output.as_mut());
  let output = output.to_str().unwrap().trim();

  let mut processed = String::new();
  for line in output.lines() {
    if line.strip_prefix("target datalayout = ").is_some() {
      processed += "target datalayout = \"<redacted>\"\n";
    } else if line.strip_prefix("target triple = ").is_some() {
      processed += "target triple = \"<redacted>\"\n";
    } else if line.strip_prefix("%Size = type { ").is_some() {
      processed += "%Size = type { [redacted] }\n";
    } else {
      processed += line;
      processed.push('\n');
    }
  }
  let processed = processed.trim();

  assert_snapshot!(processed);
}
