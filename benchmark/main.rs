use crate::duration::Counter;

mod duration;

fn bench_parser(code: &str) {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(tree_sitter_asciidoc::language())
        .expect("Error loading asciidoc grammar");
    let tree = parser.parse(code, None).unwrap();
}

fn main() {
    let counter = Counter::new();
    for _ in 0..100 {
        bench_parser(include_str!("./asciidoc-recommended-practices.adoc"));
    }
    println!("bench_parser: {}", counter.elapsed().unwrap());
}
