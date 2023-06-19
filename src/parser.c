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
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 52
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
  [60] = {.lex_state = 454},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 454},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 454},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 136},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 278},
  [76] = {.lex_state = 137},
  [77] = {.lex_state = 136},
  [78] = {.lex_state = 138},
  [79] = {.lex_state = 462},
  [80] = {.lex_state = 136},
  [81] = {.lex_state = 462},
  [82] = {.lex_state = 136},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 285},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 278},
  [88] = {.lex_state = 462},
  [89] = {.lex_state = 278},
  [90] = {.lex_state = 136},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 285},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 136},
  [96] = {.lex_state = 285},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 278},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 462},
  [101] = {.lex_state = 278},
  [102] = {.lex_state = 278},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 136},
  [105] = {.lex_state = 136},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 458},
  [109] = {.lex_state = 455},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 0},
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
    [sym_document] = STATE(83),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_title] = ACTIONS(170),
    [anon_sym_NOTE_COLON] = ACTIONS(170),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(170),
    [anon_sym_TIP_COLON] = ACTIONS(170),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(170),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(170),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(170),
    [anon_sym_CAUTION_COLON] = ACTIONS(170),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(170),
    [anon_sym_WARNING_COLON] = ACTIONS(170),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(170),
    [sym__list_item] = ACTIONS(170),
    [aux_sym_code_token1] = ACTIONS(170),
    [aux_sym_code_language_token1] = ACTIONS(172),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [anon_sym_image_COLON_COLON] = ACTIONS(170),
    [aux_sym_url_token1] = ACTIONS(172),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(170),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(170),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(170),
    [anon_sym_LT_LT] = ACTIONS(170),
    [anon_sym_xref_COLON] = ACTIONS(172),
    [anon_sym_audio_COLON_COLON] = ACTIONS(170),
    [anon_sym_video_COLON_COLON] = ACTIONS(170),
    [sym_emphasis] = ACTIONS(172),
    [sym_strong] = ACTIONS(172),
    [sym_monospace] = ACTIONS(172),
    [sym_superscript] = ACTIONS(172),
    [sym_subscript] = ACTIONS(170),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(170),
    [sym__blank] = ACTIONS(170),
    [sym__empty] = ACTIONS(170),
    [sym__sp] = ACTIONS(170),
    [sym__nbsp] = ACTIONS(170),
    [sym__zwsp] = ACTIONS(170),
    [sym__wj] = ACTIONS(170),
    [sym__apos] = ACTIONS(170),
    [sym__quot] = ACTIONS(170),
    [sym__lsquo] = ACTIONS(170),
    [sym__rsquo] = ACTIONS(170),
    [sym__ldquo] = ACTIONS(170),
    [sym__rdquo] = ACTIONS(170),
    [sym__deg] = ACTIONS(170),
    [sym__plus] = ACTIONS(170),
    [sym__brvbar] = ACTIONS(170),
    [sym__vbar] = ACTIONS(170),
    [sym__amp] = ACTIONS(170),
    [sym__lt] = ACTIONS(170),
    [sym__gt] = ACTIONS(170),
    [sym__startsb] = ACTIONS(170),
    [sym__endsb] = ACTIONS(170),
    [sym__caret] = ACTIONS(170),
    [sym__asterisk] = ACTIONS(170),
    [sym__tilde] = ACTIONS(170),
    [sym__backslash] = ACTIONS(170),
    [sym__backtick] = ACTIONS(170),
    [sym__two_colons] = ACTIONS(170),
    [sym__two_semicolons] = ACTIONS(170),
    [sym__cpp] = ACTIONS(170),
    [sym__pp] = ACTIONS(170),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_title] = ACTIONS(174),
    [anon_sym_NOTE_COLON] = ACTIONS(174),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(174),
    [anon_sym_TIP_COLON] = ACTIONS(174),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(174),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(174),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(174),
    [anon_sym_CAUTION_COLON] = ACTIONS(174),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(174),
    [anon_sym_WARNING_COLON] = ACTIONS(174),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(174),
    [sym__list_item] = ACTIONS(174),
    [aux_sym_code_token1] = ACTIONS(174),
    [aux_sym_code_language_token1] = ACTIONS(176),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [anon_sym_image_COLON_COLON] = ACTIONS(174),
    [aux_sym_url_token1] = ACTIONS(176),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(174),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(174),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(174),
    [anon_sym_LT_LT] = ACTIONS(174),
    [anon_sym_xref_COLON] = ACTIONS(176),
    [anon_sym_audio_COLON_COLON] = ACTIONS(174),
    [anon_sym_video_COLON_COLON] = ACTIONS(174),
    [sym_emphasis] = ACTIONS(176),
    [sym_strong] = ACTIONS(176),
    [sym_monospace] = ACTIONS(176),
    [sym_superscript] = ACTIONS(176),
    [sym_subscript] = ACTIONS(174),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(174),
    [sym__blank] = ACTIONS(174),
    [sym__empty] = ACTIONS(174),
    [sym__sp] = ACTIONS(174),
    [sym__nbsp] = ACTIONS(174),
    [sym__zwsp] = ACTIONS(174),
    [sym__wj] = ACTIONS(174),
    [sym__apos] = ACTIONS(174),
    [sym__quot] = ACTIONS(174),
    [sym__lsquo] = ACTIONS(174),
    [sym__rsquo] = ACTIONS(174),
    [sym__ldquo] = ACTIONS(174),
    [sym__rdquo] = ACTIONS(174),
    [sym__deg] = ACTIONS(174),
    [sym__plus] = ACTIONS(174),
    [sym__brvbar] = ACTIONS(174),
    [sym__vbar] = ACTIONS(174),
    [sym__amp] = ACTIONS(174),
    [sym__lt] = ACTIONS(174),
    [sym__gt] = ACTIONS(174),
    [sym__startsb] = ACTIONS(174),
    [sym__endsb] = ACTIONS(174),
    [sym__caret] = ACTIONS(174),
    [sym__asterisk] = ACTIONS(174),
    [sym__tilde] = ACTIONS(174),
    [sym__backslash] = ACTIONS(174),
    [sym__backtick] = ACTIONS(174),
    [sym__two_colons] = ACTIONS(174),
    [sym__two_semicolons] = ACTIONS(174),
    [sym__cpp] = ACTIONS(174),
    [sym__pp] = ACTIONS(174),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [sym_title] = ACTIONS(178),
    [anon_sym_NOTE_COLON] = ACTIONS(178),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(178),
    [anon_sym_TIP_COLON] = ACTIONS(178),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(178),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(178),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(178),
    [anon_sym_CAUTION_COLON] = ACTIONS(178),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(178),
    [anon_sym_WARNING_COLON] = ACTIONS(178),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(178),
    [sym__list_item] = ACTIONS(178),
    [aux_sym_code_token1] = ACTIONS(178),
    [aux_sym_code_language_token1] = ACTIONS(180),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_image_COLON_COLON] = ACTIONS(178),
    [aux_sym_url_token1] = ACTIONS(180),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(178),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(178),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_xref_COLON] = ACTIONS(180),
    [anon_sym_audio_COLON_COLON] = ACTIONS(178),
    [anon_sym_video_COLON_COLON] = ACTIONS(178),
    [sym_emphasis] = ACTIONS(180),
    [sym_strong] = ACTIONS(180),
    [sym_monospace] = ACTIONS(180),
    [sym_superscript] = ACTIONS(180),
    [sym_subscript] = ACTIONS(178),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(178),
    [sym__blank] = ACTIONS(178),
    [sym__empty] = ACTIONS(178),
    [sym__sp] = ACTIONS(178),
    [sym__nbsp] = ACTIONS(178),
    [sym__zwsp] = ACTIONS(178),
    [sym__wj] = ACTIONS(178),
    [sym__apos] = ACTIONS(178),
    [sym__quot] = ACTIONS(178),
    [sym__lsquo] = ACTIONS(178),
    [sym__rsquo] = ACTIONS(178),
    [sym__ldquo] = ACTIONS(178),
    [sym__rdquo] = ACTIONS(178),
    [sym__deg] = ACTIONS(178),
    [sym__plus] = ACTIONS(178),
    [sym__brvbar] = ACTIONS(178),
    [sym__vbar] = ACTIONS(178),
    [sym__amp] = ACTIONS(178),
    [sym__lt] = ACTIONS(178),
    [sym__gt] = ACTIONS(178),
    [sym__startsb] = ACTIONS(178),
    [sym__endsb] = ACTIONS(178),
    [sym__caret] = ACTIONS(178),
    [sym__asterisk] = ACTIONS(178),
    [sym__tilde] = ACTIONS(178),
    [sym__backslash] = ACTIONS(178),
    [sym__backtick] = ACTIONS(178),
    [sym__two_colons] = ACTIONS(178),
    [sym__two_semicolons] = ACTIONS(178),
    [sym__cpp] = ACTIONS(178),
    [sym__pp] = ACTIONS(178),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_title] = ACTIONS(182),
    [anon_sym_NOTE_COLON] = ACTIONS(182),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(182),
    [anon_sym_TIP_COLON] = ACTIONS(182),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(182),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(182),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(182),
    [anon_sym_CAUTION_COLON] = ACTIONS(182),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(182),
    [anon_sym_WARNING_COLON] = ACTIONS(182),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(182),
    [sym__list_item] = ACTIONS(182),
    [aux_sym_code_token1] = ACTIONS(182),
    [aux_sym_code_language_token1] = ACTIONS(184),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [anon_sym_image_COLON_COLON] = ACTIONS(182),
    [aux_sym_url_token1] = ACTIONS(184),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(182),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(182),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_xref_COLON] = ACTIONS(184),
    [anon_sym_audio_COLON_COLON] = ACTIONS(182),
    [anon_sym_video_COLON_COLON] = ACTIONS(182),
    [sym_emphasis] = ACTIONS(184),
    [sym_strong] = ACTIONS(184),
    [sym_monospace] = ACTIONS(184),
    [sym_superscript] = ACTIONS(184),
    [sym_subscript] = ACTIONS(182),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(182),
    [sym__blank] = ACTIONS(182),
    [sym__empty] = ACTIONS(182),
    [sym__sp] = ACTIONS(182),
    [sym__nbsp] = ACTIONS(182),
    [sym__zwsp] = ACTIONS(182),
    [sym__wj] = ACTIONS(182),
    [sym__apos] = ACTIONS(182),
    [sym__quot] = ACTIONS(182),
    [sym__lsquo] = ACTIONS(182),
    [sym__rsquo] = ACTIONS(182),
    [sym__ldquo] = ACTIONS(182),
    [sym__rdquo] = ACTIONS(182),
    [sym__deg] = ACTIONS(182),
    [sym__plus] = ACTIONS(182),
    [sym__brvbar] = ACTIONS(182),
    [sym__vbar] = ACTIONS(182),
    [sym__amp] = ACTIONS(182),
    [sym__lt] = ACTIONS(182),
    [sym__gt] = ACTIONS(182),
    [sym__startsb] = ACTIONS(182),
    [sym__endsb] = ACTIONS(182),
    [sym__caret] = ACTIONS(182),
    [sym__asterisk] = ACTIONS(182),
    [sym__tilde] = ACTIONS(182),
    [sym__backslash] = ACTIONS(182),
    [sym__backtick] = ACTIONS(182),
    [sym__two_colons] = ACTIONS(182),
    [sym__two_semicolons] = ACTIONS(182),
    [sym__cpp] = ACTIONS(182),
    [sym__pp] = ACTIONS(182),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_title] = ACTIONS(186),
    [anon_sym_NOTE_COLON] = ACTIONS(186),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(186),
    [anon_sym_TIP_COLON] = ACTIONS(186),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(186),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(186),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(186),
    [anon_sym_CAUTION_COLON] = ACTIONS(186),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(186),
    [anon_sym_WARNING_COLON] = ACTIONS(186),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(186),
    [sym__list_item] = ACTIONS(186),
    [aux_sym_code_token1] = ACTIONS(186),
    [aux_sym_code_language_token1] = ACTIONS(188),
    [anon_sym_SLASH_SLASH] = ACTIONS(186),
    [anon_sym_image_COLON_COLON] = ACTIONS(186),
    [aux_sym_url_token1] = ACTIONS(188),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(186),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(186),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(186),
    [anon_sym_LT_LT] = ACTIONS(186),
    [anon_sym_xref_COLON] = ACTIONS(188),
    [anon_sym_audio_COLON_COLON] = ACTIONS(186),
    [anon_sym_video_COLON_COLON] = ACTIONS(186),
    [sym_emphasis] = ACTIONS(188),
    [sym_strong] = ACTIONS(188),
    [sym_monospace] = ACTIONS(188),
    [sym_superscript] = ACTIONS(188),
    [sym_subscript] = ACTIONS(186),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(186),
    [sym__blank] = ACTIONS(186),
    [sym__empty] = ACTIONS(186),
    [sym__sp] = ACTIONS(186),
    [sym__nbsp] = ACTIONS(186),
    [sym__zwsp] = ACTIONS(186),
    [sym__wj] = ACTIONS(186),
    [sym__apos] = ACTIONS(186),
    [sym__quot] = ACTIONS(186),
    [sym__lsquo] = ACTIONS(186),
    [sym__rsquo] = ACTIONS(186),
    [sym__ldquo] = ACTIONS(186),
    [sym__rdquo] = ACTIONS(186),
    [sym__deg] = ACTIONS(186),
    [sym__plus] = ACTIONS(186),
    [sym__brvbar] = ACTIONS(186),
    [sym__vbar] = ACTIONS(186),
    [sym__amp] = ACTIONS(186),
    [sym__lt] = ACTIONS(186),
    [sym__gt] = ACTIONS(186),
    [sym__startsb] = ACTIONS(186),
    [sym__endsb] = ACTIONS(186),
    [sym__caret] = ACTIONS(186),
    [sym__asterisk] = ACTIONS(186),
    [sym__tilde] = ACTIONS(186),
    [sym__backslash] = ACTIONS(186),
    [sym__backtick] = ACTIONS(186),
    [sym__two_colons] = ACTIONS(186),
    [sym__two_semicolons] = ACTIONS(186),
    [sym__cpp] = ACTIONS(186),
    [sym__pp] = ACTIONS(186),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_title] = ACTIONS(190),
    [anon_sym_NOTE_COLON] = ACTIONS(190),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(190),
    [anon_sym_TIP_COLON] = ACTIONS(190),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(190),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(190),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(190),
    [anon_sym_CAUTION_COLON] = ACTIONS(190),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(190),
    [anon_sym_WARNING_COLON] = ACTIONS(190),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(190),
    [sym__list_item] = ACTIONS(190),
    [aux_sym_code_token1] = ACTIONS(190),
    [aux_sym_code_language_token1] = ACTIONS(192),
    [anon_sym_SLASH_SLASH] = ACTIONS(190),
    [anon_sym_image_COLON_COLON] = ACTIONS(190),
    [aux_sym_url_token1] = ACTIONS(192),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(190),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(190),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(190),
    [anon_sym_xref_COLON] = ACTIONS(192),
    [anon_sym_audio_COLON_COLON] = ACTIONS(190),
    [anon_sym_video_COLON_COLON] = ACTIONS(190),
    [sym_emphasis] = ACTIONS(192),
    [sym_strong] = ACTIONS(192),
    [sym_monospace] = ACTIONS(192),
    [sym_superscript] = ACTIONS(192),
    [sym_subscript] = ACTIONS(190),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(190),
    [sym__blank] = ACTIONS(190),
    [sym__empty] = ACTIONS(190),
    [sym__sp] = ACTIONS(190),
    [sym__nbsp] = ACTIONS(190),
    [sym__zwsp] = ACTIONS(190),
    [sym__wj] = ACTIONS(190),
    [sym__apos] = ACTIONS(190),
    [sym__quot] = ACTIONS(190),
    [sym__lsquo] = ACTIONS(190),
    [sym__rsquo] = ACTIONS(190),
    [sym__ldquo] = ACTIONS(190),
    [sym__rdquo] = ACTIONS(190),
    [sym__deg] = ACTIONS(190),
    [sym__plus] = ACTIONS(190),
    [sym__brvbar] = ACTIONS(190),
    [sym__vbar] = ACTIONS(190),
    [sym__amp] = ACTIONS(190),
    [sym__lt] = ACTIONS(190),
    [sym__gt] = ACTIONS(190),
    [sym__startsb] = ACTIONS(190),
    [sym__endsb] = ACTIONS(190),
    [sym__caret] = ACTIONS(190),
    [sym__asterisk] = ACTIONS(190),
    [sym__tilde] = ACTIONS(190),
    [sym__backslash] = ACTIONS(190),
    [sym__backtick] = ACTIONS(190),
    [sym__two_colons] = ACTIONS(190),
    [sym__two_semicolons] = ACTIONS(190),
    [sym__cpp] = ACTIONS(190),
    [sym__pp] = ACTIONS(190),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_title] = ACTIONS(194),
    [anon_sym_NOTE_COLON] = ACTIONS(194),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(194),
    [anon_sym_TIP_COLON] = ACTIONS(194),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(194),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(194),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(194),
    [anon_sym_CAUTION_COLON] = ACTIONS(194),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(194),
    [anon_sym_WARNING_COLON] = ACTIONS(194),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(194),
    [sym__list_item] = ACTIONS(194),
    [aux_sym_code_token1] = ACTIONS(194),
    [aux_sym_code_language_token1] = ACTIONS(196),
    [anon_sym_SLASH_SLASH] = ACTIONS(194),
    [anon_sym_image_COLON_COLON] = ACTIONS(194),
    [aux_sym_url_token1] = ACTIONS(196),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(194),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(194),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(194),
    [anon_sym_LT_LT] = ACTIONS(194),
    [anon_sym_xref_COLON] = ACTIONS(196),
    [anon_sym_audio_COLON_COLON] = ACTIONS(194),
    [anon_sym_video_COLON_COLON] = ACTIONS(194),
    [sym_emphasis] = ACTIONS(196),
    [sym_strong] = ACTIONS(196),
    [sym_monospace] = ACTIONS(196),
    [sym_superscript] = ACTIONS(196),
    [sym_subscript] = ACTIONS(194),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(194),
    [sym__blank] = ACTIONS(194),
    [sym__empty] = ACTIONS(194),
    [sym__sp] = ACTIONS(194),
    [sym__nbsp] = ACTIONS(194),
    [sym__zwsp] = ACTIONS(194),
    [sym__wj] = ACTIONS(194),
    [sym__apos] = ACTIONS(194),
    [sym__quot] = ACTIONS(194),
    [sym__lsquo] = ACTIONS(194),
    [sym__rsquo] = ACTIONS(194),
    [sym__ldquo] = ACTIONS(194),
    [sym__rdquo] = ACTIONS(194),
    [sym__deg] = ACTIONS(194),
    [sym__plus] = ACTIONS(194),
    [sym__brvbar] = ACTIONS(194),
    [sym__vbar] = ACTIONS(194),
    [sym__amp] = ACTIONS(194),
    [sym__lt] = ACTIONS(194),
    [sym__gt] = ACTIONS(194),
    [sym__startsb] = ACTIONS(194),
    [sym__endsb] = ACTIONS(194),
    [sym__caret] = ACTIONS(194),
    [sym__asterisk] = ACTIONS(194),
    [sym__tilde] = ACTIONS(194),
    [sym__backslash] = ACTIONS(194),
    [sym__backtick] = ACTIONS(194),
    [sym__two_colons] = ACTIONS(194),
    [sym__two_semicolons] = ACTIONS(194),
    [sym__cpp] = ACTIONS(194),
    [sym__pp] = ACTIONS(194),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_title] = ACTIONS(198),
    [anon_sym_NOTE_COLON] = ACTIONS(198),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(198),
    [anon_sym_TIP_COLON] = ACTIONS(198),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(198),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(198),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(198),
    [anon_sym_CAUTION_COLON] = ACTIONS(198),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(198),
    [anon_sym_WARNING_COLON] = ACTIONS(198),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(198),
    [sym__list_item] = ACTIONS(198),
    [aux_sym_code_token1] = ACTIONS(198),
    [aux_sym_code_language_token1] = ACTIONS(200),
    [anon_sym_SLASH_SLASH] = ACTIONS(198),
    [anon_sym_image_COLON_COLON] = ACTIONS(198),
    [aux_sym_url_token1] = ACTIONS(200),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(198),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(198),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(198),
    [anon_sym_LT_LT] = ACTIONS(198),
    [anon_sym_xref_COLON] = ACTIONS(200),
    [anon_sym_audio_COLON_COLON] = ACTIONS(198),
    [anon_sym_video_COLON_COLON] = ACTIONS(198),
    [sym_emphasis] = ACTIONS(200),
    [sym_strong] = ACTIONS(200),
    [sym_monospace] = ACTIONS(200),
    [sym_superscript] = ACTIONS(200),
    [sym_subscript] = ACTIONS(198),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(198),
    [sym__blank] = ACTIONS(198),
    [sym__empty] = ACTIONS(198),
    [sym__sp] = ACTIONS(198),
    [sym__nbsp] = ACTIONS(198),
    [sym__zwsp] = ACTIONS(198),
    [sym__wj] = ACTIONS(198),
    [sym__apos] = ACTIONS(198),
    [sym__quot] = ACTIONS(198),
    [sym__lsquo] = ACTIONS(198),
    [sym__rsquo] = ACTIONS(198),
    [sym__ldquo] = ACTIONS(198),
    [sym__rdquo] = ACTIONS(198),
    [sym__deg] = ACTIONS(198),
    [sym__plus] = ACTIONS(198),
    [sym__brvbar] = ACTIONS(198),
    [sym__vbar] = ACTIONS(198),
    [sym__amp] = ACTIONS(198),
    [sym__lt] = ACTIONS(198),
    [sym__gt] = ACTIONS(198),
    [sym__startsb] = ACTIONS(198),
    [sym__endsb] = ACTIONS(198),
    [sym__caret] = ACTIONS(198),
    [sym__asterisk] = ACTIONS(198),
    [sym__tilde] = ACTIONS(198),
    [sym__backslash] = ACTIONS(198),
    [sym__backtick] = ACTIONS(198),
    [sym__two_colons] = ACTIONS(198),
    [sym__two_semicolons] = ACTIONS(198),
    [sym__cpp] = ACTIONS(198),
    [sym__pp] = ACTIONS(198),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_title] = ACTIONS(202),
    [anon_sym_NOTE_COLON] = ACTIONS(202),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(202),
    [anon_sym_TIP_COLON] = ACTIONS(202),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(202),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(202),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(202),
    [anon_sym_CAUTION_COLON] = ACTIONS(202),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(202),
    [anon_sym_WARNING_COLON] = ACTIONS(202),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(202),
    [sym__list_item] = ACTIONS(202),
    [aux_sym_code_token1] = ACTIONS(202),
    [aux_sym_code_language_token1] = ACTIONS(204),
    [anon_sym_SLASH_SLASH] = ACTIONS(202),
    [anon_sym_image_COLON_COLON] = ACTIONS(202),
    [aux_sym_url_token1] = ACTIONS(204),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(202),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(202),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(202),
    [anon_sym_xref_COLON] = ACTIONS(204),
    [anon_sym_audio_COLON_COLON] = ACTIONS(202),
    [anon_sym_video_COLON_COLON] = ACTIONS(202),
    [sym_emphasis] = ACTIONS(204),
    [sym_strong] = ACTIONS(204),
    [sym_monospace] = ACTIONS(204),
    [sym_superscript] = ACTIONS(204),
    [sym_subscript] = ACTIONS(202),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(202),
    [sym__blank] = ACTIONS(202),
    [sym__empty] = ACTIONS(202),
    [sym__sp] = ACTIONS(202),
    [sym__nbsp] = ACTIONS(202),
    [sym__zwsp] = ACTIONS(202),
    [sym__wj] = ACTIONS(202),
    [sym__apos] = ACTIONS(202),
    [sym__quot] = ACTIONS(202),
    [sym__lsquo] = ACTIONS(202),
    [sym__rsquo] = ACTIONS(202),
    [sym__ldquo] = ACTIONS(202),
    [sym__rdquo] = ACTIONS(202),
    [sym__deg] = ACTIONS(202),
    [sym__plus] = ACTIONS(202),
    [sym__brvbar] = ACTIONS(202),
    [sym__vbar] = ACTIONS(202),
    [sym__amp] = ACTIONS(202),
    [sym__lt] = ACTIONS(202),
    [sym__gt] = ACTIONS(202),
    [sym__startsb] = ACTIONS(202),
    [sym__endsb] = ACTIONS(202),
    [sym__caret] = ACTIONS(202),
    [sym__asterisk] = ACTIONS(202),
    [sym__tilde] = ACTIONS(202),
    [sym__backslash] = ACTIONS(202),
    [sym__backtick] = ACTIONS(202),
    [sym__two_colons] = ACTIONS(202),
    [sym__two_semicolons] = ACTIONS(202),
    [sym__cpp] = ACTIONS(202),
    [sym__pp] = ACTIONS(202),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_title] = ACTIONS(206),
    [anon_sym_NOTE_COLON] = ACTIONS(206),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(206),
    [anon_sym_TIP_COLON] = ACTIONS(206),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(206),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(206),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(206),
    [anon_sym_CAUTION_COLON] = ACTIONS(206),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(206),
    [anon_sym_WARNING_COLON] = ACTIONS(206),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(206),
    [sym__list_item] = ACTIONS(206),
    [aux_sym_code_token1] = ACTIONS(206),
    [aux_sym_code_language_token1] = ACTIONS(208),
    [anon_sym_SLASH_SLASH] = ACTIONS(206),
    [anon_sym_image_COLON_COLON] = ACTIONS(206),
    [aux_sym_url_token1] = ACTIONS(208),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(206),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(206),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(206),
    [anon_sym_LT_LT] = ACTIONS(206),
    [anon_sym_xref_COLON] = ACTIONS(208),
    [anon_sym_audio_COLON_COLON] = ACTIONS(206),
    [anon_sym_video_COLON_COLON] = ACTIONS(206),
    [sym_emphasis] = ACTIONS(208),
    [sym_strong] = ACTIONS(208),
    [sym_monospace] = ACTIONS(208),
    [sym_superscript] = ACTIONS(208),
    [sym_subscript] = ACTIONS(206),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(206),
    [sym__blank] = ACTIONS(206),
    [sym__empty] = ACTIONS(206),
    [sym__sp] = ACTIONS(206),
    [sym__nbsp] = ACTIONS(206),
    [sym__zwsp] = ACTIONS(206),
    [sym__wj] = ACTIONS(206),
    [sym__apos] = ACTIONS(206),
    [sym__quot] = ACTIONS(206),
    [sym__lsquo] = ACTIONS(206),
    [sym__rsquo] = ACTIONS(206),
    [sym__ldquo] = ACTIONS(206),
    [sym__rdquo] = ACTIONS(206),
    [sym__deg] = ACTIONS(206),
    [sym__plus] = ACTIONS(206),
    [sym__brvbar] = ACTIONS(206),
    [sym__vbar] = ACTIONS(206),
    [sym__amp] = ACTIONS(206),
    [sym__lt] = ACTIONS(206),
    [sym__gt] = ACTIONS(206),
    [sym__startsb] = ACTIONS(206),
    [sym__endsb] = ACTIONS(206),
    [sym__caret] = ACTIONS(206),
    [sym__asterisk] = ACTIONS(206),
    [sym__tilde] = ACTIONS(206),
    [sym__backslash] = ACTIONS(206),
    [sym__backtick] = ACTIONS(206),
    [sym__two_colons] = ACTIONS(206),
    [sym__two_semicolons] = ACTIONS(206),
    [sym__cpp] = ACTIONS(206),
    [sym__pp] = ACTIONS(206),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_title] = ACTIONS(210),
    [anon_sym_NOTE_COLON] = ACTIONS(210),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(210),
    [anon_sym_TIP_COLON] = ACTIONS(210),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(210),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(210),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(210),
    [anon_sym_CAUTION_COLON] = ACTIONS(210),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(210),
    [anon_sym_WARNING_COLON] = ACTIONS(210),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(210),
    [sym__list_item] = ACTIONS(210),
    [aux_sym_code_token1] = ACTIONS(210),
    [aux_sym_code_language_token1] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(210),
    [anon_sym_image_COLON_COLON] = ACTIONS(210),
    [aux_sym_url_token1] = ACTIONS(212),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(210),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(210),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(210),
    [anon_sym_LT_LT] = ACTIONS(210),
    [anon_sym_xref_COLON] = ACTIONS(212),
    [anon_sym_audio_COLON_COLON] = ACTIONS(210),
    [anon_sym_video_COLON_COLON] = ACTIONS(210),
    [sym_emphasis] = ACTIONS(212),
    [sym_strong] = ACTIONS(212),
    [sym_monospace] = ACTIONS(212),
    [sym_superscript] = ACTIONS(212),
    [sym_subscript] = ACTIONS(210),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(210),
    [sym__blank] = ACTIONS(210),
    [sym__empty] = ACTIONS(210),
    [sym__sp] = ACTIONS(210),
    [sym__nbsp] = ACTIONS(210),
    [sym__zwsp] = ACTIONS(210),
    [sym__wj] = ACTIONS(210),
    [sym__apos] = ACTIONS(210),
    [sym__quot] = ACTIONS(210),
    [sym__lsquo] = ACTIONS(210),
    [sym__rsquo] = ACTIONS(210),
    [sym__ldquo] = ACTIONS(210),
    [sym__rdquo] = ACTIONS(210),
    [sym__deg] = ACTIONS(210),
    [sym__plus] = ACTIONS(210),
    [sym__brvbar] = ACTIONS(210),
    [sym__vbar] = ACTIONS(210),
    [sym__amp] = ACTIONS(210),
    [sym__lt] = ACTIONS(210),
    [sym__gt] = ACTIONS(210),
    [sym__startsb] = ACTIONS(210),
    [sym__endsb] = ACTIONS(210),
    [sym__caret] = ACTIONS(210),
    [sym__asterisk] = ACTIONS(210),
    [sym__tilde] = ACTIONS(210),
    [sym__backslash] = ACTIONS(210),
    [sym__backtick] = ACTIONS(210),
    [sym__two_colons] = ACTIONS(210),
    [sym__two_semicolons] = ACTIONS(210),
    [sym__cpp] = ACTIONS(210),
    [sym__pp] = ACTIONS(210),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_title] = ACTIONS(214),
    [anon_sym_NOTE_COLON] = ACTIONS(214),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(214),
    [anon_sym_TIP_COLON] = ACTIONS(214),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(214),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(214),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(214),
    [anon_sym_CAUTION_COLON] = ACTIONS(214),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(214),
    [anon_sym_WARNING_COLON] = ACTIONS(214),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(214),
    [sym__list_item] = ACTIONS(214),
    [aux_sym_code_token1] = ACTIONS(214),
    [aux_sym_code_language_token1] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [anon_sym_image_COLON_COLON] = ACTIONS(214),
    [aux_sym_url_token1] = ACTIONS(216),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(214),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(214),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(214),
    [anon_sym_LT_LT] = ACTIONS(214),
    [anon_sym_xref_COLON] = ACTIONS(216),
    [anon_sym_audio_COLON_COLON] = ACTIONS(214),
    [anon_sym_video_COLON_COLON] = ACTIONS(214),
    [sym_emphasis] = ACTIONS(216),
    [sym_strong] = ACTIONS(216),
    [sym_monospace] = ACTIONS(216),
    [sym_superscript] = ACTIONS(216),
    [sym_subscript] = ACTIONS(214),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(214),
    [sym__blank] = ACTIONS(214),
    [sym__empty] = ACTIONS(214),
    [sym__sp] = ACTIONS(214),
    [sym__nbsp] = ACTIONS(214),
    [sym__zwsp] = ACTIONS(214),
    [sym__wj] = ACTIONS(214),
    [sym__apos] = ACTIONS(214),
    [sym__quot] = ACTIONS(214),
    [sym__lsquo] = ACTIONS(214),
    [sym__rsquo] = ACTIONS(214),
    [sym__ldquo] = ACTIONS(214),
    [sym__rdquo] = ACTIONS(214),
    [sym__deg] = ACTIONS(214),
    [sym__plus] = ACTIONS(214),
    [sym__brvbar] = ACTIONS(214),
    [sym__vbar] = ACTIONS(214),
    [sym__amp] = ACTIONS(214),
    [sym__lt] = ACTIONS(214),
    [sym__gt] = ACTIONS(214),
    [sym__startsb] = ACTIONS(214),
    [sym__endsb] = ACTIONS(214),
    [sym__caret] = ACTIONS(214),
    [sym__asterisk] = ACTIONS(214),
    [sym__tilde] = ACTIONS(214),
    [sym__backslash] = ACTIONS(214),
    [sym__backtick] = ACTIONS(214),
    [sym__two_colons] = ACTIONS(214),
    [sym__two_semicolons] = ACTIONS(214),
    [sym__cpp] = ACTIONS(214),
    [sym__pp] = ACTIONS(214),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym_title] = ACTIONS(218),
    [anon_sym_NOTE_COLON] = ACTIONS(218),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(218),
    [anon_sym_TIP_COLON] = ACTIONS(218),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(218),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(218),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(218),
    [anon_sym_CAUTION_COLON] = ACTIONS(218),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(218),
    [anon_sym_WARNING_COLON] = ACTIONS(218),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(218),
    [sym__list_item] = ACTIONS(218),
    [aux_sym_code_token1] = ACTIONS(218),
    [aux_sym_code_language_token1] = ACTIONS(220),
    [anon_sym_SLASH_SLASH] = ACTIONS(218),
    [anon_sym_image_COLON_COLON] = ACTIONS(218),
    [aux_sym_url_token1] = ACTIONS(220),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(218),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(218),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(218),
    [anon_sym_LT_LT] = ACTIONS(218),
    [anon_sym_xref_COLON] = ACTIONS(220),
    [anon_sym_audio_COLON_COLON] = ACTIONS(218),
    [anon_sym_video_COLON_COLON] = ACTIONS(218),
    [sym_emphasis] = ACTIONS(220),
    [sym_strong] = ACTIONS(220),
    [sym_monospace] = ACTIONS(220),
    [sym_superscript] = ACTIONS(220),
    [sym_subscript] = ACTIONS(218),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(218),
    [sym__blank] = ACTIONS(218),
    [sym__empty] = ACTIONS(218),
    [sym__sp] = ACTIONS(218),
    [sym__nbsp] = ACTIONS(218),
    [sym__zwsp] = ACTIONS(218),
    [sym__wj] = ACTIONS(218),
    [sym__apos] = ACTIONS(218),
    [sym__quot] = ACTIONS(218),
    [sym__lsquo] = ACTIONS(218),
    [sym__rsquo] = ACTIONS(218),
    [sym__ldquo] = ACTIONS(218),
    [sym__rdquo] = ACTIONS(218),
    [sym__deg] = ACTIONS(218),
    [sym__plus] = ACTIONS(218),
    [sym__brvbar] = ACTIONS(218),
    [sym__vbar] = ACTIONS(218),
    [sym__amp] = ACTIONS(218),
    [sym__lt] = ACTIONS(218),
    [sym__gt] = ACTIONS(218),
    [sym__startsb] = ACTIONS(218),
    [sym__endsb] = ACTIONS(218),
    [sym__caret] = ACTIONS(218),
    [sym__asterisk] = ACTIONS(218),
    [sym__tilde] = ACTIONS(218),
    [sym__backslash] = ACTIONS(218),
    [sym__backtick] = ACTIONS(218),
    [sym__two_colons] = ACTIONS(218),
    [sym__two_semicolons] = ACTIONS(218),
    [sym__cpp] = ACTIONS(218),
    [sym__pp] = ACTIONS(218),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_title] = ACTIONS(222),
    [anon_sym_NOTE_COLON] = ACTIONS(222),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(222),
    [anon_sym_TIP_COLON] = ACTIONS(222),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(222),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(222),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(222),
    [anon_sym_CAUTION_COLON] = ACTIONS(222),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(222),
    [anon_sym_WARNING_COLON] = ACTIONS(222),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(222),
    [sym__list_item] = ACTIONS(222),
    [aux_sym_code_token1] = ACTIONS(222),
    [aux_sym_code_language_token1] = ACTIONS(224),
    [anon_sym_SLASH_SLASH] = ACTIONS(222),
    [anon_sym_image_COLON_COLON] = ACTIONS(222),
    [aux_sym_url_token1] = ACTIONS(224),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(222),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(222),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(222),
    [anon_sym_LT_LT] = ACTIONS(222),
    [anon_sym_xref_COLON] = ACTIONS(224),
    [anon_sym_audio_COLON_COLON] = ACTIONS(222),
    [anon_sym_video_COLON_COLON] = ACTIONS(222),
    [sym_emphasis] = ACTIONS(224),
    [sym_strong] = ACTIONS(224),
    [sym_monospace] = ACTIONS(224),
    [sym_superscript] = ACTIONS(224),
    [sym_subscript] = ACTIONS(222),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(222),
    [sym__blank] = ACTIONS(222),
    [sym__empty] = ACTIONS(222),
    [sym__sp] = ACTIONS(222),
    [sym__nbsp] = ACTIONS(222),
    [sym__zwsp] = ACTIONS(222),
    [sym__wj] = ACTIONS(222),
    [sym__apos] = ACTIONS(222),
    [sym__quot] = ACTIONS(222),
    [sym__lsquo] = ACTIONS(222),
    [sym__rsquo] = ACTIONS(222),
    [sym__ldquo] = ACTIONS(222),
    [sym__rdquo] = ACTIONS(222),
    [sym__deg] = ACTIONS(222),
    [sym__plus] = ACTIONS(222),
    [sym__brvbar] = ACTIONS(222),
    [sym__vbar] = ACTIONS(222),
    [sym__amp] = ACTIONS(222),
    [sym__lt] = ACTIONS(222),
    [sym__gt] = ACTIONS(222),
    [sym__startsb] = ACTIONS(222),
    [sym__endsb] = ACTIONS(222),
    [sym__caret] = ACTIONS(222),
    [sym__asterisk] = ACTIONS(222),
    [sym__tilde] = ACTIONS(222),
    [sym__backslash] = ACTIONS(222),
    [sym__backtick] = ACTIONS(222),
    [sym__two_colons] = ACTIONS(222),
    [sym__two_semicolons] = ACTIONS(222),
    [sym__cpp] = ACTIONS(222),
    [sym__pp] = ACTIONS(222),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_title] = ACTIONS(226),
    [anon_sym_NOTE_COLON] = ACTIONS(226),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(226),
    [anon_sym_TIP_COLON] = ACTIONS(226),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(226),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(226),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(226),
    [anon_sym_CAUTION_COLON] = ACTIONS(226),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(226),
    [anon_sym_WARNING_COLON] = ACTIONS(226),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(226),
    [sym__list_item] = ACTIONS(226),
    [aux_sym_code_token1] = ACTIONS(226),
    [aux_sym_code_language_token1] = ACTIONS(228),
    [anon_sym_SLASH_SLASH] = ACTIONS(226),
    [anon_sym_image_COLON_COLON] = ACTIONS(226),
    [aux_sym_url_token1] = ACTIONS(228),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(226),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(226),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(226),
    [anon_sym_LT_LT] = ACTIONS(226),
    [anon_sym_xref_COLON] = ACTIONS(228),
    [anon_sym_audio_COLON_COLON] = ACTIONS(226),
    [anon_sym_video_COLON_COLON] = ACTIONS(226),
    [sym_emphasis] = ACTIONS(228),
    [sym_strong] = ACTIONS(228),
    [sym_monospace] = ACTIONS(228),
    [sym_superscript] = ACTIONS(228),
    [sym_subscript] = ACTIONS(226),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(226),
    [sym__blank] = ACTIONS(226),
    [sym__empty] = ACTIONS(226),
    [sym__sp] = ACTIONS(226),
    [sym__nbsp] = ACTIONS(226),
    [sym__zwsp] = ACTIONS(226),
    [sym__wj] = ACTIONS(226),
    [sym__apos] = ACTIONS(226),
    [sym__quot] = ACTIONS(226),
    [sym__lsquo] = ACTIONS(226),
    [sym__rsquo] = ACTIONS(226),
    [sym__ldquo] = ACTIONS(226),
    [sym__rdquo] = ACTIONS(226),
    [sym__deg] = ACTIONS(226),
    [sym__plus] = ACTIONS(226),
    [sym__brvbar] = ACTIONS(226),
    [sym__vbar] = ACTIONS(226),
    [sym__amp] = ACTIONS(226),
    [sym__lt] = ACTIONS(226),
    [sym__gt] = ACTIONS(226),
    [sym__startsb] = ACTIONS(226),
    [sym__endsb] = ACTIONS(226),
    [sym__caret] = ACTIONS(226),
    [sym__asterisk] = ACTIONS(226),
    [sym__tilde] = ACTIONS(226),
    [sym__backslash] = ACTIONS(226),
    [sym__backtick] = ACTIONS(226),
    [sym__two_colons] = ACTIONS(226),
    [sym__two_semicolons] = ACTIONS(226),
    [sym__cpp] = ACTIONS(226),
    [sym__pp] = ACTIONS(226),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_title] = ACTIONS(230),
    [anon_sym_NOTE_COLON] = ACTIONS(230),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(230),
    [anon_sym_TIP_COLON] = ACTIONS(230),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(230),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(230),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(230),
    [anon_sym_CAUTION_COLON] = ACTIONS(230),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(230),
    [anon_sym_WARNING_COLON] = ACTIONS(230),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(230),
    [sym__list_item] = ACTIONS(230),
    [aux_sym_code_token1] = ACTIONS(230),
    [aux_sym_code_language_token1] = ACTIONS(232),
    [anon_sym_SLASH_SLASH] = ACTIONS(230),
    [anon_sym_image_COLON_COLON] = ACTIONS(230),
    [aux_sym_url_token1] = ACTIONS(232),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(230),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(230),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(230),
    [anon_sym_LT_LT] = ACTIONS(230),
    [anon_sym_xref_COLON] = ACTIONS(232),
    [anon_sym_audio_COLON_COLON] = ACTIONS(230),
    [anon_sym_video_COLON_COLON] = ACTIONS(230),
    [sym_emphasis] = ACTIONS(232),
    [sym_strong] = ACTIONS(232),
    [sym_monospace] = ACTIONS(232),
    [sym_superscript] = ACTIONS(232),
    [sym_subscript] = ACTIONS(230),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(230),
    [sym__blank] = ACTIONS(230),
    [sym__empty] = ACTIONS(230),
    [sym__sp] = ACTIONS(230),
    [sym__nbsp] = ACTIONS(230),
    [sym__zwsp] = ACTIONS(230),
    [sym__wj] = ACTIONS(230),
    [sym__apos] = ACTIONS(230),
    [sym__quot] = ACTIONS(230),
    [sym__lsquo] = ACTIONS(230),
    [sym__rsquo] = ACTIONS(230),
    [sym__ldquo] = ACTIONS(230),
    [sym__rdquo] = ACTIONS(230),
    [sym__deg] = ACTIONS(230),
    [sym__plus] = ACTIONS(230),
    [sym__brvbar] = ACTIONS(230),
    [sym__vbar] = ACTIONS(230),
    [sym__amp] = ACTIONS(230),
    [sym__lt] = ACTIONS(230),
    [sym__gt] = ACTIONS(230),
    [sym__startsb] = ACTIONS(230),
    [sym__endsb] = ACTIONS(230),
    [sym__caret] = ACTIONS(230),
    [sym__asterisk] = ACTIONS(230),
    [sym__tilde] = ACTIONS(230),
    [sym__backslash] = ACTIONS(230),
    [sym__backtick] = ACTIONS(230),
    [sym__two_colons] = ACTIONS(230),
    [sym__two_semicolons] = ACTIONS(230),
    [sym__cpp] = ACTIONS(230),
    [sym__pp] = ACTIONS(230),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym_title] = ACTIONS(234),
    [anon_sym_NOTE_COLON] = ACTIONS(234),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(234),
    [anon_sym_TIP_COLON] = ACTIONS(234),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(234),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(234),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(234),
    [anon_sym_CAUTION_COLON] = ACTIONS(234),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(234),
    [anon_sym_WARNING_COLON] = ACTIONS(234),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(234),
    [sym__list_item] = ACTIONS(234),
    [aux_sym_code_token1] = ACTIONS(234),
    [aux_sym_code_language_token1] = ACTIONS(236),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [anon_sym_image_COLON_COLON] = ACTIONS(234),
    [aux_sym_url_token1] = ACTIONS(236),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(234),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(234),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(234),
    [anon_sym_LT_LT] = ACTIONS(234),
    [anon_sym_xref_COLON] = ACTIONS(236),
    [anon_sym_audio_COLON_COLON] = ACTIONS(234),
    [anon_sym_video_COLON_COLON] = ACTIONS(234),
    [sym_emphasis] = ACTIONS(236),
    [sym_strong] = ACTIONS(236),
    [sym_monospace] = ACTIONS(236),
    [sym_superscript] = ACTIONS(236),
    [sym_subscript] = ACTIONS(234),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(234),
    [sym__blank] = ACTIONS(234),
    [sym__empty] = ACTIONS(234),
    [sym__sp] = ACTIONS(234),
    [sym__nbsp] = ACTIONS(234),
    [sym__zwsp] = ACTIONS(234),
    [sym__wj] = ACTIONS(234),
    [sym__apos] = ACTIONS(234),
    [sym__quot] = ACTIONS(234),
    [sym__lsquo] = ACTIONS(234),
    [sym__rsquo] = ACTIONS(234),
    [sym__ldquo] = ACTIONS(234),
    [sym__rdquo] = ACTIONS(234),
    [sym__deg] = ACTIONS(234),
    [sym__plus] = ACTIONS(234),
    [sym__brvbar] = ACTIONS(234),
    [sym__vbar] = ACTIONS(234),
    [sym__amp] = ACTIONS(234),
    [sym__lt] = ACTIONS(234),
    [sym__gt] = ACTIONS(234),
    [sym__startsb] = ACTIONS(234),
    [sym__endsb] = ACTIONS(234),
    [sym__caret] = ACTIONS(234),
    [sym__asterisk] = ACTIONS(234),
    [sym__tilde] = ACTIONS(234),
    [sym__backslash] = ACTIONS(234),
    [sym__backtick] = ACTIONS(234),
    [sym__two_colons] = ACTIONS(234),
    [sym__two_semicolons] = ACTIONS(234),
    [sym__cpp] = ACTIONS(234),
    [sym__pp] = ACTIONS(234),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym_title] = ACTIONS(238),
    [anon_sym_NOTE_COLON] = ACTIONS(238),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(238),
    [anon_sym_TIP_COLON] = ACTIONS(238),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(238),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(238),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(238),
    [anon_sym_CAUTION_COLON] = ACTIONS(238),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(238),
    [anon_sym_WARNING_COLON] = ACTIONS(238),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(238),
    [sym__list_item] = ACTIONS(238),
    [aux_sym_code_token1] = ACTIONS(238),
    [aux_sym_code_language_token1] = ACTIONS(240),
    [anon_sym_SLASH_SLASH] = ACTIONS(238),
    [anon_sym_image_COLON_COLON] = ACTIONS(238),
    [aux_sym_url_token1] = ACTIONS(240),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(238),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(238),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(238),
    [anon_sym_LT_LT] = ACTIONS(238),
    [anon_sym_xref_COLON] = ACTIONS(240),
    [anon_sym_audio_COLON_COLON] = ACTIONS(238),
    [anon_sym_video_COLON_COLON] = ACTIONS(238),
    [sym_emphasis] = ACTIONS(240),
    [sym_strong] = ACTIONS(240),
    [sym_monospace] = ACTIONS(240),
    [sym_superscript] = ACTIONS(240),
    [sym_subscript] = ACTIONS(238),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(238),
    [sym__blank] = ACTIONS(238),
    [sym__empty] = ACTIONS(238),
    [sym__sp] = ACTIONS(238),
    [sym__nbsp] = ACTIONS(238),
    [sym__zwsp] = ACTIONS(238),
    [sym__wj] = ACTIONS(238),
    [sym__apos] = ACTIONS(238),
    [sym__quot] = ACTIONS(238),
    [sym__lsquo] = ACTIONS(238),
    [sym__rsquo] = ACTIONS(238),
    [sym__ldquo] = ACTIONS(238),
    [sym__rdquo] = ACTIONS(238),
    [sym__deg] = ACTIONS(238),
    [sym__plus] = ACTIONS(238),
    [sym__brvbar] = ACTIONS(238),
    [sym__vbar] = ACTIONS(238),
    [sym__amp] = ACTIONS(238),
    [sym__lt] = ACTIONS(238),
    [sym__gt] = ACTIONS(238),
    [sym__startsb] = ACTIONS(238),
    [sym__endsb] = ACTIONS(238),
    [sym__caret] = ACTIONS(238),
    [sym__asterisk] = ACTIONS(238),
    [sym__tilde] = ACTIONS(238),
    [sym__backslash] = ACTIONS(238),
    [sym__backtick] = ACTIONS(238),
    [sym__two_colons] = ACTIONS(238),
    [sym__two_semicolons] = ACTIONS(238),
    [sym__cpp] = ACTIONS(238),
    [sym__pp] = ACTIONS(238),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [sym_title] = ACTIONS(242),
    [anon_sym_NOTE_COLON] = ACTIONS(242),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(242),
    [anon_sym_TIP_COLON] = ACTIONS(242),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(242),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(242),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(242),
    [anon_sym_CAUTION_COLON] = ACTIONS(242),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(242),
    [anon_sym_WARNING_COLON] = ACTIONS(242),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(242),
    [sym__list_item] = ACTIONS(242),
    [aux_sym_code_token1] = ACTIONS(242),
    [aux_sym_code_language_token1] = ACTIONS(244),
    [anon_sym_SLASH_SLASH] = ACTIONS(242),
    [anon_sym_image_COLON_COLON] = ACTIONS(242),
    [aux_sym_url_token1] = ACTIONS(244),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(242),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(242),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(242),
    [anon_sym_LT_LT] = ACTIONS(242),
    [anon_sym_xref_COLON] = ACTIONS(244),
    [anon_sym_audio_COLON_COLON] = ACTIONS(242),
    [anon_sym_video_COLON_COLON] = ACTIONS(242),
    [sym_emphasis] = ACTIONS(244),
    [sym_strong] = ACTIONS(244),
    [sym_monospace] = ACTIONS(244),
    [sym_superscript] = ACTIONS(244),
    [sym_subscript] = ACTIONS(242),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(242),
    [sym__blank] = ACTIONS(242),
    [sym__empty] = ACTIONS(242),
    [sym__sp] = ACTIONS(242),
    [sym__nbsp] = ACTIONS(242),
    [sym__zwsp] = ACTIONS(242),
    [sym__wj] = ACTIONS(242),
    [sym__apos] = ACTIONS(242),
    [sym__quot] = ACTIONS(242),
    [sym__lsquo] = ACTIONS(242),
    [sym__rsquo] = ACTIONS(242),
    [sym__ldquo] = ACTIONS(242),
    [sym__rdquo] = ACTIONS(242),
    [sym__deg] = ACTIONS(242),
    [sym__plus] = ACTIONS(242),
    [sym__brvbar] = ACTIONS(242),
    [sym__vbar] = ACTIONS(242),
    [sym__amp] = ACTIONS(242),
    [sym__lt] = ACTIONS(242),
    [sym__gt] = ACTIONS(242),
    [sym__startsb] = ACTIONS(242),
    [sym__endsb] = ACTIONS(242),
    [sym__caret] = ACTIONS(242),
    [sym__asterisk] = ACTIONS(242),
    [sym__tilde] = ACTIONS(242),
    [sym__backslash] = ACTIONS(242),
    [sym__backtick] = ACTIONS(242),
    [sym__two_colons] = ACTIONS(242),
    [sym__two_semicolons] = ACTIONS(242),
    [sym__cpp] = ACTIONS(242),
    [sym__pp] = ACTIONS(242),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym_title] = ACTIONS(246),
    [anon_sym_NOTE_COLON] = ACTIONS(246),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(246),
    [anon_sym_TIP_COLON] = ACTIONS(246),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(246),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(246),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(246),
    [anon_sym_CAUTION_COLON] = ACTIONS(246),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(246),
    [anon_sym_WARNING_COLON] = ACTIONS(246),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(246),
    [sym__list_item] = ACTIONS(246),
    [aux_sym_code_token1] = ACTIONS(246),
    [aux_sym_code_language_token1] = ACTIONS(248),
    [anon_sym_SLASH_SLASH] = ACTIONS(246),
    [anon_sym_image_COLON_COLON] = ACTIONS(246),
    [aux_sym_url_token1] = ACTIONS(248),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(246),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(246),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(246),
    [anon_sym_LT_LT] = ACTIONS(246),
    [anon_sym_xref_COLON] = ACTIONS(248),
    [anon_sym_audio_COLON_COLON] = ACTIONS(246),
    [anon_sym_video_COLON_COLON] = ACTIONS(246),
    [sym_emphasis] = ACTIONS(248),
    [sym_strong] = ACTIONS(248),
    [sym_monospace] = ACTIONS(248),
    [sym_superscript] = ACTIONS(248),
    [sym_subscript] = ACTIONS(246),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(246),
    [sym__blank] = ACTIONS(246),
    [sym__empty] = ACTIONS(246),
    [sym__sp] = ACTIONS(246),
    [sym__nbsp] = ACTIONS(246),
    [sym__zwsp] = ACTIONS(246),
    [sym__wj] = ACTIONS(246),
    [sym__apos] = ACTIONS(246),
    [sym__quot] = ACTIONS(246),
    [sym__lsquo] = ACTIONS(246),
    [sym__rsquo] = ACTIONS(246),
    [sym__ldquo] = ACTIONS(246),
    [sym__rdquo] = ACTIONS(246),
    [sym__deg] = ACTIONS(246),
    [sym__plus] = ACTIONS(246),
    [sym__brvbar] = ACTIONS(246),
    [sym__vbar] = ACTIONS(246),
    [sym__amp] = ACTIONS(246),
    [sym__lt] = ACTIONS(246),
    [sym__gt] = ACTIONS(246),
    [sym__startsb] = ACTIONS(246),
    [sym__endsb] = ACTIONS(246),
    [sym__caret] = ACTIONS(246),
    [sym__asterisk] = ACTIONS(246),
    [sym__tilde] = ACTIONS(246),
    [sym__backslash] = ACTIONS(246),
    [sym__backtick] = ACTIONS(246),
    [sym__two_colons] = ACTIONS(246),
    [sym__two_semicolons] = ACTIONS(246),
    [sym__cpp] = ACTIONS(246),
    [sym__pp] = ACTIONS(246),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(250),
    [sym_title] = ACTIONS(250),
    [anon_sym_NOTE_COLON] = ACTIONS(250),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(250),
    [anon_sym_TIP_COLON] = ACTIONS(250),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(250),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(250),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(250),
    [anon_sym_CAUTION_COLON] = ACTIONS(250),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(250),
    [anon_sym_WARNING_COLON] = ACTIONS(250),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(250),
    [sym__list_item] = ACTIONS(250),
    [aux_sym_code_token1] = ACTIONS(250),
    [aux_sym_code_language_token1] = ACTIONS(252),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_image_COLON_COLON] = ACTIONS(250),
    [aux_sym_url_token1] = ACTIONS(252),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(250),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(250),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_xref_COLON] = ACTIONS(252),
    [anon_sym_audio_COLON_COLON] = ACTIONS(250),
    [anon_sym_video_COLON_COLON] = ACTIONS(250),
    [sym_emphasis] = ACTIONS(252),
    [sym_strong] = ACTIONS(252),
    [sym_monospace] = ACTIONS(252),
    [sym_superscript] = ACTIONS(252),
    [sym_subscript] = ACTIONS(250),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(250),
    [sym__blank] = ACTIONS(250),
    [sym__empty] = ACTIONS(250),
    [sym__sp] = ACTIONS(250),
    [sym__nbsp] = ACTIONS(250),
    [sym__zwsp] = ACTIONS(250),
    [sym__wj] = ACTIONS(250),
    [sym__apos] = ACTIONS(250),
    [sym__quot] = ACTIONS(250),
    [sym__lsquo] = ACTIONS(250),
    [sym__rsquo] = ACTIONS(250),
    [sym__ldquo] = ACTIONS(250),
    [sym__rdquo] = ACTIONS(250),
    [sym__deg] = ACTIONS(250),
    [sym__plus] = ACTIONS(250),
    [sym__brvbar] = ACTIONS(250),
    [sym__vbar] = ACTIONS(250),
    [sym__amp] = ACTIONS(250),
    [sym__lt] = ACTIONS(250),
    [sym__gt] = ACTIONS(250),
    [sym__startsb] = ACTIONS(250),
    [sym__endsb] = ACTIONS(250),
    [sym__caret] = ACTIONS(250),
    [sym__asterisk] = ACTIONS(250),
    [sym__tilde] = ACTIONS(250),
    [sym__backslash] = ACTIONS(250),
    [sym__backtick] = ACTIONS(250),
    [sym__two_colons] = ACTIONS(250),
    [sym__two_semicolons] = ACTIONS(250),
    [sym__cpp] = ACTIONS(250),
    [sym__pp] = ACTIONS(250),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [sym_title] = ACTIONS(254),
    [anon_sym_NOTE_COLON] = ACTIONS(254),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(254),
    [anon_sym_TIP_COLON] = ACTIONS(254),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(254),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(254),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(254),
    [anon_sym_CAUTION_COLON] = ACTIONS(254),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(254),
    [anon_sym_WARNING_COLON] = ACTIONS(254),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(254),
    [sym__list_item] = ACTIONS(254),
    [aux_sym_code_token1] = ACTIONS(254),
    [aux_sym_code_language_token1] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(254),
    [anon_sym_image_COLON_COLON] = ACTIONS(254),
    [aux_sym_url_token1] = ACTIONS(256),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(254),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(254),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_xref_COLON] = ACTIONS(256),
    [anon_sym_audio_COLON_COLON] = ACTIONS(254),
    [anon_sym_video_COLON_COLON] = ACTIONS(254),
    [sym_emphasis] = ACTIONS(256),
    [sym_strong] = ACTIONS(256),
    [sym_monospace] = ACTIONS(256),
    [sym_superscript] = ACTIONS(256),
    [sym_subscript] = ACTIONS(254),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(254),
    [sym__blank] = ACTIONS(254),
    [sym__empty] = ACTIONS(254),
    [sym__sp] = ACTIONS(254),
    [sym__nbsp] = ACTIONS(254),
    [sym__zwsp] = ACTIONS(254),
    [sym__wj] = ACTIONS(254),
    [sym__apos] = ACTIONS(254),
    [sym__quot] = ACTIONS(254),
    [sym__lsquo] = ACTIONS(254),
    [sym__rsquo] = ACTIONS(254),
    [sym__ldquo] = ACTIONS(254),
    [sym__rdquo] = ACTIONS(254),
    [sym__deg] = ACTIONS(254),
    [sym__plus] = ACTIONS(254),
    [sym__brvbar] = ACTIONS(254),
    [sym__vbar] = ACTIONS(254),
    [sym__amp] = ACTIONS(254),
    [sym__lt] = ACTIONS(254),
    [sym__gt] = ACTIONS(254),
    [sym__startsb] = ACTIONS(254),
    [sym__endsb] = ACTIONS(254),
    [sym__caret] = ACTIONS(254),
    [sym__asterisk] = ACTIONS(254),
    [sym__tilde] = ACTIONS(254),
    [sym__backslash] = ACTIONS(254),
    [sym__backtick] = ACTIONS(254),
    [sym__two_colons] = ACTIONS(254),
    [sym__two_semicolons] = ACTIONS(254),
    [sym__cpp] = ACTIONS(254),
    [sym__pp] = ACTIONS(254),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [sym_title] = ACTIONS(258),
    [anon_sym_NOTE_COLON] = ACTIONS(258),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(258),
    [anon_sym_TIP_COLON] = ACTIONS(258),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(258),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(258),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(258),
    [anon_sym_CAUTION_COLON] = ACTIONS(258),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(258),
    [anon_sym_WARNING_COLON] = ACTIONS(258),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(258),
    [sym__list_item] = ACTIONS(258),
    [aux_sym_code_token1] = ACTIONS(258),
    [aux_sym_code_language_token1] = ACTIONS(260),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [anon_sym_image_COLON_COLON] = ACTIONS(258),
    [aux_sym_url_token1] = ACTIONS(260),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(258),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(258),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_xref_COLON] = ACTIONS(260),
    [anon_sym_audio_COLON_COLON] = ACTIONS(258),
    [anon_sym_video_COLON_COLON] = ACTIONS(258),
    [sym_emphasis] = ACTIONS(260),
    [sym_strong] = ACTIONS(260),
    [sym_monospace] = ACTIONS(260),
    [sym_superscript] = ACTIONS(260),
    [sym_subscript] = ACTIONS(258),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(258),
    [sym__blank] = ACTIONS(258),
    [sym__empty] = ACTIONS(258),
    [sym__sp] = ACTIONS(258),
    [sym__nbsp] = ACTIONS(258),
    [sym__zwsp] = ACTIONS(258),
    [sym__wj] = ACTIONS(258),
    [sym__apos] = ACTIONS(258),
    [sym__quot] = ACTIONS(258),
    [sym__lsquo] = ACTIONS(258),
    [sym__rsquo] = ACTIONS(258),
    [sym__ldquo] = ACTIONS(258),
    [sym__rdquo] = ACTIONS(258),
    [sym__deg] = ACTIONS(258),
    [sym__plus] = ACTIONS(258),
    [sym__brvbar] = ACTIONS(258),
    [sym__vbar] = ACTIONS(258),
    [sym__amp] = ACTIONS(258),
    [sym__lt] = ACTIONS(258),
    [sym__gt] = ACTIONS(258),
    [sym__startsb] = ACTIONS(258),
    [sym__endsb] = ACTIONS(258),
    [sym__caret] = ACTIONS(258),
    [sym__asterisk] = ACTIONS(258),
    [sym__tilde] = ACTIONS(258),
    [sym__backslash] = ACTIONS(258),
    [sym__backtick] = ACTIONS(258),
    [sym__two_colons] = ACTIONS(258),
    [sym__two_semicolons] = ACTIONS(258),
    [sym__cpp] = ACTIONS(258),
    [sym__pp] = ACTIONS(258),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [sym_title] = ACTIONS(262),
    [anon_sym_NOTE_COLON] = ACTIONS(262),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(262),
    [anon_sym_TIP_COLON] = ACTIONS(262),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(262),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(262),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(262),
    [anon_sym_CAUTION_COLON] = ACTIONS(262),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(262),
    [anon_sym_WARNING_COLON] = ACTIONS(262),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(262),
    [sym__list_item] = ACTIONS(262),
    [aux_sym_code_token1] = ACTIONS(262),
    [aux_sym_code_language_token1] = ACTIONS(264),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_image_COLON_COLON] = ACTIONS(262),
    [aux_sym_url_token1] = ACTIONS(264),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(262),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(262),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(262),
    [anon_sym_xref_COLON] = ACTIONS(264),
    [anon_sym_audio_COLON_COLON] = ACTIONS(262),
    [anon_sym_video_COLON_COLON] = ACTIONS(262),
    [sym_emphasis] = ACTIONS(264),
    [sym_strong] = ACTIONS(264),
    [sym_monospace] = ACTIONS(264),
    [sym_superscript] = ACTIONS(264),
    [sym_subscript] = ACTIONS(262),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(262),
    [sym__blank] = ACTIONS(262),
    [sym__empty] = ACTIONS(262),
    [sym__sp] = ACTIONS(262),
    [sym__nbsp] = ACTIONS(262),
    [sym__zwsp] = ACTIONS(262),
    [sym__wj] = ACTIONS(262),
    [sym__apos] = ACTIONS(262),
    [sym__quot] = ACTIONS(262),
    [sym__lsquo] = ACTIONS(262),
    [sym__rsquo] = ACTIONS(262),
    [sym__ldquo] = ACTIONS(262),
    [sym__rdquo] = ACTIONS(262),
    [sym__deg] = ACTIONS(262),
    [sym__plus] = ACTIONS(262),
    [sym__brvbar] = ACTIONS(262),
    [sym__vbar] = ACTIONS(262),
    [sym__amp] = ACTIONS(262),
    [sym__lt] = ACTIONS(262),
    [sym__gt] = ACTIONS(262),
    [sym__startsb] = ACTIONS(262),
    [sym__endsb] = ACTIONS(262),
    [sym__caret] = ACTIONS(262),
    [sym__asterisk] = ACTIONS(262),
    [sym__tilde] = ACTIONS(262),
    [sym__backslash] = ACTIONS(262),
    [sym__backtick] = ACTIONS(262),
    [sym__two_colons] = ACTIONS(262),
    [sym__two_semicolons] = ACTIONS(262),
    [sym__cpp] = ACTIONS(262),
    [sym__pp] = ACTIONS(262),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [sym_title] = ACTIONS(266),
    [anon_sym_NOTE_COLON] = ACTIONS(266),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(266),
    [anon_sym_TIP_COLON] = ACTIONS(266),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(266),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(266),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(266),
    [anon_sym_CAUTION_COLON] = ACTIONS(266),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(266),
    [anon_sym_WARNING_COLON] = ACTIONS(266),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(266),
    [sym__list_item] = ACTIONS(266),
    [aux_sym_code_token1] = ACTIONS(266),
    [aux_sym_code_language_token1] = ACTIONS(268),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [anon_sym_image_COLON_COLON] = ACTIONS(266),
    [aux_sym_url_token1] = ACTIONS(268),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(266),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(266),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_xref_COLON] = ACTIONS(268),
    [anon_sym_audio_COLON_COLON] = ACTIONS(266),
    [anon_sym_video_COLON_COLON] = ACTIONS(266),
    [sym_emphasis] = ACTIONS(268),
    [sym_strong] = ACTIONS(268),
    [sym_monospace] = ACTIONS(268),
    [sym_superscript] = ACTIONS(268),
    [sym_subscript] = ACTIONS(266),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(266),
    [sym__blank] = ACTIONS(266),
    [sym__empty] = ACTIONS(266),
    [sym__sp] = ACTIONS(266),
    [sym__nbsp] = ACTIONS(266),
    [sym__zwsp] = ACTIONS(266),
    [sym__wj] = ACTIONS(266),
    [sym__apos] = ACTIONS(266),
    [sym__quot] = ACTIONS(266),
    [sym__lsquo] = ACTIONS(266),
    [sym__rsquo] = ACTIONS(266),
    [sym__ldquo] = ACTIONS(266),
    [sym__rdquo] = ACTIONS(266),
    [sym__deg] = ACTIONS(266),
    [sym__plus] = ACTIONS(266),
    [sym__brvbar] = ACTIONS(266),
    [sym__vbar] = ACTIONS(266),
    [sym__amp] = ACTIONS(266),
    [sym__lt] = ACTIONS(266),
    [sym__gt] = ACTIONS(266),
    [sym__startsb] = ACTIONS(266),
    [sym__endsb] = ACTIONS(266),
    [sym__caret] = ACTIONS(266),
    [sym__asterisk] = ACTIONS(266),
    [sym__tilde] = ACTIONS(266),
    [sym__backslash] = ACTIONS(266),
    [sym__backtick] = ACTIONS(266),
    [sym__two_colons] = ACTIONS(266),
    [sym__two_semicolons] = ACTIONS(266),
    [sym__cpp] = ACTIONS(266),
    [sym__pp] = ACTIONS(266),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_title] = ACTIONS(270),
    [anon_sym_NOTE_COLON] = ACTIONS(270),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(270),
    [anon_sym_TIP_COLON] = ACTIONS(270),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(270),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(270),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(270),
    [anon_sym_CAUTION_COLON] = ACTIONS(270),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(270),
    [anon_sym_WARNING_COLON] = ACTIONS(270),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(270),
    [sym__list_item] = ACTIONS(270),
    [aux_sym_code_token1] = ACTIONS(270),
    [aux_sym_code_language_token1] = ACTIONS(272),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_image_COLON_COLON] = ACTIONS(270),
    [aux_sym_url_token1] = ACTIONS(272),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(270),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(270),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(270),
    [anon_sym_xref_COLON] = ACTIONS(272),
    [anon_sym_audio_COLON_COLON] = ACTIONS(270),
    [anon_sym_video_COLON_COLON] = ACTIONS(270),
    [sym_emphasis] = ACTIONS(272),
    [sym_strong] = ACTIONS(272),
    [sym_monospace] = ACTIONS(272),
    [sym_superscript] = ACTIONS(272),
    [sym_subscript] = ACTIONS(270),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(270),
    [sym__blank] = ACTIONS(270),
    [sym__empty] = ACTIONS(270),
    [sym__sp] = ACTIONS(270),
    [sym__nbsp] = ACTIONS(270),
    [sym__zwsp] = ACTIONS(270),
    [sym__wj] = ACTIONS(270),
    [sym__apos] = ACTIONS(270),
    [sym__quot] = ACTIONS(270),
    [sym__lsquo] = ACTIONS(270),
    [sym__rsquo] = ACTIONS(270),
    [sym__ldquo] = ACTIONS(270),
    [sym__rdquo] = ACTIONS(270),
    [sym__deg] = ACTIONS(270),
    [sym__plus] = ACTIONS(270),
    [sym__brvbar] = ACTIONS(270),
    [sym__vbar] = ACTIONS(270),
    [sym__amp] = ACTIONS(270),
    [sym__lt] = ACTIONS(270),
    [sym__gt] = ACTIONS(270),
    [sym__startsb] = ACTIONS(270),
    [sym__endsb] = ACTIONS(270),
    [sym__caret] = ACTIONS(270),
    [sym__asterisk] = ACTIONS(270),
    [sym__tilde] = ACTIONS(270),
    [sym__backslash] = ACTIONS(270),
    [sym__backtick] = ACTIONS(270),
    [sym__two_colons] = ACTIONS(270),
    [sym__two_semicolons] = ACTIONS(270),
    [sym__cpp] = ACTIONS(270),
    [sym__pp] = ACTIONS(270),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_title] = ACTIONS(274),
    [anon_sym_NOTE_COLON] = ACTIONS(274),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(274),
    [anon_sym_TIP_COLON] = ACTIONS(274),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(274),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(274),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(274),
    [anon_sym_CAUTION_COLON] = ACTIONS(274),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(274),
    [anon_sym_WARNING_COLON] = ACTIONS(274),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(274),
    [sym__list_item] = ACTIONS(274),
    [aux_sym_code_token1] = ACTIONS(274),
    [aux_sym_code_language_token1] = ACTIONS(276),
    [anon_sym_SLASH_SLASH] = ACTIONS(274),
    [anon_sym_image_COLON_COLON] = ACTIONS(274),
    [aux_sym_url_token1] = ACTIONS(276),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(274),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(274),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(274),
    [anon_sym_LT_LT] = ACTIONS(274),
    [anon_sym_xref_COLON] = ACTIONS(276),
    [anon_sym_audio_COLON_COLON] = ACTIONS(274),
    [anon_sym_video_COLON_COLON] = ACTIONS(274),
    [sym_emphasis] = ACTIONS(276),
    [sym_strong] = ACTIONS(276),
    [sym_monospace] = ACTIONS(276),
    [sym_superscript] = ACTIONS(276),
    [sym_subscript] = ACTIONS(274),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(274),
    [sym__blank] = ACTIONS(274),
    [sym__empty] = ACTIONS(274),
    [sym__sp] = ACTIONS(274),
    [sym__nbsp] = ACTIONS(274),
    [sym__zwsp] = ACTIONS(274),
    [sym__wj] = ACTIONS(274),
    [sym__apos] = ACTIONS(274),
    [sym__quot] = ACTIONS(274),
    [sym__lsquo] = ACTIONS(274),
    [sym__rsquo] = ACTIONS(274),
    [sym__ldquo] = ACTIONS(274),
    [sym__rdquo] = ACTIONS(274),
    [sym__deg] = ACTIONS(274),
    [sym__plus] = ACTIONS(274),
    [sym__brvbar] = ACTIONS(274),
    [sym__vbar] = ACTIONS(274),
    [sym__amp] = ACTIONS(274),
    [sym__lt] = ACTIONS(274),
    [sym__gt] = ACTIONS(274),
    [sym__startsb] = ACTIONS(274),
    [sym__endsb] = ACTIONS(274),
    [sym__caret] = ACTIONS(274),
    [sym__asterisk] = ACTIONS(274),
    [sym__tilde] = ACTIONS(274),
    [sym__backslash] = ACTIONS(274),
    [sym__backtick] = ACTIONS(274),
    [sym__two_colons] = ACTIONS(274),
    [sym__two_semicolons] = ACTIONS(274),
    [sym__cpp] = ACTIONS(274),
    [sym__pp] = ACTIONS(274),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_title] = ACTIONS(278),
    [anon_sym_NOTE_COLON] = ACTIONS(278),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(278),
    [anon_sym_TIP_COLON] = ACTIONS(278),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(278),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(278),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(278),
    [anon_sym_CAUTION_COLON] = ACTIONS(278),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(278),
    [anon_sym_WARNING_COLON] = ACTIONS(278),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(278),
    [sym__list_item] = ACTIONS(278),
    [aux_sym_code_token1] = ACTIONS(278),
    [aux_sym_code_language_token1] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(278),
    [anon_sym_image_COLON_COLON] = ACTIONS(278),
    [aux_sym_url_token1] = ACTIONS(280),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(278),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(278),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(278),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_xref_COLON] = ACTIONS(280),
    [anon_sym_audio_COLON_COLON] = ACTIONS(278),
    [anon_sym_video_COLON_COLON] = ACTIONS(278),
    [sym_emphasis] = ACTIONS(280),
    [sym_strong] = ACTIONS(280),
    [sym_monospace] = ACTIONS(280),
    [sym_superscript] = ACTIONS(280),
    [sym_subscript] = ACTIONS(278),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(278),
    [sym__blank] = ACTIONS(278),
    [sym__empty] = ACTIONS(278),
    [sym__sp] = ACTIONS(278),
    [sym__nbsp] = ACTIONS(278),
    [sym__zwsp] = ACTIONS(278),
    [sym__wj] = ACTIONS(278),
    [sym__apos] = ACTIONS(278),
    [sym__quot] = ACTIONS(278),
    [sym__lsquo] = ACTIONS(278),
    [sym__rsquo] = ACTIONS(278),
    [sym__ldquo] = ACTIONS(278),
    [sym__rdquo] = ACTIONS(278),
    [sym__deg] = ACTIONS(278),
    [sym__plus] = ACTIONS(278),
    [sym__brvbar] = ACTIONS(278),
    [sym__vbar] = ACTIONS(278),
    [sym__amp] = ACTIONS(278),
    [sym__lt] = ACTIONS(278),
    [sym__gt] = ACTIONS(278),
    [sym__startsb] = ACTIONS(278),
    [sym__endsb] = ACTIONS(278),
    [sym__caret] = ACTIONS(278),
    [sym__asterisk] = ACTIONS(278),
    [sym__tilde] = ACTIONS(278),
    [sym__backslash] = ACTIONS(278),
    [sym__backtick] = ACTIONS(278),
    [sym__two_colons] = ACTIONS(278),
    [sym__two_semicolons] = ACTIONS(278),
    [sym__cpp] = ACTIONS(278),
    [sym__pp] = ACTIONS(278),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [sym_title] = ACTIONS(282),
    [anon_sym_NOTE_COLON] = ACTIONS(282),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(282),
    [anon_sym_TIP_COLON] = ACTIONS(282),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(282),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(282),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(282),
    [anon_sym_CAUTION_COLON] = ACTIONS(282),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(282),
    [anon_sym_WARNING_COLON] = ACTIONS(282),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(282),
    [sym__list_item] = ACTIONS(282),
    [aux_sym_code_token1] = ACTIONS(282),
    [aux_sym_code_language_token1] = ACTIONS(284),
    [anon_sym_SLASH_SLASH] = ACTIONS(282),
    [anon_sym_image_COLON_COLON] = ACTIONS(282),
    [aux_sym_url_token1] = ACTIONS(284),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(282),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(282),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_xref_COLON] = ACTIONS(284),
    [anon_sym_audio_COLON_COLON] = ACTIONS(282),
    [anon_sym_video_COLON_COLON] = ACTIONS(282),
    [sym_emphasis] = ACTIONS(284),
    [sym_strong] = ACTIONS(284),
    [sym_monospace] = ACTIONS(284),
    [sym_superscript] = ACTIONS(284),
    [sym_subscript] = ACTIONS(282),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(282),
    [sym__blank] = ACTIONS(282),
    [sym__empty] = ACTIONS(282),
    [sym__sp] = ACTIONS(282),
    [sym__nbsp] = ACTIONS(282),
    [sym__zwsp] = ACTIONS(282),
    [sym__wj] = ACTIONS(282),
    [sym__apos] = ACTIONS(282),
    [sym__quot] = ACTIONS(282),
    [sym__lsquo] = ACTIONS(282),
    [sym__rsquo] = ACTIONS(282),
    [sym__ldquo] = ACTIONS(282),
    [sym__rdquo] = ACTIONS(282),
    [sym__deg] = ACTIONS(282),
    [sym__plus] = ACTIONS(282),
    [sym__brvbar] = ACTIONS(282),
    [sym__vbar] = ACTIONS(282),
    [sym__amp] = ACTIONS(282),
    [sym__lt] = ACTIONS(282),
    [sym__gt] = ACTIONS(282),
    [sym__startsb] = ACTIONS(282),
    [sym__endsb] = ACTIONS(282),
    [sym__caret] = ACTIONS(282),
    [sym__asterisk] = ACTIONS(282),
    [sym__tilde] = ACTIONS(282),
    [sym__backslash] = ACTIONS(282),
    [sym__backtick] = ACTIONS(282),
    [sym__two_colons] = ACTIONS(282),
    [sym__two_semicolons] = ACTIONS(282),
    [sym__cpp] = ACTIONS(282),
    [sym__pp] = ACTIONS(282),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym_title] = ACTIONS(286),
    [anon_sym_NOTE_COLON] = ACTIONS(286),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(286),
    [anon_sym_TIP_COLON] = ACTIONS(286),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(286),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(286),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(286),
    [anon_sym_CAUTION_COLON] = ACTIONS(286),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(286),
    [anon_sym_WARNING_COLON] = ACTIONS(286),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(286),
    [sym__list_item] = ACTIONS(286),
    [aux_sym_code_token1] = ACTIONS(286),
    [aux_sym_code_language_token1] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [anon_sym_image_COLON_COLON] = ACTIONS(286),
    [aux_sym_url_token1] = ACTIONS(288),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(286),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(286),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(286),
    [anon_sym_xref_COLON] = ACTIONS(288),
    [anon_sym_audio_COLON_COLON] = ACTIONS(286),
    [anon_sym_video_COLON_COLON] = ACTIONS(286),
    [sym_emphasis] = ACTIONS(288),
    [sym_strong] = ACTIONS(288),
    [sym_monospace] = ACTIONS(288),
    [sym_superscript] = ACTIONS(288),
    [sym_subscript] = ACTIONS(286),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(286),
    [sym__blank] = ACTIONS(286),
    [sym__empty] = ACTIONS(286),
    [sym__sp] = ACTIONS(286),
    [sym__nbsp] = ACTIONS(286),
    [sym__zwsp] = ACTIONS(286),
    [sym__wj] = ACTIONS(286),
    [sym__apos] = ACTIONS(286),
    [sym__quot] = ACTIONS(286),
    [sym__lsquo] = ACTIONS(286),
    [sym__rsquo] = ACTIONS(286),
    [sym__ldquo] = ACTIONS(286),
    [sym__rdquo] = ACTIONS(286),
    [sym__deg] = ACTIONS(286),
    [sym__plus] = ACTIONS(286),
    [sym__brvbar] = ACTIONS(286),
    [sym__vbar] = ACTIONS(286),
    [sym__amp] = ACTIONS(286),
    [sym__lt] = ACTIONS(286),
    [sym__gt] = ACTIONS(286),
    [sym__startsb] = ACTIONS(286),
    [sym__endsb] = ACTIONS(286),
    [sym__caret] = ACTIONS(286),
    [sym__asterisk] = ACTIONS(286),
    [sym__tilde] = ACTIONS(286),
    [sym__backslash] = ACTIONS(286),
    [sym__backtick] = ACTIONS(286),
    [sym__two_colons] = ACTIONS(286),
    [sym__two_semicolons] = ACTIONS(286),
    [sym__cpp] = ACTIONS(286),
    [sym__pp] = ACTIONS(286),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_title] = ACTIONS(290),
    [anon_sym_NOTE_COLON] = ACTIONS(290),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(290),
    [anon_sym_TIP_COLON] = ACTIONS(290),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(290),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(290),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(290),
    [anon_sym_CAUTION_COLON] = ACTIONS(290),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(290),
    [anon_sym_WARNING_COLON] = ACTIONS(290),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(290),
    [sym__list_item] = ACTIONS(290),
    [aux_sym_code_token1] = ACTIONS(290),
    [aux_sym_code_language_token1] = ACTIONS(292),
    [anon_sym_SLASH_SLASH] = ACTIONS(290),
    [anon_sym_image_COLON_COLON] = ACTIONS(290),
    [aux_sym_url_token1] = ACTIONS(292),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(290),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(290),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(290),
    [anon_sym_xref_COLON] = ACTIONS(292),
    [anon_sym_audio_COLON_COLON] = ACTIONS(290),
    [anon_sym_video_COLON_COLON] = ACTIONS(290),
    [sym_emphasis] = ACTIONS(292),
    [sym_strong] = ACTIONS(292),
    [sym_monospace] = ACTIONS(292),
    [sym_superscript] = ACTIONS(292),
    [sym_subscript] = ACTIONS(290),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(290),
    [sym__blank] = ACTIONS(290),
    [sym__empty] = ACTIONS(290),
    [sym__sp] = ACTIONS(290),
    [sym__nbsp] = ACTIONS(290),
    [sym__zwsp] = ACTIONS(290),
    [sym__wj] = ACTIONS(290),
    [sym__apos] = ACTIONS(290),
    [sym__quot] = ACTIONS(290),
    [sym__lsquo] = ACTIONS(290),
    [sym__rsquo] = ACTIONS(290),
    [sym__ldquo] = ACTIONS(290),
    [sym__rdquo] = ACTIONS(290),
    [sym__deg] = ACTIONS(290),
    [sym__plus] = ACTIONS(290),
    [sym__brvbar] = ACTIONS(290),
    [sym__vbar] = ACTIONS(290),
    [sym__amp] = ACTIONS(290),
    [sym__lt] = ACTIONS(290),
    [sym__gt] = ACTIONS(290),
    [sym__startsb] = ACTIONS(290),
    [sym__endsb] = ACTIONS(290),
    [sym__caret] = ACTIONS(290),
    [sym__asterisk] = ACTIONS(290),
    [sym__tilde] = ACTIONS(290),
    [sym__backslash] = ACTIONS(290),
    [sym__backtick] = ACTIONS(290),
    [sym__two_colons] = ACTIONS(290),
    [sym__two_semicolons] = ACTIONS(290),
    [sym__cpp] = ACTIONS(290),
    [sym__pp] = ACTIONS(290),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym_title] = ACTIONS(294),
    [anon_sym_NOTE_COLON] = ACTIONS(294),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(294),
    [anon_sym_TIP_COLON] = ACTIONS(294),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(294),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(294),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(294),
    [anon_sym_CAUTION_COLON] = ACTIONS(294),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(294),
    [anon_sym_WARNING_COLON] = ACTIONS(294),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(294),
    [sym__list_item] = ACTIONS(294),
    [aux_sym_code_token1] = ACTIONS(294),
    [aux_sym_code_language_token1] = ACTIONS(296),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [anon_sym_image_COLON_COLON] = ACTIONS(294),
    [aux_sym_url_token1] = ACTIONS(296),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(294),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(294),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_xref_COLON] = ACTIONS(296),
    [anon_sym_audio_COLON_COLON] = ACTIONS(294),
    [anon_sym_video_COLON_COLON] = ACTIONS(294),
    [sym_emphasis] = ACTIONS(296),
    [sym_strong] = ACTIONS(296),
    [sym_monospace] = ACTIONS(296),
    [sym_superscript] = ACTIONS(296),
    [sym_subscript] = ACTIONS(294),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(294),
    [sym__blank] = ACTIONS(294),
    [sym__empty] = ACTIONS(294),
    [sym__sp] = ACTIONS(294),
    [sym__nbsp] = ACTIONS(294),
    [sym__zwsp] = ACTIONS(294),
    [sym__wj] = ACTIONS(294),
    [sym__apos] = ACTIONS(294),
    [sym__quot] = ACTIONS(294),
    [sym__lsquo] = ACTIONS(294),
    [sym__rsquo] = ACTIONS(294),
    [sym__ldquo] = ACTIONS(294),
    [sym__rdquo] = ACTIONS(294),
    [sym__deg] = ACTIONS(294),
    [sym__plus] = ACTIONS(294),
    [sym__brvbar] = ACTIONS(294),
    [sym__vbar] = ACTIONS(294),
    [sym__amp] = ACTIONS(294),
    [sym__lt] = ACTIONS(294),
    [sym__gt] = ACTIONS(294),
    [sym__startsb] = ACTIONS(294),
    [sym__endsb] = ACTIONS(294),
    [sym__caret] = ACTIONS(294),
    [sym__asterisk] = ACTIONS(294),
    [sym__tilde] = ACTIONS(294),
    [sym__backslash] = ACTIONS(294),
    [sym__backtick] = ACTIONS(294),
    [sym__two_colons] = ACTIONS(294),
    [sym__two_semicolons] = ACTIONS(294),
    [sym__cpp] = ACTIONS(294),
    [sym__pp] = ACTIONS(294),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym_title] = ACTIONS(298),
    [anon_sym_NOTE_COLON] = ACTIONS(298),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(298),
    [anon_sym_TIP_COLON] = ACTIONS(298),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(298),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(298),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(298),
    [anon_sym_CAUTION_COLON] = ACTIONS(298),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(298),
    [anon_sym_WARNING_COLON] = ACTIONS(298),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(298),
    [sym__list_item] = ACTIONS(298),
    [aux_sym_code_token1] = ACTIONS(298),
    [aux_sym_code_language_token1] = ACTIONS(300),
    [anon_sym_SLASH_SLASH] = ACTIONS(298),
    [anon_sym_image_COLON_COLON] = ACTIONS(298),
    [aux_sym_url_token1] = ACTIONS(300),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(298),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(298),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(298),
    [anon_sym_LT_LT] = ACTIONS(298),
    [anon_sym_xref_COLON] = ACTIONS(300),
    [anon_sym_audio_COLON_COLON] = ACTIONS(298),
    [anon_sym_video_COLON_COLON] = ACTIONS(298),
    [sym_emphasis] = ACTIONS(300),
    [sym_strong] = ACTIONS(300),
    [sym_monospace] = ACTIONS(300),
    [sym_superscript] = ACTIONS(300),
    [sym_subscript] = ACTIONS(298),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(298),
    [sym__blank] = ACTIONS(298),
    [sym__empty] = ACTIONS(298),
    [sym__sp] = ACTIONS(298),
    [sym__nbsp] = ACTIONS(298),
    [sym__zwsp] = ACTIONS(298),
    [sym__wj] = ACTIONS(298),
    [sym__apos] = ACTIONS(298),
    [sym__quot] = ACTIONS(298),
    [sym__lsquo] = ACTIONS(298),
    [sym__rsquo] = ACTIONS(298),
    [sym__ldquo] = ACTIONS(298),
    [sym__rdquo] = ACTIONS(298),
    [sym__deg] = ACTIONS(298),
    [sym__plus] = ACTIONS(298),
    [sym__brvbar] = ACTIONS(298),
    [sym__vbar] = ACTIONS(298),
    [sym__amp] = ACTIONS(298),
    [sym__lt] = ACTIONS(298),
    [sym__gt] = ACTIONS(298),
    [sym__startsb] = ACTIONS(298),
    [sym__endsb] = ACTIONS(298),
    [sym__caret] = ACTIONS(298),
    [sym__asterisk] = ACTIONS(298),
    [sym__tilde] = ACTIONS(298),
    [sym__backslash] = ACTIONS(298),
    [sym__backtick] = ACTIONS(298),
    [sym__two_colons] = ACTIONS(298),
    [sym__two_semicolons] = ACTIONS(298),
    [sym__cpp] = ACTIONS(298),
    [sym__pp] = ACTIONS(298),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_title] = ACTIONS(302),
    [anon_sym_NOTE_COLON] = ACTIONS(302),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(302),
    [anon_sym_TIP_COLON] = ACTIONS(302),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(302),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(302),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(302),
    [anon_sym_CAUTION_COLON] = ACTIONS(302),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(302),
    [anon_sym_WARNING_COLON] = ACTIONS(302),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(302),
    [sym__list_item] = ACTIONS(302),
    [aux_sym_code_token1] = ACTIONS(302),
    [aux_sym_code_language_token1] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(302),
    [anon_sym_image_COLON_COLON] = ACTIONS(302),
    [aux_sym_url_token1] = ACTIONS(304),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(302),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(302),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(302),
    [anon_sym_LT_LT] = ACTIONS(302),
    [anon_sym_xref_COLON] = ACTIONS(304),
    [anon_sym_audio_COLON_COLON] = ACTIONS(302),
    [anon_sym_video_COLON_COLON] = ACTIONS(302),
    [sym_emphasis] = ACTIONS(304),
    [sym_strong] = ACTIONS(304),
    [sym_monospace] = ACTIONS(304),
    [sym_superscript] = ACTIONS(304),
    [sym_subscript] = ACTIONS(302),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(302),
    [sym__blank] = ACTIONS(302),
    [sym__empty] = ACTIONS(302),
    [sym__sp] = ACTIONS(302),
    [sym__nbsp] = ACTIONS(302),
    [sym__zwsp] = ACTIONS(302),
    [sym__wj] = ACTIONS(302),
    [sym__apos] = ACTIONS(302),
    [sym__quot] = ACTIONS(302),
    [sym__lsquo] = ACTIONS(302),
    [sym__rsquo] = ACTIONS(302),
    [sym__ldquo] = ACTIONS(302),
    [sym__rdquo] = ACTIONS(302),
    [sym__deg] = ACTIONS(302),
    [sym__plus] = ACTIONS(302),
    [sym__brvbar] = ACTIONS(302),
    [sym__vbar] = ACTIONS(302),
    [sym__amp] = ACTIONS(302),
    [sym__lt] = ACTIONS(302),
    [sym__gt] = ACTIONS(302),
    [sym__startsb] = ACTIONS(302),
    [sym__endsb] = ACTIONS(302),
    [sym__caret] = ACTIONS(302),
    [sym__asterisk] = ACTIONS(302),
    [sym__tilde] = ACTIONS(302),
    [sym__backslash] = ACTIONS(302),
    [sym__backtick] = ACTIONS(302),
    [sym__two_colons] = ACTIONS(302),
    [sym__two_semicolons] = ACTIONS(302),
    [sym__cpp] = ACTIONS(302),
    [sym__pp] = ACTIONS(302),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [sym_title] = ACTIONS(306),
    [anon_sym_NOTE_COLON] = ACTIONS(306),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(306),
    [anon_sym_TIP_COLON] = ACTIONS(306),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(306),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(306),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(306),
    [anon_sym_CAUTION_COLON] = ACTIONS(306),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(306),
    [anon_sym_WARNING_COLON] = ACTIONS(306),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(306),
    [sym__list_item] = ACTIONS(306),
    [aux_sym_code_token1] = ACTIONS(306),
    [aux_sym_code_language_token1] = ACTIONS(308),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [anon_sym_image_COLON_COLON] = ACTIONS(306),
    [aux_sym_url_token1] = ACTIONS(308),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(306),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(306),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(306),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_xref_COLON] = ACTIONS(308),
    [anon_sym_audio_COLON_COLON] = ACTIONS(306),
    [anon_sym_video_COLON_COLON] = ACTIONS(306),
    [sym_emphasis] = ACTIONS(308),
    [sym_strong] = ACTIONS(308),
    [sym_monospace] = ACTIONS(308),
    [sym_superscript] = ACTIONS(308),
    [sym_subscript] = ACTIONS(306),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(306),
    [sym__blank] = ACTIONS(306),
    [sym__empty] = ACTIONS(306),
    [sym__sp] = ACTIONS(306),
    [sym__nbsp] = ACTIONS(306),
    [sym__zwsp] = ACTIONS(306),
    [sym__wj] = ACTIONS(306),
    [sym__apos] = ACTIONS(306),
    [sym__quot] = ACTIONS(306),
    [sym__lsquo] = ACTIONS(306),
    [sym__rsquo] = ACTIONS(306),
    [sym__ldquo] = ACTIONS(306),
    [sym__rdquo] = ACTIONS(306),
    [sym__deg] = ACTIONS(306),
    [sym__plus] = ACTIONS(306),
    [sym__brvbar] = ACTIONS(306),
    [sym__vbar] = ACTIONS(306),
    [sym__amp] = ACTIONS(306),
    [sym__lt] = ACTIONS(306),
    [sym__gt] = ACTIONS(306),
    [sym__startsb] = ACTIONS(306),
    [sym__endsb] = ACTIONS(306),
    [sym__caret] = ACTIONS(306),
    [sym__asterisk] = ACTIONS(306),
    [sym__tilde] = ACTIONS(306),
    [sym__backslash] = ACTIONS(306),
    [sym__backtick] = ACTIONS(306),
    [sym__two_colons] = ACTIONS(306),
    [sym__two_semicolons] = ACTIONS(306),
    [sym__cpp] = ACTIONS(306),
    [sym__pp] = ACTIONS(306),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_title] = ACTIONS(310),
    [anon_sym_NOTE_COLON] = ACTIONS(310),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(310),
    [anon_sym_TIP_COLON] = ACTIONS(310),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(310),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(310),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(310),
    [anon_sym_CAUTION_COLON] = ACTIONS(310),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(310),
    [anon_sym_WARNING_COLON] = ACTIONS(310),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(310),
    [sym__list_item] = ACTIONS(310),
    [aux_sym_code_token1] = ACTIONS(310),
    [aux_sym_code_language_token1] = ACTIONS(312),
    [anon_sym_SLASH_SLASH] = ACTIONS(310),
    [anon_sym_image_COLON_COLON] = ACTIONS(310),
    [aux_sym_url_token1] = ACTIONS(312),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(310),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(310),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(310),
    [anon_sym_LT_LT] = ACTIONS(310),
    [anon_sym_xref_COLON] = ACTIONS(312),
    [anon_sym_audio_COLON_COLON] = ACTIONS(310),
    [anon_sym_video_COLON_COLON] = ACTIONS(310),
    [sym_emphasis] = ACTIONS(312),
    [sym_strong] = ACTIONS(312),
    [sym_monospace] = ACTIONS(312),
    [sym_superscript] = ACTIONS(312),
    [sym_subscript] = ACTIONS(310),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(310),
    [sym__blank] = ACTIONS(310),
    [sym__empty] = ACTIONS(310),
    [sym__sp] = ACTIONS(310),
    [sym__nbsp] = ACTIONS(310),
    [sym__zwsp] = ACTIONS(310),
    [sym__wj] = ACTIONS(310),
    [sym__apos] = ACTIONS(310),
    [sym__quot] = ACTIONS(310),
    [sym__lsquo] = ACTIONS(310),
    [sym__rsquo] = ACTIONS(310),
    [sym__ldquo] = ACTIONS(310),
    [sym__rdquo] = ACTIONS(310),
    [sym__deg] = ACTIONS(310),
    [sym__plus] = ACTIONS(310),
    [sym__brvbar] = ACTIONS(310),
    [sym__vbar] = ACTIONS(310),
    [sym__amp] = ACTIONS(310),
    [sym__lt] = ACTIONS(310),
    [sym__gt] = ACTIONS(310),
    [sym__startsb] = ACTIONS(310),
    [sym__endsb] = ACTIONS(310),
    [sym__caret] = ACTIONS(310),
    [sym__asterisk] = ACTIONS(310),
    [sym__tilde] = ACTIONS(310),
    [sym__backslash] = ACTIONS(310),
    [sym__backtick] = ACTIONS(310),
    [sym__two_colons] = ACTIONS(310),
    [sym__two_semicolons] = ACTIONS(310),
    [sym__cpp] = ACTIONS(310),
    [sym__pp] = ACTIONS(310),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym_title] = ACTIONS(314),
    [anon_sym_NOTE_COLON] = ACTIONS(314),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(314),
    [anon_sym_TIP_COLON] = ACTIONS(314),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(314),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(314),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(314),
    [anon_sym_CAUTION_COLON] = ACTIONS(314),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(314),
    [anon_sym_WARNING_COLON] = ACTIONS(314),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(314),
    [sym__list_item] = ACTIONS(314),
    [aux_sym_code_token1] = ACTIONS(314),
    [aux_sym_code_language_token1] = ACTIONS(316),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [anon_sym_image_COLON_COLON] = ACTIONS(314),
    [aux_sym_url_token1] = ACTIONS(316),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(314),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(314),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(314),
    [anon_sym_LT_LT] = ACTIONS(314),
    [anon_sym_xref_COLON] = ACTIONS(316),
    [anon_sym_audio_COLON_COLON] = ACTIONS(314),
    [anon_sym_video_COLON_COLON] = ACTIONS(314),
    [sym_emphasis] = ACTIONS(316),
    [sym_strong] = ACTIONS(316),
    [sym_monospace] = ACTIONS(316),
    [sym_superscript] = ACTIONS(316),
    [sym_subscript] = ACTIONS(314),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(314),
    [sym__blank] = ACTIONS(314),
    [sym__empty] = ACTIONS(314),
    [sym__sp] = ACTIONS(314),
    [sym__nbsp] = ACTIONS(314),
    [sym__zwsp] = ACTIONS(314),
    [sym__wj] = ACTIONS(314),
    [sym__apos] = ACTIONS(314),
    [sym__quot] = ACTIONS(314),
    [sym__lsquo] = ACTIONS(314),
    [sym__rsquo] = ACTIONS(314),
    [sym__ldquo] = ACTIONS(314),
    [sym__rdquo] = ACTIONS(314),
    [sym__deg] = ACTIONS(314),
    [sym__plus] = ACTIONS(314),
    [sym__brvbar] = ACTIONS(314),
    [sym__vbar] = ACTIONS(314),
    [sym__amp] = ACTIONS(314),
    [sym__lt] = ACTIONS(314),
    [sym__gt] = ACTIONS(314),
    [sym__startsb] = ACTIONS(314),
    [sym__endsb] = ACTIONS(314),
    [sym__caret] = ACTIONS(314),
    [sym__asterisk] = ACTIONS(314),
    [sym__tilde] = ACTIONS(314),
    [sym__backslash] = ACTIONS(314),
    [sym__backtick] = ACTIONS(314),
    [sym__two_colons] = ACTIONS(314),
    [sym__two_semicolons] = ACTIONS(314),
    [sym__cpp] = ACTIONS(314),
    [sym__pp] = ACTIONS(314),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [sym_title] = ACTIONS(318),
    [anon_sym_NOTE_COLON] = ACTIONS(318),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(318),
    [anon_sym_TIP_COLON] = ACTIONS(318),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(318),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(318),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(318),
    [anon_sym_CAUTION_COLON] = ACTIONS(318),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(318),
    [anon_sym_WARNING_COLON] = ACTIONS(318),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(318),
    [sym__list_item] = ACTIONS(318),
    [aux_sym_code_token1] = ACTIONS(318),
    [aux_sym_code_language_token1] = ACTIONS(320),
    [anon_sym_SLASH_SLASH] = ACTIONS(318),
    [anon_sym_image_COLON_COLON] = ACTIONS(318),
    [aux_sym_url_token1] = ACTIONS(320),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(318),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(318),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(318),
    [anon_sym_LT_LT] = ACTIONS(318),
    [anon_sym_xref_COLON] = ACTIONS(320),
    [anon_sym_audio_COLON_COLON] = ACTIONS(318),
    [anon_sym_video_COLON_COLON] = ACTIONS(318),
    [sym_emphasis] = ACTIONS(320),
    [sym_strong] = ACTIONS(320),
    [sym_monospace] = ACTIONS(320),
    [sym_superscript] = ACTIONS(320),
    [sym_subscript] = ACTIONS(318),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(318),
    [sym__blank] = ACTIONS(318),
    [sym__empty] = ACTIONS(318),
    [sym__sp] = ACTIONS(318),
    [sym__nbsp] = ACTIONS(318),
    [sym__zwsp] = ACTIONS(318),
    [sym__wj] = ACTIONS(318),
    [sym__apos] = ACTIONS(318),
    [sym__quot] = ACTIONS(318),
    [sym__lsquo] = ACTIONS(318),
    [sym__rsquo] = ACTIONS(318),
    [sym__ldquo] = ACTIONS(318),
    [sym__rdquo] = ACTIONS(318),
    [sym__deg] = ACTIONS(318),
    [sym__plus] = ACTIONS(318),
    [sym__brvbar] = ACTIONS(318),
    [sym__vbar] = ACTIONS(318),
    [sym__amp] = ACTIONS(318),
    [sym__lt] = ACTIONS(318),
    [sym__gt] = ACTIONS(318),
    [sym__startsb] = ACTIONS(318),
    [sym__endsb] = ACTIONS(318),
    [sym__caret] = ACTIONS(318),
    [sym__asterisk] = ACTIONS(318),
    [sym__tilde] = ACTIONS(318),
    [sym__backslash] = ACTIONS(318),
    [sym__backtick] = ACTIONS(318),
    [sym__two_colons] = ACTIONS(318),
    [sym__two_semicolons] = ACTIONS(318),
    [sym__cpp] = ACTIONS(318),
    [sym__pp] = ACTIONS(318),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym_title] = ACTIONS(322),
    [anon_sym_NOTE_COLON] = ACTIONS(322),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(322),
    [anon_sym_TIP_COLON] = ACTIONS(322),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(322),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(322),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(322),
    [anon_sym_CAUTION_COLON] = ACTIONS(322),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(322),
    [anon_sym_WARNING_COLON] = ACTIONS(322),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(322),
    [sym__list_item] = ACTIONS(322),
    [aux_sym_code_token1] = ACTIONS(322),
    [aux_sym_code_language_token1] = ACTIONS(324),
    [anon_sym_SLASH_SLASH] = ACTIONS(322),
    [anon_sym_image_COLON_COLON] = ACTIONS(322),
    [aux_sym_url_token1] = ACTIONS(324),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(322),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(322),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(322),
    [anon_sym_LT_LT] = ACTIONS(322),
    [anon_sym_xref_COLON] = ACTIONS(324),
    [anon_sym_audio_COLON_COLON] = ACTIONS(322),
    [anon_sym_video_COLON_COLON] = ACTIONS(322),
    [sym_emphasis] = ACTIONS(324),
    [sym_strong] = ACTIONS(324),
    [sym_monospace] = ACTIONS(324),
    [sym_superscript] = ACTIONS(324),
    [sym_subscript] = ACTIONS(322),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(322),
    [sym__blank] = ACTIONS(322),
    [sym__empty] = ACTIONS(322),
    [sym__sp] = ACTIONS(322),
    [sym__nbsp] = ACTIONS(322),
    [sym__zwsp] = ACTIONS(322),
    [sym__wj] = ACTIONS(322),
    [sym__apos] = ACTIONS(322),
    [sym__quot] = ACTIONS(322),
    [sym__lsquo] = ACTIONS(322),
    [sym__rsquo] = ACTIONS(322),
    [sym__ldquo] = ACTIONS(322),
    [sym__rdquo] = ACTIONS(322),
    [sym__deg] = ACTIONS(322),
    [sym__plus] = ACTIONS(322),
    [sym__brvbar] = ACTIONS(322),
    [sym__vbar] = ACTIONS(322),
    [sym__amp] = ACTIONS(322),
    [sym__lt] = ACTIONS(322),
    [sym__gt] = ACTIONS(322),
    [sym__startsb] = ACTIONS(322),
    [sym__endsb] = ACTIONS(322),
    [sym__caret] = ACTIONS(322),
    [sym__asterisk] = ACTIONS(322),
    [sym__tilde] = ACTIONS(322),
    [sym__backslash] = ACTIONS(322),
    [sym__backtick] = ACTIONS(322),
    [sym__two_colons] = ACTIONS(322),
    [sym__two_semicolons] = ACTIONS(322),
    [sym__cpp] = ACTIONS(322),
    [sym__pp] = ACTIONS(322),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym_title] = ACTIONS(326),
    [anon_sym_NOTE_COLON] = ACTIONS(326),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(326),
    [anon_sym_TIP_COLON] = ACTIONS(326),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(326),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(326),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(326),
    [anon_sym_CAUTION_COLON] = ACTIONS(326),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(326),
    [anon_sym_WARNING_COLON] = ACTIONS(326),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(326),
    [sym__list_item] = ACTIONS(326),
    [aux_sym_code_token1] = ACTIONS(326),
    [aux_sym_code_language_token1] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_image_COLON_COLON] = ACTIONS(326),
    [aux_sym_url_token1] = ACTIONS(328),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(326),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(326),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(326),
    [anon_sym_LT_LT] = ACTIONS(326),
    [anon_sym_xref_COLON] = ACTIONS(328),
    [anon_sym_audio_COLON_COLON] = ACTIONS(326),
    [anon_sym_video_COLON_COLON] = ACTIONS(326),
    [sym_emphasis] = ACTIONS(328),
    [sym_strong] = ACTIONS(328),
    [sym_monospace] = ACTIONS(328),
    [sym_superscript] = ACTIONS(328),
    [sym_subscript] = ACTIONS(326),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(326),
    [sym__blank] = ACTIONS(326),
    [sym__empty] = ACTIONS(326),
    [sym__sp] = ACTIONS(326),
    [sym__nbsp] = ACTIONS(326),
    [sym__zwsp] = ACTIONS(326),
    [sym__wj] = ACTIONS(326),
    [sym__apos] = ACTIONS(326),
    [sym__quot] = ACTIONS(326),
    [sym__lsquo] = ACTIONS(326),
    [sym__rsquo] = ACTIONS(326),
    [sym__ldquo] = ACTIONS(326),
    [sym__rdquo] = ACTIONS(326),
    [sym__deg] = ACTIONS(326),
    [sym__plus] = ACTIONS(326),
    [sym__brvbar] = ACTIONS(326),
    [sym__vbar] = ACTIONS(326),
    [sym__amp] = ACTIONS(326),
    [sym__lt] = ACTIONS(326),
    [sym__gt] = ACTIONS(326),
    [sym__startsb] = ACTIONS(326),
    [sym__endsb] = ACTIONS(326),
    [sym__caret] = ACTIONS(326),
    [sym__asterisk] = ACTIONS(326),
    [sym__tilde] = ACTIONS(326),
    [sym__backslash] = ACTIONS(326),
    [sym__backtick] = ACTIONS(326),
    [sym__two_colons] = ACTIONS(326),
    [sym__two_semicolons] = ACTIONS(326),
    [sym__cpp] = ACTIONS(326),
    [sym__pp] = ACTIONS(326),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [sym_title] = ACTIONS(330),
    [anon_sym_NOTE_COLON] = ACTIONS(330),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(330),
    [anon_sym_TIP_COLON] = ACTIONS(330),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(330),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(330),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(330),
    [anon_sym_CAUTION_COLON] = ACTIONS(330),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(330),
    [anon_sym_WARNING_COLON] = ACTIONS(330),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(330),
    [sym__list_item] = ACTIONS(330),
    [aux_sym_code_token1] = ACTIONS(330),
    [aux_sym_code_language_token1] = ACTIONS(332),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [anon_sym_image_COLON_COLON] = ACTIONS(330),
    [aux_sym_url_token1] = ACTIONS(332),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(330),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(330),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(330),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_xref_COLON] = ACTIONS(332),
    [anon_sym_audio_COLON_COLON] = ACTIONS(330),
    [anon_sym_video_COLON_COLON] = ACTIONS(330),
    [sym_emphasis] = ACTIONS(332),
    [sym_strong] = ACTIONS(332),
    [sym_monospace] = ACTIONS(332),
    [sym_superscript] = ACTIONS(332),
    [sym_subscript] = ACTIONS(330),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(330),
    [sym__blank] = ACTIONS(330),
    [sym__empty] = ACTIONS(330),
    [sym__sp] = ACTIONS(330),
    [sym__nbsp] = ACTIONS(330),
    [sym__zwsp] = ACTIONS(330),
    [sym__wj] = ACTIONS(330),
    [sym__apos] = ACTIONS(330),
    [sym__quot] = ACTIONS(330),
    [sym__lsquo] = ACTIONS(330),
    [sym__rsquo] = ACTIONS(330),
    [sym__ldquo] = ACTIONS(330),
    [sym__rdquo] = ACTIONS(330),
    [sym__deg] = ACTIONS(330),
    [sym__plus] = ACTIONS(330),
    [sym__brvbar] = ACTIONS(330),
    [sym__vbar] = ACTIONS(330),
    [sym__amp] = ACTIONS(330),
    [sym__lt] = ACTIONS(330),
    [sym__gt] = ACTIONS(330),
    [sym__startsb] = ACTIONS(330),
    [sym__endsb] = ACTIONS(330),
    [sym__caret] = ACTIONS(330),
    [sym__asterisk] = ACTIONS(330),
    [sym__tilde] = ACTIONS(330),
    [sym__backslash] = ACTIONS(330),
    [sym__backtick] = ACTIONS(330),
    [sym__two_colons] = ACTIONS(330),
    [sym__two_semicolons] = ACTIONS(330),
    [sym__cpp] = ACTIONS(330),
    [sym__pp] = ACTIONS(330),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_title] = ACTIONS(334),
    [anon_sym_NOTE_COLON] = ACTIONS(334),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(334),
    [anon_sym_TIP_COLON] = ACTIONS(334),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(334),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(334),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(334),
    [anon_sym_CAUTION_COLON] = ACTIONS(334),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(334),
    [anon_sym_WARNING_COLON] = ACTIONS(334),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(334),
    [sym__list_item] = ACTIONS(334),
    [aux_sym_code_token1] = ACTIONS(334),
    [aux_sym_code_language_token1] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(334),
    [anon_sym_image_COLON_COLON] = ACTIONS(334),
    [aux_sym_url_token1] = ACTIONS(336),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(334),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(334),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(334),
    [anon_sym_LT_LT] = ACTIONS(334),
    [anon_sym_xref_COLON] = ACTIONS(336),
    [anon_sym_audio_COLON_COLON] = ACTIONS(334),
    [anon_sym_video_COLON_COLON] = ACTIONS(334),
    [sym_emphasis] = ACTIONS(336),
    [sym_strong] = ACTIONS(336),
    [sym_monospace] = ACTIONS(336),
    [sym_superscript] = ACTIONS(336),
    [sym_subscript] = ACTIONS(334),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(334),
    [sym__blank] = ACTIONS(334),
    [sym__empty] = ACTIONS(334),
    [sym__sp] = ACTIONS(334),
    [sym__nbsp] = ACTIONS(334),
    [sym__zwsp] = ACTIONS(334),
    [sym__wj] = ACTIONS(334),
    [sym__apos] = ACTIONS(334),
    [sym__quot] = ACTIONS(334),
    [sym__lsquo] = ACTIONS(334),
    [sym__rsquo] = ACTIONS(334),
    [sym__ldquo] = ACTIONS(334),
    [sym__rdquo] = ACTIONS(334),
    [sym__deg] = ACTIONS(334),
    [sym__plus] = ACTIONS(334),
    [sym__brvbar] = ACTIONS(334),
    [sym__vbar] = ACTIONS(334),
    [sym__amp] = ACTIONS(334),
    [sym__lt] = ACTIONS(334),
    [sym__gt] = ACTIONS(334),
    [sym__startsb] = ACTIONS(334),
    [sym__endsb] = ACTIONS(334),
    [sym__caret] = ACTIONS(334),
    [sym__asterisk] = ACTIONS(334),
    [sym__tilde] = ACTIONS(334),
    [sym__backslash] = ACTIONS(334),
    [sym__backtick] = ACTIONS(334),
    [sym__two_colons] = ACTIONS(334),
    [sym__two_semicolons] = ACTIONS(334),
    [sym__cpp] = ACTIONS(334),
    [sym__pp] = ACTIONS(334),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [sym_title] = ACTIONS(338),
    [anon_sym_NOTE_COLON] = ACTIONS(338),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(338),
    [anon_sym_TIP_COLON] = ACTIONS(338),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(338),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(338),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(338),
    [anon_sym_CAUTION_COLON] = ACTIONS(338),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(338),
    [anon_sym_WARNING_COLON] = ACTIONS(338),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(338),
    [sym__list_item] = ACTIONS(338),
    [aux_sym_code_token1] = ACTIONS(338),
    [aux_sym_code_language_token1] = ACTIONS(340),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_image_COLON_COLON] = ACTIONS(338),
    [aux_sym_url_token1] = ACTIONS(340),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(338),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(338),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(338),
    [anon_sym_xref_COLON] = ACTIONS(340),
    [anon_sym_audio_COLON_COLON] = ACTIONS(338),
    [anon_sym_video_COLON_COLON] = ACTIONS(338),
    [sym_emphasis] = ACTIONS(340),
    [sym_strong] = ACTIONS(340),
    [sym_monospace] = ACTIONS(340),
    [sym_superscript] = ACTIONS(340),
    [sym_subscript] = ACTIONS(338),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(338),
    [sym__blank] = ACTIONS(338),
    [sym__empty] = ACTIONS(338),
    [sym__sp] = ACTIONS(338),
    [sym__nbsp] = ACTIONS(338),
    [sym__zwsp] = ACTIONS(338),
    [sym__wj] = ACTIONS(338),
    [sym__apos] = ACTIONS(338),
    [sym__quot] = ACTIONS(338),
    [sym__lsquo] = ACTIONS(338),
    [sym__rsquo] = ACTIONS(338),
    [sym__ldquo] = ACTIONS(338),
    [sym__rdquo] = ACTIONS(338),
    [sym__deg] = ACTIONS(338),
    [sym__plus] = ACTIONS(338),
    [sym__brvbar] = ACTIONS(338),
    [sym__vbar] = ACTIONS(338),
    [sym__amp] = ACTIONS(338),
    [sym__lt] = ACTIONS(338),
    [sym__gt] = ACTIONS(338),
    [sym__startsb] = ACTIONS(338),
    [sym__endsb] = ACTIONS(338),
    [sym__caret] = ACTIONS(338),
    [sym__asterisk] = ACTIONS(338),
    [sym__tilde] = ACTIONS(338),
    [sym__backslash] = ACTIONS(338),
    [sym__backtick] = ACTIONS(338),
    [sym__two_colons] = ACTIONS(338),
    [sym__two_semicolons] = ACTIONS(338),
    [sym__cpp] = ACTIONS(338),
    [sym__pp] = ACTIONS(338),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [sym_title] = ACTIONS(342),
    [anon_sym_NOTE_COLON] = ACTIONS(342),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(342),
    [anon_sym_TIP_COLON] = ACTIONS(342),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(342),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(342),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(342),
    [anon_sym_CAUTION_COLON] = ACTIONS(342),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(342),
    [anon_sym_WARNING_COLON] = ACTIONS(342),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(342),
    [sym__list_item] = ACTIONS(342),
    [aux_sym_code_token1] = ACTIONS(342),
    [aux_sym_code_language_token1] = ACTIONS(344),
    [anon_sym_SLASH_SLASH] = ACTIONS(342),
    [anon_sym_image_COLON_COLON] = ACTIONS(342),
    [aux_sym_url_token1] = ACTIONS(344),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(342),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(342),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(342),
    [anon_sym_LT_LT] = ACTIONS(342),
    [anon_sym_xref_COLON] = ACTIONS(344),
    [anon_sym_audio_COLON_COLON] = ACTIONS(342),
    [anon_sym_video_COLON_COLON] = ACTIONS(342),
    [sym_emphasis] = ACTIONS(344),
    [sym_strong] = ACTIONS(344),
    [sym_monospace] = ACTIONS(344),
    [sym_superscript] = ACTIONS(344),
    [sym_subscript] = ACTIONS(342),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(342),
    [sym__blank] = ACTIONS(342),
    [sym__empty] = ACTIONS(342),
    [sym__sp] = ACTIONS(342),
    [sym__nbsp] = ACTIONS(342),
    [sym__zwsp] = ACTIONS(342),
    [sym__wj] = ACTIONS(342),
    [sym__apos] = ACTIONS(342),
    [sym__quot] = ACTIONS(342),
    [sym__lsquo] = ACTIONS(342),
    [sym__rsquo] = ACTIONS(342),
    [sym__ldquo] = ACTIONS(342),
    [sym__rdquo] = ACTIONS(342),
    [sym__deg] = ACTIONS(342),
    [sym__plus] = ACTIONS(342),
    [sym__brvbar] = ACTIONS(342),
    [sym__vbar] = ACTIONS(342),
    [sym__amp] = ACTIONS(342),
    [sym__lt] = ACTIONS(342),
    [sym__gt] = ACTIONS(342),
    [sym__startsb] = ACTIONS(342),
    [sym__endsb] = ACTIONS(342),
    [sym__caret] = ACTIONS(342),
    [sym__asterisk] = ACTIONS(342),
    [sym__tilde] = ACTIONS(342),
    [sym__backslash] = ACTIONS(342),
    [sym__backtick] = ACTIONS(342),
    [sym__two_colons] = ACTIONS(342),
    [sym__two_semicolons] = ACTIONS(342),
    [sym__cpp] = ACTIONS(342),
    [sym__pp] = ACTIONS(342),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym_title] = ACTIONS(346),
    [anon_sym_NOTE_COLON] = ACTIONS(346),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(346),
    [anon_sym_TIP_COLON] = ACTIONS(346),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(346),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(346),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(346),
    [anon_sym_CAUTION_COLON] = ACTIONS(346),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(346),
    [anon_sym_WARNING_COLON] = ACTIONS(346),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(346),
    [sym__list_item] = ACTIONS(346),
    [aux_sym_code_token1] = ACTIONS(346),
    [aux_sym_code_language_token1] = ACTIONS(348),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [anon_sym_image_COLON_COLON] = ACTIONS(346),
    [aux_sym_url_token1] = ACTIONS(348),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(346),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(346),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(346),
    [anon_sym_LT_LT] = ACTIONS(346),
    [anon_sym_xref_COLON] = ACTIONS(348),
    [anon_sym_audio_COLON_COLON] = ACTIONS(346),
    [anon_sym_video_COLON_COLON] = ACTIONS(346),
    [sym_emphasis] = ACTIONS(348),
    [sym_strong] = ACTIONS(348),
    [sym_monospace] = ACTIONS(348),
    [sym_superscript] = ACTIONS(348),
    [sym_subscript] = ACTIONS(346),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(346),
    [sym__blank] = ACTIONS(346),
    [sym__empty] = ACTIONS(346),
    [sym__sp] = ACTIONS(346),
    [sym__nbsp] = ACTIONS(346),
    [sym__zwsp] = ACTIONS(346),
    [sym__wj] = ACTIONS(346),
    [sym__apos] = ACTIONS(346),
    [sym__quot] = ACTIONS(346),
    [sym__lsquo] = ACTIONS(346),
    [sym__rsquo] = ACTIONS(346),
    [sym__ldquo] = ACTIONS(346),
    [sym__rdquo] = ACTIONS(346),
    [sym__deg] = ACTIONS(346),
    [sym__plus] = ACTIONS(346),
    [sym__brvbar] = ACTIONS(346),
    [sym__vbar] = ACTIONS(346),
    [sym__amp] = ACTIONS(346),
    [sym__lt] = ACTIONS(346),
    [sym__gt] = ACTIONS(346),
    [sym__startsb] = ACTIONS(346),
    [sym__endsb] = ACTIONS(346),
    [sym__caret] = ACTIONS(346),
    [sym__asterisk] = ACTIONS(346),
    [sym__tilde] = ACTIONS(346),
    [sym__backslash] = ACTIONS(346),
    [sym__backtick] = ACTIONS(346),
    [sym__two_colons] = ACTIONS(346),
    [sym__two_semicolons] = ACTIONS(346),
    [sym__cpp] = ACTIONS(346),
    [sym__pp] = ACTIONS(346),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
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
  [53] = 5,
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
  [106] = 3,
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
  [152] = 2,
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
  [195] = 2,
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
  [238] = 4,
    ACTIONS(383), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(385), 1,
      aux_sym__note_block_token1,
    STATE(63), 1,
      aux_sym__note_block_repeat1,
    STATE(115), 1,
      sym_code_content,
  [251] = 3,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(389), 1,
      aux_sym__note_block_token1,
    STATE(67), 1,
      aux_sym__note_block_repeat1,
  [261] = 3,
    ACTIONS(391), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(393), 1,
      aux_sym__note_block_token1,
    STATE(72), 1,
      aux_sym__note_block_repeat1,
  [271] = 3,
    ACTIONS(395), 1,
      aux_sym_comment_token1,
    ACTIONS(398), 1,
      aux_sym_table_token1,
    STATE(60), 1,
      aux_sym_table_repeat1,
  [281] = 3,
    ACTIONS(400), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(402), 1,
      aux_sym__note_block_token1,
    STATE(65), 1,
      aux_sym__note_block_repeat1,
  [291] = 3,
    ACTIONS(404), 1,
      aux_sym_comment_token1,
    ACTIONS(406), 1,
      aux_sym_table_token1,
    STATE(60), 1,
      aux_sym_table_repeat1,
  [301] = 3,
    ACTIONS(408), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(410), 1,
      aux_sym__note_block_token1,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [311] = 3,
    ACTIONS(412), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(414), 1,
      aux_sym__note_block_token1,
    STATE(71), 1,
      aux_sym__note_block_repeat1,
  [321] = 3,
    ACTIONS(410), 1,
      aux_sym__note_block_token1,
    ACTIONS(416), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [331] = 3,
    ACTIONS(418), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(420), 1,
      aux_sym__note_block_token1,
    STATE(70), 1,
      aux_sym__note_block_repeat1,
  [341] = 3,
    ACTIONS(410), 1,
      aux_sym__note_block_token1,
    ACTIONS(422), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [351] = 3,
    ACTIONS(424), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(426), 1,
      aux_sym__note_block_token1,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [361] = 3,
    ACTIONS(429), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      aux_sym_table_token1,
    STATE(62), 1,
      aux_sym_table_repeat1,
  [371] = 3,
    ACTIONS(410), 1,
      aux_sym__note_block_token1,
    ACTIONS(433), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [381] = 3,
    ACTIONS(410), 1,
      aux_sym__note_block_token1,
    ACTIONS(435), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [391] = 3,
    ACTIONS(410), 1,
      aux_sym__note_block_token1,
    ACTIONS(437), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [401] = 2,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
    ACTIONS(441), 1,
      aux_sym_audio_token1,
  [408] = 2,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_GT_GT,
  [415] = 2,
    ACTIONS(447), 1,
      aux_sym_code_language_token1,
    STATE(93), 1,
      sym_code_language,
  [422] = 2,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    ACTIONS(451), 1,
      aux_sym_footnote_token1,
  [429] = 2,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    ACTIONS(455), 1,
      aux_sym_audio_token1,
  [436] = 2,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    ACTIONS(459), 1,
      aux_sym_kbd_token1,
  [443] = 2,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(463), 1,
      aux_sym_image_token2,
  [450] = 2,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    ACTIONS(467), 1,
      aux_sym_audio_token1,
  [457] = 2,
    ACTIONS(469), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 1,
      aux_sym_image_token2,
  [464] = 2,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    ACTIONS(475), 1,
      aux_sym_audio_token1,
  [471] = 1,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
  [475] = 1,
    ACTIONS(479), 1,
      anon_sym_RBRACK_LF,
  [479] = 1,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
  [483] = 1,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
  [487] = 1,
    ACTIONS(485), 1,
      aux_sym_code_language_token1,
  [491] = 1,
    ACTIONS(487), 1,
      aux_sym_image_token2,
  [495] = 1,
    ACTIONS(489), 1,
      aux_sym_code_language_token1,
  [499] = 1,
    ACTIONS(491), 1,
      anon_sym_LBRACK,
  [503] = 1,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
  [507] = 1,
    ACTIONS(495), 1,
      aux_sym__note_line_token1,
  [511] = 1,
    ACTIONS(497), 1,
      anon_sym_RBRACK_LF,
  [515] = 1,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
  [519] = 1,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
  [523] = 1,
    ACTIONS(503), 1,
      anon_sym_RBRACK_LF,
  [527] = 1,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
  [531] = 1,
    ACTIONS(507), 1,
      aux_sym_code_language_token1,
  [535] = 1,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
  [539] = 1,
    ACTIONS(511), 1,
      aux_sym_image_token2,
  [543] = 1,
    ACTIONS(513), 1,
      aux_sym_code_language_token1,
  [547] = 1,
    ACTIONS(515), 1,
      aux_sym_code_language_token1,
  [551] = 1,
    ACTIONS(517), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [555] = 1,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
  [559] = 1,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
  [563] = 1,
    ACTIONS(523), 1,
      anon_sym_GT_GT,
  [567] = 1,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
  [571] = 1,
    ACTIONS(527), 1,
      aux_sym_image_token1,
  [575] = 1,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
  [579] = 1,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
  [583] = 1,
    ACTIONS(533), 1,
      aux_sym__note_line_token1,
  [587] = 1,
    ACTIONS(535), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [591] = 1,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
  [595] = 1,
    ACTIONS(539), 1,
      aux_sym__note_line_token1,
  [599] = 1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [603] = 1,
    ACTIONS(543), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [607] = 1,
    ACTIONS(545), 1,
      aux_sym__note_line_token1,
  [611] = 1,
    ACTIONS(547), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [615] = 1,
    ACTIONS(549), 1,
      anon_sym_LF,
  [619] = 1,
    ACTIONS(551), 1,
      aux_sym__note_line_token1,
  [623] = 1,
    ACTIONS(553), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [627] = 1,
    ACTIONS(555), 1,
      aux_sym__note_line_token1,
  [631] = 1,
    ACTIONS(557), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(52)] = 0,
  [SMALL_STATE(53)] = 53,
  [SMALL_STATE(54)] = 106,
  [SMALL_STATE(55)] = 152,
  [SMALL_STATE(56)] = 195,
  [SMALL_STATE(57)] = 238,
  [SMALL_STATE(58)] = 251,
  [SMALL_STATE(59)] = 261,
  [SMALL_STATE(60)] = 271,
  [SMALL_STATE(61)] = 281,
  [SMALL_STATE(62)] = 291,
  [SMALL_STATE(63)] = 301,
  [SMALL_STATE(64)] = 311,
  [SMALL_STATE(65)] = 321,
  [SMALL_STATE(66)] = 331,
  [SMALL_STATE(67)] = 341,
  [SMALL_STATE(68)] = 351,
  [SMALL_STATE(69)] = 361,
  [SMALL_STATE(70)] = 371,
  [SMALL_STATE(71)] = 381,
  [SMALL_STATE(72)] = 391,
  [SMALL_STATE(73)] = 401,
  [SMALL_STATE(74)] = 408,
  [SMALL_STATE(75)] = 415,
  [SMALL_STATE(76)] = 422,
  [SMALL_STATE(77)] = 429,
  [SMALL_STATE(78)] = 436,
  [SMALL_STATE(79)] = 443,
  [SMALL_STATE(80)] = 450,
  [SMALL_STATE(81)] = 457,
  [SMALL_STATE(82)] = 464,
  [SMALL_STATE(83)] = 471,
  [SMALL_STATE(84)] = 475,
  [SMALL_STATE(85)] = 479,
  [SMALL_STATE(86)] = 483,
  [SMALL_STATE(87)] = 487,
  [SMALL_STATE(88)] = 491,
  [SMALL_STATE(89)] = 495,
  [SMALL_STATE(90)] = 499,
  [SMALL_STATE(91)] = 503,
  [SMALL_STATE(92)] = 507,
  [SMALL_STATE(93)] = 511,
  [SMALL_STATE(94)] = 515,
  [SMALL_STATE(95)] = 519,
  [SMALL_STATE(96)] = 523,
  [SMALL_STATE(97)] = 527,
  [SMALL_STATE(98)] = 531,
  [SMALL_STATE(99)] = 535,
  [SMALL_STATE(100)] = 539,
  [SMALL_STATE(101)] = 543,
  [SMALL_STATE(102)] = 547,
  [SMALL_STATE(103)] = 551,
  [SMALL_STATE(104)] = 555,
  [SMALL_STATE(105)] = 559,
  [SMALL_STATE(106)] = 563,
  [SMALL_STATE(107)] = 567,
  [SMALL_STATE(108)] = 571,
  [SMALL_STATE(109)] = 575,
  [SMALL_STATE(110)] = 579,
  [SMALL_STATE(111)] = 583,
  [SMALL_STATE(112)] = 587,
  [SMALL_STATE(113)] = 591,
  [SMALL_STATE(114)] = 595,
  [SMALL_STATE(115)] = 599,
  [SMALL_STATE(116)] = 603,
  [SMALL_STATE(117)] = 607,
  [SMALL_STATE(118)] = 611,
  [SMALL_STATE(119)] = 615,
  [SMALL_STATE(120)] = 619,
  [SMALL_STATE(121)] = 623,
  [SMALL_STATE(122)] = 627,
  [SMALL_STATE(123)] = 631,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 6, .production_id = 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 6, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(53),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(98),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(56),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(60),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(68),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [477] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
