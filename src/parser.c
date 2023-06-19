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
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 122
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
  sym__list_item = 15,
  aux_sym_code_token1 = 16,
  anon_sym_RBRACK_LF = 17,
  aux_sym_code_language_token1 = 18,
  anon_sym_SLASH_SLASH = 19,
  aux_sym_comment_token1 = 20,
  anon_sym_image_COLON_COLON = 21,
  aux_sym_image_token1 = 22,
  anon_sym_LBRACK = 23,
  aux_sym_image_token2 = 24,
  aux_sym_url_token1 = 25,
  anon_sym_RBRACK = 26,
  anon_sym_footnote_COLON_LBRACK = 27,
  aux_sym_footnote_token1 = 28,
  anon_sym_kbd_COLON_LBRACK = 29,
  aux_sym_kbd_token1 = 30,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 31,
  aux_sym_table_token1 = 32,
  anon_sym_LT_LT = 33,
  anon_sym_COMMA = 34,
  anon_sym_GT_GT = 35,
  anon_sym_xref_COLON = 36,
  anon_sym_LF = 37,
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
  sym_code = 97,
  sym_code_language = 98,
  sym_code_content = 99,
  sym_comment = 100,
  sym_image = 101,
  sym_url = 102,
  sym_footnote = 103,
  sym_kbd = 104,
  sym_table = 105,
  sym_xref = 106,
  sym__inline_xref = 107,
  sym__xref = 108,
  sym_description_list = 109,
  sym_audio = 110,
  sym_video = 111,
  sym_paragraph = 112,
  sym__inline_element = 113,
  sym_passthrough = 114,
  sym_replacement = 115,
  aux_sym_document_repeat1 = 116,
  aux_sym__note_block_repeat1 = 117,
  aux_sym_list_repeat1 = 118,
  aux_sym_code_repeat1 = 119,
  aux_sym_table_repeat1 = 120,
  aux_sym_paragraph_repeat1 = 121,
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
  [sym__list_item] = "_list_item",
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
  [anon_sym_LF] = "\n",
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
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
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
  [sym__list_item] = sym__list_item,
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
  [anon_sym_LF] = anon_sym_LF,
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
  [sym__list_item] = {
    .visible = false,
    .named = true,
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
  [anon_sym_LF] = {
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
      if (eof) ADVANCE(286);
      if (lookahead == '*') ADVANCE(280);
      if (lookahead == ',') ADVANCE(477);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(322);
      if (lookahead == 'I') ADVANCE(330);
      if (lookahead == 'N') ADVANCE(335);
      if (lookahead == 'T') ADVANCE(327);
      if (lookahead == 'W') ADVANCE(323);
      if (lookahead == '[') ADVANCE(461);
      if (lookahead == ']') ADVANCE(467);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'k') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(347);
      if (lookahead == 'v') ADVANCE(360);
      if (lookahead == 'x') ADVANCE(368);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(293);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(473);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(297);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == ':') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(292);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == ':') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(301);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(301);
      if (lookahead == ':') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(303);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == ':') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(299);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(299);
      if (lookahead == ':') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == ':') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == '*') ADVANCE(280);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '^') ADVANCE(281);
      if (lookahead == '_') ADVANCE(448);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(449);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(482);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(466);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(463);
      if (lookahead == '^') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(464);
      if (lookahead == '_') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(465);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '^') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '_') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(483);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(457);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(485);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '[') ADVANCE(470);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '[') ADVANCE(495);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '[') ADVANCE(468);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(483);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(457);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(485);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '^') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '_') ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '`') ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(92);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(86);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(79);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'G') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'P') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'P') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'R') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'R') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'U') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ']') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ']') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ']') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ']') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ']') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 100:
      if (lookahead == '<') ADVANCE(476);
      END_STATE();
    case 101:
      if (lookahead == '=') ADVANCE(475);
      END_STATE();
    case 102:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 105:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 106:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 107:
      if (lookahead == '>') ADVANCE(478);
      END_STATE();
    case 108:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 110:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(140);
      END_STATE();
    case 112:
      if (lookahead == 'G') ADVANCE(142);
      END_STATE();
    case 113:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 115:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 116:
      if (lookahead == 'M') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(141);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead == 'P') ADVANCE(139);
      END_STATE();
    case 125:
      if (lookahead == 'P') ADVANCE(122);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(118);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(111);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(115);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'U') ADVANCE(129);
      END_STATE();
    case 133:
      if (lookahead == '[') ADVANCE(470);
      END_STATE();
    case 134:
      if (lookahead == '[') ADVANCE(495);
      END_STATE();
    case 135:
      if (lookahead == '[') ADVANCE(468);
      END_STATE();
    case 136:
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == ']') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(4);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(6);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(10);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 144:
      if (lookahead == '^') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'g') ADVANCE(232);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == 'q') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(179);
      if (lookahead == 'z') ADVANCE(245);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(264);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(271);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(274);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'w') ADVANCE(197);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 179:
      if (lookahead == 'j') ADVANCE(251);
      END_STATE();
    case 180:
      if (lookahead == 'k') ADVANCE(222);
      END_STATE();
    case 181:
      if (lookahead == 'k') ADVANCE(261);
      END_STATE();
    case 182:
      if (lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 183:
      if (lookahead == 'k') ADVANCE(273);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(265);
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
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 212:
      if (lookahead == 'q') ADVANCE(239);
      END_STATE();
    case 213:
      if (lookahead == 'q') ADVANCE(241);
      END_STATE();
    case 214:
      if (lookahead == 'q') ADVANCE(242);
      END_STATE();
    case 215:
      if (lookahead == 'q') ADVANCE(243);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 244:
      if (lookahead == 'v') ADVANCE(159);
      END_STATE();
    case 245:
      if (lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 247:
      if (lookahead == '}') ADVANCE(514);
      END_STATE();
    case 248:
      if (lookahead == '}') ADVANCE(513);
      END_STATE();
    case 249:
      if (lookahead == '}') ADVANCE(525);
      END_STATE();
    case 250:
      if (lookahead == '}') ADVANCE(498);
      END_STATE();
    case 251:
      if (lookahead == '}') ADVANCE(501);
      END_STATE();
    case 252:
      if (lookahead == '}') ADVANCE(512);
      END_STATE();
    case 253:
      if (lookahead == '}') ADVANCE(524);
      END_STATE();
    case 254:
      if (lookahead == '}') ADVANCE(508);
      END_STATE();
    case 255:
      if (lookahead == '}') ADVANCE(502);
      END_STATE();
    case 256:
      if (lookahead == '}') ADVANCE(499);
      END_STATE();
    case 257:
      if (lookahead == '}') ADVANCE(509);
      END_STATE();
    case 258:
      if (lookahead == '}') ADVANCE(503);
      END_STATE();
    case 259:
      if (lookahead == '}') ADVANCE(511);
      END_STATE();
    case 260:
      if (lookahead == '}') ADVANCE(500);
      END_STATE();
    case 261:
      if (lookahead == '}') ADVANCE(496);
      END_STATE();
    case 262:
      if (lookahead == '}') ADVANCE(517);
      END_STATE();
    case 263:
      if (lookahead == '}') ADVANCE(497);
      END_STATE();
    case 264:
      if (lookahead == '}') ADVANCE(516);
      END_STATE();
    case 265:
      if (lookahead == '}') ADVANCE(506);
      END_STATE();
    case 266:
      if (lookahead == '}') ADVANCE(504);
      END_STATE();
    case 267:
      if (lookahead == '}') ADVANCE(507);
      END_STATE();
    case 268:
      if (lookahead == '}') ADVANCE(505);
      END_STATE();
    case 269:
      if (lookahead == '}') ADVANCE(519);
      END_STATE();
    case 270:
      if (lookahead == '}') ADVANCE(510);
      END_STATE();
    case 271:
      if (lookahead == '}') ADVANCE(515);
      END_STATE();
    case 272:
      if (lookahead == '}') ADVANCE(518);
      END_STATE();
    case 273:
      if (lookahead == '}') ADVANCE(521);
      END_STATE();
    case 274:
      if (lookahead == '}') ADVANCE(520);
      END_STATE();
    case 275:
      if (lookahead == '}') ADVANCE(522);
      END_STATE();
    case 276:
      if (lookahead == '}') ADVANCE(523);
      END_STATE();
    case 277:
      if (lookahead == '~') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 278:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(278)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      END_STATE();
    case 280:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 281:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 282:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 283:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 284:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 285:
      if (eof) ADVANCE(286);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'I') ADVANCE(389);
      if (lookahead == 'N') ADVANCE(394);
      if (lookahead == 'T') ADVANCE(386);
      if (lookahead == 'W') ADVANCE(382);
      if (lookahead == '[') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '_') ADVANCE(376);
      if (lookahead == '`') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead == 'f') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == 'k') ADVANCE(408);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 'v') ADVANCE(419);
      if (lookahead == 'x') ADVANCE(427);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\n') ADVANCE(287);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__list_item);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__list_item);
      if (lookahead == '\n') ADVANCE(304);
      if (lookahead == '*') ADVANCE(305);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__list_item);
      if (lookahead == '\n') ADVANCE(304);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'A') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'A') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'A') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'E') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'G') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'I') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'I') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'I') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'M') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'N') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'N') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'N') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'N') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'O') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'O') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'O') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'P') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'P') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'R') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'R') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'U') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'b') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 's') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == 'u') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(279);
      if (lookahead == '.') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '_') ADVANCE(375);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(51);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(27);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(57);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(480);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(54);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(435);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'G') ADVANCE(441);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(396);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'P') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'P') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'R') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'R') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(384);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(383);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'U') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'b') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'f') ADVANCE(379);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'g') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(422);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 's') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 's') ADVANCE(436);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 't') ADVANCE(421);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 't') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(409);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(53);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(29);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(58);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(55);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(31);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(59);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(56);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(33);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(35);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 's') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 's') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(456);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(456);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(456);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '|') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(456);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == 'W') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == 'W') ADVANCE(109);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_table_token1);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '\n') ADVANCE(473);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '_') ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '*') ADVANCE(488);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '`') ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '^') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__blank);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__empty);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__nbsp);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__zwsp);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__wj);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__apos);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__quot);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__lsquo);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__rsquo);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__ldquo);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__rdquo);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__deg);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__plus);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__brvbar);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__vbar);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__amp);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__lt);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__gt);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__startsb);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__endsb);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__caret);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__asterisk);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__tilde);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__backslash);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__backtick);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__two_colons);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__two_semicolons);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__cpp);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__pp);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 285},
  [2] = {.lex_state = 285},
  [3] = {.lex_state = 285},
  [4] = {.lex_state = 285},
  [5] = {.lex_state = 285},
  [6] = {.lex_state = 285},
  [7] = {.lex_state = 285},
  [8] = {.lex_state = 285},
  [9] = {.lex_state = 285},
  [10] = {.lex_state = 285},
  [11] = {.lex_state = 285},
  [12] = {.lex_state = 285},
  [13] = {.lex_state = 285},
  [14] = {.lex_state = 285},
  [15] = {.lex_state = 285},
  [16] = {.lex_state = 285},
  [17] = {.lex_state = 285},
  [18] = {.lex_state = 285},
  [19] = {.lex_state = 285},
  [20] = {.lex_state = 285},
  [21] = {.lex_state = 285},
  [22] = {.lex_state = 285},
  [23] = {.lex_state = 285},
  [24] = {.lex_state = 285},
  [25] = {.lex_state = 285},
  [26] = {.lex_state = 285},
  [27] = {.lex_state = 285},
  [28] = {.lex_state = 285},
  [29] = {.lex_state = 285},
  [30] = {.lex_state = 285},
  [31] = {.lex_state = 285},
  [32] = {.lex_state = 285},
  [33] = {.lex_state = 285},
  [34] = {.lex_state = 285},
  [35] = {.lex_state = 285},
  [36] = {.lex_state = 285},
  [37] = {.lex_state = 285},
  [38] = {.lex_state = 285},
  [39] = {.lex_state = 285},
  [40] = {.lex_state = 285},
  [41] = {.lex_state = 285},
  [42] = {.lex_state = 285},
  [43] = {.lex_state = 285},
  [44] = {.lex_state = 285},
  [45] = {.lex_state = 285},
  [46] = {.lex_state = 285},
  [47] = {.lex_state = 285},
  [48] = {.lex_state = 285},
  [49] = {.lex_state = 285},
  [50] = {.lex_state = 285},
  [51] = {.lex_state = 285},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 454},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 454},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 454},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 136},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 278},
  [78] = {.lex_state = 136},
  [79] = {.lex_state = 137},
  [80] = {.lex_state = 138},
  [81] = {.lex_state = 462},
  [82] = {.lex_state = 462},
  [83] = {.lex_state = 136},
  [84] = {.lex_state = 136},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 285},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 278},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 278},
  [91] = {.lex_state = 462},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 136},
  [94] = {.lex_state = 22},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 285},
  [97] = {.lex_state = 285},
  [98] = {.lex_state = 136},
  [99] = {.lex_state = 278},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 278},
  [103] = {.lex_state = 278},
  [104] = {.lex_state = 136},
  [105] = {.lex_state = 462},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 136},
  [109] = {.lex_state = 458},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 455},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 22},
  [116] = {.lex_state = 22},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 22},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 22},
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
    [sym_document] = STATE(85),
    [sym__block] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(27),
    [sym__note_block] = STATE(27),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(28),
    [sym__tip_block] = STATE(28),
    [sym_important] = STATE(2),
    [sym__important] = STATE(29),
    [sym__important_block] = STATE(29),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(8),
    [sym__caution_block] = STATE(8),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(31),
    [sym__warning_block] = STATE(31),
    [sym_list] = STATE(2),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [sym_url] = STATE(2),
    [sym_footnote] = STATE(2),
    [sym_kbd] = STATE(2),
    [sym_table] = STATE(2),
    [sym_xref] = STATE(2),
    [sym__inline_xref] = STATE(32),
    [sym__xref] = STATE(32),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(52),
    [sym_passthrough] = STATE(52),
    [sym_replacement] = STATE(52),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(52),
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
    [sym__list_item] = ACTIONS(27),
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
    [sym__note_line] = STATE(27),
    [sym__note_block] = STATE(27),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(28),
    [sym__tip_block] = STATE(28),
    [sym_important] = STATE(3),
    [sym__important] = STATE(29),
    [sym__important_block] = STATE(29),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(8),
    [sym__caution_block] = STATE(8),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(31),
    [sym__warning_block] = STATE(31),
    [sym_list] = STATE(3),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [sym_url] = STATE(3),
    [sym_footnote] = STATE(3),
    [sym_kbd] = STATE(3),
    [sym_table] = STATE(3),
    [sym_xref] = STATE(3),
    [sym__inline_xref] = STATE(32),
    [sym__xref] = STATE(32),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(52),
    [sym_passthrough] = STATE(52),
    [sym_replacement] = STATE(52),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(52),
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
    [sym__list_item] = ACTIONS(27),
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
    [sym__note_line] = STATE(27),
    [sym__note_block] = STATE(27),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(28),
    [sym__tip_block] = STATE(28),
    [sym_important] = STATE(3),
    [sym__important] = STATE(29),
    [sym__important_block] = STATE(29),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(8),
    [sym__caution_block] = STATE(8),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(31),
    [sym__warning_block] = STATE(31),
    [sym_list] = STATE(3),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [sym_url] = STATE(3),
    [sym_footnote] = STATE(3),
    [sym_kbd] = STATE(3),
    [sym_table] = STATE(3),
    [sym_xref] = STATE(3),
    [sym__inline_xref] = STATE(32),
    [sym__xref] = STATE(32),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(52),
    [sym_passthrough] = STATE(52),
    [sym_replacement] = STATE(52),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_paragraph_repeat1] = STATE(52),
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
    [sym__list_item] = ACTIONS(100),
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
    [sym__list_item] = ACTIONS(151),
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
    [aux_sym_list_repeat1] = STATE(6),
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
    [sym__list_item] = ACTIONS(159),
    [aux_sym_code_token1] = ACTIONS(157),
    [aux_sym_code_language_token1] = ACTIONS(161),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [anon_sym_image_COLON_COLON] = ACTIONS(157),
    [aux_sym_url_token1] = ACTIONS(161),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(157),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(157),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(157),
    [anon_sym_LT_LT] = ACTIONS(157),
    [anon_sym_xref_COLON] = ACTIONS(161),
    [anon_sym_audio_COLON_COLON] = ACTIONS(157),
    [anon_sym_video_COLON_COLON] = ACTIONS(157),
    [sym_emphasis] = ACTIONS(161),
    [sym_strong] = ACTIONS(161),
    [sym_monospace] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
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
    [aux_sym_list_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_title] = ACTIONS(163),
    [anon_sym_NOTE_COLON] = ACTIONS(163),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(163),
    [anon_sym_TIP_COLON] = ACTIONS(163),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(163),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(163),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(163),
    [anon_sym_CAUTION_COLON] = ACTIONS(163),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(163),
    [anon_sym_WARNING_COLON] = ACTIONS(163),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(163),
    [sym__list_item] = ACTIONS(165),
    [aux_sym_code_token1] = ACTIONS(163),
    [aux_sym_code_language_token1] = ACTIONS(168),
    [anon_sym_SLASH_SLASH] = ACTIONS(163),
    [anon_sym_image_COLON_COLON] = ACTIONS(163),
    [aux_sym_url_token1] = ACTIONS(168),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(163),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(163),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_xref_COLON] = ACTIONS(168),
    [anon_sym_audio_COLON_COLON] = ACTIONS(163),
    [anon_sym_video_COLON_COLON] = ACTIONS(163),
    [sym_emphasis] = ACTIONS(168),
    [sym_strong] = ACTIONS(168),
    [sym_monospace] = ACTIONS(168),
    [sym_superscript] = ACTIONS(168),
    [sym_subscript] = ACTIONS(163),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(163),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(172), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(170), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [66] = 2,
    ACTIONS(176), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(174), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [132] = 2,
    ACTIONS(180), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(178), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [198] = 2,
    ACTIONS(184), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(182), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [264] = 2,
    ACTIONS(188), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(186), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [330] = 2,
    ACTIONS(192), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(190), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [396] = 2,
    ACTIONS(196), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(194), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [462] = 2,
    ACTIONS(200), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(198), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [528] = 2,
    ACTIONS(204), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(202), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [594] = 2,
    ACTIONS(208), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(206), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [660] = 2,
    ACTIONS(212), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(210), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [726] = 2,
    ACTIONS(216), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(214), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [792] = 2,
    ACTIONS(220), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(218), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [858] = 2,
    ACTIONS(224), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(222), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [924] = 2,
    ACTIONS(228), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(226), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [990] = 2,
    ACTIONS(232), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(230), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1056] = 2,
    ACTIONS(236), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(234), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1122] = 2,
    ACTIONS(240), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(238), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1188] = 2,
    ACTIONS(244), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(242), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1254] = 2,
    ACTIONS(248), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(246), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1320] = 2,
    ACTIONS(252), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(250), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1386] = 2,
    ACTIONS(256), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(254), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1452] = 2,
    ACTIONS(260), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(258), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1518] = 2,
    ACTIONS(264), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(262), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1584] = 2,
    ACTIONS(268), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(266), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1650] = 2,
    ACTIONS(272), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(270), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1716] = 2,
    ACTIONS(276), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(274), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1782] = 2,
    ACTIONS(280), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(278), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1848] = 2,
    ACTIONS(284), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(282), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1914] = 2,
    ACTIONS(288), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(286), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [1980] = 2,
    ACTIONS(292), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(290), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2046] = 2,
    ACTIONS(296), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(294), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2112] = 2,
    ACTIONS(300), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(298), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2178] = 2,
    ACTIONS(304), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(302), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2244] = 2,
    ACTIONS(308), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(306), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2310] = 2,
    ACTIONS(312), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(310), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2376] = 2,
    ACTIONS(316), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(314), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2442] = 2,
    ACTIONS(320), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(318), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2508] = 2,
    ACTIONS(324), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(322), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2574] = 2,
    ACTIONS(328), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(326), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2640] = 2,
    ACTIONS(332), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(330), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2706] = 2,
    ACTIONS(336), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(334), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2772] = 2,
    ACTIONS(340), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(338), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2838] = 2,
    ACTIONS(344), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(342), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2904] = 2,
    ACTIONS(348), 7,
      aux_sym_code_language_token1,
      aux_sym_url_token1,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
    ACTIONS(346), 54,
      ts_builtin_sym_end,
      sym_title,
      anon_sym_NOTE_COLON,
      anon_sym_LBRACKNOTE_RBRACK_LF,
      anon_sym_TIP_COLON,
      anon_sym_LBRACKTIP_RBRACK_LF,
      anon_sym_IMPORTANT_COLON,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
      anon_sym_CAUTION_COLON,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
      anon_sym_WARNING_COLON,
      anon_sym_LBRACKWARNING_RBRACK_LF,
      sym__list_item,
      aux_sym_code_token1,
      anon_sym_SLASH_SLASH,
      anon_sym_image_COLON_COLON,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_LT_LT,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
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
  [2970] = 5,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(53), 4,
      sym__inline_element,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(350), 6,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(356), 30,
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
  [3023] = 5,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(363), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(53), 4,
      sym__inline_element,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(358), 6,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    ACTIONS(366), 30,
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
  [3076] = 3,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(373), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 37,
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
  [3122] = 2,
    ACTIONS(377), 1,
      anon_sym_LF,
    ACTIONS(375), 37,
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
  [3165] = 2,
    ACTIONS(381), 1,
      anon_sym_LF,
    ACTIONS(379), 37,
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
  [3208] = 3,
    ACTIONS(383), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(385), 1,
      aux_sym__note_block_token1,
    STATE(57), 2,
      sym_code_content,
      aux_sym_code_repeat1,
  [3219] = 3,
    ACTIONS(388), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(390), 1,
      aux_sym__note_block_token1,
    STATE(57), 2,
      sym_code_content,
      aux_sym_code_repeat1,
  [3230] = 3,
    ACTIONS(390), 1,
      aux_sym__note_block_token1,
    ACTIONS(392), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(58), 2,
      sym_code_content,
      aux_sym_code_repeat1,
  [3241] = 3,
    ACTIONS(394), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(396), 1,
      aux_sym__note_block_token1,
    STATE(65), 1,
      aux_sym__note_block_repeat1,
  [3251] = 3,
    ACTIONS(396), 1,
      aux_sym__note_block_token1,
    ACTIONS(398), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(65), 1,
      aux_sym__note_block_repeat1,
  [3261] = 3,
    ACTIONS(400), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(402), 1,
      aux_sym__note_block_token1,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [3271] = 3,
    ACTIONS(404), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      aux_sym_table_token1,
    STATE(63), 1,
      aux_sym_table_repeat1,
  [3281] = 3,
    ACTIONS(409), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(411), 1,
      aux_sym__note_block_token1,
    STATE(60), 1,
      aux_sym__note_block_repeat1,
  [3291] = 3,
    ACTIONS(413), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(415), 1,
      aux_sym__note_block_token1,
    STATE(65), 1,
      aux_sym__note_block_repeat1,
  [3301] = 3,
    ACTIONS(418), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(420), 1,
      aux_sym__note_block_token1,
    STATE(70), 1,
      aux_sym__note_block_repeat1,
  [3311] = 3,
    ACTIONS(422), 1,
      aux_sym_comment_token1,
    ACTIONS(424), 1,
      aux_sym_table_token1,
    STATE(69), 1,
      aux_sym_table_repeat1,
  [3321] = 3,
    ACTIONS(396), 1,
      aux_sym__note_block_token1,
    ACTIONS(426), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(65), 1,
      aux_sym__note_block_repeat1,
  [3331] = 3,
    ACTIONS(428), 1,
      aux_sym_comment_token1,
    ACTIONS(430), 1,
      aux_sym_table_token1,
    STATE(63), 1,
      aux_sym_table_repeat1,
  [3341] = 3,
    ACTIONS(396), 1,
      aux_sym__note_block_token1,
    ACTIONS(432), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(65), 1,
      aux_sym__note_block_repeat1,
  [3351] = 3,
    ACTIONS(434), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(436), 1,
      aux_sym__note_block_token1,
    STATE(61), 1,
      aux_sym__note_block_repeat1,
  [3361] = 3,
    ACTIONS(396), 1,
      aux_sym__note_block_token1,
    ACTIONS(438), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(65), 1,
      aux_sym__note_block_repeat1,
  [3371] = 3,
    ACTIONS(440), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(442), 1,
      aux_sym__note_block_token1,
    STATE(72), 1,
      aux_sym__note_block_repeat1,
  [3381] = 2,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    ACTIONS(446), 1,
      aux_sym_audio_token1,
  [3388] = 2,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_GT_GT,
  [3395] = 1,
    ACTIONS(452), 2,
      anon_sym_DASH_DASH_DASH_DASH_LF,
      aux_sym__note_block_token1,
  [3400] = 2,
    ACTIONS(454), 1,
      aux_sym_code_language_token1,
    STATE(96), 1,
      sym_code_language,
  [3407] = 2,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    ACTIONS(458), 1,
      aux_sym_audio_token1,
  [3414] = 2,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    ACTIONS(462), 1,
      aux_sym_footnote_token1,
  [3421] = 2,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
    ACTIONS(466), 1,
      aux_sym_kbd_token1,
  [3428] = 2,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      aux_sym_image_token2,
  [3435] = 2,
    ACTIONS(472), 1,
      anon_sym_LBRACK,
    ACTIONS(474), 1,
      aux_sym_image_token2,
  [3442] = 2,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    ACTIONS(478), 1,
      aux_sym_audio_token1,
  [3449] = 2,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    ACTIONS(482), 1,
      aux_sym_audio_token1,
  [3456] = 1,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
  [3460] = 1,
    ACTIONS(486), 1,
      anon_sym_RBRACK_LF,
  [3464] = 1,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
  [3468] = 1,
    ACTIONS(490), 1,
      aux_sym_code_language_token1,
  [3472] = 1,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
  [3476] = 1,
    ACTIONS(494), 1,
      aux_sym_code_language_token1,
  [3480] = 1,
    ACTIONS(496), 1,
      aux_sym_image_token2,
  [3484] = 1,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
  [3488] = 1,
    ACTIONS(500), 1,
      anon_sym_LBRACK,
  [3492] = 1,
    ACTIONS(502), 1,
      aux_sym__note_line_token1,
  [3496] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
  [3500] = 1,
    ACTIONS(506), 1,
      anon_sym_RBRACK_LF,
  [3504] = 1,
    ACTIONS(508), 1,
      anon_sym_RBRACK_LF,
  [3508] = 1,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
  [3512] = 1,
    ACTIONS(512), 1,
      aux_sym_code_language_token1,
  [3516] = 1,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
  [3520] = 1,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
  [3524] = 1,
    ACTIONS(518), 1,
      aux_sym_code_language_token1,
  [3528] = 1,
    ACTIONS(520), 1,
      aux_sym_code_language_token1,
  [3532] = 1,
    ACTIONS(522), 1,
      anon_sym_LBRACK,
  [3536] = 1,
    ACTIONS(524), 1,
      aux_sym_image_token2,
  [3540] = 1,
    ACTIONS(526), 1,
      anon_sym_GT_GT,
  [3544] = 1,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
  [3548] = 1,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
  [3552] = 1,
    ACTIONS(532), 1,
      aux_sym_image_token1,
  [3556] = 1,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
  [3560] = 1,
    ACTIONS(536), 1,
      aux_sym_comment_token1,
  [3564] = 1,
    ACTIONS(538), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [3568] = 1,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
  [3572] = 1,
    ACTIONS(542), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [3576] = 1,
    ACTIONS(544), 1,
      aux_sym__note_line_token1,
  [3580] = 1,
    ACTIONS(546), 1,
      aux_sym__note_line_token1,
  [3584] = 1,
    ACTIONS(548), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [3588] = 1,
    ACTIONS(550), 1,
      aux_sym__note_line_token1,
  [3592] = 1,
    ACTIONS(552), 1,
      anon_sym_LF,
  [3596] = 1,
    ACTIONS(554), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [3600] = 1,
    ACTIONS(556), 1,
      aux_sym__note_line_token1,
  [3604] = 1,
    ACTIONS(558), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [3608] = 1,
    ACTIONS(560), 1,
      aux_sym__note_line_token1,
  [3612] = 1,
    ACTIONS(562), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 264,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 528,
  [SMALL_STATE(16)] = 594,
  [SMALL_STATE(17)] = 660,
  [SMALL_STATE(18)] = 726,
  [SMALL_STATE(19)] = 792,
  [SMALL_STATE(20)] = 858,
  [SMALL_STATE(21)] = 924,
  [SMALL_STATE(22)] = 990,
  [SMALL_STATE(23)] = 1056,
  [SMALL_STATE(24)] = 1122,
  [SMALL_STATE(25)] = 1188,
  [SMALL_STATE(26)] = 1254,
  [SMALL_STATE(27)] = 1320,
  [SMALL_STATE(28)] = 1386,
  [SMALL_STATE(29)] = 1452,
  [SMALL_STATE(30)] = 1518,
  [SMALL_STATE(31)] = 1584,
  [SMALL_STATE(32)] = 1650,
  [SMALL_STATE(33)] = 1716,
  [SMALL_STATE(34)] = 1782,
  [SMALL_STATE(35)] = 1848,
  [SMALL_STATE(36)] = 1914,
  [SMALL_STATE(37)] = 1980,
  [SMALL_STATE(38)] = 2046,
  [SMALL_STATE(39)] = 2112,
  [SMALL_STATE(40)] = 2178,
  [SMALL_STATE(41)] = 2244,
  [SMALL_STATE(42)] = 2310,
  [SMALL_STATE(43)] = 2376,
  [SMALL_STATE(44)] = 2442,
  [SMALL_STATE(45)] = 2508,
  [SMALL_STATE(46)] = 2574,
  [SMALL_STATE(47)] = 2640,
  [SMALL_STATE(48)] = 2706,
  [SMALL_STATE(49)] = 2772,
  [SMALL_STATE(50)] = 2838,
  [SMALL_STATE(51)] = 2904,
  [SMALL_STATE(52)] = 2970,
  [SMALL_STATE(53)] = 3023,
  [SMALL_STATE(54)] = 3076,
  [SMALL_STATE(55)] = 3122,
  [SMALL_STATE(56)] = 3165,
  [SMALL_STATE(57)] = 3208,
  [SMALL_STATE(58)] = 3219,
  [SMALL_STATE(59)] = 3230,
  [SMALL_STATE(60)] = 3241,
  [SMALL_STATE(61)] = 3251,
  [SMALL_STATE(62)] = 3261,
  [SMALL_STATE(63)] = 3271,
  [SMALL_STATE(64)] = 3281,
  [SMALL_STATE(65)] = 3291,
  [SMALL_STATE(66)] = 3301,
  [SMALL_STATE(67)] = 3311,
  [SMALL_STATE(68)] = 3321,
  [SMALL_STATE(69)] = 3331,
  [SMALL_STATE(70)] = 3341,
  [SMALL_STATE(71)] = 3351,
  [SMALL_STATE(72)] = 3361,
  [SMALL_STATE(73)] = 3371,
  [SMALL_STATE(74)] = 3381,
  [SMALL_STATE(75)] = 3388,
  [SMALL_STATE(76)] = 3395,
  [SMALL_STATE(77)] = 3400,
  [SMALL_STATE(78)] = 3407,
  [SMALL_STATE(79)] = 3414,
  [SMALL_STATE(80)] = 3421,
  [SMALL_STATE(81)] = 3428,
  [SMALL_STATE(82)] = 3435,
  [SMALL_STATE(83)] = 3442,
  [SMALL_STATE(84)] = 3449,
  [SMALL_STATE(85)] = 3456,
  [SMALL_STATE(86)] = 3460,
  [SMALL_STATE(87)] = 3464,
  [SMALL_STATE(88)] = 3468,
  [SMALL_STATE(89)] = 3472,
  [SMALL_STATE(90)] = 3476,
  [SMALL_STATE(91)] = 3480,
  [SMALL_STATE(92)] = 3484,
  [SMALL_STATE(93)] = 3488,
  [SMALL_STATE(94)] = 3492,
  [SMALL_STATE(95)] = 3496,
  [SMALL_STATE(96)] = 3500,
  [SMALL_STATE(97)] = 3504,
  [SMALL_STATE(98)] = 3508,
  [SMALL_STATE(99)] = 3512,
  [SMALL_STATE(100)] = 3516,
  [SMALL_STATE(101)] = 3520,
  [SMALL_STATE(102)] = 3524,
  [SMALL_STATE(103)] = 3528,
  [SMALL_STATE(104)] = 3532,
  [SMALL_STATE(105)] = 3536,
  [SMALL_STATE(106)] = 3540,
  [SMALL_STATE(107)] = 3544,
  [SMALL_STATE(108)] = 3548,
  [SMALL_STATE(109)] = 3552,
  [SMALL_STATE(110)] = 3556,
  [SMALL_STATE(111)] = 3560,
  [SMALL_STATE(112)] = 3564,
  [SMALL_STATE(113)] = 3568,
  [SMALL_STATE(114)] = 3572,
  [SMALL_STATE(115)] = 3576,
  [SMALL_STATE(116)] = 3580,
  [SMALL_STATE(117)] = 3584,
  [SMALL_STATE(118)] = 3588,
  [SMALL_STATE(119)] = 3592,
  [SMALL_STATE(120)] = 3596,
  [SMALL_STATE(121)] = 3600,
  [SMALL_STATE(122)] = 3604,
  [SMALL_STATE(123)] = 3608,
  [SMALL_STATE(124)] = 3612,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 6, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 6, .production_id = 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(53),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(99),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(56),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(76),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(63),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(65),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [484] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
