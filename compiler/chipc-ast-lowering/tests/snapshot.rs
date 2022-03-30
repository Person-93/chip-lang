use chip_snapshot_tests::{assert_snapshot, cases, run_case};
use chipc_ast::Ast;
use chipc_ast_lowering::lower_package;
use chipc_hir::HirPretty;

#[chip_test_harness::nextest_main(snapshot)]
fn main(name: &str) {
  let source = run_case(name);
  let ast = Ast::parse(&source);
  let hir = lower_package(&ast);
  let hir = format!("{}", hir.root.pretty_print(&hir).format());
  let hir = if hir.is_empty() {
    "// empty hir".to_string()
  } else {
    hir
  };
  assert_snapshot!(hir);
}
