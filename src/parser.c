#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym_title_token1 = 1,
  anon_sym_NOTE_COLON = 2,
  anon_sym_ = 3,
  aux_sym_note_token1 = 4,
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
  aux_sym_code_token2 = 18,
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
  aux_sym_table_token1 = 31,
  anon_sym_LT_LT = 32,
  anon_sym_COMMA = 33,
  anon_sym_GT_GT = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_audio_COLON_COLON = 36,
  aux_sym_audio_token1 = 37,
  anon_sym_video_COLON_COLON = 38,
  sym_emphasis = 39,
  sym_strong = 40,
  sym_monospace = 41,
  sym_superscript = 42,
  sym_subscript = 43,
  sym_document = 44,
  sym__block = 45,
  sym_title = 46,
  sym__admonitions = 47,
  sym_note = 48,
  sym_tip = 49,
  sym_important = 50,
  sym_caution = 51,
  sym_warning = 52,
  sym_list = 53,
  sym__list_item = 54,
  sym_code = 55,
  sym_comment = 56,
  sym_image = 57,
  sym_url = 58,
  sym_footnote = 59,
  sym_kbd = 60,
  sym_table = 61,
  sym_xref = 62,
  sym_description_list = 63,
  sym_audio = 64,
  sym_video = 65,
  sym_paragraph = 66,
  sym__inline_element = 67,
  aux_sym_document_repeat1 = 68,
  aux_sym_list_repeat1 = 69,
  aux_sym_code_repeat1 = 70,
  aux_sym_paragraph_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_title_token1] = "title_token1",
  [anon_sym_NOTE_COLON] = "NOTE:",
  [anon_sym_] = " ",
  [aux_sym_note_token1] = "note_token1",
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
  [aux_sym_code_token2] = "code_token2",
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
  [aux_sym_table_token1] = "table_token1",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON_COLON] = ":: ",
  [anon_sym_audio_COLON_COLON] = "audio::",
  [aux_sym_audio_token1] = "audio_token1",
  [anon_sym_video_COLON_COLON] = "video::",
  [sym_emphasis] = "emphasis",
  [sym_strong] = "strong",
  [sym_monospace] = "monospace",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
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
  [sym_paragraph] = "paragraph",
  [sym__inline_element] = "_inline_element",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_title_token1] = aux_sym_title_token1,
  [anon_sym_NOTE_COLON] = anon_sym_NOTE_COLON,
  [anon_sym_] = anon_sym_,
  [aux_sym_note_token1] = aux_sym_note_token1,
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
  [aux_sym_code_token2] = aux_sym_code_token2,
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
  [aux_sym_table_token1] = aux_sym_table_token1,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_audio_COLON_COLON] = anon_sym_audio_COLON_COLON,
  [aux_sym_audio_token1] = aux_sym_audio_token1,
  [anon_sym_video_COLON_COLON] = anon_sym_video_COLON_COLON,
  [sym_emphasis] = sym_emphasis,
  [sym_strong] = sym_strong,
  [sym_monospace] = sym_monospace,
  [sym_superscript] = sym_superscript,
  [sym_subscript] = sym_subscript,
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
  [sym_paragraph] = sym_paragraph,
  [sym__inline_element] = sym__inline_element,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
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
  [anon_sym_NOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_token1] = {
    .visible = false,
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
  [aux_sym_code_token2] = {
    .visible = false,
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
  [aux_sym_table_token1] = {
    .visible = false,
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
  [sym_emphasis] = {
    .visible = true,
    .named = true,
  },
  [sym_strong] = {
    .visible = true,
    .named = true,
  },
  [sym_monospace] = {
    .visible = true,
    .named = true,
  },
  [sym_superscript] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
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
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_element] = {
    .visible = false,
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
  [aux_sym_paragraph_repeat1] = {
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
  [44] = 43,
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
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == 'W') ADVANCE(112);
      if (lookahead == '[') ADVANCE(227);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '`') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'k') ADVANCE(137);
      if (lookahead == 'v') ADVANCE(146);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(240);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(220);
      if (lookahead == ':') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '^') ADVANCE(66);
      if (lookahead == '_') ADVANCE(219);
      if (lookahead == '`') ADVANCE(67);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == ':') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(223);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(233);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(247);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(249);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(237);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '[') ADVANCE(235);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(247);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(249);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '^') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '`') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 47:
      if (lookahead == '<') ADVANCE(243);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(242);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(1);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == '>') ADVANCE(245);
      END_STATE();
    case 55:
      if (lookahead == '[') ADVANCE(237);
      END_STATE();
    case 56:
      if (lookahead == '[') ADVANCE(235);
      END_STATE();
    case 57:
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 59:
      if (lookahead == '^') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '~') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 69:
      if (eof) ADVANCE(71);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == 'I') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(165);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'k') ADVANCE(190);
      if (lookahead == 'v') ADVANCE(199);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(69)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == 'I') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(165);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(2);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'k') ADVANCE(190);
      if (lookahead == 'v') ADVANCE(199);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_title_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__list_item_token2);
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__list_item_token3);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__list_item_token3);
      if (lookahead == '.') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'A') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'G') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'I') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'I') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'I') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'M') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'N') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'N') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'N') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'N') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'O') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'O') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'O') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'P') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'P') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'R') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'R') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'T') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'T') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'T') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'T') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'U') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'g') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'm') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '.') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(158);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(29);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(9);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(35);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(75);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'A') ADVANCE(188);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'A') ADVANCE(182);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'A') ADVANCE(175);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'E') ADVANCE(162);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'G') ADVANCE(214);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(181);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(173);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'I') ADVANCE(179);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(180);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(168);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(170);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(187);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(211);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(184);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(183);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(176);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(178);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(160);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(174);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(186);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(167);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(171);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(166);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(216);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(185);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(197);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(193);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(196);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(198);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(161);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(213);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(212);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(206);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'g') ADVANCE(194);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(205);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(191);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(189);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(204);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(207);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(202);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(208);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(163);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(215);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 't') ADVANCE(201);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 't') ADVANCE(195);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(192);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(31);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(11);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(36);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(33);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(13);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(34);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(15);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '_') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_code_token2);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '\n') ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(100);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == ':') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_table_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '\n') ADVANCE(240);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '`') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '^') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 70},
  [3] = {.lex_state = 70},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 70},
  [6] = {.lex_state = 70},
  [7] = {.lex_state = 69},
  [8] = {.lex_state = 70},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 70},
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 70},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 70},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 70},
  [23] = {.lex_state = 70},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 70},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 70},
  [28] = {.lex_state = 70},
  [29] = {.lex_state = 70},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 70},
  [33] = {.lex_state = 70},
  [34] = {.lex_state = 70},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 70},
  [37] = {.lex_state = 70},
  [38] = {.lex_state = 70},
  [39] = {.lex_state = 70},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 86},
  [44] = {.lex_state = 79},
  [45] = {.lex_state = 86},
  [46] = {.lex_state = 79},
  [47] = {.lex_state = 86},
  [48] = {.lex_state = 79},
  [49] = {.lex_state = 79},
  [50] = {.lex_state = 79},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 58},
  [57] = {.lex_state = 229},
  [58] = {.lex_state = 229},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 70},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 63},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 87},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 70},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 70},
  [75] = {.lex_state = 229},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 63},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 229},
  [85] = {.lex_state = 226},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 87},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 69},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
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
    [aux_sym__list_item_token2] = ACTIONS(1),
    [aux_sym__list_item_token3] = ACTIONS(1),
    [anon_sym_LBRACK_COMMA] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_image_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(1),
    [aux_sym_footnote_token1] = ACTIONS(1),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(1),
    [aux_sym_kbd_token1] = ACTIONS(1),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(1),
    [aux_sym_table_token1] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_audio_COLON_COLON] = ACTIONS(1),
    [aux_sym_audio_token1] = ACTIONS(1),
    [anon_sym_video_COLON_COLON] = ACTIONS(1),
    [sym_strong] = ACTIONS(1),
    [sym_monospace] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(67),
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
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(40),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [anon_sym_TIP_COLON] = ACTIONS(9),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(11),
    [anon_sym_CAUTION_COLON] = ACTIONS(13),
    [anon_sym_WARNING_COLON] = ACTIONS(15),
    [aux_sym__list_item_token1] = ACTIONS(17),
    [aux_sym__list_item_token2] = ACTIONS(19),
    [aux_sym__list_item_token3] = ACTIONS(19),
    [anon_sym_LBRACK_COMMA] = ACTIONS(21),
    [aux_sym_code_token1] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_image_COLON_COLON] = ACTIONS(27),
    [aux_sym_url_token1] = ACTIONS(29),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(31),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(33),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_audio_COLON_COLON] = ACTIONS(39),
    [anon_sym_video_COLON_COLON] = ACTIONS(41),
    [sym_emphasis] = ACTIONS(43),
    [sym_strong] = ACTIONS(43),
    [sym_monospace] = ACTIONS(43),
    [sym_superscript] = ACTIONS(43),
    [sym_subscript] = ACTIONS(45),
  },
  [2] = {
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
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(40),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_title_token1] = ACTIONS(49),
    [anon_sym_NOTE_COLON] = ACTIONS(52),
    [anon_sym_TIP_COLON] = ACTIONS(55),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(58),
    [anon_sym_CAUTION_COLON] = ACTIONS(61),
    [anon_sym_WARNING_COLON] = ACTIONS(64),
    [aux_sym__list_item_token1] = ACTIONS(67),
    [aux_sym__list_item_token2] = ACTIONS(70),
    [aux_sym__list_item_token3] = ACTIONS(70),
    [anon_sym_LBRACK_COMMA] = ACTIONS(73),
    [aux_sym_code_token1] = ACTIONS(76),
    [anon_sym_SLASH_SLASH] = ACTIONS(79),
    [anon_sym_image_COLON_COLON] = ACTIONS(82),
    [aux_sym_url_token1] = ACTIONS(85),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(88),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(91),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(94),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_audio_COLON_COLON] = ACTIONS(100),
    [anon_sym_video_COLON_COLON] = ACTIONS(103),
    [sym_emphasis] = ACTIONS(106),
    [sym_strong] = ACTIONS(106),
    [sym_monospace] = ACTIONS(106),
    [sym_superscript] = ACTIONS(106),
    [sym_subscript] = ACTIONS(109),
  },
  [3] = {
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
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(40),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_title_token1] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [anon_sym_TIP_COLON] = ACTIONS(9),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(11),
    [anon_sym_CAUTION_COLON] = ACTIONS(13),
    [anon_sym_WARNING_COLON] = ACTIONS(15),
    [aux_sym__list_item_token1] = ACTIONS(17),
    [aux_sym__list_item_token2] = ACTIONS(19),
    [aux_sym__list_item_token3] = ACTIONS(19),
    [anon_sym_LBRACK_COMMA] = ACTIONS(21),
    [aux_sym_code_token1] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_image_COLON_COLON] = ACTIONS(27),
    [aux_sym_url_token1] = ACTIONS(29),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(31),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(33),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(35),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_audio_COLON_COLON] = ACTIONS(39),
    [anon_sym_video_COLON_COLON] = ACTIONS(41),
    [sym_emphasis] = ACTIONS(43),
    [sym_strong] = ACTIONS(43),
    [sym_monospace] = ACTIONS(43),
    [sym_superscript] = ACTIONS(43),
    [sym_subscript] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(118), 1,
      aux_sym__list_item_token1,
    ACTIONS(121), 2,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
    STATE(4), 2,
      sym__list_item,
      aux_sym_list_repeat1,
    ACTIONS(116), 7,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(114), 16,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [39] = 5,
    ACTIONS(17), 1,
      aux_sym__list_item_token1,
    ACTIONS(19), 2,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
    STATE(4), 2,
      sym__list_item,
      aux_sym_list_repeat1,
    ACTIONS(126), 7,
      anon_sym_NOTE_COLON,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(124), 16,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [78] = 3,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(128), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [112] = 3,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      anon_sym_,
    ACTIONS(136), 25,
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
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
  [146] = 2,
    ACTIONS(142), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(140), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [177] = 2,
    ACTIONS(146), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(144), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [208] = 2,
    ACTIONS(150), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(148), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [239] = 2,
    ACTIONS(154), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(152), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [270] = 2,
    ACTIONS(158), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(156), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [301] = 2,
    ACTIONS(162), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(160), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [332] = 2,
    ACTIONS(166), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(164), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [363] = 2,
    ACTIONS(170), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(168), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [394] = 2,
    ACTIONS(174), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(172), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [425] = 2,
    ACTIONS(178), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(176), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [456] = 2,
    ACTIONS(182), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(180), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [487] = 2,
    ACTIONS(186), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(184), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [518] = 2,
    ACTIONS(190), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(188), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [549] = 2,
    ACTIONS(194), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(192), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [580] = 2,
    ACTIONS(198), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(196), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [611] = 2,
    ACTIONS(202), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(200), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [642] = 2,
    ACTIONS(206), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(204), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [673] = 2,
    ACTIONS(210), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(208), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [704] = 2,
    ACTIONS(214), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(212), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [735] = 2,
    ACTIONS(218), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(216), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [766] = 2,
    ACTIONS(222), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(220), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [797] = 2,
    ACTIONS(226), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(224), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [828] = 2,
    ACTIONS(230), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(228), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [859] = 2,
    ACTIONS(234), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(232), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [890] = 2,
    ACTIONS(238), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(236), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [921] = 2,
    ACTIONS(242), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(240), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [952] = 2,
    ACTIONS(246), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(244), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [983] = 2,
    ACTIONS(250), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(248), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [1014] = 2,
    ACTIONS(254), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(252), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [1045] = 2,
    ACTIONS(258), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(256), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [1076] = 2,
    ACTIONS(262), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(260), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [1107] = 2,
    ACTIONS(266), 8,
      anon_sym_NOTE_COLON,
      aux_sym__list_item_token1,
      aux_sym_code_token1,
      aux_sym_url_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(264), 18,
      ts_builtin_sym_end,
      aux_sym_title_token1,
      anon_sym_TIP_COLON,
      anon_sym_IMPORTANT_COLON,
      anon_sym_CAUTION_COLON,
      anon_sym_WARNING_COLON,
      aux_sym__list_item_token2,
      aux_sym__list_item_token3,
      anon_sym_LBRACK_COMMA,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
      sym_subscript,
  [1138] = 3,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(41), 2,
      sym__inline_element,
      aux_sym_paragraph_repeat1,
    ACTIONS(270), 6,
      aux_sym_code_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
  [1154] = 3,
    ACTIONS(272), 1,
      anon_sym_LF,
    STATE(41), 2,
      sym__inline_element,
      aux_sym_paragraph_repeat1,
    ACTIONS(274), 6,
      aux_sym_code_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
  [1170] = 3,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(281), 1,
      anon_sym_COLON_COLON,
    ACTIONS(279), 6,
      aux_sym_code_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
  [1185] = 3,
    ACTIONS(283), 1,
      aux_sym_note_token1,
    ACTIONS(286), 1,
      aux_sym_table_token1,
    STATE(43), 1,
      aux_sym_code_repeat1,
  [1195] = 3,
    ACTIONS(286), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(288), 1,
      aux_sym_note_token1,
    STATE(44), 1,
      aux_sym_code_repeat1,
  [1205] = 3,
    ACTIONS(291), 1,
      aux_sym_note_token1,
    ACTIONS(293), 1,
      aux_sym_table_token1,
    STATE(43), 1,
      aux_sym_code_repeat1,
  [1215] = 3,
    ACTIONS(295), 1,
      aux_sym_note_token1,
    ACTIONS(297), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(44), 1,
      aux_sym_code_repeat1,
  [1225] = 3,
    ACTIONS(299), 1,
      aux_sym_note_token1,
    ACTIONS(301), 1,
      aux_sym_table_token1,
    STATE(45), 1,
      aux_sym_code_repeat1,
  [1235] = 3,
    ACTIONS(303), 1,
      aux_sym_note_token1,
    ACTIONS(305), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(49), 1,
      aux_sym_code_repeat1,
  [1245] = 3,
    ACTIONS(295), 1,
      aux_sym_note_token1,
    ACTIONS(307), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(44), 1,
      aux_sym_code_repeat1,
  [1255] = 3,
    ACTIONS(309), 1,
      aux_sym_note_token1,
    ACTIONS(311), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(46), 1,
      aux_sym_code_repeat1,
  [1265] = 2,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_GT_GT,
  [1272] = 2,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    ACTIONS(319), 1,
      aux_sym_audio_token1,
  [1279] = 2,
    ACTIONS(321), 1,
      anon_sym_,
    ACTIONS(323), 1,
      aux_sym_code_token1,
  [1286] = 2,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    ACTIONS(327), 1,
      aux_sym_audio_token1,
  [1293] = 2,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    ACTIONS(331), 1,
      aux_sym_footnote_token1,
  [1300] = 2,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 1,
      aux_sym_kbd_token1,
  [1307] = 2,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      aux_sym_image_token2,
  [1314] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACK,
    ACTIONS(343), 1,
      aux_sym_image_token2,
  [1321] = 2,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    ACTIONS(347), 1,
      aux_sym_audio_token1,
  [1328] = 2,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    ACTIONS(351), 1,
      aux_sym_audio_token1,
  [1335] = 1,
    ACTIONS(353), 1,
      anon_sym_RBRACK_LF,
  [1339] = 1,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
  [1343] = 1,
    ACTIONS(357), 1,
      aux_sym_code_token1,
  [1347] = 1,
    ACTIONS(359), 1,
      aux_sym_tip_token1,
  [1351] = 1,
    ACTIONS(361), 1,
      aux_sym_note_token1,
  [1355] = 1,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
  [1359] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [1363] = 1,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
  [1367] = 1,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
  [1371] = 1,
    ACTIONS(371), 1,
      anon_sym_RBRACK_LF,
  [1375] = 1,
    ACTIONS(373), 1,
      aux_sym_tip_token1,
  [1379] = 1,
    ACTIONS(375), 1,
      aux_sym_code_token2,
  [1383] = 1,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
  [1387] = 1,
    ACTIONS(379), 1,
      anon_sym_RBRACK_LF,
  [1391] = 1,
    ACTIONS(381), 1,
      aux_sym_image_token2,
  [1395] = 1,
    ACTIONS(383), 1,
      anon_sym_GT_GT,
  [1399] = 1,
    ACTIONS(385), 1,
      aux_sym_code_token1,
  [1403] = 1,
    ACTIONS(387), 1,
      aux_sym_code_token1,
  [1407] = 1,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
  [1411] = 1,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
  [1415] = 1,
    ACTIONS(393), 1,
      anon_sym_LF,
  [1419] = 1,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
  [1423] = 1,
    ACTIONS(397), 1,
      aux_sym_code_token2,
  [1427] = 1,
    ACTIONS(399), 1,
      aux_sym_image_token2,
  [1431] = 1,
    ACTIONS(401), 1,
      aux_sym_image_token1,
  [1435] = 1,
    ACTIONS(403), 1,
      aux_sym_code_token2,
  [1439] = 1,
    ACTIONS(405), 1,
      aux_sym_note_token1,
  [1443] = 1,
    ACTIONS(407), 1,
      aux_sym_tip_token1,
  [1447] = 1,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
  [1451] = 1,
    ACTIONS(411), 1,
      anon_sym_,
  [1455] = 1,
    ACTIONS(413), 1,
      aux_sym_tip_token1,
  [1459] = 1,
    ACTIONS(415), 1,
      aux_sym_code_token2,
  [1463] = 1,
    ACTIONS(417), 1,
      aux_sym_tip_token1,
  [1467] = 1,
    ACTIONS(419), 1,
      aux_sym_tip_token1,
  [1471] = 1,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 239,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 301,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 394,
  [SMALL_STATE(17)] = 425,
  [SMALL_STATE(18)] = 456,
  [SMALL_STATE(19)] = 487,
  [SMALL_STATE(20)] = 518,
  [SMALL_STATE(21)] = 549,
  [SMALL_STATE(22)] = 580,
  [SMALL_STATE(23)] = 611,
  [SMALL_STATE(24)] = 642,
  [SMALL_STATE(25)] = 673,
  [SMALL_STATE(26)] = 704,
  [SMALL_STATE(27)] = 735,
  [SMALL_STATE(28)] = 766,
  [SMALL_STATE(29)] = 797,
  [SMALL_STATE(30)] = 828,
  [SMALL_STATE(31)] = 859,
  [SMALL_STATE(32)] = 890,
  [SMALL_STATE(33)] = 921,
  [SMALL_STATE(34)] = 952,
  [SMALL_STATE(35)] = 983,
  [SMALL_STATE(36)] = 1014,
  [SMALL_STATE(37)] = 1045,
  [SMALL_STATE(38)] = 1076,
  [SMALL_STATE(39)] = 1107,
  [SMALL_STATE(40)] = 1138,
  [SMALL_STATE(41)] = 1154,
  [SMALL_STATE(42)] = 1170,
  [SMALL_STATE(43)] = 1185,
  [SMALL_STATE(44)] = 1195,
  [SMALL_STATE(45)] = 1205,
  [SMALL_STATE(46)] = 1215,
  [SMALL_STATE(47)] = 1225,
  [SMALL_STATE(48)] = 1235,
  [SMALL_STATE(49)] = 1245,
  [SMALL_STATE(50)] = 1255,
  [SMALL_STATE(51)] = 1265,
  [SMALL_STATE(52)] = 1272,
  [SMALL_STATE(53)] = 1279,
  [SMALL_STATE(54)] = 1286,
  [SMALL_STATE(55)] = 1293,
  [SMALL_STATE(56)] = 1300,
  [SMALL_STATE(57)] = 1307,
  [SMALL_STATE(58)] = 1314,
  [SMALL_STATE(59)] = 1321,
  [SMALL_STATE(60)] = 1328,
  [SMALL_STATE(61)] = 1335,
  [SMALL_STATE(62)] = 1339,
  [SMALL_STATE(63)] = 1343,
  [SMALL_STATE(64)] = 1347,
  [SMALL_STATE(65)] = 1351,
  [SMALL_STATE(66)] = 1355,
  [SMALL_STATE(67)] = 1359,
  [SMALL_STATE(68)] = 1363,
  [SMALL_STATE(69)] = 1367,
  [SMALL_STATE(70)] = 1371,
  [SMALL_STATE(71)] = 1375,
  [SMALL_STATE(72)] = 1379,
  [SMALL_STATE(73)] = 1383,
  [SMALL_STATE(74)] = 1387,
  [SMALL_STATE(75)] = 1391,
  [SMALL_STATE(76)] = 1395,
  [SMALL_STATE(77)] = 1399,
  [SMALL_STATE(78)] = 1403,
  [SMALL_STATE(79)] = 1407,
  [SMALL_STATE(80)] = 1411,
  [SMALL_STATE(81)] = 1415,
  [SMALL_STATE(82)] = 1419,
  [SMALL_STATE(83)] = 1423,
  [SMALL_STATE(84)] = 1427,
  [SMALL_STATE(85)] = 1431,
  [SMALL_STATE(86)] = 1435,
  [SMALL_STATE(87)] = 1439,
  [SMALL_STATE(88)] = 1443,
  [SMALL_STATE(89)] = 1447,
  [SMALL_STATE(90)] = 1451,
  [SMALL_STATE(91)] = 1455,
  [SMALL_STATE(92)] = 1459,
  [SMALL_STATE(93)] = 1463,
  [SMALL_STATE(94)] = 1467,
  [SMALL_STATE(95)] = 1471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(90),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(90),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 5, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 5, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 3, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 3, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(41),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(43),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(44),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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
