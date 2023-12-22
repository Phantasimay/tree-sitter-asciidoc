#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_BANG = 1,
  anon_sym_DQUOTE = 2,
  anon_sym_POUND = 3,
  anon_sym_DOLLAR = 4,
  anon_sym_PERCENT = 5,
  anon_sym_AMP = 6,
  anon_sym_SQUOTE = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_STAR = 10,
  anon_sym_PLUS = 11,
  anon_sym_COMMA = 12,
  anon_sym_DASH = 13,
  anon_sym_DOT = 14,
  anon_sym_SLASH = 15,
  anon_sym_COLON = 16,
  anon_sym_SEMI = 17,
  anon_sym_LT = 18,
  anon_sym_EQ = 19,
  anon_sym_GT = 20,
  anon_sym_QMARK = 21,
  anon_sym_AT = 22,
  anon_sym_LBRACK = 23,
  anon_sym_BSLASH = 24,
  anon_sym_RBRACK = 25,
  anon_sym_CARET = 26,
  anon_sym__ = 27,
  anon_sym_BQUOTE = 28,
  anon_sym_LBRACE = 29,
  anon_sym_PIPE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_TILDE = 32,
  aux_sym__word_token1 = 33,
  sym__whitespace = 34,
  sym__eof = 35,
  sym__line_ending = 36,
  sym_atx_h1_marker = 37,
  sym_atx_h2_marker = 38,
  sym_atx_h3_marker = 39,
  sym_atx_h4_marker = 40,
  sym_atx_h5_marker = 41,
  sym_document = 42,
  sym_atx_heading1 = 43,
  sym__atx_heading_content = 44,
  sym__line = 45,
  sym__word = 46,
  sym__newline = 47,
  sym__last_token_punctuation = 48,
  aux_sym__line_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_RBRACK] = "]",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TILDE] = "~",
  [aux_sym__word_token1] = "_word_token1",
  [sym__whitespace] = "_whitespace",
  [sym__eof] = "_eof",
  [sym__line_ending] = "_line_ending",
  [sym_atx_h1_marker] = "atx_h1_marker",
  [sym_atx_h2_marker] = "atx_h2_marker",
  [sym_atx_h3_marker] = "atx_h3_marker",
  [sym_atx_h4_marker] = "atx_h4_marker",
  [sym_atx_h5_marker] = "atx_h5_marker",
  [sym_document] = "document",
  [sym_atx_heading1] = "atx_heading1",
  [sym__atx_heading_content] = "_atx_heading_content",
  [sym__line] = "inline",
  [sym__word] = "_word",
  [sym__newline] = "_newline",
  [sym__last_token_punctuation] = "_last_token_punctuation",
  [aux_sym__line_repeat1] = "_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym__word_token1] = aux_sym__word_token1,
  [sym__whitespace] = sym__whitespace,
  [sym__eof] = sym__eof,
  [sym__line_ending] = sym__line_ending,
  [sym_atx_h1_marker] = sym_atx_h1_marker,
  [sym_atx_h2_marker] = sym_atx_h2_marker,
  [sym_atx_h3_marker] = sym_atx_h3_marker,
  [sym_atx_h4_marker] = sym_atx_h4_marker,
  [sym_atx_h5_marker] = sym_atx_h5_marker,
  [sym_document] = sym_document,
  [sym_atx_heading1] = sym_atx_heading1,
  [sym__atx_heading_content] = sym__atx_heading_content,
  [sym__line] = sym__line,
  [sym__word] = sym__word,
  [sym__newline] = sym__newline,
  [sym__last_token_punctuation] = sym__last_token_punctuation,
  [aux_sym__line_repeat1] = aux_sym__line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym__line_ending] = {
    .visible = false,
    .named = true,
  },
  [sym_atx_h1_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_h2_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_h3_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_h4_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_h5_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_atx_heading1] = {
    .visible = true,
    .named = true,
  },
  [sym__atx_heading_content] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__last_token_punctuation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_heading_content = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_heading_content] = "heading_content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_heading_content, 0},
  [1] =
    {field_heading_content, 1},
  [2] =
    {field_heading_content, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '!') ADVANCE(2);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(21);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '@') ADVANCE(23);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '^') ADVANCE(27);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '`') ADVANCE(29);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '~') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(34);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token__line_ending = 1,
  ts_external_token_atx_h1_marker = 2,
  ts_external_token_atx_h2_marker = 3,
  ts_external_token_atx_h3_marker = 4,
  ts_external_token_atx_h4_marker = 5,
  ts_external_token_atx_h5_marker = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__line_ending] = sym__line_ending,
  [ts_external_token_atx_h1_marker] = sym_atx_h1_marker,
  [ts_external_token_atx_h2_marker] = sym_atx_h2_marker,
  [ts_external_token_atx_h3_marker] = sym_atx_h3_marker,
  [ts_external_token_atx_h4_marker] = sym_atx_h4_marker,
  [ts_external_token_atx_h5_marker] = sym_atx_h5_marker,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token__line_ending] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
  },
  [2] = {
    [ts_external_token_atx_h1_marker] = true,
  },
  [3] = {
    [ts_external_token__line_ending] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym__word_token1] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__line_ending] = ACTIONS(1),
    [sym_atx_h1_marker] = ACTIONS(1),
    [sym_atx_h2_marker] = ACTIONS(1),
    [sym_atx_h3_marker] = ACTIONS(1),
    [sym_atx_h4_marker] = ACTIONS(1),
    [sym_atx_h5_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(8),
    [sym_atx_heading1] = STATE(9),
    [sym_atx_h1_marker] = ACTIONS(3),
  },
  [2] = {
    [sym__atx_heading_content] = STATE(7),
    [sym__line] = STATE(10),
    [sym__word] = STATE(4),
    [sym__newline] = STATE(11),
    [aux_sym__line_repeat1] = STATE(4),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(5),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(5),
    [anon_sym_QMARK] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(5),
    [anon_sym__] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(5),
    [aux_sym__word_token1] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(7),
    [sym__line_ending] = ACTIONS(9),
  },
  [3] = {
    [sym__line] = STATE(12),
    [sym__word] = STATE(4),
    [aux_sym__line_repeat1] = STATE(4),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(5),
    [anon_sym_AMP] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(5),
    [anon_sym_QMARK] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(5),
    [anon_sym_CARET] = ACTIONS(5),
    [anon_sym__] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(5),
    [aux_sym__word_token1] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(5),
    [sym__line_ending] = ACTIONS(11),
  },
  [4] = {
    [sym__word] = STATE(5),
    [aux_sym__line_repeat1] = STATE(5),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_CARET] = ACTIONS(13),
    [anon_sym__] = ACTIONS(13),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(13),
    [aux_sym__word_token1] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(13),
    [sym__line_ending] = ACTIONS(15),
  },
  [5] = {
    [sym__word] = STATE(5),
    [aux_sym__line_repeat1] = STATE(5),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym__word_token1] = ACTIONS(17),
    [sym__whitespace] = ACTIONS(17),
    [sym__line_ending] = ACTIONS(20),
  },
  [6] = {
    [anon_sym_BANG] = ACTIONS(20),
    [anon_sym_DQUOTE] = ACTIONS(20),
    [anon_sym_POUND] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(20),
    [anon_sym_PERCENT] = ACTIONS(20),
    [anon_sym_AMP] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(20),
    [anon_sym_STAR] = ACTIONS(20),
    [anon_sym_PLUS] = ACTIONS(20),
    [anon_sym_COMMA] = ACTIONS(20),
    [anon_sym_DASH] = ACTIONS(20),
    [anon_sym_DOT] = ACTIONS(20),
    [anon_sym_SLASH] = ACTIONS(20),
    [anon_sym_COLON] = ACTIONS(20),
    [anon_sym_SEMI] = ACTIONS(20),
    [anon_sym_LT] = ACTIONS(20),
    [anon_sym_EQ] = ACTIONS(20),
    [anon_sym_GT] = ACTIONS(20),
    [anon_sym_QMARK] = ACTIONS(20),
    [anon_sym_AT] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(20),
    [anon_sym_BSLASH] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(20),
    [anon_sym_CARET] = ACTIONS(20),
    [anon_sym__] = ACTIONS(20),
    [anon_sym_BQUOTE] = ACTIONS(20),
    [anon_sym_LBRACE] = ACTIONS(20),
    [anon_sym_PIPE] = ACTIONS(20),
    [anon_sym_RBRACE] = ACTIONS(20),
    [anon_sym_TILDE] = ACTIONS(20),
    [aux_sym__word_token1] = ACTIONS(20),
    [sym__whitespace] = ACTIONS(20),
    [sym__line_ending] = ACTIONS(20),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(22), 1,
      sym__line_ending,
    STATE(13), 1,
      sym__newline,
  [7] = 1,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
  [15] = 1,
    ACTIONS(28), 1,
      sym__line_ending,
  [19] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [23] = 1,
    ACTIONS(32), 1,
      sym__line_ending,
  [27] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 7,
  [SMALL_STATE(9)] = 11,
  [SMALL_STATE(10)] = 15,
  [SMALL_STATE(11)] = 19,
  [SMALL_STATE(12)] = 23,
  [SMALL_STATE(13)] = 27,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [24] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atx_heading_content, 1, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atx_heading1, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atx_heading_content, 2, .production_id = 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atx_heading1, 3, .production_id = 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_asciidoc_external_scanner_create(void);
void tree_sitter_asciidoc_external_scanner_destroy(void *);
bool tree_sitter_asciidoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_asciidoc_external_scanner_serialize(void *, char *);
void tree_sitter_asciidoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asciidoc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_asciidoc_external_scanner_create,
      tree_sitter_asciidoc_external_scanner_destroy,
      tree_sitter_asciidoc_external_scanner_scan,
      tree_sitter_asciidoc_external_scanner_serialize,
      tree_sitter_asciidoc_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
