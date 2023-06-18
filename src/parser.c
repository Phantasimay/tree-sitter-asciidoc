#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 39
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  sym_title = 1,
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
  sym__blank = 44,
  sym__empty = 45,
  sym__sp = 46,
  sym__nbsp = 47,
  sym__zwsp = 48,
  sym__wj = 49,
  sym__apos = 50,
  sym__quot = 51,
  sym__lsquo = 52,
  sym__rsquo = 53,
  sym__ldquo = 54,
  sym__rdquo = 55,
  sym__deg = 56,
  sym__plus = 57,
  sym__brvbar = 58,
  sym__vbar = 59,
  sym__amp = 60,
  sym__lt = 61,
  sym__gt = 62,
  sym__startsb = 63,
  sym__endsb = 64,
  sym__caret = 65,
  sym__asterisk = 66,
  sym__tilde = 67,
  sym__backslash = 68,
  sym__backtick = 69,
  sym__two_colons = 70,
  sym__two_semicolons = 71,
  sym__cpp = 72,
  sym__pp = 73,
  sym_document = 74,
  sym__block = 75,
  sym__admonitions = 76,
  sym_note = 77,
  sym_tip = 78,
  sym_important = 79,
  sym_caution = 80,
  sym_warning = 81,
  sym_list = 82,
  sym__list_item = 83,
  sym_code = 84,
  sym_comment = 85,
  sym_image = 86,
  sym_url = 87,
  sym_footnote = 88,
  sym_kbd = 89,
  sym_table = 90,
  sym_xref = 91,
  sym_description_list = 92,
  sym_audio = 93,
  sym_video = 94,
  sym_paragraph = 95,
  sym__inline_element = 96,
  sym_replacement = 97,
  aux_sym_document_repeat1 = 98,
  aux_sym_list_repeat1 = 99,
  aux_sym_code_repeat1 = 100,
  aux_sym_paragraph_repeat1 = 101,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_title] = "title",
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
  [sym__blank] = "_blank",
  [sym__empty] = "_empty",
  [sym__sp] = "_sp",
  [sym__nbsp] = "_nbsp",
  [sym__zwsp] = "_zwsp",
  [sym__wj] = "_wj",
  [sym__apos] = "_apos",
  [sym__quot] = "_quot",
  [sym__lsquo] = "_lsquo",
  [sym__rsquo] = "_rsquo",
  [sym__ldquo] = "_ldquo",
  [sym__rdquo] = "_rdquo",
  [sym__deg] = "_deg",
  [sym__plus] = "_plus",
  [sym__brvbar] = "_brvbar",
  [sym__vbar] = "_vbar",
  [sym__amp] = "_amp",
  [sym__lt] = "_lt",
  [sym__gt] = "_gt",
  [sym__startsb] = "_startsb",
  [sym__endsb] = "_endsb",
  [sym__caret] = "_caret",
  [sym__asterisk] = "_asterisk",
  [sym__tilde] = "_tilde",
  [sym__backslash] = "_backslash",
  [sym__backtick] = "_backtick",
  [sym__two_colons] = "_two_colons",
  [sym__two_semicolons] = "_two_semicolons",
  [sym__cpp] = "_cpp",
  [sym__pp] = "_pp",
  [sym_document] = "document",
  [sym__block] = "_block",
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
  [sym_replacement] = "replacement",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_title] = sym_title,
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
  [sym__blank] = sym__blank,
  [sym__empty] = sym__empty,
  [sym__sp] = sym__sp,
  [sym__nbsp] = sym__nbsp,
  [sym__zwsp] = sym__zwsp,
  [sym__wj] = sym__wj,
  [sym__apos] = sym__apos,
  [sym__quot] = sym__quot,
  [sym__lsquo] = sym__lsquo,
  [sym__rsquo] = sym__rsquo,
  [sym__ldquo] = sym__ldquo,
  [sym__rdquo] = sym__rdquo,
  [sym__deg] = sym__deg,
  [sym__plus] = sym__plus,
  [sym__brvbar] = sym__brvbar,
  [sym__vbar] = sym__vbar,
  [sym__amp] = sym__amp,
  [sym__lt] = sym__lt,
  [sym__gt] = sym__gt,
  [sym__startsb] = sym__startsb,
  [sym__endsb] = sym__endsb,
  [sym__caret] = sym__caret,
  [sym__asterisk] = sym__asterisk,
  [sym__tilde] = sym__tilde,
  [sym__backslash] = sym__backslash,
  [sym__backtick] = sym__backtick,
  [sym__two_colons] = sym__two_colons,
  [sym__two_semicolons] = sym__two_semicolons,
  [sym__cpp] = sym__cpp,
  [sym__pp] = sym__pp,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
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
  [sym_replacement] = sym_replacement,
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
  [sym_title] = {
    .visible = true,
    .named = true,
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
  [sym__blank] = {
    .visible = false,
    .named = true,
  },
  [sym__empty] = {
    .visible = false,
    .named = true,
  },
  [sym__sp] = {
    .visible = false,
    .named = true,
  },
  [sym__nbsp] = {
    .visible = false,
    .named = true,
  },
  [sym__zwsp] = {
    .visible = false,
    .named = true,
  },
  [sym__wj] = {
    .visible = false,
    .named = true,
  },
  [sym__apos] = {
    .visible = false,
    .named = true,
  },
  [sym__quot] = {
    .visible = false,
    .named = true,
  },
  [sym__lsquo] = {
    .visible = false,
    .named = true,
  },
  [sym__rsquo] = {
    .visible = false,
    .named = true,
  },
  [sym__ldquo] = {
    .visible = false,
    .named = true,
  },
  [sym__rdquo] = {
    .visible = false,
    .named = true,
  },
  [sym__deg] = {
    .visible = false,
    .named = true,
  },
  [sym__plus] = {
    .visible = false,
    .named = true,
  },
  [sym__brvbar] = {
    .visible = false,
    .named = true,
  },
  [sym__vbar] = {
    .visible = false,
    .named = true,
  },
  [sym__amp] = {
    .visible = false,
    .named = true,
  },
  [sym__lt] = {
    .visible = false,
    .named = true,
  },
  [sym__gt] = {
    .visible = false,
    .named = true,
  },
  [sym__startsb] = {
    .visible = false,
    .named = true,
  },
  [sym__endsb] = {
    .visible = false,
    .named = true,
  },
  [sym__caret] = {
    .visible = false,
    .named = true,
  },
  [sym__asterisk] = {
    .visible = false,
    .named = true,
  },
  [sym__tilde] = {
    .visible = false,
    .named = true,
  },
  [sym__backslash] = {
    .visible = false,
    .named = true,
  },
  [sym__backtick] = {
    .visible = false,
    .named = true,
  },
  [sym__two_colons] = {
    .visible = false,
    .named = true,
  },
  [sym__two_semicolons] = {
    .visible = false,
    .named = true,
  },
  [sym__cpp] = {
    .visible = false,
    .named = true,
  },
  [sym__pp] = {
    .visible = false,
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
  [sym_replacement] = {
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
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
      if (eof) ADVANCE(202);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == ',') ADVANCE(375);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == 'C') ADVANCE(242);
      if (lookahead == 'I') ADVANCE(250);
      if (lookahead == 'N') ADVANCE(255);
      if (lookahead == 'T') ADVANCE(247);
      if (lookahead == 'W') ADVANCE(243);
      if (lookahead == '[') ADVANCE(358);
      if (lookahead == ']') ADVANCE(365);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'k') ADVANCE(268);
      if (lookahead == 'v') ADVANCE(277);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(371);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(351);
      if (lookahead == ':') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '~') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(204);
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(355);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(377);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(224);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(225);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(223);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == ':') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(354);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ']') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(364);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(361);
      if (lookahead == '^') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(362);
      if (lookahead == '_') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == '`') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '^') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '_') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '`') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(378);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(356);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(380);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(368);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(366);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(378);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(356);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(380);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '^') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '_') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '`') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 48:
      if (lookahead == '<') ADVANCE(374);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(373);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(1);
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
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(376);
      END_STATE();
    case 56:
      if (lookahead == '[') ADVANCE(368);
      END_STATE();
    case 57:
      if (lookahead == '[') ADVANCE(366);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 60:
      if (lookahead == '^') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '`') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'q') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(74);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == 'z') ADVANCE(161);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(187);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'w') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 95:
      if (lookahead == 'j') ADVANCE(167);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(138);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(177);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(188);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 128:
      if (lookahead == 'q') ADVANCE(155);
      END_STATE();
    case 129:
      if (lookahead == 'q') ADVANCE(157);
      END_STATE();
    case 130:
      if (lookahead == 'q') ADVANCE(158);
      END_STATE();
    case 131:
      if (lookahead == 'q') ADVANCE(159);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 160:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 161:
      if (lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 162:
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 163:
      if (lookahead == '}') ADVANCE(407);
      END_STATE();
    case 164:
      if (lookahead == '}') ADVANCE(406);
      END_STATE();
    case 165:
      if (lookahead == '}') ADVANCE(418);
      END_STATE();
    case 166:
      if (lookahead == '}') ADVANCE(391);
      END_STATE();
    case 167:
      if (lookahead == '}') ADVANCE(394);
      END_STATE();
    case 168:
      if (lookahead == '}') ADVANCE(405);
      END_STATE();
    case 169:
      if (lookahead == '}') ADVANCE(417);
      END_STATE();
    case 170:
      if (lookahead == '}') ADVANCE(401);
      END_STATE();
    case 171:
      if (lookahead == '}') ADVANCE(395);
      END_STATE();
    case 172:
      if (lookahead == '}') ADVANCE(392);
      END_STATE();
    case 173:
      if (lookahead == '}') ADVANCE(402);
      END_STATE();
    case 174:
      if (lookahead == '}') ADVANCE(396);
      END_STATE();
    case 175:
      if (lookahead == '}') ADVANCE(404);
      END_STATE();
    case 176:
      if (lookahead == '}') ADVANCE(393);
      END_STATE();
    case 177:
      if (lookahead == '}') ADVANCE(389);
      END_STATE();
    case 178:
      if (lookahead == '}') ADVANCE(410);
      END_STATE();
    case 179:
      if (lookahead == '}') ADVANCE(390);
      END_STATE();
    case 180:
      if (lookahead == '}') ADVANCE(409);
      END_STATE();
    case 181:
      if (lookahead == '}') ADVANCE(399);
      END_STATE();
    case 182:
      if (lookahead == '}') ADVANCE(397);
      END_STATE();
    case 183:
      if (lookahead == '}') ADVANCE(400);
      END_STATE();
    case 184:
      if (lookahead == '}') ADVANCE(398);
      END_STATE();
    case 185:
      if (lookahead == '}') ADVANCE(412);
      END_STATE();
    case 186:
      if (lookahead == '}') ADVANCE(403);
      END_STATE();
    case 187:
      if (lookahead == '}') ADVANCE(408);
      END_STATE();
    case 188:
      if (lookahead == '}') ADVANCE(411);
      END_STATE();
    case 189:
      if (lookahead == '}') ADVANCE(414);
      END_STATE();
    case 190:
      if (lookahead == '}') ADVANCE(413);
      END_STATE();
    case 191:
      if (lookahead == '}') ADVANCE(415);
      END_STATE();
    case 192:
      if (lookahead == '}') ADVANCE(416);
      END_STATE();
    case 193:
      if (lookahead == '~') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 194:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(194)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 196:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 197:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 199:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 200:
      if (eof) ADVANCE(202);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(303);
      if (lookahead == 'N') ADVANCE(308);
      if (lookahead == 'T') ADVANCE(300);
      if (lookahead == 'W') ADVANCE(296);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == '^') ADVANCE(42);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'k') ADVANCE(321);
      if (lookahead == 'v') ADVANCE(330);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(199);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(200)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 201:
      if (eof) ADVANCE(202);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(303);
      if (lookahead == 'N') ADVANCE(308);
      if (lookahead == 'T') ADVANCE(300);
      if (lookahead == 'W') ADVANCE(296);
      if (lookahead == '[') ADVANCE(359);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == ']') ADVANCE(2);
      if (lookahead == '^') ADVANCE(42);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'k') ADVANCE(321);
      if (lookahead == 'v') ADVANCE(330);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(201)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\n') ADVANCE(352);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '|') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__list_item_token2);
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__list_item_token3);
      if (lookahead == '.') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__list_item_token3);
      if (lookahead == '.') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LBRACK_COMMA);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'A') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'A') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'A') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'E') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'G') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'I') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'I') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'I') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'M') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'N') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'O') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'O') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'O') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'P') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'R') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'R') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'T') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'T') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'T') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'T') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'U') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'a') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'b') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'g') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'm') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == 'u') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '_') ADVANCE(289);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(30);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(9);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(36);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(206);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(33);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'A') ADVANCE(319);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'A') ADVANCE(313);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'A') ADVANCE(306);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'E') ADVANCE(293);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'G') ADVANCE(345);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(312);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(304);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(310);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(311);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(299);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(301);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(318);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(342);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(315);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(314);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(307);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(309);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(291);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(317);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(298);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(302);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(297);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(347);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(316);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(328);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(324);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(327);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(329);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(292);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(344);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(343);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(337);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'g') ADVANCE(325);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(336);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(322);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(320);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(335);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(338);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(333);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(339);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(294);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(346);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(332);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(326);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(323);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(11);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(37);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(34);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(13);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(35);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(15);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '_') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_token2);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '\n') ADVANCE(353);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(231);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == ':') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_table_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '\n') ADVANCE(371);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '_') ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '`') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '^') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__blank);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__empty);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__nbsp);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__zwsp);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__wj);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__apos);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__quot);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__lsquo);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__rsquo);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__ldquo);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__rdquo);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__deg);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__plus);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__brvbar);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__vbar);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__amp);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__lt);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__gt);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__startsb);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__endsb);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__caret);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__asterisk);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__tilde);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__backslash);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__backtick);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__two_colons);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__two_semicolons);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__cpp);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__pp);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 201},
  [2] = {.lex_state = 201},
  [3] = {.lex_state = 201},
  [4] = {.lex_state = 201},
  [5] = {.lex_state = 201},
  [6] = {.lex_state = 201},
  [7] = {.lex_state = 200},
  [8] = {.lex_state = 201},
  [9] = {.lex_state = 201},
  [10] = {.lex_state = 201},
  [11] = {.lex_state = 201},
  [12] = {.lex_state = 201},
  [13] = {.lex_state = 201},
  [14] = {.lex_state = 201},
  [15] = {.lex_state = 201},
  [16] = {.lex_state = 201},
  [17] = {.lex_state = 201},
  [18] = {.lex_state = 201},
  [19] = {.lex_state = 201},
  [20] = {.lex_state = 201},
  [21] = {.lex_state = 201},
  [22] = {.lex_state = 201},
  [23] = {.lex_state = 201},
  [24] = {.lex_state = 201},
  [25] = {.lex_state = 201},
  [26] = {.lex_state = 201},
  [27] = {.lex_state = 201},
  [28] = {.lex_state = 201},
  [29] = {.lex_state = 201},
  [30] = {.lex_state = 201},
  [31] = {.lex_state = 201},
  [32] = {.lex_state = 201},
  [33] = {.lex_state = 201},
  [34] = {.lex_state = 201},
  [35] = {.lex_state = 201},
  [36] = {.lex_state = 201},
  [37] = {.lex_state = 201},
  [38] = {.lex_state = 201},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 210},
  [44] = {.lex_state = 217},
  [45] = {.lex_state = 210},
  [46] = {.lex_state = 217},
  [47] = {.lex_state = 210},
  [48] = {.lex_state = 217},
  [49] = {.lex_state = 210},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 59},
  [57] = {.lex_state = 360},
  [58] = {.lex_state = 360},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 201},
  [62] = {.lex_state = 360},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 194},
  [65] = {.lex_state = 218},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 201},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 360},
  [74] = {.lex_state = 201},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 194},
  [78] = {.lex_state = 194},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 357},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 218},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 200},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_title] = ACTIONS(1),
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
    [sym__blank] = ACTIONS(1),
    [sym__empty] = ACTIONS(1),
    [sym__sp] = ACTIONS(1),
    [sym__nbsp] = ACTIONS(1),
    [sym__zwsp] = ACTIONS(1),
    [sym__wj] = ACTIONS(1),
    [sym__apos] = ACTIONS(1),
    [sym__quot] = ACTIONS(1),
    [sym__lsquo] = ACTIONS(1),
    [sym__rsquo] = ACTIONS(1),
    [sym__ldquo] = ACTIONS(1),
    [sym__rdquo] = ACTIONS(1),
    [sym__deg] = ACTIONS(1),
    [sym__plus] = ACTIONS(1),
    [sym__brvbar] = ACTIONS(1),
    [sym__vbar] = ACTIONS(1),
    [sym__amp] = ACTIONS(1),
    [sym__lt] = ACTIONS(1),
    [sym__gt] = ACTIONS(1),
    [sym__startsb] = ACTIONS(1),
    [sym__endsb] = ACTIONS(1),
    [sym__caret] = ACTIONS(1),
    [sym__asterisk] = ACTIONS(1),
    [sym__tilde] = ACTIONS(1),
    [sym__backslash] = ACTIONS(1),
    [sym__backtick] = ACTIONS(1),
    [sym__two_colons] = ACTIONS(1),
    [sym__two_semicolons] = ACTIONS(1),
    [sym__cpp] = ACTIONS(1),
    [sym__pp] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(66),
    [sym__block] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym_tip] = STATE(3),
    [sym_important] = STATE(3),
    [sym_caution] = STATE(3),
    [sym_warning] = STATE(3),
    [sym_list] = STATE(3),
    [sym__list_item] = STATE(4),
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
    [sym__inline_element] = STATE(39),
    [sym_replacement] = STATE(39),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym_paragraph_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_title] = ACTIONS(5),
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
    [sym__blank] = ACTIONS(47),
    [sym__empty] = ACTIONS(47),
    [sym__sp] = ACTIONS(47),
    [sym__nbsp] = ACTIONS(47),
    [sym__zwsp] = ACTIONS(47),
    [sym__wj] = ACTIONS(47),
    [sym__apos] = ACTIONS(47),
    [sym__quot] = ACTIONS(47),
    [sym__lsquo] = ACTIONS(47),
    [sym__rsquo] = ACTIONS(47),
    [sym__ldquo] = ACTIONS(47),
    [sym__rdquo] = ACTIONS(47),
    [sym__deg] = ACTIONS(47),
    [sym__plus] = ACTIONS(47),
    [sym__brvbar] = ACTIONS(47),
    [sym__vbar] = ACTIONS(47),
    [sym__amp] = ACTIONS(47),
    [sym__lt] = ACTIONS(47),
    [sym__gt] = ACTIONS(47),
    [sym__startsb] = ACTIONS(47),
    [sym__endsb] = ACTIONS(47),
    [sym__caret] = ACTIONS(47),
    [sym__asterisk] = ACTIONS(47),
    [sym__tilde] = ACTIONS(47),
    [sym__backslash] = ACTIONS(47),
    [sym__backtick] = ACTIONS(47),
    [sym__two_colons] = ACTIONS(47),
    [sym__two_semicolons] = ACTIONS(47),
    [sym__cpp] = ACTIONS(47),
    [sym__pp] = ACTIONS(47),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym_tip] = STATE(2),
    [sym_important] = STATE(2),
    [sym_caution] = STATE(2),
    [sym_warning] = STATE(2),
    [sym_list] = STATE(2),
    [sym__list_item] = STATE(4),
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
    [sym__inline_element] = STATE(39),
    [sym_replacement] = STATE(39),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym_paragraph_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_title] = ACTIONS(51),
    [anon_sym_NOTE_COLON] = ACTIONS(54),
    [anon_sym_TIP_COLON] = ACTIONS(57),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(60),
    [anon_sym_CAUTION_COLON] = ACTIONS(63),
    [anon_sym_WARNING_COLON] = ACTIONS(66),
    [aux_sym__list_item_token1] = ACTIONS(69),
    [aux_sym__list_item_token2] = ACTIONS(72),
    [aux_sym__list_item_token3] = ACTIONS(72),
    [anon_sym_LBRACK_COMMA] = ACTIONS(75),
    [aux_sym_code_token1] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(81),
    [anon_sym_image_COLON_COLON] = ACTIONS(84),
    [aux_sym_url_token1] = ACTIONS(87),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(90),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(93),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(96),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_audio_COLON_COLON] = ACTIONS(102),
    [anon_sym_video_COLON_COLON] = ACTIONS(105),
    [sym_emphasis] = ACTIONS(108),
    [sym_strong] = ACTIONS(108),
    [sym_monospace] = ACTIONS(108),
    [sym_superscript] = ACTIONS(108),
    [sym_subscript] = ACTIONS(111),
    [sym__blank] = ACTIONS(114),
    [sym__empty] = ACTIONS(114),
    [sym__sp] = ACTIONS(114),
    [sym__nbsp] = ACTIONS(114),
    [sym__zwsp] = ACTIONS(114),
    [sym__wj] = ACTIONS(114),
    [sym__apos] = ACTIONS(114),
    [sym__quot] = ACTIONS(114),
    [sym__lsquo] = ACTIONS(114),
    [sym__rsquo] = ACTIONS(114),
    [sym__ldquo] = ACTIONS(114),
    [sym__rdquo] = ACTIONS(114),
    [sym__deg] = ACTIONS(114),
    [sym__plus] = ACTIONS(114),
    [sym__brvbar] = ACTIONS(114),
    [sym__vbar] = ACTIONS(114),
    [sym__amp] = ACTIONS(114),
    [sym__lt] = ACTIONS(114),
    [sym__gt] = ACTIONS(114),
    [sym__startsb] = ACTIONS(114),
    [sym__endsb] = ACTIONS(114),
    [sym__caret] = ACTIONS(114),
    [sym__asterisk] = ACTIONS(114),
    [sym__tilde] = ACTIONS(114),
    [sym__backslash] = ACTIONS(114),
    [sym__backtick] = ACTIONS(114),
    [sym__two_colons] = ACTIONS(114),
    [sym__two_semicolons] = ACTIONS(114),
    [sym__cpp] = ACTIONS(114),
    [sym__pp] = ACTIONS(114),
  },
  [3] = {
    [sym__block] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym_tip] = STATE(2),
    [sym_important] = STATE(2),
    [sym_caution] = STATE(2),
    [sym_warning] = STATE(2),
    [sym_list] = STATE(2),
    [sym__list_item] = STATE(4),
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
    [sym__inline_element] = STATE(39),
    [sym_replacement] = STATE(39),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym_paragraph_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_title] = ACTIONS(119),
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
    [sym__blank] = ACTIONS(47),
    [sym__empty] = ACTIONS(47),
    [sym__sp] = ACTIONS(47),
    [sym__nbsp] = ACTIONS(47),
    [sym__zwsp] = ACTIONS(47),
    [sym__wj] = ACTIONS(47),
    [sym__apos] = ACTIONS(47),
    [sym__quot] = ACTIONS(47),
    [sym__lsquo] = ACTIONS(47),
    [sym__rsquo] = ACTIONS(47),
    [sym__ldquo] = ACTIONS(47),
    [sym__rdquo] = ACTIONS(47),
    [sym__deg] = ACTIONS(47),
    [sym__plus] = ACTIONS(47),
    [sym__brvbar] = ACTIONS(47),
    [sym__vbar] = ACTIONS(47),
    [sym__amp] = ACTIONS(47),
    [sym__lt] = ACTIONS(47),
    [sym__gt] = ACTIONS(47),
    [sym__startsb] = ACTIONS(47),
    [sym__endsb] = ACTIONS(47),
    [sym__caret] = ACTIONS(47),
    [sym__asterisk] = ACTIONS(47),
    [sym__tilde] = ACTIONS(47),
    [sym__backslash] = ACTIONS(47),
    [sym__backtick] = ACTIONS(47),
    [sym__two_colons] = ACTIONS(47),
    [sym__two_semicolons] = ACTIONS(47),
    [sym__cpp] = ACTIONS(47),
    [sym__pp] = ACTIONS(47),
  },
  [4] = {
    [sym__list_item] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_title] = ACTIONS(121),
    [anon_sym_NOTE_COLON] = ACTIONS(123),
    [anon_sym_TIP_COLON] = ACTIONS(121),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(121),
    [anon_sym_CAUTION_COLON] = ACTIONS(121),
    [anon_sym_WARNING_COLON] = ACTIONS(121),
    [aux_sym__list_item_token1] = ACTIONS(17),
    [aux_sym__list_item_token2] = ACTIONS(19),
    [aux_sym__list_item_token3] = ACTIONS(19),
    [anon_sym_LBRACK_COMMA] = ACTIONS(121),
    [aux_sym_code_token1] = ACTIONS(123),
    [anon_sym_SLASH_SLASH] = ACTIONS(121),
    [anon_sym_image_COLON_COLON] = ACTIONS(121),
    [aux_sym_url_token1] = ACTIONS(123),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(121),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(121),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(121),
    [anon_sym_LT_LT] = ACTIONS(121),
    [anon_sym_audio_COLON_COLON] = ACTIONS(121),
    [anon_sym_video_COLON_COLON] = ACTIONS(121),
    [sym_emphasis] = ACTIONS(123),
    [sym_strong] = ACTIONS(123),
    [sym_monospace] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [sym_subscript] = ACTIONS(121),
    [sym__blank] = ACTIONS(121),
    [sym__empty] = ACTIONS(121),
    [sym__sp] = ACTIONS(121),
    [sym__nbsp] = ACTIONS(121),
    [sym__zwsp] = ACTIONS(121),
    [sym__wj] = ACTIONS(121),
    [sym__apos] = ACTIONS(121),
    [sym__quot] = ACTIONS(121),
    [sym__lsquo] = ACTIONS(121),
    [sym__rsquo] = ACTIONS(121),
    [sym__ldquo] = ACTIONS(121),
    [sym__rdquo] = ACTIONS(121),
    [sym__deg] = ACTIONS(121),
    [sym__plus] = ACTIONS(121),
    [sym__brvbar] = ACTIONS(121),
    [sym__vbar] = ACTIONS(121),
    [sym__amp] = ACTIONS(121),
    [sym__lt] = ACTIONS(121),
    [sym__gt] = ACTIONS(121),
    [sym__startsb] = ACTIONS(121),
    [sym__endsb] = ACTIONS(121),
    [sym__caret] = ACTIONS(121),
    [sym__asterisk] = ACTIONS(121),
    [sym__tilde] = ACTIONS(121),
    [sym__backslash] = ACTIONS(121),
    [sym__backtick] = ACTIONS(121),
    [sym__two_colons] = ACTIONS(121),
    [sym__two_semicolons] = ACTIONS(121),
    [sym__cpp] = ACTIONS(121),
    [sym__pp] = ACTIONS(121),
  },
  [5] = {
    [sym__list_item] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_title] = ACTIONS(125),
    [anon_sym_NOTE_COLON] = ACTIONS(127),
    [anon_sym_TIP_COLON] = ACTIONS(125),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(125),
    [anon_sym_CAUTION_COLON] = ACTIONS(125),
    [anon_sym_WARNING_COLON] = ACTIONS(125),
    [aux_sym__list_item_token1] = ACTIONS(129),
    [aux_sym__list_item_token2] = ACTIONS(132),
    [aux_sym__list_item_token3] = ACTIONS(132),
    [anon_sym_LBRACK_COMMA] = ACTIONS(125),
    [aux_sym_code_token1] = ACTIONS(127),
    [anon_sym_SLASH_SLASH] = ACTIONS(125),
    [anon_sym_image_COLON_COLON] = ACTIONS(125),
    [aux_sym_url_token1] = ACTIONS(127),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(125),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(125),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(125),
    [anon_sym_LT_LT] = ACTIONS(125),
    [anon_sym_audio_COLON_COLON] = ACTIONS(125),
    [anon_sym_video_COLON_COLON] = ACTIONS(125),
    [sym_emphasis] = ACTIONS(127),
    [sym_strong] = ACTIONS(127),
    [sym_monospace] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(125),
    [sym__blank] = ACTIONS(125),
    [sym__empty] = ACTIONS(125),
    [sym__sp] = ACTIONS(125),
    [sym__nbsp] = ACTIONS(125),
    [sym__zwsp] = ACTIONS(125),
    [sym__wj] = ACTIONS(125),
    [sym__apos] = ACTIONS(125),
    [sym__quot] = ACTIONS(125),
    [sym__lsquo] = ACTIONS(125),
    [sym__rsquo] = ACTIONS(125),
    [sym__ldquo] = ACTIONS(125),
    [sym__rdquo] = ACTIONS(125),
    [sym__deg] = ACTIONS(125),
    [sym__plus] = ACTIONS(125),
    [sym__brvbar] = ACTIONS(125),
    [sym__vbar] = ACTIONS(125),
    [sym__amp] = ACTIONS(125),
    [sym__lt] = ACTIONS(125),
    [sym__gt] = ACTIONS(125),
    [sym__startsb] = ACTIONS(125),
    [sym__endsb] = ACTIONS(125),
    [sym__caret] = ACTIONS(125),
    [sym__asterisk] = ACTIONS(125),
    [sym__tilde] = ACTIONS(125),
    [sym__backslash] = ACTIONS(125),
    [sym__backtick] = ACTIONS(125),
    [sym__two_colons] = ACTIONS(125),
    [sym__two_semicolons] = ACTIONS(125),
    [sym__cpp] = ACTIONS(125),
    [sym__pp] = ACTIONS(125),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_title] = ACTIONS(135),
    [anon_sym_NOTE_COLON] = ACTIONS(137),
    [anon_sym_TIP_COLON] = ACTIONS(135),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(135),
    [anon_sym_CAUTION_COLON] = ACTIONS(135),
    [anon_sym_WARNING_COLON] = ACTIONS(135),
    [aux_sym__list_item_token1] = ACTIONS(137),
    [aux_sym__list_item_token2] = ACTIONS(135),
    [aux_sym__list_item_token3] = ACTIONS(135),
    [anon_sym_LBRACK_COMMA] = ACTIONS(135),
    [aux_sym_code_token1] = ACTIONS(137),
    [anon_sym_SLASH_SLASH] = ACTIONS(135),
    [anon_sym_image_COLON_COLON] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(139),
    [aux_sym_url_token1] = ACTIONS(137),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(135),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(135),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(135),
    [anon_sym_LT_LT] = ACTIONS(135),
    [anon_sym_audio_COLON_COLON] = ACTIONS(135),
    [anon_sym_video_COLON_COLON] = ACTIONS(135),
    [sym_emphasis] = ACTIONS(137),
    [sym_strong] = ACTIONS(137),
    [sym_monospace] = ACTIONS(137),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(135),
    [sym__blank] = ACTIONS(135),
    [sym__empty] = ACTIONS(135),
    [sym__sp] = ACTIONS(135),
    [sym__nbsp] = ACTIONS(135),
    [sym__zwsp] = ACTIONS(135),
    [sym__wj] = ACTIONS(135),
    [sym__apos] = ACTIONS(135),
    [sym__quot] = ACTIONS(135),
    [sym__lsquo] = ACTIONS(135),
    [sym__rsquo] = ACTIONS(135),
    [sym__ldquo] = ACTIONS(135),
    [sym__rdquo] = ACTIONS(135),
    [sym__deg] = ACTIONS(135),
    [sym__plus] = ACTIONS(135),
    [sym__brvbar] = ACTIONS(135),
    [sym__vbar] = ACTIONS(135),
    [sym__amp] = ACTIONS(135),
    [sym__lt] = ACTIONS(135),
    [sym__gt] = ACTIONS(135),
    [sym__startsb] = ACTIONS(135),
    [sym__endsb] = ACTIONS(135),
    [sym__caret] = ACTIONS(135),
    [sym__asterisk] = ACTIONS(135),
    [sym__tilde] = ACTIONS(135),
    [sym__backslash] = ACTIONS(135),
    [sym__backtick] = ACTIONS(135),
    [sym__two_colons] = ACTIONS(135),
    [sym__two_semicolons] = ACTIONS(135),
    [sym__cpp] = ACTIONS(135),
    [sym__pp] = ACTIONS(135),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_title] = ACTIONS(143),
    [anon_sym_NOTE_COLON] = ACTIONS(143),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_TIP_COLON] = ACTIONS(143),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(143),
    [anon_sym_CAUTION_COLON] = ACTIONS(143),
    [anon_sym_WARNING_COLON] = ACTIONS(143),
    [aux_sym__list_item_token1] = ACTIONS(143),
    [aux_sym__list_item_token2] = ACTIONS(143),
    [aux_sym__list_item_token3] = ACTIONS(143),
    [anon_sym_LBRACK_COMMA] = ACTIONS(143),
    [aux_sym_code_token1] = ACTIONS(143),
    [anon_sym_SLASH_SLASH] = ACTIONS(143),
    [anon_sym_image_COLON_COLON] = ACTIONS(143),
    [aux_sym_url_token1] = ACTIONS(143),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(143),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(143),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_audio_COLON_COLON] = ACTIONS(143),
    [anon_sym_video_COLON_COLON] = ACTIONS(143),
    [sym_emphasis] = ACTIONS(143),
    [sym_strong] = ACTIONS(143),
    [sym_monospace] = ACTIONS(143),
    [sym_superscript] = ACTIONS(143),
    [sym_subscript] = ACTIONS(143),
    [sym__blank] = ACTIONS(143),
    [sym__empty] = ACTIONS(143),
    [sym__sp] = ACTIONS(143),
    [sym__nbsp] = ACTIONS(143),
    [sym__zwsp] = ACTIONS(143),
    [sym__wj] = ACTIONS(143),
    [sym__apos] = ACTIONS(143),
    [sym__quot] = ACTIONS(143),
    [sym__lsquo] = ACTIONS(143),
    [sym__rsquo] = ACTIONS(143),
    [sym__ldquo] = ACTIONS(143),
    [sym__rdquo] = ACTIONS(143),
    [sym__deg] = ACTIONS(143),
    [sym__plus] = ACTIONS(143),
    [sym__brvbar] = ACTIONS(143),
    [sym__vbar] = ACTIONS(143),
    [sym__amp] = ACTIONS(143),
    [sym__lt] = ACTIONS(143),
    [sym__gt] = ACTIONS(143),
    [sym__startsb] = ACTIONS(143),
    [sym__endsb] = ACTIONS(143),
    [sym__caret] = ACTIONS(143),
    [sym__asterisk] = ACTIONS(143),
    [sym__tilde] = ACTIONS(143),
    [sym__backslash] = ACTIONS(143),
    [sym__backtick] = ACTIONS(143),
    [sym__two_colons] = ACTIONS(143),
    [sym__two_semicolons] = ACTIONS(143),
    [sym__cpp] = ACTIONS(143),
    [sym__pp] = ACTIONS(143),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_title] = ACTIONS(147),
    [anon_sym_NOTE_COLON] = ACTIONS(149),
    [anon_sym_TIP_COLON] = ACTIONS(147),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(147),
    [anon_sym_CAUTION_COLON] = ACTIONS(147),
    [anon_sym_WARNING_COLON] = ACTIONS(147),
    [aux_sym__list_item_token1] = ACTIONS(149),
    [aux_sym__list_item_token2] = ACTIONS(147),
    [aux_sym__list_item_token3] = ACTIONS(147),
    [anon_sym_LBRACK_COMMA] = ACTIONS(147),
    [aux_sym_code_token1] = ACTIONS(149),
    [anon_sym_SLASH_SLASH] = ACTIONS(147),
    [anon_sym_image_COLON_COLON] = ACTIONS(147),
    [aux_sym_url_token1] = ACTIONS(149),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(147),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(147),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(147),
    [anon_sym_LT_LT] = ACTIONS(147),
    [anon_sym_audio_COLON_COLON] = ACTIONS(147),
    [anon_sym_video_COLON_COLON] = ACTIONS(147),
    [sym_emphasis] = ACTIONS(149),
    [sym_strong] = ACTIONS(149),
    [sym_monospace] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [sym_subscript] = ACTIONS(147),
    [sym__blank] = ACTIONS(147),
    [sym__empty] = ACTIONS(147),
    [sym__sp] = ACTIONS(147),
    [sym__nbsp] = ACTIONS(147),
    [sym__zwsp] = ACTIONS(147),
    [sym__wj] = ACTIONS(147),
    [sym__apos] = ACTIONS(147),
    [sym__quot] = ACTIONS(147),
    [sym__lsquo] = ACTIONS(147),
    [sym__rsquo] = ACTIONS(147),
    [sym__ldquo] = ACTIONS(147),
    [sym__rdquo] = ACTIONS(147),
    [sym__deg] = ACTIONS(147),
    [sym__plus] = ACTIONS(147),
    [sym__brvbar] = ACTIONS(147),
    [sym__vbar] = ACTIONS(147),
    [sym__amp] = ACTIONS(147),
    [sym__lt] = ACTIONS(147),
    [sym__gt] = ACTIONS(147),
    [sym__startsb] = ACTIONS(147),
    [sym__endsb] = ACTIONS(147),
    [sym__caret] = ACTIONS(147),
    [sym__asterisk] = ACTIONS(147),
    [sym__tilde] = ACTIONS(147),
    [sym__backslash] = ACTIONS(147),
    [sym__backtick] = ACTIONS(147),
    [sym__two_colons] = ACTIONS(147),
    [sym__two_semicolons] = ACTIONS(147),
    [sym__cpp] = ACTIONS(147),
    [sym__pp] = ACTIONS(147),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_title] = ACTIONS(151),
    [anon_sym_NOTE_COLON] = ACTIONS(153),
    [anon_sym_TIP_COLON] = ACTIONS(151),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(151),
    [anon_sym_CAUTION_COLON] = ACTIONS(151),
    [anon_sym_WARNING_COLON] = ACTIONS(151),
    [aux_sym__list_item_token1] = ACTIONS(153),
    [aux_sym__list_item_token2] = ACTIONS(151),
    [aux_sym__list_item_token3] = ACTIONS(151),
    [anon_sym_LBRACK_COMMA] = ACTIONS(151),
    [aux_sym_code_token1] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(151),
    [anon_sym_image_COLON_COLON] = ACTIONS(151),
    [aux_sym_url_token1] = ACTIONS(153),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(151),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(151),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(151),
    [anon_sym_audio_COLON_COLON] = ACTIONS(151),
    [anon_sym_video_COLON_COLON] = ACTIONS(151),
    [sym_emphasis] = ACTIONS(153),
    [sym_strong] = ACTIONS(153),
    [sym_monospace] = ACTIONS(153),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [sym__blank] = ACTIONS(151),
    [sym__empty] = ACTIONS(151),
    [sym__sp] = ACTIONS(151),
    [sym__nbsp] = ACTIONS(151),
    [sym__zwsp] = ACTIONS(151),
    [sym__wj] = ACTIONS(151),
    [sym__apos] = ACTIONS(151),
    [sym__quot] = ACTIONS(151),
    [sym__lsquo] = ACTIONS(151),
    [sym__rsquo] = ACTIONS(151),
    [sym__ldquo] = ACTIONS(151),
    [sym__rdquo] = ACTIONS(151),
    [sym__deg] = ACTIONS(151),
    [sym__plus] = ACTIONS(151),
    [sym__brvbar] = ACTIONS(151),
    [sym__vbar] = ACTIONS(151),
    [sym__amp] = ACTIONS(151),
    [sym__lt] = ACTIONS(151),
    [sym__gt] = ACTIONS(151),
    [sym__startsb] = ACTIONS(151),
    [sym__endsb] = ACTIONS(151),
    [sym__caret] = ACTIONS(151),
    [sym__asterisk] = ACTIONS(151),
    [sym__tilde] = ACTIONS(151),
    [sym__backslash] = ACTIONS(151),
    [sym__backtick] = ACTIONS(151),
    [sym__two_colons] = ACTIONS(151),
    [sym__two_semicolons] = ACTIONS(151),
    [sym__cpp] = ACTIONS(151),
    [sym__pp] = ACTIONS(151),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_title] = ACTIONS(155),
    [anon_sym_NOTE_COLON] = ACTIONS(157),
    [anon_sym_TIP_COLON] = ACTIONS(155),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(155),
    [anon_sym_CAUTION_COLON] = ACTIONS(155),
    [anon_sym_WARNING_COLON] = ACTIONS(155),
    [aux_sym__list_item_token1] = ACTIONS(157),
    [aux_sym__list_item_token2] = ACTIONS(155),
    [aux_sym__list_item_token3] = ACTIONS(155),
    [anon_sym_LBRACK_COMMA] = ACTIONS(155),
    [aux_sym_code_token1] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(155),
    [anon_sym_image_COLON_COLON] = ACTIONS(155),
    [aux_sym_url_token1] = ACTIONS(157),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(155),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(155),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(155),
    [anon_sym_LT_LT] = ACTIONS(155),
    [anon_sym_audio_COLON_COLON] = ACTIONS(155),
    [anon_sym_video_COLON_COLON] = ACTIONS(155),
    [sym_emphasis] = ACTIONS(157),
    [sym_strong] = ACTIONS(157),
    [sym_monospace] = ACTIONS(157),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(155),
    [sym__blank] = ACTIONS(155),
    [sym__empty] = ACTIONS(155),
    [sym__sp] = ACTIONS(155),
    [sym__nbsp] = ACTIONS(155),
    [sym__zwsp] = ACTIONS(155),
    [sym__wj] = ACTIONS(155),
    [sym__apos] = ACTIONS(155),
    [sym__quot] = ACTIONS(155),
    [sym__lsquo] = ACTIONS(155),
    [sym__rsquo] = ACTIONS(155),
    [sym__ldquo] = ACTIONS(155),
    [sym__rdquo] = ACTIONS(155),
    [sym__deg] = ACTIONS(155),
    [sym__plus] = ACTIONS(155),
    [sym__brvbar] = ACTIONS(155),
    [sym__vbar] = ACTIONS(155),
    [sym__amp] = ACTIONS(155),
    [sym__lt] = ACTIONS(155),
    [sym__gt] = ACTIONS(155),
    [sym__startsb] = ACTIONS(155),
    [sym__endsb] = ACTIONS(155),
    [sym__caret] = ACTIONS(155),
    [sym__asterisk] = ACTIONS(155),
    [sym__tilde] = ACTIONS(155),
    [sym__backslash] = ACTIONS(155),
    [sym__backtick] = ACTIONS(155),
    [sym__two_colons] = ACTIONS(155),
    [sym__two_semicolons] = ACTIONS(155),
    [sym__cpp] = ACTIONS(155),
    [sym__pp] = ACTIONS(155),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_title] = ACTIONS(159),
    [anon_sym_NOTE_COLON] = ACTIONS(161),
    [anon_sym_TIP_COLON] = ACTIONS(159),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(159),
    [anon_sym_CAUTION_COLON] = ACTIONS(159),
    [anon_sym_WARNING_COLON] = ACTIONS(159),
    [aux_sym__list_item_token1] = ACTIONS(161),
    [aux_sym__list_item_token2] = ACTIONS(159),
    [aux_sym__list_item_token3] = ACTIONS(159),
    [anon_sym_LBRACK_COMMA] = ACTIONS(159),
    [aux_sym_code_token1] = ACTIONS(161),
    [anon_sym_SLASH_SLASH] = ACTIONS(159),
    [anon_sym_image_COLON_COLON] = ACTIONS(159),
    [aux_sym_url_token1] = ACTIONS(161),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(159),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(159),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_audio_COLON_COLON] = ACTIONS(159),
    [anon_sym_video_COLON_COLON] = ACTIONS(159),
    [sym_emphasis] = ACTIONS(161),
    [sym_strong] = ACTIONS(161),
    [sym_monospace] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(159),
    [sym__blank] = ACTIONS(159),
    [sym__empty] = ACTIONS(159),
    [sym__sp] = ACTIONS(159),
    [sym__nbsp] = ACTIONS(159),
    [sym__zwsp] = ACTIONS(159),
    [sym__wj] = ACTIONS(159),
    [sym__apos] = ACTIONS(159),
    [sym__quot] = ACTIONS(159),
    [sym__lsquo] = ACTIONS(159),
    [sym__rsquo] = ACTIONS(159),
    [sym__ldquo] = ACTIONS(159),
    [sym__rdquo] = ACTIONS(159),
    [sym__deg] = ACTIONS(159),
    [sym__plus] = ACTIONS(159),
    [sym__brvbar] = ACTIONS(159),
    [sym__vbar] = ACTIONS(159),
    [sym__amp] = ACTIONS(159),
    [sym__lt] = ACTIONS(159),
    [sym__gt] = ACTIONS(159),
    [sym__startsb] = ACTIONS(159),
    [sym__endsb] = ACTIONS(159),
    [sym__caret] = ACTIONS(159),
    [sym__asterisk] = ACTIONS(159),
    [sym__tilde] = ACTIONS(159),
    [sym__backslash] = ACTIONS(159),
    [sym__backtick] = ACTIONS(159),
    [sym__two_colons] = ACTIONS(159),
    [sym__two_semicolons] = ACTIONS(159),
    [sym__cpp] = ACTIONS(159),
    [sym__pp] = ACTIONS(159),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_title] = ACTIONS(163),
    [anon_sym_NOTE_COLON] = ACTIONS(165),
    [anon_sym_TIP_COLON] = ACTIONS(163),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(163),
    [anon_sym_CAUTION_COLON] = ACTIONS(163),
    [anon_sym_WARNING_COLON] = ACTIONS(163),
    [aux_sym__list_item_token1] = ACTIONS(165),
    [aux_sym__list_item_token2] = ACTIONS(163),
    [aux_sym__list_item_token3] = ACTIONS(163),
    [anon_sym_LBRACK_COMMA] = ACTIONS(163),
    [aux_sym_code_token1] = ACTIONS(165),
    [anon_sym_SLASH_SLASH] = ACTIONS(163),
    [anon_sym_image_COLON_COLON] = ACTIONS(163),
    [aux_sym_url_token1] = ACTIONS(165),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(163),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(163),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_audio_COLON_COLON] = ACTIONS(163),
    [anon_sym_video_COLON_COLON] = ACTIONS(163),
    [sym_emphasis] = ACTIONS(165),
    [sym_strong] = ACTIONS(165),
    [sym_monospace] = ACTIONS(165),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(163),
    [sym__blank] = ACTIONS(163),
    [sym__empty] = ACTIONS(163),
    [sym__sp] = ACTIONS(163),
    [sym__nbsp] = ACTIONS(163),
    [sym__zwsp] = ACTIONS(163),
    [sym__wj] = ACTIONS(163),
    [sym__apos] = ACTIONS(163),
    [sym__quot] = ACTIONS(163),
    [sym__lsquo] = ACTIONS(163),
    [sym__rsquo] = ACTIONS(163),
    [sym__ldquo] = ACTIONS(163),
    [sym__rdquo] = ACTIONS(163),
    [sym__deg] = ACTIONS(163),
    [sym__plus] = ACTIONS(163),
    [sym__brvbar] = ACTIONS(163),
    [sym__vbar] = ACTIONS(163),
    [sym__amp] = ACTIONS(163),
    [sym__lt] = ACTIONS(163),
    [sym__gt] = ACTIONS(163),
    [sym__startsb] = ACTIONS(163),
    [sym__endsb] = ACTIONS(163),
    [sym__caret] = ACTIONS(163),
    [sym__asterisk] = ACTIONS(163),
    [sym__tilde] = ACTIONS(163),
    [sym__backslash] = ACTIONS(163),
    [sym__backtick] = ACTIONS(163),
    [sym__two_colons] = ACTIONS(163),
    [sym__two_semicolons] = ACTIONS(163),
    [sym__cpp] = ACTIONS(163),
    [sym__pp] = ACTIONS(163),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_title] = ACTIONS(167),
    [anon_sym_NOTE_COLON] = ACTIONS(169),
    [anon_sym_TIP_COLON] = ACTIONS(167),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(167),
    [anon_sym_CAUTION_COLON] = ACTIONS(167),
    [anon_sym_WARNING_COLON] = ACTIONS(167),
    [aux_sym__list_item_token1] = ACTIONS(169),
    [aux_sym__list_item_token2] = ACTIONS(167),
    [aux_sym__list_item_token3] = ACTIONS(167),
    [anon_sym_LBRACK_COMMA] = ACTIONS(167),
    [aux_sym_code_token1] = ACTIONS(169),
    [anon_sym_SLASH_SLASH] = ACTIONS(167),
    [anon_sym_image_COLON_COLON] = ACTIONS(167),
    [aux_sym_url_token1] = ACTIONS(169),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(167),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(167),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(167),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_audio_COLON_COLON] = ACTIONS(167),
    [anon_sym_video_COLON_COLON] = ACTIONS(167),
    [sym_emphasis] = ACTIONS(169),
    [sym_strong] = ACTIONS(169),
    [sym_monospace] = ACTIONS(169),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(167),
    [sym__blank] = ACTIONS(167),
    [sym__empty] = ACTIONS(167),
    [sym__sp] = ACTIONS(167),
    [sym__nbsp] = ACTIONS(167),
    [sym__zwsp] = ACTIONS(167),
    [sym__wj] = ACTIONS(167),
    [sym__apos] = ACTIONS(167),
    [sym__quot] = ACTIONS(167),
    [sym__lsquo] = ACTIONS(167),
    [sym__rsquo] = ACTIONS(167),
    [sym__ldquo] = ACTIONS(167),
    [sym__rdquo] = ACTIONS(167),
    [sym__deg] = ACTIONS(167),
    [sym__plus] = ACTIONS(167),
    [sym__brvbar] = ACTIONS(167),
    [sym__vbar] = ACTIONS(167),
    [sym__amp] = ACTIONS(167),
    [sym__lt] = ACTIONS(167),
    [sym__gt] = ACTIONS(167),
    [sym__startsb] = ACTIONS(167),
    [sym__endsb] = ACTIONS(167),
    [sym__caret] = ACTIONS(167),
    [sym__asterisk] = ACTIONS(167),
    [sym__tilde] = ACTIONS(167),
    [sym__backslash] = ACTIONS(167),
    [sym__backtick] = ACTIONS(167),
    [sym__two_colons] = ACTIONS(167),
    [sym__two_semicolons] = ACTIONS(167),
    [sym__cpp] = ACTIONS(167),
    [sym__pp] = ACTIONS(167),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_title] = ACTIONS(171),
    [anon_sym_NOTE_COLON] = ACTIONS(173),
    [anon_sym_TIP_COLON] = ACTIONS(171),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(171),
    [anon_sym_CAUTION_COLON] = ACTIONS(171),
    [anon_sym_WARNING_COLON] = ACTIONS(171),
    [aux_sym__list_item_token1] = ACTIONS(173),
    [aux_sym__list_item_token2] = ACTIONS(171),
    [aux_sym__list_item_token3] = ACTIONS(171),
    [anon_sym_LBRACK_COMMA] = ACTIONS(171),
    [aux_sym_code_token1] = ACTIONS(173),
    [anon_sym_SLASH_SLASH] = ACTIONS(171),
    [anon_sym_image_COLON_COLON] = ACTIONS(171),
    [aux_sym_url_token1] = ACTIONS(173),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(171),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(171),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_audio_COLON_COLON] = ACTIONS(171),
    [anon_sym_video_COLON_COLON] = ACTIONS(171),
    [sym_emphasis] = ACTIONS(173),
    [sym_strong] = ACTIONS(173),
    [sym_monospace] = ACTIONS(173),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(171),
    [sym__blank] = ACTIONS(171),
    [sym__empty] = ACTIONS(171),
    [sym__sp] = ACTIONS(171),
    [sym__nbsp] = ACTIONS(171),
    [sym__zwsp] = ACTIONS(171),
    [sym__wj] = ACTIONS(171),
    [sym__apos] = ACTIONS(171),
    [sym__quot] = ACTIONS(171),
    [sym__lsquo] = ACTIONS(171),
    [sym__rsquo] = ACTIONS(171),
    [sym__ldquo] = ACTIONS(171),
    [sym__rdquo] = ACTIONS(171),
    [sym__deg] = ACTIONS(171),
    [sym__plus] = ACTIONS(171),
    [sym__brvbar] = ACTIONS(171),
    [sym__vbar] = ACTIONS(171),
    [sym__amp] = ACTIONS(171),
    [sym__lt] = ACTIONS(171),
    [sym__gt] = ACTIONS(171),
    [sym__startsb] = ACTIONS(171),
    [sym__endsb] = ACTIONS(171),
    [sym__caret] = ACTIONS(171),
    [sym__asterisk] = ACTIONS(171),
    [sym__tilde] = ACTIONS(171),
    [sym__backslash] = ACTIONS(171),
    [sym__backtick] = ACTIONS(171),
    [sym__two_colons] = ACTIONS(171),
    [sym__two_semicolons] = ACTIONS(171),
    [sym__cpp] = ACTIONS(171),
    [sym__pp] = ACTIONS(171),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_title] = ACTIONS(175),
    [anon_sym_NOTE_COLON] = ACTIONS(177),
    [anon_sym_TIP_COLON] = ACTIONS(175),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(175),
    [anon_sym_CAUTION_COLON] = ACTIONS(175),
    [anon_sym_WARNING_COLON] = ACTIONS(175),
    [aux_sym__list_item_token1] = ACTIONS(177),
    [aux_sym__list_item_token2] = ACTIONS(175),
    [aux_sym__list_item_token3] = ACTIONS(175),
    [anon_sym_LBRACK_COMMA] = ACTIONS(175),
    [aux_sym_code_token1] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_image_COLON_COLON] = ACTIONS(175),
    [aux_sym_url_token1] = ACTIONS(177),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(175),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(175),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(175),
    [anon_sym_LT_LT] = ACTIONS(175),
    [anon_sym_audio_COLON_COLON] = ACTIONS(175),
    [anon_sym_video_COLON_COLON] = ACTIONS(175),
    [sym_emphasis] = ACTIONS(177),
    [sym_strong] = ACTIONS(177),
    [sym_monospace] = ACTIONS(177),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(175),
    [sym__blank] = ACTIONS(175),
    [sym__empty] = ACTIONS(175),
    [sym__sp] = ACTIONS(175),
    [sym__nbsp] = ACTIONS(175),
    [sym__zwsp] = ACTIONS(175),
    [sym__wj] = ACTIONS(175),
    [sym__apos] = ACTIONS(175),
    [sym__quot] = ACTIONS(175),
    [sym__lsquo] = ACTIONS(175),
    [sym__rsquo] = ACTIONS(175),
    [sym__ldquo] = ACTIONS(175),
    [sym__rdquo] = ACTIONS(175),
    [sym__deg] = ACTIONS(175),
    [sym__plus] = ACTIONS(175),
    [sym__brvbar] = ACTIONS(175),
    [sym__vbar] = ACTIONS(175),
    [sym__amp] = ACTIONS(175),
    [sym__lt] = ACTIONS(175),
    [sym__gt] = ACTIONS(175),
    [sym__startsb] = ACTIONS(175),
    [sym__endsb] = ACTIONS(175),
    [sym__caret] = ACTIONS(175),
    [sym__asterisk] = ACTIONS(175),
    [sym__tilde] = ACTIONS(175),
    [sym__backslash] = ACTIONS(175),
    [sym__backtick] = ACTIONS(175),
    [sym__two_colons] = ACTIONS(175),
    [sym__two_semicolons] = ACTIONS(175),
    [sym__cpp] = ACTIONS(175),
    [sym__pp] = ACTIONS(175),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_title] = ACTIONS(179),
    [anon_sym_NOTE_COLON] = ACTIONS(181),
    [anon_sym_TIP_COLON] = ACTIONS(179),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(179),
    [anon_sym_CAUTION_COLON] = ACTIONS(179),
    [anon_sym_WARNING_COLON] = ACTIONS(179),
    [aux_sym__list_item_token1] = ACTIONS(181),
    [aux_sym__list_item_token2] = ACTIONS(179),
    [aux_sym__list_item_token3] = ACTIONS(179),
    [anon_sym_LBRACK_COMMA] = ACTIONS(179),
    [aux_sym_code_token1] = ACTIONS(181),
    [anon_sym_SLASH_SLASH] = ACTIONS(179),
    [anon_sym_image_COLON_COLON] = ACTIONS(179),
    [aux_sym_url_token1] = ACTIONS(181),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(179),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(179),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_audio_COLON_COLON] = ACTIONS(179),
    [anon_sym_video_COLON_COLON] = ACTIONS(179),
    [sym_emphasis] = ACTIONS(181),
    [sym_strong] = ACTIONS(181),
    [sym_monospace] = ACTIONS(181),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(179),
    [sym__blank] = ACTIONS(179),
    [sym__empty] = ACTIONS(179),
    [sym__sp] = ACTIONS(179),
    [sym__nbsp] = ACTIONS(179),
    [sym__zwsp] = ACTIONS(179),
    [sym__wj] = ACTIONS(179),
    [sym__apos] = ACTIONS(179),
    [sym__quot] = ACTIONS(179),
    [sym__lsquo] = ACTIONS(179),
    [sym__rsquo] = ACTIONS(179),
    [sym__ldquo] = ACTIONS(179),
    [sym__rdquo] = ACTIONS(179),
    [sym__deg] = ACTIONS(179),
    [sym__plus] = ACTIONS(179),
    [sym__brvbar] = ACTIONS(179),
    [sym__vbar] = ACTIONS(179),
    [sym__amp] = ACTIONS(179),
    [sym__lt] = ACTIONS(179),
    [sym__gt] = ACTIONS(179),
    [sym__startsb] = ACTIONS(179),
    [sym__endsb] = ACTIONS(179),
    [sym__caret] = ACTIONS(179),
    [sym__asterisk] = ACTIONS(179),
    [sym__tilde] = ACTIONS(179),
    [sym__backslash] = ACTIONS(179),
    [sym__backtick] = ACTIONS(179),
    [sym__two_colons] = ACTIONS(179),
    [sym__two_semicolons] = ACTIONS(179),
    [sym__cpp] = ACTIONS(179),
    [sym__pp] = ACTIONS(179),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_title] = ACTIONS(183),
    [anon_sym_NOTE_COLON] = ACTIONS(185),
    [anon_sym_TIP_COLON] = ACTIONS(183),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(183),
    [anon_sym_CAUTION_COLON] = ACTIONS(183),
    [anon_sym_WARNING_COLON] = ACTIONS(183),
    [aux_sym__list_item_token1] = ACTIONS(185),
    [aux_sym__list_item_token2] = ACTIONS(183),
    [aux_sym__list_item_token3] = ACTIONS(183),
    [anon_sym_LBRACK_COMMA] = ACTIONS(183),
    [aux_sym_code_token1] = ACTIONS(185),
    [anon_sym_SLASH_SLASH] = ACTIONS(183),
    [anon_sym_image_COLON_COLON] = ACTIONS(183),
    [aux_sym_url_token1] = ACTIONS(185),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(183),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(183),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(183),
    [anon_sym_LT_LT] = ACTIONS(183),
    [anon_sym_audio_COLON_COLON] = ACTIONS(183),
    [anon_sym_video_COLON_COLON] = ACTIONS(183),
    [sym_emphasis] = ACTIONS(185),
    [sym_strong] = ACTIONS(185),
    [sym_monospace] = ACTIONS(185),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(183),
    [sym__blank] = ACTIONS(183),
    [sym__empty] = ACTIONS(183),
    [sym__sp] = ACTIONS(183),
    [sym__nbsp] = ACTIONS(183),
    [sym__zwsp] = ACTIONS(183),
    [sym__wj] = ACTIONS(183),
    [sym__apos] = ACTIONS(183),
    [sym__quot] = ACTIONS(183),
    [sym__lsquo] = ACTIONS(183),
    [sym__rsquo] = ACTIONS(183),
    [sym__ldquo] = ACTIONS(183),
    [sym__rdquo] = ACTIONS(183),
    [sym__deg] = ACTIONS(183),
    [sym__plus] = ACTIONS(183),
    [sym__brvbar] = ACTIONS(183),
    [sym__vbar] = ACTIONS(183),
    [sym__amp] = ACTIONS(183),
    [sym__lt] = ACTIONS(183),
    [sym__gt] = ACTIONS(183),
    [sym__startsb] = ACTIONS(183),
    [sym__endsb] = ACTIONS(183),
    [sym__caret] = ACTIONS(183),
    [sym__asterisk] = ACTIONS(183),
    [sym__tilde] = ACTIONS(183),
    [sym__backslash] = ACTIONS(183),
    [sym__backtick] = ACTIONS(183),
    [sym__two_colons] = ACTIONS(183),
    [sym__two_semicolons] = ACTIONS(183),
    [sym__cpp] = ACTIONS(183),
    [sym__pp] = ACTIONS(183),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_title] = ACTIONS(187),
    [anon_sym_NOTE_COLON] = ACTIONS(189),
    [anon_sym_TIP_COLON] = ACTIONS(187),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(187),
    [anon_sym_CAUTION_COLON] = ACTIONS(187),
    [anon_sym_WARNING_COLON] = ACTIONS(187),
    [aux_sym__list_item_token1] = ACTIONS(189),
    [aux_sym__list_item_token2] = ACTIONS(187),
    [aux_sym__list_item_token3] = ACTIONS(187),
    [anon_sym_LBRACK_COMMA] = ACTIONS(187),
    [aux_sym_code_token1] = ACTIONS(189),
    [anon_sym_SLASH_SLASH] = ACTIONS(187),
    [anon_sym_image_COLON_COLON] = ACTIONS(187),
    [aux_sym_url_token1] = ACTIONS(189),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(187),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(187),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(187),
    [anon_sym_LT_LT] = ACTIONS(187),
    [anon_sym_audio_COLON_COLON] = ACTIONS(187),
    [anon_sym_video_COLON_COLON] = ACTIONS(187),
    [sym_emphasis] = ACTIONS(189),
    [sym_strong] = ACTIONS(189),
    [sym_monospace] = ACTIONS(189),
    [sym_superscript] = ACTIONS(189),
    [sym_subscript] = ACTIONS(187),
    [sym__blank] = ACTIONS(187),
    [sym__empty] = ACTIONS(187),
    [sym__sp] = ACTIONS(187),
    [sym__nbsp] = ACTIONS(187),
    [sym__zwsp] = ACTIONS(187),
    [sym__wj] = ACTIONS(187),
    [sym__apos] = ACTIONS(187),
    [sym__quot] = ACTIONS(187),
    [sym__lsquo] = ACTIONS(187),
    [sym__rsquo] = ACTIONS(187),
    [sym__ldquo] = ACTIONS(187),
    [sym__rdquo] = ACTIONS(187),
    [sym__deg] = ACTIONS(187),
    [sym__plus] = ACTIONS(187),
    [sym__brvbar] = ACTIONS(187),
    [sym__vbar] = ACTIONS(187),
    [sym__amp] = ACTIONS(187),
    [sym__lt] = ACTIONS(187),
    [sym__gt] = ACTIONS(187),
    [sym__startsb] = ACTIONS(187),
    [sym__endsb] = ACTIONS(187),
    [sym__caret] = ACTIONS(187),
    [sym__asterisk] = ACTIONS(187),
    [sym__tilde] = ACTIONS(187),
    [sym__backslash] = ACTIONS(187),
    [sym__backtick] = ACTIONS(187),
    [sym__two_colons] = ACTIONS(187),
    [sym__two_semicolons] = ACTIONS(187),
    [sym__cpp] = ACTIONS(187),
    [sym__pp] = ACTIONS(187),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_title] = ACTIONS(191),
    [anon_sym_NOTE_COLON] = ACTIONS(193),
    [anon_sym_TIP_COLON] = ACTIONS(191),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(191),
    [anon_sym_CAUTION_COLON] = ACTIONS(191),
    [anon_sym_WARNING_COLON] = ACTIONS(191),
    [aux_sym__list_item_token1] = ACTIONS(193),
    [aux_sym__list_item_token2] = ACTIONS(191),
    [aux_sym__list_item_token3] = ACTIONS(191),
    [anon_sym_LBRACK_COMMA] = ACTIONS(191),
    [aux_sym_code_token1] = ACTIONS(193),
    [anon_sym_SLASH_SLASH] = ACTIONS(191),
    [anon_sym_image_COLON_COLON] = ACTIONS(191),
    [aux_sym_url_token1] = ACTIONS(193),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(191),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(191),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_audio_COLON_COLON] = ACTIONS(191),
    [anon_sym_video_COLON_COLON] = ACTIONS(191),
    [sym_emphasis] = ACTIONS(193),
    [sym_strong] = ACTIONS(193),
    [sym_monospace] = ACTIONS(193),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(191),
    [sym__blank] = ACTIONS(191),
    [sym__empty] = ACTIONS(191),
    [sym__sp] = ACTIONS(191),
    [sym__nbsp] = ACTIONS(191),
    [sym__zwsp] = ACTIONS(191),
    [sym__wj] = ACTIONS(191),
    [sym__apos] = ACTIONS(191),
    [sym__quot] = ACTIONS(191),
    [sym__lsquo] = ACTIONS(191),
    [sym__rsquo] = ACTIONS(191),
    [sym__ldquo] = ACTIONS(191),
    [sym__rdquo] = ACTIONS(191),
    [sym__deg] = ACTIONS(191),
    [sym__plus] = ACTIONS(191),
    [sym__brvbar] = ACTIONS(191),
    [sym__vbar] = ACTIONS(191),
    [sym__amp] = ACTIONS(191),
    [sym__lt] = ACTIONS(191),
    [sym__gt] = ACTIONS(191),
    [sym__startsb] = ACTIONS(191),
    [sym__endsb] = ACTIONS(191),
    [sym__caret] = ACTIONS(191),
    [sym__asterisk] = ACTIONS(191),
    [sym__tilde] = ACTIONS(191),
    [sym__backslash] = ACTIONS(191),
    [sym__backtick] = ACTIONS(191),
    [sym__two_colons] = ACTIONS(191),
    [sym__two_semicolons] = ACTIONS(191),
    [sym__cpp] = ACTIONS(191),
    [sym__pp] = ACTIONS(191),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_title] = ACTIONS(195),
    [anon_sym_NOTE_COLON] = ACTIONS(197),
    [anon_sym_TIP_COLON] = ACTIONS(195),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(195),
    [anon_sym_CAUTION_COLON] = ACTIONS(195),
    [anon_sym_WARNING_COLON] = ACTIONS(195),
    [aux_sym__list_item_token1] = ACTIONS(197),
    [aux_sym__list_item_token2] = ACTIONS(195),
    [aux_sym__list_item_token3] = ACTIONS(195),
    [anon_sym_LBRACK_COMMA] = ACTIONS(195),
    [aux_sym_code_token1] = ACTIONS(197),
    [anon_sym_SLASH_SLASH] = ACTIONS(195),
    [anon_sym_image_COLON_COLON] = ACTIONS(195),
    [aux_sym_url_token1] = ACTIONS(197),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(195),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(195),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(195),
    [anon_sym_LT_LT] = ACTIONS(195),
    [anon_sym_audio_COLON_COLON] = ACTIONS(195),
    [anon_sym_video_COLON_COLON] = ACTIONS(195),
    [sym_emphasis] = ACTIONS(197),
    [sym_strong] = ACTIONS(197),
    [sym_monospace] = ACTIONS(197),
    [sym_superscript] = ACTIONS(197),
    [sym_subscript] = ACTIONS(195),
    [sym__blank] = ACTIONS(195),
    [sym__empty] = ACTIONS(195),
    [sym__sp] = ACTIONS(195),
    [sym__nbsp] = ACTIONS(195),
    [sym__zwsp] = ACTIONS(195),
    [sym__wj] = ACTIONS(195),
    [sym__apos] = ACTIONS(195),
    [sym__quot] = ACTIONS(195),
    [sym__lsquo] = ACTIONS(195),
    [sym__rsquo] = ACTIONS(195),
    [sym__ldquo] = ACTIONS(195),
    [sym__rdquo] = ACTIONS(195),
    [sym__deg] = ACTIONS(195),
    [sym__plus] = ACTIONS(195),
    [sym__brvbar] = ACTIONS(195),
    [sym__vbar] = ACTIONS(195),
    [sym__amp] = ACTIONS(195),
    [sym__lt] = ACTIONS(195),
    [sym__gt] = ACTIONS(195),
    [sym__startsb] = ACTIONS(195),
    [sym__endsb] = ACTIONS(195),
    [sym__caret] = ACTIONS(195),
    [sym__asterisk] = ACTIONS(195),
    [sym__tilde] = ACTIONS(195),
    [sym__backslash] = ACTIONS(195),
    [sym__backtick] = ACTIONS(195),
    [sym__two_colons] = ACTIONS(195),
    [sym__two_semicolons] = ACTIONS(195),
    [sym__cpp] = ACTIONS(195),
    [sym__pp] = ACTIONS(195),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_title] = ACTIONS(199),
    [anon_sym_NOTE_COLON] = ACTIONS(201),
    [anon_sym_TIP_COLON] = ACTIONS(199),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(199),
    [anon_sym_CAUTION_COLON] = ACTIONS(199),
    [anon_sym_WARNING_COLON] = ACTIONS(199),
    [aux_sym__list_item_token1] = ACTIONS(201),
    [aux_sym__list_item_token2] = ACTIONS(199),
    [aux_sym__list_item_token3] = ACTIONS(199),
    [anon_sym_LBRACK_COMMA] = ACTIONS(199),
    [aux_sym_code_token1] = ACTIONS(201),
    [anon_sym_SLASH_SLASH] = ACTIONS(199),
    [anon_sym_image_COLON_COLON] = ACTIONS(199),
    [aux_sym_url_token1] = ACTIONS(201),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(199),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(199),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(199),
    [anon_sym_LT_LT] = ACTIONS(199),
    [anon_sym_audio_COLON_COLON] = ACTIONS(199),
    [anon_sym_video_COLON_COLON] = ACTIONS(199),
    [sym_emphasis] = ACTIONS(201),
    [sym_strong] = ACTIONS(201),
    [sym_monospace] = ACTIONS(201),
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(199),
    [sym__blank] = ACTIONS(199),
    [sym__empty] = ACTIONS(199),
    [sym__sp] = ACTIONS(199),
    [sym__nbsp] = ACTIONS(199),
    [sym__zwsp] = ACTIONS(199),
    [sym__wj] = ACTIONS(199),
    [sym__apos] = ACTIONS(199),
    [sym__quot] = ACTIONS(199),
    [sym__lsquo] = ACTIONS(199),
    [sym__rsquo] = ACTIONS(199),
    [sym__ldquo] = ACTIONS(199),
    [sym__rdquo] = ACTIONS(199),
    [sym__deg] = ACTIONS(199),
    [sym__plus] = ACTIONS(199),
    [sym__brvbar] = ACTIONS(199),
    [sym__vbar] = ACTIONS(199),
    [sym__amp] = ACTIONS(199),
    [sym__lt] = ACTIONS(199),
    [sym__gt] = ACTIONS(199),
    [sym__startsb] = ACTIONS(199),
    [sym__endsb] = ACTIONS(199),
    [sym__caret] = ACTIONS(199),
    [sym__asterisk] = ACTIONS(199),
    [sym__tilde] = ACTIONS(199),
    [sym__backslash] = ACTIONS(199),
    [sym__backtick] = ACTIONS(199),
    [sym__two_colons] = ACTIONS(199),
    [sym__two_semicolons] = ACTIONS(199),
    [sym__cpp] = ACTIONS(199),
    [sym__pp] = ACTIONS(199),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_title] = ACTIONS(203),
    [anon_sym_NOTE_COLON] = ACTIONS(205),
    [anon_sym_TIP_COLON] = ACTIONS(203),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(203),
    [anon_sym_CAUTION_COLON] = ACTIONS(203),
    [anon_sym_WARNING_COLON] = ACTIONS(203),
    [aux_sym__list_item_token1] = ACTIONS(205),
    [aux_sym__list_item_token2] = ACTIONS(203),
    [aux_sym__list_item_token3] = ACTIONS(203),
    [anon_sym_LBRACK_COMMA] = ACTIONS(203),
    [aux_sym_code_token1] = ACTIONS(205),
    [anon_sym_SLASH_SLASH] = ACTIONS(203),
    [anon_sym_image_COLON_COLON] = ACTIONS(203),
    [aux_sym_url_token1] = ACTIONS(205),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(203),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(203),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(203),
    [anon_sym_audio_COLON_COLON] = ACTIONS(203),
    [anon_sym_video_COLON_COLON] = ACTIONS(203),
    [sym_emphasis] = ACTIONS(205),
    [sym_strong] = ACTIONS(205),
    [sym_monospace] = ACTIONS(205),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(203),
    [sym__blank] = ACTIONS(203),
    [sym__empty] = ACTIONS(203),
    [sym__sp] = ACTIONS(203),
    [sym__nbsp] = ACTIONS(203),
    [sym__zwsp] = ACTIONS(203),
    [sym__wj] = ACTIONS(203),
    [sym__apos] = ACTIONS(203),
    [sym__quot] = ACTIONS(203),
    [sym__lsquo] = ACTIONS(203),
    [sym__rsquo] = ACTIONS(203),
    [sym__ldquo] = ACTIONS(203),
    [sym__rdquo] = ACTIONS(203),
    [sym__deg] = ACTIONS(203),
    [sym__plus] = ACTIONS(203),
    [sym__brvbar] = ACTIONS(203),
    [sym__vbar] = ACTIONS(203),
    [sym__amp] = ACTIONS(203),
    [sym__lt] = ACTIONS(203),
    [sym__gt] = ACTIONS(203),
    [sym__startsb] = ACTIONS(203),
    [sym__endsb] = ACTIONS(203),
    [sym__caret] = ACTIONS(203),
    [sym__asterisk] = ACTIONS(203),
    [sym__tilde] = ACTIONS(203),
    [sym__backslash] = ACTIONS(203),
    [sym__backtick] = ACTIONS(203),
    [sym__two_colons] = ACTIONS(203),
    [sym__two_semicolons] = ACTIONS(203),
    [sym__cpp] = ACTIONS(203),
    [sym__pp] = ACTIONS(203),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_title] = ACTIONS(207),
    [anon_sym_NOTE_COLON] = ACTIONS(209),
    [anon_sym_TIP_COLON] = ACTIONS(207),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(207),
    [anon_sym_CAUTION_COLON] = ACTIONS(207),
    [anon_sym_WARNING_COLON] = ACTIONS(207),
    [aux_sym__list_item_token1] = ACTIONS(209),
    [aux_sym__list_item_token2] = ACTIONS(207),
    [aux_sym__list_item_token3] = ACTIONS(207),
    [anon_sym_LBRACK_COMMA] = ACTIONS(207),
    [aux_sym_code_token1] = ACTIONS(209),
    [anon_sym_SLASH_SLASH] = ACTIONS(207),
    [anon_sym_image_COLON_COLON] = ACTIONS(207),
    [aux_sym_url_token1] = ACTIONS(209),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(207),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(207),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_audio_COLON_COLON] = ACTIONS(207),
    [anon_sym_video_COLON_COLON] = ACTIONS(207),
    [sym_emphasis] = ACTIONS(209),
    [sym_strong] = ACTIONS(209),
    [sym_monospace] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(207),
    [sym__blank] = ACTIONS(207),
    [sym__empty] = ACTIONS(207),
    [sym__sp] = ACTIONS(207),
    [sym__nbsp] = ACTIONS(207),
    [sym__zwsp] = ACTIONS(207),
    [sym__wj] = ACTIONS(207),
    [sym__apos] = ACTIONS(207),
    [sym__quot] = ACTIONS(207),
    [sym__lsquo] = ACTIONS(207),
    [sym__rsquo] = ACTIONS(207),
    [sym__ldquo] = ACTIONS(207),
    [sym__rdquo] = ACTIONS(207),
    [sym__deg] = ACTIONS(207),
    [sym__plus] = ACTIONS(207),
    [sym__brvbar] = ACTIONS(207),
    [sym__vbar] = ACTIONS(207),
    [sym__amp] = ACTIONS(207),
    [sym__lt] = ACTIONS(207),
    [sym__gt] = ACTIONS(207),
    [sym__startsb] = ACTIONS(207),
    [sym__endsb] = ACTIONS(207),
    [sym__caret] = ACTIONS(207),
    [sym__asterisk] = ACTIONS(207),
    [sym__tilde] = ACTIONS(207),
    [sym__backslash] = ACTIONS(207),
    [sym__backtick] = ACTIONS(207),
    [sym__two_colons] = ACTIONS(207),
    [sym__two_semicolons] = ACTIONS(207),
    [sym__cpp] = ACTIONS(207),
    [sym__pp] = ACTIONS(207),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_title] = ACTIONS(211),
    [anon_sym_NOTE_COLON] = ACTIONS(213),
    [anon_sym_TIP_COLON] = ACTIONS(211),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(211),
    [anon_sym_CAUTION_COLON] = ACTIONS(211),
    [anon_sym_WARNING_COLON] = ACTIONS(211),
    [aux_sym__list_item_token1] = ACTIONS(213),
    [aux_sym__list_item_token2] = ACTIONS(211),
    [aux_sym__list_item_token3] = ACTIONS(211),
    [anon_sym_LBRACK_COMMA] = ACTIONS(211),
    [aux_sym_code_token1] = ACTIONS(213),
    [anon_sym_SLASH_SLASH] = ACTIONS(211),
    [anon_sym_image_COLON_COLON] = ACTIONS(211),
    [aux_sym_url_token1] = ACTIONS(213),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(211),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(211),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(211),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_audio_COLON_COLON] = ACTIONS(211),
    [anon_sym_video_COLON_COLON] = ACTIONS(211),
    [sym_emphasis] = ACTIONS(213),
    [sym_strong] = ACTIONS(213),
    [sym_monospace] = ACTIONS(213),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(211),
    [sym__blank] = ACTIONS(211),
    [sym__empty] = ACTIONS(211),
    [sym__sp] = ACTIONS(211),
    [sym__nbsp] = ACTIONS(211),
    [sym__zwsp] = ACTIONS(211),
    [sym__wj] = ACTIONS(211),
    [sym__apos] = ACTIONS(211),
    [sym__quot] = ACTIONS(211),
    [sym__lsquo] = ACTIONS(211),
    [sym__rsquo] = ACTIONS(211),
    [sym__ldquo] = ACTIONS(211),
    [sym__rdquo] = ACTIONS(211),
    [sym__deg] = ACTIONS(211),
    [sym__plus] = ACTIONS(211),
    [sym__brvbar] = ACTIONS(211),
    [sym__vbar] = ACTIONS(211),
    [sym__amp] = ACTIONS(211),
    [sym__lt] = ACTIONS(211),
    [sym__gt] = ACTIONS(211),
    [sym__startsb] = ACTIONS(211),
    [sym__endsb] = ACTIONS(211),
    [sym__caret] = ACTIONS(211),
    [sym__asterisk] = ACTIONS(211),
    [sym__tilde] = ACTIONS(211),
    [sym__backslash] = ACTIONS(211),
    [sym__backtick] = ACTIONS(211),
    [sym__two_colons] = ACTIONS(211),
    [sym__two_semicolons] = ACTIONS(211),
    [sym__cpp] = ACTIONS(211),
    [sym__pp] = ACTIONS(211),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_title] = ACTIONS(215),
    [anon_sym_NOTE_COLON] = ACTIONS(217),
    [anon_sym_TIP_COLON] = ACTIONS(215),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(215),
    [anon_sym_CAUTION_COLON] = ACTIONS(215),
    [anon_sym_WARNING_COLON] = ACTIONS(215),
    [aux_sym__list_item_token1] = ACTIONS(217),
    [aux_sym__list_item_token2] = ACTIONS(215),
    [aux_sym__list_item_token3] = ACTIONS(215),
    [anon_sym_LBRACK_COMMA] = ACTIONS(215),
    [aux_sym_code_token1] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_image_COLON_COLON] = ACTIONS(215),
    [aux_sym_url_token1] = ACTIONS(217),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(215),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(215),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(215),
    [anon_sym_audio_COLON_COLON] = ACTIONS(215),
    [anon_sym_video_COLON_COLON] = ACTIONS(215),
    [sym_emphasis] = ACTIONS(217),
    [sym_strong] = ACTIONS(217),
    [sym_monospace] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(215),
    [sym__blank] = ACTIONS(215),
    [sym__empty] = ACTIONS(215),
    [sym__sp] = ACTIONS(215),
    [sym__nbsp] = ACTIONS(215),
    [sym__zwsp] = ACTIONS(215),
    [sym__wj] = ACTIONS(215),
    [sym__apos] = ACTIONS(215),
    [sym__quot] = ACTIONS(215),
    [sym__lsquo] = ACTIONS(215),
    [sym__rsquo] = ACTIONS(215),
    [sym__ldquo] = ACTIONS(215),
    [sym__rdquo] = ACTIONS(215),
    [sym__deg] = ACTIONS(215),
    [sym__plus] = ACTIONS(215),
    [sym__brvbar] = ACTIONS(215),
    [sym__vbar] = ACTIONS(215),
    [sym__amp] = ACTIONS(215),
    [sym__lt] = ACTIONS(215),
    [sym__gt] = ACTIONS(215),
    [sym__startsb] = ACTIONS(215),
    [sym__endsb] = ACTIONS(215),
    [sym__caret] = ACTIONS(215),
    [sym__asterisk] = ACTIONS(215),
    [sym__tilde] = ACTIONS(215),
    [sym__backslash] = ACTIONS(215),
    [sym__backtick] = ACTIONS(215),
    [sym__two_colons] = ACTIONS(215),
    [sym__two_semicolons] = ACTIONS(215),
    [sym__cpp] = ACTIONS(215),
    [sym__pp] = ACTIONS(215),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_title] = ACTIONS(219),
    [anon_sym_NOTE_COLON] = ACTIONS(221),
    [anon_sym_TIP_COLON] = ACTIONS(219),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(219),
    [anon_sym_CAUTION_COLON] = ACTIONS(219),
    [anon_sym_WARNING_COLON] = ACTIONS(219),
    [aux_sym__list_item_token1] = ACTIONS(221),
    [aux_sym__list_item_token2] = ACTIONS(219),
    [aux_sym__list_item_token3] = ACTIONS(219),
    [anon_sym_LBRACK_COMMA] = ACTIONS(219),
    [aux_sym_code_token1] = ACTIONS(221),
    [anon_sym_SLASH_SLASH] = ACTIONS(219),
    [anon_sym_image_COLON_COLON] = ACTIONS(219),
    [aux_sym_url_token1] = ACTIONS(221),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(219),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(219),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(219),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_audio_COLON_COLON] = ACTIONS(219),
    [anon_sym_video_COLON_COLON] = ACTIONS(219),
    [sym_emphasis] = ACTIONS(221),
    [sym_strong] = ACTIONS(221),
    [sym_monospace] = ACTIONS(221),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(219),
    [sym__blank] = ACTIONS(219),
    [sym__empty] = ACTIONS(219),
    [sym__sp] = ACTIONS(219),
    [sym__nbsp] = ACTIONS(219),
    [sym__zwsp] = ACTIONS(219),
    [sym__wj] = ACTIONS(219),
    [sym__apos] = ACTIONS(219),
    [sym__quot] = ACTIONS(219),
    [sym__lsquo] = ACTIONS(219),
    [sym__rsquo] = ACTIONS(219),
    [sym__ldquo] = ACTIONS(219),
    [sym__rdquo] = ACTIONS(219),
    [sym__deg] = ACTIONS(219),
    [sym__plus] = ACTIONS(219),
    [sym__brvbar] = ACTIONS(219),
    [sym__vbar] = ACTIONS(219),
    [sym__amp] = ACTIONS(219),
    [sym__lt] = ACTIONS(219),
    [sym__gt] = ACTIONS(219),
    [sym__startsb] = ACTIONS(219),
    [sym__endsb] = ACTIONS(219),
    [sym__caret] = ACTIONS(219),
    [sym__asterisk] = ACTIONS(219),
    [sym__tilde] = ACTIONS(219),
    [sym__backslash] = ACTIONS(219),
    [sym__backtick] = ACTIONS(219),
    [sym__two_colons] = ACTIONS(219),
    [sym__two_semicolons] = ACTIONS(219),
    [sym__cpp] = ACTIONS(219),
    [sym__pp] = ACTIONS(219),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_title] = ACTIONS(223),
    [anon_sym_NOTE_COLON] = ACTIONS(225),
    [anon_sym_TIP_COLON] = ACTIONS(223),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(223),
    [anon_sym_CAUTION_COLON] = ACTIONS(223),
    [anon_sym_WARNING_COLON] = ACTIONS(223),
    [aux_sym__list_item_token1] = ACTIONS(225),
    [aux_sym__list_item_token2] = ACTIONS(223),
    [aux_sym__list_item_token3] = ACTIONS(223),
    [anon_sym_LBRACK_COMMA] = ACTIONS(223),
    [aux_sym_code_token1] = ACTIONS(225),
    [anon_sym_SLASH_SLASH] = ACTIONS(223),
    [anon_sym_image_COLON_COLON] = ACTIONS(223),
    [aux_sym_url_token1] = ACTIONS(225),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(223),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(223),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(223),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_audio_COLON_COLON] = ACTIONS(223),
    [anon_sym_video_COLON_COLON] = ACTIONS(223),
    [sym_emphasis] = ACTIONS(225),
    [sym_strong] = ACTIONS(225),
    [sym_monospace] = ACTIONS(225),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(223),
    [sym__blank] = ACTIONS(223),
    [sym__empty] = ACTIONS(223),
    [sym__sp] = ACTIONS(223),
    [sym__nbsp] = ACTIONS(223),
    [sym__zwsp] = ACTIONS(223),
    [sym__wj] = ACTIONS(223),
    [sym__apos] = ACTIONS(223),
    [sym__quot] = ACTIONS(223),
    [sym__lsquo] = ACTIONS(223),
    [sym__rsquo] = ACTIONS(223),
    [sym__ldquo] = ACTIONS(223),
    [sym__rdquo] = ACTIONS(223),
    [sym__deg] = ACTIONS(223),
    [sym__plus] = ACTIONS(223),
    [sym__brvbar] = ACTIONS(223),
    [sym__vbar] = ACTIONS(223),
    [sym__amp] = ACTIONS(223),
    [sym__lt] = ACTIONS(223),
    [sym__gt] = ACTIONS(223),
    [sym__startsb] = ACTIONS(223),
    [sym__endsb] = ACTIONS(223),
    [sym__caret] = ACTIONS(223),
    [sym__asterisk] = ACTIONS(223),
    [sym__tilde] = ACTIONS(223),
    [sym__backslash] = ACTIONS(223),
    [sym__backtick] = ACTIONS(223),
    [sym__two_colons] = ACTIONS(223),
    [sym__two_semicolons] = ACTIONS(223),
    [sym__cpp] = ACTIONS(223),
    [sym__pp] = ACTIONS(223),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_title] = ACTIONS(227),
    [anon_sym_NOTE_COLON] = ACTIONS(229),
    [anon_sym_TIP_COLON] = ACTIONS(227),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(227),
    [anon_sym_CAUTION_COLON] = ACTIONS(227),
    [anon_sym_WARNING_COLON] = ACTIONS(227),
    [aux_sym__list_item_token1] = ACTIONS(229),
    [aux_sym__list_item_token2] = ACTIONS(227),
    [aux_sym__list_item_token3] = ACTIONS(227),
    [anon_sym_LBRACK_COMMA] = ACTIONS(227),
    [aux_sym_code_token1] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_image_COLON_COLON] = ACTIONS(227),
    [aux_sym_url_token1] = ACTIONS(229),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(227),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(227),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(227),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_audio_COLON_COLON] = ACTIONS(227),
    [anon_sym_video_COLON_COLON] = ACTIONS(227),
    [sym_emphasis] = ACTIONS(229),
    [sym_strong] = ACTIONS(229),
    [sym_monospace] = ACTIONS(229),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(227),
    [sym__blank] = ACTIONS(227),
    [sym__empty] = ACTIONS(227),
    [sym__sp] = ACTIONS(227),
    [sym__nbsp] = ACTIONS(227),
    [sym__zwsp] = ACTIONS(227),
    [sym__wj] = ACTIONS(227),
    [sym__apos] = ACTIONS(227),
    [sym__quot] = ACTIONS(227),
    [sym__lsquo] = ACTIONS(227),
    [sym__rsquo] = ACTIONS(227),
    [sym__ldquo] = ACTIONS(227),
    [sym__rdquo] = ACTIONS(227),
    [sym__deg] = ACTIONS(227),
    [sym__plus] = ACTIONS(227),
    [sym__brvbar] = ACTIONS(227),
    [sym__vbar] = ACTIONS(227),
    [sym__amp] = ACTIONS(227),
    [sym__lt] = ACTIONS(227),
    [sym__gt] = ACTIONS(227),
    [sym__startsb] = ACTIONS(227),
    [sym__endsb] = ACTIONS(227),
    [sym__caret] = ACTIONS(227),
    [sym__asterisk] = ACTIONS(227),
    [sym__tilde] = ACTIONS(227),
    [sym__backslash] = ACTIONS(227),
    [sym__backtick] = ACTIONS(227),
    [sym__two_colons] = ACTIONS(227),
    [sym__two_semicolons] = ACTIONS(227),
    [sym__cpp] = ACTIONS(227),
    [sym__pp] = ACTIONS(227),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_title] = ACTIONS(231),
    [anon_sym_NOTE_COLON] = ACTIONS(233),
    [anon_sym_TIP_COLON] = ACTIONS(231),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(231),
    [anon_sym_CAUTION_COLON] = ACTIONS(231),
    [anon_sym_WARNING_COLON] = ACTIONS(231),
    [aux_sym__list_item_token1] = ACTIONS(233),
    [aux_sym__list_item_token2] = ACTIONS(231),
    [aux_sym__list_item_token3] = ACTIONS(231),
    [anon_sym_LBRACK_COMMA] = ACTIONS(231),
    [aux_sym_code_token1] = ACTIONS(233),
    [anon_sym_SLASH_SLASH] = ACTIONS(231),
    [anon_sym_image_COLON_COLON] = ACTIONS(231),
    [aux_sym_url_token1] = ACTIONS(233),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(231),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(231),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_audio_COLON_COLON] = ACTIONS(231),
    [anon_sym_video_COLON_COLON] = ACTIONS(231),
    [sym_emphasis] = ACTIONS(233),
    [sym_strong] = ACTIONS(233),
    [sym_monospace] = ACTIONS(233),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(231),
    [sym__blank] = ACTIONS(231),
    [sym__empty] = ACTIONS(231),
    [sym__sp] = ACTIONS(231),
    [sym__nbsp] = ACTIONS(231),
    [sym__zwsp] = ACTIONS(231),
    [sym__wj] = ACTIONS(231),
    [sym__apos] = ACTIONS(231),
    [sym__quot] = ACTIONS(231),
    [sym__lsquo] = ACTIONS(231),
    [sym__rsquo] = ACTIONS(231),
    [sym__ldquo] = ACTIONS(231),
    [sym__rdquo] = ACTIONS(231),
    [sym__deg] = ACTIONS(231),
    [sym__plus] = ACTIONS(231),
    [sym__brvbar] = ACTIONS(231),
    [sym__vbar] = ACTIONS(231),
    [sym__amp] = ACTIONS(231),
    [sym__lt] = ACTIONS(231),
    [sym__gt] = ACTIONS(231),
    [sym__startsb] = ACTIONS(231),
    [sym__endsb] = ACTIONS(231),
    [sym__caret] = ACTIONS(231),
    [sym__asterisk] = ACTIONS(231),
    [sym__tilde] = ACTIONS(231),
    [sym__backslash] = ACTIONS(231),
    [sym__backtick] = ACTIONS(231),
    [sym__two_colons] = ACTIONS(231),
    [sym__two_semicolons] = ACTIONS(231),
    [sym__cpp] = ACTIONS(231),
    [sym__pp] = ACTIONS(231),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_title] = ACTIONS(235),
    [anon_sym_NOTE_COLON] = ACTIONS(237),
    [anon_sym_TIP_COLON] = ACTIONS(235),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(235),
    [anon_sym_CAUTION_COLON] = ACTIONS(235),
    [anon_sym_WARNING_COLON] = ACTIONS(235),
    [aux_sym__list_item_token1] = ACTIONS(237),
    [aux_sym__list_item_token2] = ACTIONS(235),
    [aux_sym__list_item_token3] = ACTIONS(235),
    [anon_sym_LBRACK_COMMA] = ACTIONS(235),
    [aux_sym_code_token1] = ACTIONS(237),
    [anon_sym_SLASH_SLASH] = ACTIONS(235),
    [anon_sym_image_COLON_COLON] = ACTIONS(235),
    [aux_sym_url_token1] = ACTIONS(237),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(235),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(235),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(235),
    [anon_sym_LT_LT] = ACTIONS(235),
    [anon_sym_audio_COLON_COLON] = ACTIONS(235),
    [anon_sym_video_COLON_COLON] = ACTIONS(235),
    [sym_emphasis] = ACTIONS(237),
    [sym_strong] = ACTIONS(237),
    [sym_monospace] = ACTIONS(237),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(235),
    [sym__blank] = ACTIONS(235),
    [sym__empty] = ACTIONS(235),
    [sym__sp] = ACTIONS(235),
    [sym__nbsp] = ACTIONS(235),
    [sym__zwsp] = ACTIONS(235),
    [sym__wj] = ACTIONS(235),
    [sym__apos] = ACTIONS(235),
    [sym__quot] = ACTIONS(235),
    [sym__lsquo] = ACTIONS(235),
    [sym__rsquo] = ACTIONS(235),
    [sym__ldquo] = ACTIONS(235),
    [sym__rdquo] = ACTIONS(235),
    [sym__deg] = ACTIONS(235),
    [sym__plus] = ACTIONS(235),
    [sym__brvbar] = ACTIONS(235),
    [sym__vbar] = ACTIONS(235),
    [sym__amp] = ACTIONS(235),
    [sym__lt] = ACTIONS(235),
    [sym__gt] = ACTIONS(235),
    [sym__startsb] = ACTIONS(235),
    [sym__endsb] = ACTIONS(235),
    [sym__caret] = ACTIONS(235),
    [sym__asterisk] = ACTIONS(235),
    [sym__tilde] = ACTIONS(235),
    [sym__backslash] = ACTIONS(235),
    [sym__backtick] = ACTIONS(235),
    [sym__two_colons] = ACTIONS(235),
    [sym__two_semicolons] = ACTIONS(235),
    [sym__cpp] = ACTIONS(235),
    [sym__pp] = ACTIONS(235),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_title] = ACTIONS(239),
    [anon_sym_NOTE_COLON] = ACTIONS(241),
    [anon_sym_TIP_COLON] = ACTIONS(239),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(239),
    [anon_sym_CAUTION_COLON] = ACTIONS(239),
    [anon_sym_WARNING_COLON] = ACTIONS(239),
    [aux_sym__list_item_token1] = ACTIONS(241),
    [aux_sym__list_item_token2] = ACTIONS(239),
    [aux_sym__list_item_token3] = ACTIONS(239),
    [anon_sym_LBRACK_COMMA] = ACTIONS(239),
    [aux_sym_code_token1] = ACTIONS(241),
    [anon_sym_SLASH_SLASH] = ACTIONS(239),
    [anon_sym_image_COLON_COLON] = ACTIONS(239),
    [aux_sym_url_token1] = ACTIONS(241),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(239),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(239),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_audio_COLON_COLON] = ACTIONS(239),
    [anon_sym_video_COLON_COLON] = ACTIONS(239),
    [sym_emphasis] = ACTIONS(241),
    [sym_strong] = ACTIONS(241),
    [sym_monospace] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(239),
    [sym__blank] = ACTIONS(239),
    [sym__empty] = ACTIONS(239),
    [sym__sp] = ACTIONS(239),
    [sym__nbsp] = ACTIONS(239),
    [sym__zwsp] = ACTIONS(239),
    [sym__wj] = ACTIONS(239),
    [sym__apos] = ACTIONS(239),
    [sym__quot] = ACTIONS(239),
    [sym__lsquo] = ACTIONS(239),
    [sym__rsquo] = ACTIONS(239),
    [sym__ldquo] = ACTIONS(239),
    [sym__rdquo] = ACTIONS(239),
    [sym__deg] = ACTIONS(239),
    [sym__plus] = ACTIONS(239),
    [sym__brvbar] = ACTIONS(239),
    [sym__vbar] = ACTIONS(239),
    [sym__amp] = ACTIONS(239),
    [sym__lt] = ACTIONS(239),
    [sym__gt] = ACTIONS(239),
    [sym__startsb] = ACTIONS(239),
    [sym__endsb] = ACTIONS(239),
    [sym__caret] = ACTIONS(239),
    [sym__asterisk] = ACTIONS(239),
    [sym__tilde] = ACTIONS(239),
    [sym__backslash] = ACTIONS(239),
    [sym__backtick] = ACTIONS(239),
    [sym__two_colons] = ACTIONS(239),
    [sym__two_semicolons] = ACTIONS(239),
    [sym__cpp] = ACTIONS(239),
    [sym__pp] = ACTIONS(239),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_title] = ACTIONS(243),
    [anon_sym_NOTE_COLON] = ACTIONS(245),
    [anon_sym_TIP_COLON] = ACTIONS(243),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(243),
    [anon_sym_CAUTION_COLON] = ACTIONS(243),
    [anon_sym_WARNING_COLON] = ACTIONS(243),
    [aux_sym__list_item_token1] = ACTIONS(245),
    [aux_sym__list_item_token2] = ACTIONS(243),
    [aux_sym__list_item_token3] = ACTIONS(243),
    [anon_sym_LBRACK_COMMA] = ACTIONS(243),
    [aux_sym_code_token1] = ACTIONS(245),
    [anon_sym_SLASH_SLASH] = ACTIONS(243),
    [anon_sym_image_COLON_COLON] = ACTIONS(243),
    [aux_sym_url_token1] = ACTIONS(245),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(243),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(243),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_audio_COLON_COLON] = ACTIONS(243),
    [anon_sym_video_COLON_COLON] = ACTIONS(243),
    [sym_emphasis] = ACTIONS(245),
    [sym_strong] = ACTIONS(245),
    [sym_monospace] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(243),
    [sym__blank] = ACTIONS(243),
    [sym__empty] = ACTIONS(243),
    [sym__sp] = ACTIONS(243),
    [sym__nbsp] = ACTIONS(243),
    [sym__zwsp] = ACTIONS(243),
    [sym__wj] = ACTIONS(243),
    [sym__apos] = ACTIONS(243),
    [sym__quot] = ACTIONS(243),
    [sym__lsquo] = ACTIONS(243),
    [sym__rsquo] = ACTIONS(243),
    [sym__ldquo] = ACTIONS(243),
    [sym__rdquo] = ACTIONS(243),
    [sym__deg] = ACTIONS(243),
    [sym__plus] = ACTIONS(243),
    [sym__brvbar] = ACTIONS(243),
    [sym__vbar] = ACTIONS(243),
    [sym__amp] = ACTIONS(243),
    [sym__lt] = ACTIONS(243),
    [sym__gt] = ACTIONS(243),
    [sym__startsb] = ACTIONS(243),
    [sym__endsb] = ACTIONS(243),
    [sym__caret] = ACTIONS(243),
    [sym__asterisk] = ACTIONS(243),
    [sym__tilde] = ACTIONS(243),
    [sym__backslash] = ACTIONS(243),
    [sym__backtick] = ACTIONS(243),
    [sym__two_colons] = ACTIONS(243),
    [sym__two_semicolons] = ACTIONS(243),
    [sym__cpp] = ACTIONS(243),
    [sym__pp] = ACTIONS(243),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_title] = ACTIONS(247),
    [anon_sym_NOTE_COLON] = ACTIONS(249),
    [anon_sym_TIP_COLON] = ACTIONS(247),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(247),
    [anon_sym_CAUTION_COLON] = ACTIONS(247),
    [anon_sym_WARNING_COLON] = ACTIONS(247),
    [aux_sym__list_item_token1] = ACTIONS(249),
    [aux_sym__list_item_token2] = ACTIONS(247),
    [aux_sym__list_item_token3] = ACTIONS(247),
    [anon_sym_LBRACK_COMMA] = ACTIONS(247),
    [aux_sym_code_token1] = ACTIONS(249),
    [anon_sym_SLASH_SLASH] = ACTIONS(247),
    [anon_sym_image_COLON_COLON] = ACTIONS(247),
    [aux_sym_url_token1] = ACTIONS(249),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(247),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(247),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_audio_COLON_COLON] = ACTIONS(247),
    [anon_sym_video_COLON_COLON] = ACTIONS(247),
    [sym_emphasis] = ACTIONS(249),
    [sym_strong] = ACTIONS(249),
    [sym_monospace] = ACTIONS(249),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(247),
    [sym__blank] = ACTIONS(247),
    [sym__empty] = ACTIONS(247),
    [sym__sp] = ACTIONS(247),
    [sym__nbsp] = ACTIONS(247),
    [sym__zwsp] = ACTIONS(247),
    [sym__wj] = ACTIONS(247),
    [sym__apos] = ACTIONS(247),
    [sym__quot] = ACTIONS(247),
    [sym__lsquo] = ACTIONS(247),
    [sym__rsquo] = ACTIONS(247),
    [sym__ldquo] = ACTIONS(247),
    [sym__rdquo] = ACTIONS(247),
    [sym__deg] = ACTIONS(247),
    [sym__plus] = ACTIONS(247),
    [sym__brvbar] = ACTIONS(247),
    [sym__vbar] = ACTIONS(247),
    [sym__amp] = ACTIONS(247),
    [sym__lt] = ACTIONS(247),
    [sym__gt] = ACTIONS(247),
    [sym__startsb] = ACTIONS(247),
    [sym__endsb] = ACTIONS(247),
    [sym__caret] = ACTIONS(247),
    [sym__asterisk] = ACTIONS(247),
    [sym__tilde] = ACTIONS(247),
    [sym__backslash] = ACTIONS(247),
    [sym__backtick] = ACTIONS(247),
    [sym__two_colons] = ACTIONS(247),
    [sym__two_semicolons] = ACTIONS(247),
    [sym__cpp] = ACTIONS(247),
    [sym__pp] = ACTIONS(247),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_title] = ACTIONS(251),
    [anon_sym_NOTE_COLON] = ACTIONS(253),
    [anon_sym_TIP_COLON] = ACTIONS(251),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(251),
    [anon_sym_CAUTION_COLON] = ACTIONS(251),
    [anon_sym_WARNING_COLON] = ACTIONS(251),
    [aux_sym__list_item_token1] = ACTIONS(253),
    [aux_sym__list_item_token2] = ACTIONS(251),
    [aux_sym__list_item_token3] = ACTIONS(251),
    [anon_sym_LBRACK_COMMA] = ACTIONS(251),
    [aux_sym_code_token1] = ACTIONS(253),
    [anon_sym_SLASH_SLASH] = ACTIONS(251),
    [anon_sym_image_COLON_COLON] = ACTIONS(251),
    [aux_sym_url_token1] = ACTIONS(253),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(251),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(251),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_audio_COLON_COLON] = ACTIONS(251),
    [anon_sym_video_COLON_COLON] = ACTIONS(251),
    [sym_emphasis] = ACTIONS(253),
    [sym_strong] = ACTIONS(253),
    [sym_monospace] = ACTIONS(253),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(251),
    [sym__blank] = ACTIONS(251),
    [sym__empty] = ACTIONS(251),
    [sym__sp] = ACTIONS(251),
    [sym__nbsp] = ACTIONS(251),
    [sym__zwsp] = ACTIONS(251),
    [sym__wj] = ACTIONS(251),
    [sym__apos] = ACTIONS(251),
    [sym__quot] = ACTIONS(251),
    [sym__lsquo] = ACTIONS(251),
    [sym__rsquo] = ACTIONS(251),
    [sym__ldquo] = ACTIONS(251),
    [sym__rdquo] = ACTIONS(251),
    [sym__deg] = ACTIONS(251),
    [sym__plus] = ACTIONS(251),
    [sym__brvbar] = ACTIONS(251),
    [sym__vbar] = ACTIONS(251),
    [sym__amp] = ACTIONS(251),
    [sym__lt] = ACTIONS(251),
    [sym__gt] = ACTIONS(251),
    [sym__startsb] = ACTIONS(251),
    [sym__endsb] = ACTIONS(251),
    [sym__caret] = ACTIONS(251),
    [sym__asterisk] = ACTIONS(251),
    [sym__tilde] = ACTIONS(251),
    [sym__backslash] = ACTIONS(251),
    [sym__backtick] = ACTIONS(251),
    [sym__two_colons] = ACTIONS(251),
    [sym__two_semicolons] = ACTIONS(251),
    [sym__cpp] = ACTIONS(251),
    [sym__pp] = ACTIONS(251),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_title] = ACTIONS(255),
    [anon_sym_NOTE_COLON] = ACTIONS(257),
    [anon_sym_TIP_COLON] = ACTIONS(255),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(255),
    [anon_sym_CAUTION_COLON] = ACTIONS(255),
    [anon_sym_WARNING_COLON] = ACTIONS(255),
    [aux_sym__list_item_token1] = ACTIONS(257),
    [aux_sym__list_item_token2] = ACTIONS(255),
    [aux_sym__list_item_token3] = ACTIONS(255),
    [anon_sym_LBRACK_COMMA] = ACTIONS(255),
    [aux_sym_code_token1] = ACTIONS(257),
    [anon_sym_SLASH_SLASH] = ACTIONS(255),
    [anon_sym_image_COLON_COLON] = ACTIONS(255),
    [aux_sym_url_token1] = ACTIONS(257),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(255),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(255),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_audio_COLON_COLON] = ACTIONS(255),
    [anon_sym_video_COLON_COLON] = ACTIONS(255),
    [sym_emphasis] = ACTIONS(257),
    [sym_strong] = ACTIONS(257),
    [sym_monospace] = ACTIONS(257),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(255),
    [sym__blank] = ACTIONS(255),
    [sym__empty] = ACTIONS(255),
    [sym__sp] = ACTIONS(255),
    [sym__nbsp] = ACTIONS(255),
    [sym__zwsp] = ACTIONS(255),
    [sym__wj] = ACTIONS(255),
    [sym__apos] = ACTIONS(255),
    [sym__quot] = ACTIONS(255),
    [sym__lsquo] = ACTIONS(255),
    [sym__rsquo] = ACTIONS(255),
    [sym__ldquo] = ACTIONS(255),
    [sym__rdquo] = ACTIONS(255),
    [sym__deg] = ACTIONS(255),
    [sym__plus] = ACTIONS(255),
    [sym__brvbar] = ACTIONS(255),
    [sym__vbar] = ACTIONS(255),
    [sym__amp] = ACTIONS(255),
    [sym__lt] = ACTIONS(255),
    [sym__gt] = ACTIONS(255),
    [sym__startsb] = ACTIONS(255),
    [sym__endsb] = ACTIONS(255),
    [sym__caret] = ACTIONS(255),
    [sym__asterisk] = ACTIONS(255),
    [sym__tilde] = ACTIONS(255),
    [sym__backslash] = ACTIONS(255),
    [sym__backtick] = ACTIONS(255),
    [sym__two_colons] = ACTIONS(255),
    [sym__two_semicolons] = ACTIONS(255),
    [sym__cpp] = ACTIONS(255),
    [sym__pp] = ACTIONS(255),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_title] = ACTIONS(259),
    [anon_sym_NOTE_COLON] = ACTIONS(261),
    [anon_sym_TIP_COLON] = ACTIONS(259),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(259),
    [anon_sym_CAUTION_COLON] = ACTIONS(259),
    [anon_sym_WARNING_COLON] = ACTIONS(259),
    [aux_sym__list_item_token1] = ACTIONS(261),
    [aux_sym__list_item_token2] = ACTIONS(259),
    [aux_sym__list_item_token3] = ACTIONS(259),
    [anon_sym_LBRACK_COMMA] = ACTIONS(259),
    [aux_sym_code_token1] = ACTIONS(261),
    [anon_sym_SLASH_SLASH] = ACTIONS(259),
    [anon_sym_image_COLON_COLON] = ACTIONS(259),
    [aux_sym_url_token1] = ACTIONS(261),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(259),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(259),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_audio_COLON_COLON] = ACTIONS(259),
    [anon_sym_video_COLON_COLON] = ACTIONS(259),
    [sym_emphasis] = ACTIONS(261),
    [sym_strong] = ACTIONS(261),
    [sym_monospace] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(259),
    [sym__blank] = ACTIONS(259),
    [sym__empty] = ACTIONS(259),
    [sym__sp] = ACTIONS(259),
    [sym__nbsp] = ACTIONS(259),
    [sym__zwsp] = ACTIONS(259),
    [sym__wj] = ACTIONS(259),
    [sym__apos] = ACTIONS(259),
    [sym__quot] = ACTIONS(259),
    [sym__lsquo] = ACTIONS(259),
    [sym__rsquo] = ACTIONS(259),
    [sym__ldquo] = ACTIONS(259),
    [sym__rdquo] = ACTIONS(259),
    [sym__deg] = ACTIONS(259),
    [sym__plus] = ACTIONS(259),
    [sym__brvbar] = ACTIONS(259),
    [sym__vbar] = ACTIONS(259),
    [sym__amp] = ACTIONS(259),
    [sym__lt] = ACTIONS(259),
    [sym__gt] = ACTIONS(259),
    [sym__startsb] = ACTIONS(259),
    [sym__endsb] = ACTIONS(259),
    [sym__caret] = ACTIONS(259),
    [sym__asterisk] = ACTIONS(259),
    [sym__tilde] = ACTIONS(259),
    [sym__backslash] = ACTIONS(259),
    [sym__backtick] = ACTIONS(259),
    [sym__two_colons] = ACTIONS(259),
    [sym__two_semicolons] = ACTIONS(259),
    [sym__cpp] = ACTIONS(259),
    [sym__pp] = ACTIONS(259),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_title] = ACTIONS(263),
    [anon_sym_NOTE_COLON] = ACTIONS(265),
    [anon_sym_TIP_COLON] = ACTIONS(263),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(263),
    [anon_sym_CAUTION_COLON] = ACTIONS(263),
    [anon_sym_WARNING_COLON] = ACTIONS(263),
    [aux_sym__list_item_token1] = ACTIONS(265),
    [aux_sym__list_item_token2] = ACTIONS(263),
    [aux_sym__list_item_token3] = ACTIONS(263),
    [anon_sym_LBRACK_COMMA] = ACTIONS(263),
    [aux_sym_code_token1] = ACTIONS(265),
    [anon_sym_SLASH_SLASH] = ACTIONS(263),
    [anon_sym_image_COLON_COLON] = ACTIONS(263),
    [aux_sym_url_token1] = ACTIONS(265),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(263),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(263),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_audio_COLON_COLON] = ACTIONS(263),
    [anon_sym_video_COLON_COLON] = ACTIONS(263),
    [sym_emphasis] = ACTIONS(265),
    [sym_strong] = ACTIONS(265),
    [sym_monospace] = ACTIONS(265),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(263),
    [sym__blank] = ACTIONS(263),
    [sym__empty] = ACTIONS(263),
    [sym__sp] = ACTIONS(263),
    [sym__nbsp] = ACTIONS(263),
    [sym__zwsp] = ACTIONS(263),
    [sym__wj] = ACTIONS(263),
    [sym__apos] = ACTIONS(263),
    [sym__quot] = ACTIONS(263),
    [sym__lsquo] = ACTIONS(263),
    [sym__rsquo] = ACTIONS(263),
    [sym__ldquo] = ACTIONS(263),
    [sym__rdquo] = ACTIONS(263),
    [sym__deg] = ACTIONS(263),
    [sym__plus] = ACTIONS(263),
    [sym__brvbar] = ACTIONS(263),
    [sym__vbar] = ACTIONS(263),
    [sym__amp] = ACTIONS(263),
    [sym__lt] = ACTIONS(263),
    [sym__gt] = ACTIONS(263),
    [sym__startsb] = ACTIONS(263),
    [sym__endsb] = ACTIONS(263),
    [sym__caret] = ACTIONS(263),
    [sym__asterisk] = ACTIONS(263),
    [sym__tilde] = ACTIONS(263),
    [sym__backslash] = ACTIONS(263),
    [sym__backtick] = ACTIONS(263),
    [sym__two_colons] = ACTIONS(263),
    [sym__two_semicolons] = ACTIONS(263),
    [sym__cpp] = ACTIONS(263),
    [sym__pp] = ACTIONS(263),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym_title] = ACTIONS(267),
    [anon_sym_NOTE_COLON] = ACTIONS(269),
    [anon_sym_TIP_COLON] = ACTIONS(267),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(267),
    [anon_sym_CAUTION_COLON] = ACTIONS(267),
    [anon_sym_WARNING_COLON] = ACTIONS(267),
    [aux_sym__list_item_token1] = ACTIONS(269),
    [aux_sym__list_item_token2] = ACTIONS(267),
    [aux_sym__list_item_token3] = ACTIONS(267),
    [anon_sym_LBRACK_COMMA] = ACTIONS(267),
    [aux_sym_code_token1] = ACTIONS(269),
    [anon_sym_SLASH_SLASH] = ACTIONS(267),
    [anon_sym_image_COLON_COLON] = ACTIONS(267),
    [aux_sym_url_token1] = ACTIONS(269),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(267),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(267),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(267),
    [anon_sym_LT_LT] = ACTIONS(267),
    [anon_sym_audio_COLON_COLON] = ACTIONS(267),
    [anon_sym_video_COLON_COLON] = ACTIONS(267),
    [sym_emphasis] = ACTIONS(269),
    [sym_strong] = ACTIONS(269),
    [sym_monospace] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(267),
    [sym__blank] = ACTIONS(267),
    [sym__empty] = ACTIONS(267),
    [sym__sp] = ACTIONS(267),
    [sym__nbsp] = ACTIONS(267),
    [sym__zwsp] = ACTIONS(267),
    [sym__wj] = ACTIONS(267),
    [sym__apos] = ACTIONS(267),
    [sym__quot] = ACTIONS(267),
    [sym__lsquo] = ACTIONS(267),
    [sym__rsquo] = ACTIONS(267),
    [sym__ldquo] = ACTIONS(267),
    [sym__rdquo] = ACTIONS(267),
    [sym__deg] = ACTIONS(267),
    [sym__plus] = ACTIONS(267),
    [sym__brvbar] = ACTIONS(267),
    [sym__vbar] = ACTIONS(267),
    [sym__amp] = ACTIONS(267),
    [sym__lt] = ACTIONS(267),
    [sym__gt] = ACTIONS(267),
    [sym__startsb] = ACTIONS(267),
    [sym__endsb] = ACTIONS(267),
    [sym__caret] = ACTIONS(267),
    [sym__asterisk] = ACTIONS(267),
    [sym__tilde] = ACTIONS(267),
    [sym__backslash] = ACTIONS(267),
    [sym__backtick] = ACTIONS(267),
    [sym__two_colons] = ACTIONS(267),
    [sym__two_semicolons] = ACTIONS(267),
    [sym__cpp] = ACTIONS(267),
    [sym__pp] = ACTIONS(267),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(271), 1,
      anon_sym_LF,
    STATE(40), 3,
      sym__inline_element,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(273), 6,
      aux_sym_code_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(275), 30,
      sym__blank,
      sym__empty,
      sym__sp,
      sym__nbsp,
      sym__zwsp,
      sym__wj,
      sym__apos,
      sym__quot,
      sym__lsquo,
      sym__rsquo,
      sym__ldquo,
      sym__rdquo,
      sym__deg,
      sym__plus,
      sym__brvbar,
      sym__vbar,
      sym__amp,
      sym__lt,
      sym__gt,
      sym__startsb,
      sym__endsb,
      sym__caret,
      sym__asterisk,
      sym__tilde,
      sym__backslash,
      sym__backtick,
      sym__two_colons,
      sym__two_semicolons,
      sym__cpp,
      sym__pp,
  [49] = 4,
    ACTIONS(277), 1,
      anon_sym_LF,
    STATE(40), 3,
      sym__inline_element,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(279), 6,
      aux_sym_code_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(282), 30,
      sym__blank,
      sym__empty,
      sym__sp,
      sym__nbsp,
      sym__zwsp,
      sym__wj,
      sym__apos,
      sym__quot,
      sym__lsquo,
      sym__rsquo,
      sym__ldquo,
      sym__rdquo,
      sym__deg,
      sym__plus,
      sym__brvbar,
      sym__vbar,
      sym__amp,
      sym__lt,
      sym__gt,
      sym__startsb,
      sym__endsb,
      sym__caret,
      sym__asterisk,
      sym__tilde,
      sym__backslash,
      sym__backtick,
      sym__two_colons,
      sym__two_semicolons,
      sym__cpp,
      sym__pp,
  [98] = 3,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(289), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 36,
      aux_sym_code_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
      sym__blank,
      sym__empty,
      sym__sp,
      sym__nbsp,
      sym__zwsp,
      sym__wj,
      sym__apos,
      sym__quot,
      sym__lsquo,
      sym__rsquo,
      sym__ldquo,
      sym__rdquo,
      sym__deg,
      sym__plus,
      sym__brvbar,
      sym__vbar,
      sym__amp,
      sym__lt,
      sym__gt,
      sym__startsb,
      sym__endsb,
      sym__caret,
      sym__asterisk,
      sym__tilde,
      sym__backslash,
      sym__backtick,
      sym__two_colons,
      sym__two_semicolons,
      sym__cpp,
      sym__pp,
  [143] = 2,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 36,
      aux_sym_code_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
      sym__blank,
      sym__empty,
      sym__sp,
      sym__nbsp,
      sym__zwsp,
      sym__wj,
      sym__apos,
      sym__quot,
      sym__lsquo,
      sym__rsquo,
      sym__ldquo,
      sym__rdquo,
      sym__deg,
      sym__plus,
      sym__brvbar,
      sym__vbar,
      sym__amp,
      sym__lt,
      sym__gt,
      sym__startsb,
      sym__endsb,
      sym__caret,
      sym__asterisk,
      sym__tilde,
      sym__backslash,
      sym__backtick,
      sym__two_colons,
      sym__two_semicolons,
      sym__cpp,
      sym__pp,
  [185] = 3,
    ACTIONS(295), 1,
      aux_sym_note_token1,
    ACTIONS(297), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(50), 1,
      aux_sym_code_repeat1,
  [195] = 3,
    ACTIONS(299), 1,
      aux_sym_note_token1,
    ACTIONS(301), 1,
      aux_sym_table_token1,
    STATE(48), 1,
      aux_sym_code_repeat1,
  [205] = 3,
    ACTIONS(295), 1,
      aux_sym_note_token1,
    ACTIONS(303), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(50), 1,
      aux_sym_code_repeat1,
  [215] = 3,
    ACTIONS(305), 1,
      aux_sym_note_token1,
    ACTIONS(307), 1,
      aux_sym_table_token1,
    STATE(44), 1,
      aux_sym_code_repeat1,
  [225] = 3,
    ACTIONS(309), 1,
      aux_sym_note_token1,
    ACTIONS(311), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(43), 1,
      aux_sym_code_repeat1,
  [235] = 3,
    ACTIONS(313), 1,
      aux_sym_note_token1,
    ACTIONS(316), 1,
      aux_sym_table_token1,
    STATE(48), 1,
      aux_sym_code_repeat1,
  [245] = 3,
    ACTIONS(318), 1,
      aux_sym_note_token1,
    ACTIONS(320), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(45), 1,
      aux_sym_code_repeat1,
  [255] = 3,
    ACTIONS(316), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(322), 1,
      aux_sym_note_token1,
    STATE(50), 1,
      aux_sym_code_repeat1,
  [265] = 2,
    ACTIONS(325), 1,
      anon_sym_,
    ACTIONS(327), 1,
      aux_sym_code_token1,
  [272] = 2,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_GT_GT,
  [279] = 2,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 1,
      aux_sym_audio_token1,
  [286] = 2,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 1,
      aux_sym_audio_token1,
  [293] = 2,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    ACTIONS(343), 1,
      aux_sym_footnote_token1,
  [300] = 2,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    ACTIONS(347), 1,
      aux_sym_kbd_token1,
  [307] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      aux_sym_image_token2,
  [314] = 2,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(355), 1,
      aux_sym_image_token2,
  [321] = 2,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(359), 1,
      aux_sym_audio_token1,
  [328] = 2,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    ACTIONS(363), 1,
      aux_sym_audio_token1,
  [335] = 1,
    ACTIONS(365), 1,
      anon_sym_RBRACK_LF,
  [339] = 1,
    ACTIONS(367), 1,
      aux_sym_image_token2,
  [343] = 1,
    ACTIONS(369), 1,
      aux_sym_tip_token1,
  [347] = 1,
    ACTIONS(371), 1,
      aux_sym_code_token1,
  [351] = 1,
    ACTIONS(373), 1,
      aux_sym_note_token1,
  [355] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
  [359] = 1,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
  [363] = 1,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
  [367] = 1,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
  [371] = 1,
    ACTIONS(383), 1,
      anon_sym_RBRACK_LF,
  [375] = 1,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
  [379] = 1,
    ACTIONS(387), 1,
      aux_sym_code_token2,
  [383] = 1,
    ACTIONS(389), 1,
      aux_sym_image_token2,
  [387] = 1,
    ACTIONS(391), 1,
      anon_sym_RBRACK_LF,
  [391] = 1,
    ACTIONS(393), 1,
      aux_sym_tip_token1,
  [395] = 1,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
  [399] = 1,
    ACTIONS(397), 1,
      aux_sym_code_token1,
  [403] = 1,
    ACTIONS(399), 1,
      aux_sym_code_token1,
  [407] = 1,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
  [411] = 1,
    ACTIONS(403), 1,
      anon_sym_LF,
  [415] = 1,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
  [419] = 1,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
  [423] = 1,
    ACTIONS(409), 1,
      aux_sym_code_token2,
  [427] = 1,
    ACTIONS(411), 1,
      aux_sym_tip_token1,
  [431] = 1,
    ACTIONS(413), 1,
      aux_sym_image_token1,
  [435] = 1,
    ACTIONS(415), 1,
      aux_sym_code_token2,
  [439] = 1,
    ACTIONS(417), 1,
      aux_sym_note_token1,
  [443] = 1,
    ACTIONS(419), 1,
      anon_sym_LBRACK,
  [447] = 1,
    ACTIONS(421), 1,
      anon_sym_LBRACK,
  [451] = 1,
    ACTIONS(423), 1,
      anon_sym_,
  [455] = 1,
    ACTIONS(425), 1,
      aux_sym_tip_token1,
  [459] = 1,
    ACTIONS(427), 1,
      aux_sym_code_token2,
  [463] = 1,
    ACTIONS(429), 1,
      aux_sym_tip_token1,
  [467] = 1,
    ACTIONS(431), 1,
      aux_sym_tip_token1,
  [471] = 1,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(39)] = 0,
  [SMALL_STATE(40)] = 49,
  [SMALL_STATE(41)] = 98,
  [SMALL_STATE(42)] = 143,
  [SMALL_STATE(43)] = 185,
  [SMALL_STATE(44)] = 195,
  [SMALL_STATE(45)] = 205,
  [SMALL_STATE(46)] = 215,
  [SMALL_STATE(47)] = 225,
  [SMALL_STATE(48)] = 235,
  [SMALL_STATE(49)] = 245,
  [SMALL_STATE(50)] = 255,
  [SMALL_STATE(51)] = 265,
  [SMALL_STATE(52)] = 272,
  [SMALL_STATE(53)] = 279,
  [SMALL_STATE(54)] = 286,
  [SMALL_STATE(55)] = 293,
  [SMALL_STATE(56)] = 300,
  [SMALL_STATE(57)] = 307,
  [SMALL_STATE(58)] = 314,
  [SMALL_STATE(59)] = 321,
  [SMALL_STATE(60)] = 328,
  [SMALL_STATE(61)] = 335,
  [SMALL_STATE(62)] = 339,
  [SMALL_STATE(63)] = 343,
  [SMALL_STATE(64)] = 347,
  [SMALL_STATE(65)] = 351,
  [SMALL_STATE(66)] = 355,
  [SMALL_STATE(67)] = 359,
  [SMALL_STATE(68)] = 363,
  [SMALL_STATE(69)] = 367,
  [SMALL_STATE(70)] = 371,
  [SMALL_STATE(71)] = 375,
  [SMALL_STATE(72)] = 379,
  [SMALL_STATE(73)] = 383,
  [SMALL_STATE(74)] = 387,
  [SMALL_STATE(75)] = 391,
  [SMALL_STATE(76)] = 395,
  [SMALL_STATE(77)] = 399,
  [SMALL_STATE(78)] = 403,
  [SMALL_STATE(79)] = 407,
  [SMALL_STATE(80)] = 411,
  [SMALL_STATE(81)] = 415,
  [SMALL_STATE(82)] = 419,
  [SMALL_STATE(83)] = 423,
  [SMALL_STATE(84)] = 427,
  [SMALL_STATE(85)] = 431,
  [SMALL_STATE(86)] = 435,
  [SMALL_STATE(87)] = 439,
  [SMALL_STATE(88)] = 443,
  [SMALL_STATE(89)] = 447,
  [SMALL_STATE(90)] = 451,
  [SMALL_STATE(91)] = 455,
  [SMALL_STATE(92)] = 459,
  [SMALL_STATE(93)] = 463,
  [SMALL_STATE(94)] = 467,
  [SMALL_STATE(95)] = 471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(90),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(90),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 5, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 5, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 3, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 3, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(40),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(42),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(48),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(50),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [375] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
