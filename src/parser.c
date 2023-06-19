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
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 51
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  sym_title = 1,
  anon_sym_NOTE_COLON = 2,
  aux_sym__note_line_token1 = 3,
  anon_sym_LBRACKNOTE_RBRACK_LF = 4,
  anon_sym_DASH_DASH_DASH_DASH_LF = 5,
  aux_sym__note_block_token1 = 6,
  anon_sym_TIP_COLON = 7,
  anon_sym_LBRACKTIP_RBRACK_LF = 8,
  anon_sym_IMPORTANT_COLON = 9,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 10,
  anon_sym_CAUTION_COLON = 11,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 12,
  anon_sym_WARNING_COLON = 13,
  anon_sym_LBRACKWARNING_RBRACK_LF = 14,
  anon_sym_LF = 15,
  aux_sym__list_item_token1 = 16,
  aux_sym_code_token1 = 17,
  anon_sym_RBRACK_LF = 18,
  aux_sym_code_language_token1 = 19,
  anon_sym_SLASH_SLASH = 20,
  aux_sym_comment_token1 = 21,
  anon_sym_image_COLON_COLON = 22,
  aux_sym_image_token1 = 23,
  anon_sym_LBRACK = 24,
  aux_sym_image_token2 = 25,
  aux_sym_url_token1 = 26,
  anon_sym_RBRACK = 27,
  anon_sym_footnote_COLON_LBRACK = 28,
  aux_sym_footnote_token1 = 29,
  anon_sym_kbd_COLON_LBRACK = 30,
  aux_sym_kbd_token1 = 31,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 32,
  aux_sym_table_token1 = 33,
  anon_sym_LT_LT = 34,
  anon_sym_COMMA = 35,
  anon_sym_GT_GT = 36,
  anon_sym_xref_COLON = 37,
  anon_sym_COLON_COLON = 38,
  anon_sym_audio_COLON_COLON = 39,
  aux_sym_audio_token1 = 40,
  anon_sym_video_COLON_COLON = 41,
  sym_emphasis = 42,
  sym_strong = 43,
  sym_monospace = 44,
  sym_superscript = 45,
  sym_subscript = 46,
  anon_sym_pass_COLON_LBRACK = 47,
  sym__blank = 48,
  sym__empty = 49,
  sym__sp = 50,
  sym__nbsp = 51,
  sym__zwsp = 52,
  sym__wj = 53,
  sym__apos = 54,
  sym__quot = 55,
  sym__lsquo = 56,
  sym__rsquo = 57,
  sym__ldquo = 58,
  sym__rdquo = 59,
  sym__deg = 60,
  sym__plus = 61,
  sym__brvbar = 62,
  sym__vbar = 63,
  sym__amp = 64,
  sym__lt = 65,
  sym__gt = 66,
  sym__startsb = 67,
  sym__endsb = 68,
  sym__caret = 69,
  sym__asterisk = 70,
  sym__tilde = 71,
  sym__backslash = 72,
  sym__backtick = 73,
  sym__two_colons = 74,
  sym__two_semicolons = 75,
  sym__cpp = 76,
  sym__pp = 77,
  sym_document = 78,
  sym__block = 79,
  sym__admonitions = 80,
  sym_note = 81,
  sym__note_line = 82,
  sym__note_block = 83,
  sym_tip = 84,
  sym__tip = 85,
  sym__tip_block = 86,
  sym_important = 87,
  sym__important = 88,
  sym__important_block = 89,
  sym_caution = 90,
  sym__caution = 91,
  sym__caution_block = 92,
  sym_warning = 93,
  sym__warning = 94,
  sym__warning_block = 95,
  sym_list = 96,
  aux_sym__list_item = 97,
  sym_code = 98,
  sym_code_language = 99,
  sym_code_content = 100,
  sym_comment = 101,
  sym_image = 102,
  sym_url = 103,
  sym_footnote = 104,
  sym_kbd = 105,
  sym_table = 106,
  sym_xref = 107,
  sym__inline_xref = 108,
  sym__xref = 109,
  sym_description_list = 110,
  sym_audio = 111,
  sym_video = 112,
  sym_paragraph = 113,
  sym__inline_element = 114,
  sym_passthrough = 115,
  sym_replacement = 116,
  aux_sym_document_repeat1 = 117,
  aux_sym__note_block_repeat1 = 118,
  aux_sym_table_repeat1 = 119,
  aux_sym_paragraph_repeat1 = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_title] = "title",
  [anon_sym_NOTE_COLON] = "NOTE: ",
  [aux_sym__note_line_token1] = "_note_line_token1",
  [anon_sym_LBRACKNOTE_RBRACK_LF] = "[NOTE]\n",
  [anon_sym_DASH_DASH_DASH_DASH_LF] = "----\n",
  [aux_sym__note_block_token1] = "_note_block_token1",
  [anon_sym_TIP_COLON] = "TIP: ",
  [anon_sym_LBRACKTIP_RBRACK_LF] = "[TIP]\n",
  [anon_sym_IMPORTANT_COLON] = "IMPORTANT: ",
  [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = "[IMPORTANT]\n",
  [anon_sym_CAUTION_COLON] = "CAUTION: ",
  [anon_sym_LBRACKCAUTION_RBRACK_LF] = "[CAUTION]\n",
  [anon_sym_WARNING_COLON] = "WARNING: ",
  [anon_sym_LBRACKWARNING_RBRACK_LF] = "[WARNING]\n",
  [anon_sym_LF] = "\n",
  [aux_sym__list_item_token1] = "_list_item_token1",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RBRACK_LF] = "]\n",
  [aux_sym_code_language_token1] = "code_language_token1",
  [anon_sym_SLASH_SLASH] = "// ",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym__note_line] = "_note_line",
  [sym__note_block] = "_note_block",
  [sym_tip] = "tip",
  [sym__tip] = "_tip",
  [sym__tip_block] = "_tip_block",
  [sym_important] = "important",
  [sym__important] = "_important",
  [sym__important_block] = "_important_block",
  [sym_caution] = "caution",
  [sym__caution] = "_caution",
  [sym__caution_block] = "_caution_block",
  [sym_warning] = "warning",
  [sym__warning] = "_warning",
  [sym__warning_block] = "_warning_block",
  [sym_list] = "list",
  [aux_sym__list_item] = "_list_item",
  [sym_code] = "code",
  [sym_code_language] = "code_language",
  [sym_code_content] = "code_content",
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
  [aux_sym__note_block_repeat1] = "_note_block_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_title] = sym_title,
  [anon_sym_NOTE_COLON] = anon_sym_NOTE_COLON,
  [aux_sym__note_line_token1] = aux_sym__note_line_token1,
  [anon_sym_LBRACKNOTE_RBRACK_LF] = anon_sym_LBRACKNOTE_RBRACK_LF,
  [anon_sym_DASH_DASH_DASH_DASH_LF] = anon_sym_DASH_DASH_DASH_DASH_LF,
  [aux_sym__note_block_token1] = aux_sym__note_block_token1,
  [anon_sym_TIP_COLON] = anon_sym_TIP_COLON,
  [anon_sym_LBRACKTIP_RBRACK_LF] = anon_sym_LBRACKTIP_RBRACK_LF,
  [anon_sym_IMPORTANT_COLON] = anon_sym_IMPORTANT_COLON,
  [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = anon_sym_LBRACKIMPORTANT_RBRACK_LF,
  [anon_sym_CAUTION_COLON] = anon_sym_CAUTION_COLON,
  [anon_sym_LBRACKCAUTION_RBRACK_LF] = anon_sym_LBRACKCAUTION_RBRACK_LF,
  [anon_sym_WARNING_COLON] = anon_sym_WARNING_COLON,
  [anon_sym_LBRACKWARNING_RBRACK_LF] = anon_sym_LBRACKWARNING_RBRACK_LF,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym__list_item_token1] = aux_sym__list_item_token1,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RBRACK_LF] = anon_sym_RBRACK_LF,
  [aux_sym_code_language_token1] = aux_sym_code_language_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym__note_line] = sym__note_line,
  [sym__note_block] = sym__note_block,
  [sym_tip] = sym_tip,
  [sym__tip] = sym__tip,
  [sym__tip_block] = sym__tip_block,
  [sym_important] = sym_important,
  [sym__important] = sym__important,
  [sym__important_block] = sym__important_block,
  [sym_caution] = sym_caution,
  [sym__caution] = sym__caution,
  [sym__caution_block] = sym__caution_block,
  [sym_warning] = sym_warning,
  [sym__warning] = sym__warning,
  [sym__warning_block] = sym__warning_block,
  [sym_list] = sym_list,
  [aux_sym__list_item] = aux_sym__list_item,
  [sym_code] = sym_code,
  [sym_code_language] = sym_code_language,
  [sym_code_content] = sym_code_content,
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
  [aux_sym__note_block_repeat1] = aux_sym__note_block_repeat1,
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
  [aux_sym__note_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACKNOTE_RBRACK_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__note_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TIP_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKTIP_RBRACK_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMPORTANT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAUTION_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCAUTION_RBRACK_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARNING_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKWARNING_RBRACK_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__list_item_token1] = {
    .visible = false,
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
  [aux_sym_code_language_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [sym__note_line] = {
    .visible = false,
    .named = true,
  },
  [sym__note_block] = {
    .visible = false,
    .named = true,
  },
  [sym_tip] = {
    .visible = true,
    .named = true,
  },
  [sym__tip] = {
    .visible = false,
    .named = true,
  },
  [sym__tip_block] = {
    .visible = false,
    .named = true,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [sym__important] = {
    .visible = false,
    .named = true,
  },
  [sym__important_block] = {
    .visible = false,
    .named = true,
  },
  [sym_caution] = {
    .visible = true,
    .named = true,
  },
  [sym__caution] = {
    .visible = false,
    .named = true,
  },
  [sym__caution_block] = {
    .visible = false,
    .named = true,
  },
  [sym_warning] = {
    .visible = true,
    .named = true,
  },
  [sym__warning] = {
    .visible = false,
    .named = true,
  },
  [sym__warning_block] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__list_item] = {
    .visible = false,
    .named = false,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_code_language] = {
    .visible = true,
    .named = true,
  },
  [sym_code_content] = {
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
  [aux_sym__note_block_repeat1] = {
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
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(287);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == ',') ADVANCE(479);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(324);
      if (lookahead == 'I') ADVANCE(332);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == 'T') ADVANCE(329);
      if (lookahead == 'W') ADVANCE(325);
      if (lookahead == '[') ADVANCE(463);
      if (lookahead == ']') ADVANCE(469);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead == 'a') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'k') ADVANCE(351);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 'v') ADVANCE(362);
      if (lookahead == 'x') ADVANCE(370);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(294);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(475);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(298);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(298);
      if (lookahead == ':') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(293);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ':') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(302);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(302);
      if (lookahead == ':') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(304);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(304);
      if (lookahead == ':') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(300);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead == ':') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(311);
      if (lookahead == ':') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(305);
      if (lookahead == '*') ADVANCE(281);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '^') ADVANCE(282);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(451);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(483);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '*') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(162);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(468);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(465);
      if (lookahead == '^') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '^') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ':') ADVANCE(484);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ':') ADVANCE(459);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ':') ADVANCE(486);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '[') ADVANCE(472);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '[') ADVANCE(496);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '[') ADVANCE(470);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(484);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(459);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(486);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '^') ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '_') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '`') ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(93);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(87);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(80);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'M') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'U') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ']') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ']') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ']') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ']') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ']') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 101:
      if (lookahead == '<') ADVANCE(478);
      END_STATE();
    case 102:
      if (lookahead == '=') ADVANCE(477);
      END_STATE();
    case 103:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 106:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 107:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == '>') ADVANCE(480);
      END_STATE();
    case 109:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 111:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 113:
      if (lookahead == 'G') ADVANCE(143);
      END_STATE();
    case 114:
      if (lookahead == 'I') ADVANCE(125);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 116:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 117:
      if (lookahead == 'M') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == 'P') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(131);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(111);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 133:
      if (lookahead == 'U') ADVANCE(130);
      END_STATE();
    case 134:
      if (lookahead == '[') ADVANCE(472);
      END_STATE();
    case 135:
      if (lookahead == '[') ADVANCE(496);
      END_STATE();
    case 136:
      if (lookahead == '[') ADVANCE(470);
      END_STATE();
    case 137:
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == ']') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(4);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(6);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(10);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 145:
      if (lookahead == '^') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 147:
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 'q') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == 'v') ADVANCE(159);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == 'z') ADVANCE(246);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(231);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(265);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(272);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(275);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 180:
      if (lookahead == 'j') ADVANCE(252);
      END_STATE();
    case 181:
      if (lookahead == 'k') ADVANCE(223);
      END_STATE();
    case 182:
      if (lookahead == 'k') ADVANCE(262);
      END_STATE();
    case 183:
      if (lookahead == 'k') ADVANCE(273);
      END_STATE();
    case 184:
      if (lookahead == 'k') ADVANCE(274);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 213:
      if (lookahead == 'q') ADVANCE(240);
      END_STATE();
    case 214:
      if (lookahead == 'q') ADVANCE(242);
      END_STATE();
    case 215:
      if (lookahead == 'q') ADVANCE(243);
      END_STATE();
    case 216:
      if (lookahead == 'q') ADVANCE(244);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 245:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 246:
      if (lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 248:
      if (lookahead == '}') ADVANCE(515);
      END_STATE();
    case 249:
      if (lookahead == '}') ADVANCE(514);
      END_STATE();
    case 250:
      if (lookahead == '}') ADVANCE(526);
      END_STATE();
    case 251:
      if (lookahead == '}') ADVANCE(499);
      END_STATE();
    case 252:
      if (lookahead == '}') ADVANCE(502);
      END_STATE();
    case 253:
      if (lookahead == '}') ADVANCE(513);
      END_STATE();
    case 254:
      if (lookahead == '}') ADVANCE(525);
      END_STATE();
    case 255:
      if (lookahead == '}') ADVANCE(509);
      END_STATE();
    case 256:
      if (lookahead == '}') ADVANCE(503);
      END_STATE();
    case 257:
      if (lookahead == '}') ADVANCE(500);
      END_STATE();
    case 258:
      if (lookahead == '}') ADVANCE(510);
      END_STATE();
    case 259:
      if (lookahead == '}') ADVANCE(504);
      END_STATE();
    case 260:
      if (lookahead == '}') ADVANCE(512);
      END_STATE();
    case 261:
      if (lookahead == '}') ADVANCE(501);
      END_STATE();
    case 262:
      if (lookahead == '}') ADVANCE(497);
      END_STATE();
    case 263:
      if (lookahead == '}') ADVANCE(518);
      END_STATE();
    case 264:
      if (lookahead == '}') ADVANCE(498);
      END_STATE();
    case 265:
      if (lookahead == '}') ADVANCE(517);
      END_STATE();
    case 266:
      if (lookahead == '}') ADVANCE(507);
      END_STATE();
    case 267:
      if (lookahead == '}') ADVANCE(505);
      END_STATE();
    case 268:
      if (lookahead == '}') ADVANCE(508);
      END_STATE();
    case 269:
      if (lookahead == '}') ADVANCE(506);
      END_STATE();
    case 270:
      if (lookahead == '}') ADVANCE(520);
      END_STATE();
    case 271:
      if (lookahead == '}') ADVANCE(511);
      END_STATE();
    case 272:
      if (lookahead == '}') ADVANCE(516);
      END_STATE();
    case 273:
      if (lookahead == '}') ADVANCE(519);
      END_STATE();
    case 274:
      if (lookahead == '}') ADVANCE(522);
      END_STATE();
    case 275:
      if (lookahead == '}') ADVANCE(521);
      END_STATE();
    case 276:
      if (lookahead == '}') ADVANCE(523);
      END_STATE();
    case 277:
      if (lookahead == '}') ADVANCE(524);
      END_STATE();
    case 278:
      if (lookahead == '~') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 279:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(474);
      END_STATE();
    case 281:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 282:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 283:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 284:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 285:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 286:
      if (eof) ADVANCE(287);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == 'C') ADVANCE(383);
      if (lookahead == 'I') ADVANCE(391);
      if (lookahead == 'N') ADVANCE(396);
      if (lookahead == 'T') ADVANCE(388);
      if (lookahead == 'W') ADVANCE(384);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == '_') ADVANCE(378);
      if (lookahead == '`') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'k') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead == 'v') ADVANCE(421);
      if (lookahead == 'x') ADVANCE(429);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\n') ADVANCE(288);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '*') ADVANCE(307);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == ':') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'A') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'E') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'G') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'I') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'I') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'I') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'M') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'N') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'N') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'N') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'N') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'O') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'O') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'O') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'P') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'P') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'R') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'R') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'T') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'T') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'T') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'T') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'U') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'b') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'f') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'm') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 's') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == 'u') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(280);
      if (lookahead == '.') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '_') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(52);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(28);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(58);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(55);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(443);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'M') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(379);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'R') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(444);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'U') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(441);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'g') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(409);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(433);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 's') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 's') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 't') ADVANCE(423);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 't') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(30);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(59);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(56);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(32);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(60);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(57);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(34);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(36);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 's') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 's') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '|') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == 'W') ADVANCE(110);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_table_token1);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '\n') ADVANCE(475);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '_') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '*') ADVANCE(489);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '`') ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '^') ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__blank);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__empty);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__nbsp);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__zwsp);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__wj);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__apos);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__quot);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__lsquo);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__rsquo);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__ldquo);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__rdquo);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__deg);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__plus);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__brvbar);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__vbar);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__amp);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__lt);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__gt);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__startsb);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__endsb);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__caret);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__asterisk);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__tilde);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__backslash);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__backtick);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__two_colons);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__two_semicolons);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__cpp);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__pp);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 286},
  [2] = {.lex_state = 286},
  [3] = {.lex_state = 286},
  [4] = {.lex_state = 286},
  [5] = {.lex_state = 286},
  [6] = {.lex_state = 286},
  [7] = {.lex_state = 286},
  [8] = {.lex_state = 286},
  [9] = {.lex_state = 286},
  [10] = {.lex_state = 286},
  [11] = {.lex_state = 286},
  [12] = {.lex_state = 286},
  [13] = {.lex_state = 286},
  [14] = {.lex_state = 286},
  [15] = {.lex_state = 286},
  [16] = {.lex_state = 286},
  [17] = {.lex_state = 286},
  [18] = {.lex_state = 286},
  [19] = {.lex_state = 286},
  [20] = {.lex_state = 286},
  [21] = {.lex_state = 286},
  [22] = {.lex_state = 286},
  [23] = {.lex_state = 286},
  [24] = {.lex_state = 286},
  [25] = {.lex_state = 286},
  [26] = {.lex_state = 286},
  [27] = {.lex_state = 286},
  [28] = {.lex_state = 286},
  [29] = {.lex_state = 286},
  [30] = {.lex_state = 286},
  [31] = {.lex_state = 286},
  [32] = {.lex_state = 286},
  [33] = {.lex_state = 286},
  [34] = {.lex_state = 286},
  [35] = {.lex_state = 286},
  [36] = {.lex_state = 286},
  [37] = {.lex_state = 286},
  [38] = {.lex_state = 286},
  [39] = {.lex_state = 286},
  [40] = {.lex_state = 286},
  [41] = {.lex_state = 286},
  [42] = {.lex_state = 286},
  [43] = {.lex_state = 286},
  [44] = {.lex_state = 286},
  [45] = {.lex_state = 286},
  [46] = {.lex_state = 286},
  [47] = {.lex_state = 286},
  [48] = {.lex_state = 286},
  [49] = {.lex_state = 286},
  [50] = {.lex_state = 286},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 456},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 456},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 456},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 137},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 279},
  [77] = {.lex_state = 138},
  [78] = {.lex_state = 137},
  [79] = {.lex_state = 139},
  [80] = {.lex_state = 464},
  [81] = {.lex_state = 137},
  [82] = {.lex_state = 464},
  [83] = {.lex_state = 137},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 286},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 279},
  [89] = {.lex_state = 464},
  [90] = {.lex_state = 279},
  [91] = {.lex_state = 137},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 286},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 286},
  [98] = {.lex_state = 137},
  [99] = {.lex_state = 279},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 464},
  [102] = {.lex_state = 279},
  [103] = {.lex_state = 279},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 137},
  [106] = {.lex_state = 137},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 460},
  [110] = {.lex_state = 457},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_title] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH_LF] = ACTIONS(1),
    [anon_sym_TIP_COLON] = ACTIONS(1),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(1),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(1),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(1),
    [anon_sym_CAUTION_COLON] = ACTIONS(1),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(1),
    [anon_sym_WARNING_COLON] = ACTIONS(1),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [aux_sym_code_language_token1] = ACTIONS(1),
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
    [sym_document] = STATE(84),
    [sym__block] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(28),
    [sym__note_block] = STATE(28),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(20),
    [sym__tip_block] = STATE(20),
    [sym_important] = STATE(2),
    [sym__important] = STATE(43),
    [sym__important_block] = STATE(43),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(30),
    [sym__caution_block] = STATE(30),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(31),
    [sym__warning_block] = STATE(31),
    [sym_list] = STATE(2),
    [aux_sym__list_item] = STATE(61),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [sym_url] = STATE(2),
    [sym_footnote] = STATE(2),
    [sym_kbd] = STATE(2),
    [sym_table] = STATE(2),
    [sym_xref] = STATE(2),
    [sym__inline_xref] = STATE(33),
    [sym__xref] = STATE(33),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(51),
    [sym_passthrough] = STATE(51),
    [sym_replacement] = STATE(51),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_title] = ACTIONS(5),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(9),
    [anon_sym_TIP_COLON] = ACTIONS(11),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(13),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(15),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(17),
    [anon_sym_CAUTION_COLON] = ACTIONS(19),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(21),
    [anon_sym_WARNING_COLON] = ACTIONS(23),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(25),
    [aux_sym__list_item_token1] = ACTIONS(27),
    [aux_sym_code_token1] = ACTIONS(29),
    [aux_sym_code_language_token1] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_image_COLON_COLON] = ACTIONS(35),
    [aux_sym_url_token1] = ACTIONS(37),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(39),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(41),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(45),
    [anon_sym_xref_COLON] = ACTIONS(47),
    [anon_sym_audio_COLON_COLON] = ACTIONS(49),
    [anon_sym_video_COLON_COLON] = ACTIONS(51),
    [sym_emphasis] = ACTIONS(53),
    [sym_strong] = ACTIONS(53),
    [sym_monospace] = ACTIONS(53),
    [sym_superscript] = ACTIONS(53),
    [sym_subscript] = ACTIONS(55),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(57),
    [sym__blank] = ACTIONS(59),
    [sym__empty] = ACTIONS(59),
    [sym__sp] = ACTIONS(59),
    [sym__nbsp] = ACTIONS(59),
    [sym__zwsp] = ACTIONS(59),
    [sym__wj] = ACTIONS(59),
    [sym__apos] = ACTIONS(59),
    [sym__quot] = ACTIONS(59),
    [sym__lsquo] = ACTIONS(59),
    [sym__rsquo] = ACTIONS(59),
    [sym__ldquo] = ACTIONS(59),
    [sym__rdquo] = ACTIONS(59),
    [sym__deg] = ACTIONS(59),
    [sym__plus] = ACTIONS(59),
    [sym__brvbar] = ACTIONS(59),
    [sym__vbar] = ACTIONS(59),
    [sym__amp] = ACTIONS(59),
    [sym__lt] = ACTIONS(59),
    [sym__gt] = ACTIONS(59),
    [sym__startsb] = ACTIONS(59),
    [sym__endsb] = ACTIONS(59),
    [sym__caret] = ACTIONS(59),
    [sym__asterisk] = ACTIONS(59),
    [sym__tilde] = ACTIONS(59),
    [sym__backslash] = ACTIONS(59),
    [sym__backtick] = ACTIONS(59),
    [sym__two_colons] = ACTIONS(59),
    [sym__two_semicolons] = ACTIONS(59),
    [sym__cpp] = ACTIONS(59),
    [sym__pp] = ACTIONS(59),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(28),
    [sym__note_block] = STATE(28),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(20),
    [sym__tip_block] = STATE(20),
    [sym_important] = STATE(3),
    [sym__important] = STATE(43),
    [sym__important_block] = STATE(43),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(30),
    [sym__caution_block] = STATE(30),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(31),
    [sym__warning_block] = STATE(31),
    [sym_list] = STATE(3),
    [aux_sym__list_item] = STATE(61),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [sym_url] = STATE(3),
    [sym_footnote] = STATE(3),
    [sym_kbd] = STATE(3),
    [sym_table] = STATE(3),
    [sym_xref] = STATE(3),
    [sym__inline_xref] = STATE(33),
    [sym__xref] = STATE(33),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(51),
    [sym_passthrough] = STATE(51),
    [sym_replacement] = STATE(51),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_title] = ACTIONS(63),
    [anon_sym_NOTE_COLON] = ACTIONS(7),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(9),
    [anon_sym_TIP_COLON] = ACTIONS(11),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(13),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(15),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(17),
    [anon_sym_CAUTION_COLON] = ACTIONS(19),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(21),
    [anon_sym_WARNING_COLON] = ACTIONS(23),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(25),
    [aux_sym__list_item_token1] = ACTIONS(27),
    [aux_sym_code_token1] = ACTIONS(29),
    [aux_sym_code_language_token1] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_image_COLON_COLON] = ACTIONS(35),
    [aux_sym_url_token1] = ACTIONS(37),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(39),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(41),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(45),
    [anon_sym_xref_COLON] = ACTIONS(47),
    [anon_sym_audio_COLON_COLON] = ACTIONS(49),
    [anon_sym_video_COLON_COLON] = ACTIONS(51),
    [sym_emphasis] = ACTIONS(53),
    [sym_strong] = ACTIONS(53),
    [sym_monospace] = ACTIONS(53),
    [sym_superscript] = ACTIONS(53),
    [sym_subscript] = ACTIONS(55),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(57),
    [sym__blank] = ACTIONS(59),
    [sym__empty] = ACTIONS(59),
    [sym__sp] = ACTIONS(59),
    [sym__nbsp] = ACTIONS(59),
    [sym__zwsp] = ACTIONS(59),
    [sym__wj] = ACTIONS(59),
    [sym__apos] = ACTIONS(59),
    [sym__quot] = ACTIONS(59),
    [sym__lsquo] = ACTIONS(59),
    [sym__rsquo] = ACTIONS(59),
    [sym__ldquo] = ACTIONS(59),
    [sym__rdquo] = ACTIONS(59),
    [sym__deg] = ACTIONS(59),
    [sym__plus] = ACTIONS(59),
    [sym__brvbar] = ACTIONS(59),
    [sym__vbar] = ACTIONS(59),
    [sym__amp] = ACTIONS(59),
    [sym__lt] = ACTIONS(59),
    [sym__gt] = ACTIONS(59),
    [sym__startsb] = ACTIONS(59),
    [sym__endsb] = ACTIONS(59),
    [sym__caret] = ACTIONS(59),
    [sym__asterisk] = ACTIONS(59),
    [sym__tilde] = ACTIONS(59),
    [sym__backslash] = ACTIONS(59),
    [sym__backtick] = ACTIONS(59),
    [sym__two_colons] = ACTIONS(59),
    [sym__two_semicolons] = ACTIONS(59),
    [sym__cpp] = ACTIONS(59),
    [sym__pp] = ACTIONS(59),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(28),
    [sym__note_block] = STATE(28),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(20),
    [sym__tip_block] = STATE(20),
    [sym_important] = STATE(3),
    [sym__important] = STATE(43),
    [sym__important_block] = STATE(43),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(30),
    [sym__caution_block] = STATE(30),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(31),
    [sym__warning_block] = STATE(31),
    [sym_list] = STATE(3),
    [aux_sym__list_item] = STATE(61),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [sym_url] = STATE(3),
    [sym_footnote] = STATE(3),
    [sym_kbd] = STATE(3),
    [sym_table] = STATE(3),
    [sym_xref] = STATE(3),
    [sym__inline_xref] = STATE(33),
    [sym__xref] = STATE(33),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(51),
    [sym_passthrough] = STATE(51),
    [sym_replacement] = STATE(51),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_title] = ACTIONS(67),
    [anon_sym_NOTE_COLON] = ACTIONS(70),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(73),
    [anon_sym_TIP_COLON] = ACTIONS(76),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(79),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(82),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(85),
    [anon_sym_CAUTION_COLON] = ACTIONS(88),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(91),
    [anon_sym_WARNING_COLON] = ACTIONS(94),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(97),
    [aux_sym__list_item_token1] = ACTIONS(100),
    [aux_sym_code_token1] = ACTIONS(103),
    [aux_sym_code_language_token1] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(109),
    [anon_sym_image_COLON_COLON] = ACTIONS(112),
    [aux_sym_url_token1] = ACTIONS(115),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(118),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(121),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(124),
    [anon_sym_LT_LT] = ACTIONS(127),
    [anon_sym_xref_COLON] = ACTIONS(130),
    [anon_sym_audio_COLON_COLON] = ACTIONS(133),
    [anon_sym_video_COLON_COLON] = ACTIONS(136),
    [sym_emphasis] = ACTIONS(139),
    [sym_strong] = ACTIONS(139),
    [sym_monospace] = ACTIONS(139),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(142),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(145),
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
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_title] = ACTIONS(151),
    [anon_sym_NOTE_COLON] = ACTIONS(151),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(151),
    [anon_sym_TIP_COLON] = ACTIONS(151),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(151),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(151),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(151),
    [anon_sym_CAUTION_COLON] = ACTIONS(151),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(151),
    [anon_sym_WARNING_COLON] = ACTIONS(151),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(151),
    [aux_sym__list_item_token1] = ACTIONS(151),
    [aux_sym_code_token1] = ACTIONS(151),
    [aux_sym_code_language_token1] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(151),
    [anon_sym_image_COLON_COLON] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [aux_sym_url_token1] = ACTIONS(153),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(151),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(151),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(151),
    [anon_sym_xref_COLON] = ACTIONS(153),
    [anon_sym_audio_COLON_COLON] = ACTIONS(151),
    [anon_sym_video_COLON_COLON] = ACTIONS(151),
    [sym_emphasis] = ACTIONS(153),
    [sym_strong] = ACTIONS(153),
    [sym_monospace] = ACTIONS(153),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(151),
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
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_title] = ACTIONS(157),
    [anon_sym_NOTE_COLON] = ACTIONS(157),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(157),
    [anon_sym_TIP_COLON] = ACTIONS(157),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(157),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(157),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(157),
    [anon_sym_CAUTION_COLON] = ACTIONS(157),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(157),
    [anon_sym_WARNING_COLON] = ACTIONS(157),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(157),
    [aux_sym__list_item_token1] = ACTIONS(157),
    [aux_sym_code_token1] = ACTIONS(157),
    [aux_sym_code_language_token1] = ACTIONS(159),
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
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_title] = ACTIONS(161),
    [anon_sym_NOTE_COLON] = ACTIONS(161),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(161),
    [anon_sym_TIP_COLON] = ACTIONS(161),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(161),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(161),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(161),
    [anon_sym_CAUTION_COLON] = ACTIONS(161),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(161),
    [anon_sym_WARNING_COLON] = ACTIONS(161),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(161),
    [aux_sym__list_item_token1] = ACTIONS(161),
    [aux_sym_code_token1] = ACTIONS(161),
    [aux_sym_code_language_token1] = ACTIONS(163),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_title] = ACTIONS(165),
    [anon_sym_NOTE_COLON] = ACTIONS(165),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(165),
    [anon_sym_TIP_COLON] = ACTIONS(165),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(165),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(165),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(165),
    [anon_sym_CAUTION_COLON] = ACTIONS(165),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(165),
    [anon_sym_WARNING_COLON] = ACTIONS(165),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(165),
    [aux_sym__list_item_token1] = ACTIONS(165),
    [aux_sym_code_token1] = ACTIONS(165),
    [aux_sym_code_language_token1] = ACTIONS(167),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_title] = ACTIONS(169),
    [anon_sym_NOTE_COLON] = ACTIONS(169),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(169),
    [anon_sym_TIP_COLON] = ACTIONS(169),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(169),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(169),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(169),
    [anon_sym_CAUTION_COLON] = ACTIONS(169),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(169),
    [anon_sym_WARNING_COLON] = ACTIONS(169),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(169),
    [aux_sym__list_item_token1] = ACTIONS(169),
    [aux_sym_code_token1] = ACTIONS(169),
    [aux_sym_code_language_token1] = ACTIONS(171),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_title] = ACTIONS(173),
    [anon_sym_NOTE_COLON] = ACTIONS(173),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(173),
    [anon_sym_TIP_COLON] = ACTIONS(173),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(173),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(173),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(173),
    [anon_sym_CAUTION_COLON] = ACTIONS(173),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(173),
    [anon_sym_WARNING_COLON] = ACTIONS(173),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(173),
    [aux_sym__list_item_token1] = ACTIONS(173),
    [aux_sym_code_token1] = ACTIONS(173),
    [aux_sym_code_language_token1] = ACTIONS(175),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_title] = ACTIONS(177),
    [anon_sym_NOTE_COLON] = ACTIONS(177),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(177),
    [anon_sym_TIP_COLON] = ACTIONS(177),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(177),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(177),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(177),
    [anon_sym_CAUTION_COLON] = ACTIONS(177),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(177),
    [anon_sym_WARNING_COLON] = ACTIONS(177),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(177),
    [aux_sym__list_item_token1] = ACTIONS(177),
    [aux_sym_code_token1] = ACTIONS(177),
    [aux_sym_code_language_token1] = ACTIONS(179),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_title] = ACTIONS(181),
    [anon_sym_NOTE_COLON] = ACTIONS(181),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(181),
    [anon_sym_TIP_COLON] = ACTIONS(181),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(181),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(181),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(181),
    [anon_sym_CAUTION_COLON] = ACTIONS(181),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(181),
    [anon_sym_WARNING_COLON] = ACTIONS(181),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(181),
    [aux_sym__list_item_token1] = ACTIONS(181),
    [aux_sym_code_token1] = ACTIONS(181),
    [aux_sym_code_language_token1] = ACTIONS(183),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_title] = ACTIONS(185),
    [anon_sym_NOTE_COLON] = ACTIONS(185),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(185),
    [anon_sym_TIP_COLON] = ACTIONS(185),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(185),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(185),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(185),
    [anon_sym_CAUTION_COLON] = ACTIONS(185),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(185),
    [anon_sym_WARNING_COLON] = ACTIONS(185),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(185),
    [aux_sym__list_item_token1] = ACTIONS(185),
    [aux_sym_code_token1] = ACTIONS(185),
    [aux_sym_code_language_token1] = ACTIONS(187),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_title] = ACTIONS(189),
    [anon_sym_NOTE_COLON] = ACTIONS(189),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(189),
    [anon_sym_TIP_COLON] = ACTIONS(189),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(189),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(189),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(189),
    [anon_sym_CAUTION_COLON] = ACTIONS(189),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(189),
    [anon_sym_WARNING_COLON] = ACTIONS(189),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(189),
    [aux_sym__list_item_token1] = ACTIONS(189),
    [aux_sym_code_token1] = ACTIONS(189),
    [aux_sym_code_language_token1] = ACTIONS(191),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_title] = ACTIONS(193),
    [anon_sym_NOTE_COLON] = ACTIONS(193),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(193),
    [anon_sym_TIP_COLON] = ACTIONS(193),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(193),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(193),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(193),
    [anon_sym_CAUTION_COLON] = ACTIONS(193),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(193),
    [anon_sym_WARNING_COLON] = ACTIONS(193),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(193),
    [aux_sym__list_item_token1] = ACTIONS(193),
    [aux_sym_code_token1] = ACTIONS(193),
    [aux_sym_code_language_token1] = ACTIONS(195),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_title] = ACTIONS(197),
    [anon_sym_NOTE_COLON] = ACTIONS(197),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(197),
    [anon_sym_TIP_COLON] = ACTIONS(197),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(197),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(197),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(197),
    [anon_sym_CAUTION_COLON] = ACTIONS(197),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(197),
    [anon_sym_WARNING_COLON] = ACTIONS(197),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(197),
    [aux_sym__list_item_token1] = ACTIONS(197),
    [aux_sym_code_token1] = ACTIONS(197),
    [aux_sym_code_language_token1] = ACTIONS(199),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_title] = ACTIONS(201),
    [anon_sym_NOTE_COLON] = ACTIONS(201),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(201),
    [anon_sym_TIP_COLON] = ACTIONS(201),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(201),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(201),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(201),
    [anon_sym_CAUTION_COLON] = ACTIONS(201),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(201),
    [anon_sym_WARNING_COLON] = ACTIONS(201),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(201),
    [aux_sym__list_item_token1] = ACTIONS(201),
    [aux_sym_code_token1] = ACTIONS(201),
    [aux_sym_code_language_token1] = ACTIONS(203),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_title] = ACTIONS(205),
    [anon_sym_NOTE_COLON] = ACTIONS(205),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(205),
    [anon_sym_TIP_COLON] = ACTIONS(205),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(205),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(205),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(205),
    [anon_sym_CAUTION_COLON] = ACTIONS(205),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(205),
    [anon_sym_WARNING_COLON] = ACTIONS(205),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(205),
    [aux_sym__list_item_token1] = ACTIONS(205),
    [aux_sym_code_token1] = ACTIONS(205),
    [aux_sym_code_language_token1] = ACTIONS(207),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_title] = ACTIONS(209),
    [anon_sym_NOTE_COLON] = ACTIONS(209),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(209),
    [anon_sym_TIP_COLON] = ACTIONS(209),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(209),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(209),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(209),
    [anon_sym_CAUTION_COLON] = ACTIONS(209),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(209),
    [anon_sym_WARNING_COLON] = ACTIONS(209),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(209),
    [aux_sym__list_item_token1] = ACTIONS(209),
    [aux_sym_code_token1] = ACTIONS(209),
    [aux_sym_code_language_token1] = ACTIONS(211),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_title] = ACTIONS(213),
    [anon_sym_NOTE_COLON] = ACTIONS(213),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(213),
    [anon_sym_TIP_COLON] = ACTIONS(213),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(213),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(213),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(213),
    [anon_sym_CAUTION_COLON] = ACTIONS(213),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(213),
    [anon_sym_WARNING_COLON] = ACTIONS(213),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(213),
    [aux_sym__list_item_token1] = ACTIONS(213),
    [aux_sym_code_token1] = ACTIONS(213),
    [aux_sym_code_language_token1] = ACTIONS(215),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_title] = ACTIONS(217),
    [anon_sym_NOTE_COLON] = ACTIONS(217),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(217),
    [anon_sym_TIP_COLON] = ACTIONS(217),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(217),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(217),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(217),
    [anon_sym_CAUTION_COLON] = ACTIONS(217),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(217),
    [anon_sym_WARNING_COLON] = ACTIONS(217),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(217),
    [aux_sym__list_item_token1] = ACTIONS(217),
    [aux_sym_code_token1] = ACTIONS(217),
    [aux_sym_code_language_token1] = ACTIONS(219),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_title] = ACTIONS(221),
    [anon_sym_NOTE_COLON] = ACTIONS(221),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(221),
    [anon_sym_TIP_COLON] = ACTIONS(221),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(221),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(221),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(221),
    [anon_sym_CAUTION_COLON] = ACTIONS(221),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(221),
    [anon_sym_WARNING_COLON] = ACTIONS(221),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(221),
    [aux_sym__list_item_token1] = ACTIONS(221),
    [aux_sym_code_token1] = ACTIONS(221),
    [aux_sym_code_language_token1] = ACTIONS(223),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_title] = ACTIONS(225),
    [anon_sym_NOTE_COLON] = ACTIONS(225),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(225),
    [anon_sym_TIP_COLON] = ACTIONS(225),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(225),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(225),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(225),
    [anon_sym_CAUTION_COLON] = ACTIONS(225),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(225),
    [anon_sym_WARNING_COLON] = ACTIONS(225),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(225),
    [aux_sym__list_item_token1] = ACTIONS(225),
    [aux_sym_code_token1] = ACTIONS(225),
    [aux_sym_code_language_token1] = ACTIONS(227),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_title] = ACTIONS(229),
    [anon_sym_NOTE_COLON] = ACTIONS(229),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(229),
    [anon_sym_TIP_COLON] = ACTIONS(229),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(229),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(229),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(229),
    [anon_sym_CAUTION_COLON] = ACTIONS(229),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(229),
    [anon_sym_WARNING_COLON] = ACTIONS(229),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(229),
    [aux_sym__list_item_token1] = ACTIONS(229),
    [aux_sym_code_token1] = ACTIONS(229),
    [aux_sym_code_language_token1] = ACTIONS(231),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_title] = ACTIONS(233),
    [anon_sym_NOTE_COLON] = ACTIONS(233),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(233),
    [anon_sym_TIP_COLON] = ACTIONS(233),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(233),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(233),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(233),
    [anon_sym_CAUTION_COLON] = ACTIONS(233),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(233),
    [anon_sym_WARNING_COLON] = ACTIONS(233),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(233),
    [aux_sym__list_item_token1] = ACTIONS(233),
    [aux_sym_code_token1] = ACTIONS(233),
    [aux_sym_code_language_token1] = ACTIONS(235),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_title] = ACTIONS(237),
    [anon_sym_NOTE_COLON] = ACTIONS(237),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(237),
    [anon_sym_TIP_COLON] = ACTIONS(237),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(237),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(237),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(237),
    [anon_sym_CAUTION_COLON] = ACTIONS(237),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(237),
    [anon_sym_WARNING_COLON] = ACTIONS(237),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(237),
    [aux_sym__list_item_token1] = ACTIONS(237),
    [aux_sym_code_token1] = ACTIONS(237),
    [aux_sym_code_language_token1] = ACTIONS(239),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_title] = ACTIONS(241),
    [anon_sym_NOTE_COLON] = ACTIONS(241),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(241),
    [anon_sym_TIP_COLON] = ACTIONS(241),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(241),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(241),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(241),
    [anon_sym_CAUTION_COLON] = ACTIONS(241),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(241),
    [anon_sym_WARNING_COLON] = ACTIONS(241),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(241),
    [aux_sym__list_item_token1] = ACTIONS(241),
    [aux_sym_code_token1] = ACTIONS(241),
    [aux_sym_code_language_token1] = ACTIONS(243),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_title] = ACTIONS(245),
    [anon_sym_NOTE_COLON] = ACTIONS(245),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(245),
    [anon_sym_TIP_COLON] = ACTIONS(245),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(245),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(245),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(245),
    [anon_sym_CAUTION_COLON] = ACTIONS(245),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(245),
    [anon_sym_WARNING_COLON] = ACTIONS(245),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(245),
    [aux_sym__list_item_token1] = ACTIONS(245),
    [aux_sym_code_token1] = ACTIONS(245),
    [aux_sym_code_language_token1] = ACTIONS(247),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_title] = ACTIONS(249),
    [anon_sym_NOTE_COLON] = ACTIONS(249),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(249),
    [anon_sym_TIP_COLON] = ACTIONS(249),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(249),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(249),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(249),
    [anon_sym_CAUTION_COLON] = ACTIONS(249),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(249),
    [anon_sym_WARNING_COLON] = ACTIONS(249),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(249),
    [aux_sym__list_item_token1] = ACTIONS(249),
    [aux_sym_code_token1] = ACTIONS(249),
    [aux_sym_code_language_token1] = ACTIONS(251),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_title] = ACTIONS(253),
    [anon_sym_NOTE_COLON] = ACTIONS(253),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(253),
    [anon_sym_TIP_COLON] = ACTIONS(253),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(253),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(253),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(253),
    [anon_sym_CAUTION_COLON] = ACTIONS(253),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(253),
    [anon_sym_WARNING_COLON] = ACTIONS(253),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(253),
    [aux_sym__list_item_token1] = ACTIONS(253),
    [aux_sym_code_token1] = ACTIONS(253),
    [aux_sym_code_language_token1] = ACTIONS(255),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_title] = ACTIONS(257),
    [anon_sym_NOTE_COLON] = ACTIONS(257),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(257),
    [anon_sym_TIP_COLON] = ACTIONS(257),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(257),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(257),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(257),
    [anon_sym_CAUTION_COLON] = ACTIONS(257),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(257),
    [anon_sym_WARNING_COLON] = ACTIONS(257),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(257),
    [aux_sym__list_item_token1] = ACTIONS(257),
    [aux_sym_code_token1] = ACTIONS(257),
    [aux_sym_code_language_token1] = ACTIONS(259),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_title] = ACTIONS(261),
    [anon_sym_NOTE_COLON] = ACTIONS(261),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(261),
    [anon_sym_TIP_COLON] = ACTIONS(261),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(261),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(261),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(261),
    [anon_sym_CAUTION_COLON] = ACTIONS(261),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(261),
    [anon_sym_WARNING_COLON] = ACTIONS(261),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(261),
    [aux_sym__list_item_token1] = ACTIONS(261),
    [aux_sym_code_token1] = ACTIONS(261),
    [aux_sym_code_language_token1] = ACTIONS(263),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_title] = ACTIONS(265),
    [anon_sym_NOTE_COLON] = ACTIONS(265),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(265),
    [anon_sym_TIP_COLON] = ACTIONS(265),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(265),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(265),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(265),
    [anon_sym_CAUTION_COLON] = ACTIONS(265),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(265),
    [anon_sym_WARNING_COLON] = ACTIONS(265),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(265),
    [aux_sym__list_item_token1] = ACTIONS(265),
    [aux_sym_code_token1] = ACTIONS(265),
    [aux_sym_code_language_token1] = ACTIONS(267),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_title] = ACTIONS(269),
    [anon_sym_NOTE_COLON] = ACTIONS(269),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(269),
    [anon_sym_TIP_COLON] = ACTIONS(269),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(269),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(269),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(269),
    [anon_sym_CAUTION_COLON] = ACTIONS(269),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(269),
    [anon_sym_WARNING_COLON] = ACTIONS(269),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(269),
    [aux_sym__list_item_token1] = ACTIONS(269),
    [aux_sym_code_token1] = ACTIONS(269),
    [aux_sym_code_language_token1] = ACTIONS(271),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_title] = ACTIONS(273),
    [anon_sym_NOTE_COLON] = ACTIONS(273),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(273),
    [anon_sym_TIP_COLON] = ACTIONS(273),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(273),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(273),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(273),
    [anon_sym_CAUTION_COLON] = ACTIONS(273),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(273),
    [anon_sym_WARNING_COLON] = ACTIONS(273),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(273),
    [aux_sym__list_item_token1] = ACTIONS(273),
    [aux_sym_code_token1] = ACTIONS(273),
    [aux_sym_code_language_token1] = ACTIONS(275),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_title] = ACTIONS(277),
    [anon_sym_NOTE_COLON] = ACTIONS(277),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(277),
    [anon_sym_TIP_COLON] = ACTIONS(277),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(277),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(277),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(277),
    [anon_sym_CAUTION_COLON] = ACTIONS(277),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(277),
    [anon_sym_WARNING_COLON] = ACTIONS(277),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(277),
    [aux_sym__list_item_token1] = ACTIONS(277),
    [aux_sym_code_token1] = ACTIONS(277),
    [aux_sym_code_language_token1] = ACTIONS(279),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_title] = ACTIONS(281),
    [anon_sym_NOTE_COLON] = ACTIONS(281),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(281),
    [anon_sym_TIP_COLON] = ACTIONS(281),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(281),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(281),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(281),
    [anon_sym_CAUTION_COLON] = ACTIONS(281),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(281),
    [anon_sym_WARNING_COLON] = ACTIONS(281),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(281),
    [aux_sym__list_item_token1] = ACTIONS(281),
    [aux_sym_code_token1] = ACTIONS(281),
    [aux_sym_code_language_token1] = ACTIONS(283),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_image_COLON_COLON] = ACTIONS(281),
    [aux_sym_url_token1] = ACTIONS(283),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(281),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(281),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_xref_COLON] = ACTIONS(283),
    [anon_sym_audio_COLON_COLON] = ACTIONS(281),
    [anon_sym_video_COLON_COLON] = ACTIONS(281),
    [sym_emphasis] = ACTIONS(283),
    [sym_strong] = ACTIONS(283),
    [sym_monospace] = ACTIONS(283),
    [sym_superscript] = ACTIONS(283),
    [sym_subscript] = ACTIONS(281),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(281),
    [sym__blank] = ACTIONS(281),
    [sym__empty] = ACTIONS(281),
    [sym__sp] = ACTIONS(281),
    [sym__nbsp] = ACTIONS(281),
    [sym__zwsp] = ACTIONS(281),
    [sym__wj] = ACTIONS(281),
    [sym__apos] = ACTIONS(281),
    [sym__quot] = ACTIONS(281),
    [sym__lsquo] = ACTIONS(281),
    [sym__rsquo] = ACTIONS(281),
    [sym__ldquo] = ACTIONS(281),
    [sym__rdquo] = ACTIONS(281),
    [sym__deg] = ACTIONS(281),
    [sym__plus] = ACTIONS(281),
    [sym__brvbar] = ACTIONS(281),
    [sym__vbar] = ACTIONS(281),
    [sym__amp] = ACTIONS(281),
    [sym__lt] = ACTIONS(281),
    [sym__gt] = ACTIONS(281),
    [sym__startsb] = ACTIONS(281),
    [sym__endsb] = ACTIONS(281),
    [sym__caret] = ACTIONS(281),
    [sym__asterisk] = ACTIONS(281),
    [sym__tilde] = ACTIONS(281),
    [sym__backslash] = ACTIONS(281),
    [sym__backtick] = ACTIONS(281),
    [sym__two_colons] = ACTIONS(281),
    [sym__two_semicolons] = ACTIONS(281),
    [sym__cpp] = ACTIONS(281),
    [sym__pp] = ACTIONS(281),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym_title] = ACTIONS(285),
    [anon_sym_NOTE_COLON] = ACTIONS(285),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(285),
    [anon_sym_TIP_COLON] = ACTIONS(285),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(285),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(285),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(285),
    [anon_sym_CAUTION_COLON] = ACTIONS(285),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(285),
    [anon_sym_WARNING_COLON] = ACTIONS(285),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(285),
    [aux_sym__list_item_token1] = ACTIONS(285),
    [aux_sym_code_token1] = ACTIONS(285),
    [aux_sym_code_language_token1] = ACTIONS(287),
    [anon_sym_SLASH_SLASH] = ACTIONS(285),
    [anon_sym_image_COLON_COLON] = ACTIONS(285),
    [aux_sym_url_token1] = ACTIONS(287),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(285),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(285),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(285),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_xref_COLON] = ACTIONS(287),
    [anon_sym_audio_COLON_COLON] = ACTIONS(285),
    [anon_sym_video_COLON_COLON] = ACTIONS(285),
    [sym_emphasis] = ACTIONS(287),
    [sym_strong] = ACTIONS(287),
    [sym_monospace] = ACTIONS(287),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(285),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(285),
    [sym__blank] = ACTIONS(285),
    [sym__empty] = ACTIONS(285),
    [sym__sp] = ACTIONS(285),
    [sym__nbsp] = ACTIONS(285),
    [sym__zwsp] = ACTIONS(285),
    [sym__wj] = ACTIONS(285),
    [sym__apos] = ACTIONS(285),
    [sym__quot] = ACTIONS(285),
    [sym__lsquo] = ACTIONS(285),
    [sym__rsquo] = ACTIONS(285),
    [sym__ldquo] = ACTIONS(285),
    [sym__rdquo] = ACTIONS(285),
    [sym__deg] = ACTIONS(285),
    [sym__plus] = ACTIONS(285),
    [sym__brvbar] = ACTIONS(285),
    [sym__vbar] = ACTIONS(285),
    [sym__amp] = ACTIONS(285),
    [sym__lt] = ACTIONS(285),
    [sym__gt] = ACTIONS(285),
    [sym__startsb] = ACTIONS(285),
    [sym__endsb] = ACTIONS(285),
    [sym__caret] = ACTIONS(285),
    [sym__asterisk] = ACTIONS(285),
    [sym__tilde] = ACTIONS(285),
    [sym__backslash] = ACTIONS(285),
    [sym__backtick] = ACTIONS(285),
    [sym__two_colons] = ACTIONS(285),
    [sym__two_semicolons] = ACTIONS(285),
    [sym__cpp] = ACTIONS(285),
    [sym__pp] = ACTIONS(285),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_title] = ACTIONS(289),
    [anon_sym_NOTE_COLON] = ACTIONS(289),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(289),
    [anon_sym_TIP_COLON] = ACTIONS(289),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(289),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(289),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(289),
    [anon_sym_CAUTION_COLON] = ACTIONS(289),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(289),
    [anon_sym_WARNING_COLON] = ACTIONS(289),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(289),
    [aux_sym__list_item_token1] = ACTIONS(289),
    [aux_sym_code_token1] = ACTIONS(289),
    [aux_sym_code_language_token1] = ACTIONS(291),
    [anon_sym_SLASH_SLASH] = ACTIONS(289),
    [anon_sym_image_COLON_COLON] = ACTIONS(289),
    [aux_sym_url_token1] = ACTIONS(291),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(289),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(289),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(289),
    [anon_sym_xref_COLON] = ACTIONS(291),
    [anon_sym_audio_COLON_COLON] = ACTIONS(289),
    [anon_sym_video_COLON_COLON] = ACTIONS(289),
    [sym_emphasis] = ACTIONS(291),
    [sym_strong] = ACTIONS(291),
    [sym_monospace] = ACTIONS(291),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(289),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(289),
    [sym__blank] = ACTIONS(289),
    [sym__empty] = ACTIONS(289),
    [sym__sp] = ACTIONS(289),
    [sym__nbsp] = ACTIONS(289),
    [sym__zwsp] = ACTIONS(289),
    [sym__wj] = ACTIONS(289),
    [sym__apos] = ACTIONS(289),
    [sym__quot] = ACTIONS(289),
    [sym__lsquo] = ACTIONS(289),
    [sym__rsquo] = ACTIONS(289),
    [sym__ldquo] = ACTIONS(289),
    [sym__rdquo] = ACTIONS(289),
    [sym__deg] = ACTIONS(289),
    [sym__plus] = ACTIONS(289),
    [sym__brvbar] = ACTIONS(289),
    [sym__vbar] = ACTIONS(289),
    [sym__amp] = ACTIONS(289),
    [sym__lt] = ACTIONS(289),
    [sym__gt] = ACTIONS(289),
    [sym__startsb] = ACTIONS(289),
    [sym__endsb] = ACTIONS(289),
    [sym__caret] = ACTIONS(289),
    [sym__asterisk] = ACTIONS(289),
    [sym__tilde] = ACTIONS(289),
    [sym__backslash] = ACTIONS(289),
    [sym__backtick] = ACTIONS(289),
    [sym__two_colons] = ACTIONS(289),
    [sym__two_semicolons] = ACTIONS(289),
    [sym__cpp] = ACTIONS(289),
    [sym__pp] = ACTIONS(289),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_title] = ACTIONS(293),
    [anon_sym_NOTE_COLON] = ACTIONS(293),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(293),
    [anon_sym_TIP_COLON] = ACTIONS(293),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(293),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(293),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(293),
    [anon_sym_CAUTION_COLON] = ACTIONS(293),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(293),
    [anon_sym_WARNING_COLON] = ACTIONS(293),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(293),
    [aux_sym__list_item_token1] = ACTIONS(293),
    [aux_sym_code_token1] = ACTIONS(293),
    [aux_sym_code_language_token1] = ACTIONS(295),
    [anon_sym_SLASH_SLASH] = ACTIONS(293),
    [anon_sym_image_COLON_COLON] = ACTIONS(293),
    [aux_sym_url_token1] = ACTIONS(295),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(293),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(293),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(293),
    [anon_sym_xref_COLON] = ACTIONS(295),
    [anon_sym_audio_COLON_COLON] = ACTIONS(293),
    [anon_sym_video_COLON_COLON] = ACTIONS(293),
    [sym_emphasis] = ACTIONS(295),
    [sym_strong] = ACTIONS(295),
    [sym_monospace] = ACTIONS(295),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(293),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(293),
    [sym__blank] = ACTIONS(293),
    [sym__empty] = ACTIONS(293),
    [sym__sp] = ACTIONS(293),
    [sym__nbsp] = ACTIONS(293),
    [sym__zwsp] = ACTIONS(293),
    [sym__wj] = ACTIONS(293),
    [sym__apos] = ACTIONS(293),
    [sym__quot] = ACTIONS(293),
    [sym__lsquo] = ACTIONS(293),
    [sym__rsquo] = ACTIONS(293),
    [sym__ldquo] = ACTIONS(293),
    [sym__rdquo] = ACTIONS(293),
    [sym__deg] = ACTIONS(293),
    [sym__plus] = ACTIONS(293),
    [sym__brvbar] = ACTIONS(293),
    [sym__vbar] = ACTIONS(293),
    [sym__amp] = ACTIONS(293),
    [sym__lt] = ACTIONS(293),
    [sym__gt] = ACTIONS(293),
    [sym__startsb] = ACTIONS(293),
    [sym__endsb] = ACTIONS(293),
    [sym__caret] = ACTIONS(293),
    [sym__asterisk] = ACTIONS(293),
    [sym__tilde] = ACTIONS(293),
    [sym__backslash] = ACTIONS(293),
    [sym__backtick] = ACTIONS(293),
    [sym__two_colons] = ACTIONS(293),
    [sym__two_semicolons] = ACTIONS(293),
    [sym__cpp] = ACTIONS(293),
    [sym__pp] = ACTIONS(293),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_title] = ACTIONS(297),
    [anon_sym_NOTE_COLON] = ACTIONS(297),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(297),
    [anon_sym_TIP_COLON] = ACTIONS(297),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(297),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(297),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(297),
    [anon_sym_CAUTION_COLON] = ACTIONS(297),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(297),
    [anon_sym_WARNING_COLON] = ACTIONS(297),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(297),
    [aux_sym__list_item_token1] = ACTIONS(297),
    [aux_sym_code_token1] = ACTIONS(297),
    [aux_sym_code_language_token1] = ACTIONS(299),
    [anon_sym_SLASH_SLASH] = ACTIONS(297),
    [anon_sym_image_COLON_COLON] = ACTIONS(297),
    [aux_sym_url_token1] = ACTIONS(299),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(297),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(297),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(297),
    [anon_sym_LT_LT] = ACTIONS(297),
    [anon_sym_xref_COLON] = ACTIONS(299),
    [anon_sym_audio_COLON_COLON] = ACTIONS(297),
    [anon_sym_video_COLON_COLON] = ACTIONS(297),
    [sym_emphasis] = ACTIONS(299),
    [sym_strong] = ACTIONS(299),
    [sym_monospace] = ACTIONS(299),
    [sym_superscript] = ACTIONS(299),
    [sym_subscript] = ACTIONS(297),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(297),
    [sym__blank] = ACTIONS(297),
    [sym__empty] = ACTIONS(297),
    [sym__sp] = ACTIONS(297),
    [sym__nbsp] = ACTIONS(297),
    [sym__zwsp] = ACTIONS(297),
    [sym__wj] = ACTIONS(297),
    [sym__apos] = ACTIONS(297),
    [sym__quot] = ACTIONS(297),
    [sym__lsquo] = ACTIONS(297),
    [sym__rsquo] = ACTIONS(297),
    [sym__ldquo] = ACTIONS(297),
    [sym__rdquo] = ACTIONS(297),
    [sym__deg] = ACTIONS(297),
    [sym__plus] = ACTIONS(297),
    [sym__brvbar] = ACTIONS(297),
    [sym__vbar] = ACTIONS(297),
    [sym__amp] = ACTIONS(297),
    [sym__lt] = ACTIONS(297),
    [sym__gt] = ACTIONS(297),
    [sym__startsb] = ACTIONS(297),
    [sym__endsb] = ACTIONS(297),
    [sym__caret] = ACTIONS(297),
    [sym__asterisk] = ACTIONS(297),
    [sym__tilde] = ACTIONS(297),
    [sym__backslash] = ACTIONS(297),
    [sym__backtick] = ACTIONS(297),
    [sym__two_colons] = ACTIONS(297),
    [sym__two_semicolons] = ACTIONS(297),
    [sym__cpp] = ACTIONS(297),
    [sym__pp] = ACTIONS(297),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_title] = ACTIONS(301),
    [anon_sym_NOTE_COLON] = ACTIONS(301),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(301),
    [anon_sym_TIP_COLON] = ACTIONS(301),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(301),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(301),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(301),
    [anon_sym_CAUTION_COLON] = ACTIONS(301),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(301),
    [anon_sym_WARNING_COLON] = ACTIONS(301),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(301),
    [aux_sym__list_item_token1] = ACTIONS(301),
    [aux_sym_code_token1] = ACTIONS(301),
    [aux_sym_code_language_token1] = ACTIONS(303),
    [anon_sym_SLASH_SLASH] = ACTIONS(301),
    [anon_sym_image_COLON_COLON] = ACTIONS(301),
    [aux_sym_url_token1] = ACTIONS(303),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(301),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(301),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(301),
    [anon_sym_xref_COLON] = ACTIONS(303),
    [anon_sym_audio_COLON_COLON] = ACTIONS(301),
    [anon_sym_video_COLON_COLON] = ACTIONS(301),
    [sym_emphasis] = ACTIONS(303),
    [sym_strong] = ACTIONS(303),
    [sym_monospace] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(301),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(301),
    [sym__blank] = ACTIONS(301),
    [sym__empty] = ACTIONS(301),
    [sym__sp] = ACTIONS(301),
    [sym__nbsp] = ACTIONS(301),
    [sym__zwsp] = ACTIONS(301),
    [sym__wj] = ACTIONS(301),
    [sym__apos] = ACTIONS(301),
    [sym__quot] = ACTIONS(301),
    [sym__lsquo] = ACTIONS(301),
    [sym__rsquo] = ACTIONS(301),
    [sym__ldquo] = ACTIONS(301),
    [sym__rdquo] = ACTIONS(301),
    [sym__deg] = ACTIONS(301),
    [sym__plus] = ACTIONS(301),
    [sym__brvbar] = ACTIONS(301),
    [sym__vbar] = ACTIONS(301),
    [sym__amp] = ACTIONS(301),
    [sym__lt] = ACTIONS(301),
    [sym__gt] = ACTIONS(301),
    [sym__startsb] = ACTIONS(301),
    [sym__endsb] = ACTIONS(301),
    [sym__caret] = ACTIONS(301),
    [sym__asterisk] = ACTIONS(301),
    [sym__tilde] = ACTIONS(301),
    [sym__backslash] = ACTIONS(301),
    [sym__backtick] = ACTIONS(301),
    [sym__two_colons] = ACTIONS(301),
    [sym__two_semicolons] = ACTIONS(301),
    [sym__cpp] = ACTIONS(301),
    [sym__pp] = ACTIONS(301),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_title] = ACTIONS(305),
    [anon_sym_NOTE_COLON] = ACTIONS(305),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(305),
    [anon_sym_TIP_COLON] = ACTIONS(305),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(305),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(305),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(305),
    [anon_sym_CAUTION_COLON] = ACTIONS(305),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(305),
    [anon_sym_WARNING_COLON] = ACTIONS(305),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(305),
    [aux_sym__list_item_token1] = ACTIONS(305),
    [aux_sym_code_token1] = ACTIONS(305),
    [aux_sym_code_language_token1] = ACTIONS(307),
    [anon_sym_SLASH_SLASH] = ACTIONS(305),
    [anon_sym_image_COLON_COLON] = ACTIONS(305),
    [aux_sym_url_token1] = ACTIONS(307),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(305),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(305),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(305),
    [anon_sym_xref_COLON] = ACTIONS(307),
    [anon_sym_audio_COLON_COLON] = ACTIONS(305),
    [anon_sym_video_COLON_COLON] = ACTIONS(305),
    [sym_emphasis] = ACTIONS(307),
    [sym_strong] = ACTIONS(307),
    [sym_monospace] = ACTIONS(307),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(305),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(305),
    [sym__blank] = ACTIONS(305),
    [sym__empty] = ACTIONS(305),
    [sym__sp] = ACTIONS(305),
    [sym__nbsp] = ACTIONS(305),
    [sym__zwsp] = ACTIONS(305),
    [sym__wj] = ACTIONS(305),
    [sym__apos] = ACTIONS(305),
    [sym__quot] = ACTIONS(305),
    [sym__lsquo] = ACTIONS(305),
    [sym__rsquo] = ACTIONS(305),
    [sym__ldquo] = ACTIONS(305),
    [sym__rdquo] = ACTIONS(305),
    [sym__deg] = ACTIONS(305),
    [sym__plus] = ACTIONS(305),
    [sym__brvbar] = ACTIONS(305),
    [sym__vbar] = ACTIONS(305),
    [sym__amp] = ACTIONS(305),
    [sym__lt] = ACTIONS(305),
    [sym__gt] = ACTIONS(305),
    [sym__startsb] = ACTIONS(305),
    [sym__endsb] = ACTIONS(305),
    [sym__caret] = ACTIONS(305),
    [sym__asterisk] = ACTIONS(305),
    [sym__tilde] = ACTIONS(305),
    [sym__backslash] = ACTIONS(305),
    [sym__backtick] = ACTIONS(305),
    [sym__two_colons] = ACTIONS(305),
    [sym__two_semicolons] = ACTIONS(305),
    [sym__cpp] = ACTIONS(305),
    [sym__pp] = ACTIONS(305),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_title] = ACTIONS(309),
    [anon_sym_NOTE_COLON] = ACTIONS(309),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(309),
    [anon_sym_TIP_COLON] = ACTIONS(309),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(309),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(309),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(309),
    [anon_sym_CAUTION_COLON] = ACTIONS(309),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(309),
    [anon_sym_WARNING_COLON] = ACTIONS(309),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(309),
    [aux_sym__list_item_token1] = ACTIONS(309),
    [aux_sym_code_token1] = ACTIONS(309),
    [aux_sym_code_language_token1] = ACTIONS(311),
    [anon_sym_SLASH_SLASH] = ACTIONS(309),
    [anon_sym_image_COLON_COLON] = ACTIONS(309),
    [aux_sym_url_token1] = ACTIONS(311),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(309),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(309),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(309),
    [anon_sym_LT_LT] = ACTIONS(309),
    [anon_sym_xref_COLON] = ACTIONS(311),
    [anon_sym_audio_COLON_COLON] = ACTIONS(309),
    [anon_sym_video_COLON_COLON] = ACTIONS(309),
    [sym_emphasis] = ACTIONS(311),
    [sym_strong] = ACTIONS(311),
    [sym_monospace] = ACTIONS(311),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(309),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(309),
    [sym__blank] = ACTIONS(309),
    [sym__empty] = ACTIONS(309),
    [sym__sp] = ACTIONS(309),
    [sym__nbsp] = ACTIONS(309),
    [sym__zwsp] = ACTIONS(309),
    [sym__wj] = ACTIONS(309),
    [sym__apos] = ACTIONS(309),
    [sym__quot] = ACTIONS(309),
    [sym__lsquo] = ACTIONS(309),
    [sym__rsquo] = ACTIONS(309),
    [sym__ldquo] = ACTIONS(309),
    [sym__rdquo] = ACTIONS(309),
    [sym__deg] = ACTIONS(309),
    [sym__plus] = ACTIONS(309),
    [sym__brvbar] = ACTIONS(309),
    [sym__vbar] = ACTIONS(309),
    [sym__amp] = ACTIONS(309),
    [sym__lt] = ACTIONS(309),
    [sym__gt] = ACTIONS(309),
    [sym__startsb] = ACTIONS(309),
    [sym__endsb] = ACTIONS(309),
    [sym__caret] = ACTIONS(309),
    [sym__asterisk] = ACTIONS(309),
    [sym__tilde] = ACTIONS(309),
    [sym__backslash] = ACTIONS(309),
    [sym__backtick] = ACTIONS(309),
    [sym__two_colons] = ACTIONS(309),
    [sym__two_semicolons] = ACTIONS(309),
    [sym__cpp] = ACTIONS(309),
    [sym__pp] = ACTIONS(309),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym_title] = ACTIONS(313),
    [anon_sym_NOTE_COLON] = ACTIONS(313),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(313),
    [anon_sym_TIP_COLON] = ACTIONS(313),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(313),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(313),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(313),
    [anon_sym_CAUTION_COLON] = ACTIONS(313),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(313),
    [anon_sym_WARNING_COLON] = ACTIONS(313),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(313),
    [aux_sym__list_item_token1] = ACTIONS(313),
    [aux_sym_code_token1] = ACTIONS(313),
    [aux_sym_code_language_token1] = ACTIONS(315),
    [anon_sym_SLASH_SLASH] = ACTIONS(313),
    [anon_sym_image_COLON_COLON] = ACTIONS(313),
    [aux_sym_url_token1] = ACTIONS(315),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(313),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(313),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_xref_COLON] = ACTIONS(315),
    [anon_sym_audio_COLON_COLON] = ACTIONS(313),
    [anon_sym_video_COLON_COLON] = ACTIONS(313),
    [sym_emphasis] = ACTIONS(315),
    [sym_strong] = ACTIONS(315),
    [sym_monospace] = ACTIONS(315),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(313),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(313),
    [sym__blank] = ACTIONS(313),
    [sym__empty] = ACTIONS(313),
    [sym__sp] = ACTIONS(313),
    [sym__nbsp] = ACTIONS(313),
    [sym__zwsp] = ACTIONS(313),
    [sym__wj] = ACTIONS(313),
    [sym__apos] = ACTIONS(313),
    [sym__quot] = ACTIONS(313),
    [sym__lsquo] = ACTIONS(313),
    [sym__rsquo] = ACTIONS(313),
    [sym__ldquo] = ACTIONS(313),
    [sym__rdquo] = ACTIONS(313),
    [sym__deg] = ACTIONS(313),
    [sym__plus] = ACTIONS(313),
    [sym__brvbar] = ACTIONS(313),
    [sym__vbar] = ACTIONS(313),
    [sym__amp] = ACTIONS(313),
    [sym__lt] = ACTIONS(313),
    [sym__gt] = ACTIONS(313),
    [sym__startsb] = ACTIONS(313),
    [sym__endsb] = ACTIONS(313),
    [sym__caret] = ACTIONS(313),
    [sym__asterisk] = ACTIONS(313),
    [sym__tilde] = ACTIONS(313),
    [sym__backslash] = ACTIONS(313),
    [sym__backtick] = ACTIONS(313),
    [sym__two_colons] = ACTIONS(313),
    [sym__two_semicolons] = ACTIONS(313),
    [sym__cpp] = ACTIONS(313),
    [sym__pp] = ACTIONS(313),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_title] = ACTIONS(317),
    [anon_sym_NOTE_COLON] = ACTIONS(317),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(317),
    [anon_sym_TIP_COLON] = ACTIONS(317),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(317),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(317),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(317),
    [anon_sym_CAUTION_COLON] = ACTIONS(317),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(317),
    [anon_sym_WARNING_COLON] = ACTIONS(317),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(317),
    [aux_sym__list_item_token1] = ACTIONS(317),
    [aux_sym_code_token1] = ACTIONS(317),
    [aux_sym_code_language_token1] = ACTIONS(319),
    [anon_sym_SLASH_SLASH] = ACTIONS(317),
    [anon_sym_image_COLON_COLON] = ACTIONS(317),
    [aux_sym_url_token1] = ACTIONS(319),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(317),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(317),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(317),
    [anon_sym_LT_LT] = ACTIONS(317),
    [anon_sym_xref_COLON] = ACTIONS(319),
    [anon_sym_audio_COLON_COLON] = ACTIONS(317),
    [anon_sym_video_COLON_COLON] = ACTIONS(317),
    [sym_emphasis] = ACTIONS(319),
    [sym_strong] = ACTIONS(319),
    [sym_monospace] = ACTIONS(319),
    [sym_superscript] = ACTIONS(319),
    [sym_subscript] = ACTIONS(317),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(317),
    [sym__blank] = ACTIONS(317),
    [sym__empty] = ACTIONS(317),
    [sym__sp] = ACTIONS(317),
    [sym__nbsp] = ACTIONS(317),
    [sym__zwsp] = ACTIONS(317),
    [sym__wj] = ACTIONS(317),
    [sym__apos] = ACTIONS(317),
    [sym__quot] = ACTIONS(317),
    [sym__lsquo] = ACTIONS(317),
    [sym__rsquo] = ACTIONS(317),
    [sym__ldquo] = ACTIONS(317),
    [sym__rdquo] = ACTIONS(317),
    [sym__deg] = ACTIONS(317),
    [sym__plus] = ACTIONS(317),
    [sym__brvbar] = ACTIONS(317),
    [sym__vbar] = ACTIONS(317),
    [sym__amp] = ACTIONS(317),
    [sym__lt] = ACTIONS(317),
    [sym__gt] = ACTIONS(317),
    [sym__startsb] = ACTIONS(317),
    [sym__endsb] = ACTIONS(317),
    [sym__caret] = ACTIONS(317),
    [sym__asterisk] = ACTIONS(317),
    [sym__tilde] = ACTIONS(317),
    [sym__backslash] = ACTIONS(317),
    [sym__backtick] = ACTIONS(317),
    [sym__two_colons] = ACTIONS(317),
    [sym__two_semicolons] = ACTIONS(317),
    [sym__cpp] = ACTIONS(317),
    [sym__pp] = ACTIONS(317),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [sym_title] = ACTIONS(321),
    [anon_sym_NOTE_COLON] = ACTIONS(321),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(321),
    [anon_sym_TIP_COLON] = ACTIONS(321),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(321),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(321),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(321),
    [anon_sym_CAUTION_COLON] = ACTIONS(321),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(321),
    [anon_sym_WARNING_COLON] = ACTIONS(321),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(321),
    [aux_sym__list_item_token1] = ACTIONS(321),
    [aux_sym_code_token1] = ACTIONS(321),
    [aux_sym_code_language_token1] = ACTIONS(323),
    [anon_sym_SLASH_SLASH] = ACTIONS(321),
    [anon_sym_image_COLON_COLON] = ACTIONS(321),
    [aux_sym_url_token1] = ACTIONS(323),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(321),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(321),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_xref_COLON] = ACTIONS(323),
    [anon_sym_audio_COLON_COLON] = ACTIONS(321),
    [anon_sym_video_COLON_COLON] = ACTIONS(321),
    [sym_emphasis] = ACTIONS(323),
    [sym_strong] = ACTIONS(323),
    [sym_monospace] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(321),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(321),
    [sym__blank] = ACTIONS(321),
    [sym__empty] = ACTIONS(321),
    [sym__sp] = ACTIONS(321),
    [sym__nbsp] = ACTIONS(321),
    [sym__zwsp] = ACTIONS(321),
    [sym__wj] = ACTIONS(321),
    [sym__apos] = ACTIONS(321),
    [sym__quot] = ACTIONS(321),
    [sym__lsquo] = ACTIONS(321),
    [sym__rsquo] = ACTIONS(321),
    [sym__ldquo] = ACTIONS(321),
    [sym__rdquo] = ACTIONS(321),
    [sym__deg] = ACTIONS(321),
    [sym__plus] = ACTIONS(321),
    [sym__brvbar] = ACTIONS(321),
    [sym__vbar] = ACTIONS(321),
    [sym__amp] = ACTIONS(321),
    [sym__lt] = ACTIONS(321),
    [sym__gt] = ACTIONS(321),
    [sym__startsb] = ACTIONS(321),
    [sym__endsb] = ACTIONS(321),
    [sym__caret] = ACTIONS(321),
    [sym__asterisk] = ACTIONS(321),
    [sym__tilde] = ACTIONS(321),
    [sym__backslash] = ACTIONS(321),
    [sym__backtick] = ACTIONS(321),
    [sym__two_colons] = ACTIONS(321),
    [sym__two_semicolons] = ACTIONS(321),
    [sym__cpp] = ACTIONS(321),
    [sym__pp] = ACTIONS(321),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [sym_title] = ACTIONS(325),
    [anon_sym_NOTE_COLON] = ACTIONS(325),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(325),
    [anon_sym_TIP_COLON] = ACTIONS(325),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(325),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(325),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(325),
    [anon_sym_CAUTION_COLON] = ACTIONS(325),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(325),
    [anon_sym_WARNING_COLON] = ACTIONS(325),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(325),
    [aux_sym__list_item_token1] = ACTIONS(325),
    [aux_sym_code_token1] = ACTIONS(325),
    [aux_sym_code_language_token1] = ACTIONS(327),
    [anon_sym_SLASH_SLASH] = ACTIONS(325),
    [anon_sym_image_COLON_COLON] = ACTIONS(325),
    [aux_sym_url_token1] = ACTIONS(327),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(325),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(325),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_xref_COLON] = ACTIONS(327),
    [anon_sym_audio_COLON_COLON] = ACTIONS(325),
    [anon_sym_video_COLON_COLON] = ACTIONS(325),
    [sym_emphasis] = ACTIONS(327),
    [sym_strong] = ACTIONS(327),
    [sym_monospace] = ACTIONS(327),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(325),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(325),
    [sym__blank] = ACTIONS(325),
    [sym__empty] = ACTIONS(325),
    [sym__sp] = ACTIONS(325),
    [sym__nbsp] = ACTIONS(325),
    [sym__zwsp] = ACTIONS(325),
    [sym__wj] = ACTIONS(325),
    [sym__apos] = ACTIONS(325),
    [sym__quot] = ACTIONS(325),
    [sym__lsquo] = ACTIONS(325),
    [sym__rsquo] = ACTIONS(325),
    [sym__ldquo] = ACTIONS(325),
    [sym__rdquo] = ACTIONS(325),
    [sym__deg] = ACTIONS(325),
    [sym__plus] = ACTIONS(325),
    [sym__brvbar] = ACTIONS(325),
    [sym__vbar] = ACTIONS(325),
    [sym__amp] = ACTIONS(325),
    [sym__lt] = ACTIONS(325),
    [sym__gt] = ACTIONS(325),
    [sym__startsb] = ACTIONS(325),
    [sym__endsb] = ACTIONS(325),
    [sym__caret] = ACTIONS(325),
    [sym__asterisk] = ACTIONS(325),
    [sym__tilde] = ACTIONS(325),
    [sym__backslash] = ACTIONS(325),
    [sym__backtick] = ACTIONS(325),
    [sym__two_colons] = ACTIONS(325),
    [sym__two_semicolons] = ACTIONS(325),
    [sym__cpp] = ACTIONS(325),
    [sym__pp] = ACTIONS(325),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [sym_title] = ACTIONS(329),
    [anon_sym_NOTE_COLON] = ACTIONS(329),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(329),
    [anon_sym_TIP_COLON] = ACTIONS(329),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(329),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(329),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(329),
    [anon_sym_CAUTION_COLON] = ACTIONS(329),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(329),
    [anon_sym_WARNING_COLON] = ACTIONS(329),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(329),
    [aux_sym__list_item_token1] = ACTIONS(329),
    [aux_sym_code_token1] = ACTIONS(329),
    [aux_sym_code_language_token1] = ACTIONS(331),
    [anon_sym_SLASH_SLASH] = ACTIONS(329),
    [anon_sym_image_COLON_COLON] = ACTIONS(329),
    [aux_sym_url_token1] = ACTIONS(331),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(329),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(329),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(329),
    [anon_sym_LT_LT] = ACTIONS(329),
    [anon_sym_xref_COLON] = ACTIONS(331),
    [anon_sym_audio_COLON_COLON] = ACTIONS(329),
    [anon_sym_video_COLON_COLON] = ACTIONS(329),
    [sym_emphasis] = ACTIONS(331),
    [sym_strong] = ACTIONS(331),
    [sym_monospace] = ACTIONS(331),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(329),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(329),
    [sym__blank] = ACTIONS(329),
    [sym__empty] = ACTIONS(329),
    [sym__sp] = ACTIONS(329),
    [sym__nbsp] = ACTIONS(329),
    [sym__zwsp] = ACTIONS(329),
    [sym__wj] = ACTIONS(329),
    [sym__apos] = ACTIONS(329),
    [sym__quot] = ACTIONS(329),
    [sym__lsquo] = ACTIONS(329),
    [sym__rsquo] = ACTIONS(329),
    [sym__ldquo] = ACTIONS(329),
    [sym__rdquo] = ACTIONS(329),
    [sym__deg] = ACTIONS(329),
    [sym__plus] = ACTIONS(329),
    [sym__brvbar] = ACTIONS(329),
    [sym__vbar] = ACTIONS(329),
    [sym__amp] = ACTIONS(329),
    [sym__lt] = ACTIONS(329),
    [sym__gt] = ACTIONS(329),
    [sym__startsb] = ACTIONS(329),
    [sym__endsb] = ACTIONS(329),
    [sym__caret] = ACTIONS(329),
    [sym__asterisk] = ACTIONS(329),
    [sym__tilde] = ACTIONS(329),
    [sym__backslash] = ACTIONS(329),
    [sym__backtick] = ACTIONS(329),
    [sym__two_colons] = ACTIONS(329),
    [sym__two_semicolons] = ACTIONS(329),
    [sym__cpp] = ACTIONS(329),
    [sym__pp] = ACTIONS(329),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [sym_title] = ACTIONS(333),
    [anon_sym_NOTE_COLON] = ACTIONS(333),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(333),
    [anon_sym_TIP_COLON] = ACTIONS(333),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(333),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(333),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(333),
    [anon_sym_CAUTION_COLON] = ACTIONS(333),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(333),
    [anon_sym_WARNING_COLON] = ACTIONS(333),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(333),
    [aux_sym__list_item_token1] = ACTIONS(333),
    [aux_sym_code_token1] = ACTIONS(333),
    [aux_sym_code_language_token1] = ACTIONS(335),
    [anon_sym_SLASH_SLASH] = ACTIONS(333),
    [anon_sym_image_COLON_COLON] = ACTIONS(333),
    [aux_sym_url_token1] = ACTIONS(335),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(333),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(333),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(333),
    [anon_sym_LT_LT] = ACTIONS(333),
    [anon_sym_xref_COLON] = ACTIONS(335),
    [anon_sym_audio_COLON_COLON] = ACTIONS(333),
    [anon_sym_video_COLON_COLON] = ACTIONS(333),
    [sym_emphasis] = ACTIONS(335),
    [sym_strong] = ACTIONS(335),
    [sym_monospace] = ACTIONS(335),
    [sym_superscript] = ACTIONS(335),
    [sym_subscript] = ACTIONS(333),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(333),
    [sym__blank] = ACTIONS(333),
    [sym__empty] = ACTIONS(333),
    [sym__sp] = ACTIONS(333),
    [sym__nbsp] = ACTIONS(333),
    [sym__zwsp] = ACTIONS(333),
    [sym__wj] = ACTIONS(333),
    [sym__apos] = ACTIONS(333),
    [sym__quot] = ACTIONS(333),
    [sym__lsquo] = ACTIONS(333),
    [sym__rsquo] = ACTIONS(333),
    [sym__ldquo] = ACTIONS(333),
    [sym__rdquo] = ACTIONS(333),
    [sym__deg] = ACTIONS(333),
    [sym__plus] = ACTIONS(333),
    [sym__brvbar] = ACTIONS(333),
    [sym__vbar] = ACTIONS(333),
    [sym__amp] = ACTIONS(333),
    [sym__lt] = ACTIONS(333),
    [sym__gt] = ACTIONS(333),
    [sym__startsb] = ACTIONS(333),
    [sym__endsb] = ACTIONS(333),
    [sym__caret] = ACTIONS(333),
    [sym__asterisk] = ACTIONS(333),
    [sym__tilde] = ACTIONS(333),
    [sym__backslash] = ACTIONS(333),
    [sym__backtick] = ACTIONS(333),
    [sym__two_colons] = ACTIONS(333),
    [sym__two_semicolons] = ACTIONS(333),
    [sym__cpp] = ACTIONS(333),
    [sym__pp] = ACTIONS(333),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [sym_title] = ACTIONS(337),
    [anon_sym_NOTE_COLON] = ACTIONS(337),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(337),
    [anon_sym_TIP_COLON] = ACTIONS(337),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(337),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(337),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(337),
    [anon_sym_CAUTION_COLON] = ACTIONS(337),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(337),
    [anon_sym_WARNING_COLON] = ACTIONS(337),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(337),
    [aux_sym__list_item_token1] = ACTIONS(337),
    [aux_sym_code_token1] = ACTIONS(337),
    [aux_sym_code_language_token1] = ACTIONS(339),
    [anon_sym_SLASH_SLASH] = ACTIONS(337),
    [anon_sym_image_COLON_COLON] = ACTIONS(337),
    [aux_sym_url_token1] = ACTIONS(339),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(337),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(337),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(337),
    [anon_sym_LT_LT] = ACTIONS(337),
    [anon_sym_xref_COLON] = ACTIONS(339),
    [anon_sym_audio_COLON_COLON] = ACTIONS(337),
    [anon_sym_video_COLON_COLON] = ACTIONS(337),
    [sym_emphasis] = ACTIONS(339),
    [sym_strong] = ACTIONS(339),
    [sym_monospace] = ACTIONS(339),
    [sym_superscript] = ACTIONS(339),
    [sym_subscript] = ACTIONS(337),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(337),
    [sym__blank] = ACTIONS(337),
    [sym__empty] = ACTIONS(337),
    [sym__sp] = ACTIONS(337),
    [sym__nbsp] = ACTIONS(337),
    [sym__zwsp] = ACTIONS(337),
    [sym__wj] = ACTIONS(337),
    [sym__apos] = ACTIONS(337),
    [sym__quot] = ACTIONS(337),
    [sym__lsquo] = ACTIONS(337),
    [sym__rsquo] = ACTIONS(337),
    [sym__ldquo] = ACTIONS(337),
    [sym__rdquo] = ACTIONS(337),
    [sym__deg] = ACTIONS(337),
    [sym__plus] = ACTIONS(337),
    [sym__brvbar] = ACTIONS(337),
    [sym__vbar] = ACTIONS(337),
    [sym__amp] = ACTIONS(337),
    [sym__lt] = ACTIONS(337),
    [sym__gt] = ACTIONS(337),
    [sym__startsb] = ACTIONS(337),
    [sym__endsb] = ACTIONS(337),
    [sym__caret] = ACTIONS(337),
    [sym__asterisk] = ACTIONS(337),
    [sym__tilde] = ACTIONS(337),
    [sym__backslash] = ACTIONS(337),
    [sym__backtick] = ACTIONS(337),
    [sym__two_colons] = ACTIONS(337),
    [sym__two_semicolons] = ACTIONS(337),
    [sym__cpp] = ACTIONS(337),
    [sym__pp] = ACTIONS(337),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(341), 1,
      anon_sym_LF,
    ACTIONS(345), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(52), 4,
      sym__inline_element,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(343), 6,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(347), 30,
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
    ACTIONS(349), 1,
      anon_sym_LF,
    ACTIONS(354), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(52), 4,
      sym__inline_element,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(351), 6,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(357), 30,
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
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(364), 1,
      anon_sym_COLON_COLON,
    ACTIONS(362), 37,
      aux_sym_code_language_token1,
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
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(368), 37,
      aux_sym_code_language_token1,
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
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(372), 37,
      aux_sym_code_language_token1,
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
  [238] = 4,
    ACTIONS(374), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(376), 1,
      aux_sym__note_block_token1,
    STATE(67), 1,
      aux_sym__note_block_repeat1,
    STATE(116), 1,
      sym_code_content,
  [251] = 3,
    ACTIONS(378), 1,
      aux_sym_comment_token1,
    ACTIONS(380), 1,
      aux_sym_table_token1,
    STATE(70), 1,
      aux_sym_table_repeat1,
  [261] = 3,
    ACTIONS(382), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(384), 1,
      aux_sym__note_block_token1,
    STATE(71), 1,
      aux_sym__note_block_repeat1,
  [271] = 3,
    ACTIONS(386), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(388), 1,
      aux_sym__note_block_token1,
    STATE(69), 1,
      aux_sym__note_block_repeat1,
  [281] = 3,
    ACTIONS(390), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(392), 1,
      aux_sym__note_block_token1,
    STATE(66), 1,
      aux_sym__note_block_repeat1,
  [291] = 3,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      aux_sym__list_item_token1,
    STATE(64), 1,
      aux_sym__list_item,
  [301] = 3,
    ACTIONS(392), 1,
      aux_sym__note_block_token1,
    ACTIONS(398), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(66), 1,
      aux_sym__note_block_repeat1,
  [311] = 3,
    ACTIONS(400), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(402), 1,
      aux_sym__note_block_token1,
    STATE(62), 1,
      aux_sym__note_block_repeat1,
  [321] = 3,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(406), 1,
      aux_sym__list_item_token1,
    STATE(64), 1,
      aux_sym__list_item,
  [331] = 3,
    ACTIONS(409), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(411), 1,
      aux_sym__note_block_token1,
    STATE(60), 1,
      aux_sym__note_block_repeat1,
  [341] = 3,
    ACTIONS(413), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(415), 1,
      aux_sym__note_block_token1,
    STATE(66), 1,
      aux_sym__note_block_repeat1,
  [351] = 3,
    ACTIONS(392), 1,
      aux_sym__note_block_token1,
    ACTIONS(418), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(66), 1,
      aux_sym__note_block_repeat1,
  [361] = 3,
    ACTIONS(420), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      aux_sym_table_token1,
    STATE(57), 1,
      aux_sym_table_repeat1,
  [371] = 3,
    ACTIONS(392), 1,
      aux_sym__note_block_token1,
    ACTIONS(424), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(66), 1,
      aux_sym__note_block_repeat1,
  [381] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      aux_sym_table_token1,
    STATE(70), 1,
      aux_sym_table_repeat1,
  [391] = 3,
    ACTIONS(392), 1,
      aux_sym__note_block_token1,
    ACTIONS(431), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(66), 1,
      aux_sym__note_block_repeat1,
  [401] = 3,
    ACTIONS(433), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(435), 1,
      aux_sym__note_block_token1,
    STATE(73), 1,
      aux_sym__note_block_repeat1,
  [411] = 3,
    ACTIONS(392), 1,
      aux_sym__note_block_token1,
    ACTIONS(437), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(66), 1,
      aux_sym__note_block_repeat1,
  [421] = 2,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
    ACTIONS(441), 1,
      aux_sym_audio_token1,
  [428] = 2,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_GT_GT,
  [435] = 2,
    ACTIONS(447), 1,
      aux_sym_code_language_token1,
    STATE(94), 1,
      sym_code_language,
  [442] = 2,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    ACTIONS(451), 1,
      aux_sym_footnote_token1,
  [449] = 2,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    ACTIONS(455), 1,
      aux_sym_audio_token1,
  [456] = 2,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 1,
      aux_sym_kbd_token1,
  [463] = 2,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(463), 1,
      aux_sym_image_token2,
  [470] = 2,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    ACTIONS(467), 1,
      aux_sym_audio_token1,
  [477] = 2,
    ACTIONS(469), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 1,
      aux_sym_image_token2,
  [484] = 2,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    ACTIONS(475), 1,
      aux_sym_audio_token1,
  [491] = 1,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
  [495] = 1,
    ACTIONS(479), 1,
      anon_sym_RBRACK_LF,
  [499] = 1,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
  [503] = 1,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
  [507] = 1,
    ACTIONS(485), 1,
      aux_sym_code_language_token1,
  [511] = 1,
    ACTIONS(487), 1,
      aux_sym_image_token2,
  [515] = 1,
    ACTIONS(489), 1,
      aux_sym_code_language_token1,
  [519] = 1,
    ACTIONS(491), 1,
      anon_sym_LBRACK,
  [523] = 1,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
  [527] = 1,
    ACTIONS(495), 1,
      aux_sym__note_line_token1,
  [531] = 1,
    ACTIONS(497), 1,
      anon_sym_RBRACK_LF,
  [535] = 1,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
  [539] = 1,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
  [543] = 1,
    ACTIONS(503), 1,
      anon_sym_RBRACK_LF,
  [547] = 1,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
  [551] = 1,
    ACTIONS(507), 1,
      aux_sym_code_language_token1,
  [555] = 1,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
  [559] = 1,
    ACTIONS(511), 1,
      aux_sym_image_token2,
  [563] = 1,
    ACTIONS(513), 1,
      aux_sym_code_language_token1,
  [567] = 1,
    ACTIONS(515), 1,
      aux_sym_code_language_token1,
  [571] = 1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [575] = 1,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
  [579] = 1,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
  [583] = 1,
    ACTIONS(523), 1,
      anon_sym_GT_GT,
  [587] = 1,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
  [591] = 1,
    ACTIONS(527), 1,
      aux_sym_image_token1,
  [595] = 1,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
  [599] = 1,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
  [603] = 1,
    ACTIONS(533), 1,
      aux_sym__note_line_token1,
  [607] = 1,
    ACTIONS(535), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [611] = 1,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
  [615] = 1,
    ACTIONS(539), 1,
      aux_sym__note_line_token1,
  [619] = 1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [623] = 1,
    ACTIONS(543), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [627] = 1,
    ACTIONS(545), 1,
      aux_sym__note_line_token1,
  [631] = 1,
    ACTIONS(547), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [635] = 1,
    ACTIONS(549), 1,
      anon_sym_LF,
  [639] = 1,
    ACTIONS(551), 1,
      aux_sym__note_line_token1,
  [643] = 1,
    ACTIONS(553), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [647] = 1,
    ACTIONS(555), 1,
      aux_sym__note_line_token1,
  [651] = 1,
    ACTIONS(557), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(51)] = 0,
  [SMALL_STATE(52)] = 53,
  [SMALL_STATE(53)] = 106,
  [SMALL_STATE(54)] = 152,
  [SMALL_STATE(55)] = 195,
  [SMALL_STATE(56)] = 238,
  [SMALL_STATE(57)] = 251,
  [SMALL_STATE(58)] = 261,
  [SMALL_STATE(59)] = 271,
  [SMALL_STATE(60)] = 281,
  [SMALL_STATE(61)] = 291,
  [SMALL_STATE(62)] = 301,
  [SMALL_STATE(63)] = 311,
  [SMALL_STATE(64)] = 321,
  [SMALL_STATE(65)] = 331,
  [SMALL_STATE(66)] = 341,
  [SMALL_STATE(67)] = 351,
  [SMALL_STATE(68)] = 361,
  [SMALL_STATE(69)] = 371,
  [SMALL_STATE(70)] = 381,
  [SMALL_STATE(71)] = 391,
  [SMALL_STATE(72)] = 401,
  [SMALL_STATE(73)] = 411,
  [SMALL_STATE(74)] = 421,
  [SMALL_STATE(75)] = 428,
  [SMALL_STATE(76)] = 435,
  [SMALL_STATE(77)] = 442,
  [SMALL_STATE(78)] = 449,
  [SMALL_STATE(79)] = 456,
  [SMALL_STATE(80)] = 463,
  [SMALL_STATE(81)] = 470,
  [SMALL_STATE(82)] = 477,
  [SMALL_STATE(83)] = 484,
  [SMALL_STATE(84)] = 491,
  [SMALL_STATE(85)] = 495,
  [SMALL_STATE(86)] = 499,
  [SMALL_STATE(87)] = 503,
  [SMALL_STATE(88)] = 507,
  [SMALL_STATE(89)] = 511,
  [SMALL_STATE(90)] = 515,
  [SMALL_STATE(91)] = 519,
  [SMALL_STATE(92)] = 523,
  [SMALL_STATE(93)] = 527,
  [SMALL_STATE(94)] = 531,
  [SMALL_STATE(95)] = 535,
  [SMALL_STATE(96)] = 539,
  [SMALL_STATE(97)] = 543,
  [SMALL_STATE(98)] = 547,
  [SMALL_STATE(99)] = 551,
  [SMALL_STATE(100)] = 555,
  [SMALL_STATE(101)] = 559,
  [SMALL_STATE(102)] = 563,
  [SMALL_STATE(103)] = 567,
  [SMALL_STATE(104)] = 571,
  [SMALL_STATE(105)] = 575,
  [SMALL_STATE(106)] = 579,
  [SMALL_STATE(107)] = 583,
  [SMALL_STATE(108)] = 587,
  [SMALL_STATE(109)] = 591,
  [SMALL_STATE(110)] = 595,
  [SMALL_STATE(111)] = 599,
  [SMALL_STATE(112)] = 603,
  [SMALL_STATE(113)] = 607,
  [SMALL_STATE(114)] = 611,
  [SMALL_STATE(115)] = 615,
  [SMALL_STATE(116)] = 619,
  [SMALL_STATE(117)] = 623,
  [SMALL_STATE(118)] = 627,
  [SMALL_STATE(119)] = 631,
  [SMALL_STATE(120)] = 635,
  [SMALL_STATE(121)] = 639,
  [SMALL_STATE(122)] = 643,
  [SMALL_STATE(123)] = 647,
  [SMALL_STATE(124)] = 651,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 6, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 6, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(52),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(99),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(55),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item, 2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item, 2), SHIFT_REPEAT(64),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(66),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(70),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [477] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
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
