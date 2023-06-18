#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  aux_sym_url_token1 = 16,
  anon_sym_RBRACK = 17,
  sym_document = 18,
  sym__block = 19,
  sym_title = 20,
  sym_note = 21,
  sym_list = 22,
  sym_code = 23,
  sym_comment = 24,
  sym_image = 25,
  sym_url = 26,
  aux_sym_document_repeat1 = 27,
  aux_sym_code_repeat1 = 28,
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
  [aux_sym_url_token1] = "url_token1",
  [anon_sym_RBRACK] = "]",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym_title] = "title",
  [sym_note] = "note",
  [sym_list] = "list",
  [sym_code] = "code",
  [sym_comment] = "comment",
  [sym_image] = "image",
  [sym_url] = "url",
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
  [aux_sym_url_token1] = aux_sym_url_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym_title] = sym_title,
  [sym_note] = sym_note,
  [sym_list] = sym_list,
  [sym_code] = sym_code,
  [sym_comment] = sym_comment,
  [sym_image] = sym_image,
  [sym_url] = sym_url,
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
  [aux_sym_url_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_url] = {
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'E') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'O') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'T') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'a') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'g') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == 'm') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(40);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 56},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_title_token1] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [aux_sym_list_token1] = ACTIONS(1),
    [anon_sym_LBRACK_COMMA] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_image_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(40),
    [sym__block] = STATE(3),
    [sym_title] = STATE(3),
    [sym_note] = STATE(3),
    [sym_list] = STATE(3),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [sym_url] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_image_COLON_COLON] = ACTIONS(15),
    [aux_sym_url_token1] = ACTIONS(17),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym_title] = STATE(2),
    [sym_note] = STATE(2),
    [sym_list] = STATE(2),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [sym_url] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_title_token1] = ACTIONS(21),
    [anon_sym_NOTE_COLON] = ACTIONS(24),
    [aux_sym_list_token1] = ACTIONS(27),
    [anon_sym_LBRACK_COMMA] = ACTIONS(30),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_image_COLON_COLON] = ACTIONS(36),
    [aux_sym_url_token1] = ACTIONS(39),
  },
  [3] = {
    [sym__block] = STATE(2),
    [sym_title] = STATE(2),
    [sym_note] = STATE(2),
    [sym_list] = STATE(2),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [sym_url] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_image_COLON_COLON] = ACTIONS(15),
    [aux_sym_url_token1] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(46), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [16] = 3,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_,
    ACTIONS(52), 7,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [32] = 2,
    ACTIONS(58), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [45] = 2,
    ACTIONS(62), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [58] = 2,
    ACTIONS(66), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [71] = 2,
    ACTIONS(70), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [84] = 2,
    ACTIONS(74), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [97] = 2,
    ACTIONS(78), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [110] = 2,
    ACTIONS(82), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [123] = 2,
    ACTIONS(86), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [136] = 2,
    ACTIONS(90), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [149] = 2,
    ACTIONS(94), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
  [162] = 3,
    ACTIONS(96), 1,
      aux_sym_title_token2,
    ACTIONS(99), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(16), 1,
      aux_sym_code_repeat1,
  [172] = 3,
    ACTIONS(101), 1,
      aux_sym_title_token2,
    ACTIONS(103), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(16), 1,
      aux_sym_code_repeat1,
  [182] = 3,
    ACTIONS(101), 1,
      aux_sym_title_token2,
    ACTIONS(105), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(16), 1,
      aux_sym_code_repeat1,
  [192] = 3,
    ACTIONS(107), 1,
      aux_sym_title_token2,
    ACTIONS(109), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(17), 1,
      aux_sym_code_repeat1,
  [202] = 3,
    ACTIONS(111), 1,
      aux_sym_title_token2,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(18), 1,
      aux_sym_code_repeat1,
  [212] = 2,
    ACTIONS(115), 1,
      anon_sym_,
    ACTIONS(117), 1,
      aux_sym_code_token1,
  [219] = 1,
    ACTIONS(119), 1,
      anon_sym_RBRACK_LF,
  [223] = 1,
    ACTIONS(121), 1,
      anon_sym_,
  [227] = 1,
    ACTIONS(123), 1,
      anon_sym_RBRACK_LF,
  [231] = 1,
    ACTIONS(125), 1,
      aux_sym_image_token2,
  [235] = 1,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
  [239] = 1,
    ACTIONS(129), 1,
      aux_sym_title_token2,
  [243] = 1,
    ACTIONS(131), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [247] = 1,
    ACTIONS(133), 1,
      anon_sym_,
  [251] = 1,
    ACTIONS(135), 1,
      anon_sym_RBRACK_LF,
  [255] = 1,
    ACTIONS(137), 1,
      aux_sym_image_token2,
  [259] = 1,
    ACTIONS(139), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [263] = 1,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
  [267] = 1,
    ACTIONS(143), 1,
      aux_sym_code_token1,
  [271] = 1,
    ACTIONS(145), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [275] = 1,
    ACTIONS(147), 1,
      aux_sym_title_token2,
  [279] = 1,
    ACTIONS(149), 1,
      aux_sym_title_token2,
  [283] = 1,
    ACTIONS(151), 1,
      aux_sym_title_token2,
  [287] = 1,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [291] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [295] = 1,
    ACTIONS(157), 1,
      aux_sym_image_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 71,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 110,
  [SMALL_STATE(13)] = 123,
  [SMALL_STATE(14)] = 136,
  [SMALL_STATE(15)] = 149,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 182,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 219,
  [SMALL_STATE(23)] = 223,
  [SMALL_STATE(24)] = 227,
  [SMALL_STATE(25)] = 231,
  [SMALL_STATE(26)] = 235,
  [SMALL_STATE(27)] = 239,
  [SMALL_STATE(28)] = 243,
  [SMALL_STATE(29)] = 247,
  [SMALL_STATE(30)] = 251,
  [SMALL_STATE(31)] = 255,
  [SMALL_STATE(32)] = 259,
  [SMALL_STATE(33)] = 263,
  [SMALL_STATE(34)] = 267,
  [SMALL_STATE(35)] = 271,
  [SMALL_STATE(36)] = 275,
  [SMALL_STATE(37)] = 279,
  [SMALL_STATE(38)] = 283,
  [SMALL_STATE(39)] = 287,
  [SMALL_STATE(40)] = 291,
  [SMALL_STATE(41)] = 295,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(16),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
