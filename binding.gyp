# -*- coding: utf-8 -*-
{
  "targets": [
    {
      "target_name": "tree_sitter_asciidoc_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c",
        # If your language uses an external scanner, add it here.
        "src/scanner.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
