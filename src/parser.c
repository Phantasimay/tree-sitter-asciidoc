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
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 41
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
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
  anon_sym_xref_COLON = 35,
  anon_sym_COLON_COLON = 36,
  anon_sym_audio_COLON_COLON = 37,
  aux_sym_audio_token1 = 38,
  anon_sym_video_COLON_COLON = 39,
  sym_emphasis = 40,
  sym_strong = 41,
  sym_monospace = 42,
  sym_superscript = 43,
  sym_subscript = 44,
  sym__blank = 45,
  sym__empty = 46,
  sym__sp = 47,
  sym__nbsp = 48,
  sym__zwsp = 49,
  sym__wj = 50,
  sym__apos = 51,
  sym__quot = 52,
  sym__lsquo = 53,
  sym__rsquo = 54,
  sym__ldquo = 55,
  sym__rdquo = 56,
  sym__deg = 57,
  sym__plus = 58,
  sym__brvbar = 59,
  sym__vbar = 60,
  sym__amp = 61,
  sym__lt = 62,
  sym__gt = 63,
  sym__startsb = 64,
  sym__endsb = 65,
  sym__caret = 66,
  sym__asterisk = 67,
  sym__tilde = 68,
  sym__backslash = 69,
  sym__backtick = 70,
  sym__two_colons = 71,
  sym__two_semicolons = 72,
  sym__cpp = 73,
  sym__pp = 74,
  sym_document = 75,
  sym__block = 76,
  sym__admonitions = 77,
  sym_note = 78,
  sym_tip = 79,
  sym_important = 80,
  sym_caution = 81,
  sym_warning = 82,
  sym_list = 83,
  sym__list_item = 84,
  sym_code = 85,
  sym_comment = 86,
  sym_image = 87,
  sym_url = 88,
  sym_footnote = 89,
  sym_kbd = 90,
  sym_table = 91,
  sym_xref = 92,
  sym__inline_xref = 93,
  sym__xref = 94,
  sym_description_list = 95,
  sym_audio = 96,
  sym_video = 97,
  sym_paragraph = 98,
  sym__inline_element = 99,
  sym_replacement = 100,
  aux_sym_document_repeat1 = 101,
  aux_sym_list_repeat1 = 102,
  aux_sym_code_repeat1 = 103,
  aux_sym_paragraph_repeat1 = 104,
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
  [anon_sym_xref_COLON] = "xref:",
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
  [sym__inline_xref] = "_inline_xref",
  [sym__xref] = "_xref",
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
  [anon_sym_xref_COLON] = anon_sym_xref_COLON,
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
  [sym__inline_xref] = sym__inline_xref,
  [sym__xref] = sym__xref,
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
  [anon_sym_xref_COLON] = {
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
  [sym__inline_xref] = {
    .visible = false,
    .named = true,
  },
  [sym__xref] = {
    .visible = false,
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
  [50] = 50,
  [51] = 51,
  [52] = 48,
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
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(202);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == ',') ADVANCE(383);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == 'I') ADVANCE(251);
      if (lookahead == 'N') ADVANCE(256);
      if (lookahead == 'T') ADVANCE(248);
      if (lookahead == 'W') ADVANCE(244);
      if (lookahead == '[') ADVANCE(366);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'k') ADVANCE(269);
      if (lookahead == 'v') ADVANCE(280);
      if (lookahead == 'x') ADVANCE(288);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(379);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(359);
      if (lookahead == ':') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == '_') ADVANCE(358);
      if (lookahead == '`') ADVANCE(198);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '~') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
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
      if (lookahead == ' ') ADVANCE(363);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(387);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(393);
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
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
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
      if (lookahead == '/') ADVANCE(372);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(369);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '_') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(371);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '_') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(388);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(364);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(390);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(376);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(374);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(388);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(364);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(390);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '^') ADVANCE(396);
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
      if (lookahead == '_') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '`') ADVANCE(394);
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
      if (lookahead == '<') ADVANCE(382);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(381);
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
      if (lookahead == '>') ADVANCE(384);
      END_STATE();
    case 56:
      if (lookahead == '[') ADVANCE(376);
      END_STATE();
    case 57:
      if (lookahead == '[') ADVANCE(374);
      END_STATE();
    case 58:
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 59:
      if (lookahead == ']') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 60:
      if (lookahead == '^') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '`') ADVANCE(395);
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
      if (lookahead == '}') ADVANCE(417);
      END_STATE();
    case 164:
      if (lookahead == '}') ADVANCE(416);
      END_STATE();
    case 165:
      if (lookahead == '}') ADVANCE(428);
      END_STATE();
    case 166:
      if (lookahead == '}') ADVANCE(401);
      END_STATE();
    case 167:
      if (lookahead == '}') ADVANCE(404);
      END_STATE();
    case 168:
      if (lookahead == '}') ADVANCE(415);
      END_STATE();
    case 169:
      if (lookahead == '}') ADVANCE(427);
      END_STATE();
    case 170:
      if (lookahead == '}') ADVANCE(411);
      END_STATE();
    case 171:
      if (lookahead == '}') ADVANCE(405);
      END_STATE();
    case 172:
      if (lookahead == '}') ADVANCE(402);
      END_STATE();
    case 173:
      if (lookahead == '}') ADVANCE(412);
      END_STATE();
    case 174:
      if (lookahead == '}') ADVANCE(406);
      END_STATE();
    case 175:
      if (lookahead == '}') ADVANCE(414);
      END_STATE();
    case 176:
      if (lookahead == '}') ADVANCE(403);
      END_STATE();
    case 177:
      if (lookahead == '}') ADVANCE(399);
      END_STATE();
    case 178:
      if (lookahead == '}') ADVANCE(420);
      END_STATE();
    case 179:
      if (lookahead == '}') ADVANCE(400);
      END_STATE();
    case 180:
      if (lookahead == '}') ADVANCE(419);
      END_STATE();
    case 181:
      if (lookahead == '}') ADVANCE(409);
      END_STATE();
    case 182:
      if (lookahead == '}') ADVANCE(407);
      END_STATE();
    case 183:
      if (lookahead == '}') ADVANCE(410);
      END_STATE();
    case 184:
      if (lookahead == '}') ADVANCE(408);
      END_STATE();
    case 185:
      if (lookahead == '}') ADVANCE(422);
      END_STATE();
    case 186:
      if (lookahead == '}') ADVANCE(413);
      END_STATE();
    case 187:
      if (lookahead == '}') ADVANCE(418);
      END_STATE();
    case 188:
      if (lookahead == '}') ADVANCE(421);
      END_STATE();
    case 189:
      if (lookahead == '}') ADVANCE(424);
      END_STATE();
    case 190:
      if (lookahead == '}') ADVANCE(423);
      END_STATE();
    case 191:
      if (lookahead == '}') ADVANCE(425);
      END_STATE();
    case 192:
      if (lookahead == '}') ADVANCE(426);
      END_STATE();
    case 193:
      if (lookahead == '~') ADVANCE(398);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
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
      if (lookahead == 'C') ADVANCE(300);
      if (lookahead == 'I') ADVANCE(308);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'T') ADVANCE(305);
      if (lookahead == 'W') ADVANCE(301);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == '^') ADVANCE(42);
      if (lookahead == '_') ADVANCE(294);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'k') ADVANCE(326);
      if (lookahead == 'v') ADVANCE(337);
      if (lookahead == 'x') ADVANCE(345);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(199);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(200)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 201:
      if (eof) ADVANCE(202);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'C') ADVANCE(300);
      if (lookahead == 'I') ADVANCE(308);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == 'T') ADVANCE(305);
      if (lookahead == 'W') ADVANCE(301);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == ']') ADVANCE(2);
      if (lookahead == '^') ADVANCE(42);
      if (lookahead == '_') ADVANCE(294);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'k') ADVANCE(326);
      if (lookahead == 'v') ADVANCE(337);
      if (lookahead == 'x') ADVANCE(345);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(201)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\n') ADVANCE(380);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
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
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'E') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'G') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'M') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'N') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'N') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'N') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'N') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'O') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'O') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'O') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'P') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'P') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'R') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'R') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'T') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'T') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'T') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'T') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'U') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'a') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'b') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'd') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'd') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'm') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '.') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '_') ADVANCE(293);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(30);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(9);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(36);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(206);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(33);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'A') ADVANCE(324);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'A') ADVANCE(318);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'A') ADVANCE(311);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'E') ADVANCE(297);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'G') ADVANCE(353);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(317);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(309);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(315);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(316);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(304);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(306);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(323);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(350);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(320);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(319);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(312);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(314);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(295);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(310);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(322);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(303);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(307);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(302);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(355);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(321);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(335);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(329);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(336);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(333);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(296);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(334);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(351);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(344);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(298);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'g') ADVANCE(331);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(343);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(328);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(325);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(342);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(346);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(340);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(347);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(299);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(354);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(330);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(339);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 't') ADVANCE(332);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(327);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(32);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(11);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(37);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(34);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(13);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(35);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == ':') ADVANCE(15);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '_') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_token2);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '\n') ADVANCE(361);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(231);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(231);
      if (lookahead == ':') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_table_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '\n') ADVANCE(379);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '_') ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '`') ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '^') ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__blank);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__empty);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__nbsp);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__zwsp);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__wj);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__apos);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__quot);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__lsquo);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__rsquo);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__ldquo);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__rdquo);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__deg);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__plus);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__brvbar);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__vbar);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__amp);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__lt);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__gt);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__startsb);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__endsb);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__caret);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__asterisk);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__tilde);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__backslash);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__backtick);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__two_colons);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__two_semicolons);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__cpp);
      END_STATE();
    case 428:
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
  [39] = {.lex_state = 201},
  [40] = {.lex_state = 201},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 210},
  [46] = {.lex_state = 217},
  [47] = {.lex_state = 210},
  [48] = {.lex_state = 210},
  [49] = {.lex_state = 217},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 210},
  [52] = {.lex_state = 217},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 59},
  [58] = {.lex_state = 368},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 368},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 201},
  [64] = {.lex_state = 194},
  [65] = {.lex_state = 194},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 194},
  [68] = {.lex_state = 218},
  [69] = {.lex_state = 194},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 368},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 201},
  [79] = {.lex_state = 368},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 201},
  [83] = {.lex_state = 194},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 365},
  [93] = {.lex_state = 218},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 200},
  [98] = {.lex_state = 21},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 0},
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
    [anon_sym_xref_COLON] = ACTIONS(1),
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
    [sym_document] = STATE(70),
    [sym__block] = STATE(2),
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
    [sym__inline_xref] = STATE(22),
    [sym__xref] = STATE(22),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(41),
    [sym_replacement] = STATE(41),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(41),
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
    [anon_sym_xref_COLON] = ACTIONS(39),
    [anon_sym_audio_COLON_COLON] = ACTIONS(41),
    [anon_sym_video_COLON_COLON] = ACTIONS(43),
    [sym_emphasis] = ACTIONS(45),
    [sym_strong] = ACTIONS(45),
    [sym_monospace] = ACTIONS(45),
    [sym_superscript] = ACTIONS(45),
    [sym_subscript] = ACTIONS(47),
    [sym__blank] = ACTIONS(49),
    [sym__empty] = ACTIONS(49),
    [sym__sp] = ACTIONS(49),
    [sym__nbsp] = ACTIONS(49),
    [sym__zwsp] = ACTIONS(49),
    [sym__wj] = ACTIONS(49),
    [sym__apos] = ACTIONS(49),
    [sym__quot] = ACTIONS(49),
    [sym__lsquo] = ACTIONS(49),
    [sym__rsquo] = ACTIONS(49),
    [sym__ldquo] = ACTIONS(49),
    [sym__rdquo] = ACTIONS(49),
    [sym__deg] = ACTIONS(49),
    [sym__plus] = ACTIONS(49),
    [sym__brvbar] = ACTIONS(49),
    [sym__vbar] = ACTIONS(49),
    [sym__amp] = ACTIONS(49),
    [sym__lt] = ACTIONS(49),
    [sym__gt] = ACTIONS(49),
    [sym__startsb] = ACTIONS(49),
    [sym__endsb] = ACTIONS(49),
    [sym__caret] = ACTIONS(49),
    [sym__asterisk] = ACTIONS(49),
    [sym__tilde] = ACTIONS(49),
    [sym__backslash] = ACTIONS(49),
    [sym__backtick] = ACTIONS(49),
    [sym__two_colons] = ACTIONS(49),
    [sym__two_semicolons] = ACTIONS(49),
    [sym__cpp] = ACTIONS(49),
    [sym__pp] = ACTIONS(49),
  },
  [2] = {
    [sym__block] = STATE(3),
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
    [sym__inline_xref] = STATE(22),
    [sym__xref] = STATE(22),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(41),
    [sym_replacement] = STATE(41),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_title] = ACTIONS(53),
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
    [anon_sym_xref_COLON] = ACTIONS(39),
    [anon_sym_audio_COLON_COLON] = ACTIONS(41),
    [anon_sym_video_COLON_COLON] = ACTIONS(43),
    [sym_emphasis] = ACTIONS(45),
    [sym_strong] = ACTIONS(45),
    [sym_monospace] = ACTIONS(45),
    [sym_superscript] = ACTIONS(45),
    [sym_subscript] = ACTIONS(47),
    [sym__blank] = ACTIONS(49),
    [sym__empty] = ACTIONS(49),
    [sym__sp] = ACTIONS(49),
    [sym__nbsp] = ACTIONS(49),
    [sym__zwsp] = ACTIONS(49),
    [sym__wj] = ACTIONS(49),
    [sym__apos] = ACTIONS(49),
    [sym__quot] = ACTIONS(49),
    [sym__lsquo] = ACTIONS(49),
    [sym__rsquo] = ACTIONS(49),
    [sym__ldquo] = ACTIONS(49),
    [sym__rdquo] = ACTIONS(49),
    [sym__deg] = ACTIONS(49),
    [sym__plus] = ACTIONS(49),
    [sym__brvbar] = ACTIONS(49),
    [sym__vbar] = ACTIONS(49),
    [sym__amp] = ACTIONS(49),
    [sym__lt] = ACTIONS(49),
    [sym__gt] = ACTIONS(49),
    [sym__startsb] = ACTIONS(49),
    [sym__endsb] = ACTIONS(49),
    [sym__caret] = ACTIONS(49),
    [sym__asterisk] = ACTIONS(49),
    [sym__tilde] = ACTIONS(49),
    [sym__backslash] = ACTIONS(49),
    [sym__backtick] = ACTIONS(49),
    [sym__two_colons] = ACTIONS(49),
    [sym__two_semicolons] = ACTIONS(49),
    [sym__cpp] = ACTIONS(49),
    [sym__pp] = ACTIONS(49),
  },
  [3] = {
    [sym__block] = STATE(3),
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
    [sym__inline_xref] = STATE(22),
    [sym__xref] = STATE(22),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(41),
    [sym_replacement] = STATE(41),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_title] = ACTIONS(57),
    [anon_sym_NOTE_COLON] = ACTIONS(60),
    [anon_sym_TIP_COLON] = ACTIONS(63),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(66),
    [anon_sym_CAUTION_COLON] = ACTIONS(69),
    [anon_sym_WARNING_COLON] = ACTIONS(72),
    [aux_sym__list_item_token1] = ACTIONS(75),
    [aux_sym__list_item_token2] = ACTIONS(78),
    [aux_sym__list_item_token3] = ACTIONS(78),
    [anon_sym_LBRACK_COMMA] = ACTIONS(81),
    [aux_sym_code_token1] = ACTIONS(84),
    [anon_sym_SLASH_SLASH] = ACTIONS(87),
    [anon_sym_image_COLON_COLON] = ACTIONS(90),
    [aux_sym_url_token1] = ACTIONS(93),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(96),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(99),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(105),
    [anon_sym_xref_COLON] = ACTIONS(108),
    [anon_sym_audio_COLON_COLON] = ACTIONS(111),
    [anon_sym_video_COLON_COLON] = ACTIONS(114),
    [sym_emphasis] = ACTIONS(117),
    [sym_strong] = ACTIONS(117),
    [sym_monospace] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(120),
    [sym__blank] = ACTIONS(123),
    [sym__empty] = ACTIONS(123),
    [sym__sp] = ACTIONS(123),
    [sym__nbsp] = ACTIONS(123),
    [sym__zwsp] = ACTIONS(123),
    [sym__wj] = ACTIONS(123),
    [sym__apos] = ACTIONS(123),
    [sym__quot] = ACTIONS(123),
    [sym__lsquo] = ACTIONS(123),
    [sym__rsquo] = ACTIONS(123),
    [sym__ldquo] = ACTIONS(123),
    [sym__rdquo] = ACTIONS(123),
    [sym__deg] = ACTIONS(123),
    [sym__plus] = ACTIONS(123),
    [sym__brvbar] = ACTIONS(123),
    [sym__vbar] = ACTIONS(123),
    [sym__amp] = ACTIONS(123),
    [sym__lt] = ACTIONS(123),
    [sym__gt] = ACTIONS(123),
    [sym__startsb] = ACTIONS(123),
    [sym__endsb] = ACTIONS(123),
    [sym__caret] = ACTIONS(123),
    [sym__asterisk] = ACTIONS(123),
    [sym__tilde] = ACTIONS(123),
    [sym__backslash] = ACTIONS(123),
    [sym__backtick] = ACTIONS(123),
    [sym__two_colons] = ACTIONS(123),
    [sym__two_semicolons] = ACTIONS(123),
    [sym__cpp] = ACTIONS(123),
    [sym__pp] = ACTIONS(123),
  },
  [4] = {
    [sym__list_item] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_title] = ACTIONS(126),
    [anon_sym_NOTE_COLON] = ACTIONS(128),
    [anon_sym_TIP_COLON] = ACTIONS(126),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(126),
    [anon_sym_CAUTION_COLON] = ACTIONS(126),
    [anon_sym_WARNING_COLON] = ACTIONS(126),
    [aux_sym__list_item_token1] = ACTIONS(130),
    [aux_sym__list_item_token2] = ACTIONS(133),
    [aux_sym__list_item_token3] = ACTIONS(133),
    [anon_sym_LBRACK_COMMA] = ACTIONS(126),
    [aux_sym_code_token1] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_image_COLON_COLON] = ACTIONS(126),
    [aux_sym_url_token1] = ACTIONS(128),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(126),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(126),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(126),
    [anon_sym_xref_COLON] = ACTIONS(128),
    [anon_sym_audio_COLON_COLON] = ACTIONS(126),
    [anon_sym_video_COLON_COLON] = ACTIONS(126),
    [sym_emphasis] = ACTIONS(128),
    [sym_strong] = ACTIONS(128),
    [sym_monospace] = ACTIONS(128),
    [sym_superscript] = ACTIONS(128),
    [sym_subscript] = ACTIONS(126),
    [sym__blank] = ACTIONS(126),
    [sym__empty] = ACTIONS(126),
    [sym__sp] = ACTIONS(126),
    [sym__nbsp] = ACTIONS(126),
    [sym__zwsp] = ACTIONS(126),
    [sym__wj] = ACTIONS(126),
    [sym__apos] = ACTIONS(126),
    [sym__quot] = ACTIONS(126),
    [sym__lsquo] = ACTIONS(126),
    [sym__rsquo] = ACTIONS(126),
    [sym__ldquo] = ACTIONS(126),
    [sym__rdquo] = ACTIONS(126),
    [sym__deg] = ACTIONS(126),
    [sym__plus] = ACTIONS(126),
    [sym__brvbar] = ACTIONS(126),
    [sym__vbar] = ACTIONS(126),
    [sym__amp] = ACTIONS(126),
    [sym__lt] = ACTIONS(126),
    [sym__gt] = ACTIONS(126),
    [sym__startsb] = ACTIONS(126),
    [sym__endsb] = ACTIONS(126),
    [sym__caret] = ACTIONS(126),
    [sym__asterisk] = ACTIONS(126),
    [sym__tilde] = ACTIONS(126),
    [sym__backslash] = ACTIONS(126),
    [sym__backtick] = ACTIONS(126),
    [sym__two_colons] = ACTIONS(126),
    [sym__two_semicolons] = ACTIONS(126),
    [sym__cpp] = ACTIONS(126),
    [sym__pp] = ACTIONS(126),
  },
  [5] = {
    [sym__list_item] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_title] = ACTIONS(136),
    [anon_sym_NOTE_COLON] = ACTIONS(138),
    [anon_sym_TIP_COLON] = ACTIONS(136),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(136),
    [anon_sym_CAUTION_COLON] = ACTIONS(136),
    [anon_sym_WARNING_COLON] = ACTIONS(136),
    [aux_sym__list_item_token1] = ACTIONS(17),
    [aux_sym__list_item_token2] = ACTIONS(19),
    [aux_sym__list_item_token3] = ACTIONS(19),
    [anon_sym_LBRACK_COMMA] = ACTIONS(136),
    [aux_sym_code_token1] = ACTIONS(138),
    [anon_sym_SLASH_SLASH] = ACTIONS(136),
    [anon_sym_image_COLON_COLON] = ACTIONS(136),
    [aux_sym_url_token1] = ACTIONS(138),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(136),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(136),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_xref_COLON] = ACTIONS(138),
    [anon_sym_audio_COLON_COLON] = ACTIONS(136),
    [anon_sym_video_COLON_COLON] = ACTIONS(136),
    [sym_emphasis] = ACTIONS(138),
    [sym_strong] = ACTIONS(138),
    [sym_monospace] = ACTIONS(138),
    [sym_superscript] = ACTIONS(138),
    [sym_subscript] = ACTIONS(136),
    [sym__blank] = ACTIONS(136),
    [sym__empty] = ACTIONS(136),
    [sym__sp] = ACTIONS(136),
    [sym__nbsp] = ACTIONS(136),
    [sym__zwsp] = ACTIONS(136),
    [sym__wj] = ACTIONS(136),
    [sym__apos] = ACTIONS(136),
    [sym__quot] = ACTIONS(136),
    [sym__lsquo] = ACTIONS(136),
    [sym__rsquo] = ACTIONS(136),
    [sym__ldquo] = ACTIONS(136),
    [sym__rdquo] = ACTIONS(136),
    [sym__deg] = ACTIONS(136),
    [sym__plus] = ACTIONS(136),
    [sym__brvbar] = ACTIONS(136),
    [sym__vbar] = ACTIONS(136),
    [sym__amp] = ACTIONS(136),
    [sym__lt] = ACTIONS(136),
    [sym__gt] = ACTIONS(136),
    [sym__startsb] = ACTIONS(136),
    [sym__endsb] = ACTIONS(136),
    [sym__caret] = ACTIONS(136),
    [sym__asterisk] = ACTIONS(136),
    [sym__tilde] = ACTIONS(136),
    [sym__backslash] = ACTIONS(136),
    [sym__backtick] = ACTIONS(136),
    [sym__two_colons] = ACTIONS(136),
    [sym__two_semicolons] = ACTIONS(136),
    [sym__cpp] = ACTIONS(136),
    [sym__pp] = ACTIONS(136),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_title] = ACTIONS(140),
    [anon_sym_NOTE_COLON] = ACTIONS(142),
    [anon_sym_TIP_COLON] = ACTIONS(140),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(140),
    [anon_sym_CAUTION_COLON] = ACTIONS(140),
    [anon_sym_WARNING_COLON] = ACTIONS(140),
    [aux_sym__list_item_token1] = ACTIONS(142),
    [aux_sym__list_item_token2] = ACTIONS(140),
    [aux_sym__list_item_token3] = ACTIONS(140),
    [anon_sym_LBRACK_COMMA] = ACTIONS(140),
    [aux_sym_code_token1] = ACTIONS(142),
    [anon_sym_SLASH_SLASH] = ACTIONS(140),
    [anon_sym_image_COLON_COLON] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(144),
    [aux_sym_url_token1] = ACTIONS(142),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(140),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(140),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(140),
    [anon_sym_LT_LT] = ACTIONS(140),
    [anon_sym_xref_COLON] = ACTIONS(142),
    [anon_sym_audio_COLON_COLON] = ACTIONS(140),
    [anon_sym_video_COLON_COLON] = ACTIONS(140),
    [sym_emphasis] = ACTIONS(142),
    [sym_strong] = ACTIONS(142),
    [sym_monospace] = ACTIONS(142),
    [sym_superscript] = ACTIONS(142),
    [sym_subscript] = ACTIONS(140),
    [sym__blank] = ACTIONS(140),
    [sym__empty] = ACTIONS(140),
    [sym__sp] = ACTIONS(140),
    [sym__nbsp] = ACTIONS(140),
    [sym__zwsp] = ACTIONS(140),
    [sym__wj] = ACTIONS(140),
    [sym__apos] = ACTIONS(140),
    [sym__quot] = ACTIONS(140),
    [sym__lsquo] = ACTIONS(140),
    [sym__rsquo] = ACTIONS(140),
    [sym__ldquo] = ACTIONS(140),
    [sym__rdquo] = ACTIONS(140),
    [sym__deg] = ACTIONS(140),
    [sym__plus] = ACTIONS(140),
    [sym__brvbar] = ACTIONS(140),
    [sym__vbar] = ACTIONS(140),
    [sym__amp] = ACTIONS(140),
    [sym__lt] = ACTIONS(140),
    [sym__gt] = ACTIONS(140),
    [sym__startsb] = ACTIONS(140),
    [sym__endsb] = ACTIONS(140),
    [sym__caret] = ACTIONS(140),
    [sym__asterisk] = ACTIONS(140),
    [sym__tilde] = ACTIONS(140),
    [sym__backslash] = ACTIONS(140),
    [sym__backtick] = ACTIONS(140),
    [sym__two_colons] = ACTIONS(140),
    [sym__two_semicolons] = ACTIONS(140),
    [sym__cpp] = ACTIONS(140),
    [sym__pp] = ACTIONS(140),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_title] = ACTIONS(148),
    [anon_sym_NOTE_COLON] = ACTIONS(148),
    [anon_sym_] = ACTIONS(150),
    [anon_sym_TIP_COLON] = ACTIONS(148),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(148),
    [anon_sym_CAUTION_COLON] = ACTIONS(148),
    [anon_sym_WARNING_COLON] = ACTIONS(148),
    [aux_sym__list_item_token1] = ACTIONS(148),
    [aux_sym__list_item_token2] = ACTIONS(148),
    [aux_sym__list_item_token3] = ACTIONS(148),
    [anon_sym_LBRACK_COMMA] = ACTIONS(148),
    [aux_sym_code_token1] = ACTIONS(148),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_image_COLON_COLON] = ACTIONS(148),
    [aux_sym_url_token1] = ACTIONS(148),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(148),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(148),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(148),
    [anon_sym_LT_LT] = ACTIONS(148),
    [anon_sym_xref_COLON] = ACTIONS(148),
    [anon_sym_audio_COLON_COLON] = ACTIONS(148),
    [anon_sym_video_COLON_COLON] = ACTIONS(148),
    [sym_emphasis] = ACTIONS(148),
    [sym_strong] = ACTIONS(148),
    [sym_monospace] = ACTIONS(148),
    [sym_superscript] = ACTIONS(148),
    [sym_subscript] = ACTIONS(148),
    [sym__blank] = ACTIONS(148),
    [sym__empty] = ACTIONS(148),
    [sym__sp] = ACTIONS(148),
    [sym__nbsp] = ACTIONS(148),
    [sym__zwsp] = ACTIONS(148),
    [sym__wj] = ACTIONS(148),
    [sym__apos] = ACTIONS(148),
    [sym__quot] = ACTIONS(148),
    [sym__lsquo] = ACTIONS(148),
    [sym__rsquo] = ACTIONS(148),
    [sym__ldquo] = ACTIONS(148),
    [sym__rdquo] = ACTIONS(148),
    [sym__deg] = ACTIONS(148),
    [sym__plus] = ACTIONS(148),
    [sym__brvbar] = ACTIONS(148),
    [sym__vbar] = ACTIONS(148),
    [sym__amp] = ACTIONS(148),
    [sym__lt] = ACTIONS(148),
    [sym__gt] = ACTIONS(148),
    [sym__startsb] = ACTIONS(148),
    [sym__endsb] = ACTIONS(148),
    [sym__caret] = ACTIONS(148),
    [sym__asterisk] = ACTIONS(148),
    [sym__tilde] = ACTIONS(148),
    [sym__backslash] = ACTIONS(148),
    [sym__backtick] = ACTIONS(148),
    [sym__two_colons] = ACTIONS(148),
    [sym__two_semicolons] = ACTIONS(148),
    [sym__cpp] = ACTIONS(148),
    [sym__pp] = ACTIONS(148),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_title] = ACTIONS(152),
    [anon_sym_NOTE_COLON] = ACTIONS(154),
    [anon_sym_TIP_COLON] = ACTIONS(152),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(152),
    [anon_sym_CAUTION_COLON] = ACTIONS(152),
    [anon_sym_WARNING_COLON] = ACTIONS(152),
    [aux_sym__list_item_token1] = ACTIONS(154),
    [aux_sym__list_item_token2] = ACTIONS(152),
    [aux_sym__list_item_token3] = ACTIONS(152),
    [anon_sym_LBRACK_COMMA] = ACTIONS(152),
    [aux_sym_code_token1] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(152),
    [anon_sym_image_COLON_COLON] = ACTIONS(152),
    [aux_sym_url_token1] = ACTIONS(154),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(152),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(152),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(152),
    [anon_sym_LT_LT] = ACTIONS(152),
    [anon_sym_xref_COLON] = ACTIONS(154),
    [anon_sym_audio_COLON_COLON] = ACTIONS(152),
    [anon_sym_video_COLON_COLON] = ACTIONS(152),
    [sym_emphasis] = ACTIONS(154),
    [sym_strong] = ACTIONS(154),
    [sym_monospace] = ACTIONS(154),
    [sym_superscript] = ACTIONS(154),
    [sym_subscript] = ACTIONS(152),
    [sym__blank] = ACTIONS(152),
    [sym__empty] = ACTIONS(152),
    [sym__sp] = ACTIONS(152),
    [sym__nbsp] = ACTIONS(152),
    [sym__zwsp] = ACTIONS(152),
    [sym__wj] = ACTIONS(152),
    [sym__apos] = ACTIONS(152),
    [sym__quot] = ACTIONS(152),
    [sym__lsquo] = ACTIONS(152),
    [sym__rsquo] = ACTIONS(152),
    [sym__ldquo] = ACTIONS(152),
    [sym__rdquo] = ACTIONS(152),
    [sym__deg] = ACTIONS(152),
    [sym__plus] = ACTIONS(152),
    [sym__brvbar] = ACTIONS(152),
    [sym__vbar] = ACTIONS(152),
    [sym__amp] = ACTIONS(152),
    [sym__lt] = ACTIONS(152),
    [sym__gt] = ACTIONS(152),
    [sym__startsb] = ACTIONS(152),
    [sym__endsb] = ACTIONS(152),
    [sym__caret] = ACTIONS(152),
    [sym__asterisk] = ACTIONS(152),
    [sym__tilde] = ACTIONS(152),
    [sym__backslash] = ACTIONS(152),
    [sym__backtick] = ACTIONS(152),
    [sym__two_colons] = ACTIONS(152),
    [sym__two_semicolons] = ACTIONS(152),
    [sym__cpp] = ACTIONS(152),
    [sym__pp] = ACTIONS(152),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_title] = ACTIONS(156),
    [anon_sym_NOTE_COLON] = ACTIONS(158),
    [anon_sym_TIP_COLON] = ACTIONS(156),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(156),
    [anon_sym_CAUTION_COLON] = ACTIONS(156),
    [anon_sym_WARNING_COLON] = ACTIONS(156),
    [aux_sym__list_item_token1] = ACTIONS(158),
    [aux_sym__list_item_token2] = ACTIONS(156),
    [aux_sym__list_item_token3] = ACTIONS(156),
    [anon_sym_LBRACK_COMMA] = ACTIONS(156),
    [aux_sym_code_token1] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_image_COLON_COLON] = ACTIONS(156),
    [aux_sym_url_token1] = ACTIONS(158),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(156),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(156),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(156),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_xref_COLON] = ACTIONS(158),
    [anon_sym_audio_COLON_COLON] = ACTIONS(156),
    [anon_sym_video_COLON_COLON] = ACTIONS(156),
    [sym_emphasis] = ACTIONS(158),
    [sym_strong] = ACTIONS(158),
    [sym_monospace] = ACTIONS(158),
    [sym_superscript] = ACTIONS(158),
    [sym_subscript] = ACTIONS(156),
    [sym__blank] = ACTIONS(156),
    [sym__empty] = ACTIONS(156),
    [sym__sp] = ACTIONS(156),
    [sym__nbsp] = ACTIONS(156),
    [sym__zwsp] = ACTIONS(156),
    [sym__wj] = ACTIONS(156),
    [sym__apos] = ACTIONS(156),
    [sym__quot] = ACTIONS(156),
    [sym__lsquo] = ACTIONS(156),
    [sym__rsquo] = ACTIONS(156),
    [sym__ldquo] = ACTIONS(156),
    [sym__rdquo] = ACTIONS(156),
    [sym__deg] = ACTIONS(156),
    [sym__plus] = ACTIONS(156),
    [sym__brvbar] = ACTIONS(156),
    [sym__vbar] = ACTIONS(156),
    [sym__amp] = ACTIONS(156),
    [sym__lt] = ACTIONS(156),
    [sym__gt] = ACTIONS(156),
    [sym__startsb] = ACTIONS(156),
    [sym__endsb] = ACTIONS(156),
    [sym__caret] = ACTIONS(156),
    [sym__asterisk] = ACTIONS(156),
    [sym__tilde] = ACTIONS(156),
    [sym__backslash] = ACTIONS(156),
    [sym__backtick] = ACTIONS(156),
    [sym__two_colons] = ACTIONS(156),
    [sym__two_semicolons] = ACTIONS(156),
    [sym__cpp] = ACTIONS(156),
    [sym__pp] = ACTIONS(156),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_title] = ACTIONS(160),
    [anon_sym_NOTE_COLON] = ACTIONS(162),
    [anon_sym_TIP_COLON] = ACTIONS(160),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(160),
    [anon_sym_CAUTION_COLON] = ACTIONS(160),
    [anon_sym_WARNING_COLON] = ACTIONS(160),
    [aux_sym__list_item_token1] = ACTIONS(162),
    [aux_sym__list_item_token2] = ACTIONS(160),
    [aux_sym__list_item_token3] = ACTIONS(160),
    [anon_sym_LBRACK_COMMA] = ACTIONS(160),
    [aux_sym_code_token1] = ACTIONS(162),
    [anon_sym_SLASH_SLASH] = ACTIONS(160),
    [anon_sym_image_COLON_COLON] = ACTIONS(160),
    [aux_sym_url_token1] = ACTIONS(162),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(160),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(160),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(160),
    [anon_sym_LT_LT] = ACTIONS(160),
    [anon_sym_xref_COLON] = ACTIONS(162),
    [anon_sym_audio_COLON_COLON] = ACTIONS(160),
    [anon_sym_video_COLON_COLON] = ACTIONS(160),
    [sym_emphasis] = ACTIONS(162),
    [sym_strong] = ACTIONS(162),
    [sym_monospace] = ACTIONS(162),
    [sym_superscript] = ACTIONS(162),
    [sym_subscript] = ACTIONS(160),
    [sym__blank] = ACTIONS(160),
    [sym__empty] = ACTIONS(160),
    [sym__sp] = ACTIONS(160),
    [sym__nbsp] = ACTIONS(160),
    [sym__zwsp] = ACTIONS(160),
    [sym__wj] = ACTIONS(160),
    [sym__apos] = ACTIONS(160),
    [sym__quot] = ACTIONS(160),
    [sym__lsquo] = ACTIONS(160),
    [sym__rsquo] = ACTIONS(160),
    [sym__ldquo] = ACTIONS(160),
    [sym__rdquo] = ACTIONS(160),
    [sym__deg] = ACTIONS(160),
    [sym__plus] = ACTIONS(160),
    [sym__brvbar] = ACTIONS(160),
    [sym__vbar] = ACTIONS(160),
    [sym__amp] = ACTIONS(160),
    [sym__lt] = ACTIONS(160),
    [sym__gt] = ACTIONS(160),
    [sym__startsb] = ACTIONS(160),
    [sym__endsb] = ACTIONS(160),
    [sym__caret] = ACTIONS(160),
    [sym__asterisk] = ACTIONS(160),
    [sym__tilde] = ACTIONS(160),
    [sym__backslash] = ACTIONS(160),
    [sym__backtick] = ACTIONS(160),
    [sym__two_colons] = ACTIONS(160),
    [sym__two_semicolons] = ACTIONS(160),
    [sym__cpp] = ACTIONS(160),
    [sym__pp] = ACTIONS(160),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [sym_title] = ACTIONS(164),
    [anon_sym_NOTE_COLON] = ACTIONS(166),
    [anon_sym_TIP_COLON] = ACTIONS(164),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(164),
    [anon_sym_CAUTION_COLON] = ACTIONS(164),
    [anon_sym_WARNING_COLON] = ACTIONS(164),
    [aux_sym__list_item_token1] = ACTIONS(166),
    [aux_sym__list_item_token2] = ACTIONS(164),
    [aux_sym__list_item_token3] = ACTIONS(164),
    [anon_sym_LBRACK_COMMA] = ACTIONS(164),
    [aux_sym_code_token1] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(164),
    [anon_sym_image_COLON_COLON] = ACTIONS(164),
    [aux_sym_url_token1] = ACTIONS(166),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(164),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(164),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(164),
    [anon_sym_LT_LT] = ACTIONS(164),
    [anon_sym_xref_COLON] = ACTIONS(166),
    [anon_sym_audio_COLON_COLON] = ACTIONS(164),
    [anon_sym_video_COLON_COLON] = ACTIONS(164),
    [sym_emphasis] = ACTIONS(166),
    [sym_strong] = ACTIONS(166),
    [sym_monospace] = ACTIONS(166),
    [sym_superscript] = ACTIONS(166),
    [sym_subscript] = ACTIONS(164),
    [sym__blank] = ACTIONS(164),
    [sym__empty] = ACTIONS(164),
    [sym__sp] = ACTIONS(164),
    [sym__nbsp] = ACTIONS(164),
    [sym__zwsp] = ACTIONS(164),
    [sym__wj] = ACTIONS(164),
    [sym__apos] = ACTIONS(164),
    [sym__quot] = ACTIONS(164),
    [sym__lsquo] = ACTIONS(164),
    [sym__rsquo] = ACTIONS(164),
    [sym__ldquo] = ACTIONS(164),
    [sym__rdquo] = ACTIONS(164),
    [sym__deg] = ACTIONS(164),
    [sym__plus] = ACTIONS(164),
    [sym__brvbar] = ACTIONS(164),
    [sym__vbar] = ACTIONS(164),
    [sym__amp] = ACTIONS(164),
    [sym__lt] = ACTIONS(164),
    [sym__gt] = ACTIONS(164),
    [sym__startsb] = ACTIONS(164),
    [sym__endsb] = ACTIONS(164),
    [sym__caret] = ACTIONS(164),
    [sym__asterisk] = ACTIONS(164),
    [sym__tilde] = ACTIONS(164),
    [sym__backslash] = ACTIONS(164),
    [sym__backtick] = ACTIONS(164),
    [sym__two_colons] = ACTIONS(164),
    [sym__two_semicolons] = ACTIONS(164),
    [sym__cpp] = ACTIONS(164),
    [sym__pp] = ACTIONS(164),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [sym_title] = ACTIONS(168),
    [anon_sym_NOTE_COLON] = ACTIONS(170),
    [anon_sym_TIP_COLON] = ACTIONS(168),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(168),
    [anon_sym_CAUTION_COLON] = ACTIONS(168),
    [anon_sym_WARNING_COLON] = ACTIONS(168),
    [aux_sym__list_item_token1] = ACTIONS(170),
    [aux_sym__list_item_token2] = ACTIONS(168),
    [aux_sym__list_item_token3] = ACTIONS(168),
    [anon_sym_LBRACK_COMMA] = ACTIONS(168),
    [aux_sym_code_token1] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_image_COLON_COLON] = ACTIONS(168),
    [aux_sym_url_token1] = ACTIONS(170),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(168),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(168),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(168),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_xref_COLON] = ACTIONS(170),
    [anon_sym_audio_COLON_COLON] = ACTIONS(168),
    [anon_sym_video_COLON_COLON] = ACTIONS(168),
    [sym_emphasis] = ACTIONS(170),
    [sym_strong] = ACTIONS(170),
    [sym_monospace] = ACTIONS(170),
    [sym_superscript] = ACTIONS(170),
    [sym_subscript] = ACTIONS(168),
    [sym__blank] = ACTIONS(168),
    [sym__empty] = ACTIONS(168),
    [sym__sp] = ACTIONS(168),
    [sym__nbsp] = ACTIONS(168),
    [sym__zwsp] = ACTIONS(168),
    [sym__wj] = ACTIONS(168),
    [sym__apos] = ACTIONS(168),
    [sym__quot] = ACTIONS(168),
    [sym__lsquo] = ACTIONS(168),
    [sym__rsquo] = ACTIONS(168),
    [sym__ldquo] = ACTIONS(168),
    [sym__rdquo] = ACTIONS(168),
    [sym__deg] = ACTIONS(168),
    [sym__plus] = ACTIONS(168),
    [sym__brvbar] = ACTIONS(168),
    [sym__vbar] = ACTIONS(168),
    [sym__amp] = ACTIONS(168),
    [sym__lt] = ACTIONS(168),
    [sym__gt] = ACTIONS(168),
    [sym__startsb] = ACTIONS(168),
    [sym__endsb] = ACTIONS(168),
    [sym__caret] = ACTIONS(168),
    [sym__asterisk] = ACTIONS(168),
    [sym__tilde] = ACTIONS(168),
    [sym__backslash] = ACTIONS(168),
    [sym__backtick] = ACTIONS(168),
    [sym__two_colons] = ACTIONS(168),
    [sym__two_semicolons] = ACTIONS(168),
    [sym__cpp] = ACTIONS(168),
    [sym__pp] = ACTIONS(168),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_title] = ACTIONS(172),
    [anon_sym_NOTE_COLON] = ACTIONS(174),
    [anon_sym_TIP_COLON] = ACTIONS(172),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(172),
    [anon_sym_CAUTION_COLON] = ACTIONS(172),
    [anon_sym_WARNING_COLON] = ACTIONS(172),
    [aux_sym__list_item_token1] = ACTIONS(174),
    [aux_sym__list_item_token2] = ACTIONS(172),
    [aux_sym__list_item_token3] = ACTIONS(172),
    [anon_sym_LBRACK_COMMA] = ACTIONS(172),
    [aux_sym_code_token1] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_image_COLON_COLON] = ACTIONS(172),
    [aux_sym_url_token1] = ACTIONS(174),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(172),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(172),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(172),
    [anon_sym_LT_LT] = ACTIONS(172),
    [anon_sym_xref_COLON] = ACTIONS(174),
    [anon_sym_audio_COLON_COLON] = ACTIONS(172),
    [anon_sym_video_COLON_COLON] = ACTIONS(172),
    [sym_emphasis] = ACTIONS(174),
    [sym_strong] = ACTIONS(174),
    [sym_monospace] = ACTIONS(174),
    [sym_superscript] = ACTIONS(174),
    [sym_subscript] = ACTIONS(172),
    [sym__blank] = ACTIONS(172),
    [sym__empty] = ACTIONS(172),
    [sym__sp] = ACTIONS(172),
    [sym__nbsp] = ACTIONS(172),
    [sym__zwsp] = ACTIONS(172),
    [sym__wj] = ACTIONS(172),
    [sym__apos] = ACTIONS(172),
    [sym__quot] = ACTIONS(172),
    [sym__lsquo] = ACTIONS(172),
    [sym__rsquo] = ACTIONS(172),
    [sym__ldquo] = ACTIONS(172),
    [sym__rdquo] = ACTIONS(172),
    [sym__deg] = ACTIONS(172),
    [sym__plus] = ACTIONS(172),
    [sym__brvbar] = ACTIONS(172),
    [sym__vbar] = ACTIONS(172),
    [sym__amp] = ACTIONS(172),
    [sym__lt] = ACTIONS(172),
    [sym__gt] = ACTIONS(172),
    [sym__startsb] = ACTIONS(172),
    [sym__endsb] = ACTIONS(172),
    [sym__caret] = ACTIONS(172),
    [sym__asterisk] = ACTIONS(172),
    [sym__tilde] = ACTIONS(172),
    [sym__backslash] = ACTIONS(172),
    [sym__backtick] = ACTIONS(172),
    [sym__two_colons] = ACTIONS(172),
    [sym__two_semicolons] = ACTIONS(172),
    [sym__cpp] = ACTIONS(172),
    [sym__pp] = ACTIONS(172),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_title] = ACTIONS(176),
    [anon_sym_NOTE_COLON] = ACTIONS(178),
    [anon_sym_TIP_COLON] = ACTIONS(176),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(176),
    [anon_sym_CAUTION_COLON] = ACTIONS(176),
    [anon_sym_WARNING_COLON] = ACTIONS(176),
    [aux_sym__list_item_token1] = ACTIONS(178),
    [aux_sym__list_item_token2] = ACTIONS(176),
    [aux_sym__list_item_token3] = ACTIONS(176),
    [anon_sym_LBRACK_COMMA] = ACTIONS(176),
    [aux_sym_code_token1] = ACTIONS(178),
    [anon_sym_SLASH_SLASH] = ACTIONS(176),
    [anon_sym_image_COLON_COLON] = ACTIONS(176),
    [aux_sym_url_token1] = ACTIONS(178),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(176),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(176),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(176),
    [anon_sym_LT_LT] = ACTIONS(176),
    [anon_sym_xref_COLON] = ACTIONS(178),
    [anon_sym_audio_COLON_COLON] = ACTIONS(176),
    [anon_sym_video_COLON_COLON] = ACTIONS(176),
    [sym_emphasis] = ACTIONS(178),
    [sym_strong] = ACTIONS(178),
    [sym_monospace] = ACTIONS(178),
    [sym_superscript] = ACTIONS(178),
    [sym_subscript] = ACTIONS(176),
    [sym__blank] = ACTIONS(176),
    [sym__empty] = ACTIONS(176),
    [sym__sp] = ACTIONS(176),
    [sym__nbsp] = ACTIONS(176),
    [sym__zwsp] = ACTIONS(176),
    [sym__wj] = ACTIONS(176),
    [sym__apos] = ACTIONS(176),
    [sym__quot] = ACTIONS(176),
    [sym__lsquo] = ACTIONS(176),
    [sym__rsquo] = ACTIONS(176),
    [sym__ldquo] = ACTIONS(176),
    [sym__rdquo] = ACTIONS(176),
    [sym__deg] = ACTIONS(176),
    [sym__plus] = ACTIONS(176),
    [sym__brvbar] = ACTIONS(176),
    [sym__vbar] = ACTIONS(176),
    [sym__amp] = ACTIONS(176),
    [sym__lt] = ACTIONS(176),
    [sym__gt] = ACTIONS(176),
    [sym__startsb] = ACTIONS(176),
    [sym__endsb] = ACTIONS(176),
    [sym__caret] = ACTIONS(176),
    [sym__asterisk] = ACTIONS(176),
    [sym__tilde] = ACTIONS(176),
    [sym__backslash] = ACTIONS(176),
    [sym__backtick] = ACTIONS(176),
    [sym__two_colons] = ACTIONS(176),
    [sym__two_semicolons] = ACTIONS(176),
    [sym__cpp] = ACTIONS(176),
    [sym__pp] = ACTIONS(176),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_title] = ACTIONS(180),
    [anon_sym_NOTE_COLON] = ACTIONS(182),
    [anon_sym_TIP_COLON] = ACTIONS(180),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(180),
    [anon_sym_CAUTION_COLON] = ACTIONS(180),
    [anon_sym_WARNING_COLON] = ACTIONS(180),
    [aux_sym__list_item_token1] = ACTIONS(182),
    [aux_sym__list_item_token2] = ACTIONS(180),
    [aux_sym__list_item_token3] = ACTIONS(180),
    [anon_sym_LBRACK_COMMA] = ACTIONS(180),
    [aux_sym_code_token1] = ACTIONS(182),
    [anon_sym_SLASH_SLASH] = ACTIONS(180),
    [anon_sym_image_COLON_COLON] = ACTIONS(180),
    [aux_sym_url_token1] = ACTIONS(182),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(180),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(180),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_xref_COLON] = ACTIONS(182),
    [anon_sym_audio_COLON_COLON] = ACTIONS(180),
    [anon_sym_video_COLON_COLON] = ACTIONS(180),
    [sym_emphasis] = ACTIONS(182),
    [sym_strong] = ACTIONS(182),
    [sym_monospace] = ACTIONS(182),
    [sym_superscript] = ACTIONS(182),
    [sym_subscript] = ACTIONS(180),
    [sym__blank] = ACTIONS(180),
    [sym__empty] = ACTIONS(180),
    [sym__sp] = ACTIONS(180),
    [sym__nbsp] = ACTIONS(180),
    [sym__zwsp] = ACTIONS(180),
    [sym__wj] = ACTIONS(180),
    [sym__apos] = ACTIONS(180),
    [sym__quot] = ACTIONS(180),
    [sym__lsquo] = ACTIONS(180),
    [sym__rsquo] = ACTIONS(180),
    [sym__ldquo] = ACTIONS(180),
    [sym__rdquo] = ACTIONS(180),
    [sym__deg] = ACTIONS(180),
    [sym__plus] = ACTIONS(180),
    [sym__brvbar] = ACTIONS(180),
    [sym__vbar] = ACTIONS(180),
    [sym__amp] = ACTIONS(180),
    [sym__lt] = ACTIONS(180),
    [sym__gt] = ACTIONS(180),
    [sym__startsb] = ACTIONS(180),
    [sym__endsb] = ACTIONS(180),
    [sym__caret] = ACTIONS(180),
    [sym__asterisk] = ACTIONS(180),
    [sym__tilde] = ACTIONS(180),
    [sym__backslash] = ACTIONS(180),
    [sym__backtick] = ACTIONS(180),
    [sym__two_colons] = ACTIONS(180),
    [sym__two_semicolons] = ACTIONS(180),
    [sym__cpp] = ACTIONS(180),
    [sym__pp] = ACTIONS(180),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_title] = ACTIONS(184),
    [anon_sym_NOTE_COLON] = ACTIONS(186),
    [anon_sym_TIP_COLON] = ACTIONS(184),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(184),
    [anon_sym_CAUTION_COLON] = ACTIONS(184),
    [anon_sym_WARNING_COLON] = ACTIONS(184),
    [aux_sym__list_item_token1] = ACTIONS(186),
    [aux_sym__list_item_token2] = ACTIONS(184),
    [aux_sym__list_item_token3] = ACTIONS(184),
    [anon_sym_LBRACK_COMMA] = ACTIONS(184),
    [aux_sym_code_token1] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(184),
    [anon_sym_image_COLON_COLON] = ACTIONS(184),
    [aux_sym_url_token1] = ACTIONS(186),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(184),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(184),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(184),
    [anon_sym_LT_LT] = ACTIONS(184),
    [anon_sym_xref_COLON] = ACTIONS(186),
    [anon_sym_audio_COLON_COLON] = ACTIONS(184),
    [anon_sym_video_COLON_COLON] = ACTIONS(184),
    [sym_emphasis] = ACTIONS(186),
    [sym_strong] = ACTIONS(186),
    [sym_monospace] = ACTIONS(186),
    [sym_superscript] = ACTIONS(186),
    [sym_subscript] = ACTIONS(184),
    [sym__blank] = ACTIONS(184),
    [sym__empty] = ACTIONS(184),
    [sym__sp] = ACTIONS(184),
    [sym__nbsp] = ACTIONS(184),
    [sym__zwsp] = ACTIONS(184),
    [sym__wj] = ACTIONS(184),
    [sym__apos] = ACTIONS(184),
    [sym__quot] = ACTIONS(184),
    [sym__lsquo] = ACTIONS(184),
    [sym__rsquo] = ACTIONS(184),
    [sym__ldquo] = ACTIONS(184),
    [sym__rdquo] = ACTIONS(184),
    [sym__deg] = ACTIONS(184),
    [sym__plus] = ACTIONS(184),
    [sym__brvbar] = ACTIONS(184),
    [sym__vbar] = ACTIONS(184),
    [sym__amp] = ACTIONS(184),
    [sym__lt] = ACTIONS(184),
    [sym__gt] = ACTIONS(184),
    [sym__startsb] = ACTIONS(184),
    [sym__endsb] = ACTIONS(184),
    [sym__caret] = ACTIONS(184),
    [sym__asterisk] = ACTIONS(184),
    [sym__tilde] = ACTIONS(184),
    [sym__backslash] = ACTIONS(184),
    [sym__backtick] = ACTIONS(184),
    [sym__two_colons] = ACTIONS(184),
    [sym__two_semicolons] = ACTIONS(184),
    [sym__cpp] = ACTIONS(184),
    [sym__pp] = ACTIONS(184),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_title] = ACTIONS(188),
    [anon_sym_NOTE_COLON] = ACTIONS(190),
    [anon_sym_TIP_COLON] = ACTIONS(188),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(188),
    [anon_sym_CAUTION_COLON] = ACTIONS(188),
    [anon_sym_WARNING_COLON] = ACTIONS(188),
    [aux_sym__list_item_token1] = ACTIONS(190),
    [aux_sym__list_item_token2] = ACTIONS(188),
    [aux_sym__list_item_token3] = ACTIONS(188),
    [anon_sym_LBRACK_COMMA] = ACTIONS(188),
    [aux_sym_code_token1] = ACTIONS(190),
    [anon_sym_SLASH_SLASH] = ACTIONS(188),
    [anon_sym_image_COLON_COLON] = ACTIONS(188),
    [aux_sym_url_token1] = ACTIONS(190),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(188),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(188),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_xref_COLON] = ACTIONS(190),
    [anon_sym_audio_COLON_COLON] = ACTIONS(188),
    [anon_sym_video_COLON_COLON] = ACTIONS(188),
    [sym_emphasis] = ACTIONS(190),
    [sym_strong] = ACTIONS(190),
    [sym_monospace] = ACTIONS(190),
    [sym_superscript] = ACTIONS(190),
    [sym_subscript] = ACTIONS(188),
    [sym__blank] = ACTIONS(188),
    [sym__empty] = ACTIONS(188),
    [sym__sp] = ACTIONS(188),
    [sym__nbsp] = ACTIONS(188),
    [sym__zwsp] = ACTIONS(188),
    [sym__wj] = ACTIONS(188),
    [sym__apos] = ACTIONS(188),
    [sym__quot] = ACTIONS(188),
    [sym__lsquo] = ACTIONS(188),
    [sym__rsquo] = ACTIONS(188),
    [sym__ldquo] = ACTIONS(188),
    [sym__rdquo] = ACTIONS(188),
    [sym__deg] = ACTIONS(188),
    [sym__plus] = ACTIONS(188),
    [sym__brvbar] = ACTIONS(188),
    [sym__vbar] = ACTIONS(188),
    [sym__amp] = ACTIONS(188),
    [sym__lt] = ACTIONS(188),
    [sym__gt] = ACTIONS(188),
    [sym__startsb] = ACTIONS(188),
    [sym__endsb] = ACTIONS(188),
    [sym__caret] = ACTIONS(188),
    [sym__asterisk] = ACTIONS(188),
    [sym__tilde] = ACTIONS(188),
    [sym__backslash] = ACTIONS(188),
    [sym__backtick] = ACTIONS(188),
    [sym__two_colons] = ACTIONS(188),
    [sym__two_semicolons] = ACTIONS(188),
    [sym__cpp] = ACTIONS(188),
    [sym__pp] = ACTIONS(188),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_title] = ACTIONS(192),
    [anon_sym_NOTE_COLON] = ACTIONS(194),
    [anon_sym_TIP_COLON] = ACTIONS(192),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(192),
    [anon_sym_CAUTION_COLON] = ACTIONS(192),
    [anon_sym_WARNING_COLON] = ACTIONS(192),
    [aux_sym__list_item_token1] = ACTIONS(194),
    [aux_sym__list_item_token2] = ACTIONS(192),
    [aux_sym__list_item_token3] = ACTIONS(192),
    [anon_sym_LBRACK_COMMA] = ACTIONS(192),
    [aux_sym_code_token1] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_image_COLON_COLON] = ACTIONS(192),
    [aux_sym_url_token1] = ACTIONS(194),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(192),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(192),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(192),
    [anon_sym_LT_LT] = ACTIONS(192),
    [anon_sym_xref_COLON] = ACTIONS(194),
    [anon_sym_audio_COLON_COLON] = ACTIONS(192),
    [anon_sym_video_COLON_COLON] = ACTIONS(192),
    [sym_emphasis] = ACTIONS(194),
    [sym_strong] = ACTIONS(194),
    [sym_monospace] = ACTIONS(194),
    [sym_superscript] = ACTIONS(194),
    [sym_subscript] = ACTIONS(192),
    [sym__blank] = ACTIONS(192),
    [sym__empty] = ACTIONS(192),
    [sym__sp] = ACTIONS(192),
    [sym__nbsp] = ACTIONS(192),
    [sym__zwsp] = ACTIONS(192),
    [sym__wj] = ACTIONS(192),
    [sym__apos] = ACTIONS(192),
    [sym__quot] = ACTIONS(192),
    [sym__lsquo] = ACTIONS(192),
    [sym__rsquo] = ACTIONS(192),
    [sym__ldquo] = ACTIONS(192),
    [sym__rdquo] = ACTIONS(192),
    [sym__deg] = ACTIONS(192),
    [sym__plus] = ACTIONS(192),
    [sym__brvbar] = ACTIONS(192),
    [sym__vbar] = ACTIONS(192),
    [sym__amp] = ACTIONS(192),
    [sym__lt] = ACTIONS(192),
    [sym__gt] = ACTIONS(192),
    [sym__startsb] = ACTIONS(192),
    [sym__endsb] = ACTIONS(192),
    [sym__caret] = ACTIONS(192),
    [sym__asterisk] = ACTIONS(192),
    [sym__tilde] = ACTIONS(192),
    [sym__backslash] = ACTIONS(192),
    [sym__backtick] = ACTIONS(192),
    [sym__two_colons] = ACTIONS(192),
    [sym__two_semicolons] = ACTIONS(192),
    [sym__cpp] = ACTIONS(192),
    [sym__pp] = ACTIONS(192),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym_title] = ACTIONS(196),
    [anon_sym_NOTE_COLON] = ACTIONS(198),
    [anon_sym_TIP_COLON] = ACTIONS(196),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(196),
    [anon_sym_CAUTION_COLON] = ACTIONS(196),
    [anon_sym_WARNING_COLON] = ACTIONS(196),
    [aux_sym__list_item_token1] = ACTIONS(198),
    [aux_sym__list_item_token2] = ACTIONS(196),
    [aux_sym__list_item_token3] = ACTIONS(196),
    [anon_sym_LBRACK_COMMA] = ACTIONS(196),
    [aux_sym_code_token1] = ACTIONS(198),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_image_COLON_COLON] = ACTIONS(196),
    [aux_sym_url_token1] = ACTIONS(198),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(196),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(196),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(196),
    [anon_sym_xref_COLON] = ACTIONS(198),
    [anon_sym_audio_COLON_COLON] = ACTIONS(196),
    [anon_sym_video_COLON_COLON] = ACTIONS(196),
    [sym_emphasis] = ACTIONS(198),
    [sym_strong] = ACTIONS(198),
    [sym_monospace] = ACTIONS(198),
    [sym_superscript] = ACTIONS(198),
    [sym_subscript] = ACTIONS(196),
    [sym__blank] = ACTIONS(196),
    [sym__empty] = ACTIONS(196),
    [sym__sp] = ACTIONS(196),
    [sym__nbsp] = ACTIONS(196),
    [sym__zwsp] = ACTIONS(196),
    [sym__wj] = ACTIONS(196),
    [sym__apos] = ACTIONS(196),
    [sym__quot] = ACTIONS(196),
    [sym__lsquo] = ACTIONS(196),
    [sym__rsquo] = ACTIONS(196),
    [sym__ldquo] = ACTIONS(196),
    [sym__rdquo] = ACTIONS(196),
    [sym__deg] = ACTIONS(196),
    [sym__plus] = ACTIONS(196),
    [sym__brvbar] = ACTIONS(196),
    [sym__vbar] = ACTIONS(196),
    [sym__amp] = ACTIONS(196),
    [sym__lt] = ACTIONS(196),
    [sym__gt] = ACTIONS(196),
    [sym__startsb] = ACTIONS(196),
    [sym__endsb] = ACTIONS(196),
    [sym__caret] = ACTIONS(196),
    [sym__asterisk] = ACTIONS(196),
    [sym__tilde] = ACTIONS(196),
    [sym__backslash] = ACTIONS(196),
    [sym__backtick] = ACTIONS(196),
    [sym__two_colons] = ACTIONS(196),
    [sym__two_semicolons] = ACTIONS(196),
    [sym__cpp] = ACTIONS(196),
    [sym__pp] = ACTIONS(196),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_title] = ACTIONS(200),
    [anon_sym_NOTE_COLON] = ACTIONS(202),
    [anon_sym_TIP_COLON] = ACTIONS(200),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(200),
    [anon_sym_CAUTION_COLON] = ACTIONS(200),
    [anon_sym_WARNING_COLON] = ACTIONS(200),
    [aux_sym__list_item_token1] = ACTIONS(202),
    [aux_sym__list_item_token2] = ACTIONS(200),
    [aux_sym__list_item_token3] = ACTIONS(200),
    [anon_sym_LBRACK_COMMA] = ACTIONS(200),
    [aux_sym_code_token1] = ACTIONS(202),
    [anon_sym_SLASH_SLASH] = ACTIONS(200),
    [anon_sym_image_COLON_COLON] = ACTIONS(200),
    [aux_sym_url_token1] = ACTIONS(202),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(200),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(200),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(200),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_xref_COLON] = ACTIONS(202),
    [anon_sym_audio_COLON_COLON] = ACTIONS(200),
    [anon_sym_video_COLON_COLON] = ACTIONS(200),
    [sym_emphasis] = ACTIONS(202),
    [sym_strong] = ACTIONS(202),
    [sym_monospace] = ACTIONS(202),
    [sym_superscript] = ACTIONS(202),
    [sym_subscript] = ACTIONS(200),
    [sym__blank] = ACTIONS(200),
    [sym__empty] = ACTIONS(200),
    [sym__sp] = ACTIONS(200),
    [sym__nbsp] = ACTIONS(200),
    [sym__zwsp] = ACTIONS(200),
    [sym__wj] = ACTIONS(200),
    [sym__apos] = ACTIONS(200),
    [sym__quot] = ACTIONS(200),
    [sym__lsquo] = ACTIONS(200),
    [sym__rsquo] = ACTIONS(200),
    [sym__ldquo] = ACTIONS(200),
    [sym__rdquo] = ACTIONS(200),
    [sym__deg] = ACTIONS(200),
    [sym__plus] = ACTIONS(200),
    [sym__brvbar] = ACTIONS(200),
    [sym__vbar] = ACTIONS(200),
    [sym__amp] = ACTIONS(200),
    [sym__lt] = ACTIONS(200),
    [sym__gt] = ACTIONS(200),
    [sym__startsb] = ACTIONS(200),
    [sym__endsb] = ACTIONS(200),
    [sym__caret] = ACTIONS(200),
    [sym__asterisk] = ACTIONS(200),
    [sym__tilde] = ACTIONS(200),
    [sym__backslash] = ACTIONS(200),
    [sym__backtick] = ACTIONS(200),
    [sym__two_colons] = ACTIONS(200),
    [sym__two_semicolons] = ACTIONS(200),
    [sym__cpp] = ACTIONS(200),
    [sym__pp] = ACTIONS(200),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym_title] = ACTIONS(204),
    [anon_sym_NOTE_COLON] = ACTIONS(206),
    [anon_sym_TIP_COLON] = ACTIONS(204),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(204),
    [anon_sym_CAUTION_COLON] = ACTIONS(204),
    [anon_sym_WARNING_COLON] = ACTIONS(204),
    [aux_sym__list_item_token1] = ACTIONS(206),
    [aux_sym__list_item_token2] = ACTIONS(204),
    [aux_sym__list_item_token3] = ACTIONS(204),
    [anon_sym_LBRACK_COMMA] = ACTIONS(204),
    [aux_sym_code_token1] = ACTIONS(206),
    [anon_sym_SLASH_SLASH] = ACTIONS(204),
    [anon_sym_image_COLON_COLON] = ACTIONS(204),
    [aux_sym_url_token1] = ACTIONS(206),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(204),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(204),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(204),
    [anon_sym_LT_LT] = ACTIONS(204),
    [anon_sym_xref_COLON] = ACTIONS(206),
    [anon_sym_audio_COLON_COLON] = ACTIONS(204),
    [anon_sym_video_COLON_COLON] = ACTIONS(204),
    [sym_emphasis] = ACTIONS(206),
    [sym_strong] = ACTIONS(206),
    [sym_monospace] = ACTIONS(206),
    [sym_superscript] = ACTIONS(206),
    [sym_subscript] = ACTIONS(204),
    [sym__blank] = ACTIONS(204),
    [sym__empty] = ACTIONS(204),
    [sym__sp] = ACTIONS(204),
    [sym__nbsp] = ACTIONS(204),
    [sym__zwsp] = ACTIONS(204),
    [sym__wj] = ACTIONS(204),
    [sym__apos] = ACTIONS(204),
    [sym__quot] = ACTIONS(204),
    [sym__lsquo] = ACTIONS(204),
    [sym__rsquo] = ACTIONS(204),
    [sym__ldquo] = ACTIONS(204),
    [sym__rdquo] = ACTIONS(204),
    [sym__deg] = ACTIONS(204),
    [sym__plus] = ACTIONS(204),
    [sym__brvbar] = ACTIONS(204),
    [sym__vbar] = ACTIONS(204),
    [sym__amp] = ACTIONS(204),
    [sym__lt] = ACTIONS(204),
    [sym__gt] = ACTIONS(204),
    [sym__startsb] = ACTIONS(204),
    [sym__endsb] = ACTIONS(204),
    [sym__caret] = ACTIONS(204),
    [sym__asterisk] = ACTIONS(204),
    [sym__tilde] = ACTIONS(204),
    [sym__backslash] = ACTIONS(204),
    [sym__backtick] = ACTIONS(204),
    [sym__two_colons] = ACTIONS(204),
    [sym__two_semicolons] = ACTIONS(204),
    [sym__cpp] = ACTIONS(204),
    [sym__pp] = ACTIONS(204),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_title] = ACTIONS(208),
    [anon_sym_NOTE_COLON] = ACTIONS(210),
    [anon_sym_TIP_COLON] = ACTIONS(208),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(208),
    [anon_sym_CAUTION_COLON] = ACTIONS(208),
    [anon_sym_WARNING_COLON] = ACTIONS(208),
    [aux_sym__list_item_token1] = ACTIONS(210),
    [aux_sym__list_item_token2] = ACTIONS(208),
    [aux_sym__list_item_token3] = ACTIONS(208),
    [anon_sym_LBRACK_COMMA] = ACTIONS(208),
    [aux_sym_code_token1] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(208),
    [anon_sym_image_COLON_COLON] = ACTIONS(208),
    [aux_sym_url_token1] = ACTIONS(210),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(208),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(208),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(208),
    [anon_sym_LT_LT] = ACTIONS(208),
    [anon_sym_xref_COLON] = ACTIONS(210),
    [anon_sym_audio_COLON_COLON] = ACTIONS(208),
    [anon_sym_video_COLON_COLON] = ACTIONS(208),
    [sym_emphasis] = ACTIONS(210),
    [sym_strong] = ACTIONS(210),
    [sym_monospace] = ACTIONS(210),
    [sym_superscript] = ACTIONS(210),
    [sym_subscript] = ACTIONS(208),
    [sym__blank] = ACTIONS(208),
    [sym__empty] = ACTIONS(208),
    [sym__sp] = ACTIONS(208),
    [sym__nbsp] = ACTIONS(208),
    [sym__zwsp] = ACTIONS(208),
    [sym__wj] = ACTIONS(208),
    [sym__apos] = ACTIONS(208),
    [sym__quot] = ACTIONS(208),
    [sym__lsquo] = ACTIONS(208),
    [sym__rsquo] = ACTIONS(208),
    [sym__ldquo] = ACTIONS(208),
    [sym__rdquo] = ACTIONS(208),
    [sym__deg] = ACTIONS(208),
    [sym__plus] = ACTIONS(208),
    [sym__brvbar] = ACTIONS(208),
    [sym__vbar] = ACTIONS(208),
    [sym__amp] = ACTIONS(208),
    [sym__lt] = ACTIONS(208),
    [sym__gt] = ACTIONS(208),
    [sym__startsb] = ACTIONS(208),
    [sym__endsb] = ACTIONS(208),
    [sym__caret] = ACTIONS(208),
    [sym__asterisk] = ACTIONS(208),
    [sym__tilde] = ACTIONS(208),
    [sym__backslash] = ACTIONS(208),
    [sym__backtick] = ACTIONS(208),
    [sym__two_colons] = ACTIONS(208),
    [sym__two_semicolons] = ACTIONS(208),
    [sym__cpp] = ACTIONS(208),
    [sym__pp] = ACTIONS(208),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym_title] = ACTIONS(212),
    [anon_sym_NOTE_COLON] = ACTIONS(214),
    [anon_sym_TIP_COLON] = ACTIONS(212),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(212),
    [anon_sym_CAUTION_COLON] = ACTIONS(212),
    [anon_sym_WARNING_COLON] = ACTIONS(212),
    [aux_sym__list_item_token1] = ACTIONS(214),
    [aux_sym__list_item_token2] = ACTIONS(212),
    [aux_sym__list_item_token3] = ACTIONS(212),
    [anon_sym_LBRACK_COMMA] = ACTIONS(212),
    [aux_sym_code_token1] = ACTIONS(214),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_image_COLON_COLON] = ACTIONS(212),
    [aux_sym_url_token1] = ACTIONS(214),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(212),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(212),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(212),
    [anon_sym_LT_LT] = ACTIONS(212),
    [anon_sym_xref_COLON] = ACTIONS(214),
    [anon_sym_audio_COLON_COLON] = ACTIONS(212),
    [anon_sym_video_COLON_COLON] = ACTIONS(212),
    [sym_emphasis] = ACTIONS(214),
    [sym_strong] = ACTIONS(214),
    [sym_monospace] = ACTIONS(214),
    [sym_superscript] = ACTIONS(214),
    [sym_subscript] = ACTIONS(212),
    [sym__blank] = ACTIONS(212),
    [sym__empty] = ACTIONS(212),
    [sym__sp] = ACTIONS(212),
    [sym__nbsp] = ACTIONS(212),
    [sym__zwsp] = ACTIONS(212),
    [sym__wj] = ACTIONS(212),
    [sym__apos] = ACTIONS(212),
    [sym__quot] = ACTIONS(212),
    [sym__lsquo] = ACTIONS(212),
    [sym__rsquo] = ACTIONS(212),
    [sym__ldquo] = ACTIONS(212),
    [sym__rdquo] = ACTIONS(212),
    [sym__deg] = ACTIONS(212),
    [sym__plus] = ACTIONS(212),
    [sym__brvbar] = ACTIONS(212),
    [sym__vbar] = ACTIONS(212),
    [sym__amp] = ACTIONS(212),
    [sym__lt] = ACTIONS(212),
    [sym__gt] = ACTIONS(212),
    [sym__startsb] = ACTIONS(212),
    [sym__endsb] = ACTIONS(212),
    [sym__caret] = ACTIONS(212),
    [sym__asterisk] = ACTIONS(212),
    [sym__tilde] = ACTIONS(212),
    [sym__backslash] = ACTIONS(212),
    [sym__backtick] = ACTIONS(212),
    [sym__two_colons] = ACTIONS(212),
    [sym__two_semicolons] = ACTIONS(212),
    [sym__cpp] = ACTIONS(212),
    [sym__pp] = ACTIONS(212),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_title] = ACTIONS(216),
    [anon_sym_NOTE_COLON] = ACTIONS(218),
    [anon_sym_TIP_COLON] = ACTIONS(216),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(216),
    [anon_sym_CAUTION_COLON] = ACTIONS(216),
    [anon_sym_WARNING_COLON] = ACTIONS(216),
    [aux_sym__list_item_token1] = ACTIONS(218),
    [aux_sym__list_item_token2] = ACTIONS(216),
    [aux_sym__list_item_token3] = ACTIONS(216),
    [anon_sym_LBRACK_COMMA] = ACTIONS(216),
    [aux_sym_code_token1] = ACTIONS(218),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_image_COLON_COLON] = ACTIONS(216),
    [aux_sym_url_token1] = ACTIONS(218),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(216),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(216),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(216),
    [anon_sym_LT_LT] = ACTIONS(216),
    [anon_sym_xref_COLON] = ACTIONS(218),
    [anon_sym_audio_COLON_COLON] = ACTIONS(216),
    [anon_sym_video_COLON_COLON] = ACTIONS(216),
    [sym_emphasis] = ACTIONS(218),
    [sym_strong] = ACTIONS(218),
    [sym_monospace] = ACTIONS(218),
    [sym_superscript] = ACTIONS(218),
    [sym_subscript] = ACTIONS(216),
    [sym__blank] = ACTIONS(216),
    [sym__empty] = ACTIONS(216),
    [sym__sp] = ACTIONS(216),
    [sym__nbsp] = ACTIONS(216),
    [sym__zwsp] = ACTIONS(216),
    [sym__wj] = ACTIONS(216),
    [sym__apos] = ACTIONS(216),
    [sym__quot] = ACTIONS(216),
    [sym__lsquo] = ACTIONS(216),
    [sym__rsquo] = ACTIONS(216),
    [sym__ldquo] = ACTIONS(216),
    [sym__rdquo] = ACTIONS(216),
    [sym__deg] = ACTIONS(216),
    [sym__plus] = ACTIONS(216),
    [sym__brvbar] = ACTIONS(216),
    [sym__vbar] = ACTIONS(216),
    [sym__amp] = ACTIONS(216),
    [sym__lt] = ACTIONS(216),
    [sym__gt] = ACTIONS(216),
    [sym__startsb] = ACTIONS(216),
    [sym__endsb] = ACTIONS(216),
    [sym__caret] = ACTIONS(216),
    [sym__asterisk] = ACTIONS(216),
    [sym__tilde] = ACTIONS(216),
    [sym__backslash] = ACTIONS(216),
    [sym__backtick] = ACTIONS(216),
    [sym__two_colons] = ACTIONS(216),
    [sym__two_semicolons] = ACTIONS(216),
    [sym__cpp] = ACTIONS(216),
    [sym__pp] = ACTIONS(216),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [sym_title] = ACTIONS(220),
    [anon_sym_NOTE_COLON] = ACTIONS(222),
    [anon_sym_TIP_COLON] = ACTIONS(220),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(220),
    [anon_sym_CAUTION_COLON] = ACTIONS(220),
    [anon_sym_WARNING_COLON] = ACTIONS(220),
    [aux_sym__list_item_token1] = ACTIONS(222),
    [aux_sym__list_item_token2] = ACTIONS(220),
    [aux_sym__list_item_token3] = ACTIONS(220),
    [anon_sym_LBRACK_COMMA] = ACTIONS(220),
    [aux_sym_code_token1] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_image_COLON_COLON] = ACTIONS(220),
    [aux_sym_url_token1] = ACTIONS(222),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(220),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(220),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(220),
    [anon_sym_LT_LT] = ACTIONS(220),
    [anon_sym_xref_COLON] = ACTIONS(222),
    [anon_sym_audio_COLON_COLON] = ACTIONS(220),
    [anon_sym_video_COLON_COLON] = ACTIONS(220),
    [sym_emphasis] = ACTIONS(222),
    [sym_strong] = ACTIONS(222),
    [sym_monospace] = ACTIONS(222),
    [sym_superscript] = ACTIONS(222),
    [sym_subscript] = ACTIONS(220),
    [sym__blank] = ACTIONS(220),
    [sym__empty] = ACTIONS(220),
    [sym__sp] = ACTIONS(220),
    [sym__nbsp] = ACTIONS(220),
    [sym__zwsp] = ACTIONS(220),
    [sym__wj] = ACTIONS(220),
    [sym__apos] = ACTIONS(220),
    [sym__quot] = ACTIONS(220),
    [sym__lsquo] = ACTIONS(220),
    [sym__rsquo] = ACTIONS(220),
    [sym__ldquo] = ACTIONS(220),
    [sym__rdquo] = ACTIONS(220),
    [sym__deg] = ACTIONS(220),
    [sym__plus] = ACTIONS(220),
    [sym__brvbar] = ACTIONS(220),
    [sym__vbar] = ACTIONS(220),
    [sym__amp] = ACTIONS(220),
    [sym__lt] = ACTIONS(220),
    [sym__gt] = ACTIONS(220),
    [sym__startsb] = ACTIONS(220),
    [sym__endsb] = ACTIONS(220),
    [sym__caret] = ACTIONS(220),
    [sym__asterisk] = ACTIONS(220),
    [sym__tilde] = ACTIONS(220),
    [sym__backslash] = ACTIONS(220),
    [sym__backtick] = ACTIONS(220),
    [sym__two_colons] = ACTIONS(220),
    [sym__two_semicolons] = ACTIONS(220),
    [sym__cpp] = ACTIONS(220),
    [sym__pp] = ACTIONS(220),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym_title] = ACTIONS(224),
    [anon_sym_NOTE_COLON] = ACTIONS(226),
    [anon_sym_TIP_COLON] = ACTIONS(224),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(224),
    [anon_sym_CAUTION_COLON] = ACTIONS(224),
    [anon_sym_WARNING_COLON] = ACTIONS(224),
    [aux_sym__list_item_token1] = ACTIONS(226),
    [aux_sym__list_item_token2] = ACTIONS(224),
    [aux_sym__list_item_token3] = ACTIONS(224),
    [anon_sym_LBRACK_COMMA] = ACTIONS(224),
    [aux_sym_code_token1] = ACTIONS(226),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_image_COLON_COLON] = ACTIONS(224),
    [aux_sym_url_token1] = ACTIONS(226),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(224),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(224),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(224),
    [anon_sym_LT_LT] = ACTIONS(224),
    [anon_sym_xref_COLON] = ACTIONS(226),
    [anon_sym_audio_COLON_COLON] = ACTIONS(224),
    [anon_sym_video_COLON_COLON] = ACTIONS(224),
    [sym_emphasis] = ACTIONS(226),
    [sym_strong] = ACTIONS(226),
    [sym_monospace] = ACTIONS(226),
    [sym_superscript] = ACTIONS(226),
    [sym_subscript] = ACTIONS(224),
    [sym__blank] = ACTIONS(224),
    [sym__empty] = ACTIONS(224),
    [sym__sp] = ACTIONS(224),
    [sym__nbsp] = ACTIONS(224),
    [sym__zwsp] = ACTIONS(224),
    [sym__wj] = ACTIONS(224),
    [sym__apos] = ACTIONS(224),
    [sym__quot] = ACTIONS(224),
    [sym__lsquo] = ACTIONS(224),
    [sym__rsquo] = ACTIONS(224),
    [sym__ldquo] = ACTIONS(224),
    [sym__rdquo] = ACTIONS(224),
    [sym__deg] = ACTIONS(224),
    [sym__plus] = ACTIONS(224),
    [sym__brvbar] = ACTIONS(224),
    [sym__vbar] = ACTIONS(224),
    [sym__amp] = ACTIONS(224),
    [sym__lt] = ACTIONS(224),
    [sym__gt] = ACTIONS(224),
    [sym__startsb] = ACTIONS(224),
    [sym__endsb] = ACTIONS(224),
    [sym__caret] = ACTIONS(224),
    [sym__asterisk] = ACTIONS(224),
    [sym__tilde] = ACTIONS(224),
    [sym__backslash] = ACTIONS(224),
    [sym__backtick] = ACTIONS(224),
    [sym__two_colons] = ACTIONS(224),
    [sym__two_semicolons] = ACTIONS(224),
    [sym__cpp] = ACTIONS(224),
    [sym__pp] = ACTIONS(224),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_title] = ACTIONS(228),
    [anon_sym_NOTE_COLON] = ACTIONS(230),
    [anon_sym_TIP_COLON] = ACTIONS(228),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(228),
    [anon_sym_CAUTION_COLON] = ACTIONS(228),
    [anon_sym_WARNING_COLON] = ACTIONS(228),
    [aux_sym__list_item_token1] = ACTIONS(230),
    [aux_sym__list_item_token2] = ACTIONS(228),
    [aux_sym__list_item_token3] = ACTIONS(228),
    [anon_sym_LBRACK_COMMA] = ACTIONS(228),
    [aux_sym_code_token1] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(228),
    [anon_sym_image_COLON_COLON] = ACTIONS(228),
    [aux_sym_url_token1] = ACTIONS(230),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(228),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(228),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(228),
    [anon_sym_LT_LT] = ACTIONS(228),
    [anon_sym_xref_COLON] = ACTIONS(230),
    [anon_sym_audio_COLON_COLON] = ACTIONS(228),
    [anon_sym_video_COLON_COLON] = ACTIONS(228),
    [sym_emphasis] = ACTIONS(230),
    [sym_strong] = ACTIONS(230),
    [sym_monospace] = ACTIONS(230),
    [sym_superscript] = ACTIONS(230),
    [sym_subscript] = ACTIONS(228),
    [sym__blank] = ACTIONS(228),
    [sym__empty] = ACTIONS(228),
    [sym__sp] = ACTIONS(228),
    [sym__nbsp] = ACTIONS(228),
    [sym__zwsp] = ACTIONS(228),
    [sym__wj] = ACTIONS(228),
    [sym__apos] = ACTIONS(228),
    [sym__quot] = ACTIONS(228),
    [sym__lsquo] = ACTIONS(228),
    [sym__rsquo] = ACTIONS(228),
    [sym__ldquo] = ACTIONS(228),
    [sym__rdquo] = ACTIONS(228),
    [sym__deg] = ACTIONS(228),
    [sym__plus] = ACTIONS(228),
    [sym__brvbar] = ACTIONS(228),
    [sym__vbar] = ACTIONS(228),
    [sym__amp] = ACTIONS(228),
    [sym__lt] = ACTIONS(228),
    [sym__gt] = ACTIONS(228),
    [sym__startsb] = ACTIONS(228),
    [sym__endsb] = ACTIONS(228),
    [sym__caret] = ACTIONS(228),
    [sym__asterisk] = ACTIONS(228),
    [sym__tilde] = ACTIONS(228),
    [sym__backslash] = ACTIONS(228),
    [sym__backtick] = ACTIONS(228),
    [sym__two_colons] = ACTIONS(228),
    [sym__two_semicolons] = ACTIONS(228),
    [sym__cpp] = ACTIONS(228),
    [sym__pp] = ACTIONS(228),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_title] = ACTIONS(232),
    [anon_sym_NOTE_COLON] = ACTIONS(234),
    [anon_sym_TIP_COLON] = ACTIONS(232),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(232),
    [anon_sym_CAUTION_COLON] = ACTIONS(232),
    [anon_sym_WARNING_COLON] = ACTIONS(232),
    [aux_sym__list_item_token1] = ACTIONS(234),
    [aux_sym__list_item_token2] = ACTIONS(232),
    [aux_sym__list_item_token3] = ACTIONS(232),
    [anon_sym_LBRACK_COMMA] = ACTIONS(232),
    [aux_sym_code_token1] = ACTIONS(234),
    [anon_sym_SLASH_SLASH] = ACTIONS(232),
    [anon_sym_image_COLON_COLON] = ACTIONS(232),
    [aux_sym_url_token1] = ACTIONS(234),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(232),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(232),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(232),
    [anon_sym_LT_LT] = ACTIONS(232),
    [anon_sym_xref_COLON] = ACTIONS(234),
    [anon_sym_audio_COLON_COLON] = ACTIONS(232),
    [anon_sym_video_COLON_COLON] = ACTIONS(232),
    [sym_emphasis] = ACTIONS(234),
    [sym_strong] = ACTIONS(234),
    [sym_monospace] = ACTIONS(234),
    [sym_superscript] = ACTIONS(234),
    [sym_subscript] = ACTIONS(232),
    [sym__blank] = ACTIONS(232),
    [sym__empty] = ACTIONS(232),
    [sym__sp] = ACTIONS(232),
    [sym__nbsp] = ACTIONS(232),
    [sym__zwsp] = ACTIONS(232),
    [sym__wj] = ACTIONS(232),
    [sym__apos] = ACTIONS(232),
    [sym__quot] = ACTIONS(232),
    [sym__lsquo] = ACTIONS(232),
    [sym__rsquo] = ACTIONS(232),
    [sym__ldquo] = ACTIONS(232),
    [sym__rdquo] = ACTIONS(232),
    [sym__deg] = ACTIONS(232),
    [sym__plus] = ACTIONS(232),
    [sym__brvbar] = ACTIONS(232),
    [sym__vbar] = ACTIONS(232),
    [sym__amp] = ACTIONS(232),
    [sym__lt] = ACTIONS(232),
    [sym__gt] = ACTIONS(232),
    [sym__startsb] = ACTIONS(232),
    [sym__endsb] = ACTIONS(232),
    [sym__caret] = ACTIONS(232),
    [sym__asterisk] = ACTIONS(232),
    [sym__tilde] = ACTIONS(232),
    [sym__backslash] = ACTIONS(232),
    [sym__backtick] = ACTIONS(232),
    [sym__two_colons] = ACTIONS(232),
    [sym__two_semicolons] = ACTIONS(232),
    [sym__cpp] = ACTIONS(232),
    [sym__pp] = ACTIONS(232),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_title] = ACTIONS(236),
    [anon_sym_NOTE_COLON] = ACTIONS(238),
    [anon_sym_TIP_COLON] = ACTIONS(236),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(236),
    [anon_sym_CAUTION_COLON] = ACTIONS(236),
    [anon_sym_WARNING_COLON] = ACTIONS(236),
    [aux_sym__list_item_token1] = ACTIONS(238),
    [aux_sym__list_item_token2] = ACTIONS(236),
    [aux_sym__list_item_token3] = ACTIONS(236),
    [anon_sym_LBRACK_COMMA] = ACTIONS(236),
    [aux_sym_code_token1] = ACTIONS(238),
    [anon_sym_SLASH_SLASH] = ACTIONS(236),
    [anon_sym_image_COLON_COLON] = ACTIONS(236),
    [aux_sym_url_token1] = ACTIONS(238),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(236),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(236),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(236),
    [anon_sym_LT_LT] = ACTIONS(236),
    [anon_sym_xref_COLON] = ACTIONS(238),
    [anon_sym_audio_COLON_COLON] = ACTIONS(236),
    [anon_sym_video_COLON_COLON] = ACTIONS(236),
    [sym_emphasis] = ACTIONS(238),
    [sym_strong] = ACTIONS(238),
    [sym_monospace] = ACTIONS(238),
    [sym_superscript] = ACTIONS(238),
    [sym_subscript] = ACTIONS(236),
    [sym__blank] = ACTIONS(236),
    [sym__empty] = ACTIONS(236),
    [sym__sp] = ACTIONS(236),
    [sym__nbsp] = ACTIONS(236),
    [sym__zwsp] = ACTIONS(236),
    [sym__wj] = ACTIONS(236),
    [sym__apos] = ACTIONS(236),
    [sym__quot] = ACTIONS(236),
    [sym__lsquo] = ACTIONS(236),
    [sym__rsquo] = ACTIONS(236),
    [sym__ldquo] = ACTIONS(236),
    [sym__rdquo] = ACTIONS(236),
    [sym__deg] = ACTIONS(236),
    [sym__plus] = ACTIONS(236),
    [sym__brvbar] = ACTIONS(236),
    [sym__vbar] = ACTIONS(236),
    [sym__amp] = ACTIONS(236),
    [sym__lt] = ACTIONS(236),
    [sym__gt] = ACTIONS(236),
    [sym__startsb] = ACTIONS(236),
    [sym__endsb] = ACTIONS(236),
    [sym__caret] = ACTIONS(236),
    [sym__asterisk] = ACTIONS(236),
    [sym__tilde] = ACTIONS(236),
    [sym__backslash] = ACTIONS(236),
    [sym__backtick] = ACTIONS(236),
    [sym__two_colons] = ACTIONS(236),
    [sym__two_semicolons] = ACTIONS(236),
    [sym__cpp] = ACTIONS(236),
    [sym__pp] = ACTIONS(236),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [sym_title] = ACTIONS(240),
    [anon_sym_NOTE_COLON] = ACTIONS(242),
    [anon_sym_TIP_COLON] = ACTIONS(240),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(240),
    [anon_sym_CAUTION_COLON] = ACTIONS(240),
    [anon_sym_WARNING_COLON] = ACTIONS(240),
    [aux_sym__list_item_token1] = ACTIONS(242),
    [aux_sym__list_item_token2] = ACTIONS(240),
    [aux_sym__list_item_token3] = ACTIONS(240),
    [anon_sym_LBRACK_COMMA] = ACTIONS(240),
    [aux_sym_code_token1] = ACTIONS(242),
    [anon_sym_SLASH_SLASH] = ACTIONS(240),
    [anon_sym_image_COLON_COLON] = ACTIONS(240),
    [aux_sym_url_token1] = ACTIONS(242),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(240),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(240),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(240),
    [anon_sym_LT_LT] = ACTIONS(240),
    [anon_sym_xref_COLON] = ACTIONS(242),
    [anon_sym_audio_COLON_COLON] = ACTIONS(240),
    [anon_sym_video_COLON_COLON] = ACTIONS(240),
    [sym_emphasis] = ACTIONS(242),
    [sym_strong] = ACTIONS(242),
    [sym_monospace] = ACTIONS(242),
    [sym_superscript] = ACTIONS(242),
    [sym_subscript] = ACTIONS(240),
    [sym__blank] = ACTIONS(240),
    [sym__empty] = ACTIONS(240),
    [sym__sp] = ACTIONS(240),
    [sym__nbsp] = ACTIONS(240),
    [sym__zwsp] = ACTIONS(240),
    [sym__wj] = ACTIONS(240),
    [sym__apos] = ACTIONS(240),
    [sym__quot] = ACTIONS(240),
    [sym__lsquo] = ACTIONS(240),
    [sym__rsquo] = ACTIONS(240),
    [sym__ldquo] = ACTIONS(240),
    [sym__rdquo] = ACTIONS(240),
    [sym__deg] = ACTIONS(240),
    [sym__plus] = ACTIONS(240),
    [sym__brvbar] = ACTIONS(240),
    [sym__vbar] = ACTIONS(240),
    [sym__amp] = ACTIONS(240),
    [sym__lt] = ACTIONS(240),
    [sym__gt] = ACTIONS(240),
    [sym__startsb] = ACTIONS(240),
    [sym__endsb] = ACTIONS(240),
    [sym__caret] = ACTIONS(240),
    [sym__asterisk] = ACTIONS(240),
    [sym__tilde] = ACTIONS(240),
    [sym__backslash] = ACTIONS(240),
    [sym__backtick] = ACTIONS(240),
    [sym__two_colons] = ACTIONS(240),
    [sym__two_semicolons] = ACTIONS(240),
    [sym__cpp] = ACTIONS(240),
    [sym__pp] = ACTIONS(240),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym_title] = ACTIONS(244),
    [anon_sym_NOTE_COLON] = ACTIONS(246),
    [anon_sym_TIP_COLON] = ACTIONS(244),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(244),
    [anon_sym_CAUTION_COLON] = ACTIONS(244),
    [anon_sym_WARNING_COLON] = ACTIONS(244),
    [aux_sym__list_item_token1] = ACTIONS(246),
    [aux_sym__list_item_token2] = ACTIONS(244),
    [aux_sym__list_item_token3] = ACTIONS(244),
    [anon_sym_LBRACK_COMMA] = ACTIONS(244),
    [aux_sym_code_token1] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(244),
    [anon_sym_image_COLON_COLON] = ACTIONS(244),
    [aux_sym_url_token1] = ACTIONS(246),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(244),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(244),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(244),
    [anon_sym_LT_LT] = ACTIONS(244),
    [anon_sym_xref_COLON] = ACTIONS(246),
    [anon_sym_audio_COLON_COLON] = ACTIONS(244),
    [anon_sym_video_COLON_COLON] = ACTIONS(244),
    [sym_emphasis] = ACTIONS(246),
    [sym_strong] = ACTIONS(246),
    [sym_monospace] = ACTIONS(246),
    [sym_superscript] = ACTIONS(246),
    [sym_subscript] = ACTIONS(244),
    [sym__blank] = ACTIONS(244),
    [sym__empty] = ACTIONS(244),
    [sym__sp] = ACTIONS(244),
    [sym__nbsp] = ACTIONS(244),
    [sym__zwsp] = ACTIONS(244),
    [sym__wj] = ACTIONS(244),
    [sym__apos] = ACTIONS(244),
    [sym__quot] = ACTIONS(244),
    [sym__lsquo] = ACTIONS(244),
    [sym__rsquo] = ACTIONS(244),
    [sym__ldquo] = ACTIONS(244),
    [sym__rdquo] = ACTIONS(244),
    [sym__deg] = ACTIONS(244),
    [sym__plus] = ACTIONS(244),
    [sym__brvbar] = ACTIONS(244),
    [sym__vbar] = ACTIONS(244),
    [sym__amp] = ACTIONS(244),
    [sym__lt] = ACTIONS(244),
    [sym__gt] = ACTIONS(244),
    [sym__startsb] = ACTIONS(244),
    [sym__endsb] = ACTIONS(244),
    [sym__caret] = ACTIONS(244),
    [sym__asterisk] = ACTIONS(244),
    [sym__tilde] = ACTIONS(244),
    [sym__backslash] = ACTIONS(244),
    [sym__backtick] = ACTIONS(244),
    [sym__two_colons] = ACTIONS(244),
    [sym__two_semicolons] = ACTIONS(244),
    [sym__cpp] = ACTIONS(244),
    [sym__pp] = ACTIONS(244),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym_title] = ACTIONS(248),
    [anon_sym_NOTE_COLON] = ACTIONS(250),
    [anon_sym_TIP_COLON] = ACTIONS(248),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(248),
    [anon_sym_CAUTION_COLON] = ACTIONS(248),
    [anon_sym_WARNING_COLON] = ACTIONS(248),
    [aux_sym__list_item_token1] = ACTIONS(250),
    [aux_sym__list_item_token2] = ACTIONS(248),
    [aux_sym__list_item_token3] = ACTIONS(248),
    [anon_sym_LBRACK_COMMA] = ACTIONS(248),
    [aux_sym_code_token1] = ACTIONS(250),
    [anon_sym_SLASH_SLASH] = ACTIONS(248),
    [anon_sym_image_COLON_COLON] = ACTIONS(248),
    [aux_sym_url_token1] = ACTIONS(250),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(248),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(248),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_xref_COLON] = ACTIONS(250),
    [anon_sym_audio_COLON_COLON] = ACTIONS(248),
    [anon_sym_video_COLON_COLON] = ACTIONS(248),
    [sym_emphasis] = ACTIONS(250),
    [sym_strong] = ACTIONS(250),
    [sym_monospace] = ACTIONS(250),
    [sym_superscript] = ACTIONS(250),
    [sym_subscript] = ACTIONS(248),
    [sym__blank] = ACTIONS(248),
    [sym__empty] = ACTIONS(248),
    [sym__sp] = ACTIONS(248),
    [sym__nbsp] = ACTIONS(248),
    [sym__zwsp] = ACTIONS(248),
    [sym__wj] = ACTIONS(248),
    [sym__apos] = ACTIONS(248),
    [sym__quot] = ACTIONS(248),
    [sym__lsquo] = ACTIONS(248),
    [sym__rsquo] = ACTIONS(248),
    [sym__ldquo] = ACTIONS(248),
    [sym__rdquo] = ACTIONS(248),
    [sym__deg] = ACTIONS(248),
    [sym__plus] = ACTIONS(248),
    [sym__brvbar] = ACTIONS(248),
    [sym__vbar] = ACTIONS(248),
    [sym__amp] = ACTIONS(248),
    [sym__lt] = ACTIONS(248),
    [sym__gt] = ACTIONS(248),
    [sym__startsb] = ACTIONS(248),
    [sym__endsb] = ACTIONS(248),
    [sym__caret] = ACTIONS(248),
    [sym__asterisk] = ACTIONS(248),
    [sym__tilde] = ACTIONS(248),
    [sym__backslash] = ACTIONS(248),
    [sym__backtick] = ACTIONS(248),
    [sym__two_colons] = ACTIONS(248),
    [sym__two_semicolons] = ACTIONS(248),
    [sym__cpp] = ACTIONS(248),
    [sym__pp] = ACTIONS(248),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_title] = ACTIONS(252),
    [anon_sym_NOTE_COLON] = ACTIONS(254),
    [anon_sym_TIP_COLON] = ACTIONS(252),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(252),
    [anon_sym_CAUTION_COLON] = ACTIONS(252),
    [anon_sym_WARNING_COLON] = ACTIONS(252),
    [aux_sym__list_item_token1] = ACTIONS(254),
    [aux_sym__list_item_token2] = ACTIONS(252),
    [aux_sym__list_item_token3] = ACTIONS(252),
    [anon_sym_LBRACK_COMMA] = ACTIONS(252),
    [aux_sym_code_token1] = ACTIONS(254),
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_image_COLON_COLON] = ACTIONS(252),
    [aux_sym_url_token1] = ACTIONS(254),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(252),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(252),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(252),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_xref_COLON] = ACTIONS(254),
    [anon_sym_audio_COLON_COLON] = ACTIONS(252),
    [anon_sym_video_COLON_COLON] = ACTIONS(252),
    [sym_emphasis] = ACTIONS(254),
    [sym_strong] = ACTIONS(254),
    [sym_monospace] = ACTIONS(254),
    [sym_superscript] = ACTIONS(254),
    [sym_subscript] = ACTIONS(252),
    [sym__blank] = ACTIONS(252),
    [sym__empty] = ACTIONS(252),
    [sym__sp] = ACTIONS(252),
    [sym__nbsp] = ACTIONS(252),
    [sym__zwsp] = ACTIONS(252),
    [sym__wj] = ACTIONS(252),
    [sym__apos] = ACTIONS(252),
    [sym__quot] = ACTIONS(252),
    [sym__lsquo] = ACTIONS(252),
    [sym__rsquo] = ACTIONS(252),
    [sym__ldquo] = ACTIONS(252),
    [sym__rdquo] = ACTIONS(252),
    [sym__deg] = ACTIONS(252),
    [sym__plus] = ACTIONS(252),
    [sym__brvbar] = ACTIONS(252),
    [sym__vbar] = ACTIONS(252),
    [sym__amp] = ACTIONS(252),
    [sym__lt] = ACTIONS(252),
    [sym__gt] = ACTIONS(252),
    [sym__startsb] = ACTIONS(252),
    [sym__endsb] = ACTIONS(252),
    [sym__caret] = ACTIONS(252),
    [sym__asterisk] = ACTIONS(252),
    [sym__tilde] = ACTIONS(252),
    [sym__backslash] = ACTIONS(252),
    [sym__backtick] = ACTIONS(252),
    [sym__two_colons] = ACTIONS(252),
    [sym__two_semicolons] = ACTIONS(252),
    [sym__cpp] = ACTIONS(252),
    [sym__pp] = ACTIONS(252),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_title] = ACTIONS(256),
    [anon_sym_NOTE_COLON] = ACTIONS(258),
    [anon_sym_TIP_COLON] = ACTIONS(256),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(256),
    [anon_sym_CAUTION_COLON] = ACTIONS(256),
    [anon_sym_WARNING_COLON] = ACTIONS(256),
    [aux_sym__list_item_token1] = ACTIONS(258),
    [aux_sym__list_item_token2] = ACTIONS(256),
    [aux_sym__list_item_token3] = ACTIONS(256),
    [anon_sym_LBRACK_COMMA] = ACTIONS(256),
    [aux_sym_code_token1] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(256),
    [anon_sym_image_COLON_COLON] = ACTIONS(256),
    [aux_sym_url_token1] = ACTIONS(258),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(256),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(256),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(256),
    [anon_sym_LT_LT] = ACTIONS(256),
    [anon_sym_xref_COLON] = ACTIONS(258),
    [anon_sym_audio_COLON_COLON] = ACTIONS(256),
    [anon_sym_video_COLON_COLON] = ACTIONS(256),
    [sym_emphasis] = ACTIONS(258),
    [sym_strong] = ACTIONS(258),
    [sym_monospace] = ACTIONS(258),
    [sym_superscript] = ACTIONS(258),
    [sym_subscript] = ACTIONS(256),
    [sym__blank] = ACTIONS(256),
    [sym__empty] = ACTIONS(256),
    [sym__sp] = ACTIONS(256),
    [sym__nbsp] = ACTIONS(256),
    [sym__zwsp] = ACTIONS(256),
    [sym__wj] = ACTIONS(256),
    [sym__apos] = ACTIONS(256),
    [sym__quot] = ACTIONS(256),
    [sym__lsquo] = ACTIONS(256),
    [sym__rsquo] = ACTIONS(256),
    [sym__ldquo] = ACTIONS(256),
    [sym__rdquo] = ACTIONS(256),
    [sym__deg] = ACTIONS(256),
    [sym__plus] = ACTIONS(256),
    [sym__brvbar] = ACTIONS(256),
    [sym__vbar] = ACTIONS(256),
    [sym__amp] = ACTIONS(256),
    [sym__lt] = ACTIONS(256),
    [sym__gt] = ACTIONS(256),
    [sym__startsb] = ACTIONS(256),
    [sym__endsb] = ACTIONS(256),
    [sym__caret] = ACTIONS(256),
    [sym__asterisk] = ACTIONS(256),
    [sym__tilde] = ACTIONS(256),
    [sym__backslash] = ACTIONS(256),
    [sym__backtick] = ACTIONS(256),
    [sym__two_colons] = ACTIONS(256),
    [sym__two_semicolons] = ACTIONS(256),
    [sym__cpp] = ACTIONS(256),
    [sym__pp] = ACTIONS(256),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [sym_title] = ACTIONS(260),
    [anon_sym_NOTE_COLON] = ACTIONS(262),
    [anon_sym_TIP_COLON] = ACTIONS(260),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(260),
    [anon_sym_CAUTION_COLON] = ACTIONS(260),
    [anon_sym_WARNING_COLON] = ACTIONS(260),
    [aux_sym__list_item_token1] = ACTIONS(262),
    [aux_sym__list_item_token2] = ACTIONS(260),
    [aux_sym__list_item_token3] = ACTIONS(260),
    [anon_sym_LBRACK_COMMA] = ACTIONS(260),
    [aux_sym_code_token1] = ACTIONS(262),
    [anon_sym_SLASH_SLASH] = ACTIONS(260),
    [anon_sym_image_COLON_COLON] = ACTIONS(260),
    [aux_sym_url_token1] = ACTIONS(262),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(260),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(260),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(260),
    [anon_sym_xref_COLON] = ACTIONS(262),
    [anon_sym_audio_COLON_COLON] = ACTIONS(260),
    [anon_sym_video_COLON_COLON] = ACTIONS(260),
    [sym_emphasis] = ACTIONS(262),
    [sym_strong] = ACTIONS(262),
    [sym_monospace] = ACTIONS(262),
    [sym_superscript] = ACTIONS(262),
    [sym_subscript] = ACTIONS(260),
    [sym__blank] = ACTIONS(260),
    [sym__empty] = ACTIONS(260),
    [sym__sp] = ACTIONS(260),
    [sym__nbsp] = ACTIONS(260),
    [sym__zwsp] = ACTIONS(260),
    [sym__wj] = ACTIONS(260),
    [sym__apos] = ACTIONS(260),
    [sym__quot] = ACTIONS(260),
    [sym__lsquo] = ACTIONS(260),
    [sym__rsquo] = ACTIONS(260),
    [sym__ldquo] = ACTIONS(260),
    [sym__rdquo] = ACTIONS(260),
    [sym__deg] = ACTIONS(260),
    [sym__plus] = ACTIONS(260),
    [sym__brvbar] = ACTIONS(260),
    [sym__vbar] = ACTIONS(260),
    [sym__amp] = ACTIONS(260),
    [sym__lt] = ACTIONS(260),
    [sym__gt] = ACTIONS(260),
    [sym__startsb] = ACTIONS(260),
    [sym__endsb] = ACTIONS(260),
    [sym__caret] = ACTIONS(260),
    [sym__asterisk] = ACTIONS(260),
    [sym__tilde] = ACTIONS(260),
    [sym__backslash] = ACTIONS(260),
    [sym__backtick] = ACTIONS(260),
    [sym__two_colons] = ACTIONS(260),
    [sym__two_semicolons] = ACTIONS(260),
    [sym__cpp] = ACTIONS(260),
    [sym__pp] = ACTIONS(260),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym_title] = ACTIONS(264),
    [anon_sym_NOTE_COLON] = ACTIONS(266),
    [anon_sym_TIP_COLON] = ACTIONS(264),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(264),
    [anon_sym_CAUTION_COLON] = ACTIONS(264),
    [anon_sym_WARNING_COLON] = ACTIONS(264),
    [aux_sym__list_item_token1] = ACTIONS(266),
    [aux_sym__list_item_token2] = ACTIONS(264),
    [aux_sym__list_item_token3] = ACTIONS(264),
    [anon_sym_LBRACK_COMMA] = ACTIONS(264),
    [aux_sym_code_token1] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(264),
    [anon_sym_image_COLON_COLON] = ACTIONS(264),
    [aux_sym_url_token1] = ACTIONS(266),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(264),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(264),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_xref_COLON] = ACTIONS(266),
    [anon_sym_audio_COLON_COLON] = ACTIONS(264),
    [anon_sym_video_COLON_COLON] = ACTIONS(264),
    [sym_emphasis] = ACTIONS(266),
    [sym_strong] = ACTIONS(266),
    [sym_monospace] = ACTIONS(266),
    [sym_superscript] = ACTIONS(266),
    [sym_subscript] = ACTIONS(264),
    [sym__blank] = ACTIONS(264),
    [sym__empty] = ACTIONS(264),
    [sym__sp] = ACTIONS(264),
    [sym__nbsp] = ACTIONS(264),
    [sym__zwsp] = ACTIONS(264),
    [sym__wj] = ACTIONS(264),
    [sym__apos] = ACTIONS(264),
    [sym__quot] = ACTIONS(264),
    [sym__lsquo] = ACTIONS(264),
    [sym__rsquo] = ACTIONS(264),
    [sym__ldquo] = ACTIONS(264),
    [sym__rdquo] = ACTIONS(264),
    [sym__deg] = ACTIONS(264),
    [sym__plus] = ACTIONS(264),
    [sym__brvbar] = ACTIONS(264),
    [sym__vbar] = ACTIONS(264),
    [sym__amp] = ACTIONS(264),
    [sym__lt] = ACTIONS(264),
    [sym__gt] = ACTIONS(264),
    [sym__startsb] = ACTIONS(264),
    [sym__endsb] = ACTIONS(264),
    [sym__caret] = ACTIONS(264),
    [sym__asterisk] = ACTIONS(264),
    [sym__tilde] = ACTIONS(264),
    [sym__backslash] = ACTIONS(264),
    [sym__backtick] = ACTIONS(264),
    [sym__two_colons] = ACTIONS(264),
    [sym__two_semicolons] = ACTIONS(264),
    [sym__cpp] = ACTIONS(264),
    [sym__pp] = ACTIONS(264),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [sym_title] = ACTIONS(268),
    [anon_sym_NOTE_COLON] = ACTIONS(270),
    [anon_sym_TIP_COLON] = ACTIONS(268),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(268),
    [anon_sym_CAUTION_COLON] = ACTIONS(268),
    [anon_sym_WARNING_COLON] = ACTIONS(268),
    [aux_sym__list_item_token1] = ACTIONS(270),
    [aux_sym__list_item_token2] = ACTIONS(268),
    [aux_sym__list_item_token3] = ACTIONS(268),
    [anon_sym_LBRACK_COMMA] = ACTIONS(268),
    [aux_sym_code_token1] = ACTIONS(270),
    [anon_sym_SLASH_SLASH] = ACTIONS(268),
    [anon_sym_image_COLON_COLON] = ACTIONS(268),
    [aux_sym_url_token1] = ACTIONS(270),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(268),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(268),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_xref_COLON] = ACTIONS(270),
    [anon_sym_audio_COLON_COLON] = ACTIONS(268),
    [anon_sym_video_COLON_COLON] = ACTIONS(268),
    [sym_emphasis] = ACTIONS(270),
    [sym_strong] = ACTIONS(270),
    [sym_monospace] = ACTIONS(270),
    [sym_superscript] = ACTIONS(270),
    [sym_subscript] = ACTIONS(268),
    [sym__blank] = ACTIONS(268),
    [sym__empty] = ACTIONS(268),
    [sym__sp] = ACTIONS(268),
    [sym__nbsp] = ACTIONS(268),
    [sym__zwsp] = ACTIONS(268),
    [sym__wj] = ACTIONS(268),
    [sym__apos] = ACTIONS(268),
    [sym__quot] = ACTIONS(268),
    [sym__lsquo] = ACTIONS(268),
    [sym__rsquo] = ACTIONS(268),
    [sym__ldquo] = ACTIONS(268),
    [sym__rdquo] = ACTIONS(268),
    [sym__deg] = ACTIONS(268),
    [sym__plus] = ACTIONS(268),
    [sym__brvbar] = ACTIONS(268),
    [sym__vbar] = ACTIONS(268),
    [sym__amp] = ACTIONS(268),
    [sym__lt] = ACTIONS(268),
    [sym__gt] = ACTIONS(268),
    [sym__startsb] = ACTIONS(268),
    [sym__endsb] = ACTIONS(268),
    [sym__caret] = ACTIONS(268),
    [sym__asterisk] = ACTIONS(268),
    [sym__tilde] = ACTIONS(268),
    [sym__backslash] = ACTIONS(268),
    [sym__backtick] = ACTIONS(268),
    [sym__two_colons] = ACTIONS(268),
    [sym__two_semicolons] = ACTIONS(268),
    [sym__cpp] = ACTIONS(268),
    [sym__pp] = ACTIONS(268),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [sym_title] = ACTIONS(272),
    [anon_sym_NOTE_COLON] = ACTIONS(274),
    [anon_sym_TIP_COLON] = ACTIONS(272),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(272),
    [anon_sym_CAUTION_COLON] = ACTIONS(272),
    [anon_sym_WARNING_COLON] = ACTIONS(272),
    [aux_sym__list_item_token1] = ACTIONS(274),
    [aux_sym__list_item_token2] = ACTIONS(272),
    [aux_sym__list_item_token3] = ACTIONS(272),
    [anon_sym_LBRACK_COMMA] = ACTIONS(272),
    [aux_sym_code_token1] = ACTIONS(274),
    [anon_sym_SLASH_SLASH] = ACTIONS(272),
    [anon_sym_image_COLON_COLON] = ACTIONS(272),
    [aux_sym_url_token1] = ACTIONS(274),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(272),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(272),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(272),
    [anon_sym_LT_LT] = ACTIONS(272),
    [anon_sym_xref_COLON] = ACTIONS(274),
    [anon_sym_audio_COLON_COLON] = ACTIONS(272),
    [anon_sym_video_COLON_COLON] = ACTIONS(272),
    [sym_emphasis] = ACTIONS(274),
    [sym_strong] = ACTIONS(274),
    [sym_monospace] = ACTIONS(274),
    [sym_superscript] = ACTIONS(274),
    [sym_subscript] = ACTIONS(272),
    [sym__blank] = ACTIONS(272),
    [sym__empty] = ACTIONS(272),
    [sym__sp] = ACTIONS(272),
    [sym__nbsp] = ACTIONS(272),
    [sym__zwsp] = ACTIONS(272),
    [sym__wj] = ACTIONS(272),
    [sym__apos] = ACTIONS(272),
    [sym__quot] = ACTIONS(272),
    [sym__lsquo] = ACTIONS(272),
    [sym__rsquo] = ACTIONS(272),
    [sym__ldquo] = ACTIONS(272),
    [sym__rdquo] = ACTIONS(272),
    [sym__deg] = ACTIONS(272),
    [sym__plus] = ACTIONS(272),
    [sym__brvbar] = ACTIONS(272),
    [sym__vbar] = ACTIONS(272),
    [sym__amp] = ACTIONS(272),
    [sym__lt] = ACTIONS(272),
    [sym__gt] = ACTIONS(272),
    [sym__startsb] = ACTIONS(272),
    [sym__endsb] = ACTIONS(272),
    [sym__caret] = ACTIONS(272),
    [sym__asterisk] = ACTIONS(272),
    [sym__tilde] = ACTIONS(272),
    [sym__backslash] = ACTIONS(272),
    [sym__backtick] = ACTIONS(272),
    [sym__two_colons] = ACTIONS(272),
    [sym__two_semicolons] = ACTIONS(272),
    [sym__cpp] = ACTIONS(272),
    [sym__pp] = ACTIONS(272),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [sym_title] = ACTIONS(276),
    [anon_sym_NOTE_COLON] = ACTIONS(278),
    [anon_sym_TIP_COLON] = ACTIONS(276),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(276),
    [anon_sym_CAUTION_COLON] = ACTIONS(276),
    [anon_sym_WARNING_COLON] = ACTIONS(276),
    [aux_sym__list_item_token1] = ACTIONS(278),
    [aux_sym__list_item_token2] = ACTIONS(276),
    [aux_sym__list_item_token3] = ACTIONS(276),
    [anon_sym_LBRACK_COMMA] = ACTIONS(276),
    [aux_sym_code_token1] = ACTIONS(278),
    [anon_sym_SLASH_SLASH] = ACTIONS(276),
    [anon_sym_image_COLON_COLON] = ACTIONS(276),
    [aux_sym_url_token1] = ACTIONS(278),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(276),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(276),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(276),
    [anon_sym_LT_LT] = ACTIONS(276),
    [anon_sym_xref_COLON] = ACTIONS(278),
    [anon_sym_audio_COLON_COLON] = ACTIONS(276),
    [anon_sym_video_COLON_COLON] = ACTIONS(276),
    [sym_emphasis] = ACTIONS(278),
    [sym_strong] = ACTIONS(278),
    [sym_monospace] = ACTIONS(278),
    [sym_superscript] = ACTIONS(278),
    [sym_subscript] = ACTIONS(276),
    [sym__blank] = ACTIONS(276),
    [sym__empty] = ACTIONS(276),
    [sym__sp] = ACTIONS(276),
    [sym__nbsp] = ACTIONS(276),
    [sym__zwsp] = ACTIONS(276),
    [sym__wj] = ACTIONS(276),
    [sym__apos] = ACTIONS(276),
    [sym__quot] = ACTIONS(276),
    [sym__lsquo] = ACTIONS(276),
    [sym__rsquo] = ACTIONS(276),
    [sym__ldquo] = ACTIONS(276),
    [sym__rdquo] = ACTIONS(276),
    [sym__deg] = ACTIONS(276),
    [sym__plus] = ACTIONS(276),
    [sym__brvbar] = ACTIONS(276),
    [sym__vbar] = ACTIONS(276),
    [sym__amp] = ACTIONS(276),
    [sym__lt] = ACTIONS(276),
    [sym__gt] = ACTIONS(276),
    [sym__startsb] = ACTIONS(276),
    [sym__endsb] = ACTIONS(276),
    [sym__caret] = ACTIONS(276),
    [sym__asterisk] = ACTIONS(276),
    [sym__tilde] = ACTIONS(276),
    [sym__backslash] = ACTIONS(276),
    [sym__backtick] = ACTIONS(276),
    [sym__two_colons] = ACTIONS(276),
    [sym__two_semicolons] = ACTIONS(276),
    [sym__cpp] = ACTIONS(276),
    [sym__pp] = ACTIONS(276),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [sym_title] = ACTIONS(280),
    [anon_sym_NOTE_COLON] = ACTIONS(282),
    [anon_sym_TIP_COLON] = ACTIONS(280),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(280),
    [anon_sym_CAUTION_COLON] = ACTIONS(280),
    [anon_sym_WARNING_COLON] = ACTIONS(280),
    [aux_sym__list_item_token1] = ACTIONS(282),
    [aux_sym__list_item_token2] = ACTIONS(280),
    [aux_sym__list_item_token3] = ACTIONS(280),
    [anon_sym_LBRACK_COMMA] = ACTIONS(280),
    [aux_sym_code_token1] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(280),
    [anon_sym_image_COLON_COLON] = ACTIONS(280),
    [aux_sym_url_token1] = ACTIONS(282),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(280),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(280),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(280),
    [anon_sym_xref_COLON] = ACTIONS(282),
    [anon_sym_audio_COLON_COLON] = ACTIONS(280),
    [anon_sym_video_COLON_COLON] = ACTIONS(280),
    [sym_emphasis] = ACTIONS(282),
    [sym_strong] = ACTIONS(282),
    [sym_monospace] = ACTIONS(282),
    [sym_superscript] = ACTIONS(282),
    [sym_subscript] = ACTIONS(280),
    [sym__blank] = ACTIONS(280),
    [sym__empty] = ACTIONS(280),
    [sym__sp] = ACTIONS(280),
    [sym__nbsp] = ACTIONS(280),
    [sym__zwsp] = ACTIONS(280),
    [sym__wj] = ACTIONS(280),
    [sym__apos] = ACTIONS(280),
    [sym__quot] = ACTIONS(280),
    [sym__lsquo] = ACTIONS(280),
    [sym__rsquo] = ACTIONS(280),
    [sym__ldquo] = ACTIONS(280),
    [sym__rdquo] = ACTIONS(280),
    [sym__deg] = ACTIONS(280),
    [sym__plus] = ACTIONS(280),
    [sym__brvbar] = ACTIONS(280),
    [sym__vbar] = ACTIONS(280),
    [sym__amp] = ACTIONS(280),
    [sym__lt] = ACTIONS(280),
    [sym__gt] = ACTIONS(280),
    [sym__startsb] = ACTIONS(280),
    [sym__endsb] = ACTIONS(280),
    [sym__caret] = ACTIONS(280),
    [sym__asterisk] = ACTIONS(280),
    [sym__tilde] = ACTIONS(280),
    [sym__backslash] = ACTIONS(280),
    [sym__backtick] = ACTIONS(280),
    [sym__two_colons] = ACTIONS(280),
    [sym__two_semicolons] = ACTIONS(280),
    [sym__cpp] = ACTIONS(280),
    [sym__pp] = ACTIONS(280),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(284), 1,
      anon_sym_LF,
    STATE(42), 3,
      sym__inline_element,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(286), 6,
      aux_sym_code_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(288), 30,
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
    ACTIONS(290), 1,
      anon_sym_LF,
    STATE(42), 3,
      sym__inline_element,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(292), 6,
      aux_sym_code_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(295), 30,
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
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(302), 1,
      anon_sym_COLON_COLON,
    ACTIONS(300), 36,
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
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 36,
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
    ACTIONS(308), 1,
      aux_sym_note_token1,
    ACTIONS(310), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(50), 1,
      aux_sym_code_repeat1,
  [195] = 3,
    ACTIONS(312), 1,
      aux_sym_note_token1,
    ACTIONS(314), 1,
      aux_sym_table_token1,
    STATE(52), 1,
      aux_sym_code_repeat1,
  [205] = 3,
    ACTIONS(316), 1,
      aux_sym_note_token1,
    ACTIONS(318), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(48), 1,
      aux_sym_code_repeat1,
  [215] = 3,
    ACTIONS(320), 1,
      aux_sym_note_token1,
    ACTIONS(323), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(48), 1,
      aux_sym_code_repeat1,
  [225] = 3,
    ACTIONS(325), 1,
      aux_sym_note_token1,
    ACTIONS(327), 1,
      aux_sym_table_token1,
    STATE(46), 1,
      aux_sym_code_repeat1,
  [235] = 3,
    ACTIONS(316), 1,
      aux_sym_note_token1,
    ACTIONS(329), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(48), 1,
      aux_sym_code_repeat1,
  [245] = 3,
    ACTIONS(331), 1,
      aux_sym_note_token1,
    ACTIONS(333), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(47), 1,
      aux_sym_code_repeat1,
  [255] = 3,
    ACTIONS(323), 1,
      aux_sym_table_token1,
    ACTIONS(335), 1,
      aux_sym_note_token1,
    STATE(52), 1,
      aux_sym_code_repeat1,
  [265] = 2,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_GT_GT,
  [272] = 2,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    ACTIONS(344), 1,
      aux_sym_audio_token1,
  [279] = 2,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    ACTIONS(348), 1,
      aux_sym_footnote_token1,
  [286] = 2,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    ACTIONS(352), 1,
      aux_sym_audio_token1,
  [293] = 2,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    ACTIONS(356), 1,
      aux_sym_kbd_token1,
  [300] = 2,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      aux_sym_image_token2,
  [307] = 2,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    ACTIONS(364), 1,
      aux_sym_audio_token1,
  [314] = 2,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 1,
      aux_sym_image_token2,
  [321] = 2,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    ACTIONS(372), 1,
      aux_sym_audio_token1,
  [328] = 2,
    ACTIONS(374), 1,
      anon_sym_,
    ACTIONS(376), 1,
      aux_sym_code_token1,
  [335] = 1,
    ACTIONS(378), 1,
      anon_sym_RBRACK_LF,
  [339] = 1,
    ACTIONS(380), 1,
      aux_sym_code_token1,
  [343] = 1,
    ACTIONS(382), 1,
      aux_sym_code_token1,
  [347] = 1,
    ACTIONS(384), 1,
      aux_sym_tip_token1,
  [351] = 1,
    ACTIONS(386), 1,
      aux_sym_code_token1,
  [355] = 1,
    ACTIONS(388), 1,
      aux_sym_note_token1,
  [359] = 1,
    ACTIONS(390), 1,
      aux_sym_code_token1,
  [363] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [367] = 1,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
  [371] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
  [375] = 1,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
  [379] = 1,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
  [383] = 1,
    ACTIONS(402), 1,
      aux_sym_image_token2,
  [387] = 1,
    ACTIONS(404), 1,
      aux_sym_code_token2,
  [391] = 1,
    ACTIONS(406), 1,
      aux_sym_tip_token1,
  [395] = 1,
    ACTIONS(408), 1,
      anon_sym_RBRACK_LF,
  [399] = 1,
    ACTIONS(410), 1,
      aux_sym_image_token2,
  [403] = 1,
    ACTIONS(412), 1,
      anon_sym_GT_GT,
  [407] = 1,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
  [411] = 1,
    ACTIONS(416), 1,
      anon_sym_RBRACK_LF,
  [415] = 1,
    ACTIONS(418), 1,
      aux_sym_code_token1,
  [419] = 1,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
  [423] = 1,
    ACTIONS(422), 1,
      anon_sym_LF,
  [427] = 1,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
  [431] = 1,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
  [435] = 1,
    ACTIONS(428), 1,
      aux_sym_code_token2,
  [439] = 1,
    ACTIONS(430), 1,
      aux_sym_tip_token1,
  [443] = 1,
    ACTIONS(432), 1,
      anon_sym_LBRACK,
  [447] = 1,
    ACTIONS(434), 1,
      aux_sym_code_token2,
  [451] = 1,
    ACTIONS(436), 1,
      aux_sym_image_token1,
  [455] = 1,
    ACTIONS(438), 1,
      aux_sym_note_token1,
  [459] = 1,
    ACTIONS(440), 1,
      anon_sym_LF,
  [463] = 1,
    ACTIONS(442), 1,
      anon_sym_LBRACK,
  [467] = 1,
    ACTIONS(444), 1,
      anon_sym_LBRACK,
  [471] = 1,
    ACTIONS(446), 1,
      anon_sym_,
  [475] = 1,
    ACTIONS(448), 1,
      aux_sym_code_token2,
  [479] = 1,
    ACTIONS(450), 1,
      aux_sym_tip_token1,
  [483] = 1,
    ACTIONS(452), 1,
      aux_sym_tip_token1,
  [487] = 1,
    ACTIONS(454), 1,
      aux_sym_tip_token1,
  [491] = 1,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(41)] = 0,
  [SMALL_STATE(42)] = 49,
  [SMALL_STATE(43)] = 98,
  [SMALL_STATE(44)] = 143,
  [SMALL_STATE(45)] = 185,
  [SMALL_STATE(46)] = 195,
  [SMALL_STATE(47)] = 205,
  [SMALL_STATE(48)] = 215,
  [SMALL_STATE(49)] = 225,
  [SMALL_STATE(50)] = 235,
  [SMALL_STATE(51)] = 245,
  [SMALL_STATE(52)] = 255,
  [SMALL_STATE(53)] = 265,
  [SMALL_STATE(54)] = 272,
  [SMALL_STATE(55)] = 279,
  [SMALL_STATE(56)] = 286,
  [SMALL_STATE(57)] = 293,
  [SMALL_STATE(58)] = 300,
  [SMALL_STATE(59)] = 307,
  [SMALL_STATE(60)] = 314,
  [SMALL_STATE(61)] = 321,
  [SMALL_STATE(62)] = 328,
  [SMALL_STATE(63)] = 335,
  [SMALL_STATE(64)] = 339,
  [SMALL_STATE(65)] = 343,
  [SMALL_STATE(66)] = 347,
  [SMALL_STATE(67)] = 351,
  [SMALL_STATE(68)] = 355,
  [SMALL_STATE(69)] = 359,
  [SMALL_STATE(70)] = 363,
  [SMALL_STATE(71)] = 367,
  [SMALL_STATE(72)] = 371,
  [SMALL_STATE(73)] = 375,
  [SMALL_STATE(74)] = 379,
  [SMALL_STATE(75)] = 383,
  [SMALL_STATE(76)] = 387,
  [SMALL_STATE(77)] = 391,
  [SMALL_STATE(78)] = 395,
  [SMALL_STATE(79)] = 399,
  [SMALL_STATE(80)] = 403,
  [SMALL_STATE(81)] = 407,
  [SMALL_STATE(82)] = 411,
  [SMALL_STATE(83)] = 415,
  [SMALL_STATE(84)] = 419,
  [SMALL_STATE(85)] = 423,
  [SMALL_STATE(86)] = 427,
  [SMALL_STATE(87)] = 431,
  [SMALL_STATE(88)] = 435,
  [SMALL_STATE(89)] = 439,
  [SMALL_STATE(90)] = 443,
  [SMALL_STATE(91)] = 447,
  [SMALL_STATE(92)] = 451,
  [SMALL_STATE(93)] = 455,
  [SMALL_STATE(94)] = 459,
  [SMALL_STATE(95)] = 463,
  [SMALL_STATE(96)] = 467,
  [SMALL_STATE(97)] = 471,
  [SMALL_STATE(98)] = 475,
  [SMALL_STATE(99)] = 479,
  [SMALL_STATE(100)] = 483,
  [SMALL_STATE(101)] = 487,
  [SMALL_STATE(102)] = 491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(97),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(97),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 5),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 7, .production_id = 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 6, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 6, .production_id = 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(42),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(44),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(48),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(52),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
