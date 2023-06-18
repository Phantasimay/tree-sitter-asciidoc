#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_PIPE_EQ_EQ_EQ_LF = 22,
  anon_sym_PIPE_EQ_EQ_EQ = 23,
  anon_sym_LT_LT = 24,
  anon_sym_COMMA = 25,
  anon_sym_GT_GT = 26,
  sym_document = 27,
  sym__block = 28,
  sym_title = 29,
  sym_note = 30,
  sym_list = 31,
  sym_code = 32,
  sym_comment = 33,
  sym_image = 34,
  sym_url = 35,
  sym_footnote = 36,
  sym_kbd = 37,
  sym_table = 38,
  sym_xref = 39,
  aux_sym_document_repeat1 = 40,
  aux_sym_code_repeat1 = 41,
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
  [anon_sym_PIPE_EQ_EQ_EQ_LF] = "|===\n",
  [anon_sym_PIPE_EQ_EQ_EQ] = "|===",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT_GT] = ">>",
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
  [sym_table] = "table",
  [sym_xref] = "xref",
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
  [anon_sym_PIPE_EQ_EQ_EQ_LF] = anon_sym_PIPE_EQ_EQ_EQ_LF,
  [anon_sym_PIPE_EQ_EQ_EQ] = anon_sym_PIPE_EQ_EQ_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
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
  [sym_table] = sym_table,
  [sym_xref] = sym_xref,
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
  [anon_sym_PIPE_EQ_EQ_EQ_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
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
  [sym_footnote] = {
    .visible = true,
    .named = true,
  },
  [sym_kbd] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_xref] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 1},
  [1] =
    {field_language, 1},
  [2] =
    {field_title, 3},
    {field_url, 1},
  [4] =
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
  [26] = 25,
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
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'k') ADVANCE(81);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(104);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '[') ADVANCE(108);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '[') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'E') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 't') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == 't') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '<') ADVANCE(114);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(2);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == '[') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == '[') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(21);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'k') ADVANCE(24);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(21);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'k') ADVANCE(24);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '|') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'E') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '.') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(72);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 64},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 64},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 64},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 65},
  [40] = {.lex_state = 65},
  [41] = {.lex_state = 65},
  [42] = {.lex_state = 49},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 103},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 103},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 51},
  [55] = {.lex_state = 100},
  [56] = {.lex_state = 65},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 0},
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
    [anon_sym_PIPE_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(43),
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
    [sym_table] = STATE(3),
    [sym_xref] = STATE(3),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(21),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(25),
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
    [sym_kbd] = STATE(2),
    [sym_table] = STATE(2),
    [sym_xref] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym_title_token1] = ACTIONS(29),
    [anon_sym_NOTE_COLON] = ACTIONS(32),
    [aux_sym_list_token1] = ACTIONS(35),
    [anon_sym_LBRACK_COMMA] = ACTIONS(38),
    [anon_sym_SLASH_SLASH] = ACTIONS(41),
    [anon_sym_image_COLON_COLON] = ACTIONS(44),
    [aux_sym_url_token1] = ACTIONS(47),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(50),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(53),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(56),
    [anon_sym_LT_LT] = ACTIONS(59),
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
    [sym_kbd] = STATE(2),
    [sym_table] = STATE(2),
    [sym_xref] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(62),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [anon_sym_image_COLON_COLON] = ACTIONS(15),
    [aux_sym_url_token1] = ACTIONS(17),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(19),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(21),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(66), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [20] = 3,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_,
    ACTIONS(72), 11,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [40] = 2,
    ACTIONS(78), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(76), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [57] = 2,
    ACTIONS(82), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(80), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [74] = 2,
    ACTIONS(86), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(84), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [91] = 2,
    ACTIONS(90), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(88), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [108] = 2,
    ACTIONS(94), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(92), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [125] = 2,
    ACTIONS(98), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(96), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [142] = 2,
    ACTIONS(102), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(100), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [159] = 2,
    ACTIONS(106), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(104), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [176] = 2,
    ACTIONS(110), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(108), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [193] = 2,
    ACTIONS(114), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(112), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [210] = 2,
    ACTIONS(118), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(116), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [227] = 2,
    ACTIONS(122), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(120), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [244] = 2,
    ACTIONS(126), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(124), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [261] = 2,
    ACTIONS(130), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(128), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [278] = 2,
    ACTIONS(134), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(132), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [295] = 2,
    ACTIONS(138), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(136), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [312] = 2,
    ACTIONS(142), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(140), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [329] = 2,
    ACTIONS(146), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(144), 11,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [346] = 3,
    ACTIONS(148), 1,
      aux_sym_title_token2,
    ACTIONS(150), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(26), 1,
      aux_sym_code_repeat1,
  [356] = 3,
    ACTIONS(152), 1,
      aux_sym_title_token2,
    ACTIONS(155), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(25), 1,
      aux_sym_code_repeat1,
  [366] = 3,
    ACTIONS(155), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(157), 1,
      aux_sym_title_token2,
    STATE(26), 1,
      aux_sym_code_repeat1,
  [376] = 3,
    ACTIONS(160), 1,
      aux_sym_title_token2,
    ACTIONS(162), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(25), 1,
      aux_sym_code_repeat1,
  [386] = 3,
    ACTIONS(148), 1,
      aux_sym_title_token2,
    ACTIONS(164), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(26), 1,
      aux_sym_code_repeat1,
  [396] = 3,
    ACTIONS(166), 1,
      aux_sym_title_token2,
    ACTIONS(168), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(27), 1,
      aux_sym_code_repeat1,
  [406] = 3,
    ACTIONS(170), 1,
      aux_sym_title_token2,
    ACTIONS(172), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(28), 1,
      aux_sym_code_repeat1,
  [416] = 3,
    ACTIONS(174), 1,
      aux_sym_title_token2,
    ACTIONS(176), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(24), 1,
      aux_sym_code_repeat1,
  [426] = 2,
    ACTIONS(178), 1,
      anon_sym_,
    ACTIONS(180), 1,
      aux_sym_code_token1,
  [433] = 2,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    ACTIONS(184), 1,
      aux_sym_footnote_token1,
  [440] = 2,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_GT_GT,
  [447] = 2,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    ACTIONS(192), 1,
      aux_sym_kbd_token1,
  [454] = 1,
    ACTIONS(194), 1,
      anon_sym_RBRACK_LF,
  [458] = 1,
    ACTIONS(196), 1,
      anon_sym_GT_GT,
  [462] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
  [466] = 1,
    ACTIONS(200), 1,
      aux_sym_title_token2,
  [470] = 1,
    ACTIONS(202), 1,
      aux_sym_title_token2,
  [474] = 1,
    ACTIONS(204), 1,
      aux_sym_title_token2,
  [478] = 1,
    ACTIONS(206), 1,
      aux_sym_code_token1,
  [482] = 1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [486] = 1,
    ACTIONS(210), 1,
      aux_sym_image_token2,
  [490] = 1,
    ACTIONS(212), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [494] = 1,
    ACTIONS(214), 1,
      aux_sym_code_token1,
  [498] = 1,
    ACTIONS(216), 1,
      anon_sym_RBRACK_LF,
  [502] = 1,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
  [506] = 1,
    ACTIONS(220), 1,
      aux_sym_image_token2,
  [510] = 1,
    ACTIONS(222), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [514] = 1,
    ACTIONS(224), 1,
      aux_sym_code_token1,
  [518] = 1,
    ACTIONS(226), 1,
      anon_sym_RBRACK_LF,
  [522] = 1,
    ACTIONS(228), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [526] = 1,
    ACTIONS(230), 1,
      anon_sym_,
  [530] = 1,
    ACTIONS(232), 1,
      aux_sym_image_token1,
  [534] = 1,
    ACTIONS(234), 1,
      aux_sym_title_token2,
  [538] = 1,
    ACTIONS(236), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [542] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
  [546] = 1,
    ACTIONS(240), 1,
      anon_sym_,
  [550] = 1,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 74,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 159,
  [SMALL_STATE(14)] = 176,
  [SMALL_STATE(15)] = 193,
  [SMALL_STATE(16)] = 210,
  [SMALL_STATE(17)] = 227,
  [SMALL_STATE(18)] = 244,
  [SMALL_STATE(19)] = 261,
  [SMALL_STATE(20)] = 278,
  [SMALL_STATE(21)] = 295,
  [SMALL_STATE(22)] = 312,
  [SMALL_STATE(23)] = 329,
  [SMALL_STATE(24)] = 346,
  [SMALL_STATE(25)] = 356,
  [SMALL_STATE(26)] = 366,
  [SMALL_STATE(27)] = 376,
  [SMALL_STATE(28)] = 386,
  [SMALL_STATE(29)] = 396,
  [SMALL_STATE(30)] = 406,
  [SMALL_STATE(31)] = 416,
  [SMALL_STATE(32)] = 426,
  [SMALL_STATE(33)] = 433,
  [SMALL_STATE(34)] = 440,
  [SMALL_STATE(35)] = 447,
  [SMALL_STATE(36)] = 454,
  [SMALL_STATE(37)] = 458,
  [SMALL_STATE(38)] = 462,
  [SMALL_STATE(39)] = 466,
  [SMALL_STATE(40)] = 470,
  [SMALL_STATE(41)] = 474,
  [SMALL_STATE(42)] = 478,
  [SMALL_STATE(43)] = 482,
  [SMALL_STATE(44)] = 486,
  [SMALL_STATE(45)] = 490,
  [SMALL_STATE(46)] = 494,
  [SMALL_STATE(47)] = 498,
  [SMALL_STATE(48)] = 502,
  [SMALL_STATE(49)] = 506,
  [SMALL_STATE(50)] = 510,
  [SMALL_STATE(51)] = 514,
  [SMALL_STATE(52)] = 518,
  [SMALL_STATE(53)] = 522,
  [SMALL_STATE(54)] = 526,
  [SMALL_STATE(55)] = 530,
  [SMALL_STATE(56)] = 534,
  [SMALL_STATE(57)] = 538,
  [SMALL_STATE(58)] = 542,
  [SMALL_STATE(59)] = 546,
  [SMALL_STATE(60)] = 550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 3, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 5, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 5, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(25),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(26),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
