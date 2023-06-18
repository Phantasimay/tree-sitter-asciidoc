#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  aux_sym_list_token1 = 10,
  anon_sym_LBRACK_COMMA = 11,
  aux_sym_code_token1 = 12,
  anon_sym_RBRACK_LF = 13,
  anon_sym_DASH_DASH_DASH_DASH_LF = 14,
  anon_sym_DASH_DASH_DASH_DASH = 15,
  anon_sym_SLASH_SLASH = 16,
  anon_sym_image_COLON_COLON = 17,
  aux_sym_image_token1 = 18,
  anon_sym_LBRACK = 19,
  aux_sym_image_token2 = 20,
  aux_sym_url_token1 = 21,
  anon_sym_RBRACK = 22,
  anon_sym_footnote_COLON_LBRACK = 23,
  aux_sym_footnote_token1 = 24,
  anon_sym_kbd_COLON_LBRACK = 25,
  aux_sym_kbd_token1 = 26,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 27,
  anon_sym_PIPE_EQ_EQ_EQ = 28,
  anon_sym_LT_LT = 29,
  anon_sym_COMMA = 30,
  anon_sym_GT_GT = 31,
  anon_sym_COLON_COLON = 32,
  anon_sym_audio_COLON_COLON = 33,
  aux_sym_audio_token1 = 34,
  anon_sym_video_COLON_COLON = 35,
  sym_document = 36,
  sym__block = 37,
  sym_title = 38,
  sym__admonitions = 39,
  sym_note = 40,
  sym_tip = 41,
  sym_important = 42,
  sym_caution = 43,
  sym_warning = 44,
  sym_list = 45,
  sym_code = 46,
  sym_comment = 47,
  sym_image = 48,
  sym_url = 49,
  sym_footnote = 50,
  sym_kbd = 51,
  sym_table = 52,
  sym_xref = 53,
  sym_description_list = 54,
  sym_audio = 55,
  sym_video = 56,
  aux_sym_document_repeat1 = 57,
  aux_sym_code_repeat1 = 58,
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
  [anon_sym_TIP_COLON] = anon_sym_TIP_COLON,
  [aux_sym_tip_token1] = aux_sym_tip_token1,
  [anon_sym_IMPORTANT_COLON] = anon_sym_IMPORTANT_COLON,
  [anon_sym_CAUTION_COLON] = anon_sym_CAUTION_COLON,
  [anon_sym_WARNING_COLON] = anon_sym_WARNING_COLON,
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
  [40] = 40,
  [41] = 41,
  [42] = 40,
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
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'k') ADVANCE(111);
      if (lookahead == 'v') ADVANCE(120);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(190);
      if (lookahead == ':') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(206);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == ':') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(192);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(199);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(215);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(203);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(201);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 33:
      if (lookahead == '<') ADVANCE(209);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(207);
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
      if (lookahead == '>') ADVANCE(211);
      END_STATE();
    case 41:
      if (lookahead == '[') ADVANCE(203);
      END_STATE();
    case 42:
      if (lookahead == '[') ADVANCE(201);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == 'T') ADVANCE(141);
      if (lookahead == 'W') ADVANCE(137);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'k') ADVANCE(162);
      if (lookahead == 'v') ADVANCE(171);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(47)
      if (('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(144);
      if (lookahead == 'N') ADVANCE(149);
      if (lookahead == 'T') ADVANCE(141);
      if (lookahead == 'W') ADVANCE(137);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == ']') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'k') ADVANCE(162);
      if (lookahead == 'v') ADVANCE(171);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(71);
      if (('\\' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\n') ADVANCE(191);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_title_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_list_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'A') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'A') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'A') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'E') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'G') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'I') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'I') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'I') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'M') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'N') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'N') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'N') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'N') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'P') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'P') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'R') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'R') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'T') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'U') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'b') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'g') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(7);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(26);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(64);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(23);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(160);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(154);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'A') ADVANCE(147);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(134);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'G') ADVANCE(186);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(153);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(145);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'I') ADVANCE(151);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'M') ADVANCE(152);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(140);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(142);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(159);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(183);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(156);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(155);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(148);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(150);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(132);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(146);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'R') ADVANCE(158);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(139);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(143);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(138);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(188);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'U') ADVANCE(157);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'a') ADVANCE(169);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'b') ADVANCE(165);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(168);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(170);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(133);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(185);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(184);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(178);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(166);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(177);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(163);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(161);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(176);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(179);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(174);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(180);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(135);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(187);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 't') ADVANCE(173);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 't') ADVANCE(167);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(164);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(22);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(9);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(27);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(24);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(11);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(25);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(13);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(74);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == ':') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 60},
  [39] = {.lex_state = 53},
  [40] = {.lex_state = 53},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 60},
  [43] = {.lex_state = 53},
  [44] = {.lex_state = 60},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 198},
  [52] = {.lex_state = 198},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 198},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 198},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 61},
  [77] = {.lex_state = 61},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 195},
  [84] = {.lex_state = 61},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 47},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
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
    [sym_document] = STATE(80),
    [sym__block] = STATE(2),
    [sym_title] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym_tip] = STATE(2),
    [sym_important] = STATE(2),
    [sym_caution] = STATE(2),
    [sym_warning] = STATE(2),
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
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [anon_sym_TIP_COLON] = ACTIONS(9),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(11),
    [anon_sym_CAUTION_COLON] = ACTIONS(13),
    [anon_sym_WARNING_COLON] = ACTIONS(15),
    [aux_sym_list_token1] = ACTIONS(17),
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
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [anon_sym_TIP_COLON] = ACTIONS(9),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(11),
    [anon_sym_CAUTION_COLON] = ACTIONS(13),
    [anon_sym_WARNING_COLON] = ACTIONS(15),
    [aux_sym_list_token1] = ACTIONS(17),
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
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_title_token1] = ACTIONS(45),
    [anon_sym_NOTE_COLON] = ACTIONS(48),
    [anon_sym_TIP_COLON] = ACTIONS(51),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(54),
    [anon_sym_CAUTION_COLON] = ACTIONS(57),
    [anon_sym_WARNING_COLON] = ACTIONS(60),
    [aux_sym_list_token1] = ACTIONS(63),
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
  [0] = 3,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(101), 18,
      aux_sym_title_token1,
      anon_sym_NOTE_COLON,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [27] = 3,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(105), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [54] = 2,
    ACTIONS(113), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(111), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [78] = 2,
    ACTIONS(117), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(115), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [102] = 2,
    ACTIONS(121), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(119), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
    ACTIONS(125), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(123), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [150] = 2,
    ACTIONS(129), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(127), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [174] = 2,
    ACTIONS(133), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(131), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [198] = 2,
    ACTIONS(137), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(135), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [222] = 2,
    ACTIONS(141), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(139), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
    ACTIONS(145), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(143), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [270] = 2,
    ACTIONS(149), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(147), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [294] = 2,
    ACTIONS(153), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(151), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [318] = 2,
    ACTIONS(157), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(155), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [342] = 2,
    ACTIONS(161), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(159), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
    ACTIONS(165), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(163), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [390] = 2,
    ACTIONS(169), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(167), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [414] = 2,
    ACTIONS(173), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(171), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [438] = 2,
    ACTIONS(177), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(175), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [462] = 2,
    ACTIONS(181), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(179), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
    ACTIONS(185), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(183), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [510] = 2,
    ACTIONS(189), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(187), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [534] = 2,
    ACTIONS(193), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(191), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [558] = 2,
    ACTIONS(197), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(195), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [582] = 2,
    ACTIONS(201), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(199), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [606] = 2,
    ACTIONS(205), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(203), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [630] = 2,
    ACTIONS(209), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(207), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [654] = 2,
    ACTIONS(213), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(211), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [678] = 2,
    ACTIONS(217), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(215), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [702] = 2,
    ACTIONS(221), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(219), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [726] = 2,
    ACTIONS(225), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(223), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [750] = 2,
    ACTIONS(229), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(227), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [774] = 2,
    ACTIONS(233), 2,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
    ACTIONS(231), 17,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
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
  [798] = 3,
    ACTIONS(235), 1,
      aux_sym_title_token2,
    ACTIONS(237), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(40), 1,
      aux_sym_code_repeat1,
  [808] = 3,
    ACTIONS(239), 1,
      aux_sym_title_token2,
    ACTIONS(241), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(42), 1,
      aux_sym_code_repeat1,
  [818] = 3,
    ACTIONS(243), 1,
      aux_sym_title_token2,
    ACTIONS(245), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(37), 1,
      aux_sym_code_repeat1,
  [828] = 3,
    ACTIONS(247), 1,
      aux_sym_title_token2,
    ACTIONS(250), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(40), 1,
      aux_sym_code_repeat1,
  [838] = 3,
    ACTIONS(235), 1,
      aux_sym_title_token2,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(40), 1,
      aux_sym_code_repeat1,
  [848] = 3,
    ACTIONS(250), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    ACTIONS(254), 1,
      aux_sym_title_token2,
    STATE(42), 1,
      aux_sym_code_repeat1,
  [858] = 3,
    ACTIONS(257), 1,
      aux_sym_title_token2,
    ACTIONS(259), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(41), 1,
      aux_sym_code_repeat1,
  [868] = 3,
    ACTIONS(261), 1,
      aux_sym_title_token2,
    ACTIONS(263), 1,
      anon_sym_PIPE_EQ_EQ_EQ,
    STATE(38), 1,
      aux_sym_code_repeat1,
  [878] = 2,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      aux_sym_audio_token1,
  [885] = 2,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      aux_sym_audio_token1,
  [892] = 2,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_GT_GT,
  [899] = 2,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    ACTIONS(279), 1,
      aux_sym_audio_token1,
  [906] = 2,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    ACTIONS(283), 1,
      aux_sym_audio_token1,
  [913] = 2,
    ACTIONS(285), 1,
      anon_sym_,
    ACTIONS(287), 1,
      aux_sym_code_token1,
  [920] = 2,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      aux_sym_image_token2,
  [927] = 2,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 1,
      aux_sym_image_token2,
  [934] = 2,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    ACTIONS(299), 1,
      aux_sym_kbd_token1,
  [941] = 2,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    ACTIONS(303), 1,
      aux_sym_footnote_token1,
  [948] = 1,
    ACTIONS(305), 1,
      aux_sym_title_token2,
  [952] = 1,
    ACTIONS(307), 1,
      aux_sym_image_token2,
  [956] = 1,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
  [960] = 1,
    ACTIONS(311), 1,
      anon_sym_RBRACK_LF,
  [964] = 1,
    ACTIONS(313), 1,
      aux_sym_code_token1,
  [968] = 1,
    ACTIONS(315), 1,
      anon_sym_,
  [972] = 1,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
  [976] = 1,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
  [980] = 1,
    ACTIONS(321), 1,
      anon_sym_LBRACK,
  [984] = 1,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
  [988] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
  [992] = 1,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
  [996] = 1,
    ACTIONS(329), 1,
      aux_sym_image_token2,
  [1000] = 1,
    ACTIONS(331), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [1004] = 1,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
  [1008] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACK_LF,
  [1012] = 1,
    ACTIONS(337), 1,
      aux_sym_tip_token1,
  [1016] = 1,
    ACTIONS(339), 1,
      anon_sym_GT_GT,
  [1020] = 1,
    ACTIONS(341), 1,
      anon_sym_RBRACK_LF,
  [1024] = 1,
    ACTIONS(343), 1,
      aux_sym_code_token1,
  [1028] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
  [1032] = 1,
    ACTIONS(347), 1,
      aux_sym_title_token2,
  [1036] = 1,
    ACTIONS(349), 1,
      aux_sym_title_token2,
  [1040] = 1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [1044] = 1,
    ACTIONS(353), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [1048] = 1,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [1052] = 1,
    ACTIONS(357), 1,
      aux_sym_code_token1,
  [1056] = 1,
    ACTIONS(359), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [1060] = 1,
    ACTIONS(361), 1,
      aux_sym_image_token1,
  [1064] = 1,
    ACTIONS(363), 1,
      aux_sym_title_token2,
  [1068] = 1,
    ACTIONS(365), 1,
      anon_sym_COLON_COLON,
  [1072] = 1,
    ACTIONS(367), 1,
      anon_sym_,
  [1076] = 1,
    ACTIONS(369), 1,
      aux_sym_tip_token1,
  [1080] = 1,
    ACTIONS(371), 1,
      anon_sym_DASH_DASH_DASH_DASH,
  [1084] = 1,
    ACTIONS(373), 1,
      aux_sym_tip_token1,
  [1088] = 1,
    ACTIONS(375), 1,
      aux_sym_tip_token1,
  [1092] = 1,
    ACTIONS(377), 1,
      aux_sym_tip_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 27,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 222,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 270,
  [SMALL_STATE(16)] = 294,
  [SMALL_STATE(17)] = 318,
  [SMALL_STATE(18)] = 342,
  [SMALL_STATE(19)] = 366,
  [SMALL_STATE(20)] = 390,
  [SMALL_STATE(21)] = 414,
  [SMALL_STATE(22)] = 438,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 486,
  [SMALL_STATE(25)] = 510,
  [SMALL_STATE(26)] = 534,
  [SMALL_STATE(27)] = 558,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 606,
  [SMALL_STATE(30)] = 630,
  [SMALL_STATE(31)] = 654,
  [SMALL_STATE(32)] = 678,
  [SMALL_STATE(33)] = 702,
  [SMALL_STATE(34)] = 726,
  [SMALL_STATE(35)] = 750,
  [SMALL_STATE(36)] = 774,
  [SMALL_STATE(37)] = 798,
  [SMALL_STATE(38)] = 808,
  [SMALL_STATE(39)] = 818,
  [SMALL_STATE(40)] = 828,
  [SMALL_STATE(41)] = 838,
  [SMALL_STATE(42)] = 848,
  [SMALL_STATE(43)] = 858,
  [SMALL_STATE(44)] = 868,
  [SMALL_STATE(45)] = 878,
  [SMALL_STATE(46)] = 885,
  [SMALL_STATE(47)] = 892,
  [SMALL_STATE(48)] = 899,
  [SMALL_STATE(49)] = 906,
  [SMALL_STATE(50)] = 913,
  [SMALL_STATE(51)] = 920,
  [SMALL_STATE(52)] = 927,
  [SMALL_STATE(53)] = 934,
  [SMALL_STATE(54)] = 941,
  [SMALL_STATE(55)] = 948,
  [SMALL_STATE(56)] = 952,
  [SMALL_STATE(57)] = 956,
  [SMALL_STATE(58)] = 960,
  [SMALL_STATE(59)] = 964,
  [SMALL_STATE(60)] = 968,
  [SMALL_STATE(61)] = 972,
  [SMALL_STATE(62)] = 976,
  [SMALL_STATE(63)] = 980,
  [SMALL_STATE(64)] = 984,
  [SMALL_STATE(65)] = 988,
  [SMALL_STATE(66)] = 992,
  [SMALL_STATE(67)] = 996,
  [SMALL_STATE(68)] = 1000,
  [SMALL_STATE(69)] = 1004,
  [SMALL_STATE(70)] = 1008,
  [SMALL_STATE(71)] = 1012,
  [SMALL_STATE(72)] = 1016,
  [SMALL_STATE(73)] = 1020,
  [SMALL_STATE(74)] = 1024,
  [SMALL_STATE(75)] = 1028,
  [SMALL_STATE(76)] = 1032,
  [SMALL_STATE(77)] = 1036,
  [SMALL_STATE(78)] = 1040,
  [SMALL_STATE(79)] = 1044,
  [SMALL_STATE(80)] = 1048,
  [SMALL_STATE(81)] = 1052,
  [SMALL_STATE(82)] = 1056,
  [SMALL_STATE(83)] = 1060,
  [SMALL_STATE(84)] = 1064,
  [SMALL_STATE(85)] = 1068,
  [SMALL_STATE(86)] = 1072,
  [SMALL_STATE(87)] = 1076,
  [SMALL_STATE(88)] = 1080,
  [SMALL_STATE(89)] = 1084,
  [SMALL_STATE(90)] = 1088,
  [SMALL_STATE(91)] = 1092,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 5, .production_id = 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 5, .production_id = 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 3, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 3, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(40),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(42),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [355] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
