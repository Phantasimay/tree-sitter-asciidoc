#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  anon_sym_kbd_COLON_LBRACK = 20,
  aux_sym_kbd_token1 = 21,
  sym_document = 22,
  sym__block = 23,
  sym_title = 24,
  sym_note = 25,
  sym_list = 26,
  sym_code = 27,
  sym_comment = 28,
  sym_image = 29,
  sym_url = 30,
  sym_footnote = 31,
  sym_kbd = 32,
  aux_sym_document_repeat1 = 33,
  aux_sym_code_repeat1 = 34,
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
  [anon_sym_kbd_COLON_LBRACK] = "kbd:[",
  [aux_sym_kbd_token1] = "kbd_token1",
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
  [sym_kbd] = "kbd",
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
  [anon_sym_kbd_COLON_LBRACK] = anon_sym_kbd_COLON_LBRACK,
  [aux_sym_kbd_token1] = aux_sym_kbd_token1,
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
  [sym_kbd] = sym_kbd,
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
  [anon_sym_kbd_COLON_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_kbd_token1] = {
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
  [sym_kbd] = {
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'k') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(93);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'a') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 't') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 't') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '[') ADVANCE(95);
      END_STATE();
    case 38:
      if (lookahead == '[') ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'k') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'k') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'g') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(59);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == ':') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 90},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 90},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 52},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 42},
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(1),
    [aux_sym_kbd_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(40),
    [sym__block] = STATE(2),
    [sym_title] = STATE(2),
    [sym_note] = STATE(2),
    [sym_list] = STATE(2),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [sym_url] = STATE(2),
    [sym_footnote] = STATE(2),
    [sym_kbd] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_image_COLON_COLON] = ACTIONS(15),
    [aux_sym_url_token1] = ACTIONS(17),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(19),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(21),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym_title] = STATE(3),
    [sym_note] = STATE(3),
    [sym_list] = STATE(3),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [sym_url] = STATE(3),
    [sym_footnote] = STATE(3),
    [sym_kbd] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_image_COLON_COLON] = ACTIONS(15),
    [aux_sym_url_token1] = ACTIONS(17),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(19),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(21),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym_title] = STATE(3),
    [sym_note] = STATE(3),
    [sym_list] = STATE(3),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [sym_url] = STATE(3),
    [sym_footnote] = STATE(3),
    [sym_kbd] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_title_token1] = ACTIONS(27),
    [anon_sym_NOTE_COLON] = ACTIONS(30),
    [aux_sym_list_token1] = ACTIONS(33),
    [anon_sym_LBRACK_COMMA] = ACTIONS(36),
    [anon_sym_SLASH_SLASH] = ACTIONS(39),
    [anon_sym_image_COLON_COLON] = ACTIONS(42),
    [aux_sym_url_token1] = ACTIONS(45),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(48),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_,
    ACTIONS(56), 9,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [18] = 3,
    ACTIONS(62), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [36] = 2,
    ACTIONS(68), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [51] = 2,
    ACTIONS(72), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(70), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [66] = 2,
    ACTIONS(76), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [81] = 2,
    ACTIONS(80), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(78), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [96] = 2,
    ACTIONS(84), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(82), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [111] = 2,
    ACTIONS(88), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(86), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [126] = 2,
    ACTIONS(92), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [141] = 2,
    ACTIONS(96), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [156] = 2,
    ACTIONS(100), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [171] = 2,
    ACTIONS(104), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [186] = 2,
    ACTIONS(108), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(106), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [201] = 2,
    ACTIONS(112), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [216] = 2,
    ACTIONS(116), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [231] = 2,
    ACTIONS(120), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
  [246] = 3,
    ACTIONS(122), 1,
      aux_sym_title_token2,
    ACTIONS(124), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(22), 1,
      aux_sym_code_repeat1,
  [256] = 3,
    ACTIONS(126), 1,
      aux_sym_title_token2,
    ACTIONS(128), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(20), 1,
      aux_sym_code_repeat1,
  [266] = 3,
    ACTIONS(130), 1,
      aux_sym_title_token2,
    ACTIONS(133), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(22), 1,
      aux_sym_code_repeat1,
  [276] = 3,
    ACTIONS(122), 1,
      aux_sym_title_token2,
    ACTIONS(135), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(22), 1,
      aux_sym_code_repeat1,
  [286] = 3,
    ACTIONS(137), 1,
      aux_sym_title_token2,
    ACTIONS(139), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(23), 1,
      aux_sym_code_repeat1,
  [296] = 2,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 1,
      aux_sym_footnote_token1,
  [303] = 2,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(147), 1,
      aux_sym_kbd_token1,
  [310] = 2,
    ACTIONS(149), 1,
      anon_sym_,
    ACTIONS(151), 1,
      aux_sym_code_token1,
  [317] = 1,
    ACTIONS(153), 1,
      anon_sym_RBRACK_LF,
  [321] = 1,
    ACTIONS(155), 1,
      anon_sym_,
  [325] = 1,
    ACTIONS(157), 1,
      anon_sym_RBRACK_LF,
  [329] = 1,
    ACTIONS(159), 1,
      aux_sym_image_token2,
  [333] = 1,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
  [337] = 1,
    ACTIONS(163), 1,
      aux_sym_title_token2,
  [341] = 1,
    ACTIONS(165), 1,
      aux_sym_title_token2,
  [345] = 1,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
  [349] = 1,
    ACTIONS(169), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [353] = 1,
    ACTIONS(171), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [357] = 1,
    ACTIONS(173), 1,
      aux_sym_title_token2,
  [361] = 1,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
  [365] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [369] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
  [373] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACK_LF,
  [377] = 1,
    ACTIONS(183), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [381] = 1,
    ACTIONS(185), 1,
      aux_sym_image_token2,
  [385] = 1,
    ACTIONS(187), 1,
      aux_sym_image_token1,
  [389] = 1,
    ACTIONS(189), 1,
      aux_sym_title_token2,
  [393] = 1,
    ACTIONS(191), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [397] = 1,
    ACTIONS(193), 1,
      aux_sym_code_token1,
  [401] = 1,
    ACTIONS(195), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 51,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 81,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 156,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 186,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 216,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 256,
  [SMALL_STATE(22)] = 266,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 286,
  [SMALL_STATE(25)] = 296,
  [SMALL_STATE(26)] = 303,
  [SMALL_STATE(27)] = 310,
  [SMALL_STATE(28)] = 317,
  [SMALL_STATE(29)] = 321,
  [SMALL_STATE(30)] = 325,
  [SMALL_STATE(31)] = 329,
  [SMALL_STATE(32)] = 333,
  [SMALL_STATE(33)] = 337,
  [SMALL_STATE(34)] = 341,
  [SMALL_STATE(35)] = 345,
  [SMALL_STATE(36)] = 349,
  [SMALL_STATE(37)] = 353,
  [SMALL_STATE(38)] = 357,
  [SMALL_STATE(39)] = 361,
  [SMALL_STATE(40)] = 365,
  [SMALL_STATE(41)] = 369,
  [SMALL_STATE(42)] = 373,
  [SMALL_STATE(43)] = 377,
  [SMALL_STATE(44)] = 381,
  [SMALL_STATE(45)] = 385,
  [SMALL_STATE(46)] = 389,
  [SMALL_STATE(47)] = 393,
  [SMALL_STATE(48)] = 397,
  [SMALL_STATE(49)] = 401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(22),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
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
