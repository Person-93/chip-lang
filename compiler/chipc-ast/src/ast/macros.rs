#[macro_export]
macro_rules! ast_nodes {
  (
    $(
      $(#[$attr:meta])*
      pub $object_kind:tt $name:ident $tokens:tt
    )*
  ) => {
    $(
      ast_node_impl!{ $object_kind $name $tokens }
    )*
  };
}

macro_rules! ast_node_impl {
  (
    $(#[$attr:meta])*
    struct $name:ident $kind:literal
  ) => {
    $(#[$attr])*
    #[derive(Copy, Clone)]
    pub struct $name<'ast>(Node<'ast>);

    impl<'ast> AstNode<'ast> for $name<'ast> {
      fn new(node: Node<'ast>) -> Option<Self> {
        (node.kind() == $kind).then(|| Self(node))
      }

      fn node(&self) -> Node<'ast> {
        self.0
      }
    }

    forward_to_node! { $name }
  };

  (
    $(#[$attr:meta])*
      enum $name:ident {
      $(
        $(#[$variant_attr:meta])*
        $variant:ident($inner:ident),
      )*
    }
  ) => {
    $(#[$attr])*
    #[derive(Clone)]
    pub enum $name<'ast> {
      $(
        $(#[$variant_attr])*
        $variant($inner<'ast>)
      ),*,
    }

    impl<'ast> AstNode<'ast> for $name<'ast> {
      fn new(node: Node<'ast>) -> Option<Self> {
        None $(.or_else(|| Option::from($inner::new(node)).map(Self::$variant)))*
      }

      fn node(&self) -> Node<'ast> {
        match self {
          $(Self::$variant(child) => child.node()),*,
        }
      }
    }

    forward_to_node! { $name }
  };
}

#[macro_export]
macro_rules! keywords {
  (
    $($name:ident $symbol:literal)*
  ) => {
    $(
      #[derive(Copy, Clone)]
      pub struct $name<'ast>(Node<'ast>);

      impl<'ast> $name<'ast> {
        fn new(node: Node<'ast>) -> Option<Self> {
          (node.kind() == $symbol).then(|| Self(node))
        }

        fn node(&self) -> Node<'ast> {
          self.0
        }

        pub const SYMBOL: &'static str = $symbol;
      }

      forward_to_node! { $name }
    )*
  };
}

#[macro_export]
macro_rules! forward_to_node {
  ($name:ident) => {
    impl<'ast> $name<'ast> {
      pub fn start_position(&self) -> Point {
        self.node().start_position()
      }

      pub fn end_position(&self) -> Point {
        self.node().end_position()
      }

      pub fn start_byte(&self) -> usize {
        self.node().start_byte()
      }

      pub fn end_byte(&self) -> usize {
        self.node().end_byte()
      }

      pub fn byte_range(&self) -> std::ops::Range<usize> {
        self.node().byte_range()
      }
    }
  };
}

#[macro_export]
macro_rules! typed_iter {
  (
    $(
      $(#[$attr:meta])*
      $vis:vis struct $name:ident: $type:ident $(= $field:literal)?
    )*
  ) => {
    $(typed_iter_dispatch! { $vis $name $type $($field)? })*
  };
}

macro_rules! typed_iter_dispatch {
  (
    $(#[$attr:meta])*
    $vis:vis $name:ident $type:ident
  ) => {
    typed_iter_impl! {
      $vis $name $type |cursor: &TreeCursor<'ast>| $type::new(cursor.node())
    }
  };

  (
    $(#[$attr:meta])*
    $vis:vis $name:ident $type:ident $field:literal
  ) => {
    typed_iter_impl! {
      $vis $name $type
      |cursor: &TreeCursor<'ast>| {
        match cursor.field_name() {
          Some(name) if name == $field => {
            let node = cursor.node();
            Some($type::new(node).unwrap_or_else(|| {
              panic!(
                "unexpected node `{}` in field `{}` creating {}",
                node.kind(),
                $field,
                type_name::<Self::Item>(),
              );
            }))
          }
          _ => None,
        }
      }
    }
  };
}

macro_rules! typed_iter_impl {
  (
    $(#[$attr:meta])*
    $vis:vis $name:ident $type:ident $mapping:expr
  ) => {
    $([$attr])*
    #[derive(Clone)]
    $vis struct $name<'ast> {
      cursor: Option<TreeCursor<'ast>>,
      parent: Node<'ast>,
    }

    impl<'ast> $name<'ast> {
      fn new(node: Node<'ast>) -> Self {
        let mut cursor = node.walk();
        Self {
          cursor: cursor.goto_first_child().then(|| cursor),
          parent: node,
        }
      }

      #[allow(dead_code)]
      fn node(&self) -> Node<'ast> {
        self.parent
      }
    }

    #[automatically_derived]
    impl<'ast> Iterator for $name<'ast> {
      type Item = $type<'ast>;

      #[allow(clippy::redundant_closure_call)]
      fn next(&mut self) -> Option<Self::Item> {
        let cursor = self.cursor.as_mut()?;
        let object = ($mapping)(&cursor).or_else(|| {
          loop {
            if !cursor.goto_next_sibling() {
              break None;
            }
            let node = ($mapping)(&cursor);
            if node.is_some() {
              break node;
            }
          }
        });
        if !cursor.goto_next_sibling() {
          self.cursor = None;
        }
        object
      }
    }
  };
}
