#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_audio_COLON_COLON = 29,
  aux_sym_audio_token1 = 30,
  anon_sym_video_COLON_COLON = 31,
  sym_document = 32,
  sym__block = 33,
  sym_title = 34,
  sym_note = 35,
  sym_list = 36,
  sym_code = 37,
  sym_comment = 38,
  sym_image = 39,
  sym_url = 40,
  sym_footnote = 41,
  sym_kbd = 42,
  sym_table = 43,
  sym_xref = 44,
  sym_description_list = 45,
  sym_audio = 46,
  sym_video = 47,
  aux_sym_document_repeat1 = 48,
  aux_sym_code_repeat1 = 49,
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
  [anon_sym_audio_COLON_COLON] = "audio::",
  [aux_sym_audio_token1] = "audio_token1",
  [anon_sym_video_COLON_COLON] = "video::",
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
  [sym_audio] = "audio",
  [sym_video] = "video",
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
  [anon_sym_audio_COLON_COLON] = anon_sym_audio_COLON_COLON,
  [aux_sym_audio_token1] = aux_sym_audio_token1,
  [anon_sym_video_COLON_COLON] = anon_sym_video_COLON_COLON,
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
  [sym_audio] = sym_audio,
  [sym_video] = sym_video,
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
  [anon_sym_audio_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_audio_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_video_COLON_COLON] = {
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
  [sym_description_list] = {
    .visible = true,
    .named = true,
  },
  [sym_audio] = {
    .visible = true,
    .named = true,
  },
  [sym_video] = {
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 1},
  [1] =
    {field_title, 2},
  [2] =
    {field_language, 1},
  [3] =
    {field_title, 3},
    {field_url, 1},
  [5] =
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
  [40] = 37,
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == '[') ADVANCE(130);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'k') ADVANCE(71);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == '|') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(133);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(128);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(151);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(135);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(128);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(151);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == '<') ADVANCE(143);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(2);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 33:
      if (lookahead == '[') ADVANCE(137);
      END_STATE();
    case 34:
      if (lookahead == '[') ADVANCE(135);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 36:
      if (lookahead == ']') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 39:
      if (eof) ADVANCE(41);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'k') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(108);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(39)
      if (('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == '[') ADVANCE(131);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'k') ADVANCE(99);
      if (lookahead == 'v') ADVANCE(108);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(57);
      if (('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '|') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == ':') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'T') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'g') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(18);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(56);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(15);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(93);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(106);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(102);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(105);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(107);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(92);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(121);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(120);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(115);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'g') ADVANCE(103);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(114);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(100);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(113);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(116);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(111);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(117);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(122);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 't') ADVANCE(110);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 't') ADVANCE(104);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(101);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(19);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(16);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(17);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(60);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == ':') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_description_list_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_description_list_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 40},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 45},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 132},
  [46] = {.lex_state = 132},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 132},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 132},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 53},
  [76] = {.lex_state = 53},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 129},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 53},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 39},
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
    [anon_sym_audio_COLON_COLON] = ACTIONS(1),
    [aux_sym_audio_token1] = ACTIONS(1),
    [anon_sym_video_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(77),
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
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
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
    [anon_sym_audio_COLON_COLON] = ACTIONS(29),
    [anon_sym_video_COLON_COLON] = ACTIONS(31),
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
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_title_token1] = ACTIONS(35),
    [anon_sym_NOTE_COLON] = ACTIONS(38),
    [aux_sym_list_token1] = ACTIONS(41),
    [anon_sym_LBRACK_COMMA] = ACTIONS(44),
    [aux_sym_code_token1] = ACTIONS(47),
    [anon_sym_SLASH_SLASH] = ACTIONS(50),
    [anon_sym_image_COLON_COLON] = ACTIONS(53),
    [aux_sym_url_token1] = ACTIONS(56),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(59),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(62),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(68),
    [anon_sym_audio_COLON_COLON] = ACTIONS(71),
    [anon_sym_video_COLON_COLON] = ACTIONS(74),
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
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(77),
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
    [anon_sym_audio_COLON_COLON] = ACTIONS(29),
    [anon_sym_video_COLON_COLON] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(79), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [23] = 3,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_,
    ACTIONS(87), 14,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [46] = 2,
    ACTIONS(93), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(91), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [66] = 2,
    ACTIONS(97), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(95), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [86] = 2,
    ACTIONS(101), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(99), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [106] = 2,
    ACTIONS(105), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(103), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [126] = 2,
    ACTIONS(109), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(107), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [146] = 2,
    ACTIONS(113), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(111), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [166] = 2,
    ACTIONS(117), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(115), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [186] = 2,
    ACTIONS(121), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(119), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [206] = 2,
    ACTIONS(125), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(123), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [226] = 2,
    ACTIONS(129), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(127), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [246] = 2,
    ACTIONS(133), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(131), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [266] = 2,
    ACTIONS(137), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(135), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [286] = 2,
    ACTIONS(141), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(139), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [306] = 2,
    ACTIONS(145), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(143), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [326] = 2,
    ACTIONS(149), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(147), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [346] = 2,
    ACTIONS(153), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(151), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [366] = 2,
    ACTIONS(157), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(155), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [386] = 2,
    ACTIONS(161), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(159), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [406] = 2,
    ACTIONS(165), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(163), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [426] = 2,
    ACTIONS(169), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(167), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [446] = 2,
    ACTIONS(173), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(171), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [466] = 2,
    ACTIONS(177), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(175), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [486] = 2,
    ACTIONS(181), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(179), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [506] = 2,
    ACTIONS(185), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(183), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [526] = 2,
    ACTIONS(189), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(187), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [546] = 2,
    ACTIONS(193), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(191), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [566] = 2,
    ACTIONS(197), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(195), 13,
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
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [586] = 3,
    ACTIONS(199), 1,
      aux_sym_title_token2,
    ACTIONS(201), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(36), 1,
      aux_sym_code_repeat1,
  [596] = 3,
    ACTIONS(203), 1,
      aux_sym_title_token2,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(38), 1,
      aux_sym_code_repeat1,
  [606] = 3,
    ACTIONS(207), 1,
      aux_sym_title_token2,
    ACTIONS(209), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(37), 1,
      aux_sym_code_repeat1,
  [616] = 3,
    ACTIONS(211), 1,
      aux_sym_title_token2,
    ACTIONS(213), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(40), 1,
      aux_sym_code_repeat1,
  [626] = 3,
    ACTIONS(215), 1,
      aux_sym_title_token2,
    ACTIONS(218), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(37), 1,
      aux_sym_code_repeat1,
  [636] = 3,
    ACTIONS(207), 1,
      aux_sym_title_token2,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(37), 1,
      aux_sym_code_repeat1,
  [646] = 3,
    ACTIONS(222), 1,
      aux_sym_title_token2,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(35), 1,
      aux_sym_code_repeat1,
  [656] = 3,
    ACTIONS(218), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    ACTIONS(226), 1,
      aux_sym_title_token2,
    STATE(40), 1,
      aux_sym_code_repeat1,
  [666] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 1,
      aux_sym_audio_token1,
  [673] = 2,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(235), 1,
      aux_sym_audio_token1,
  [680] = 2,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(239), 1,
      aux_sym_audio_token1,
  [687] = 2,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_GT_GT,
  [694] = 2,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      aux_sym_image_token2,
  [701] = 2,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      aux_sym_image_token2,
  [708] = 2,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      aux_sym_audio_token1,
  [715] = 2,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 1,
      aux_sym_kbd_token1,
  [722] = 2,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      aux_sym_footnote_token1,
  [729] = 2,
    ACTIONS(265), 1,
      anon_sym_,
    ACTIONS(267), 1,
      aux_sym_code_token1,
  [736] = 1,
    ACTIONS(269), 1,
      aux_sym_code_token1,
  [740] = 1,
    ACTIONS(271), 1,
      aux_sym_image_token2,
  [744] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
  [748] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
  [752] = 1,
    ACTIONS(277), 1,
      aux_sym_code_token1,
  [756] = 1,
    ACTIONS(279), 1,
      anon_sym_,
  [760] = 1,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
  [764] = 1,
    ACTIONS(283), 1,
      anon_sym_RBRACK_LF,
  [768] = 1,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
  [772] = 1,
    ACTIONS(287), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [776] = 1,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
  [780] = 1,
    ACTIONS(291), 1,
      anon_sym_RBRACK_LF,
  [784] = 1,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
  [788] = 1,
    ACTIONS(295), 1,
      anon_sym_GT_GT,
  [792] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
  [796] = 1,
    ACTIONS(299), 1,
      aux_sym_image_token2,
  [800] = 1,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
  [804] = 1,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
  [808] = 1,
    ACTIONS(305), 1,
      aux_sym_description_list_token1,
  [812] = 1,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
  [816] = 1,
    ACTIONS(309), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [820] = 1,
    ACTIONS(311), 1,
      anon_sym_RBRACK_LF,
  [824] = 1,
    ACTIONS(313), 1,
      aux_sym_title_token2,
  [828] = 1,
    ACTIONS(315), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [832] = 1,
    ACTIONS(317), 1,
      aux_sym_title_token2,
  [836] = 1,
    ACTIONS(319), 1,
      aux_sym_title_token2,
  [840] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [844] = 1,
    ACTIONS(323), 1,
      aux_sym_code_token1,
  [848] = 1,
    ACTIONS(325), 1,
      aux_sym_image_token1,
  [852] = 1,
    ACTIONS(327), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [856] = 1,
    ACTIONS(329), 1,
      aux_sym_title_token2,
  [860] = 1,
    ACTIONS(331), 1,
      anon_sym_COLON_COLON,
  [864] = 1,
    ACTIONS(333), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 166,
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 226,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 286,
  [SMALL_STATE(19)] = 306,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 346,
  [SMALL_STATE(22)] = 366,
  [SMALL_STATE(23)] = 386,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 426,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 466,
  [SMALL_STATE(28)] = 486,
  [SMALL_STATE(29)] = 506,
  [SMALL_STATE(30)] = 526,
  [SMALL_STATE(31)] = 546,
  [SMALL_STATE(32)] = 566,
  [SMALL_STATE(33)] = 586,
  [SMALL_STATE(34)] = 596,
  [SMALL_STATE(35)] = 606,
  [SMALL_STATE(36)] = 616,
  [SMALL_STATE(37)] = 626,
  [SMALL_STATE(38)] = 636,
  [SMALL_STATE(39)] = 646,
  [SMALL_STATE(40)] = 656,
  [SMALL_STATE(41)] = 666,
  [SMALL_STATE(42)] = 673,
  [SMALL_STATE(43)] = 680,
  [SMALL_STATE(44)] = 687,
  [SMALL_STATE(45)] = 694,
  [SMALL_STATE(46)] = 701,
  [SMALL_STATE(47)] = 708,
  [SMALL_STATE(48)] = 715,
  [SMALL_STATE(49)] = 722,
  [SMALL_STATE(50)] = 729,
  [SMALL_STATE(51)] = 736,
  [SMALL_STATE(52)] = 740,
  [SMALL_STATE(53)] = 744,
  [SMALL_STATE(54)] = 748,
  [SMALL_STATE(55)] = 752,
  [SMALL_STATE(56)] = 756,
  [SMALL_STATE(57)] = 760,
  [SMALL_STATE(58)] = 764,
  [SMALL_STATE(59)] = 768,
  [SMALL_STATE(60)] = 772,
  [SMALL_STATE(61)] = 776,
  [SMALL_STATE(62)] = 780,
  [SMALL_STATE(63)] = 784,
  [SMALL_STATE(64)] = 788,
  [SMALL_STATE(65)] = 792,
  [SMALL_STATE(66)] = 796,
  [SMALL_STATE(67)] = 800,
  [SMALL_STATE(68)] = 804,
  [SMALL_STATE(69)] = 808,
  [SMALL_STATE(70)] = 812,
  [SMALL_STATE(71)] = 816,
  [SMALL_STATE(72)] = 820,
  [SMALL_STATE(73)] = 824,
  [SMALL_STATE(74)] = 828,
  [SMALL_STATE(75)] = 832,
  [SMALL_STATE(76)] = 836,
  [SMALL_STATE(77)] = 840,
  [SMALL_STATE(78)] = 844,
  [SMALL_STATE(79)] = 848,
  [SMALL_STATE(80)] = 852,
  [SMALL_STATE(81)] = 856,
  [SMALL_STATE(82)] = 860,
  [SMALL_STATE(83)] = 864,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 5, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 5, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 3, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 3, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(37),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(40),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [321] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
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
