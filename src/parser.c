#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  anon_sym_footnote_COLON_LBRACK = 18,
  aux_sym_footnote_token1 = 19,
  sym_document = 20,
  sym__block = 21,
  sym_title = 22,
  sym_note = 23,
  sym_list = 24,
  sym_code = 25,
  sym_comment = 26,
  sym_image = 27,
  sym_url = 28,
  sym_footnote = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_code_repeat1 = 31,
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
  [anon_sym_footnote_COLON_LBRACK] = "footnote:[",
  [aux_sym_footnote_token1] = "footnote_token1",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym_title] = "title",
  [sym_note] = "note",
  [sym_list] = "list",
  [sym_code] = "code",
  [sym_comment] = "comment",
  [sym_image] = "image",
  [sym_url] = "url",
  [sym_footnote] = "footnote",
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
  [anon_sym_footnote_COLON_LBRACK] = anon_sym_footnote_COLON_LBRACK,
  [aux_sym_footnote_token1] = aux_sym_footnote_token1,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym_title] = sym_title,
  [sym_note] = sym_note,
  [sym_list] = sym_list,
  [sym_code] = sym_code,
  [sym_comment] = sym_comment,
  [sym_image] = sym_image,
  [sym_url] = sym_url,
  [sym_footnote] = sym_footnote,
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
  [anon_sym_footnote_COLON_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_footnote_token1] = {
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
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_footnote] = {
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(57);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 't') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 't') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '[') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(19);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(19);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'E') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'g') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(52);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 80},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 35},
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
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(1),
    [aux_sym_footnote_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(38),
    [sym__block] = STATE(3),
    [sym_title] = STATE(3),
    [sym_note] = STATE(3),
    [sym_list] = STATE(3),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [sym_url] = STATE(3),
    [sym_footnote] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_image_COLON_COLON] = ACTIONS(15),
    [aux_sym_url_token1] = ACTIONS(17),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(19),
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
    [sym_footnote] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym_title_token1] = ACTIONS(23),
    [anon_sym_NOTE_COLON] = ACTIONS(26),
    [aux_sym_list_token1] = ACTIONS(29),
    [anon_sym_LBRACK_COMMA] = ACTIONS(32),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [anon_sym_image_COLON_COLON] = ACTIONS(38),
    [aux_sym_url_token1] = ACTIONS(41),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(44),
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
    [sym_footnote] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_image_COLON_COLON] = ACTIONS(15),
    [aux_sym_url_token1] = ACTIONS(17),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(51), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [17] = 3,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(57), 8,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [34] = 2,
    ACTIONS(63), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [48] = 2,
    ACTIONS(67), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [62] = 2,
    ACTIONS(71), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(69), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [76] = 2,
    ACTIONS(75), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [90] = 2,
    ACTIONS(79), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [104] = 2,
    ACTIONS(83), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [118] = 2,
    ACTIONS(87), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [132] = 2,
    ACTIONS(91), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [146] = 2,
    ACTIONS(95), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [160] = 2,
    ACTIONS(99), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [174] = 2,
    ACTIONS(103), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [188] = 2,
    ACTIONS(107), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
  [202] = 3,
    ACTIONS(109), 1,
      aux_sym_title_token2,
    ACTIONS(111), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(20), 1,
      aux_sym_code_repeat1,
  [212] = 3,
    ACTIONS(109), 1,
      aux_sym_title_token2,
    ACTIONS(113), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(20), 1,
      aux_sym_code_repeat1,
  [222] = 3,
    ACTIONS(115), 1,
      aux_sym_title_token2,
    ACTIONS(118), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(20), 1,
      aux_sym_code_repeat1,
  [232] = 3,
    ACTIONS(120), 1,
      aux_sym_title_token2,
    ACTIONS(122), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(19), 1,
      aux_sym_code_repeat1,
  [242] = 3,
    ACTIONS(124), 1,
      aux_sym_title_token2,
    ACTIONS(126), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(18), 1,
      aux_sym_code_repeat1,
  [252] = 2,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    ACTIONS(130), 1,
      aux_sym_footnote_token1,
  [259] = 2,
    ACTIONS(132), 1,
      anon_sym_,
    ACTIONS(134), 1,
      aux_sym_code_token1,
  [266] = 1,
    ACTIONS(136), 1,
      anon_sym_,
  [270] = 1,
    ACTIONS(138), 1,
      anon_sym_RBRACK_LF,
  [274] = 1,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
  [278] = 1,
    ACTIONS(142), 1,
      aux_sym_image_token2,
  [282] = 1,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
  [286] = 1,
    ACTIONS(146), 1,
      aux_sym_title_token2,
  [290] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACK_LF,
  [294] = 1,
    ACTIONS(150), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [298] = 1,
    ACTIONS(152), 1,
      aux_sym_image_token2,
  [302] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACK_LF,
  [306] = 1,
    ACTIONS(156), 1,
      aux_sym_title_token2,
  [310] = 1,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [314] = 1,
    ACTIONS(160), 1,
      aux_sym_title_token2,
  [318] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [322] = 1,
    ACTIONS(164), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [326] = 1,
    ACTIONS(166), 1,
      aux_sym_code_token1,
  [330] = 1,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
  [334] = 1,
    ACTIONS(170), 1,
      aux_sym_image_token1,
  [338] = 1,
    ACTIONS(172), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [342] = 1,
    ACTIONS(174), 1,
      aux_sym_title_token2,
  [346] = 1,
    ACTIONS(176), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 104,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 202,
  [SMALL_STATE(19)] = 212,
  [SMALL_STATE(20)] = 222,
  [SMALL_STATE(21)] = 232,
  [SMALL_STATE(22)] = 242,
  [SMALL_STATE(23)] = 252,
  [SMALL_STATE(24)] = 259,
  [SMALL_STATE(25)] = 266,
  [SMALL_STATE(26)] = 270,
  [SMALL_STATE(27)] = 274,
  [SMALL_STATE(28)] = 278,
  [SMALL_STATE(29)] = 282,
  [SMALL_STATE(30)] = 286,
  [SMALL_STATE(31)] = 290,
  [SMALL_STATE(32)] = 294,
  [SMALL_STATE(33)] = 298,
  [SMALL_STATE(34)] = 302,
  [SMALL_STATE(35)] = 306,
  [SMALL_STATE(36)] = 310,
  [SMALL_STATE(37)] = 314,
  [SMALL_STATE(38)] = 318,
  [SMALL_STATE(39)] = 322,
  [SMALL_STATE(40)] = 326,
  [SMALL_STATE(41)] = 330,
  [SMALL_STATE(42)] = 334,
  [SMALL_STATE(43)] = 338,
  [SMALL_STATE(44)] = 342,
  [SMALL_STATE(45)] = 346,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(20),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
