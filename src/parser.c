#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  anon_sym_PIPE_EQ_EQ_EQ_LF = 22,
  anon_sym_PIPE_EQ_EQ_EQ = 23,
  sym_document = 24,
  sym__block = 25,
  sym_title = 26,
  sym_note = 27,
  sym_list = 28,
  sym_code = 29,
  sym_comment = 30,
  sym_image = 31,
  sym_url = 32,
  sym_footnote = 33,
  sym_kbd = 34,
  sym_table = 35,
  aux_sym_document_repeat1 = 36,
  aux_sym_code_repeat1 = 37,
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
  [24] = 22,
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
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(79);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '[') ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '[') ADVANCE(104);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(66);
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
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(2);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(38);
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
      if (lookahead == '[') ADVANCE(106);
      END_STATE();
    case 45:
      if (lookahead == '[') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(21);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'k') ADVANCE(24);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(21);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'k') ADVANCE(24);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'g') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '.') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(70);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == ':') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 55},
  [27] = {.lex_state = 62},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 62},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 63},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 63},
  [37] = {.lex_state = 63},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 101},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 101},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 98},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 0},
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
    [sym_kbd] = STATE(3),
    [sym_table] = STATE(3),
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
    [aux_sym_document_repeat1] = STATE(2),
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
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(54),
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
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(57),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(61), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 10,
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
  [19] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_,
    ACTIONS(67), 10,
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
  [38] = 2,
    ACTIONS(73), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(71), 10,
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
  [54] = 2,
    ACTIONS(77), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(75), 10,
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
  [70] = 2,
    ACTIONS(81), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(79), 10,
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
  [86] = 2,
    ACTIONS(85), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(83), 10,
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
  [102] = 2,
    ACTIONS(89), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(87), 10,
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
  [118] = 2,
    ACTIONS(93), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(91), 10,
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
  [134] = 2,
    ACTIONS(97), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(95), 10,
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
  [150] = 2,
    ACTIONS(101), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(99), 10,
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
  [166] = 2,
    ACTIONS(105), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(103), 10,
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
  [182] = 2,
    ACTIONS(109), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(107), 10,
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
  [198] = 2,
    ACTIONS(113), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(111), 10,
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
  [214] = 2,
    ACTIONS(117), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(115), 10,
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
  [230] = 2,
    ACTIONS(121), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(119), 10,
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
  [246] = 2,
    ACTIONS(125), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(123), 10,
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
  [262] = 2,
    ACTIONS(129), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(127), 10,
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
  [278] = 2,
    ACTIONS(133), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(131), 10,
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
  [294] = 3,
    ACTIONS(135), 1,
      aux_sym_title_token2,
    ACTIONS(138), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(22), 1,
      aux_sym_code_repeat1,
  [304] = 3,
    ACTIONS(140), 1,
      aux_sym_title_token2,
    ACTIONS(142), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(26), 1,
      aux_sym_code_repeat1,
  [314] = 3,
    ACTIONS(138), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(144), 1,
      aux_sym_title_token2,
    STATE(24), 1,
      aux_sym_code_repeat1,
  [324] = 3,
    ACTIONS(147), 1,
      aux_sym_title_token2,
    ACTIONS(149), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(24), 1,
      aux_sym_code_repeat1,
  [334] = 3,
    ACTIONS(147), 1,
      aux_sym_title_token2,
    ACTIONS(151), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(24), 1,
      aux_sym_code_repeat1,
  [344] = 3,
    ACTIONS(153), 1,
      aux_sym_title_token2,
    ACTIONS(155), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(22), 1,
      aux_sym_code_repeat1,
  [354] = 3,
    ACTIONS(157), 1,
      aux_sym_title_token2,
    ACTIONS(159), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(25), 1,
      aux_sym_code_repeat1,
  [364] = 3,
    ACTIONS(161), 1,
      aux_sym_title_token2,
    ACTIONS(163), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(27), 1,
      aux_sym_code_repeat1,
  [374] = 2,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    ACTIONS(167), 1,
      aux_sym_footnote_token1,
  [381] = 2,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    ACTIONS(171), 1,
      aux_sym_kbd_token1,
  [388] = 2,
    ACTIONS(173), 1,
      anon_sym_,
    ACTIONS(175), 1,
      aux_sym_code_token1,
  [395] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACK_LF,
  [399] = 1,
    ACTIONS(179), 1,
      aux_sym_title_token2,
  [403] = 1,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
  [407] = 1,
    ACTIONS(183), 1,
      aux_sym_title_token2,
  [411] = 1,
    ACTIONS(185), 1,
      aux_sym_title_token2,
  [415] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [419] = 1,
    ACTIONS(189), 1,
      aux_sym_image_token2,
  [423] = 1,
    ACTIONS(191), 1,
      anon_sym_RBRACK_LF,
  [427] = 1,
    ACTIONS(193), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [431] = 1,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [435] = 1,
    ACTIONS(197), 1,
      aux_sym_image_token2,
  [439] = 1,
    ACTIONS(199), 1,
      aux_sym_code_token1,
  [443] = 1,
    ACTIONS(201), 1,
      anon_sym_,
  [447] = 1,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
  [451] = 1,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
  [455] = 1,
    ACTIONS(207), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [459] = 1,
    ACTIONS(209), 1,
      aux_sym_image_token1,
  [463] = 1,
    ACTIONS(211), 1,
      aux_sym_title_token2,
  [467] = 1,
    ACTIONS(213), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [471] = 1,
    ACTIONS(215), 1,
      anon_sym_RBRACK_LF,
  [475] = 1,
    ACTIONS(217), 1,
      anon_sym_,
  [479] = 1,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 198,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 230,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 262,
  [SMALL_STATE(21)] = 278,
  [SMALL_STATE(22)] = 294,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 314,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 334,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 354,
  [SMALL_STATE(29)] = 364,
  [SMALL_STATE(30)] = 374,
  [SMALL_STATE(31)] = 381,
  [SMALL_STATE(32)] = 388,
  [SMALL_STATE(33)] = 395,
  [SMALL_STATE(34)] = 399,
  [SMALL_STATE(35)] = 403,
  [SMALL_STATE(36)] = 407,
  [SMALL_STATE(37)] = 411,
  [SMALL_STATE(38)] = 415,
  [SMALL_STATE(39)] = 419,
  [SMALL_STATE(40)] = 423,
  [SMALL_STATE(41)] = 427,
  [SMALL_STATE(42)] = 431,
  [SMALL_STATE(43)] = 435,
  [SMALL_STATE(44)] = 439,
  [SMALL_STATE(45)] = 443,
  [SMALL_STATE(46)] = 447,
  [SMALL_STATE(47)] = 451,
  [SMALL_STATE(48)] = 455,
  [SMALL_STATE(49)] = 459,
  [SMALL_STATE(50)] = 463,
  [SMALL_STATE(51)] = 467,
  [SMALL_STATE(52)] = 471,
  [SMALL_STATE(53)] = 475,
  [SMALL_STATE(54)] = 479,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(22),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(24),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
