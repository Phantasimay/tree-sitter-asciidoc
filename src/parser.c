#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 7
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  aux_sym_title1_token1 = 2,
  sym__eof = 3,
  sym_atx_h1_marker = 4,
  sym_atx_h2_marker = 5,
  sym_atx_h3_marker = 6,
  sym_atx_h4_marker = 7,
  sym_atx_h5_marker = 8,
  sym_document = 9,
  sym_title1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [aux_sym_title1_token1] = "title_content",
  [sym__eof] = "_eof",
  [sym_atx_h1_marker] = "atx_h1_marker",
  [sym_atx_h2_marker] = "atx_h2_marker",
  [sym_atx_h3_marker] = "atx_h3_marker",
  [sym_atx_h4_marker] = "atx_h4_marker",
  [sym_atx_h5_marker] = "atx_h5_marker",
  [sym_document] = "document",
  [sym_title1] = "title1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [aux_sym_title1_token1] = aux_sym_title1_token1,
  [sym__eof] = sym__eof,
  [sym_atx_h1_marker] = sym_atx_h1_marker,
  [sym_atx_h2_marker] = sym_atx_h2_marker,
  [sym_atx_h3_marker] = sym_atx_h3_marker,
  [sym_atx_h4_marker] = sym_atx_h4_marker,
  [sym_atx_h5_marker] = sym_atx_h5_marker,
  [sym_document] = sym_document,
  [sym_title1] = sym_title1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_title1_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__eof] = {
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
  [sym_title1] = {
    .visible = true,
    .named = true,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_title1_token1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_title1_token1);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token_atx_h1_marker = 1,
  ts_external_token_atx_h2_marker = 2,
  ts_external_token_atx_h3_marker = 3,
  ts_external_token_atx_h4_marker = 4,
  ts_external_token_atx_h5_marker = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_atx_h1_marker] = sym_atx_h1_marker,
  [ts_external_token_atx_h2_marker] = sym_atx_h2_marker,
  [ts_external_token_atx_h3_marker] = sym_atx_h3_marker,
  [ts_external_token_atx_h4_marker] = sym_atx_h4_marker,
  [ts_external_token_atx_h5_marker] = sym_atx_h5_marker,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token_atx_h1_marker] = true,
    [ts_external_token_atx_h2_marker] = true,
    [ts_external_token_atx_h3_marker] = true,
    [ts_external_token_atx_h4_marker] = true,
    [ts_external_token_atx_h5_marker] = true,
  },
  [2] = {
    [ts_external_token_atx_h1_marker] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym_atx_h1_marker] = ACTIONS(1),
    [sym_atx_h2_marker] = ACTIONS(1),
    [sym_atx_h3_marker] = ACTIONS(1),
    [sym_atx_h4_marker] = ACTIONS(1),
    [sym_atx_h5_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(3),
    [sym_title1] = STATE(4),
    [sym_atx_h1_marker] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      anon_sym_,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
  [12] = 1,
    ACTIONS(11), 1,
      aux_sym_title1_token1,
  [16] = 1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
  [SMALL_STATE(4)] = 8,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 16,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 3),
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
