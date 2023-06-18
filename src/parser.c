#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  anon_sym_COLON_COLON = 27,
  aux_sym_description_list_token1 = 28,
  sym_document = 29,
  sym__block = 30,
  sym_title = 31,
  sym_note = 32,
  sym_list = 33,
  sym_code = 34,
  sym_comment = 35,
  sym_image = 36,
  sym_url = 37,
  sym_footnote = 38,
  sym_kbd = 39,
  sym_table = 40,
  sym_xref = 41,
  sym_description_list = 42,
  aux_sym_document_repeat1 = 43,
  aux_sym_code_repeat1 = 44,
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
  [anon_sym_COLON_COLON] = ":: ",
  [aux_sym_description_list_token1] = "description_list_token1",
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
  [sym_description_list] = "description_list",
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [aux_sym_description_list_token1] = aux_sym_description_list_token1,
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
  [sym_description_list] = sym_description_list,
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_description_list_token1] = {
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
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_xref] = {
    .visible = true,
    .named = true,
  },
  [sym_description_list] = {
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 27,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'k') ADVANCE(64);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(112);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(118);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(2);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(120);
      END_STATE();
    case 29:
      if (lookahead == '[') ADVANCE(112);
      END_STATE();
    case 30:
      if (lookahead == '[') ADVANCE(110);
      END_STATE();
    case 31:
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(84);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      if (('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(84);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(52);
      if (('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == ':') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'E') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'O') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'b') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'g') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(16);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(51);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(15);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(78);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(82);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(80);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(85);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(77);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(79);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'g') ADVANCE(86);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(83);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(93);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(91);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 't') ADVANCE(90);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 't') ADVANCE(87);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(17);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(55);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_description_list_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_description_list_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 107},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 107},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 104},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 0},
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
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(44),
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
    [sym_description_list] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [aux_sym_code_token1] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_image_COLON_COLON] = ACTIONS(17),
    [aux_sym_url_token1] = ACTIONS(19),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(21),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(23),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
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
    [sym_description_list] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_title_token1] = ACTIONS(31),
    [anon_sym_NOTE_COLON] = ACTIONS(34),
    [aux_sym_list_token1] = ACTIONS(37),
    [anon_sym_LBRACK_COMMA] = ACTIONS(40),
    [aux_sym_code_token1] = ACTIONS(43),
    [anon_sym_SLASH_SLASH] = ACTIONS(46),
    [anon_sym_image_COLON_COLON] = ACTIONS(49),
    [aux_sym_url_token1] = ACTIONS(52),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(55),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(58),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(64),
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
    [sym_description_list] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [aux_sym_list_token1] = ACTIONS(9),
    [anon_sym_LBRACK_COMMA] = ACTIONS(11),
    [aux_sym_code_token1] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [anon_sym_image_COLON_COLON] = ACTIONS(17),
    [aux_sym_url_token1] = ACTIONS(19),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(21),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(23),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_,
    ACTIONS(71), 12,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      aux_sym_list_token1,
      anon_sym_LBRACK_COMMA,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      aux_sym_url_token1,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
  [21] = 3,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(75), 11,
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
  [42] = 2,
    ACTIONS(83), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(81), 11,
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
  [60] = 2,
    ACTIONS(87), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(85), 11,
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
  [78] = 2,
    ACTIONS(91), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(89), 11,
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
  [96] = 2,
    ACTIONS(95), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(93), 11,
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
  [114] = 2,
    ACTIONS(99), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(97), 11,
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
  [132] = 2,
    ACTIONS(103), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(101), 11,
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
  [150] = 2,
    ACTIONS(107), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(105), 11,
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
  [168] = 2,
    ACTIONS(111), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(109), 11,
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
  [186] = 2,
    ACTIONS(115), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(113), 11,
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
  [204] = 2,
    ACTIONS(119), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(117), 11,
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
  [222] = 2,
    ACTIONS(123), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(121), 11,
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
  [240] = 2,
    ACTIONS(127), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(125), 11,
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
  [258] = 2,
    ACTIONS(131), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(129), 11,
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
  [276] = 2,
    ACTIONS(135), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(133), 11,
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
  [294] = 2,
    ACTIONS(139), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(137), 11,
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
    ACTIONS(143), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(141), 11,
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
  [330] = 2,
    ACTIONS(147), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(145), 11,
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
  [348] = 2,
    ACTIONS(151), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(149), 11,
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
  [366] = 2,
    ACTIONS(155), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(153), 11,
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
  [384] = 3,
    ACTIONS(157), 1,
      aux_sym_title_token2,
    ACTIONS(159), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(27), 1,
      aux_sym_code_repeat1,
  [394] = 3,
    ACTIONS(161), 1,
      aux_sym_title_token2,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(25), 1,
      aux_sym_code_repeat1,
  [404] = 3,
    ACTIONS(165), 1,
      aux_sym_title_token2,
    ACTIONS(168), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(27), 1,
      aux_sym_code_repeat1,
  [414] = 3,
    ACTIONS(170), 1,
      aux_sym_title_token2,
    ACTIONS(172), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(32), 1,
      aux_sym_code_repeat1,
  [424] = 3,
    ACTIONS(157), 1,
      aux_sym_title_token2,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(27), 1,
      aux_sym_code_repeat1,
  [434] = 3,
    ACTIONS(176), 1,
      aux_sym_title_token2,
    ACTIONS(178), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(28), 1,
      aux_sym_code_repeat1,
  [444] = 3,
    ACTIONS(180), 1,
      aux_sym_title_token2,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(29), 1,
      aux_sym_code_repeat1,
  [454] = 3,
    ACTIONS(168), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    ACTIONS(184), 1,
      aux_sym_title_token2,
    STATE(32), 1,
      aux_sym_code_repeat1,
  [464] = 2,
    ACTIONS(187), 1,
      anon_sym_,
    ACTIONS(189), 1,
      aux_sym_code_token1,
  [471] = 2,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(193), 1,
      aux_sym_footnote_token1,
  [478] = 2,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_GT_GT,
  [485] = 2,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    ACTIONS(201), 1,
      aux_sym_kbd_token1,
  [492] = 1,
    ACTIONS(203), 1,
      aux_sym_code_token1,
  [496] = 1,
    ACTIONS(205), 1,
      anon_sym_RBRACK_LF,
  [500] = 1,
    ACTIONS(207), 1,
      aux_sym_title_token2,
  [504] = 1,
    ACTIONS(209), 1,
      aux_sym_image_token2,
  [508] = 1,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
  [512] = 1,
    ACTIONS(213), 1,
      aux_sym_title_token2,
  [516] = 1,
    ACTIONS(215), 1,
      aux_sym_title_token2,
  [520] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [524] = 1,
    ACTIONS(219), 1,
      aux_sym_code_token1,
  [528] = 1,
    ACTIONS(221), 1,
      aux_sym_code_token1,
  [532] = 1,
    ACTIONS(223), 1,
      aux_sym_image_token2,
  [536] = 1,
    ACTIONS(225), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [540] = 1,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
  [544] = 1,
    ACTIONS(229), 1,
      anon_sym_RBRACK_LF,
  [548] = 1,
    ACTIONS(231), 1,
      anon_sym_RBRACK_LF,
  [552] = 1,
    ACTIONS(233), 1,
      anon_sym_GT_GT,
  [556] = 1,
    ACTIONS(235), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [560] = 1,
    ACTIONS(237), 1,
      aux_sym_description_list_token1,
  [564] = 1,
    ACTIONS(239), 1,
      anon_sym_,
  [568] = 1,
    ACTIONS(241), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [572] = 1,
    ACTIONS(243), 1,
      aux_sym_image_token1,
  [576] = 1,
    ACTIONS(245), 1,
      aux_sym_title_token2,
  [580] = 1,
    ACTIONS(247), 1,
      anon_sym_COLON_COLON,
  [584] = 1,
    ACTIONS(249), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [588] = 1,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
  [592] = 1,
    ACTIONS(253), 1,
      anon_sym_,
  [596] = 1,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 114,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 168,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 204,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 240,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 276,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 312,
  [SMALL_STATE(22)] = 330,
  [SMALL_STATE(23)] = 348,
  [SMALL_STATE(24)] = 366,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 394,
  [SMALL_STATE(27)] = 404,
  [SMALL_STATE(28)] = 414,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 434,
  [SMALL_STATE(31)] = 444,
  [SMALL_STATE(32)] = 454,
  [SMALL_STATE(33)] = 464,
  [SMALL_STATE(34)] = 471,
  [SMALL_STATE(35)] = 478,
  [SMALL_STATE(36)] = 485,
  [SMALL_STATE(37)] = 492,
  [SMALL_STATE(38)] = 496,
  [SMALL_STATE(39)] = 500,
  [SMALL_STATE(40)] = 504,
  [SMALL_STATE(41)] = 508,
  [SMALL_STATE(42)] = 512,
  [SMALL_STATE(43)] = 516,
  [SMALL_STATE(44)] = 520,
  [SMALL_STATE(45)] = 524,
  [SMALL_STATE(46)] = 528,
  [SMALL_STATE(47)] = 532,
  [SMALL_STATE(48)] = 536,
  [SMALL_STATE(49)] = 540,
  [SMALL_STATE(50)] = 544,
  [SMALL_STATE(51)] = 548,
  [SMALL_STATE(52)] = 552,
  [SMALL_STATE(53)] = 556,
  [SMALL_STATE(54)] = 560,
  [SMALL_STATE(55)] = 564,
  [SMALL_STATE(56)] = 568,
  [SMALL_STATE(57)] = 572,
  [SMALL_STATE(58)] = 576,
  [SMALL_STATE(59)] = 580,
  [SMALL_STATE(60)] = 584,
  [SMALL_STATE(61)] = 588,
  [SMALL_STATE(62)] = 592,
  [SMALL_STATE(63)] = 596,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 3, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 3, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 5, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 5, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(27),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(32),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
