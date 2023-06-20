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
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 43
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
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
  aux_sym_line_breaks_token1 = 22,
  anon_sym_LT_LT_LT_LF_LF = 23,
  anon_sym_image_COLON_COLON = 24,
  aux_sym_image_token1 = 25,
  anon_sym_LBRACK = 26,
  aux_sym_image_token2 = 27,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 28,
  aux_sym_table_token1 = 29,
  anon_sym_COLON_COLON = 30,
  anon_sym_audio_COLON_COLON = 31,
  aux_sym_audio_token1 = 32,
  anon_sym_RBRACK = 33,
  anon_sym_video_COLON_COLON = 34,
  anon_sym_LF_LF = 35,
  anon_sym_kbd_COLON_LBRACK = 36,
  aux_sym_kbd_token1 = 37,
  anon_sym_footnote_COLON_LBRACK = 38,
  aux_sym_footnote_token1 = 39,
  aux_sym_url_token1 = 40,
  anon_sym_LT_LT = 41,
  anon_sym_COMMA = 42,
  anon_sym_GT_GT = 43,
  anon_sym_xref_COLON = 44,
  sym_emphasis = 45,
  sym_strong = 46,
  sym_monospace = 47,
  sym_highlight = 48,
  sym_superscript = 49,
  sym_subscript = 50,
  anon_sym_pass_COLON_LBRACK = 51,
  anon_sym_LBRACEblank_RBRACE = 52,
  anon_sym_LBRACEempty_RBRACE = 53,
  anon_sym_LBRACEsp_RBRACE = 54,
  anon_sym_LBRACEnbsp_RBRACE = 55,
  anon_sym_LBRACEzwsp_RBRACE = 56,
  anon_sym_LBRACEwj_RBRACE = 57,
  anon_sym_LBRACEapos_RBRACE = 58,
  anon_sym_LBRACEquot_RBRACE = 59,
  anon_sym_LBRACElsquo_RBRACE = 60,
  anon_sym_LBRACErsquo_RBRACE = 61,
  anon_sym_LBRACEldquo_RBRACE = 62,
  anon_sym_LBRACErdquo_RBRACE = 63,
  anon_sym_LBRACEdeg_RBRACE = 64,
  anon_sym_LBRACEplus_RBRACE = 65,
  anon_sym_LBRACEbrvbar_RBRACE = 66,
  anon_sym_LBRACEvbar_RBRACE = 67,
  anon_sym_LBRACEamp_RBRACE = 68,
  anon_sym_LBRACElt_RBRACE = 69,
  anon_sym_LBRACEgt_RBRACE = 70,
  anon_sym_LBRACEstartsb_RBRACE = 71,
  anon_sym_LBRACEendsb_RBRACE = 72,
  anon_sym_LBRACEcaret_RBRACE = 73,
  anon_sym_LBRACEasterisk_RBRACE = 74,
  anon_sym_LBRACEtilde_RBRACE = 75,
  anon_sym_LBRACEbackslash_RBRACE = 76,
  anon_sym_LBRACEbacktick_RBRACE = 77,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 78,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 79,
  anon_sym_LBRACEcpp_RBRACE = 80,
  anon_sym_LBRACEpp_RBRACE = 81,
  sym_document = 82,
  sym__block = 83,
  sym__admonitions = 84,
  sym_note = 85,
  sym__note_line = 86,
  sym__note_block = 87,
  sym_tip = 88,
  sym__tip = 89,
  sym__tip_block = 90,
  sym_important = 91,
  sym__important = 92,
  sym__important_block = 93,
  sym_caution = 94,
  sym__caution = 95,
  sym__caution_block = 96,
  sym_warning = 97,
  sym__warning = 98,
  sym__warning_block = 99,
  sym_list = 100,
  aux_sym__list_item = 101,
  sym_code = 102,
  sym_code_language = 103,
  sym_code_content = 104,
  sym_comment = 105,
  sym_line_breaks = 106,
  sym_page_breaks = 107,
  sym_image = 108,
  sym_table = 109,
  sym_description_list = 110,
  sym_audio = 111,
  sym_video = 112,
  sym_paragraph = 113,
  sym__inline_element = 114,
  sym_kbd = 115,
  sym_footnote = 116,
  sym_url = 117,
  sym_xref = 118,
  sym__inline_xref = 119,
  sym__xref = 120,
  sym_passthrough = 121,
  sym_replacement = 122,
  aux_sym_document_repeat1 = 123,
  aux_sym__note_block_repeat1 = 124,
  aux_sym_table_repeat1 = 125,
  aux_sym_paragraph_repeat1 = 126,
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
  [aux_sym_line_breaks_token1] = "line_breaks_token1",
  [anon_sym_LT_LT_LT_LF_LF] = "<<<\n\n",
  [anon_sym_image_COLON_COLON] = "image::",
  [aux_sym_image_token1] = "image_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym_image_token2] = "image_token2",
  [anon_sym_PIPE_EQ_EQ_EQ_LF] = "|===\n",
  [aux_sym_table_token1] = "table_token1",
  [anon_sym_COLON_COLON] = ":: ",
  [anon_sym_audio_COLON_COLON] = "audio::",
  [aux_sym_audio_token1] = "audio_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_video_COLON_COLON] = "video::",
  [anon_sym_LF_LF] = "\n\n",
  [anon_sym_kbd_COLON_LBRACK] = "kbd:[",
  [aux_sym_kbd_token1] = "kbd_token1",
  [anon_sym_footnote_COLON_LBRACK] = "footnote:[",
  [aux_sym_footnote_token1] = "footnote_token1",
  [aux_sym_url_token1] = "url_token1",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_xref_COLON] = "xref:",
  [sym_emphasis] = "emphasis",
  [sym_strong] = "strong",
  [sym_monospace] = "monospace",
  [sym_highlight] = "highlight",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [anon_sym_pass_COLON_LBRACK] = "pass:[",
  [anon_sym_LBRACEblank_RBRACE] = "{blank}",
  [anon_sym_LBRACEempty_RBRACE] = "{empty}",
  [anon_sym_LBRACEsp_RBRACE] = "{sp}",
  [anon_sym_LBRACEnbsp_RBRACE] = "{nbsp}",
  [anon_sym_LBRACEzwsp_RBRACE] = "{zwsp}",
  [anon_sym_LBRACEwj_RBRACE] = "{wj}",
  [anon_sym_LBRACEapos_RBRACE] = "{apos}",
  [anon_sym_LBRACEquot_RBRACE] = "{quot}",
  [anon_sym_LBRACElsquo_RBRACE] = "{lsquo}",
  [anon_sym_LBRACErsquo_RBRACE] = "{rsquo}",
  [anon_sym_LBRACEldquo_RBRACE] = "{ldquo}",
  [anon_sym_LBRACErdquo_RBRACE] = "{rdquo}",
  [anon_sym_LBRACEdeg_RBRACE] = "{deg}",
  [anon_sym_LBRACEplus_RBRACE] = "{plus}",
  [anon_sym_LBRACEbrvbar_RBRACE] = "{brvbar}",
  [anon_sym_LBRACEvbar_RBRACE] = "{vbar}",
  [anon_sym_LBRACEamp_RBRACE] = "{amp}",
  [anon_sym_LBRACElt_RBRACE] = "{lt}",
  [anon_sym_LBRACEgt_RBRACE] = "{gt}",
  [anon_sym_LBRACEstartsb_RBRACE] = "{startsb}",
  [anon_sym_LBRACEendsb_RBRACE] = "{endsb}",
  [anon_sym_LBRACEcaret_RBRACE] = "{caret}",
  [anon_sym_LBRACEasterisk_RBRACE] = "{asterisk}",
  [anon_sym_LBRACEtilde_RBRACE] = "{tilde}",
  [anon_sym_LBRACEbackslash_RBRACE] = "{backslash}",
  [anon_sym_LBRACEbacktick_RBRACE] = "{backtick}",
  [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = "{two-colons}",
  [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = "{two-semicolons}",
  [anon_sym_LBRACEcpp_RBRACE] = "{cpp}",
  [anon_sym_LBRACEpp_RBRACE] = "{pp}",
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
  [sym_line_breaks] = "line_breaks",
  [sym_page_breaks] = "page_breaks",
  [sym_image] = "image",
  [sym_table] = "table",
  [sym_description_list] = "description_list",
  [sym_audio] = "audio",
  [sym_video] = "video",
  [sym_paragraph] = "paragraph",
  [sym__inline_element] = "_inline_element",
  [sym_kbd] = "kbd",
  [sym_footnote] = "footnote",
  [sym_url] = "url",
  [sym_xref] = "xref",
  [sym__inline_xref] = "_inline_xref",
  [sym__xref] = "_xref",
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
  [aux_sym_line_breaks_token1] = aux_sym_line_breaks_token1,
  [anon_sym_LT_LT_LT_LF_LF] = anon_sym_LT_LT_LT_LF_LF,
  [anon_sym_image_COLON_COLON] = anon_sym_image_COLON_COLON,
  [aux_sym_image_token1] = aux_sym_image_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_image_token2] = aux_sym_image_token2,
  [anon_sym_PIPE_EQ_EQ_EQ_LF] = anon_sym_PIPE_EQ_EQ_EQ_LF,
  [aux_sym_table_token1] = aux_sym_table_token1,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_audio_COLON_COLON] = anon_sym_audio_COLON_COLON,
  [aux_sym_audio_token1] = aux_sym_audio_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_video_COLON_COLON] = anon_sym_video_COLON_COLON,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
  [anon_sym_kbd_COLON_LBRACK] = anon_sym_kbd_COLON_LBRACK,
  [aux_sym_kbd_token1] = aux_sym_kbd_token1,
  [anon_sym_footnote_COLON_LBRACK] = anon_sym_footnote_COLON_LBRACK,
  [aux_sym_footnote_token1] = aux_sym_footnote_token1,
  [aux_sym_url_token1] = aux_sym_url_token1,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_xref_COLON] = anon_sym_xref_COLON,
  [sym_emphasis] = sym_emphasis,
  [sym_strong] = sym_strong,
  [sym_monospace] = sym_monospace,
  [sym_highlight] = sym_highlight,
  [sym_superscript] = sym_superscript,
  [sym_subscript] = sym_subscript,
  [anon_sym_pass_COLON_LBRACK] = anon_sym_pass_COLON_LBRACK,
  [anon_sym_LBRACEblank_RBRACE] = anon_sym_LBRACEblank_RBRACE,
  [anon_sym_LBRACEempty_RBRACE] = anon_sym_LBRACEempty_RBRACE,
  [anon_sym_LBRACEsp_RBRACE] = anon_sym_LBRACEsp_RBRACE,
  [anon_sym_LBRACEnbsp_RBRACE] = anon_sym_LBRACEnbsp_RBRACE,
  [anon_sym_LBRACEzwsp_RBRACE] = anon_sym_LBRACEzwsp_RBRACE,
  [anon_sym_LBRACEwj_RBRACE] = anon_sym_LBRACEwj_RBRACE,
  [anon_sym_LBRACEapos_RBRACE] = anon_sym_LBRACEapos_RBRACE,
  [anon_sym_LBRACEquot_RBRACE] = anon_sym_LBRACEquot_RBRACE,
  [anon_sym_LBRACElsquo_RBRACE] = anon_sym_LBRACElsquo_RBRACE,
  [anon_sym_LBRACErsquo_RBRACE] = anon_sym_LBRACErsquo_RBRACE,
  [anon_sym_LBRACEldquo_RBRACE] = anon_sym_LBRACEldquo_RBRACE,
  [anon_sym_LBRACErdquo_RBRACE] = anon_sym_LBRACErdquo_RBRACE,
  [anon_sym_LBRACEdeg_RBRACE] = anon_sym_LBRACEdeg_RBRACE,
  [anon_sym_LBRACEplus_RBRACE] = anon_sym_LBRACEplus_RBRACE,
  [anon_sym_LBRACEbrvbar_RBRACE] = anon_sym_LBRACEbrvbar_RBRACE,
  [anon_sym_LBRACEvbar_RBRACE] = anon_sym_LBRACEvbar_RBRACE,
  [anon_sym_LBRACEamp_RBRACE] = anon_sym_LBRACEamp_RBRACE,
  [anon_sym_LBRACElt_RBRACE] = anon_sym_LBRACElt_RBRACE,
  [anon_sym_LBRACEgt_RBRACE] = anon_sym_LBRACEgt_RBRACE,
  [anon_sym_LBRACEstartsb_RBRACE] = anon_sym_LBRACEstartsb_RBRACE,
  [anon_sym_LBRACEendsb_RBRACE] = anon_sym_LBRACEendsb_RBRACE,
  [anon_sym_LBRACEcaret_RBRACE] = anon_sym_LBRACEcaret_RBRACE,
  [anon_sym_LBRACEasterisk_RBRACE] = anon_sym_LBRACEasterisk_RBRACE,
  [anon_sym_LBRACEtilde_RBRACE] = anon_sym_LBRACEtilde_RBRACE,
  [anon_sym_LBRACEbackslash_RBRACE] = anon_sym_LBRACEbackslash_RBRACE,
  [anon_sym_LBRACEbacktick_RBRACE] = anon_sym_LBRACEbacktick_RBRACE,
  [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = anon_sym_LBRACEtwo_DASHcolons_RBRACE,
  [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
  [anon_sym_LBRACEcpp_RBRACE] = anon_sym_LBRACEcpp_RBRACE,
  [anon_sym_LBRACEpp_RBRACE] = anon_sym_LBRACEpp_RBRACE,
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
  [sym_line_breaks] = sym_line_breaks,
  [sym_page_breaks] = sym_page_breaks,
  [sym_image] = sym_image,
  [sym_table] = sym_table,
  [sym_description_list] = sym_description_list,
  [sym_audio] = sym_audio,
  [sym_video] = sym_video,
  [sym_paragraph] = sym_paragraph,
  [sym__inline_element] = sym__inline_element,
  [sym_kbd] = sym_kbd,
  [sym_footnote] = sym_footnote,
  [sym_url] = sym_url,
  [sym_xref] = sym_xref,
  [sym__inline_xref] = sym__inline_xref,
  [sym__xref] = sym__xref,
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
  [aux_sym_line_breaks_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_LT_LT_LF_LF] = {
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
  [anon_sym_PIPE_EQ_EQ_EQ_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_token1] = {
    .visible = false,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_video_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF_LF] = {
    .visible = true,
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
  [anon_sym_footnote_COLON_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_footnote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_token1] = {
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
  [sym_highlight] = {
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
  [anon_sym_LBRACEblank_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEempty_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEsp_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEnbsp_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEzwsp_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEwj_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEapos_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEquot_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACElsquo_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACErsquo_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEldquo_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACErdquo_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEdeg_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEplus_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEbrvbar_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEvbar_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEamp_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACElt_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEgt_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEstartsb_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEendsb_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEcaret_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEasterisk_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEtilde_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEbackslash_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEbacktick_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEcpp_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACEpp_RBRACE] = {
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
  [sym_line_breaks] = {
    .visible = true,
    .named = true,
  },
  [sym_page_breaks] = {
    .visible = true,
    .named = true,
  },
  [sym_image] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
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
  [sym_kbd] = {
    .visible = true,
    .named = true,
  },
  [sym_footnote] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
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
  [125] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(275);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '*') ADVANCE(264);
      if (lookahead == ',') ADVANCE(470);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead == 'C') ADVANCE(312);
      if (lookahead == 'I') ADVANCE(320);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == 'T') ADVANCE(317);
      if (lookahead == 'W') ADVANCE(313);
      if (lookahead == '[') ADVANCE(447);
      if (lookahead == ']') ADVANCE(456);
      if (lookahead == '^') ADVANCE(270);
      if (lookahead == '`') ADVANCE(271);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'k') ADVANCE(339);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead == 'v') ADVANCE(350);
      if (lookahead == 'x') ADVANCE(358);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '~') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(442);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(282);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(443);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(450);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(299);
      if (lookahead == ':') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead == ':') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == ':') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(290);
      if (lookahead == ':') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == ':') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(288);
      if (lookahead == ':') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(458);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '*') ADVANCE(269);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '[') ADVANCE(448);
      if (lookahead == '^') ADVANCE(79);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'k') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 'x') ADVANCE(417);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '~') ADVANCE(272);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(1);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(46);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(273);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(479);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '*') ADVANCE(269);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '[') ADVANCE(448);
      if (lookahead == '^') ADVANCE(79);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'k') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 'x') ADVANCE(417);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '~') ADVANCE(272);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(277);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(277);
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(277);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(277);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(277);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(434);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(453);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(476);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(273);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(273);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(273);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(265);
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(477);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 58:
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'T') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(147);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(467);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(464);
      if (lookahead == '^') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(465);
      if (lookahead == '_') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '^') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '_') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(454);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(444);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(457);
      END_STATE();
    case 72:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '[') ADVANCE(459);
      END_STATE();
    case 73:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '[') ADVANCE(486);
      END_STATE();
    case 74:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '[') ADVANCE(462);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(454);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(444);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(457);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '^') ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '_') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '`') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'A') ADVANCE(107);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'A') ADVANCE(101);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'A') ADVANCE(94);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'G') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'M') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'N') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'N') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'N') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'N') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'U') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == ']') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 115:
      if (lookahead == '<') ADVANCE(469);
      END_STATE();
    case 116:
      if (lookahead == '<') ADVANCE(468);
      END_STATE();
    case 117:
      if (lookahead == '=') ADVANCE(452);
      END_STATE();
    case 118:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 121:
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 122:
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 123:
      if (lookahead == '>') ADVANCE(471);
      END_STATE();
    case 124:
      if (lookahead == '[') ADVANCE(459);
      END_STATE();
    case 125:
      if (lookahead == '[') ADVANCE(486);
      END_STATE();
    case 126:
      if (lookahead == '[') ADVANCE(462);
      END_STATE();
    case 127:
      if (lookahead == '[') ADVANCE(446);
      if (lookahead == ']') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 128:
      if (lookahead == ']') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 129:
      if (lookahead == ']') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 130:
      if (lookahead == '^') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 132:
      if (lookahead == '`') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'g') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == 'q') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == 'v') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(165);
      if (lookahead == 'z') ADVANCE(231);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(216);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(250);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(257);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 145:
      if (lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 160:
      if (lookahead == 'h') ADVANCE(260);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'w') ADVANCE(181);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 165:
      if (lookahead == 'j') ADVANCE(237);
      END_STATE();
    case 166:
      if (lookahead == 'k') ADVANCE(208);
      END_STATE();
    case 167:
      if (lookahead == 'k') ADVANCE(247);
      END_STATE();
    case 168:
      if (lookahead == 'k') ADVANCE(258);
      END_STATE();
    case 169:
      if (lookahead == 'k') ADVANCE(259);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == 'p') ADVANCE(182);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 198:
      if (lookahead == 'q') ADVANCE(225);
      END_STATE();
    case 199:
      if (lookahead == 'q') ADVANCE(227);
      END_STATE();
    case 200:
      if (lookahead == 'q') ADVANCE(228);
      END_STATE();
    case 201:
      if (lookahead == 'q') ADVANCE(229);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 230:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 231:
      if (lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 232:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 233:
      if (lookahead == '}') ADVANCE(505);
      END_STATE();
    case 234:
      if (lookahead == '}') ADVANCE(504);
      END_STATE();
    case 235:
      if (lookahead == '}') ADVANCE(516);
      END_STATE();
    case 236:
      if (lookahead == '}') ADVANCE(489);
      END_STATE();
    case 237:
      if (lookahead == '}') ADVANCE(492);
      END_STATE();
    case 238:
      if (lookahead == '}') ADVANCE(503);
      END_STATE();
    case 239:
      if (lookahead == '}') ADVANCE(515);
      END_STATE();
    case 240:
      if (lookahead == '}') ADVANCE(499);
      END_STATE();
    case 241:
      if (lookahead == '}') ADVANCE(493);
      END_STATE();
    case 242:
      if (lookahead == '}') ADVANCE(490);
      END_STATE();
    case 243:
      if (lookahead == '}') ADVANCE(500);
      END_STATE();
    case 244:
      if (lookahead == '}') ADVANCE(494);
      END_STATE();
    case 245:
      if (lookahead == '}') ADVANCE(502);
      END_STATE();
    case 246:
      if (lookahead == '}') ADVANCE(491);
      END_STATE();
    case 247:
      if (lookahead == '}') ADVANCE(487);
      END_STATE();
    case 248:
      if (lookahead == '}') ADVANCE(508);
      END_STATE();
    case 249:
      if (lookahead == '}') ADVANCE(488);
      END_STATE();
    case 250:
      if (lookahead == '}') ADVANCE(507);
      END_STATE();
    case 251:
      if (lookahead == '}') ADVANCE(497);
      END_STATE();
    case 252:
      if (lookahead == '}') ADVANCE(495);
      END_STATE();
    case 253:
      if (lookahead == '}') ADVANCE(498);
      END_STATE();
    case 254:
      if (lookahead == '}') ADVANCE(496);
      END_STATE();
    case 255:
      if (lookahead == '}') ADVANCE(510);
      END_STATE();
    case 256:
      if (lookahead == '}') ADVANCE(501);
      END_STATE();
    case 257:
      if (lookahead == '}') ADVANCE(506);
      END_STATE();
    case 258:
      if (lookahead == '}') ADVANCE(509);
      END_STATE();
    case 259:
      if (lookahead == '}') ADVANCE(512);
      END_STATE();
    case 260:
      if (lookahead == '}') ADVANCE(511);
      END_STATE();
    case 261:
      if (lookahead == '}') ADVANCE(513);
      END_STATE();
    case 262:
      if (lookahead == '}') ADVANCE(514);
      END_STATE();
    case 263:
      if (lookahead == '~') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 264:
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 265:
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(21);
      END_STATE();
    case 266:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 268:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 269:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 270:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 271:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 272:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 273:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 274:
      if (eof) ADVANCE(275);
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'C') ADVANCE(371);
      if (lookahead == 'I') ADVANCE(379);
      if (lookahead == 'N') ADVANCE(384);
      if (lookahead == 'T') ADVANCE(376);
      if (lookahead == 'W') ADVANCE(372);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == ']') ADVANCE(6);
      if (lookahead == '^') ADVANCE(79);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'k') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 'v') ADVANCE(409);
      if (lookahead == 'x') ADVANCE(417);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '|') ADVANCE(122);
      if (lookahead == '~') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'A') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'A') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'A') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'E') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'G') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'I') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'I') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'I') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'M') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'N') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'N') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'N') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'N') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'O') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'O') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'O') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'P') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'P') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'R') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'R') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'T') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'T') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'T') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'T') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'U') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'b') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'd') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'd') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'd') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'f') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'g') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'm') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'n') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 's') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 's') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (lookahead == 'u') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '.') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '_') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(37);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(473);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'A') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'A') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'A') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'G') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'M') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'N') ADVANCE(375);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'N') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'N') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'N') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(383);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(373);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'U') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'g') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(421);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 's') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 's') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 't') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 't') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(39);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(73);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(70);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(41);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(74);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(71);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(45);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(451);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(441);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(441);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(441);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '|') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(441);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(298);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_table_token1);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '\n') ADVANCE(450);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(27);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '_') ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(46);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(479);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(478);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '`') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '^') ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 274},
  [2] = {.lex_state = 274},
  [3] = {.lex_state = 274},
  [4] = {.lex_state = 274},
  [5] = {.lex_state = 274},
  [6] = {.lex_state = 274},
  [7] = {.lex_state = 274},
  [8] = {.lex_state = 274},
  [9] = {.lex_state = 274},
  [10] = {.lex_state = 274},
  [11] = {.lex_state = 274},
  [12] = {.lex_state = 274},
  [13] = {.lex_state = 274},
  [14] = {.lex_state = 274},
  [15] = {.lex_state = 274},
  [16] = {.lex_state = 274},
  [17] = {.lex_state = 274},
  [18] = {.lex_state = 274},
  [19] = {.lex_state = 274},
  [20] = {.lex_state = 274},
  [21] = {.lex_state = 274},
  [22] = {.lex_state = 274},
  [23] = {.lex_state = 274},
  [24] = {.lex_state = 274},
  [25] = {.lex_state = 274},
  [26] = {.lex_state = 274},
  [27] = {.lex_state = 274},
  [28] = {.lex_state = 274},
  [29] = {.lex_state = 274},
  [30] = {.lex_state = 274},
  [31] = {.lex_state = 274},
  [32] = {.lex_state = 274},
  [33] = {.lex_state = 274},
  [34] = {.lex_state = 274},
  [35] = {.lex_state = 274},
  [36] = {.lex_state = 274},
  [37] = {.lex_state = 274},
  [38] = {.lex_state = 274},
  [39] = {.lex_state = 274},
  [40] = {.lex_state = 274},
  [41] = {.lex_state = 274},
  [42] = {.lex_state = 274},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 439},
  [61] = {.lex_state = 439},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 439},
  [76] = {.lex_state = 449},
  [77] = {.lex_state = 127},
  [78] = {.lex_state = 266},
  [79] = {.lex_state = 127},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 449},
  [82] = {.lex_state = 127},
  [83] = {.lex_state = 128},
  [84] = {.lex_state = 127},
  [85] = {.lex_state = 129},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 274},
  [89] = {.lex_state = 266},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 449},
  [92] = {.lex_state = 266},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 266},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 266},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 266},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 127},
  [101] = {.lex_state = 449},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 445},
  [104] = {.lex_state = 440},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 127},
  [107] = {.lex_state = 274},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 127},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 127},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 274},
  [125] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_title] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH_LF] = ACTIONS(1),
    [anon_sym_TIP_COLON] = ACTIONS(1),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(1),
    [anon_sym_CAUTION_COLON] = ACTIONS(1),
    [anon_sym_WARNING_COLON] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [aux_sym_code_language_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym_line_breaks_token1] = ACTIONS(1),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(1),
    [anon_sym_image_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(1),
    [aux_sym_table_token1] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_audio_COLON_COLON] = ACTIONS(1),
    [aux_sym_audio_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_video_COLON_COLON] = ACTIONS(1),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(1),
    [aux_sym_kbd_token1] = ACTIONS(1),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(1),
    [aux_sym_footnote_token1] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_xref_COLON] = ACTIONS(1),
    [sym_strong] = ACTIONS(1),
    [sym_monospace] = ACTIONS(1),
    [sym_highlight] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(97),
    [sym__block] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(29),
    [sym__note_block] = STATE(29),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(30),
    [sym__tip_block] = STATE(30),
    [sym_important] = STATE(3),
    [sym__important] = STATE(31),
    [sym__important_block] = STATE(31),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(32),
    [sym__caution_block] = STATE(32),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(33),
    [sym__warning_block] = STATE(33),
    [sym_list] = STATE(3),
    [aux_sym__list_item] = STATE(74),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(43),
    [sym_kbd] = STATE(43),
    [sym_footnote] = STATE(43),
    [sym_url] = STATE(43),
    [sym_xref] = STATE(43),
    [sym__inline_xref] = STATE(54),
    [sym__xref] = STATE(54),
    [sym_passthrough] = STATE(43),
    [sym_replacement] = STATE(43),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(43),
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
    [aux_sym_line_breaks_token1] = ACTIONS(35),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(37),
    [anon_sym_image_COLON_COLON] = ACTIONS(39),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(41),
    [anon_sym_audio_COLON_COLON] = ACTIONS(43),
    [anon_sym_video_COLON_COLON] = ACTIONS(45),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(47),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(49),
    [aux_sym_url_token1] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_xref_COLON] = ACTIONS(55),
    [sym_emphasis] = ACTIONS(57),
    [sym_strong] = ACTIONS(57),
    [sym_monospace] = ACTIONS(57),
    [sym_highlight] = ACTIONS(59),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(59),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(63),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(29),
    [sym__note_block] = STATE(29),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(30),
    [sym__tip_block] = STATE(30),
    [sym_important] = STATE(2),
    [sym__important] = STATE(31),
    [sym__important_block] = STATE(31),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(32),
    [sym__caution_block] = STATE(32),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(33),
    [sym__warning_block] = STATE(33),
    [sym_list] = STATE(2),
    [aux_sym__list_item] = STATE(74),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(43),
    [sym_kbd] = STATE(43),
    [sym_footnote] = STATE(43),
    [sym_url] = STATE(43),
    [sym_xref] = STATE(43),
    [sym__inline_xref] = STATE(54),
    [sym__xref] = STATE(54),
    [sym_passthrough] = STATE(43),
    [sym_replacement] = STATE(43),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(43),
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
    [aux_sym_line_breaks_token1] = ACTIONS(112),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(115),
    [anon_sym_image_COLON_COLON] = ACTIONS(118),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(121),
    [anon_sym_audio_COLON_COLON] = ACTIONS(124),
    [anon_sym_video_COLON_COLON] = ACTIONS(127),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(130),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(133),
    [aux_sym_url_token1] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(139),
    [anon_sym_xref_COLON] = ACTIONS(142),
    [sym_emphasis] = ACTIONS(145),
    [sym_strong] = ACTIONS(145),
    [sym_monospace] = ACTIONS(145),
    [sym_highlight] = ACTIONS(148),
    [sym_superscript] = ACTIONS(145),
    [sym_subscript] = ACTIONS(148),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(154),
  },
  [3] = {
    [sym__block] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(29),
    [sym__note_block] = STATE(29),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(30),
    [sym__tip_block] = STATE(30),
    [sym_important] = STATE(2),
    [sym__important] = STATE(31),
    [sym__important_block] = STATE(31),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(32),
    [sym__caution_block] = STATE(32),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(33),
    [sym__warning_block] = STATE(33),
    [sym_list] = STATE(2),
    [aux_sym__list_item] = STATE(74),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(43),
    [sym_kbd] = STATE(43),
    [sym_footnote] = STATE(43),
    [sym_url] = STATE(43),
    [sym_xref] = STATE(43),
    [sym__inline_xref] = STATE(54),
    [sym__xref] = STATE(54),
    [sym_passthrough] = STATE(43),
    [sym_replacement] = STATE(43),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_title] = ACTIONS(159),
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
    [aux_sym_line_breaks_token1] = ACTIONS(35),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(37),
    [anon_sym_image_COLON_COLON] = ACTIONS(39),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(41),
    [anon_sym_audio_COLON_COLON] = ACTIONS(43),
    [anon_sym_video_COLON_COLON] = ACTIONS(45),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(47),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(49),
    [aux_sym_url_token1] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_xref_COLON] = ACTIONS(55),
    [sym_emphasis] = ACTIONS(57),
    [sym_strong] = ACTIONS(57),
    [sym_monospace] = ACTIONS(57),
    [sym_highlight] = ACTIONS(59),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(59),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(63),
  },
  [4] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(161),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(161),
    [anon_sym_image_COLON_COLON] = ACTIONS(161),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(161),
    [anon_sym_audio_COLON_COLON] = ACTIONS(161),
    [anon_sym_video_COLON_COLON] = ACTIONS(161),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(161),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(161),
    [aux_sym_url_token1] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_xref_COLON] = ACTIONS(163),
    [sym_emphasis] = ACTIONS(163),
    [sym_strong] = ACTIONS(163),
    [sym_monospace] = ACTIONS(163),
    [sym_highlight] = ACTIONS(161),
    [sym_superscript] = ACTIONS(163),
    [sym_subscript] = ACTIONS(161),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(161),
  },
  [5] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(165),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(165),
    [anon_sym_image_COLON_COLON] = ACTIONS(165),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(165),
    [anon_sym_audio_COLON_COLON] = ACTIONS(165),
    [anon_sym_video_COLON_COLON] = ACTIONS(165),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(165),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(165),
    [aux_sym_url_token1] = ACTIONS(167),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_xref_COLON] = ACTIONS(167),
    [sym_emphasis] = ACTIONS(167),
    [sym_strong] = ACTIONS(167),
    [sym_monospace] = ACTIONS(167),
    [sym_highlight] = ACTIONS(165),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(165),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(165),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(165),
  },
  [6] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(169),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(169),
    [anon_sym_image_COLON_COLON] = ACTIONS(169),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(169),
    [anon_sym_audio_COLON_COLON] = ACTIONS(169),
    [anon_sym_video_COLON_COLON] = ACTIONS(169),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(169),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(169),
    [aux_sym_url_token1] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_xref_COLON] = ACTIONS(171),
    [sym_emphasis] = ACTIONS(171),
    [sym_strong] = ACTIONS(171),
    [sym_monospace] = ACTIONS(171),
    [sym_highlight] = ACTIONS(169),
    [sym_superscript] = ACTIONS(171),
    [sym_subscript] = ACTIONS(169),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(169),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(169),
  },
  [7] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(173),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(173),
    [anon_sym_image_COLON_COLON] = ACTIONS(173),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(173),
    [anon_sym_audio_COLON_COLON] = ACTIONS(173),
    [anon_sym_video_COLON_COLON] = ACTIONS(173),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(173),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(173),
    [aux_sym_url_token1] = ACTIONS(175),
    [anon_sym_LT_LT] = ACTIONS(175),
    [anon_sym_xref_COLON] = ACTIONS(175),
    [sym_emphasis] = ACTIONS(175),
    [sym_strong] = ACTIONS(175),
    [sym_monospace] = ACTIONS(175),
    [sym_highlight] = ACTIONS(173),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(173),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(173),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(173),
  },
  [8] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(177),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(177),
    [anon_sym_image_COLON_COLON] = ACTIONS(177),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(177),
    [anon_sym_audio_COLON_COLON] = ACTIONS(177),
    [anon_sym_video_COLON_COLON] = ACTIONS(177),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(177),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(177),
    [aux_sym_url_token1] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_xref_COLON] = ACTIONS(179),
    [sym_emphasis] = ACTIONS(179),
    [sym_strong] = ACTIONS(179),
    [sym_monospace] = ACTIONS(179),
    [sym_highlight] = ACTIONS(177),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(177),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(177),
  },
  [9] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(181),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(181),
    [anon_sym_image_COLON_COLON] = ACTIONS(181),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(181),
    [anon_sym_audio_COLON_COLON] = ACTIONS(181),
    [anon_sym_video_COLON_COLON] = ACTIONS(181),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(181),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(181),
    [aux_sym_url_token1] = ACTIONS(183),
    [anon_sym_LT_LT] = ACTIONS(183),
    [anon_sym_xref_COLON] = ACTIONS(183),
    [sym_emphasis] = ACTIONS(183),
    [sym_strong] = ACTIONS(183),
    [sym_monospace] = ACTIONS(183),
    [sym_highlight] = ACTIONS(181),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(181),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(181),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(181),
  },
  [10] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(185),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(185),
    [anon_sym_image_COLON_COLON] = ACTIONS(185),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(185),
    [anon_sym_audio_COLON_COLON] = ACTIONS(185),
    [anon_sym_video_COLON_COLON] = ACTIONS(185),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(185),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(185),
    [aux_sym_url_token1] = ACTIONS(187),
    [anon_sym_LT_LT] = ACTIONS(187),
    [anon_sym_xref_COLON] = ACTIONS(187),
    [sym_emphasis] = ACTIONS(187),
    [sym_strong] = ACTIONS(187),
    [sym_monospace] = ACTIONS(187),
    [sym_highlight] = ACTIONS(185),
    [sym_superscript] = ACTIONS(187),
    [sym_subscript] = ACTIONS(185),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(185),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(185),
  },
  [11] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(189),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(189),
    [anon_sym_image_COLON_COLON] = ACTIONS(189),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(189),
    [anon_sym_audio_COLON_COLON] = ACTIONS(189),
    [anon_sym_video_COLON_COLON] = ACTIONS(189),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(189),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(189),
    [aux_sym_url_token1] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_xref_COLON] = ACTIONS(191),
    [sym_emphasis] = ACTIONS(191),
    [sym_strong] = ACTIONS(191),
    [sym_monospace] = ACTIONS(191),
    [sym_highlight] = ACTIONS(189),
    [sym_superscript] = ACTIONS(191),
    [sym_subscript] = ACTIONS(189),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(189),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(189),
  },
  [12] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(193),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(193),
    [anon_sym_image_COLON_COLON] = ACTIONS(193),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(193),
    [anon_sym_audio_COLON_COLON] = ACTIONS(193),
    [anon_sym_video_COLON_COLON] = ACTIONS(193),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(193),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(193),
    [aux_sym_url_token1] = ACTIONS(195),
    [anon_sym_LT_LT] = ACTIONS(195),
    [anon_sym_xref_COLON] = ACTIONS(195),
    [sym_emphasis] = ACTIONS(195),
    [sym_strong] = ACTIONS(195),
    [sym_monospace] = ACTIONS(195),
    [sym_highlight] = ACTIONS(193),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(193),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(193),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(193),
  },
  [13] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(197),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(197),
    [anon_sym_image_COLON_COLON] = ACTIONS(197),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(197),
    [anon_sym_audio_COLON_COLON] = ACTIONS(197),
    [anon_sym_video_COLON_COLON] = ACTIONS(197),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(197),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(197),
    [aux_sym_url_token1] = ACTIONS(199),
    [anon_sym_LT_LT] = ACTIONS(199),
    [anon_sym_xref_COLON] = ACTIONS(199),
    [sym_emphasis] = ACTIONS(199),
    [sym_strong] = ACTIONS(199),
    [sym_monospace] = ACTIONS(199),
    [sym_highlight] = ACTIONS(197),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(197),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(197),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(197),
  },
  [14] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(201),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(201),
    [anon_sym_image_COLON_COLON] = ACTIONS(201),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(201),
    [anon_sym_audio_COLON_COLON] = ACTIONS(201),
    [anon_sym_video_COLON_COLON] = ACTIONS(201),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(201),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(201),
    [aux_sym_url_token1] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(203),
    [anon_sym_xref_COLON] = ACTIONS(203),
    [sym_emphasis] = ACTIONS(203),
    [sym_strong] = ACTIONS(203),
    [sym_monospace] = ACTIONS(203),
    [sym_highlight] = ACTIONS(201),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(201),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(201),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(201),
  },
  [15] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(205),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(205),
    [anon_sym_image_COLON_COLON] = ACTIONS(205),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(205),
    [anon_sym_audio_COLON_COLON] = ACTIONS(205),
    [anon_sym_video_COLON_COLON] = ACTIONS(205),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(205),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(205),
    [aux_sym_url_token1] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_xref_COLON] = ACTIONS(207),
    [sym_emphasis] = ACTIONS(207),
    [sym_strong] = ACTIONS(207),
    [sym_monospace] = ACTIONS(207),
    [sym_highlight] = ACTIONS(205),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(205),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(205),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(205),
  },
  [16] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(209),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(209),
    [anon_sym_image_COLON_COLON] = ACTIONS(209),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(209),
    [anon_sym_audio_COLON_COLON] = ACTIONS(209),
    [anon_sym_video_COLON_COLON] = ACTIONS(209),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(209),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(209),
    [aux_sym_url_token1] = ACTIONS(211),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_xref_COLON] = ACTIONS(211),
    [sym_emphasis] = ACTIONS(211),
    [sym_strong] = ACTIONS(211),
    [sym_monospace] = ACTIONS(211),
    [sym_highlight] = ACTIONS(209),
    [sym_superscript] = ACTIONS(211),
    [sym_subscript] = ACTIONS(209),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(209),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(209),
  },
  [17] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(213),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(213),
    [anon_sym_image_COLON_COLON] = ACTIONS(213),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(213),
    [anon_sym_audio_COLON_COLON] = ACTIONS(213),
    [anon_sym_video_COLON_COLON] = ACTIONS(213),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(213),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(213),
    [aux_sym_url_token1] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(215),
    [anon_sym_xref_COLON] = ACTIONS(215),
    [sym_emphasis] = ACTIONS(215),
    [sym_strong] = ACTIONS(215),
    [sym_monospace] = ACTIONS(215),
    [sym_highlight] = ACTIONS(213),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(213),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(213),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(213),
  },
  [18] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(217),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(217),
    [anon_sym_image_COLON_COLON] = ACTIONS(217),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(217),
    [anon_sym_audio_COLON_COLON] = ACTIONS(217),
    [anon_sym_video_COLON_COLON] = ACTIONS(217),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(217),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(217),
    [aux_sym_url_token1] = ACTIONS(219),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_xref_COLON] = ACTIONS(219),
    [sym_emphasis] = ACTIONS(219),
    [sym_strong] = ACTIONS(219),
    [sym_monospace] = ACTIONS(219),
    [sym_highlight] = ACTIONS(217),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(217),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(217),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(217),
  },
  [19] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(221),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(221),
    [anon_sym_image_COLON_COLON] = ACTIONS(221),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(221),
    [anon_sym_audio_COLON_COLON] = ACTIONS(221),
    [anon_sym_video_COLON_COLON] = ACTIONS(221),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(221),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(221),
    [aux_sym_url_token1] = ACTIONS(223),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_xref_COLON] = ACTIONS(223),
    [sym_emphasis] = ACTIONS(223),
    [sym_strong] = ACTIONS(223),
    [sym_monospace] = ACTIONS(223),
    [sym_highlight] = ACTIONS(221),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(221),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(221),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(221),
  },
  [20] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(225),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(225),
    [anon_sym_image_COLON_COLON] = ACTIONS(225),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(225),
    [anon_sym_audio_COLON_COLON] = ACTIONS(225),
    [anon_sym_video_COLON_COLON] = ACTIONS(225),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(225),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(225),
    [aux_sym_url_token1] = ACTIONS(227),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_xref_COLON] = ACTIONS(227),
    [sym_emphasis] = ACTIONS(227),
    [sym_strong] = ACTIONS(227),
    [sym_monospace] = ACTIONS(227),
    [sym_highlight] = ACTIONS(225),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(225),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(225),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(225),
  },
  [21] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(229),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(229),
    [anon_sym_image_COLON_COLON] = ACTIONS(229),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(229),
    [anon_sym_audio_COLON_COLON] = ACTIONS(229),
    [anon_sym_video_COLON_COLON] = ACTIONS(229),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(229),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(229),
    [aux_sym_url_token1] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_xref_COLON] = ACTIONS(231),
    [sym_emphasis] = ACTIONS(231),
    [sym_strong] = ACTIONS(231),
    [sym_monospace] = ACTIONS(231),
    [sym_highlight] = ACTIONS(229),
    [sym_superscript] = ACTIONS(231),
    [sym_subscript] = ACTIONS(229),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(229),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(229),
  },
  [22] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(233),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(233),
    [anon_sym_image_COLON_COLON] = ACTIONS(233),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(233),
    [anon_sym_audio_COLON_COLON] = ACTIONS(233),
    [anon_sym_video_COLON_COLON] = ACTIONS(233),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(233),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(233),
    [aux_sym_url_token1] = ACTIONS(235),
    [anon_sym_LT_LT] = ACTIONS(235),
    [anon_sym_xref_COLON] = ACTIONS(235),
    [sym_emphasis] = ACTIONS(235),
    [sym_strong] = ACTIONS(235),
    [sym_monospace] = ACTIONS(235),
    [sym_highlight] = ACTIONS(233),
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(233),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(233),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(233),
  },
  [23] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(237),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(237),
    [anon_sym_image_COLON_COLON] = ACTIONS(237),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(237),
    [anon_sym_audio_COLON_COLON] = ACTIONS(237),
    [anon_sym_video_COLON_COLON] = ACTIONS(237),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(237),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(237),
    [aux_sym_url_token1] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_xref_COLON] = ACTIONS(239),
    [sym_emphasis] = ACTIONS(239),
    [sym_strong] = ACTIONS(239),
    [sym_monospace] = ACTIONS(239),
    [sym_highlight] = ACTIONS(237),
    [sym_superscript] = ACTIONS(239),
    [sym_subscript] = ACTIONS(237),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(237),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(237),
  },
  [24] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(241),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(241),
    [anon_sym_image_COLON_COLON] = ACTIONS(241),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(241),
    [anon_sym_audio_COLON_COLON] = ACTIONS(241),
    [anon_sym_video_COLON_COLON] = ACTIONS(241),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(241),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(241),
    [aux_sym_url_token1] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_xref_COLON] = ACTIONS(243),
    [sym_emphasis] = ACTIONS(243),
    [sym_strong] = ACTIONS(243),
    [sym_monospace] = ACTIONS(243),
    [sym_highlight] = ACTIONS(241),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(241),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(241),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(241),
  },
  [25] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(245),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(245),
    [anon_sym_image_COLON_COLON] = ACTIONS(245),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(245),
    [anon_sym_audio_COLON_COLON] = ACTIONS(245),
    [anon_sym_video_COLON_COLON] = ACTIONS(245),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(245),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(245),
    [aux_sym_url_token1] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_xref_COLON] = ACTIONS(247),
    [sym_emphasis] = ACTIONS(247),
    [sym_strong] = ACTIONS(247),
    [sym_monospace] = ACTIONS(247),
    [sym_highlight] = ACTIONS(245),
    [sym_superscript] = ACTIONS(247),
    [sym_subscript] = ACTIONS(245),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(245),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(245),
  },
  [26] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(249),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(249),
    [anon_sym_image_COLON_COLON] = ACTIONS(249),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(249),
    [anon_sym_audio_COLON_COLON] = ACTIONS(249),
    [anon_sym_video_COLON_COLON] = ACTIONS(249),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(249),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(249),
    [aux_sym_url_token1] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_xref_COLON] = ACTIONS(251),
    [sym_emphasis] = ACTIONS(251),
    [sym_strong] = ACTIONS(251),
    [sym_monospace] = ACTIONS(251),
    [sym_highlight] = ACTIONS(249),
    [sym_superscript] = ACTIONS(251),
    [sym_subscript] = ACTIONS(249),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(249),
  },
  [27] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(253),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(253),
    [anon_sym_image_COLON_COLON] = ACTIONS(253),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(253),
    [anon_sym_audio_COLON_COLON] = ACTIONS(253),
    [anon_sym_video_COLON_COLON] = ACTIONS(253),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(253),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(253),
    [aux_sym_url_token1] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_xref_COLON] = ACTIONS(255),
    [sym_emphasis] = ACTIONS(255),
    [sym_strong] = ACTIONS(255),
    [sym_monospace] = ACTIONS(255),
    [sym_highlight] = ACTIONS(253),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(253),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(253),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(253),
  },
  [28] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(257),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(257),
    [anon_sym_image_COLON_COLON] = ACTIONS(257),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(257),
    [anon_sym_audio_COLON_COLON] = ACTIONS(257),
    [anon_sym_video_COLON_COLON] = ACTIONS(257),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(257),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(257),
    [aux_sym_url_token1] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_xref_COLON] = ACTIONS(259),
    [sym_emphasis] = ACTIONS(259),
    [sym_strong] = ACTIONS(259),
    [sym_monospace] = ACTIONS(259),
    [sym_highlight] = ACTIONS(257),
    [sym_superscript] = ACTIONS(259),
    [sym_subscript] = ACTIONS(257),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(257),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(257),
  },
  [29] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(261),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(261),
    [anon_sym_image_COLON_COLON] = ACTIONS(261),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(261),
    [anon_sym_audio_COLON_COLON] = ACTIONS(261),
    [anon_sym_video_COLON_COLON] = ACTIONS(261),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(261),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(261),
    [aux_sym_url_token1] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_xref_COLON] = ACTIONS(263),
    [sym_emphasis] = ACTIONS(263),
    [sym_strong] = ACTIONS(263),
    [sym_monospace] = ACTIONS(263),
    [sym_highlight] = ACTIONS(261),
    [sym_superscript] = ACTIONS(263),
    [sym_subscript] = ACTIONS(261),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(261),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(261),
  },
  [30] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(265),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(265),
    [anon_sym_image_COLON_COLON] = ACTIONS(265),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(265),
    [anon_sym_audio_COLON_COLON] = ACTIONS(265),
    [anon_sym_video_COLON_COLON] = ACTIONS(265),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(265),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(265),
    [aux_sym_url_token1] = ACTIONS(267),
    [anon_sym_LT_LT] = ACTIONS(267),
    [anon_sym_xref_COLON] = ACTIONS(267),
    [sym_emphasis] = ACTIONS(267),
    [sym_strong] = ACTIONS(267),
    [sym_monospace] = ACTIONS(267),
    [sym_highlight] = ACTIONS(265),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(265),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(265),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(265),
  },
  [31] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(269),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(269),
    [anon_sym_image_COLON_COLON] = ACTIONS(269),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(269),
    [anon_sym_audio_COLON_COLON] = ACTIONS(269),
    [anon_sym_video_COLON_COLON] = ACTIONS(269),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(269),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(269),
    [aux_sym_url_token1] = ACTIONS(271),
    [anon_sym_LT_LT] = ACTIONS(271),
    [anon_sym_xref_COLON] = ACTIONS(271),
    [sym_emphasis] = ACTIONS(271),
    [sym_strong] = ACTIONS(271),
    [sym_monospace] = ACTIONS(271),
    [sym_highlight] = ACTIONS(269),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(269),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(269),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(269),
  },
  [32] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(273),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(273),
    [anon_sym_image_COLON_COLON] = ACTIONS(273),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(273),
    [anon_sym_audio_COLON_COLON] = ACTIONS(273),
    [anon_sym_video_COLON_COLON] = ACTIONS(273),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(273),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(273),
    [aux_sym_url_token1] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(275),
    [anon_sym_xref_COLON] = ACTIONS(275),
    [sym_emphasis] = ACTIONS(275),
    [sym_strong] = ACTIONS(275),
    [sym_monospace] = ACTIONS(275),
    [sym_highlight] = ACTIONS(273),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(273),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(273),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(273),
  },
  [33] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(277),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(277),
    [anon_sym_image_COLON_COLON] = ACTIONS(277),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(277),
    [anon_sym_audio_COLON_COLON] = ACTIONS(277),
    [anon_sym_video_COLON_COLON] = ACTIONS(277),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(277),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(277),
    [aux_sym_url_token1] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(279),
    [anon_sym_xref_COLON] = ACTIONS(279),
    [sym_emphasis] = ACTIONS(279),
    [sym_strong] = ACTIONS(279),
    [sym_monospace] = ACTIONS(279),
    [sym_highlight] = ACTIONS(277),
    [sym_superscript] = ACTIONS(279),
    [sym_subscript] = ACTIONS(277),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(277),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(277),
  },
  [34] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(281),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(281),
    [anon_sym_image_COLON_COLON] = ACTIONS(281),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(281),
    [anon_sym_audio_COLON_COLON] = ACTIONS(281),
    [anon_sym_video_COLON_COLON] = ACTIONS(281),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(281),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(281),
    [aux_sym_url_token1] = ACTIONS(283),
    [anon_sym_LT_LT] = ACTIONS(283),
    [anon_sym_xref_COLON] = ACTIONS(283),
    [sym_emphasis] = ACTIONS(283),
    [sym_strong] = ACTIONS(283),
    [sym_monospace] = ACTIONS(283),
    [sym_highlight] = ACTIONS(281),
    [sym_superscript] = ACTIONS(283),
    [sym_subscript] = ACTIONS(281),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(281),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(281),
  },
  [35] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(285),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(285),
    [anon_sym_image_COLON_COLON] = ACTIONS(285),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(285),
    [anon_sym_audio_COLON_COLON] = ACTIONS(285),
    [anon_sym_video_COLON_COLON] = ACTIONS(285),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(285),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(285),
    [aux_sym_url_token1] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(287),
    [anon_sym_xref_COLON] = ACTIONS(287),
    [sym_emphasis] = ACTIONS(287),
    [sym_strong] = ACTIONS(287),
    [sym_monospace] = ACTIONS(287),
    [sym_highlight] = ACTIONS(285),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(285),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(285),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(285),
  },
  [36] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(289),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(289),
    [anon_sym_image_COLON_COLON] = ACTIONS(289),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(289),
    [anon_sym_audio_COLON_COLON] = ACTIONS(289),
    [anon_sym_video_COLON_COLON] = ACTIONS(289),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(289),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(289),
    [aux_sym_url_token1] = ACTIONS(291),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_xref_COLON] = ACTIONS(291),
    [sym_emphasis] = ACTIONS(291),
    [sym_strong] = ACTIONS(291),
    [sym_monospace] = ACTIONS(291),
    [sym_highlight] = ACTIONS(289),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(289),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(289),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(289),
  },
  [37] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(293),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(293),
    [anon_sym_image_COLON_COLON] = ACTIONS(293),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(293),
    [anon_sym_audio_COLON_COLON] = ACTIONS(293),
    [anon_sym_video_COLON_COLON] = ACTIONS(293),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(293),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(293),
    [aux_sym_url_token1] = ACTIONS(295),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_xref_COLON] = ACTIONS(295),
    [sym_emphasis] = ACTIONS(295),
    [sym_strong] = ACTIONS(295),
    [sym_monospace] = ACTIONS(295),
    [sym_highlight] = ACTIONS(293),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(293),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(293),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(293),
  },
  [38] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(297),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(297),
    [anon_sym_image_COLON_COLON] = ACTIONS(297),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(297),
    [anon_sym_audio_COLON_COLON] = ACTIONS(297),
    [anon_sym_video_COLON_COLON] = ACTIONS(297),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(297),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(297),
    [aux_sym_url_token1] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_xref_COLON] = ACTIONS(299),
    [sym_emphasis] = ACTIONS(299),
    [sym_strong] = ACTIONS(299),
    [sym_monospace] = ACTIONS(299),
    [sym_highlight] = ACTIONS(297),
    [sym_superscript] = ACTIONS(299),
    [sym_subscript] = ACTIONS(297),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(297),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(297),
  },
  [39] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(301),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(301),
    [anon_sym_image_COLON_COLON] = ACTIONS(301),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(301),
    [anon_sym_audio_COLON_COLON] = ACTIONS(301),
    [anon_sym_video_COLON_COLON] = ACTIONS(301),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(301),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(301),
    [aux_sym_url_token1] = ACTIONS(303),
    [anon_sym_LT_LT] = ACTIONS(303),
    [anon_sym_xref_COLON] = ACTIONS(303),
    [sym_emphasis] = ACTIONS(303),
    [sym_strong] = ACTIONS(303),
    [sym_monospace] = ACTIONS(303),
    [sym_highlight] = ACTIONS(301),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(301),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(301),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(301),
  },
  [40] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(305),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(305),
    [anon_sym_image_COLON_COLON] = ACTIONS(305),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(305),
    [anon_sym_audio_COLON_COLON] = ACTIONS(305),
    [anon_sym_video_COLON_COLON] = ACTIONS(305),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(305),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(305),
    [aux_sym_url_token1] = ACTIONS(307),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_xref_COLON] = ACTIONS(307),
    [sym_emphasis] = ACTIONS(307),
    [sym_strong] = ACTIONS(307),
    [sym_monospace] = ACTIONS(307),
    [sym_highlight] = ACTIONS(305),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(305),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(305),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(305),
  },
  [41] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(309),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(309),
    [anon_sym_image_COLON_COLON] = ACTIONS(309),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(309),
    [anon_sym_audio_COLON_COLON] = ACTIONS(309),
    [anon_sym_video_COLON_COLON] = ACTIONS(309),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(309),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(309),
    [aux_sym_url_token1] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_xref_COLON] = ACTIONS(311),
    [sym_emphasis] = ACTIONS(311),
    [sym_strong] = ACTIONS(311),
    [sym_monospace] = ACTIONS(311),
    [sym_highlight] = ACTIONS(309),
    [sym_superscript] = ACTIONS(311),
    [sym_subscript] = ACTIONS(309),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(309),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(309),
  },
  [42] = {
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
    [aux_sym_line_breaks_token1] = ACTIONS(313),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(313),
    [anon_sym_image_COLON_COLON] = ACTIONS(313),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(313),
    [anon_sym_audio_COLON_COLON] = ACTIONS(313),
    [anon_sym_video_COLON_COLON] = ACTIONS(313),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(313),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(313),
    [aux_sym_url_token1] = ACTIONS(315),
    [anon_sym_LT_LT] = ACTIONS(315),
    [anon_sym_xref_COLON] = ACTIONS(315),
    [sym_emphasis] = ACTIONS(315),
    [sym_strong] = ACTIONS(315),
    [sym_monospace] = ACTIONS(315),
    [sym_highlight] = ACTIONS(313),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(313),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(313),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(313),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(51), 1,
      aux_sym_url_token1,
    ACTIONS(53), 1,
      anon_sym_LT_LT,
    ACTIONS(55), 1,
      anon_sym_xref_COLON,
    ACTIONS(319), 1,
      anon_sym_LF_LF,
    ACTIONS(321), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(323), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(325), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(54), 2,
      sym__inline_xref,
      sym__xref,
    ACTIONS(317), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(44), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(327), 30,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [77] = 11,
    ACTIONS(332), 1,
      anon_sym_LF_LF,
    ACTIONS(334), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(337), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(340), 1,
      aux_sym_url_token1,
    ACTIONS(343), 1,
      anon_sym_LT_LT,
    ACTIONS(346), 1,
      anon_sym_xref_COLON,
    ACTIONS(349), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(54), 2,
      sym__inline_xref,
      sym__xref,
    ACTIONS(329), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(44), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(352), 30,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [154] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_LF_LF,
    ACTIONS(355), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [206] = 3,
    ACTIONS(363), 1,
      anon_sym_COLON_COLON,
    ACTIONS(365), 1,
      anon_sym_LF_LF,
    ACTIONS(361), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [258] = 2,
    ACTIONS(369), 1,
      anon_sym_LF_LF,
    ACTIONS(367), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [307] = 2,
    ACTIONS(373), 1,
      anon_sym_LF_LF,
    ACTIONS(371), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [356] = 2,
    ACTIONS(377), 1,
      anon_sym_LF_LF,
    ACTIONS(375), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [405] = 2,
    ACTIONS(381), 1,
      anon_sym_LF_LF,
    ACTIONS(379), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [454] = 2,
    ACTIONS(385), 1,
      anon_sym_LF_LF,
    ACTIONS(383), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [503] = 2,
    ACTIONS(389), 1,
      anon_sym_LF_LF,
    ACTIONS(387), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [552] = 2,
    ACTIONS(393), 1,
      anon_sym_LF_LF,
    ACTIONS(391), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [601] = 2,
    ACTIONS(397), 1,
      anon_sym_LF_LF,
    ACTIONS(395), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [650] = 2,
    ACTIONS(401), 1,
      anon_sym_LF_LF,
    ACTIONS(399), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [699] = 2,
    ACTIONS(405), 1,
      anon_sym_LF_LF,
    ACTIONS(403), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [748] = 2,
    ACTIONS(409), 1,
      anon_sym_LF_LF,
    ACTIONS(407), 43,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
      anon_sym_pass_COLON_LBRACK,
      anon_sym_LBRACEblank_RBRACE,
      anon_sym_LBRACEempty_RBRACE,
      anon_sym_LBRACEsp_RBRACE,
      anon_sym_LBRACEnbsp_RBRACE,
      anon_sym_LBRACEzwsp_RBRACE,
      anon_sym_LBRACEwj_RBRACE,
      anon_sym_LBRACEapos_RBRACE,
      anon_sym_LBRACEquot_RBRACE,
      anon_sym_LBRACElsquo_RBRACE,
      anon_sym_LBRACErsquo_RBRACE,
      anon_sym_LBRACEldquo_RBRACE,
      anon_sym_LBRACErdquo_RBRACE,
      anon_sym_LBRACEdeg_RBRACE,
      anon_sym_LBRACEplus_RBRACE,
      anon_sym_LBRACEbrvbar_RBRACE,
      anon_sym_LBRACEvbar_RBRACE,
      anon_sym_LBRACEamp_RBRACE,
      anon_sym_LBRACElt_RBRACE,
      anon_sym_LBRACEgt_RBRACE,
      anon_sym_LBRACEstartsb_RBRACE,
      anon_sym_LBRACEendsb_RBRACE,
      anon_sym_LBRACEcaret_RBRACE,
      anon_sym_LBRACEasterisk_RBRACE,
      anon_sym_LBRACEtilde_RBRACE,
      anon_sym_LBRACEbackslash_RBRACE,
      anon_sym_LBRACEbacktick_RBRACE,
      anon_sym_LBRACEtwo_DASHcolons_RBRACE,
      anon_sym_LBRACEtwo_DASHsemicolons_RBRACE,
      anon_sym_LBRACEcpp_RBRACE,
      anon_sym_LBRACEpp_RBRACE,
  [797] = 4,
    ACTIONS(411), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(413), 1,
      aux_sym__note_block_token1,
    STATE(64), 1,
      aux_sym__note_block_repeat1,
    STATE(118), 1,
      sym_code_content,
  [810] = 3,
    ACTIONS(415), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(417), 1,
      aux_sym__note_block_token1,
    STATE(62), 1,
      aux_sym__note_block_repeat1,
  [820] = 3,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      aux_sym_table_token1,
    STATE(75), 1,
      aux_sym_table_repeat1,
  [830] = 3,
    ACTIONS(423), 1,
      aux_sym_comment_token1,
    ACTIONS(425), 1,
      aux_sym_table_token1,
    STATE(60), 1,
      aux_sym_table_repeat1,
  [840] = 3,
    ACTIONS(427), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(429), 1,
      aux_sym__note_block_token1,
    STATE(62), 1,
      aux_sym__note_block_repeat1,
  [850] = 3,
    ACTIONS(417), 1,
      aux_sym__note_block_token1,
    ACTIONS(432), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(62), 1,
      aux_sym__note_block_repeat1,
  [860] = 3,
    ACTIONS(417), 1,
      aux_sym__note_block_token1,
    ACTIONS(434), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(62), 1,
      aux_sym__note_block_repeat1,
  [870] = 3,
    ACTIONS(436), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(438), 1,
      aux_sym__note_block_token1,
    STATE(63), 1,
      aux_sym__note_block_repeat1,
  [880] = 3,
    ACTIONS(440), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(442), 1,
      aux_sym__note_block_token1,
    STATE(67), 1,
      aux_sym__note_block_repeat1,
  [890] = 3,
    ACTIONS(417), 1,
      aux_sym__note_block_token1,
    ACTIONS(444), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(62), 1,
      aux_sym__note_block_repeat1,
  [900] = 3,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(448), 1,
      aux_sym__list_item_token1,
    STATE(68), 1,
      aux_sym__list_item,
  [910] = 3,
    ACTIONS(451), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(453), 1,
      aux_sym__note_block_token1,
    STATE(72), 1,
      aux_sym__note_block_repeat1,
  [920] = 3,
    ACTIONS(455), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(457), 1,
      aux_sym__note_block_token1,
    STATE(59), 1,
      aux_sym__note_block_repeat1,
  [930] = 3,
    ACTIONS(459), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(461), 1,
      aux_sym__note_block_token1,
    STATE(73), 1,
      aux_sym__note_block_repeat1,
  [940] = 3,
    ACTIONS(417), 1,
      aux_sym__note_block_token1,
    ACTIONS(463), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(62), 1,
      aux_sym__note_block_repeat1,
  [950] = 3,
    ACTIONS(417), 1,
      aux_sym__note_block_token1,
    ACTIONS(465), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(62), 1,
      aux_sym__note_block_repeat1,
  [960] = 3,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(469), 1,
      aux_sym__list_item_token1,
    STATE(68), 1,
      aux_sym__list_item,
  [970] = 3,
    ACTIONS(471), 1,
      aux_sym_comment_token1,
    ACTIONS(474), 1,
      aux_sym_table_token1,
    STATE(75), 1,
      aux_sym_table_repeat1,
  [980] = 2,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_image_token2,
  [987] = 2,
    ACTIONS(480), 1,
      aux_sym_audio_token1,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
  [994] = 2,
    ACTIONS(484), 1,
      aux_sym_code_language_token1,
    STATE(124), 1,
      sym_code_language,
  [1001] = 2,
    ACTIONS(486), 1,
      aux_sym_audio_token1,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
  [1008] = 2,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_GT_GT,
  [1015] = 2,
    ACTIONS(494), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      aux_sym_image_token2,
  [1022] = 2,
    ACTIONS(498), 1,
      aux_sym_audio_token1,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
  [1029] = 2,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    ACTIONS(504), 1,
      aux_sym_kbd_token1,
  [1036] = 2,
    ACTIONS(506), 1,
      aux_sym_audio_token1,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
  [1043] = 2,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    ACTIONS(512), 1,
      aux_sym_footnote_token1,
  [1050] = 1,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
  [1054] = 1,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
  [1058] = 1,
    ACTIONS(518), 1,
      anon_sym_RBRACK_LF,
  [1062] = 1,
    ACTIONS(520), 1,
      aux_sym_code_language_token1,
  [1066] = 1,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
  [1070] = 1,
    ACTIONS(524), 1,
      aux_sym_image_token2,
  [1074] = 1,
    ACTIONS(526), 1,
      aux_sym_code_language_token1,
  [1078] = 1,
    ACTIONS(528), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1082] = 1,
    ACTIONS(530), 1,
      aux_sym_code_language_token1,
  [1086] = 1,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
  [1090] = 1,
    ACTIONS(534), 1,
      aux_sym_code_language_token1,
  [1094] = 1,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
  [1098] = 1,
    ACTIONS(538), 1,
      aux_sym_code_language_token1,
  [1102] = 1,
    ACTIONS(540), 1,
      aux_sym__note_line_token1,
  [1106] = 1,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
  [1110] = 1,
    ACTIONS(544), 1,
      aux_sym_image_token2,
  [1114] = 1,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
  [1118] = 1,
    ACTIONS(548), 1,
      aux_sym_image_token1,
  [1122] = 1,
    ACTIONS(550), 1,
      aux_sym_comment_token1,
  [1126] = 1,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
  [1130] = 1,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
  [1134] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACK_LF,
  [1138] = 1,
    ACTIONS(558), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1142] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
  [1146] = 1,
    ACTIONS(562), 1,
      aux_sym__note_line_token1,
  [1150] = 1,
    ACTIONS(564), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1154] = 1,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
  [1158] = 1,
    ACTIONS(568), 1,
      aux_sym__note_line_token1,
  [1162] = 1,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
  [1166] = 1,
    ACTIONS(572), 1,
      anon_sym_GT_GT,
  [1170] = 1,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
  [1174] = 1,
    ACTIONS(576), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1178] = 1,
    ACTIONS(578), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1182] = 1,
    ACTIONS(580), 1,
      anon_sym_LBRACK,
  [1186] = 1,
    ACTIONS(582), 1,
      aux_sym__note_line_token1,
  [1190] = 1,
    ACTIONS(584), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1194] = 1,
    ACTIONS(586), 1,
      aux_sym__note_line_token1,
  [1198] = 1,
    ACTIONS(588), 1,
      aux_sym__note_line_token1,
  [1202] = 1,
    ACTIONS(590), 1,
      anon_sym_RBRACK_LF,
  [1206] = 1,
    ACTIONS(592), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(43)] = 0,
  [SMALL_STATE(44)] = 77,
  [SMALL_STATE(45)] = 154,
  [SMALL_STATE(46)] = 206,
  [SMALL_STATE(47)] = 258,
  [SMALL_STATE(48)] = 307,
  [SMALL_STATE(49)] = 356,
  [SMALL_STATE(50)] = 405,
  [SMALL_STATE(51)] = 454,
  [SMALL_STATE(52)] = 503,
  [SMALL_STATE(53)] = 552,
  [SMALL_STATE(54)] = 601,
  [SMALL_STATE(55)] = 650,
  [SMALL_STATE(56)] = 699,
  [SMALL_STATE(57)] = 748,
  [SMALL_STATE(58)] = 797,
  [SMALL_STATE(59)] = 810,
  [SMALL_STATE(60)] = 820,
  [SMALL_STATE(61)] = 830,
  [SMALL_STATE(62)] = 840,
  [SMALL_STATE(63)] = 850,
  [SMALL_STATE(64)] = 860,
  [SMALL_STATE(65)] = 870,
  [SMALL_STATE(66)] = 880,
  [SMALL_STATE(67)] = 890,
  [SMALL_STATE(68)] = 900,
  [SMALL_STATE(69)] = 910,
  [SMALL_STATE(70)] = 920,
  [SMALL_STATE(71)] = 930,
  [SMALL_STATE(72)] = 940,
  [SMALL_STATE(73)] = 950,
  [SMALL_STATE(74)] = 960,
  [SMALL_STATE(75)] = 970,
  [SMALL_STATE(76)] = 980,
  [SMALL_STATE(77)] = 987,
  [SMALL_STATE(78)] = 994,
  [SMALL_STATE(79)] = 1001,
  [SMALL_STATE(80)] = 1008,
  [SMALL_STATE(81)] = 1015,
  [SMALL_STATE(82)] = 1022,
  [SMALL_STATE(83)] = 1029,
  [SMALL_STATE(84)] = 1036,
  [SMALL_STATE(85)] = 1043,
  [SMALL_STATE(86)] = 1050,
  [SMALL_STATE(87)] = 1054,
  [SMALL_STATE(88)] = 1058,
  [SMALL_STATE(89)] = 1062,
  [SMALL_STATE(90)] = 1066,
  [SMALL_STATE(91)] = 1070,
  [SMALL_STATE(92)] = 1074,
  [SMALL_STATE(93)] = 1078,
  [SMALL_STATE(94)] = 1082,
  [SMALL_STATE(95)] = 1086,
  [SMALL_STATE(96)] = 1090,
  [SMALL_STATE(97)] = 1094,
  [SMALL_STATE(98)] = 1098,
  [SMALL_STATE(99)] = 1102,
  [SMALL_STATE(100)] = 1106,
  [SMALL_STATE(101)] = 1110,
  [SMALL_STATE(102)] = 1114,
  [SMALL_STATE(103)] = 1118,
  [SMALL_STATE(104)] = 1122,
  [SMALL_STATE(105)] = 1126,
  [SMALL_STATE(106)] = 1130,
  [SMALL_STATE(107)] = 1134,
  [SMALL_STATE(108)] = 1138,
  [SMALL_STATE(109)] = 1142,
  [SMALL_STATE(110)] = 1146,
  [SMALL_STATE(111)] = 1150,
  [SMALL_STATE(112)] = 1154,
  [SMALL_STATE(113)] = 1158,
  [SMALL_STATE(114)] = 1162,
  [SMALL_STATE(115)] = 1166,
  [SMALL_STATE(116)] = 1170,
  [SMALL_STATE(117)] = 1174,
  [SMALL_STATE(118)] = 1178,
  [SMALL_STATE(119)] = 1182,
  [SMALL_STATE(120)] = 1186,
  [SMALL_STATE(121)] = 1190,
  [SMALL_STATE(122)] = 1194,
  [SMALL_STATE(123)] = 1198,
  [SMALL_STATE(124)] = 1202,
  [SMALL_STATE(125)] = 1206,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(44),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(83),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(85),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(45),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(89),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(92),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(94),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(52),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(62),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item, 2),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item, 2), SHIFT_REPEAT(68),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(75),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [536] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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
