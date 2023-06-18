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
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 39
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  aux_sym_code_token1 = 14,
  aux_sym_code_token2 = 15,
  anon_sym_RBRACK_LF = 16,
  anon_sym_DASH_DASH_DASH_DASH_LF = 17,
  aux_sym_code_token3 = 18,
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
  anon_sym_pass_COLON_LBRACK = 45,
  sym__blank = 46,
  sym__empty = 47,
  sym__sp = 48,
  sym__nbsp = 49,
  sym__zwsp = 50,
  sym__wj = 51,
  sym__apos = 52,
  sym__quot = 53,
  sym__lsquo = 54,
  sym__rsquo = 55,
  sym__ldquo = 56,
  sym__rdquo = 57,
  sym__deg = 58,
  sym__plus = 59,
  sym__brvbar = 60,
  sym__vbar = 61,
  sym__amp = 62,
  sym__lt = 63,
  sym__gt = 64,
  sym__startsb = 65,
  sym__endsb = 66,
  sym__caret = 67,
  sym__asterisk = 68,
  sym__tilde = 69,
  sym__backslash = 70,
  sym__backtick = 71,
  sym__two_colons = 72,
  sym__two_semicolons = 73,
  sym__cpp = 74,
  sym__pp = 75,
  sym_document = 76,
  sym__block = 77,
  sym__admonitions = 78,
  sym_note = 79,
  sym_tip = 80,
  sym_important = 81,
  sym_caution = 82,
  sym_warning = 83,
  sym_list = 84,
  sym__list_item = 85,
  sym_code = 86,
  sym_comment = 87,
  sym_image = 88,
  sym_url = 89,
  sym_footnote = 90,
  sym_kbd = 91,
  sym_table = 92,
  sym_xref = 93,
  sym__inline_xref = 94,
  sym__xref = 95,
  sym_description_list = 96,
  sym_audio = 97,
  sym_video = 98,
  sym_paragraph = 99,
  sym__inline_element = 100,
  sym_passthrough = 101,
  sym_replacement = 102,
  aux_sym_document_repeat1 = 103,
  aux_sym_list_repeat1 = 104,
  aux_sym_code_repeat1 = 105,
  aux_sym_table_repeat1 = 106,
  aux_sym_paragraph_repeat1 = 107,
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
  [aux_sym_code_token1] = "code_token1",
  [aux_sym_code_token2] = "code_token2",
  [anon_sym_RBRACK_LF] = "]\n",
  [anon_sym_DASH_DASH_DASH_DASH_LF] = "----\n",
  [aux_sym_code_token3] = "code_token3",
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
  [anon_sym_pass_COLON_LBRACK] = "pass:[",
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
  [sym_passthrough] = "passthrough",
  [sym_replacement] = "replacement",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
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
  [aux_sym_code_token1] = aux_sym_code_token1,
  [aux_sym_code_token2] = aux_sym_code_token2,
  [anon_sym_RBRACK_LF] = anon_sym_RBRACK_LF,
  [anon_sym_DASH_DASH_DASH_DASH_LF] = anon_sym_DASH_DASH_DASH_DASH_LF,
  [aux_sym_code_token3] = aux_sym_code_token3,
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
  [anon_sym_pass_COLON_LBRACK] = anon_sym_pass_COLON_LBRACK,
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
  [sym_passthrough] = sym_passthrough,
  [sym_replacement] = sym_replacement,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
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
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_token2] = {
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
  [aux_sym_code_token3] = {
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
  [anon_sym_pass_COLON_LBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_passthrough] = {
    .visible = true,
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
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
  field_language = 2,
  field_title = 3,
  field_url = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_language] = "language",
  [field_title] = "title",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
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
    {field_content, 4},
    {field_language, 1},
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
  [96] = 96,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(205);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == ',') ADVANCE(398);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(231);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == 'C') ADVANCE(248);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == 'N') ADVANCE(261);
      if (lookahead == 'T') ADVANCE(253);
      if (lookahead == 'W') ADVANCE(249);
      if (lookahead == '[') ADVANCE(381);
      if (lookahead == ']') ADVANCE(388);
      if (lookahead == '^') ADVANCE(200);
      if (lookahead == '`') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'k') ADVANCE(275);
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == 'v') ADVANCE(286);
      if (lookahead == 'x') ADVANCE(294);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(394);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == ':') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '^') ADVANCE(200);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == '`') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(370);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(376);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(378);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(218);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(228);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(226);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == ':') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ']') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(387);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(384);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(385);
      if (lookahead == '_') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '_') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(403);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(379);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(405);
      END_STATE();
    case 37:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '[') ADVANCE(391);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '[') ADVANCE(414);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '[') ADVANCE(389);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(403);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(379);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(405);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '^') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '_') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '`') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 50:
      if (lookahead == '<') ADVANCE(397);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(396);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(1);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == '>') ADVANCE(399);
      END_STATE();
    case 58:
      if (lookahead == '[') ADVANCE(391);
      END_STATE();
    case 59:
      if (lookahead == '[') ADVANCE(414);
      END_STATE();
    case 60:
      if (lookahead == '[') ADVANCE(389);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 63:
      if (lookahead == '^') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == 'q') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(77);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == 'z') ADVANCE(164);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(183);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(190);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(193);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == 'j') ADVANCE(170);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(191);
      END_STATE();
    case 102:
      if (lookahead == 'k') ADVANCE(192);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 131:
      if (lookahead == 'q') ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == 'q') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'q') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'q') ADVANCE(162);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 163:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 164:
      if (lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 166:
      if (lookahead == '}') ADVANCE(433);
      END_STATE();
    case 167:
      if (lookahead == '}') ADVANCE(432);
      END_STATE();
    case 168:
      if (lookahead == '}') ADVANCE(444);
      END_STATE();
    case 169:
      if (lookahead == '}') ADVANCE(417);
      END_STATE();
    case 170:
      if (lookahead == '}') ADVANCE(420);
      END_STATE();
    case 171:
      if (lookahead == '}') ADVANCE(431);
      END_STATE();
    case 172:
      if (lookahead == '}') ADVANCE(443);
      END_STATE();
    case 173:
      if (lookahead == '}') ADVANCE(427);
      END_STATE();
    case 174:
      if (lookahead == '}') ADVANCE(421);
      END_STATE();
    case 175:
      if (lookahead == '}') ADVANCE(418);
      END_STATE();
    case 176:
      if (lookahead == '}') ADVANCE(428);
      END_STATE();
    case 177:
      if (lookahead == '}') ADVANCE(422);
      END_STATE();
    case 178:
      if (lookahead == '}') ADVANCE(430);
      END_STATE();
    case 179:
      if (lookahead == '}') ADVANCE(419);
      END_STATE();
    case 180:
      if (lookahead == '}') ADVANCE(415);
      END_STATE();
    case 181:
      if (lookahead == '}') ADVANCE(436);
      END_STATE();
    case 182:
      if (lookahead == '}') ADVANCE(416);
      END_STATE();
    case 183:
      if (lookahead == '}') ADVANCE(435);
      END_STATE();
    case 184:
      if (lookahead == '}') ADVANCE(425);
      END_STATE();
    case 185:
      if (lookahead == '}') ADVANCE(423);
      END_STATE();
    case 186:
      if (lookahead == '}') ADVANCE(426);
      END_STATE();
    case 187:
      if (lookahead == '}') ADVANCE(424);
      END_STATE();
    case 188:
      if (lookahead == '}') ADVANCE(438);
      END_STATE();
    case 189:
      if (lookahead == '}') ADVANCE(429);
      END_STATE();
    case 190:
      if (lookahead == '}') ADVANCE(434);
      END_STATE();
    case 191:
      if (lookahead == '}') ADVANCE(437);
      END_STATE();
    case 192:
      if (lookahead == '}') ADVANCE(440);
      END_STATE();
    case 193:
      if (lookahead == '}') ADVANCE(439);
      END_STATE();
    case 194:
      if (lookahead == '}') ADVANCE(441);
      END_STATE();
    case 195:
      if (lookahead == '}') ADVANCE(442);
      END_STATE();
    case 196:
      if (lookahead == '~') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 199:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 200:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 201:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 202:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 203:
      if (eof) ADVANCE(205);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(308);
      if (lookahead == 'I') ADVANCE(316);
      if (lookahead == 'N') ADVANCE(321);
      if (lookahead == 'T') ADVANCE(313);
      if (lookahead == 'W') ADVANCE(309);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'k') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == 'v') ADVANCE(346);
      if (lookahead == 'x') ADVANCE(354);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(203)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 204:
      if (eof) ADVANCE(205);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(308);
      if (lookahead == 'I') ADVANCE(316);
      if (lookahead == 'N') ADVANCE(321);
      if (lookahead == 'T') ADVANCE(313);
      if (lookahead == 'W') ADVANCE(309);
      if (lookahead == '[') ADVANCE(382);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(2);
      if (lookahead == '^') ADVANCE(44);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'k') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == 'v') ADVANCE(346);
      if (lookahead == 'x') ADVANCE(354);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '~') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(204)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\n') ADVANCE(395);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '|') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_tip_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__list_item_token2);
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__list_item_token3);
      if (lookahead == '.') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__list_item_token3);
      if (lookahead == '.') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'A') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'A') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'A') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'E') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'G') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'I') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'I') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'I') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'M') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'N') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'N') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'N') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'N') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'O') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'O') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'O') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'P') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'R') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'R') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'T') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'T') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'T') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'T') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'U') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'a') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'a') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'b') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'd') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'd') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'f') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'g') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'i') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'i') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'm') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 's') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == '.') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '_') ADVANCE(301);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(31);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(11);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(37);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(209);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(34);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'A') ADVANCE(332);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'A') ADVANCE(326);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'A') ADVANCE(319);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'I') ADVANCE(325);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'I') ADVANCE(317);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'I') ADVANCE(323);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'M') ADVANCE(324);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(312);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(314);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(331);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(362);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(328);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(327);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(320);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(322);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(303);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'R') ADVANCE(318);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'R') ADVANCE(330);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(311);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(315);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(310);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(329);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(355);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(344);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(338);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(345);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(342);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(304);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(343);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(364);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(366);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(353);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(306);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'g') ADVANCE(340);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(337);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'm') ADVANCE(334);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(351);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(357);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(349);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(358);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(307);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(339);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 's') ADVANCE(356);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 's') ADVANCE(363);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 't') ADVANCE(348);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 't') ADVANCE(341);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(336);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(13);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(38);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(35);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(15);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(39);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(36);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(17);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 's') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_code_token3);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(235);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == ':') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_table_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '\n') ADVANCE(394);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '_') ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '`') ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '^') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__blank);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__empty);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__nbsp);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__zwsp);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__wj);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__apos);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__quot);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__lsquo);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__rsquo);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__ldquo);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__rdquo);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__deg);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__plus);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__brvbar);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__vbar);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__amp);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__lt);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__gt);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__startsb);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__endsb);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__caret);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__asterisk);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__tilde);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__backslash);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__backtick);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__two_colons);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__two_semicolons);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__cpp);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__pp);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 204},
  [2] = {.lex_state = 204},
  [3] = {.lex_state = 204},
  [4] = {.lex_state = 204},
  [5] = {.lex_state = 204},
  [6] = {.lex_state = 204},
  [7] = {.lex_state = 203},
  [8] = {.lex_state = 204},
  [9] = {.lex_state = 204},
  [10] = {.lex_state = 204},
  [11] = {.lex_state = 204},
  [12] = {.lex_state = 204},
  [13] = {.lex_state = 204},
  [14] = {.lex_state = 204},
  [15] = {.lex_state = 204},
  [16] = {.lex_state = 204},
  [17] = {.lex_state = 204},
  [18] = {.lex_state = 204},
  [19] = {.lex_state = 204},
  [20] = {.lex_state = 204},
  [21] = {.lex_state = 204},
  [22] = {.lex_state = 204},
  [23] = {.lex_state = 204},
  [24] = {.lex_state = 204},
  [25] = {.lex_state = 204},
  [26] = {.lex_state = 204},
  [27] = {.lex_state = 204},
  [28] = {.lex_state = 204},
  [29] = {.lex_state = 204},
  [30] = {.lex_state = 204},
  [31] = {.lex_state = 204},
  [32] = {.lex_state = 204},
  [33] = {.lex_state = 204},
  [34] = {.lex_state = 204},
  [35] = {.lex_state = 204},
  [36] = {.lex_state = 204},
  [37] = {.lex_state = 204},
  [38] = {.lex_state = 204},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 215},
  [45] = {.lex_state = 215},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 215},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 62},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 383},
  [56] = {.lex_state = 383},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 204},
  [60] = {.lex_state = 197},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 197},
  [66] = {.lex_state = 383},
  [67] = {.lex_state = 197},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 216},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 204},
  [78] = {.lex_state = 383},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 197},
  [85] = {.lex_state = 197},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 380},
  [90] = {.lex_state = 216},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 197},
  [93] = {.lex_state = 203},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
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
    [aux_sym_code_token1] = ACTIONS(1),
    [aux_sym_code_token2] = ACTIONS(1),
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
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(1),
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
    [sym_document] = STATE(76),
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
    [sym__inline_xref] = STATE(25),
    [sym__xref] = STATE(25),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(39),
    [sym_passthrough] = STATE(39),
    [sym_replacement] = STATE(39),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(5),
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
    [aux_sym_code_token1] = ACTIONS(21),
    [aux_sym_code_token2] = ACTIONS(23),
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
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(49),
    [sym__blank] = ACTIONS(51),
    [sym__empty] = ACTIONS(51),
    [sym__sp] = ACTIONS(51),
    [sym__nbsp] = ACTIONS(51),
    [sym__zwsp] = ACTIONS(51),
    [sym__wj] = ACTIONS(51),
    [sym__apos] = ACTIONS(51),
    [sym__quot] = ACTIONS(51),
    [sym__lsquo] = ACTIONS(51),
    [sym__rsquo] = ACTIONS(51),
    [sym__ldquo] = ACTIONS(51),
    [sym__rdquo] = ACTIONS(51),
    [sym__deg] = ACTIONS(51),
    [sym__plus] = ACTIONS(51),
    [sym__brvbar] = ACTIONS(51),
    [sym__vbar] = ACTIONS(51),
    [sym__amp] = ACTIONS(51),
    [sym__lt] = ACTIONS(51),
    [sym__gt] = ACTIONS(51),
    [sym__startsb] = ACTIONS(51),
    [sym__endsb] = ACTIONS(51),
    [sym__caret] = ACTIONS(51),
    [sym__asterisk] = ACTIONS(51),
    [sym__tilde] = ACTIONS(51),
    [sym__backslash] = ACTIONS(51),
    [sym__backtick] = ACTIONS(51),
    [sym__two_colons] = ACTIONS(51),
    [sym__two_semicolons] = ACTIONS(51),
    [sym__cpp] = ACTIONS(51),
    [sym__pp] = ACTIONS(51),
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
    [sym__list_item] = STATE(5),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [sym_url] = STATE(2),
    [sym_footnote] = STATE(2),
    [sym_kbd] = STATE(2),
    [sym_table] = STATE(2),
    [sym_xref] = STATE(2),
    [sym__inline_xref] = STATE(25),
    [sym__xref] = STATE(25),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(39),
    [sym_passthrough] = STATE(39),
    [sym_replacement] = STATE(39),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_title] = ACTIONS(55),
    [anon_sym_NOTE_COLON] = ACTIONS(58),
    [anon_sym_TIP_COLON] = ACTIONS(61),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(64),
    [anon_sym_CAUTION_COLON] = ACTIONS(67),
    [anon_sym_WARNING_COLON] = ACTIONS(70),
    [aux_sym__list_item_token1] = ACTIONS(73),
    [aux_sym__list_item_token2] = ACTIONS(76),
    [aux_sym__list_item_token3] = ACTIONS(76),
    [aux_sym_code_token1] = ACTIONS(79),
    [aux_sym_code_token2] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(85),
    [anon_sym_image_COLON_COLON] = ACTIONS(88),
    [aux_sym_url_token1] = ACTIONS(91),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(94),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(97),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(100),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_xref_COLON] = ACTIONS(106),
    [anon_sym_audio_COLON_COLON] = ACTIONS(109),
    [anon_sym_video_COLON_COLON] = ACTIONS(112),
    [sym_emphasis] = ACTIONS(115),
    [sym_strong] = ACTIONS(115),
    [sym_monospace] = ACTIONS(115),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(118),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(121),
    [sym__blank] = ACTIONS(124),
    [sym__empty] = ACTIONS(124),
    [sym__sp] = ACTIONS(124),
    [sym__nbsp] = ACTIONS(124),
    [sym__zwsp] = ACTIONS(124),
    [sym__wj] = ACTIONS(124),
    [sym__apos] = ACTIONS(124),
    [sym__quot] = ACTIONS(124),
    [sym__lsquo] = ACTIONS(124),
    [sym__rsquo] = ACTIONS(124),
    [sym__ldquo] = ACTIONS(124),
    [sym__rdquo] = ACTIONS(124),
    [sym__deg] = ACTIONS(124),
    [sym__plus] = ACTIONS(124),
    [sym__brvbar] = ACTIONS(124),
    [sym__vbar] = ACTIONS(124),
    [sym__amp] = ACTIONS(124),
    [sym__lt] = ACTIONS(124),
    [sym__gt] = ACTIONS(124),
    [sym__startsb] = ACTIONS(124),
    [sym__endsb] = ACTIONS(124),
    [sym__caret] = ACTIONS(124),
    [sym__asterisk] = ACTIONS(124),
    [sym__tilde] = ACTIONS(124),
    [sym__backslash] = ACTIONS(124),
    [sym__backtick] = ACTIONS(124),
    [sym__two_colons] = ACTIONS(124),
    [sym__two_semicolons] = ACTIONS(124),
    [sym__cpp] = ACTIONS(124),
    [sym__pp] = ACTIONS(124),
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
    [sym__list_item] = STATE(5),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [sym_url] = STATE(2),
    [sym_footnote] = STATE(2),
    [sym_kbd] = STATE(2),
    [sym_table] = STATE(2),
    [sym_xref] = STATE(2),
    [sym__inline_xref] = STATE(25),
    [sym__xref] = STATE(25),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(39),
    [sym_passthrough] = STATE(39),
    [sym_replacement] = STATE(39),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_title] = ACTIONS(129),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [anon_sym_TIP_COLON] = ACTIONS(9),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(11),
    [anon_sym_CAUTION_COLON] = ACTIONS(13),
    [anon_sym_WARNING_COLON] = ACTIONS(15),
    [aux_sym__list_item_token1] = ACTIONS(17),
    [aux_sym__list_item_token2] = ACTIONS(19),
    [aux_sym__list_item_token3] = ACTIONS(19),
    [aux_sym_code_token1] = ACTIONS(21),
    [aux_sym_code_token2] = ACTIONS(23),
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
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(49),
    [sym__blank] = ACTIONS(51),
    [sym__empty] = ACTIONS(51),
    [sym__sp] = ACTIONS(51),
    [sym__nbsp] = ACTIONS(51),
    [sym__zwsp] = ACTIONS(51),
    [sym__wj] = ACTIONS(51),
    [sym__apos] = ACTIONS(51),
    [sym__quot] = ACTIONS(51),
    [sym__lsquo] = ACTIONS(51),
    [sym__rsquo] = ACTIONS(51),
    [sym__ldquo] = ACTIONS(51),
    [sym__rdquo] = ACTIONS(51),
    [sym__deg] = ACTIONS(51),
    [sym__plus] = ACTIONS(51),
    [sym__brvbar] = ACTIONS(51),
    [sym__vbar] = ACTIONS(51),
    [sym__amp] = ACTIONS(51),
    [sym__lt] = ACTIONS(51),
    [sym__gt] = ACTIONS(51),
    [sym__startsb] = ACTIONS(51),
    [sym__endsb] = ACTIONS(51),
    [sym__caret] = ACTIONS(51),
    [sym__asterisk] = ACTIONS(51),
    [sym__tilde] = ACTIONS(51),
    [sym__backslash] = ACTIONS(51),
    [sym__backtick] = ACTIONS(51),
    [sym__two_colons] = ACTIONS(51),
    [sym__two_semicolons] = ACTIONS(51),
    [sym__cpp] = ACTIONS(51),
    [sym__pp] = ACTIONS(51),
  },
  [4] = {
    [sym__list_item] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_title] = ACTIONS(131),
    [anon_sym_NOTE_COLON] = ACTIONS(133),
    [anon_sym_TIP_COLON] = ACTIONS(131),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(131),
    [anon_sym_CAUTION_COLON] = ACTIONS(131),
    [anon_sym_WARNING_COLON] = ACTIONS(131),
    [aux_sym__list_item_token1] = ACTIONS(135),
    [aux_sym__list_item_token2] = ACTIONS(138),
    [aux_sym__list_item_token3] = ACTIONS(138),
    [aux_sym_code_token1] = ACTIONS(131),
    [aux_sym_code_token2] = ACTIONS(133),
    [anon_sym_SLASH_SLASH] = ACTIONS(131),
    [anon_sym_image_COLON_COLON] = ACTIONS(131),
    [aux_sym_url_token1] = ACTIONS(133),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(131),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(131),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_xref_COLON] = ACTIONS(133),
    [anon_sym_audio_COLON_COLON] = ACTIONS(131),
    [anon_sym_video_COLON_COLON] = ACTIONS(131),
    [sym_emphasis] = ACTIONS(133),
    [sym_strong] = ACTIONS(133),
    [sym_monospace] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(131),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(131),
    [sym__blank] = ACTIONS(131),
    [sym__empty] = ACTIONS(131),
    [sym__sp] = ACTIONS(131),
    [sym__nbsp] = ACTIONS(131),
    [sym__zwsp] = ACTIONS(131),
    [sym__wj] = ACTIONS(131),
    [sym__apos] = ACTIONS(131),
    [sym__quot] = ACTIONS(131),
    [sym__lsquo] = ACTIONS(131),
    [sym__rsquo] = ACTIONS(131),
    [sym__ldquo] = ACTIONS(131),
    [sym__rdquo] = ACTIONS(131),
    [sym__deg] = ACTIONS(131),
    [sym__plus] = ACTIONS(131),
    [sym__brvbar] = ACTIONS(131),
    [sym__vbar] = ACTIONS(131),
    [sym__amp] = ACTIONS(131),
    [sym__lt] = ACTIONS(131),
    [sym__gt] = ACTIONS(131),
    [sym__startsb] = ACTIONS(131),
    [sym__endsb] = ACTIONS(131),
    [sym__caret] = ACTIONS(131),
    [sym__asterisk] = ACTIONS(131),
    [sym__tilde] = ACTIONS(131),
    [sym__backslash] = ACTIONS(131),
    [sym__backtick] = ACTIONS(131),
    [sym__two_colons] = ACTIONS(131),
    [sym__two_semicolons] = ACTIONS(131),
    [sym__cpp] = ACTIONS(131),
    [sym__pp] = ACTIONS(131),
  },
  [5] = {
    [sym__list_item] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_title] = ACTIONS(141),
    [anon_sym_NOTE_COLON] = ACTIONS(143),
    [anon_sym_TIP_COLON] = ACTIONS(141),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(141),
    [anon_sym_CAUTION_COLON] = ACTIONS(141),
    [anon_sym_WARNING_COLON] = ACTIONS(141),
    [aux_sym__list_item_token1] = ACTIONS(17),
    [aux_sym__list_item_token2] = ACTIONS(19),
    [aux_sym__list_item_token3] = ACTIONS(19),
    [aux_sym_code_token1] = ACTIONS(141),
    [aux_sym_code_token2] = ACTIONS(143),
    [anon_sym_SLASH_SLASH] = ACTIONS(141),
    [anon_sym_image_COLON_COLON] = ACTIONS(141),
    [aux_sym_url_token1] = ACTIONS(143),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(141),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(141),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_xref_COLON] = ACTIONS(143),
    [anon_sym_audio_COLON_COLON] = ACTIONS(141),
    [anon_sym_video_COLON_COLON] = ACTIONS(141),
    [sym_emphasis] = ACTIONS(143),
    [sym_strong] = ACTIONS(143),
    [sym_monospace] = ACTIONS(143),
    [sym_superscript] = ACTIONS(143),
    [sym_subscript] = ACTIONS(141),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(141),
    [sym__blank] = ACTIONS(141),
    [sym__empty] = ACTIONS(141),
    [sym__sp] = ACTIONS(141),
    [sym__nbsp] = ACTIONS(141),
    [sym__zwsp] = ACTIONS(141),
    [sym__wj] = ACTIONS(141),
    [sym__apos] = ACTIONS(141),
    [sym__quot] = ACTIONS(141),
    [sym__lsquo] = ACTIONS(141),
    [sym__rsquo] = ACTIONS(141),
    [sym__ldquo] = ACTIONS(141),
    [sym__rdquo] = ACTIONS(141),
    [sym__deg] = ACTIONS(141),
    [sym__plus] = ACTIONS(141),
    [sym__brvbar] = ACTIONS(141),
    [sym__vbar] = ACTIONS(141),
    [sym__amp] = ACTIONS(141),
    [sym__lt] = ACTIONS(141),
    [sym__gt] = ACTIONS(141),
    [sym__startsb] = ACTIONS(141),
    [sym__endsb] = ACTIONS(141),
    [sym__caret] = ACTIONS(141),
    [sym__asterisk] = ACTIONS(141),
    [sym__tilde] = ACTIONS(141),
    [sym__backslash] = ACTIONS(141),
    [sym__backtick] = ACTIONS(141),
    [sym__two_colons] = ACTIONS(141),
    [sym__two_semicolons] = ACTIONS(141),
    [sym__cpp] = ACTIONS(141),
    [sym__pp] = ACTIONS(141),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_title] = ACTIONS(145),
    [anon_sym_NOTE_COLON] = ACTIONS(147),
    [anon_sym_TIP_COLON] = ACTIONS(145),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(145),
    [anon_sym_CAUTION_COLON] = ACTIONS(145),
    [anon_sym_WARNING_COLON] = ACTIONS(145),
    [aux_sym__list_item_token1] = ACTIONS(147),
    [aux_sym__list_item_token2] = ACTIONS(145),
    [aux_sym__list_item_token3] = ACTIONS(145),
    [aux_sym_code_token1] = ACTIONS(145),
    [aux_sym_code_token2] = ACTIONS(147),
    [anon_sym_SLASH_SLASH] = ACTIONS(145),
    [anon_sym_image_COLON_COLON] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(149),
    [aux_sym_url_token1] = ACTIONS(147),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(145),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(145),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(145),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_xref_COLON] = ACTIONS(147),
    [anon_sym_audio_COLON_COLON] = ACTIONS(145),
    [anon_sym_video_COLON_COLON] = ACTIONS(145),
    [sym_emphasis] = ACTIONS(147),
    [sym_strong] = ACTIONS(147),
    [sym_monospace] = ACTIONS(147),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(145),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(145),
    [sym__blank] = ACTIONS(145),
    [sym__empty] = ACTIONS(145),
    [sym__sp] = ACTIONS(145),
    [sym__nbsp] = ACTIONS(145),
    [sym__zwsp] = ACTIONS(145),
    [sym__wj] = ACTIONS(145),
    [sym__apos] = ACTIONS(145),
    [sym__quot] = ACTIONS(145),
    [sym__lsquo] = ACTIONS(145),
    [sym__rsquo] = ACTIONS(145),
    [sym__ldquo] = ACTIONS(145),
    [sym__rdquo] = ACTIONS(145),
    [sym__deg] = ACTIONS(145),
    [sym__plus] = ACTIONS(145),
    [sym__brvbar] = ACTIONS(145),
    [sym__vbar] = ACTIONS(145),
    [sym__amp] = ACTIONS(145),
    [sym__lt] = ACTIONS(145),
    [sym__gt] = ACTIONS(145),
    [sym__startsb] = ACTIONS(145),
    [sym__endsb] = ACTIONS(145),
    [sym__caret] = ACTIONS(145),
    [sym__asterisk] = ACTIONS(145),
    [sym__tilde] = ACTIONS(145),
    [sym__backslash] = ACTIONS(145),
    [sym__backtick] = ACTIONS(145),
    [sym__two_colons] = ACTIONS(145),
    [sym__two_semicolons] = ACTIONS(145),
    [sym__cpp] = ACTIONS(145),
    [sym__pp] = ACTIONS(145),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_title] = ACTIONS(153),
    [anon_sym_NOTE_COLON] = ACTIONS(153),
    [anon_sym_] = ACTIONS(155),
    [anon_sym_TIP_COLON] = ACTIONS(153),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(153),
    [anon_sym_CAUTION_COLON] = ACTIONS(153),
    [anon_sym_WARNING_COLON] = ACTIONS(153),
    [aux_sym__list_item_token1] = ACTIONS(153),
    [aux_sym__list_item_token2] = ACTIONS(153),
    [aux_sym__list_item_token3] = ACTIONS(153),
    [aux_sym_code_token1] = ACTIONS(153),
    [aux_sym_code_token2] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(153),
    [anon_sym_image_COLON_COLON] = ACTIONS(153),
    [aux_sym_url_token1] = ACTIONS(153),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(153),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(153),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_xref_COLON] = ACTIONS(153),
    [anon_sym_audio_COLON_COLON] = ACTIONS(153),
    [anon_sym_video_COLON_COLON] = ACTIONS(153),
    [sym_emphasis] = ACTIONS(153),
    [sym_strong] = ACTIONS(153),
    [sym_monospace] = ACTIONS(153),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(153),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(153),
    [sym__blank] = ACTIONS(153),
    [sym__empty] = ACTIONS(153),
    [sym__sp] = ACTIONS(153),
    [sym__nbsp] = ACTIONS(153),
    [sym__zwsp] = ACTIONS(153),
    [sym__wj] = ACTIONS(153),
    [sym__apos] = ACTIONS(153),
    [sym__quot] = ACTIONS(153),
    [sym__lsquo] = ACTIONS(153),
    [sym__rsquo] = ACTIONS(153),
    [sym__ldquo] = ACTIONS(153),
    [sym__rdquo] = ACTIONS(153),
    [sym__deg] = ACTIONS(153),
    [sym__plus] = ACTIONS(153),
    [sym__brvbar] = ACTIONS(153),
    [sym__vbar] = ACTIONS(153),
    [sym__amp] = ACTIONS(153),
    [sym__lt] = ACTIONS(153),
    [sym__gt] = ACTIONS(153),
    [sym__startsb] = ACTIONS(153),
    [sym__endsb] = ACTIONS(153),
    [sym__caret] = ACTIONS(153),
    [sym__asterisk] = ACTIONS(153),
    [sym__tilde] = ACTIONS(153),
    [sym__backslash] = ACTIONS(153),
    [sym__backtick] = ACTIONS(153),
    [sym__two_colons] = ACTIONS(153),
    [sym__two_semicolons] = ACTIONS(153),
    [sym__cpp] = ACTIONS(153),
    [sym__pp] = ACTIONS(153),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_title] = ACTIONS(157),
    [anon_sym_NOTE_COLON] = ACTIONS(159),
    [anon_sym_TIP_COLON] = ACTIONS(157),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(157),
    [anon_sym_CAUTION_COLON] = ACTIONS(157),
    [anon_sym_WARNING_COLON] = ACTIONS(157),
    [aux_sym__list_item_token1] = ACTIONS(159),
    [aux_sym__list_item_token2] = ACTIONS(157),
    [aux_sym__list_item_token3] = ACTIONS(157),
    [aux_sym_code_token1] = ACTIONS(157),
    [aux_sym_code_token2] = ACTIONS(159),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_image_COLON_COLON] = ACTIONS(157),
    [aux_sym_url_token1] = ACTIONS(159),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(157),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(157),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(157),
    [anon_sym_LT_LT] = ACTIONS(157),
    [anon_sym_xref_COLON] = ACTIONS(159),
    [anon_sym_audio_COLON_COLON] = ACTIONS(157),
    [anon_sym_video_COLON_COLON] = ACTIONS(157),
    [sym_emphasis] = ACTIONS(159),
    [sym_strong] = ACTIONS(159),
    [sym_monospace] = ACTIONS(159),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(157),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(157),
    [sym__blank] = ACTIONS(157),
    [sym__empty] = ACTIONS(157),
    [sym__sp] = ACTIONS(157),
    [sym__nbsp] = ACTIONS(157),
    [sym__zwsp] = ACTIONS(157),
    [sym__wj] = ACTIONS(157),
    [sym__apos] = ACTIONS(157),
    [sym__quot] = ACTIONS(157),
    [sym__lsquo] = ACTIONS(157),
    [sym__rsquo] = ACTIONS(157),
    [sym__ldquo] = ACTIONS(157),
    [sym__rdquo] = ACTIONS(157),
    [sym__deg] = ACTIONS(157),
    [sym__plus] = ACTIONS(157),
    [sym__brvbar] = ACTIONS(157),
    [sym__vbar] = ACTIONS(157),
    [sym__amp] = ACTIONS(157),
    [sym__lt] = ACTIONS(157),
    [sym__gt] = ACTIONS(157),
    [sym__startsb] = ACTIONS(157),
    [sym__endsb] = ACTIONS(157),
    [sym__caret] = ACTIONS(157),
    [sym__asterisk] = ACTIONS(157),
    [sym__tilde] = ACTIONS(157),
    [sym__backslash] = ACTIONS(157),
    [sym__backtick] = ACTIONS(157),
    [sym__two_colons] = ACTIONS(157),
    [sym__two_semicolons] = ACTIONS(157),
    [sym__cpp] = ACTIONS(157),
    [sym__pp] = ACTIONS(157),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_title] = ACTIONS(161),
    [anon_sym_NOTE_COLON] = ACTIONS(163),
    [anon_sym_TIP_COLON] = ACTIONS(161),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(161),
    [anon_sym_CAUTION_COLON] = ACTIONS(161),
    [anon_sym_WARNING_COLON] = ACTIONS(161),
    [aux_sym__list_item_token1] = ACTIONS(163),
    [aux_sym__list_item_token2] = ACTIONS(161),
    [aux_sym__list_item_token3] = ACTIONS(161),
    [aux_sym_code_token1] = ACTIONS(161),
    [aux_sym_code_token2] = ACTIONS(163),
    [anon_sym_SLASH_SLASH] = ACTIONS(161),
    [anon_sym_image_COLON_COLON] = ACTIONS(161),
    [aux_sym_url_token1] = ACTIONS(163),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(161),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(161),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(161),
    [anon_sym_LT_LT] = ACTIONS(161),
    [anon_sym_xref_COLON] = ACTIONS(163),
    [anon_sym_audio_COLON_COLON] = ACTIONS(161),
    [anon_sym_video_COLON_COLON] = ACTIONS(161),
    [sym_emphasis] = ACTIONS(163),
    [sym_strong] = ACTIONS(163),
    [sym_monospace] = ACTIONS(163),
    [sym_superscript] = ACTIONS(163),
    [sym_subscript] = ACTIONS(161),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(161),
    [sym__blank] = ACTIONS(161),
    [sym__empty] = ACTIONS(161),
    [sym__sp] = ACTIONS(161),
    [sym__nbsp] = ACTIONS(161),
    [sym__zwsp] = ACTIONS(161),
    [sym__wj] = ACTIONS(161),
    [sym__apos] = ACTIONS(161),
    [sym__quot] = ACTIONS(161),
    [sym__lsquo] = ACTIONS(161),
    [sym__rsquo] = ACTIONS(161),
    [sym__ldquo] = ACTIONS(161),
    [sym__rdquo] = ACTIONS(161),
    [sym__deg] = ACTIONS(161),
    [sym__plus] = ACTIONS(161),
    [sym__brvbar] = ACTIONS(161),
    [sym__vbar] = ACTIONS(161),
    [sym__amp] = ACTIONS(161),
    [sym__lt] = ACTIONS(161),
    [sym__gt] = ACTIONS(161),
    [sym__startsb] = ACTIONS(161),
    [sym__endsb] = ACTIONS(161),
    [sym__caret] = ACTIONS(161),
    [sym__asterisk] = ACTIONS(161),
    [sym__tilde] = ACTIONS(161),
    [sym__backslash] = ACTIONS(161),
    [sym__backtick] = ACTIONS(161),
    [sym__two_colons] = ACTIONS(161),
    [sym__two_semicolons] = ACTIONS(161),
    [sym__cpp] = ACTIONS(161),
    [sym__pp] = ACTIONS(161),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_title] = ACTIONS(165),
    [anon_sym_NOTE_COLON] = ACTIONS(167),
    [anon_sym_TIP_COLON] = ACTIONS(165),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(165),
    [anon_sym_CAUTION_COLON] = ACTIONS(165),
    [anon_sym_WARNING_COLON] = ACTIONS(165),
    [aux_sym__list_item_token1] = ACTIONS(167),
    [aux_sym__list_item_token2] = ACTIONS(165),
    [aux_sym__list_item_token3] = ACTIONS(165),
    [aux_sym_code_token1] = ACTIONS(165),
    [aux_sym_code_token2] = ACTIONS(167),
    [anon_sym_SLASH_SLASH] = ACTIONS(165),
    [anon_sym_image_COLON_COLON] = ACTIONS(165),
    [aux_sym_url_token1] = ACTIONS(167),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(165),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(165),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(165),
    [anon_sym_xref_COLON] = ACTIONS(167),
    [anon_sym_audio_COLON_COLON] = ACTIONS(165),
    [anon_sym_video_COLON_COLON] = ACTIONS(165),
    [sym_emphasis] = ACTIONS(167),
    [sym_strong] = ACTIONS(167),
    [sym_monospace] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(165),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(165),
    [sym__blank] = ACTIONS(165),
    [sym__empty] = ACTIONS(165),
    [sym__sp] = ACTIONS(165),
    [sym__nbsp] = ACTIONS(165),
    [sym__zwsp] = ACTIONS(165),
    [sym__wj] = ACTIONS(165),
    [sym__apos] = ACTIONS(165),
    [sym__quot] = ACTIONS(165),
    [sym__lsquo] = ACTIONS(165),
    [sym__rsquo] = ACTIONS(165),
    [sym__ldquo] = ACTIONS(165),
    [sym__rdquo] = ACTIONS(165),
    [sym__deg] = ACTIONS(165),
    [sym__plus] = ACTIONS(165),
    [sym__brvbar] = ACTIONS(165),
    [sym__vbar] = ACTIONS(165),
    [sym__amp] = ACTIONS(165),
    [sym__lt] = ACTIONS(165),
    [sym__gt] = ACTIONS(165),
    [sym__startsb] = ACTIONS(165),
    [sym__endsb] = ACTIONS(165),
    [sym__caret] = ACTIONS(165),
    [sym__asterisk] = ACTIONS(165),
    [sym__tilde] = ACTIONS(165),
    [sym__backslash] = ACTIONS(165),
    [sym__backtick] = ACTIONS(165),
    [sym__two_colons] = ACTIONS(165),
    [sym__two_semicolons] = ACTIONS(165),
    [sym__cpp] = ACTIONS(165),
    [sym__pp] = ACTIONS(165),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_title] = ACTIONS(169),
    [anon_sym_NOTE_COLON] = ACTIONS(171),
    [anon_sym_TIP_COLON] = ACTIONS(169),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(169),
    [anon_sym_CAUTION_COLON] = ACTIONS(169),
    [anon_sym_WARNING_COLON] = ACTIONS(169),
    [aux_sym__list_item_token1] = ACTIONS(171),
    [aux_sym__list_item_token2] = ACTIONS(169),
    [aux_sym__list_item_token3] = ACTIONS(169),
    [aux_sym_code_token1] = ACTIONS(169),
    [aux_sym_code_token2] = ACTIONS(171),
    [anon_sym_SLASH_SLASH] = ACTIONS(169),
    [anon_sym_image_COLON_COLON] = ACTIONS(169),
    [aux_sym_url_token1] = ACTIONS(171),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(169),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(169),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(169),
    [anon_sym_xref_COLON] = ACTIONS(171),
    [anon_sym_audio_COLON_COLON] = ACTIONS(169),
    [anon_sym_video_COLON_COLON] = ACTIONS(169),
    [sym_emphasis] = ACTIONS(171),
    [sym_strong] = ACTIONS(171),
    [sym_monospace] = ACTIONS(171),
    [sym_superscript] = ACTIONS(171),
    [sym_subscript] = ACTIONS(169),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(169),
    [sym__blank] = ACTIONS(169),
    [sym__empty] = ACTIONS(169),
    [sym__sp] = ACTIONS(169),
    [sym__nbsp] = ACTIONS(169),
    [sym__zwsp] = ACTIONS(169),
    [sym__wj] = ACTIONS(169),
    [sym__apos] = ACTIONS(169),
    [sym__quot] = ACTIONS(169),
    [sym__lsquo] = ACTIONS(169),
    [sym__rsquo] = ACTIONS(169),
    [sym__ldquo] = ACTIONS(169),
    [sym__rdquo] = ACTIONS(169),
    [sym__deg] = ACTIONS(169),
    [sym__plus] = ACTIONS(169),
    [sym__brvbar] = ACTIONS(169),
    [sym__vbar] = ACTIONS(169),
    [sym__amp] = ACTIONS(169),
    [sym__lt] = ACTIONS(169),
    [sym__gt] = ACTIONS(169),
    [sym__startsb] = ACTIONS(169),
    [sym__endsb] = ACTIONS(169),
    [sym__caret] = ACTIONS(169),
    [sym__asterisk] = ACTIONS(169),
    [sym__tilde] = ACTIONS(169),
    [sym__backslash] = ACTIONS(169),
    [sym__backtick] = ACTIONS(169),
    [sym__two_colons] = ACTIONS(169),
    [sym__two_semicolons] = ACTIONS(169),
    [sym__cpp] = ACTIONS(169),
    [sym__pp] = ACTIONS(169),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_title] = ACTIONS(173),
    [anon_sym_NOTE_COLON] = ACTIONS(175),
    [anon_sym_TIP_COLON] = ACTIONS(173),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(173),
    [anon_sym_CAUTION_COLON] = ACTIONS(173),
    [anon_sym_WARNING_COLON] = ACTIONS(173),
    [aux_sym__list_item_token1] = ACTIONS(175),
    [aux_sym__list_item_token2] = ACTIONS(173),
    [aux_sym__list_item_token3] = ACTIONS(173),
    [aux_sym_code_token1] = ACTIONS(173),
    [aux_sym_code_token2] = ACTIONS(175),
    [anon_sym_SLASH_SLASH] = ACTIONS(173),
    [anon_sym_image_COLON_COLON] = ACTIONS(173),
    [aux_sym_url_token1] = ACTIONS(175),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(173),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(173),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(173),
    [anon_sym_xref_COLON] = ACTIONS(175),
    [anon_sym_audio_COLON_COLON] = ACTIONS(173),
    [anon_sym_video_COLON_COLON] = ACTIONS(173),
    [sym_emphasis] = ACTIONS(175),
    [sym_strong] = ACTIONS(175),
    [sym_monospace] = ACTIONS(175),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(173),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(173),
    [sym__blank] = ACTIONS(173),
    [sym__empty] = ACTIONS(173),
    [sym__sp] = ACTIONS(173),
    [sym__nbsp] = ACTIONS(173),
    [sym__zwsp] = ACTIONS(173),
    [sym__wj] = ACTIONS(173),
    [sym__apos] = ACTIONS(173),
    [sym__quot] = ACTIONS(173),
    [sym__lsquo] = ACTIONS(173),
    [sym__rsquo] = ACTIONS(173),
    [sym__ldquo] = ACTIONS(173),
    [sym__rdquo] = ACTIONS(173),
    [sym__deg] = ACTIONS(173),
    [sym__plus] = ACTIONS(173),
    [sym__brvbar] = ACTIONS(173),
    [sym__vbar] = ACTIONS(173),
    [sym__amp] = ACTIONS(173),
    [sym__lt] = ACTIONS(173),
    [sym__gt] = ACTIONS(173),
    [sym__startsb] = ACTIONS(173),
    [sym__endsb] = ACTIONS(173),
    [sym__caret] = ACTIONS(173),
    [sym__asterisk] = ACTIONS(173),
    [sym__tilde] = ACTIONS(173),
    [sym__backslash] = ACTIONS(173),
    [sym__backtick] = ACTIONS(173),
    [sym__two_colons] = ACTIONS(173),
    [sym__two_semicolons] = ACTIONS(173),
    [sym__cpp] = ACTIONS(173),
    [sym__pp] = ACTIONS(173),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_title] = ACTIONS(177),
    [anon_sym_NOTE_COLON] = ACTIONS(179),
    [anon_sym_TIP_COLON] = ACTIONS(177),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(177),
    [anon_sym_CAUTION_COLON] = ACTIONS(177),
    [anon_sym_WARNING_COLON] = ACTIONS(177),
    [aux_sym__list_item_token1] = ACTIONS(179),
    [aux_sym__list_item_token2] = ACTIONS(177),
    [aux_sym__list_item_token3] = ACTIONS(177),
    [aux_sym_code_token1] = ACTIONS(177),
    [aux_sym_code_token2] = ACTIONS(179),
    [anon_sym_SLASH_SLASH] = ACTIONS(177),
    [anon_sym_image_COLON_COLON] = ACTIONS(177),
    [aux_sym_url_token1] = ACTIONS(179),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(177),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(177),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(177),
    [anon_sym_LT_LT] = ACTIONS(177),
    [anon_sym_xref_COLON] = ACTIONS(179),
    [anon_sym_audio_COLON_COLON] = ACTIONS(177),
    [anon_sym_video_COLON_COLON] = ACTIONS(177),
    [sym_emphasis] = ACTIONS(179),
    [sym_strong] = ACTIONS(179),
    [sym_monospace] = ACTIONS(179),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(177),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(177),
    [sym__blank] = ACTIONS(177),
    [sym__empty] = ACTIONS(177),
    [sym__sp] = ACTIONS(177),
    [sym__nbsp] = ACTIONS(177),
    [sym__zwsp] = ACTIONS(177),
    [sym__wj] = ACTIONS(177),
    [sym__apos] = ACTIONS(177),
    [sym__quot] = ACTIONS(177),
    [sym__lsquo] = ACTIONS(177),
    [sym__rsquo] = ACTIONS(177),
    [sym__ldquo] = ACTIONS(177),
    [sym__rdquo] = ACTIONS(177),
    [sym__deg] = ACTIONS(177),
    [sym__plus] = ACTIONS(177),
    [sym__brvbar] = ACTIONS(177),
    [sym__vbar] = ACTIONS(177),
    [sym__amp] = ACTIONS(177),
    [sym__lt] = ACTIONS(177),
    [sym__gt] = ACTIONS(177),
    [sym__startsb] = ACTIONS(177),
    [sym__endsb] = ACTIONS(177),
    [sym__caret] = ACTIONS(177),
    [sym__asterisk] = ACTIONS(177),
    [sym__tilde] = ACTIONS(177),
    [sym__backslash] = ACTIONS(177),
    [sym__backtick] = ACTIONS(177),
    [sym__two_colons] = ACTIONS(177),
    [sym__two_semicolons] = ACTIONS(177),
    [sym__cpp] = ACTIONS(177),
    [sym__pp] = ACTIONS(177),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_title] = ACTIONS(181),
    [anon_sym_NOTE_COLON] = ACTIONS(183),
    [anon_sym_TIP_COLON] = ACTIONS(181),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(181),
    [anon_sym_CAUTION_COLON] = ACTIONS(181),
    [anon_sym_WARNING_COLON] = ACTIONS(181),
    [aux_sym__list_item_token1] = ACTIONS(183),
    [aux_sym__list_item_token2] = ACTIONS(181),
    [aux_sym__list_item_token3] = ACTIONS(181),
    [aux_sym_code_token1] = ACTIONS(181),
    [aux_sym_code_token2] = ACTIONS(183),
    [anon_sym_SLASH_SLASH] = ACTIONS(181),
    [anon_sym_image_COLON_COLON] = ACTIONS(181),
    [aux_sym_url_token1] = ACTIONS(183),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(181),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(181),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_xref_COLON] = ACTIONS(183),
    [anon_sym_audio_COLON_COLON] = ACTIONS(181),
    [anon_sym_video_COLON_COLON] = ACTIONS(181),
    [sym_emphasis] = ACTIONS(183),
    [sym_strong] = ACTIONS(183),
    [sym_monospace] = ACTIONS(183),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(181),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(181),
    [sym__blank] = ACTIONS(181),
    [sym__empty] = ACTIONS(181),
    [sym__sp] = ACTIONS(181),
    [sym__nbsp] = ACTIONS(181),
    [sym__zwsp] = ACTIONS(181),
    [sym__wj] = ACTIONS(181),
    [sym__apos] = ACTIONS(181),
    [sym__quot] = ACTIONS(181),
    [sym__lsquo] = ACTIONS(181),
    [sym__rsquo] = ACTIONS(181),
    [sym__ldquo] = ACTIONS(181),
    [sym__rdquo] = ACTIONS(181),
    [sym__deg] = ACTIONS(181),
    [sym__plus] = ACTIONS(181),
    [sym__brvbar] = ACTIONS(181),
    [sym__vbar] = ACTIONS(181),
    [sym__amp] = ACTIONS(181),
    [sym__lt] = ACTIONS(181),
    [sym__gt] = ACTIONS(181),
    [sym__startsb] = ACTIONS(181),
    [sym__endsb] = ACTIONS(181),
    [sym__caret] = ACTIONS(181),
    [sym__asterisk] = ACTIONS(181),
    [sym__tilde] = ACTIONS(181),
    [sym__backslash] = ACTIONS(181),
    [sym__backtick] = ACTIONS(181),
    [sym__two_colons] = ACTIONS(181),
    [sym__two_semicolons] = ACTIONS(181),
    [sym__cpp] = ACTIONS(181),
    [sym__pp] = ACTIONS(181),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_title] = ACTIONS(185),
    [anon_sym_NOTE_COLON] = ACTIONS(187),
    [anon_sym_TIP_COLON] = ACTIONS(185),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(185),
    [anon_sym_CAUTION_COLON] = ACTIONS(185),
    [anon_sym_WARNING_COLON] = ACTIONS(185),
    [aux_sym__list_item_token1] = ACTIONS(187),
    [aux_sym__list_item_token2] = ACTIONS(185),
    [aux_sym__list_item_token3] = ACTIONS(185),
    [aux_sym_code_token1] = ACTIONS(185),
    [aux_sym_code_token2] = ACTIONS(187),
    [anon_sym_SLASH_SLASH] = ACTIONS(185),
    [anon_sym_image_COLON_COLON] = ACTIONS(185),
    [aux_sym_url_token1] = ACTIONS(187),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(185),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(185),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(185),
    [anon_sym_LT_LT] = ACTIONS(185),
    [anon_sym_xref_COLON] = ACTIONS(187),
    [anon_sym_audio_COLON_COLON] = ACTIONS(185),
    [anon_sym_video_COLON_COLON] = ACTIONS(185),
    [sym_emphasis] = ACTIONS(187),
    [sym_strong] = ACTIONS(187),
    [sym_monospace] = ACTIONS(187),
    [sym_superscript] = ACTIONS(187),
    [sym_subscript] = ACTIONS(185),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(185),
    [sym__blank] = ACTIONS(185),
    [sym__empty] = ACTIONS(185),
    [sym__sp] = ACTIONS(185),
    [sym__nbsp] = ACTIONS(185),
    [sym__zwsp] = ACTIONS(185),
    [sym__wj] = ACTIONS(185),
    [sym__apos] = ACTIONS(185),
    [sym__quot] = ACTIONS(185),
    [sym__lsquo] = ACTIONS(185),
    [sym__rsquo] = ACTIONS(185),
    [sym__ldquo] = ACTIONS(185),
    [sym__rdquo] = ACTIONS(185),
    [sym__deg] = ACTIONS(185),
    [sym__plus] = ACTIONS(185),
    [sym__brvbar] = ACTIONS(185),
    [sym__vbar] = ACTIONS(185),
    [sym__amp] = ACTIONS(185),
    [sym__lt] = ACTIONS(185),
    [sym__gt] = ACTIONS(185),
    [sym__startsb] = ACTIONS(185),
    [sym__endsb] = ACTIONS(185),
    [sym__caret] = ACTIONS(185),
    [sym__asterisk] = ACTIONS(185),
    [sym__tilde] = ACTIONS(185),
    [sym__backslash] = ACTIONS(185),
    [sym__backtick] = ACTIONS(185),
    [sym__two_colons] = ACTIONS(185),
    [sym__two_semicolons] = ACTIONS(185),
    [sym__cpp] = ACTIONS(185),
    [sym__pp] = ACTIONS(185),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_title] = ACTIONS(189),
    [anon_sym_NOTE_COLON] = ACTIONS(191),
    [anon_sym_TIP_COLON] = ACTIONS(189),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(189),
    [anon_sym_CAUTION_COLON] = ACTIONS(189),
    [anon_sym_WARNING_COLON] = ACTIONS(189),
    [aux_sym__list_item_token1] = ACTIONS(191),
    [aux_sym__list_item_token2] = ACTIONS(189),
    [aux_sym__list_item_token3] = ACTIONS(189),
    [aux_sym_code_token1] = ACTIONS(189),
    [aux_sym_code_token2] = ACTIONS(191),
    [anon_sym_SLASH_SLASH] = ACTIONS(189),
    [anon_sym_image_COLON_COLON] = ACTIONS(189),
    [aux_sym_url_token1] = ACTIONS(191),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(189),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(189),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_xref_COLON] = ACTIONS(191),
    [anon_sym_audio_COLON_COLON] = ACTIONS(189),
    [anon_sym_video_COLON_COLON] = ACTIONS(189),
    [sym_emphasis] = ACTIONS(191),
    [sym_strong] = ACTIONS(191),
    [sym_monospace] = ACTIONS(191),
    [sym_superscript] = ACTIONS(191),
    [sym_subscript] = ACTIONS(189),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(189),
    [sym__blank] = ACTIONS(189),
    [sym__empty] = ACTIONS(189),
    [sym__sp] = ACTIONS(189),
    [sym__nbsp] = ACTIONS(189),
    [sym__zwsp] = ACTIONS(189),
    [sym__wj] = ACTIONS(189),
    [sym__apos] = ACTIONS(189),
    [sym__quot] = ACTIONS(189),
    [sym__lsquo] = ACTIONS(189),
    [sym__rsquo] = ACTIONS(189),
    [sym__ldquo] = ACTIONS(189),
    [sym__rdquo] = ACTIONS(189),
    [sym__deg] = ACTIONS(189),
    [sym__plus] = ACTIONS(189),
    [sym__brvbar] = ACTIONS(189),
    [sym__vbar] = ACTIONS(189),
    [sym__amp] = ACTIONS(189),
    [sym__lt] = ACTIONS(189),
    [sym__gt] = ACTIONS(189),
    [sym__startsb] = ACTIONS(189),
    [sym__endsb] = ACTIONS(189),
    [sym__caret] = ACTIONS(189),
    [sym__asterisk] = ACTIONS(189),
    [sym__tilde] = ACTIONS(189),
    [sym__backslash] = ACTIONS(189),
    [sym__backtick] = ACTIONS(189),
    [sym__two_colons] = ACTIONS(189),
    [sym__two_semicolons] = ACTIONS(189),
    [sym__cpp] = ACTIONS(189),
    [sym__pp] = ACTIONS(189),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_title] = ACTIONS(193),
    [anon_sym_NOTE_COLON] = ACTIONS(195),
    [anon_sym_TIP_COLON] = ACTIONS(193),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(193),
    [anon_sym_CAUTION_COLON] = ACTIONS(193),
    [anon_sym_WARNING_COLON] = ACTIONS(193),
    [aux_sym__list_item_token1] = ACTIONS(195),
    [aux_sym__list_item_token2] = ACTIONS(193),
    [aux_sym__list_item_token3] = ACTIONS(193),
    [aux_sym_code_token1] = ACTIONS(193),
    [aux_sym_code_token2] = ACTIONS(195),
    [anon_sym_SLASH_SLASH] = ACTIONS(193),
    [anon_sym_image_COLON_COLON] = ACTIONS(193),
    [aux_sym_url_token1] = ACTIONS(195),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(193),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(193),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(193),
    [anon_sym_xref_COLON] = ACTIONS(195),
    [anon_sym_audio_COLON_COLON] = ACTIONS(193),
    [anon_sym_video_COLON_COLON] = ACTIONS(193),
    [sym_emphasis] = ACTIONS(195),
    [sym_strong] = ACTIONS(195),
    [sym_monospace] = ACTIONS(195),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(193),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(193),
    [sym__blank] = ACTIONS(193),
    [sym__empty] = ACTIONS(193),
    [sym__sp] = ACTIONS(193),
    [sym__nbsp] = ACTIONS(193),
    [sym__zwsp] = ACTIONS(193),
    [sym__wj] = ACTIONS(193),
    [sym__apos] = ACTIONS(193),
    [sym__quot] = ACTIONS(193),
    [sym__lsquo] = ACTIONS(193),
    [sym__rsquo] = ACTIONS(193),
    [sym__ldquo] = ACTIONS(193),
    [sym__rdquo] = ACTIONS(193),
    [sym__deg] = ACTIONS(193),
    [sym__plus] = ACTIONS(193),
    [sym__brvbar] = ACTIONS(193),
    [sym__vbar] = ACTIONS(193),
    [sym__amp] = ACTIONS(193),
    [sym__lt] = ACTIONS(193),
    [sym__gt] = ACTIONS(193),
    [sym__startsb] = ACTIONS(193),
    [sym__endsb] = ACTIONS(193),
    [sym__caret] = ACTIONS(193),
    [sym__asterisk] = ACTIONS(193),
    [sym__tilde] = ACTIONS(193),
    [sym__backslash] = ACTIONS(193),
    [sym__backtick] = ACTIONS(193),
    [sym__two_colons] = ACTIONS(193),
    [sym__two_semicolons] = ACTIONS(193),
    [sym__cpp] = ACTIONS(193),
    [sym__pp] = ACTIONS(193),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_title] = ACTIONS(197),
    [anon_sym_NOTE_COLON] = ACTIONS(199),
    [anon_sym_TIP_COLON] = ACTIONS(197),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(197),
    [anon_sym_CAUTION_COLON] = ACTIONS(197),
    [anon_sym_WARNING_COLON] = ACTIONS(197),
    [aux_sym__list_item_token1] = ACTIONS(199),
    [aux_sym__list_item_token2] = ACTIONS(197),
    [aux_sym__list_item_token3] = ACTIONS(197),
    [aux_sym_code_token1] = ACTIONS(197),
    [aux_sym_code_token2] = ACTIONS(199),
    [anon_sym_SLASH_SLASH] = ACTIONS(197),
    [anon_sym_image_COLON_COLON] = ACTIONS(197),
    [aux_sym_url_token1] = ACTIONS(199),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(197),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(197),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(197),
    [anon_sym_LT_LT] = ACTIONS(197),
    [anon_sym_xref_COLON] = ACTIONS(199),
    [anon_sym_audio_COLON_COLON] = ACTIONS(197),
    [anon_sym_video_COLON_COLON] = ACTIONS(197),
    [sym_emphasis] = ACTIONS(199),
    [sym_strong] = ACTIONS(199),
    [sym_monospace] = ACTIONS(199),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(197),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(197),
    [sym__blank] = ACTIONS(197),
    [sym__empty] = ACTIONS(197),
    [sym__sp] = ACTIONS(197),
    [sym__nbsp] = ACTIONS(197),
    [sym__zwsp] = ACTIONS(197),
    [sym__wj] = ACTIONS(197),
    [sym__apos] = ACTIONS(197),
    [sym__quot] = ACTIONS(197),
    [sym__lsquo] = ACTIONS(197),
    [sym__rsquo] = ACTIONS(197),
    [sym__ldquo] = ACTIONS(197),
    [sym__rdquo] = ACTIONS(197),
    [sym__deg] = ACTIONS(197),
    [sym__plus] = ACTIONS(197),
    [sym__brvbar] = ACTIONS(197),
    [sym__vbar] = ACTIONS(197),
    [sym__amp] = ACTIONS(197),
    [sym__lt] = ACTIONS(197),
    [sym__gt] = ACTIONS(197),
    [sym__startsb] = ACTIONS(197),
    [sym__endsb] = ACTIONS(197),
    [sym__caret] = ACTIONS(197),
    [sym__asterisk] = ACTIONS(197),
    [sym__tilde] = ACTIONS(197),
    [sym__backslash] = ACTIONS(197),
    [sym__backtick] = ACTIONS(197),
    [sym__two_colons] = ACTIONS(197),
    [sym__two_semicolons] = ACTIONS(197),
    [sym__cpp] = ACTIONS(197),
    [sym__pp] = ACTIONS(197),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_title] = ACTIONS(201),
    [anon_sym_NOTE_COLON] = ACTIONS(203),
    [anon_sym_TIP_COLON] = ACTIONS(201),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(201),
    [anon_sym_CAUTION_COLON] = ACTIONS(201),
    [anon_sym_WARNING_COLON] = ACTIONS(201),
    [aux_sym__list_item_token1] = ACTIONS(203),
    [aux_sym__list_item_token2] = ACTIONS(201),
    [aux_sym__list_item_token3] = ACTIONS(201),
    [aux_sym_code_token1] = ACTIONS(201),
    [aux_sym_code_token2] = ACTIONS(203),
    [anon_sym_SLASH_SLASH] = ACTIONS(201),
    [anon_sym_image_COLON_COLON] = ACTIONS(201),
    [aux_sym_url_token1] = ACTIONS(203),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(201),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(201),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(201),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_xref_COLON] = ACTIONS(203),
    [anon_sym_audio_COLON_COLON] = ACTIONS(201),
    [anon_sym_video_COLON_COLON] = ACTIONS(201),
    [sym_emphasis] = ACTIONS(203),
    [sym_strong] = ACTIONS(203),
    [sym_monospace] = ACTIONS(203),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(201),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(201),
    [sym__blank] = ACTIONS(201),
    [sym__empty] = ACTIONS(201),
    [sym__sp] = ACTIONS(201),
    [sym__nbsp] = ACTIONS(201),
    [sym__zwsp] = ACTIONS(201),
    [sym__wj] = ACTIONS(201),
    [sym__apos] = ACTIONS(201),
    [sym__quot] = ACTIONS(201),
    [sym__lsquo] = ACTIONS(201),
    [sym__rsquo] = ACTIONS(201),
    [sym__ldquo] = ACTIONS(201),
    [sym__rdquo] = ACTIONS(201),
    [sym__deg] = ACTIONS(201),
    [sym__plus] = ACTIONS(201),
    [sym__brvbar] = ACTIONS(201),
    [sym__vbar] = ACTIONS(201),
    [sym__amp] = ACTIONS(201),
    [sym__lt] = ACTIONS(201),
    [sym__gt] = ACTIONS(201),
    [sym__startsb] = ACTIONS(201),
    [sym__endsb] = ACTIONS(201),
    [sym__caret] = ACTIONS(201),
    [sym__asterisk] = ACTIONS(201),
    [sym__tilde] = ACTIONS(201),
    [sym__backslash] = ACTIONS(201),
    [sym__backtick] = ACTIONS(201),
    [sym__two_colons] = ACTIONS(201),
    [sym__two_semicolons] = ACTIONS(201),
    [sym__cpp] = ACTIONS(201),
    [sym__pp] = ACTIONS(201),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_title] = ACTIONS(205),
    [anon_sym_NOTE_COLON] = ACTIONS(207),
    [anon_sym_TIP_COLON] = ACTIONS(205),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(205),
    [anon_sym_CAUTION_COLON] = ACTIONS(205),
    [anon_sym_WARNING_COLON] = ACTIONS(205),
    [aux_sym__list_item_token1] = ACTIONS(207),
    [aux_sym__list_item_token2] = ACTIONS(205),
    [aux_sym__list_item_token3] = ACTIONS(205),
    [aux_sym_code_token1] = ACTIONS(205),
    [aux_sym_code_token2] = ACTIONS(207),
    [anon_sym_SLASH_SLASH] = ACTIONS(205),
    [anon_sym_image_COLON_COLON] = ACTIONS(205),
    [aux_sym_url_token1] = ACTIONS(207),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(205),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(205),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(205),
    [anon_sym_xref_COLON] = ACTIONS(207),
    [anon_sym_audio_COLON_COLON] = ACTIONS(205),
    [anon_sym_video_COLON_COLON] = ACTIONS(205),
    [sym_emphasis] = ACTIONS(207),
    [sym_strong] = ACTIONS(207),
    [sym_monospace] = ACTIONS(207),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(205),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(205),
    [sym__blank] = ACTIONS(205),
    [sym__empty] = ACTIONS(205),
    [sym__sp] = ACTIONS(205),
    [sym__nbsp] = ACTIONS(205),
    [sym__zwsp] = ACTIONS(205),
    [sym__wj] = ACTIONS(205),
    [sym__apos] = ACTIONS(205),
    [sym__quot] = ACTIONS(205),
    [sym__lsquo] = ACTIONS(205),
    [sym__rsquo] = ACTIONS(205),
    [sym__ldquo] = ACTIONS(205),
    [sym__rdquo] = ACTIONS(205),
    [sym__deg] = ACTIONS(205),
    [sym__plus] = ACTIONS(205),
    [sym__brvbar] = ACTIONS(205),
    [sym__vbar] = ACTIONS(205),
    [sym__amp] = ACTIONS(205),
    [sym__lt] = ACTIONS(205),
    [sym__gt] = ACTIONS(205),
    [sym__startsb] = ACTIONS(205),
    [sym__endsb] = ACTIONS(205),
    [sym__caret] = ACTIONS(205),
    [sym__asterisk] = ACTIONS(205),
    [sym__tilde] = ACTIONS(205),
    [sym__backslash] = ACTIONS(205),
    [sym__backtick] = ACTIONS(205),
    [sym__two_colons] = ACTIONS(205),
    [sym__two_semicolons] = ACTIONS(205),
    [sym__cpp] = ACTIONS(205),
    [sym__pp] = ACTIONS(205),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_title] = ACTIONS(209),
    [anon_sym_NOTE_COLON] = ACTIONS(211),
    [anon_sym_TIP_COLON] = ACTIONS(209),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(209),
    [anon_sym_CAUTION_COLON] = ACTIONS(209),
    [anon_sym_WARNING_COLON] = ACTIONS(209),
    [aux_sym__list_item_token1] = ACTIONS(211),
    [aux_sym__list_item_token2] = ACTIONS(209),
    [aux_sym__list_item_token3] = ACTIONS(209),
    [aux_sym_code_token1] = ACTIONS(209),
    [aux_sym_code_token2] = ACTIONS(211),
    [anon_sym_SLASH_SLASH] = ACTIONS(209),
    [anon_sym_image_COLON_COLON] = ACTIONS(209),
    [aux_sym_url_token1] = ACTIONS(211),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(209),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(209),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_xref_COLON] = ACTIONS(211),
    [anon_sym_audio_COLON_COLON] = ACTIONS(209),
    [anon_sym_video_COLON_COLON] = ACTIONS(209),
    [sym_emphasis] = ACTIONS(211),
    [sym_strong] = ACTIONS(211),
    [sym_monospace] = ACTIONS(211),
    [sym_superscript] = ACTIONS(211),
    [sym_subscript] = ACTIONS(209),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(209),
    [sym__blank] = ACTIONS(209),
    [sym__empty] = ACTIONS(209),
    [sym__sp] = ACTIONS(209),
    [sym__nbsp] = ACTIONS(209),
    [sym__zwsp] = ACTIONS(209),
    [sym__wj] = ACTIONS(209),
    [sym__apos] = ACTIONS(209),
    [sym__quot] = ACTIONS(209),
    [sym__lsquo] = ACTIONS(209),
    [sym__rsquo] = ACTIONS(209),
    [sym__ldquo] = ACTIONS(209),
    [sym__rdquo] = ACTIONS(209),
    [sym__deg] = ACTIONS(209),
    [sym__plus] = ACTIONS(209),
    [sym__brvbar] = ACTIONS(209),
    [sym__vbar] = ACTIONS(209),
    [sym__amp] = ACTIONS(209),
    [sym__lt] = ACTIONS(209),
    [sym__gt] = ACTIONS(209),
    [sym__startsb] = ACTIONS(209),
    [sym__endsb] = ACTIONS(209),
    [sym__caret] = ACTIONS(209),
    [sym__asterisk] = ACTIONS(209),
    [sym__tilde] = ACTIONS(209),
    [sym__backslash] = ACTIONS(209),
    [sym__backtick] = ACTIONS(209),
    [sym__two_colons] = ACTIONS(209),
    [sym__two_semicolons] = ACTIONS(209),
    [sym__cpp] = ACTIONS(209),
    [sym__pp] = ACTIONS(209),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_title] = ACTIONS(213),
    [anon_sym_NOTE_COLON] = ACTIONS(215),
    [anon_sym_TIP_COLON] = ACTIONS(213),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(213),
    [anon_sym_CAUTION_COLON] = ACTIONS(213),
    [anon_sym_WARNING_COLON] = ACTIONS(213),
    [aux_sym__list_item_token1] = ACTIONS(215),
    [aux_sym__list_item_token2] = ACTIONS(213),
    [aux_sym__list_item_token3] = ACTIONS(213),
    [aux_sym_code_token1] = ACTIONS(213),
    [aux_sym_code_token2] = ACTIONS(215),
    [anon_sym_SLASH_SLASH] = ACTIONS(213),
    [anon_sym_image_COLON_COLON] = ACTIONS(213),
    [aux_sym_url_token1] = ACTIONS(215),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(213),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(213),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(213),
    [anon_sym_xref_COLON] = ACTIONS(215),
    [anon_sym_audio_COLON_COLON] = ACTIONS(213),
    [anon_sym_video_COLON_COLON] = ACTIONS(213),
    [sym_emphasis] = ACTIONS(215),
    [sym_strong] = ACTIONS(215),
    [sym_monospace] = ACTIONS(215),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(213),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(213),
    [sym__blank] = ACTIONS(213),
    [sym__empty] = ACTIONS(213),
    [sym__sp] = ACTIONS(213),
    [sym__nbsp] = ACTIONS(213),
    [sym__zwsp] = ACTIONS(213),
    [sym__wj] = ACTIONS(213),
    [sym__apos] = ACTIONS(213),
    [sym__quot] = ACTIONS(213),
    [sym__lsquo] = ACTIONS(213),
    [sym__rsquo] = ACTIONS(213),
    [sym__ldquo] = ACTIONS(213),
    [sym__rdquo] = ACTIONS(213),
    [sym__deg] = ACTIONS(213),
    [sym__plus] = ACTIONS(213),
    [sym__brvbar] = ACTIONS(213),
    [sym__vbar] = ACTIONS(213),
    [sym__amp] = ACTIONS(213),
    [sym__lt] = ACTIONS(213),
    [sym__gt] = ACTIONS(213),
    [sym__startsb] = ACTIONS(213),
    [sym__endsb] = ACTIONS(213),
    [sym__caret] = ACTIONS(213),
    [sym__asterisk] = ACTIONS(213),
    [sym__tilde] = ACTIONS(213),
    [sym__backslash] = ACTIONS(213),
    [sym__backtick] = ACTIONS(213),
    [sym__two_colons] = ACTIONS(213),
    [sym__two_semicolons] = ACTIONS(213),
    [sym__cpp] = ACTIONS(213),
    [sym__pp] = ACTIONS(213),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_title] = ACTIONS(217),
    [anon_sym_NOTE_COLON] = ACTIONS(219),
    [anon_sym_TIP_COLON] = ACTIONS(217),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(217),
    [anon_sym_CAUTION_COLON] = ACTIONS(217),
    [anon_sym_WARNING_COLON] = ACTIONS(217),
    [aux_sym__list_item_token1] = ACTIONS(219),
    [aux_sym__list_item_token2] = ACTIONS(217),
    [aux_sym__list_item_token3] = ACTIONS(217),
    [aux_sym_code_token1] = ACTIONS(217),
    [aux_sym_code_token2] = ACTIONS(219),
    [anon_sym_SLASH_SLASH] = ACTIONS(217),
    [anon_sym_image_COLON_COLON] = ACTIONS(217),
    [aux_sym_url_token1] = ACTIONS(219),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(217),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(217),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_xref_COLON] = ACTIONS(219),
    [anon_sym_audio_COLON_COLON] = ACTIONS(217),
    [anon_sym_video_COLON_COLON] = ACTIONS(217),
    [sym_emphasis] = ACTIONS(219),
    [sym_strong] = ACTIONS(219),
    [sym_monospace] = ACTIONS(219),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(217),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(217),
    [sym__blank] = ACTIONS(217),
    [sym__empty] = ACTIONS(217),
    [sym__sp] = ACTIONS(217),
    [sym__nbsp] = ACTIONS(217),
    [sym__zwsp] = ACTIONS(217),
    [sym__wj] = ACTIONS(217),
    [sym__apos] = ACTIONS(217),
    [sym__quot] = ACTIONS(217),
    [sym__lsquo] = ACTIONS(217),
    [sym__rsquo] = ACTIONS(217),
    [sym__ldquo] = ACTIONS(217),
    [sym__rdquo] = ACTIONS(217),
    [sym__deg] = ACTIONS(217),
    [sym__plus] = ACTIONS(217),
    [sym__brvbar] = ACTIONS(217),
    [sym__vbar] = ACTIONS(217),
    [sym__amp] = ACTIONS(217),
    [sym__lt] = ACTIONS(217),
    [sym__gt] = ACTIONS(217),
    [sym__startsb] = ACTIONS(217),
    [sym__endsb] = ACTIONS(217),
    [sym__caret] = ACTIONS(217),
    [sym__asterisk] = ACTIONS(217),
    [sym__tilde] = ACTIONS(217),
    [sym__backslash] = ACTIONS(217),
    [sym__backtick] = ACTIONS(217),
    [sym__two_colons] = ACTIONS(217),
    [sym__two_semicolons] = ACTIONS(217),
    [sym__cpp] = ACTIONS(217),
    [sym__pp] = ACTIONS(217),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_title] = ACTIONS(221),
    [anon_sym_NOTE_COLON] = ACTIONS(223),
    [anon_sym_TIP_COLON] = ACTIONS(221),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(221),
    [anon_sym_CAUTION_COLON] = ACTIONS(221),
    [anon_sym_WARNING_COLON] = ACTIONS(221),
    [aux_sym__list_item_token1] = ACTIONS(223),
    [aux_sym__list_item_token2] = ACTIONS(221),
    [aux_sym__list_item_token3] = ACTIONS(221),
    [aux_sym_code_token1] = ACTIONS(221),
    [aux_sym_code_token2] = ACTIONS(223),
    [anon_sym_SLASH_SLASH] = ACTIONS(221),
    [anon_sym_image_COLON_COLON] = ACTIONS(221),
    [aux_sym_url_token1] = ACTIONS(223),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(221),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(221),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_xref_COLON] = ACTIONS(223),
    [anon_sym_audio_COLON_COLON] = ACTIONS(221),
    [anon_sym_video_COLON_COLON] = ACTIONS(221),
    [sym_emphasis] = ACTIONS(223),
    [sym_strong] = ACTIONS(223),
    [sym_monospace] = ACTIONS(223),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(221),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(221),
    [sym__blank] = ACTIONS(221),
    [sym__empty] = ACTIONS(221),
    [sym__sp] = ACTIONS(221),
    [sym__nbsp] = ACTIONS(221),
    [sym__zwsp] = ACTIONS(221),
    [sym__wj] = ACTIONS(221),
    [sym__apos] = ACTIONS(221),
    [sym__quot] = ACTIONS(221),
    [sym__lsquo] = ACTIONS(221),
    [sym__rsquo] = ACTIONS(221),
    [sym__ldquo] = ACTIONS(221),
    [sym__rdquo] = ACTIONS(221),
    [sym__deg] = ACTIONS(221),
    [sym__plus] = ACTIONS(221),
    [sym__brvbar] = ACTIONS(221),
    [sym__vbar] = ACTIONS(221),
    [sym__amp] = ACTIONS(221),
    [sym__lt] = ACTIONS(221),
    [sym__gt] = ACTIONS(221),
    [sym__startsb] = ACTIONS(221),
    [sym__endsb] = ACTIONS(221),
    [sym__caret] = ACTIONS(221),
    [sym__asterisk] = ACTIONS(221),
    [sym__tilde] = ACTIONS(221),
    [sym__backslash] = ACTIONS(221),
    [sym__backtick] = ACTIONS(221),
    [sym__two_colons] = ACTIONS(221),
    [sym__two_semicolons] = ACTIONS(221),
    [sym__cpp] = ACTIONS(221),
    [sym__pp] = ACTIONS(221),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_title] = ACTIONS(225),
    [anon_sym_NOTE_COLON] = ACTIONS(227),
    [anon_sym_TIP_COLON] = ACTIONS(225),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(225),
    [anon_sym_CAUTION_COLON] = ACTIONS(225),
    [anon_sym_WARNING_COLON] = ACTIONS(225),
    [aux_sym__list_item_token1] = ACTIONS(227),
    [aux_sym__list_item_token2] = ACTIONS(225),
    [aux_sym__list_item_token3] = ACTIONS(225),
    [aux_sym_code_token1] = ACTIONS(225),
    [aux_sym_code_token2] = ACTIONS(227),
    [anon_sym_SLASH_SLASH] = ACTIONS(225),
    [anon_sym_image_COLON_COLON] = ACTIONS(225),
    [aux_sym_url_token1] = ACTIONS(227),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(225),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(225),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_xref_COLON] = ACTIONS(227),
    [anon_sym_audio_COLON_COLON] = ACTIONS(225),
    [anon_sym_video_COLON_COLON] = ACTIONS(225),
    [sym_emphasis] = ACTIONS(227),
    [sym_strong] = ACTIONS(227),
    [sym_monospace] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(225),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(225),
    [sym__blank] = ACTIONS(225),
    [sym__empty] = ACTIONS(225),
    [sym__sp] = ACTIONS(225),
    [sym__nbsp] = ACTIONS(225),
    [sym__zwsp] = ACTIONS(225),
    [sym__wj] = ACTIONS(225),
    [sym__apos] = ACTIONS(225),
    [sym__quot] = ACTIONS(225),
    [sym__lsquo] = ACTIONS(225),
    [sym__rsquo] = ACTIONS(225),
    [sym__ldquo] = ACTIONS(225),
    [sym__rdquo] = ACTIONS(225),
    [sym__deg] = ACTIONS(225),
    [sym__plus] = ACTIONS(225),
    [sym__brvbar] = ACTIONS(225),
    [sym__vbar] = ACTIONS(225),
    [sym__amp] = ACTIONS(225),
    [sym__lt] = ACTIONS(225),
    [sym__gt] = ACTIONS(225),
    [sym__startsb] = ACTIONS(225),
    [sym__endsb] = ACTIONS(225),
    [sym__caret] = ACTIONS(225),
    [sym__asterisk] = ACTIONS(225),
    [sym__tilde] = ACTIONS(225),
    [sym__backslash] = ACTIONS(225),
    [sym__backtick] = ACTIONS(225),
    [sym__two_colons] = ACTIONS(225),
    [sym__two_semicolons] = ACTIONS(225),
    [sym__cpp] = ACTIONS(225),
    [sym__pp] = ACTIONS(225),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_title] = ACTIONS(229),
    [anon_sym_NOTE_COLON] = ACTIONS(231),
    [anon_sym_TIP_COLON] = ACTIONS(229),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(229),
    [anon_sym_CAUTION_COLON] = ACTIONS(229),
    [anon_sym_WARNING_COLON] = ACTIONS(229),
    [aux_sym__list_item_token1] = ACTIONS(231),
    [aux_sym__list_item_token2] = ACTIONS(229),
    [aux_sym__list_item_token3] = ACTIONS(229),
    [aux_sym_code_token1] = ACTIONS(229),
    [aux_sym_code_token2] = ACTIONS(231),
    [anon_sym_SLASH_SLASH] = ACTIONS(229),
    [anon_sym_image_COLON_COLON] = ACTIONS(229),
    [aux_sym_url_token1] = ACTIONS(231),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(229),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(229),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_xref_COLON] = ACTIONS(231),
    [anon_sym_audio_COLON_COLON] = ACTIONS(229),
    [anon_sym_video_COLON_COLON] = ACTIONS(229),
    [sym_emphasis] = ACTIONS(231),
    [sym_strong] = ACTIONS(231),
    [sym_monospace] = ACTIONS(231),
    [sym_superscript] = ACTIONS(231),
    [sym_subscript] = ACTIONS(229),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(229),
    [sym__blank] = ACTIONS(229),
    [sym__empty] = ACTIONS(229),
    [sym__sp] = ACTIONS(229),
    [sym__nbsp] = ACTIONS(229),
    [sym__zwsp] = ACTIONS(229),
    [sym__wj] = ACTIONS(229),
    [sym__apos] = ACTIONS(229),
    [sym__quot] = ACTIONS(229),
    [sym__lsquo] = ACTIONS(229),
    [sym__rsquo] = ACTIONS(229),
    [sym__ldquo] = ACTIONS(229),
    [sym__rdquo] = ACTIONS(229),
    [sym__deg] = ACTIONS(229),
    [sym__plus] = ACTIONS(229),
    [sym__brvbar] = ACTIONS(229),
    [sym__vbar] = ACTIONS(229),
    [sym__amp] = ACTIONS(229),
    [sym__lt] = ACTIONS(229),
    [sym__gt] = ACTIONS(229),
    [sym__startsb] = ACTIONS(229),
    [sym__endsb] = ACTIONS(229),
    [sym__caret] = ACTIONS(229),
    [sym__asterisk] = ACTIONS(229),
    [sym__tilde] = ACTIONS(229),
    [sym__backslash] = ACTIONS(229),
    [sym__backtick] = ACTIONS(229),
    [sym__two_colons] = ACTIONS(229),
    [sym__two_semicolons] = ACTIONS(229),
    [sym__cpp] = ACTIONS(229),
    [sym__pp] = ACTIONS(229),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_title] = ACTIONS(233),
    [anon_sym_NOTE_COLON] = ACTIONS(235),
    [anon_sym_TIP_COLON] = ACTIONS(233),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(233),
    [anon_sym_CAUTION_COLON] = ACTIONS(233),
    [anon_sym_WARNING_COLON] = ACTIONS(233),
    [aux_sym__list_item_token1] = ACTIONS(235),
    [aux_sym__list_item_token2] = ACTIONS(233),
    [aux_sym__list_item_token3] = ACTIONS(233),
    [aux_sym_code_token1] = ACTIONS(233),
    [aux_sym_code_token2] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(233),
    [anon_sym_image_COLON_COLON] = ACTIONS(233),
    [aux_sym_url_token1] = ACTIONS(235),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(233),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(233),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(233),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_xref_COLON] = ACTIONS(235),
    [anon_sym_audio_COLON_COLON] = ACTIONS(233),
    [anon_sym_video_COLON_COLON] = ACTIONS(233),
    [sym_emphasis] = ACTIONS(235),
    [sym_strong] = ACTIONS(235),
    [sym_monospace] = ACTIONS(235),
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(233),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(233),
    [sym__blank] = ACTIONS(233),
    [sym__empty] = ACTIONS(233),
    [sym__sp] = ACTIONS(233),
    [sym__nbsp] = ACTIONS(233),
    [sym__zwsp] = ACTIONS(233),
    [sym__wj] = ACTIONS(233),
    [sym__apos] = ACTIONS(233),
    [sym__quot] = ACTIONS(233),
    [sym__lsquo] = ACTIONS(233),
    [sym__rsquo] = ACTIONS(233),
    [sym__ldquo] = ACTIONS(233),
    [sym__rdquo] = ACTIONS(233),
    [sym__deg] = ACTIONS(233),
    [sym__plus] = ACTIONS(233),
    [sym__brvbar] = ACTIONS(233),
    [sym__vbar] = ACTIONS(233),
    [sym__amp] = ACTIONS(233),
    [sym__lt] = ACTIONS(233),
    [sym__gt] = ACTIONS(233),
    [sym__startsb] = ACTIONS(233),
    [sym__endsb] = ACTIONS(233),
    [sym__caret] = ACTIONS(233),
    [sym__asterisk] = ACTIONS(233),
    [sym__tilde] = ACTIONS(233),
    [sym__backslash] = ACTIONS(233),
    [sym__backtick] = ACTIONS(233),
    [sym__two_colons] = ACTIONS(233),
    [sym__two_semicolons] = ACTIONS(233),
    [sym__cpp] = ACTIONS(233),
    [sym__pp] = ACTIONS(233),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_title] = ACTIONS(237),
    [anon_sym_NOTE_COLON] = ACTIONS(239),
    [anon_sym_TIP_COLON] = ACTIONS(237),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(237),
    [anon_sym_CAUTION_COLON] = ACTIONS(237),
    [anon_sym_WARNING_COLON] = ACTIONS(237),
    [aux_sym__list_item_token1] = ACTIONS(239),
    [aux_sym__list_item_token2] = ACTIONS(237),
    [aux_sym__list_item_token3] = ACTIONS(237),
    [aux_sym_code_token1] = ACTIONS(237),
    [aux_sym_code_token2] = ACTIONS(239),
    [anon_sym_SLASH_SLASH] = ACTIONS(237),
    [anon_sym_image_COLON_COLON] = ACTIONS(237),
    [aux_sym_url_token1] = ACTIONS(239),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(237),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(237),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_xref_COLON] = ACTIONS(239),
    [anon_sym_audio_COLON_COLON] = ACTIONS(237),
    [anon_sym_video_COLON_COLON] = ACTIONS(237),
    [sym_emphasis] = ACTIONS(239),
    [sym_strong] = ACTIONS(239),
    [sym_monospace] = ACTIONS(239),
    [sym_superscript] = ACTIONS(239),
    [sym_subscript] = ACTIONS(237),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(237),
    [sym__blank] = ACTIONS(237),
    [sym__empty] = ACTIONS(237),
    [sym__sp] = ACTIONS(237),
    [sym__nbsp] = ACTIONS(237),
    [sym__zwsp] = ACTIONS(237),
    [sym__wj] = ACTIONS(237),
    [sym__apos] = ACTIONS(237),
    [sym__quot] = ACTIONS(237),
    [sym__lsquo] = ACTIONS(237),
    [sym__rsquo] = ACTIONS(237),
    [sym__ldquo] = ACTIONS(237),
    [sym__rdquo] = ACTIONS(237),
    [sym__deg] = ACTIONS(237),
    [sym__plus] = ACTIONS(237),
    [sym__brvbar] = ACTIONS(237),
    [sym__vbar] = ACTIONS(237),
    [sym__amp] = ACTIONS(237),
    [sym__lt] = ACTIONS(237),
    [sym__gt] = ACTIONS(237),
    [sym__startsb] = ACTIONS(237),
    [sym__endsb] = ACTIONS(237),
    [sym__caret] = ACTIONS(237),
    [sym__asterisk] = ACTIONS(237),
    [sym__tilde] = ACTIONS(237),
    [sym__backslash] = ACTIONS(237),
    [sym__backtick] = ACTIONS(237),
    [sym__two_colons] = ACTIONS(237),
    [sym__two_semicolons] = ACTIONS(237),
    [sym__cpp] = ACTIONS(237),
    [sym__pp] = ACTIONS(237),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_title] = ACTIONS(241),
    [anon_sym_NOTE_COLON] = ACTIONS(243),
    [anon_sym_TIP_COLON] = ACTIONS(241),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(241),
    [anon_sym_CAUTION_COLON] = ACTIONS(241),
    [anon_sym_WARNING_COLON] = ACTIONS(241),
    [aux_sym__list_item_token1] = ACTIONS(243),
    [aux_sym__list_item_token2] = ACTIONS(241),
    [aux_sym__list_item_token3] = ACTIONS(241),
    [aux_sym_code_token1] = ACTIONS(241),
    [aux_sym_code_token2] = ACTIONS(243),
    [anon_sym_SLASH_SLASH] = ACTIONS(241),
    [anon_sym_image_COLON_COLON] = ACTIONS(241),
    [aux_sym_url_token1] = ACTIONS(243),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(241),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(241),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_xref_COLON] = ACTIONS(243),
    [anon_sym_audio_COLON_COLON] = ACTIONS(241),
    [anon_sym_video_COLON_COLON] = ACTIONS(241),
    [sym_emphasis] = ACTIONS(243),
    [sym_strong] = ACTIONS(243),
    [sym_monospace] = ACTIONS(243),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(241),
    [sym__blank] = ACTIONS(241),
    [sym__empty] = ACTIONS(241),
    [sym__sp] = ACTIONS(241),
    [sym__nbsp] = ACTIONS(241),
    [sym__zwsp] = ACTIONS(241),
    [sym__wj] = ACTIONS(241),
    [sym__apos] = ACTIONS(241),
    [sym__quot] = ACTIONS(241),
    [sym__lsquo] = ACTIONS(241),
    [sym__rsquo] = ACTIONS(241),
    [sym__ldquo] = ACTIONS(241),
    [sym__rdquo] = ACTIONS(241),
    [sym__deg] = ACTIONS(241),
    [sym__plus] = ACTIONS(241),
    [sym__brvbar] = ACTIONS(241),
    [sym__vbar] = ACTIONS(241),
    [sym__amp] = ACTIONS(241),
    [sym__lt] = ACTIONS(241),
    [sym__gt] = ACTIONS(241),
    [sym__startsb] = ACTIONS(241),
    [sym__endsb] = ACTIONS(241),
    [sym__caret] = ACTIONS(241),
    [sym__asterisk] = ACTIONS(241),
    [sym__tilde] = ACTIONS(241),
    [sym__backslash] = ACTIONS(241),
    [sym__backtick] = ACTIONS(241),
    [sym__two_colons] = ACTIONS(241),
    [sym__two_semicolons] = ACTIONS(241),
    [sym__cpp] = ACTIONS(241),
    [sym__pp] = ACTIONS(241),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_title] = ACTIONS(245),
    [anon_sym_NOTE_COLON] = ACTIONS(247),
    [anon_sym_TIP_COLON] = ACTIONS(245),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(245),
    [anon_sym_CAUTION_COLON] = ACTIONS(245),
    [anon_sym_WARNING_COLON] = ACTIONS(245),
    [aux_sym__list_item_token1] = ACTIONS(247),
    [aux_sym__list_item_token2] = ACTIONS(245),
    [aux_sym__list_item_token3] = ACTIONS(245),
    [aux_sym_code_token1] = ACTIONS(245),
    [aux_sym_code_token2] = ACTIONS(247),
    [anon_sym_SLASH_SLASH] = ACTIONS(245),
    [anon_sym_image_COLON_COLON] = ACTIONS(245),
    [aux_sym_url_token1] = ACTIONS(247),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(245),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(245),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_xref_COLON] = ACTIONS(247),
    [anon_sym_audio_COLON_COLON] = ACTIONS(245),
    [anon_sym_video_COLON_COLON] = ACTIONS(245),
    [sym_emphasis] = ACTIONS(247),
    [sym_strong] = ACTIONS(247),
    [sym_monospace] = ACTIONS(247),
    [sym_superscript] = ACTIONS(247),
    [sym_subscript] = ACTIONS(245),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(245),
    [sym__blank] = ACTIONS(245),
    [sym__empty] = ACTIONS(245),
    [sym__sp] = ACTIONS(245),
    [sym__nbsp] = ACTIONS(245),
    [sym__zwsp] = ACTIONS(245),
    [sym__wj] = ACTIONS(245),
    [sym__apos] = ACTIONS(245),
    [sym__quot] = ACTIONS(245),
    [sym__lsquo] = ACTIONS(245),
    [sym__rsquo] = ACTIONS(245),
    [sym__ldquo] = ACTIONS(245),
    [sym__rdquo] = ACTIONS(245),
    [sym__deg] = ACTIONS(245),
    [sym__plus] = ACTIONS(245),
    [sym__brvbar] = ACTIONS(245),
    [sym__vbar] = ACTIONS(245),
    [sym__amp] = ACTIONS(245),
    [sym__lt] = ACTIONS(245),
    [sym__gt] = ACTIONS(245),
    [sym__startsb] = ACTIONS(245),
    [sym__endsb] = ACTIONS(245),
    [sym__caret] = ACTIONS(245),
    [sym__asterisk] = ACTIONS(245),
    [sym__tilde] = ACTIONS(245),
    [sym__backslash] = ACTIONS(245),
    [sym__backtick] = ACTIONS(245),
    [sym__two_colons] = ACTIONS(245),
    [sym__two_semicolons] = ACTIONS(245),
    [sym__cpp] = ACTIONS(245),
    [sym__pp] = ACTIONS(245),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_title] = ACTIONS(249),
    [anon_sym_NOTE_COLON] = ACTIONS(251),
    [anon_sym_TIP_COLON] = ACTIONS(249),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(249),
    [anon_sym_CAUTION_COLON] = ACTIONS(249),
    [anon_sym_WARNING_COLON] = ACTIONS(249),
    [aux_sym__list_item_token1] = ACTIONS(251),
    [aux_sym__list_item_token2] = ACTIONS(249),
    [aux_sym__list_item_token3] = ACTIONS(249),
    [aux_sym_code_token1] = ACTIONS(249),
    [aux_sym_code_token2] = ACTIONS(251),
    [anon_sym_SLASH_SLASH] = ACTIONS(249),
    [anon_sym_image_COLON_COLON] = ACTIONS(249),
    [aux_sym_url_token1] = ACTIONS(251),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(249),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(249),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_xref_COLON] = ACTIONS(251),
    [anon_sym_audio_COLON_COLON] = ACTIONS(249),
    [anon_sym_video_COLON_COLON] = ACTIONS(249),
    [sym_emphasis] = ACTIONS(251),
    [sym_strong] = ACTIONS(251),
    [sym_monospace] = ACTIONS(251),
    [sym_superscript] = ACTIONS(251),
    [sym_subscript] = ACTIONS(249),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(249),
    [sym__blank] = ACTIONS(249),
    [sym__empty] = ACTIONS(249),
    [sym__sp] = ACTIONS(249),
    [sym__nbsp] = ACTIONS(249),
    [sym__zwsp] = ACTIONS(249),
    [sym__wj] = ACTIONS(249),
    [sym__apos] = ACTIONS(249),
    [sym__quot] = ACTIONS(249),
    [sym__lsquo] = ACTIONS(249),
    [sym__rsquo] = ACTIONS(249),
    [sym__ldquo] = ACTIONS(249),
    [sym__rdquo] = ACTIONS(249),
    [sym__deg] = ACTIONS(249),
    [sym__plus] = ACTIONS(249),
    [sym__brvbar] = ACTIONS(249),
    [sym__vbar] = ACTIONS(249),
    [sym__amp] = ACTIONS(249),
    [sym__lt] = ACTIONS(249),
    [sym__gt] = ACTIONS(249),
    [sym__startsb] = ACTIONS(249),
    [sym__endsb] = ACTIONS(249),
    [sym__caret] = ACTIONS(249),
    [sym__asterisk] = ACTIONS(249),
    [sym__tilde] = ACTIONS(249),
    [sym__backslash] = ACTIONS(249),
    [sym__backtick] = ACTIONS(249),
    [sym__two_colons] = ACTIONS(249),
    [sym__two_semicolons] = ACTIONS(249),
    [sym__cpp] = ACTIONS(249),
    [sym__pp] = ACTIONS(249),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_title] = ACTIONS(253),
    [anon_sym_NOTE_COLON] = ACTIONS(255),
    [anon_sym_TIP_COLON] = ACTIONS(253),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(253),
    [anon_sym_CAUTION_COLON] = ACTIONS(253),
    [anon_sym_WARNING_COLON] = ACTIONS(253),
    [aux_sym__list_item_token1] = ACTIONS(255),
    [aux_sym__list_item_token2] = ACTIONS(253),
    [aux_sym__list_item_token3] = ACTIONS(253),
    [aux_sym_code_token1] = ACTIONS(253),
    [aux_sym_code_token2] = ACTIONS(255),
    [anon_sym_SLASH_SLASH] = ACTIONS(253),
    [anon_sym_image_COLON_COLON] = ACTIONS(253),
    [aux_sym_url_token1] = ACTIONS(255),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(253),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(253),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_xref_COLON] = ACTIONS(255),
    [anon_sym_audio_COLON_COLON] = ACTIONS(253),
    [anon_sym_video_COLON_COLON] = ACTIONS(253),
    [sym_emphasis] = ACTIONS(255),
    [sym_strong] = ACTIONS(255),
    [sym_monospace] = ACTIONS(255),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(253),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(253),
    [sym__blank] = ACTIONS(253),
    [sym__empty] = ACTIONS(253),
    [sym__sp] = ACTIONS(253),
    [sym__nbsp] = ACTIONS(253),
    [sym__zwsp] = ACTIONS(253),
    [sym__wj] = ACTIONS(253),
    [sym__apos] = ACTIONS(253),
    [sym__quot] = ACTIONS(253),
    [sym__lsquo] = ACTIONS(253),
    [sym__rsquo] = ACTIONS(253),
    [sym__ldquo] = ACTIONS(253),
    [sym__rdquo] = ACTIONS(253),
    [sym__deg] = ACTIONS(253),
    [sym__plus] = ACTIONS(253),
    [sym__brvbar] = ACTIONS(253),
    [sym__vbar] = ACTIONS(253),
    [sym__amp] = ACTIONS(253),
    [sym__lt] = ACTIONS(253),
    [sym__gt] = ACTIONS(253),
    [sym__startsb] = ACTIONS(253),
    [sym__endsb] = ACTIONS(253),
    [sym__caret] = ACTIONS(253),
    [sym__asterisk] = ACTIONS(253),
    [sym__tilde] = ACTIONS(253),
    [sym__backslash] = ACTIONS(253),
    [sym__backtick] = ACTIONS(253),
    [sym__two_colons] = ACTIONS(253),
    [sym__two_semicolons] = ACTIONS(253),
    [sym__cpp] = ACTIONS(253),
    [sym__pp] = ACTIONS(253),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_title] = ACTIONS(257),
    [anon_sym_NOTE_COLON] = ACTIONS(259),
    [anon_sym_TIP_COLON] = ACTIONS(257),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(257),
    [anon_sym_CAUTION_COLON] = ACTIONS(257),
    [anon_sym_WARNING_COLON] = ACTIONS(257),
    [aux_sym__list_item_token1] = ACTIONS(259),
    [aux_sym__list_item_token2] = ACTIONS(257),
    [aux_sym__list_item_token3] = ACTIONS(257),
    [aux_sym_code_token1] = ACTIONS(257),
    [aux_sym_code_token2] = ACTIONS(259),
    [anon_sym_SLASH_SLASH] = ACTIONS(257),
    [anon_sym_image_COLON_COLON] = ACTIONS(257),
    [aux_sym_url_token1] = ACTIONS(259),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(257),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(257),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(257),
    [anon_sym_LT_LT] = ACTIONS(257),
    [anon_sym_xref_COLON] = ACTIONS(259),
    [anon_sym_audio_COLON_COLON] = ACTIONS(257),
    [anon_sym_video_COLON_COLON] = ACTIONS(257),
    [sym_emphasis] = ACTIONS(259),
    [sym_strong] = ACTIONS(259),
    [sym_monospace] = ACTIONS(259),
    [sym_superscript] = ACTIONS(259),
    [sym_subscript] = ACTIONS(257),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(257),
    [sym__blank] = ACTIONS(257),
    [sym__empty] = ACTIONS(257),
    [sym__sp] = ACTIONS(257),
    [sym__nbsp] = ACTIONS(257),
    [sym__zwsp] = ACTIONS(257),
    [sym__wj] = ACTIONS(257),
    [sym__apos] = ACTIONS(257),
    [sym__quot] = ACTIONS(257),
    [sym__lsquo] = ACTIONS(257),
    [sym__rsquo] = ACTIONS(257),
    [sym__ldquo] = ACTIONS(257),
    [sym__rdquo] = ACTIONS(257),
    [sym__deg] = ACTIONS(257),
    [sym__plus] = ACTIONS(257),
    [sym__brvbar] = ACTIONS(257),
    [sym__vbar] = ACTIONS(257),
    [sym__amp] = ACTIONS(257),
    [sym__lt] = ACTIONS(257),
    [sym__gt] = ACTIONS(257),
    [sym__startsb] = ACTIONS(257),
    [sym__endsb] = ACTIONS(257),
    [sym__caret] = ACTIONS(257),
    [sym__asterisk] = ACTIONS(257),
    [sym__tilde] = ACTIONS(257),
    [sym__backslash] = ACTIONS(257),
    [sym__backtick] = ACTIONS(257),
    [sym__two_colons] = ACTIONS(257),
    [sym__two_semicolons] = ACTIONS(257),
    [sym__cpp] = ACTIONS(257),
    [sym__pp] = ACTIONS(257),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_title] = ACTIONS(261),
    [anon_sym_NOTE_COLON] = ACTIONS(263),
    [anon_sym_TIP_COLON] = ACTIONS(261),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(261),
    [anon_sym_CAUTION_COLON] = ACTIONS(261),
    [anon_sym_WARNING_COLON] = ACTIONS(261),
    [aux_sym__list_item_token1] = ACTIONS(263),
    [aux_sym__list_item_token2] = ACTIONS(261),
    [aux_sym__list_item_token3] = ACTIONS(261),
    [aux_sym_code_token1] = ACTIONS(261),
    [aux_sym_code_token2] = ACTIONS(263),
    [anon_sym_SLASH_SLASH] = ACTIONS(261),
    [anon_sym_image_COLON_COLON] = ACTIONS(261),
    [aux_sym_url_token1] = ACTIONS(263),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(261),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(261),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(261),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_xref_COLON] = ACTIONS(263),
    [anon_sym_audio_COLON_COLON] = ACTIONS(261),
    [anon_sym_video_COLON_COLON] = ACTIONS(261),
    [sym_emphasis] = ACTIONS(263),
    [sym_strong] = ACTIONS(263),
    [sym_monospace] = ACTIONS(263),
    [sym_superscript] = ACTIONS(263),
    [sym_subscript] = ACTIONS(261),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(261),
    [sym__blank] = ACTIONS(261),
    [sym__empty] = ACTIONS(261),
    [sym__sp] = ACTIONS(261),
    [sym__nbsp] = ACTIONS(261),
    [sym__zwsp] = ACTIONS(261),
    [sym__wj] = ACTIONS(261),
    [sym__apos] = ACTIONS(261),
    [sym__quot] = ACTIONS(261),
    [sym__lsquo] = ACTIONS(261),
    [sym__rsquo] = ACTIONS(261),
    [sym__ldquo] = ACTIONS(261),
    [sym__rdquo] = ACTIONS(261),
    [sym__deg] = ACTIONS(261),
    [sym__plus] = ACTIONS(261),
    [sym__brvbar] = ACTIONS(261),
    [sym__vbar] = ACTIONS(261),
    [sym__amp] = ACTIONS(261),
    [sym__lt] = ACTIONS(261),
    [sym__gt] = ACTIONS(261),
    [sym__startsb] = ACTIONS(261),
    [sym__endsb] = ACTIONS(261),
    [sym__caret] = ACTIONS(261),
    [sym__asterisk] = ACTIONS(261),
    [sym__tilde] = ACTIONS(261),
    [sym__backslash] = ACTIONS(261),
    [sym__backtick] = ACTIONS(261),
    [sym__two_colons] = ACTIONS(261),
    [sym__two_semicolons] = ACTIONS(261),
    [sym__cpp] = ACTIONS(261),
    [sym__pp] = ACTIONS(261),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_title] = ACTIONS(265),
    [anon_sym_NOTE_COLON] = ACTIONS(267),
    [anon_sym_TIP_COLON] = ACTIONS(265),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(265),
    [anon_sym_CAUTION_COLON] = ACTIONS(265),
    [anon_sym_WARNING_COLON] = ACTIONS(265),
    [aux_sym__list_item_token1] = ACTIONS(267),
    [aux_sym__list_item_token2] = ACTIONS(265),
    [aux_sym__list_item_token3] = ACTIONS(265),
    [aux_sym_code_token1] = ACTIONS(265),
    [aux_sym_code_token2] = ACTIONS(267),
    [anon_sym_SLASH_SLASH] = ACTIONS(265),
    [anon_sym_image_COLON_COLON] = ACTIONS(265),
    [aux_sym_url_token1] = ACTIONS(267),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(265),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(265),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_xref_COLON] = ACTIONS(267),
    [anon_sym_audio_COLON_COLON] = ACTIONS(265),
    [anon_sym_video_COLON_COLON] = ACTIONS(265),
    [sym_emphasis] = ACTIONS(267),
    [sym_strong] = ACTIONS(267),
    [sym_monospace] = ACTIONS(267),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(265),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(265),
    [sym__blank] = ACTIONS(265),
    [sym__empty] = ACTIONS(265),
    [sym__sp] = ACTIONS(265),
    [sym__nbsp] = ACTIONS(265),
    [sym__zwsp] = ACTIONS(265),
    [sym__wj] = ACTIONS(265),
    [sym__apos] = ACTIONS(265),
    [sym__quot] = ACTIONS(265),
    [sym__lsquo] = ACTIONS(265),
    [sym__rsquo] = ACTIONS(265),
    [sym__ldquo] = ACTIONS(265),
    [sym__rdquo] = ACTIONS(265),
    [sym__deg] = ACTIONS(265),
    [sym__plus] = ACTIONS(265),
    [sym__brvbar] = ACTIONS(265),
    [sym__vbar] = ACTIONS(265),
    [sym__amp] = ACTIONS(265),
    [sym__lt] = ACTIONS(265),
    [sym__gt] = ACTIONS(265),
    [sym__startsb] = ACTIONS(265),
    [sym__endsb] = ACTIONS(265),
    [sym__caret] = ACTIONS(265),
    [sym__asterisk] = ACTIONS(265),
    [sym__tilde] = ACTIONS(265),
    [sym__backslash] = ACTIONS(265),
    [sym__backtick] = ACTIONS(265),
    [sym__two_colons] = ACTIONS(265),
    [sym__two_semicolons] = ACTIONS(265),
    [sym__cpp] = ACTIONS(265),
    [sym__pp] = ACTIONS(265),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_title] = ACTIONS(269),
    [anon_sym_NOTE_COLON] = ACTIONS(271),
    [anon_sym_TIP_COLON] = ACTIONS(269),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(269),
    [anon_sym_CAUTION_COLON] = ACTIONS(269),
    [anon_sym_WARNING_COLON] = ACTIONS(269),
    [aux_sym__list_item_token1] = ACTIONS(271),
    [aux_sym__list_item_token2] = ACTIONS(269),
    [aux_sym__list_item_token3] = ACTIONS(269),
    [aux_sym_code_token1] = ACTIONS(269),
    [aux_sym_code_token2] = ACTIONS(271),
    [anon_sym_SLASH_SLASH] = ACTIONS(269),
    [anon_sym_image_COLON_COLON] = ACTIONS(269),
    [aux_sym_url_token1] = ACTIONS(271),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(269),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(269),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(269),
    [anon_sym_xref_COLON] = ACTIONS(271),
    [anon_sym_audio_COLON_COLON] = ACTIONS(269),
    [anon_sym_video_COLON_COLON] = ACTIONS(269),
    [sym_emphasis] = ACTIONS(271),
    [sym_strong] = ACTIONS(271),
    [sym_monospace] = ACTIONS(271),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(269),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(269),
    [sym__blank] = ACTIONS(269),
    [sym__empty] = ACTIONS(269),
    [sym__sp] = ACTIONS(269),
    [sym__nbsp] = ACTIONS(269),
    [sym__zwsp] = ACTIONS(269),
    [sym__wj] = ACTIONS(269),
    [sym__apos] = ACTIONS(269),
    [sym__quot] = ACTIONS(269),
    [sym__lsquo] = ACTIONS(269),
    [sym__rsquo] = ACTIONS(269),
    [sym__ldquo] = ACTIONS(269),
    [sym__rdquo] = ACTIONS(269),
    [sym__deg] = ACTIONS(269),
    [sym__plus] = ACTIONS(269),
    [sym__brvbar] = ACTIONS(269),
    [sym__vbar] = ACTIONS(269),
    [sym__amp] = ACTIONS(269),
    [sym__lt] = ACTIONS(269),
    [sym__gt] = ACTIONS(269),
    [sym__startsb] = ACTIONS(269),
    [sym__endsb] = ACTIONS(269),
    [sym__caret] = ACTIONS(269),
    [sym__asterisk] = ACTIONS(269),
    [sym__tilde] = ACTIONS(269),
    [sym__backslash] = ACTIONS(269),
    [sym__backtick] = ACTIONS(269),
    [sym__two_colons] = ACTIONS(269),
    [sym__two_semicolons] = ACTIONS(269),
    [sym__cpp] = ACTIONS(269),
    [sym__pp] = ACTIONS(269),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_title] = ACTIONS(273),
    [anon_sym_NOTE_COLON] = ACTIONS(275),
    [anon_sym_TIP_COLON] = ACTIONS(273),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(273),
    [anon_sym_CAUTION_COLON] = ACTIONS(273),
    [anon_sym_WARNING_COLON] = ACTIONS(273),
    [aux_sym__list_item_token1] = ACTIONS(275),
    [aux_sym__list_item_token2] = ACTIONS(273),
    [aux_sym__list_item_token3] = ACTIONS(273),
    [aux_sym_code_token1] = ACTIONS(273),
    [aux_sym_code_token2] = ACTIONS(275),
    [anon_sym_SLASH_SLASH] = ACTIONS(273),
    [anon_sym_image_COLON_COLON] = ACTIONS(273),
    [aux_sym_url_token1] = ACTIONS(275),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(273),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(273),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_xref_COLON] = ACTIONS(275),
    [anon_sym_audio_COLON_COLON] = ACTIONS(273),
    [anon_sym_video_COLON_COLON] = ACTIONS(273),
    [sym_emphasis] = ACTIONS(275),
    [sym_strong] = ACTIONS(275),
    [sym_monospace] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(273),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(273),
    [sym__blank] = ACTIONS(273),
    [sym__empty] = ACTIONS(273),
    [sym__sp] = ACTIONS(273),
    [sym__nbsp] = ACTIONS(273),
    [sym__zwsp] = ACTIONS(273),
    [sym__wj] = ACTIONS(273),
    [sym__apos] = ACTIONS(273),
    [sym__quot] = ACTIONS(273),
    [sym__lsquo] = ACTIONS(273),
    [sym__rsquo] = ACTIONS(273),
    [sym__ldquo] = ACTIONS(273),
    [sym__rdquo] = ACTIONS(273),
    [sym__deg] = ACTIONS(273),
    [sym__plus] = ACTIONS(273),
    [sym__brvbar] = ACTIONS(273),
    [sym__vbar] = ACTIONS(273),
    [sym__amp] = ACTIONS(273),
    [sym__lt] = ACTIONS(273),
    [sym__gt] = ACTIONS(273),
    [sym__startsb] = ACTIONS(273),
    [sym__endsb] = ACTIONS(273),
    [sym__caret] = ACTIONS(273),
    [sym__asterisk] = ACTIONS(273),
    [sym__tilde] = ACTIONS(273),
    [sym__backslash] = ACTIONS(273),
    [sym__backtick] = ACTIONS(273),
    [sym__two_colons] = ACTIONS(273),
    [sym__two_semicolons] = ACTIONS(273),
    [sym__cpp] = ACTIONS(273),
    [sym__pp] = ACTIONS(273),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_title] = ACTIONS(277),
    [anon_sym_NOTE_COLON] = ACTIONS(279),
    [anon_sym_TIP_COLON] = ACTIONS(277),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(277),
    [anon_sym_CAUTION_COLON] = ACTIONS(277),
    [anon_sym_WARNING_COLON] = ACTIONS(277),
    [aux_sym__list_item_token1] = ACTIONS(279),
    [aux_sym__list_item_token2] = ACTIONS(277),
    [aux_sym__list_item_token3] = ACTIONS(277),
    [aux_sym_code_token1] = ACTIONS(277),
    [aux_sym_code_token2] = ACTIONS(279),
    [anon_sym_SLASH_SLASH] = ACTIONS(277),
    [anon_sym_image_COLON_COLON] = ACTIONS(277),
    [aux_sym_url_token1] = ACTIONS(279),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(277),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(277),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(277),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_xref_COLON] = ACTIONS(279),
    [anon_sym_audio_COLON_COLON] = ACTIONS(277),
    [anon_sym_video_COLON_COLON] = ACTIONS(277),
    [sym_emphasis] = ACTIONS(279),
    [sym_strong] = ACTIONS(279),
    [sym_monospace] = ACTIONS(279),
    [sym_superscript] = ACTIONS(279),
    [sym_subscript] = ACTIONS(277),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(277),
    [sym__blank] = ACTIONS(277),
    [sym__empty] = ACTIONS(277),
    [sym__sp] = ACTIONS(277),
    [sym__nbsp] = ACTIONS(277),
    [sym__zwsp] = ACTIONS(277),
    [sym__wj] = ACTIONS(277),
    [sym__apos] = ACTIONS(277),
    [sym__quot] = ACTIONS(277),
    [sym__lsquo] = ACTIONS(277),
    [sym__rsquo] = ACTIONS(277),
    [sym__ldquo] = ACTIONS(277),
    [sym__rdquo] = ACTIONS(277),
    [sym__deg] = ACTIONS(277),
    [sym__plus] = ACTIONS(277),
    [sym__brvbar] = ACTIONS(277),
    [sym__vbar] = ACTIONS(277),
    [sym__amp] = ACTIONS(277),
    [sym__lt] = ACTIONS(277),
    [sym__gt] = ACTIONS(277),
    [sym__startsb] = ACTIONS(277),
    [sym__endsb] = ACTIONS(277),
    [sym__caret] = ACTIONS(277),
    [sym__asterisk] = ACTIONS(277),
    [sym__tilde] = ACTIONS(277),
    [sym__backslash] = ACTIONS(277),
    [sym__backtick] = ACTIONS(277),
    [sym__two_colons] = ACTIONS(277),
    [sym__two_semicolons] = ACTIONS(277),
    [sym__cpp] = ACTIONS(277),
    [sym__pp] = ACTIONS(277),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(285), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(40), 4,
      sym__inline_element,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(283), 6,
      aux_sym_code_token2,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(287), 30,
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
  [53] = 5,
    ACTIONS(289), 1,
      anon_sym_LF,
    ACTIONS(294), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(40), 4,
      sym__inline_element,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(291), 6,
      aux_sym_code_token2,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(297), 30,
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
  [106] = 3,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(304), 1,
      anon_sym_COLON_COLON,
    ACTIONS(302), 37,
      aux_sym_code_token2,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
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
  [152] = 2,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(308), 37,
      aux_sym_code_token2,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
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
  [195] = 2,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(312), 37,
      aux_sym_code_token2,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
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
  [238] = 3,
    ACTIONS(314), 1,
      aux_sym_note_token1,
    ACTIONS(317), 1,
      aux_sym_table_token1,
    STATE(44), 1,
      aux_sym_table_repeat1,
  [248] = 3,
    ACTIONS(319), 1,
      aux_sym_note_token1,
    ACTIONS(321), 1,
      aux_sym_table_token1,
    STATE(44), 1,
      aux_sym_table_repeat1,
  [258] = 3,
    ACTIONS(323), 1,
      aux_sym_tip_token1,
    ACTIONS(325), 1,
      aux_sym_code_token3,
    STATE(48), 1,
      aux_sym_code_repeat1,
  [268] = 3,
    ACTIONS(327), 1,
      aux_sym_note_token1,
    ACTIONS(329), 1,
      aux_sym_table_token1,
    STATE(45), 1,
      aux_sym_table_repeat1,
  [278] = 3,
    ACTIONS(331), 1,
      aux_sym_tip_token1,
    ACTIONS(333), 1,
      aux_sym_code_token3,
    STATE(49), 1,
      aux_sym_code_repeat1,
  [288] = 3,
    ACTIONS(335), 1,
      aux_sym_tip_token1,
    ACTIONS(338), 1,
      aux_sym_code_token3,
    STATE(49), 1,
      aux_sym_code_repeat1,
  [298] = 2,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    ACTIONS(342), 1,
      aux_sym_audio_token1,
  [305] = 2,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_GT_GT,
  [312] = 2,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    ACTIONS(350), 1,
      aux_sym_footnote_token1,
  [319] = 2,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    ACTIONS(354), 1,
      aux_sym_kbd_token1,
  [326] = 2,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    ACTIONS(358), 1,
      aux_sym_audio_token1,
  [333] = 2,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      aux_sym_image_token2,
  [340] = 2,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      aux_sym_image_token2,
  [347] = 2,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(370), 1,
      aux_sym_audio_token1,
  [354] = 2,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    ACTIONS(374), 1,
      aux_sym_audio_token1,
  [361] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACK_LF,
  [365] = 1,
    ACTIONS(378), 1,
      aux_sym_code_token2,
  [369] = 1,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
  [373] = 1,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
  [377] = 1,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
  [381] = 1,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
  [385] = 1,
    ACTIONS(388), 1,
      aux_sym_code_token2,
  [389] = 1,
    ACTIONS(390), 1,
      aux_sym_image_token2,
  [393] = 1,
    ACTIONS(392), 1,
      aux_sym_code_token2,
  [397] = 1,
    ACTIONS(394), 1,
      anon_sym_LBRACK,
  [401] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
  [405] = 1,
    ACTIONS(398), 1,
      aux_sym_tip_token1,
  [409] = 1,
    ACTIONS(400), 1,
      aux_sym_tip_token1,
  [413] = 1,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
  [417] = 1,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
  [421] = 1,
    ACTIONS(406), 1,
      aux_sym_tip_token1,
  [425] = 1,
    ACTIONS(408), 1,
      aux_sym_note_token1,
  [429] = 1,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
  [433] = 1,
    ACTIONS(412), 1,
      anon_sym_RBRACK_LF,
  [437] = 1,
    ACTIONS(414), 1,
      aux_sym_image_token2,
  [441] = 1,
    ACTIONS(416), 1,
      anon_sym_GT_GT,
  [445] = 1,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
  [449] = 1,
    ACTIONS(420), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [453] = 1,
    ACTIONS(422), 1,
      anon_sym_LF,
  [457] = 1,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
  [461] = 1,
    ACTIONS(426), 1,
      aux_sym_code_token2,
  [465] = 1,
    ACTIONS(428), 1,
      aux_sym_code_token2,
  [469] = 1,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
  [473] = 1,
    ACTIONS(432), 1,
      anon_sym_LBRACK,
  [477] = 1,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
  [481] = 1,
    ACTIONS(436), 1,
      aux_sym_image_token1,
  [485] = 1,
    ACTIONS(438), 1,
      aux_sym_note_token1,
  [489] = 1,
    ACTIONS(440), 1,
      anon_sym_LF,
  [493] = 1,
    ACTIONS(442), 1,
      aux_sym_code_token2,
  [497] = 1,
    ACTIONS(444), 1,
      anon_sym_,
  [501] = 1,
    ACTIONS(446), 1,
      aux_sym_tip_token1,
  [505] = 1,
    ACTIONS(448), 1,
      aux_sym_tip_token1,
  [509] = 1,
    ACTIONS(450), 1,
      aux_sym_tip_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(39)] = 0,
  [SMALL_STATE(40)] = 53,
  [SMALL_STATE(41)] = 106,
  [SMALL_STATE(42)] = 152,
  [SMALL_STATE(43)] = 195,
  [SMALL_STATE(44)] = 238,
  [SMALL_STATE(45)] = 248,
  [SMALL_STATE(46)] = 258,
  [SMALL_STATE(47)] = 268,
  [SMALL_STATE(48)] = 278,
  [SMALL_STATE(49)] = 288,
  [SMALL_STATE(50)] = 298,
  [SMALL_STATE(51)] = 305,
  [SMALL_STATE(52)] = 312,
  [SMALL_STATE(53)] = 319,
  [SMALL_STATE(54)] = 326,
  [SMALL_STATE(55)] = 333,
  [SMALL_STATE(56)] = 340,
  [SMALL_STATE(57)] = 347,
  [SMALL_STATE(58)] = 354,
  [SMALL_STATE(59)] = 361,
  [SMALL_STATE(60)] = 365,
  [SMALL_STATE(61)] = 369,
  [SMALL_STATE(62)] = 373,
  [SMALL_STATE(63)] = 377,
  [SMALL_STATE(64)] = 381,
  [SMALL_STATE(65)] = 385,
  [SMALL_STATE(66)] = 389,
  [SMALL_STATE(67)] = 393,
  [SMALL_STATE(68)] = 397,
  [SMALL_STATE(69)] = 401,
  [SMALL_STATE(70)] = 405,
  [SMALL_STATE(71)] = 409,
  [SMALL_STATE(72)] = 413,
  [SMALL_STATE(73)] = 417,
  [SMALL_STATE(74)] = 421,
  [SMALL_STATE(75)] = 425,
  [SMALL_STATE(76)] = 429,
  [SMALL_STATE(77)] = 433,
  [SMALL_STATE(78)] = 437,
  [SMALL_STATE(79)] = 441,
  [SMALL_STATE(80)] = 445,
  [SMALL_STATE(81)] = 449,
  [SMALL_STATE(82)] = 453,
  [SMALL_STATE(83)] = 457,
  [SMALL_STATE(84)] = 461,
  [SMALL_STATE(85)] = 465,
  [SMALL_STATE(86)] = 469,
  [SMALL_STATE(87)] = 473,
  [SMALL_STATE(88)] = 477,
  [SMALL_STATE(89)] = 481,
  [SMALL_STATE(90)] = 485,
  [SMALL_STATE(91)] = 489,
  [SMALL_STATE(92)] = 493,
  [SMALL_STATE(93)] = 497,
  [SMALL_STATE(94)] = 501,
  [SMALL_STATE(95)] = 505,
  [SMALL_STATE(96)] = 509,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(93),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(93),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_item, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_item, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 6, .production_id = 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 6, .production_id = 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(40),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(60),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(43),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(44),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(49),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [410] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
