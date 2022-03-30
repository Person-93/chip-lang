use chipc_hir::{
  HirArena, HirContext, HirIdFactory, HirPretty, Nodes, Package, PrettyOutput,
};

#[test]
fn simple_tree() {
  let thing = Thing(
    "parent",
    vec![
      Thing(
        "one",
        vec![
          Thing(
            "one_one",
            vec![Thing("one_one_one", vec![]), Thing("one_one_two", vec![])],
          ),
          Thing("one_two", vec![]),
        ],
      ),
      Thing("two", vec![]),
      Thing("three", vec![]),
    ],
  );

  let expected = r"parent
  one
    one_one
      one_one_one

      one_one_two

    one_two

  two

  three
";
  let actual = thing.pretty_print(&dummy_ctx()).format().to_string();
  assert_eq!(actual, expected);

  struct Thing(&'static str, Vec<Thing>);

  impl<'hir> HirPretty<'hir> for Thing {
    fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
      PrettyOutput::new(self.0.to_owned()).add_children(true, &self.1, ctx)
    }
  }
}

#[test]
fn empty_parent() {
  let parent = Parent(vec![
    Child("one"),
    Child("two"),
    Child("three"),
    Child("four"),
  ]);
  let output = parent.pretty_print(&dummy_ctx()).format().to_string();
  assert_eq!(output, "one\ntwo\nthree\nfour\n");

  struct Parent(Vec<Child>);

  impl<'hir> HirPretty<'hir> for Parent {
    fn pretty_print(&self, ctx: &HirContext<'hir>) -> PrettyOutput {
      PrettyOutput::default().add_children(false, &self.0, ctx)
    }
  }

  struct Child(&'static str);

  impl<'hir> HirPretty<'hir> for Child {
    fn pretty_print(&self, _: &HirContext<'hir>) -> PrettyOutput {
      PrettyOutput::new(self.0.to_owned())
    }
  }
}

fn dummy_ctx() -> HirContext<'static> {
  const PACKAGE: Package = Package { items: &[] };

  HirContext::new(
    HirArena::default(),
    Nodes::default(),
    &PACKAGE,
    HirIdFactory::default(),
  )
}
