#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  aux_sym_title1_token1 = 2,
  anon_sym_EQ_EQ = 3,
  anon_sym_EQ_EQ_EQ = 4,
  anon_sym_EQ_EQ_EQ_EQ = 5,
  anon_sym_EQ_EQ_EQ_EQ_EQ = 6,
  sym_document = 7,
  sym__block = 8,
  sym__title = 9,
  sym_title1 = 10,
  sym_title2 = 11,
  sym_title3 = 12,
  sym_title4 = 13,
  sym_title5 = 14,
  aux_sym_document_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "= ",
  [aux_sym_title1_token1] = "title1_token1",
  [anon_sym_EQ_EQ] = "== ",
  [anon_sym_EQ_EQ_EQ] = "=== ",
  [anon_sym_EQ_EQ_EQ_EQ] = "==== ",
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = "===== ",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym__title] = "_title",
  [sym_title1] = "title1",
  [sym_title2] = "title2",
  [sym_title3] = "title3",
  [sym_title4] = "title4",
  [sym_title5] = "title5",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_title1_token1] = aux_sym_title1_token1,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ_EQ,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym__title] = sym__title,
  [sym_title1] = sym_title1,
  [sym_title2] = sym_title2,
  [sym_title3] = sym_title3,
  [sym_title4] = sym_title4,
  [sym_title5] = sym_title5,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_title1_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__title] = {
    .visible = false,
    .named = true,
  },
  [sym_title1] = {
    .visible = true,
    .named = true,
  },
  [sym_title2] = {
    .visible = true,
    .named = true,
  },
  [sym_title3] = {
    .visible = true,
    .named = true,
  },
  [sym_title4] = {
    .visible = true,
    .named = true,
  },
  [sym_title5] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '=') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '=') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_title1_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_title1_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_title1_token1] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(14),
    [sym__block] = STATE(2),
    [sym__title] = STATE(2),
    [sym_title1] = STATE(2),
    [sym_title2] = STATE(2),
    [sym_title3] = STATE(2),
    [sym_title4] = STATE(2),
    [sym_title5] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(13),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym__title] = STATE(3),
    [sym_title1] = STATE(3),
    [sym_title2] = STATE(3),
    [sym_title3] = STATE(3),
    [sym_title4] = STATE(3),
    [sym_title5] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(13),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym__title] = STATE(3),
    [sym_title1] = STATE(3),
    [sym_title2] = STATE(3),
    [sym_title3] = STATE(3),
    [sym_title4] = STATE(3),
    [sym_title5] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(22),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(28),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      aux_sym_title1_token1,
    ACTIONS(36), 5,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [14] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym_title1_token1,
    ACTIONS(42), 5,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [28] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      aux_sym_title1_token1,
    ACTIONS(48), 5,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [42] = 3,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_title1_token1,
    ACTIONS(54), 5,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [56] = 3,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_title1_token1,
    ACTIONS(60), 5,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [70] = 1,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [79] = 1,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [88] = 1,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [97] = 1,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [106] = 1,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [115] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 79,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 97,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 115,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title1, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title2, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title2, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title3, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title3, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title4, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title4, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title5, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title5, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title2, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title3, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title4, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title5, 2),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
