#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym_title_token1 = 1,
  anon_sym_ = 2,
  aux_sym_title_token2 = 3,
  anon_sym_NOTE_COLON = 4,
  anon_sym_TIP_COLON = 5,
  aux_sym_tip_token1 = 6,
  anon_sym_IMPORTANT_COLON = 7,
  anon_sym_CAUTION_COLON = 8,
  anon_sym_WARNING_COLON = 9,
  aux_sym__list_item_token1 = 10,
  aux_sym__list_item_token2 = 11,
  aux_sym__list_item_token3 = 12,
  anon_sym_LF = 13,
  anon_sym_LBRACK_COMMA = 14,
  aux_sym_code_token1 = 15,
  anon_sym_RBRACK_LF = 16,
  anon_sym_DASH_DASH_DASH_DASH_LF = 17,
  anon_sym_DASH_DASH_DASH_DASH = 18,
  anon_sym_SLASH_SLASH = 19,
  anon_sym_image_COLON_COLON = 20,
  aux_sym_image_token1 = 21,
  anon_sym_LBRACK = 22,
  aux_sym_image_token2 = 23,
  aux_sym_url_token1 = 24,
  anon_sym_RBRACK = 25,
  anon_sym_footnote_COLON_LBRACK = 26,
  aux_sym_footnote_token1 = 27,
  anon_sym_kbd_COLON_LBRACK = 28,
  aux_sym_kbd_token1 = 29,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 30,
  anon_sym_PIPE_EQ_EQ_EQ = 31,
  anon_sym_LT_LT = 32,
  anon_sym_COMMA = 33,
  anon_sym_GT_GT = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_audio_COLON_COLON = 36,
  aux_sym_audio_token1 = 37,
  anon_sym_video_COLON_COLON = 38,
  sym_document = 39,
  sym__block = 40,
  sym_title = 41,
  sym__admonitions = 42,
  sym_note = 43,
  sym_tip = 44,
  sym_important = 45,
  sym_caution = 46,
  sym_warning = 47,
  sym_list = 48,
  sym__list_item = 49,
  sym_code = 50,
  sym_comment = 51,
  sym_image = 52,
  sym_url = 53,
  sym_footnote = 54,
  sym_kbd = 55,
  sym_table = 56,
  sym_xref = 57,
  sym_description_list = 58,
  sym_audio = 59,
  sym_video = 60,
  aux_sym_document_repeat1 = 61,
  aux_sym_list_repeat1 = 62,
  aux_sym_code_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_title_token1] = "title_token1",
  [anon_sym_] = " ",
  [aux_sym_title_token2] = "title_token2",
  [anon_sym_NOTE_COLON] = "NOTE:",
  [anon_sym_TIP_COLON] = "TIP: ",
  [aux_sym_tip_token1] = "tip_token1",
  [anon_sym_IMPORTANT_COLON] = "IMPORTANT: ",
  [anon_sym_CAUTION_COLON] = "CAUTION: ",
  [anon_sym_WARNING_COLON] = "WARNING: ",
  [aux_sym__list_item_token1] = "_list_item_token1",
  [aux_sym__list_item_token2] = "_list_item_token2",
  [aux_sym__list_item_token3] = "_list_item_token3",
  [anon_sym_LF] = "\n",
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
  [anon_sym_audio_COLON_COLON] = "audio::",
  [aux_sym_audio_token1] = "audio_token1",
  [anon_sym_video_COLON_COLON] = "video::",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym_title] = "title",
  [sym__admonitions] = "_admonitions",
  [sym_note] = "note",
  [sym_tip] = "tip",
  [sym_important] = "important",
  [sym_caution] = "caution",
  [sym_warning] = "warning",
  [sym_list] = "list",
  [sym__list_item] = "_list_item",
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
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_title_token1] = aux_sym_title_token1,
  [anon_sym_] = anon_sym_,
  [aux_sym_title_token2] = aux_sym_title_token2,
  [anon_sym_NOTE_COLON] = anon_sym_NOTE_COLON,
  [anon_sym_TIP_COLON] = anon_sym_TIP_COLON,
  [aux_sym_tip_token1] = aux_sym_tip_token1,
  [anon_sym_IMPORTANT_COLON] = anon_sym_IMPORTANT_COLON,
  [anon_sym_CAUTION_COLON] = anon_sym_CAUTION_COLON,
  [anon_sym_WARNING_COLON] = anon_sym_WARNING_COLON,
  [aux_sym__list_item_token1] = aux_sym__list_item_token1,
  [aux_sym__list_item_token2] = aux_sym__list_item_token2,
  [aux_sym__list_item_token3] = aux_sym__list_item_token3,
  [anon_sym_LF] = anon_sym_LF,
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
  [anon_sym_audio_COLON_COLON] = anon_sym_audio_COLON_COLON,
  [aux_sym_audio_token1] = aux_sym_audio_token1,
  [anon_sym_video_COLON_COLON] = anon_sym_video_COLON_COLON,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym_title] = sym_title,
  [sym__admonitions] = sym__admonitions,
  [sym_note] = sym_note,
  [sym_tip] = sym_tip,
  [sym_important] = sym_important,
  [sym_caution] = sym_caution,
  [sym_warning] = sym_warning,
  [sym_list] = sym_list,
  [sym__list_item] = sym__list_item,
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
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
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
  [anon_sym_TIP_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tip_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_IMPORTANT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAUTION_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARNING_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__list_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_item_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_item_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
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
  [sym__admonitions] = {
    .visible = false,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_tip] = {
    .visible = true,
    .named = true,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [sym_caution] = {
    .visible = true,
    .named = true,
  },
  [sym_warning] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__list_item] = {
    .visible = false,
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
  [aux_sym_list_repeat1] = {
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 39,
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
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'k') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(123);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == ':') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(209);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == ':') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(202);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(216);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(197);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(218);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(206);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(204);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(216);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(197);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(218);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 33:
      if (lookahead == '<') ADVANCE(212);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(2);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 41:
      if (lookahead == '[') ADVANCE(206);
      END_STATE();
    case 42:
      if (lookahead == '[') ADVANCE(204);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == 'W') ADVANCE(140);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead == 'v') ADVANCE(174);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == 'W') ADVANCE(140);
      if (lookahead == '[') ADVANCE(200);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead == 'v') ADVANCE(174);
      if (lookahead == '|') ADVANCE(39);
      if (('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__list_item_token2);
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__list_item_token3);
      if (lookahead == '.') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__list_item_token3);
      if (lookahead == '.') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'A') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'A') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'A') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'E') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'G') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'I') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'I') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'I') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'M') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'N') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'N') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'N') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'N') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'O') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'O') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'O') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'P') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'P') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'T') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'T') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'T') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'T') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'U') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'g') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '.') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(8);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(26);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(65);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(23);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(163);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(157);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(150);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(137);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'G') ADVANCE(189);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(156);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(148);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(154);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'M') ADVANCE(155);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(143);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(145);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(186);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(159);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(158);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(151);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(153);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(135);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(149);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(161);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(142);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(146);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(141);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(191);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'U') ADVANCE(160);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(172);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(168);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(171);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(173);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(136);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(188);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(187);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(181);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(169);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(180);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(166);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(164);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(179);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(182);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(177);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(183);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(138);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(190);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 't') ADVANCE(176);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 't') ADVANCE(170);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(167);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(10);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(27);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(24);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(12);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(25);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(14);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(77);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == ':') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 49},
  [36] = {.lex_state = 49},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 45},
  [51] = {.lex_state = 44},
  [52] = {.lex_state = 201},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 201},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 201},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 46},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 49},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 46},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 62},
  [73] = {.lex_state = 49},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 201},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 46},
  [80] = {.lex_state = 49},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 198},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 48},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_title_token1] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_TIP_COLON] = ACTIONS(1),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(1),
    [anon_sym_CAUTION_COLON] = ACTIONS(1),
    [anon_sym_WARNING_COLON] = ACTIONS(1),
    [aux_sym__list_item_token1] = ACTIONS(1),
    [aux_sym__list_item_token3] = ACTIONS(1),
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
    [sym_document] = STATE(74),
    [sym__block] = STATE(2),
    [sym_title] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym_tip] = STATE(2),
    [sym_important] = STATE(2),
    [sym_caution] = STATE(2),
    [sym_warning] = STATE(2),
    [sym_list] = STATE(2),
    [sym__list_item] = STATE(5),
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
    [aux_sym_list_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [anon_sym_TIP_COLON] = ACTIONS(9),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(11),
    [anon_sym_CAUTION_COLON] = ACTIONS(13),
    [anon_sym_WARNING_COLON] = ACTIONS(15),
    [aux_sym__list_item_token1] = ACTIONS(17),
    [aux_sym__list_item_token2] = ACTIONS(17),
    [aux_sym__list_item_token3] = ACTIONS(17),
    [anon_sym_LBRACK_COMMA] = ACTIONS(19),
    [aux_sym_code_token1] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_image_COLON_COLON] = ACTIONS(25),
    [aux_sym_url_token1] = ACTIONS(27),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(29),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(31),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(33),
    [anon_sym_LT_LT] = ACTIONS(35),
    [anon_sym_audio_COLON_COLON] = ACTIONS(37),
    [anon_sym_video_COLON_COLON] = ACTIONS(39),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym_title] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym_tip] = STATE(3),
    [sym_important] = STATE(3),
    [sym_caution] = STATE(3),
    [sym_warning] = STATE(3),
    [sym_list] = STATE(3),
    [sym__list_item] = STATE(5),
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
    [aux_sym_list_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [anon_sym_TIP_COLON] = ACTIONS(9),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(11),
    [anon_sym_CAUTION_COLON] = ACTIONS(13),
    [anon_sym_WARNING_COLON] = ACTIONS(15),
    [aux_sym__list_item_token1] = ACTIONS(17),
    [aux_sym__list_item_token2] = ACTIONS(17),
    [aux_sym__list_item_token3] = ACTIONS(17),
    [anon_sym_LBRACK_COMMA] = ACTIONS(19),
    [aux_sym_code_token1] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_image_COLON_COLON] = ACTIONS(25),
    [aux_sym_url_token1] = ACTIONS(27),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(29),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(31),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(33),
    [anon_sym_LT_LT] = ACTIONS(35),
    [anon_sym_audio_COLON_COLON] = ACTIONS(37),
    [anon_sym_video_COLON_COLON] = ACTIONS(39),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym_title] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym_tip] = STATE(3),
    [sym_important] = STATE(3),
    [sym_caution] = STATE(3),
    [sym_warning] = STATE(3),
    [sym_list] = STATE(3),
    [sym__list_item] = STATE(5),
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
    [aux_sym_list_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_title_token1] = ACTIONS(45),
    [anon_sym_NOTE_COLON] = ACTIONS(48),
    [anon_sym_TIP_COLON] = ACTIONS(51),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(54),
    [anon_sym_CAUTION_COLON] = ACTIONS(57),
    [anon_sym_WARNING_COLON] = ACTIONS(60),
    [aux_sym__list_item_token1] = ACTIONS(63),
    [aux_sym__list_item_token2] = ACTIONS(63),
    [aux_sym__list_item_token3] = ACTIONS(63),
    [anon_sym_LBRACK_COMMA] = ACTIONS(66),
    [aux_sym_code_token1] = ACTIONS(69),
    [anon_sym_SLASH_SLASH] = ACTIONS(72),
    [anon_sym_image_COLON_COLON] = ACTIONS(75),
    [aux_sym_url_token1] = ACTIONS(78),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(81),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(84),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(90),
    [anon_sym_audio_COLON_COLON] = ACTIONS(93),
    [anon_sym_video_COLON_COLON] = ACTIONS(96),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(101), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    STATE(4), 2,
      sym__list_item,
      aux_sym_list_repeat1,
    ACTIONS(103), 3,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
    ACTIONS(99), 16,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [32] = 4,
    ACTIONS(108), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    STATE(4), 2,
      sym__list_item,
      aux_sym_list_repeat1,
    ACTIONS(17), 3,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
    ACTIONS(106), 16,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [64] = 3,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_,
    ACTIONS(112), 20,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [93] = 3,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(116), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [122] = 2,
    ACTIONS(124), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(122), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [148] = 2,
    ACTIONS(128), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(126), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [174] = 2,
    ACTIONS(132), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(130), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [200] = 2,
    ACTIONS(136), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(134), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
    ACTIONS(140), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(138), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [252] = 2,
    ACTIONS(144), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(142), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [278] = 2,
    ACTIONS(148), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(146), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [304] = 2,
    ACTIONS(152), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(150), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [330] = 2,
    ACTIONS(156), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(154), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [356] = 2,
    ACTIONS(160), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(158), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [382] = 2,
    ACTIONS(164), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(162), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [408] = 2,
    ACTIONS(168), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(166), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [434] = 2,
    ACTIONS(172), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(170), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [460] = 2,
    ACTIONS(176), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(174), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
    ACTIONS(180), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(178), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [512] = 2,
    ACTIONS(184), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(182), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [538] = 2,
    ACTIONS(188), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(186), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [564] = 2,
    ACTIONS(192), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(190), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [590] = 2,
    ACTIONS(196), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(194), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [616] = 2,
    ACTIONS(200), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(198), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [642] = 2,
    ACTIONS(204), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(202), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [668] = 2,
    ACTIONS(208), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(206), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [694] = 2,
    ACTIONS(212), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(210), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [720] = 2,
    ACTIONS(216), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(214), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [746] = 2,
    ACTIONS(220), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(218), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [772] = 2,
    ACTIONS(224), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(222), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [798] = 2,
    ACTIONS(228), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(226), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [824] = 2,
    ACTIONS(232), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(230), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [850] = 2,
    ACTIONS(236), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(234), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [876] = 2,
    ACTIONS(240), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(238), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [902] = 2,
    ACTIONS(244), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(242), 19,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token1,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
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
  [928] = 3,
    ACTIONS(246), 1,
      aux_sym_title_token2,
    ACTIONS(249), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(39), 1,
      aux_sym_code_repeat1,
  [938] = 3,
    ACTIONS(251), 1,
      aux_sym_title_token2,
    ACTIONS(253), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(46), 1,
      aux_sym_code_repeat1,
  [948] = 3,
    ACTIONS(255), 1,
      aux_sym_title_token2,
    ACTIONS(257), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(39), 1,
      aux_sym_code_repeat1,
  [958] = 3,
    ACTIONS(259), 1,
      aux_sym_title_token2,
    ACTIONS(261), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(43), 1,
      aux_sym_code_repeat1,
  [968] = 3,
    ACTIONS(263), 1,
      aux_sym_title_token2,
    ACTIONS(265), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(45), 1,
      aux_sym_code_repeat1,
  [978] = 3,
    ACTIONS(267), 1,
      aux_sym_title_token2,
    ACTIONS(269), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(41), 1,
      aux_sym_code_repeat1,
  [988] = 3,
    ACTIONS(249), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(271), 1,
      aux_sym_title_token2,
    STATE(45), 1,
      aux_sym_code_repeat1,
  [998] = 3,
    ACTIONS(263), 1,
      aux_sym_title_token2,
    ACTIONS(274), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(45), 1,
      aux_sym_code_repeat1,
  [1008] = 2,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    ACTIONS(278), 1,
      aux_sym_audio_token1,
  [1015] = 2,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    ACTIONS(282), 1,
      aux_sym_audio_token1,
  [1022] = 2,
    ACTIONS(284), 1,
      anon_sym_,
    ACTIONS(286), 1,
      aux_sym_code_token1,
  [1029] = 2,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 1,
      aux_sym_footnote_token1,
  [1036] = 2,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 1,
      aux_sym_kbd_token1,
  [1043] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      aux_sym_image_token2,
  [1050] = 2,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    ACTIONS(302), 1,
      aux_sym_audio_token1,
  [1057] = 2,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_GT_GT,
  [1064] = 2,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    ACTIONS(310), 1,
      aux_sym_image_token2,
  [1071] = 2,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    ACTIONS(314), 1,
      aux_sym_audio_token1,
  [1078] = 1,
    ACTIONS(316), 1,
      aux_sym_title_token2,
  [1082] = 1,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
  [1086] = 1,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
  [1090] = 1,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
  [1094] = 1,
    ACTIONS(324), 1,
      aux_sym_image_token2,
  [1098] = 1,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
  [1102] = 1,
    ACTIONS(328), 1,
      aux_sym_code_token1,
  [1106] = 1,
    ACTIONS(330), 1,
      aux_sym_tip_token1,
  [1110] = 1,
    ACTIONS(332), 1,
      anon_sym_RBRACK_LF,
  [1114] = 1,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
  [1118] = 1,
    ACTIONS(336), 1,
      aux_sym_code_token1,
  [1122] = 1,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
  [1126] = 1,
    ACTIONS(340), 1,
      aux_sym_tip_token1,
  [1130] = 1,
    ACTIONS(342), 1,
      anon_sym_,
  [1134] = 1,
    ACTIONS(344), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [1138] = 1,
    ACTIONS(346), 1,
      aux_sym_title_token2,
  [1142] = 1,
    ACTIONS(348), 1,
      anon_sym_RBRACK_LF,
  [1146] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1150] = 1,
    ACTIONS(352), 1,
      anon_sym_GT_GT,
  [1154] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
  [1158] = 1,
    ACTIONS(356), 1,
      aux_sym_image_token2,
  [1162] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
  [1166] = 1,
    ACTIONS(360), 1,
      aux_sym_code_token1,
  [1170] = 1,
    ACTIONS(362), 1,
      anon_sym_RBRACK_LF,
  [1174] = 1,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
  [1178] = 1,
    ACTIONS(366), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [1182] = 1,
    ACTIONS(368), 1,
      anon_sym_LF,
  [1186] = 1,
    ACTIONS(370), 1,
      aux_sym_image_token1,
  [1190] = 1,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [1194] = 1,
    ACTIONS(374), 1,
      aux_sym_title_token2,
  [1198] = 1,
    ACTIONS(376), 1,
      anon_sym_COLON_COLON,
  [1202] = 1,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
  [1206] = 1,
    ACTIONS(380), 1,
      anon_sym_,
  [1210] = 1,
    ACTIONS(382), 1,
      aux_sym_tip_token1,
  [1214] = 1,
    ACTIONS(384), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [1218] = 1,
    ACTIONS(386), 1,
      aux_sym_tip_token1,
  [1222] = 1,
    ACTIONS(388), 1,
      aux_sym_tip_token1,
  [1226] = 1,
    ACTIONS(390), 1,
      aux_sym_tip_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 200,
  [SMALL_STATE(12)] = 226,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 278,
  [SMALL_STATE(15)] = 304,
  [SMALL_STATE(16)] = 330,
  [SMALL_STATE(17)] = 356,
  [SMALL_STATE(18)] = 382,
  [SMALL_STATE(19)] = 408,
  [SMALL_STATE(20)] = 434,
  [SMALL_STATE(21)] = 460,
  [SMALL_STATE(22)] = 486,
  [SMALL_STATE(23)] = 512,
  [SMALL_STATE(24)] = 538,
  [SMALL_STATE(25)] = 564,
  [SMALL_STATE(26)] = 590,
  [SMALL_STATE(27)] = 616,
  [SMALL_STATE(28)] = 642,
  [SMALL_STATE(29)] = 668,
  [SMALL_STATE(30)] = 694,
  [SMALL_STATE(31)] = 720,
  [SMALL_STATE(32)] = 746,
  [SMALL_STATE(33)] = 772,
  [SMALL_STATE(34)] = 798,
  [SMALL_STATE(35)] = 824,
  [SMALL_STATE(36)] = 850,
  [SMALL_STATE(37)] = 876,
  [SMALL_STATE(38)] = 902,
  [SMALL_STATE(39)] = 928,
  [SMALL_STATE(40)] = 938,
  [SMALL_STATE(41)] = 948,
  [SMALL_STATE(42)] = 958,
  [SMALL_STATE(43)] = 968,
  [SMALL_STATE(44)] = 978,
  [SMALL_STATE(45)] = 988,
  [SMALL_STATE(46)] = 998,
  [SMALL_STATE(47)] = 1008,
  [SMALL_STATE(48)] = 1015,
  [SMALL_STATE(49)] = 1022,
  [SMALL_STATE(50)] = 1029,
  [SMALL_STATE(51)] = 1036,
  [SMALL_STATE(52)] = 1043,
  [SMALL_STATE(53)] = 1050,
  [SMALL_STATE(54)] = 1057,
  [SMALL_STATE(55)] = 1064,
  [SMALL_STATE(56)] = 1071,
  [SMALL_STATE(57)] = 1078,
  [SMALL_STATE(58)] = 1082,
  [SMALL_STATE(59)] = 1086,
  [SMALL_STATE(60)] = 1090,
  [SMALL_STATE(61)] = 1094,
  [SMALL_STATE(62)] = 1098,
  [SMALL_STATE(63)] = 1102,
  [SMALL_STATE(64)] = 1106,
  [SMALL_STATE(65)] = 1110,
  [SMALL_STATE(66)] = 1114,
  [SMALL_STATE(67)] = 1118,
  [SMALL_STATE(68)] = 1122,
  [SMALL_STATE(69)] = 1126,
  [SMALL_STATE(70)] = 1130,
  [SMALL_STATE(71)] = 1134,
  [SMALL_STATE(72)] = 1138,
  [SMALL_STATE(73)] = 1142,
  [SMALL_STATE(74)] = 1146,
  [SMALL_STATE(75)] = 1150,
  [SMALL_STATE(76)] = 1154,
  [SMALL_STATE(77)] = 1158,
  [SMALL_STATE(78)] = 1162,
  [SMALL_STATE(79)] = 1166,
  [SMALL_STATE(80)] = 1170,
  [SMALL_STATE(81)] = 1174,
  [SMALL_STATE(82)] = 1178,
  [SMALL_STATE(83)] = 1182,
  [SMALL_STATE(84)] = 1186,
  [SMALL_STATE(85)] = 1190,
  [SMALL_STATE(86)] = 1194,
  [SMALL_STATE(87)] = 1198,
  [SMALL_STATE(88)] = 1202,
  [SMALL_STATE(89)] = 1206,
  [SMALL_STATE(90)] = 1210,
  [SMALL_STATE(91)] = 1214,
  [SMALL_STATE(92)] = 1218,
  [SMALL_STATE(93)] = 1222,
  [SMALL_STATE(94)] = 1226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(89),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 5, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 5, .production_id = 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 3, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 3, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(39),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(45),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
