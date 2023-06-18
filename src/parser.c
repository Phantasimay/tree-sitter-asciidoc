#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_title_token1 = 1,
  anon_sym_ = 2,
  aux_sym_title_token2 = 3,
  anon_sym_NOTE_COLON = 4,
  aux_sym_list_token1 = 5,
  anon_sym_LBRACK_COMMA = 6,
  aux_sym_code_token1 = 7,
  anon_sym_RBRACK_LF = 8,
  anon_sym_DASH_DASH_DASH_DASH_LF = 9,
  anon_sym_DASH_DASH_DASH_DASH = 10,
  anon_sym_SLASH_SLASH = 11,
  anon_sym_image_COLON_COLON = 12,
  aux_sym_image_token1 = 13,
  anon_sym_LBRACK = 14,
  aux_sym_image_token2 = 15,
  sym_document = 16,
  sym__block = 17,
  sym_title = 18,
  sym_note = 19,
  sym_list = 20,
  sym_code = 21,
  sym_comment = 22,
  sym_image = 23,
  aux_sym_document_repeat1 = 24,
  aux_sym_code_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_title_token1] = "title_token1",
  [anon_sym_] = " ",
  [aux_sym_title_token2] = "title_token2",
  [anon_sym_NOTE_COLON] = "NOTE:",
  [aux_sym_list_token1] = "list_token1",
  [anon_sym_LBRACK_COMMA] = "[,",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RBRACK_LF] = "]\n",
  [anon_sym_DASH_DASH_DASH_DASH_LF] = "----\n",
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [anon_sym_SLASH_SLASH] = "// ",
  [anon_sym_image_COLON_COLON] = "image::",
  [aux_sym_image_token1] = "image_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym_image_token2] = "image_token2",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym_title] = "title",
  [sym_note] = "note",
  [sym_list] = "list",
  [sym_code] = "code",
  [sym_comment] = "comment",
  [sym_image] = "image",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_title_token1] = aux_sym_title_token1,
  [anon_sym_] = anon_sym_,
  [aux_sym_title_token2] = aux_sym_title_token2,
  [anon_sym_NOTE_COLON] = anon_sym_NOTE_COLON,
  [aux_sym_list_token1] = aux_sym_list_token1,
  [anon_sym_LBRACK_COMMA] = anon_sym_LBRACK_COMMA,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RBRACK_LF] = anon_sym_RBRACK_LF,
  [anon_sym_DASH_DASH_DASH_DASH_LF] = anon_sym_DASH_DASH_DASH_DASH_LF,
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_image_COLON_COLON] = anon_sym_image_COLON_COLON,
  [aux_sym_image_token1] = aux_sym_image_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_image_token2] = aux_sym_image_token2,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym_title] = sym_title,
  [sym_note] = sym_note,
  [sym_list] = sym_list,
  [sym_code] = sym_code,
  [sym_comment] = sym_comment,
  [sym_image] = sym_image,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_title_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_title_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_token2] = {
    .visible = false,
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
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_image] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_language = 1,
  field_title = 2,
  field_url = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
  [field_title] = "title",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_language, 1},
  [1] =
    {field_title, 3},
    {field_url, 1},
  [3] =
    {field_language, 2},
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(39);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'E') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'O') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'T') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'g') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'm') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(35);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 51},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_title_token1] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [aux_sym_list_token1] = ACTIONS(1),
    [anon_sym_LBRACK_COMMA] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [anon_sym_RBRACK_LF] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_image_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(36),
    [sym__block] = STATE(2),
    [sym_title] = STATE(2),
    [sym_note] = STATE(2),
    [sym_list] = STATE(2),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_image_COLON_COLON] = ACTIONS(15),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym_title] = STATE(3),
    [sym_note] = STATE(3),
    [sym_list] = STATE(3),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_image_COLON_COLON] = ACTIONS(15),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym_title] = STATE(3),
    [sym_note] = STATE(3),
    [sym_list] = STATE(3),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_title_token1] = ACTIONS(21),
    [anon_sym_NOTE_COLON] = ACTIONS(24),
    [aux_sym_list_token1] = ACTIONS(27),
    [anon_sym_LBRACK_COMMA] = ACTIONS(30),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_image_COLON_COLON] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_,
    ACTIONS(41), 6,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [15] = 1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [25] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [35] = 1,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [45] = 1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [55] = 1,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [65] = 1,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [75] = 1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [85] = 1,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [95] = 1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
  [105] = 3,
    ACTIONS(63), 1,
      aux_sym_title_token2,
    ACTIONS(65), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(17), 1,
      aux_sym_code_repeat1,
  [115] = 3,
    ACTIONS(67), 1,
      aux_sym_title_token2,
    ACTIONS(70), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(15), 1,
      aux_sym_code_repeat1,
  [125] = 3,
    ACTIONS(72), 1,
      aux_sym_title_token2,
    ACTIONS(74), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(15), 1,
      aux_sym_code_repeat1,
  [135] = 3,
    ACTIONS(72), 1,
      aux_sym_title_token2,
    ACTIONS(76), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(15), 1,
      aux_sym_code_repeat1,
  [145] = 3,
    ACTIONS(78), 1,
      aux_sym_title_token2,
    ACTIONS(80), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(16), 1,
      aux_sym_code_repeat1,
  [155] = 2,
    ACTIONS(82), 1,
      anon_sym_,
    ACTIONS(84), 1,
      aux_sym_code_token1,
  [162] = 1,
    ACTIONS(86), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [166] = 1,
    ACTIONS(88), 1,
      anon_sym_,
  [170] = 1,
    ACTIONS(90), 1,
      anon_sym_RBRACK_LF,
  [174] = 1,
    ACTIONS(92), 1,
      aux_sym_image_token2,
  [178] = 1,
    ACTIONS(94), 1,
      aux_sym_code_token1,
  [182] = 1,
    ACTIONS(96), 1,
      aux_sym_title_token2,
  [186] = 1,
    ACTIONS(98), 1,
      anon_sym_,
  [190] = 1,
    ACTIONS(100), 1,
      anon_sym_RBRACK_LF,
  [194] = 1,
    ACTIONS(102), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [198] = 1,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
  [202] = 1,
    ACTIONS(106), 1,
      aux_sym_title_token2,
  [206] = 1,
    ACTIONS(108), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [210] = 1,
    ACTIONS(110), 1,
      anon_sym_RBRACK_LF,
  [214] = 1,
    ACTIONS(112), 1,
      aux_sym_title_token2,
  [218] = 1,
    ACTIONS(114), 1,
      aux_sym_title_token2,
  [222] = 1,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [226] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [230] = 1,
    ACTIONS(120), 1,
      aux_sym_image_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 25,
  [SMALL_STATE(7)] = 35,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 65,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 85,
  [SMALL_STATE(13)] = 95,
  [SMALL_STATE(14)] = 105,
  [SMALL_STATE(15)] = 115,
  [SMALL_STATE(16)] = 125,
  [SMALL_STATE(17)] = 135,
  [SMALL_STATE(18)] = 145,
  [SMALL_STATE(19)] = 155,
  [SMALL_STATE(20)] = 162,
  [SMALL_STATE(21)] = 166,
  [SMALL_STATE(22)] = 170,
  [SMALL_STATE(23)] = 174,
  [SMALL_STATE(24)] = 178,
  [SMALL_STATE(25)] = 182,
  [SMALL_STATE(26)] = 186,
  [SMALL_STATE(27)] = 190,
  [SMALL_STATE(28)] = 194,
  [SMALL_STATE(29)] = 198,
  [SMALL_STATE(30)] = 202,
  [SMALL_STATE(31)] = 206,
  [SMALL_STATE(32)] = 210,
  [SMALL_STATE(33)] = 214,
  [SMALL_STATE(34)] = 218,
  [SMALL_STATE(35)] = 222,
  [SMALL_STATE(36)] = 226,
  [SMALL_STATE(37)] = 230,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(15),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
