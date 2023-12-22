#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree_sitter/parser.h"

enum TokenType {
    LINE_ENDING,
    TOKEN_EOF,
    ATX_H1_MARKER,
    ATX_H2_MARKER,
    ATX_H3_MARKER,
    ATX_H4_MARKER,
    ATX_H5_MARKER,
};

typedef struct Scanner {
} Scanner;

static void mark_end(Scanner* s, TSLexer* lexer) {
    lexer->mark_end(lexer);
}

static void advance(Scanner* s, TSLexer* lexer) {
    lexer->advance(lexer, false);
}

static bool parse_atx_heading(Scanner* s, TSLexer* lexer, const bool* valid_symbols) {
    printf("parse atx heading\n");
    if (!valid_symbols[ATX_H1_MARKER]) {
        return false;
    }
    mark_end(s, lexer);

    int32_t level = 0;
    while (lexer->lookahead == '=' && level <= 4) {
        advance(s, lexer);
        ++level;
    }

    if (level > 5 || (lexer->lookahead != ' ' && lexer->lookahead != '\t' &&
                      lexer->lookahead != '\n' && lexer->lookahead != '\r')) {
        return false;
    }

    lexer->result_symbol = ATX_H1_MARKER + (level - 1);
    mark_end(s, lexer);
    printf("parse atx heading complete: %d\n", lexer->result_symbol);
    return true;
}

// static bool parse_line_ending(Scanner* s, TSLexer* lexer, const bool* valid_symbols) {
//     if (!valid_symbols[LINE_ENDING]) {
//         return false;
//     }
//
//     if (lexer->lookahead == '\r') {
//         lexer->advance(lexer, false);
//         if (lexer->lookahead == '\n') {
//             lexer->advance(lexer, false);
//         }
//     }
//
//     lexer->mark_end(lexer);
//     lexer->result_symbol = LINE_ENDING;
//     return true;
// }

static bool scan(Scanner* s, TSLexer* lexer, const bool* valid_symbols) {
    if (lexer->eof(lexer)) {
        if (valid_symbols[TOKEN_EOF]) {
            lexer->result_symbol = TOKEN_EOF;
            return true;
        }

        return false;
    }

    if (valid_symbols[LINE_ENDING]) {
        if (lexer->lookahead == '\r') {
            advance(s, lexer);
            mark_end(s, lexer);
            lexer->result_symbol = LINE_ENDING;
            return true;
        }

        return false;
    }

    if (lexer->get_column(lexer) == 0) {
        switch (lexer->lookahead) {
            case '=': {
                return parse_atx_heading(s, lexer, valid_symbols);
            }
        }
    }

    return false;
}

void* tree_sitter_asciidoc_external_scanner_create() {
    Scanner* s = (Scanner*)malloc(sizeof(Scanner));
    memset(s, 0, sizeof(Scanner));
    return s;
}

void tree_sitter_asciidoc_external_scanner_destroy(void* payload) {
    free(payload);
}

unsigned tree_sitter_asciidoc_external_scanner_serialize(
    void* payload, char* buffer
) {
    memcpy(buffer, payload, sizeof(Scanner));
    return sizeof(Scanner);
}

void tree_sitter_asciidoc_external_scanner_deserialize(
    void* payload, const char* buffer, unsigned length
) {
    if (length < sizeof(Scanner)) {
        return;
    }

    memcpy(payload, buffer, sizeof(Scanner));
}

bool tree_sitter_asciidoc_external_scanner_scan(
    void* payload, TSLexer* lexer, const bool* valid_symbols
) {
    return scan((Scanner*)payload, lexer, valid_symbols);
}
