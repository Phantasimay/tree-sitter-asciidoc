#include "tree_sitter/parser.h"

#undef EOF

extern "C" {
void* tree_sitter_asciidoc_external_scanner_create();
void tree_sitter_asciidoc_external_scanner_destroy(void* payload);
unsigned tree_sitter_asciidoc_external_scanner_serialize(
    void* payload, char* buffer
);
void tree_sitter_asciidoc_external_scanner_deserialize(
    void* payload, const char* buffer, unsigned length
);
bool tree_sitter_asciidoc_external_scanner_scan(
    void* payload, TSLexer* lexer, const bool* valid_symbols
);
}

enum TokenType {
    EOF,
};

void* tree_sitter_asciidoc_external_scanner_create() {
    return NULL;
}

void tree_sitter_asciidoc_external_scanner_destroy(void* payload) {
    // ...
}

unsigned tree_sitter_asciidoc_external_scanner_serialize(
    void* payload, char* buffer
) {
    return 0;
}

void tree_sitter_asciidoc_external_scanner_deserialize(
    void* payload, const char* buffer, unsigned length
) {
    // ...
}

bool tree_sitter_asciidoc_external_scanner_scan(
    void* payload, TSLexer* lexer, const bool* valid_symbols
) {
    if (valid_symbols[TokenType::EOF] && lexer->eof(lexer)) {
        lexer->result_symbol = TokenType::EOF;
        return true;
    }
    return false;
}
