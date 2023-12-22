{
  description = "Develop environment for tree-sitter-asciidoc";
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
    flake-utils = {
      url = "github:numtide/flake-utils";
    };
  };
  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs {
          inherit system;
          config.allowUnfree = true;
        };

      in
      {
        devShell = pkgs.mkShell {
          buildInputs = [
            pkgs.tree-sitter
            pkgs.graphviz
          ];
        };
      });
}
