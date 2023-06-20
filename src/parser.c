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
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 42
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
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
  aux_sym_code_token2 = 18,
  anon_sym_RBRACK_LF = 19,
  anon_sym_SLASH_SLASH = 20,
  aux_sym_comment_token1 = 21,
  anon_sym_LT_LT_LT_LF_LF = 22,
  anon_sym_image_COLON_COLON = 23,
  aux_sym_image_token1 = 24,
  anon_sym_LBRACK = 25,
  aux_sym_image_token2 = 26,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 27,
  aux_sym_table_token1 = 28,
  anon_sym_COLON_COLON = 29,
  anon_sym_audio_COLON_COLON = 30,
  aux_sym_audio_token1 = 31,
  anon_sym_RBRACK = 32,
  anon_sym_video_COLON_COLON = 33,
  anon_sym_LF_LF = 34,
  anon_sym_kbd_COLON_LBRACK = 35,
  aux_sym_kbd_token1 = 36,
  anon_sym_footnote_COLON_LBRACK = 37,
  aux_sym_footnote_token1 = 38,
  aux_sym_url_token1 = 39,
  anon_sym_LT_LT = 40,
  anon_sym_COMMA = 41,
  anon_sym_GT_GT = 42,
  anon_sym_xref_COLON = 43,
  sym_emphasis = 44,
  sym_strong = 45,
  sym_monospace = 46,
  sym_superscript = 47,
  sym_subscript = 48,
  anon_sym_pass_COLON_LBRACK = 49,
  anon_sym_LBRACEblank_RBRACE = 50,
  anon_sym_LBRACEempty_RBRACE = 51,
  anon_sym_LBRACEsp_RBRACE = 52,
  anon_sym_LBRACEnbsp_RBRACE = 53,
  anon_sym_LBRACEzwsp_RBRACE = 54,
  anon_sym_LBRACEwj_RBRACE = 55,
  anon_sym_LBRACEapos_RBRACE = 56,
  anon_sym_LBRACEquot_RBRACE = 57,
  anon_sym_LBRACElsquo_RBRACE = 58,
  anon_sym_LBRACErsquo_RBRACE = 59,
  anon_sym_LBRACEldquo_RBRACE = 60,
  anon_sym_LBRACErdquo_RBRACE = 61,
  anon_sym_LBRACEdeg_RBRACE = 62,
  anon_sym_LBRACEplus_RBRACE = 63,
  anon_sym_LBRACEbrvbar_RBRACE = 64,
  anon_sym_LBRACEvbar_RBRACE = 65,
  anon_sym_LBRACEamp_RBRACE = 66,
  anon_sym_LBRACElt_RBRACE = 67,
  anon_sym_LBRACEgt_RBRACE = 68,
  anon_sym_LBRACEstartsb_RBRACE = 69,
  anon_sym_LBRACEendsb_RBRACE = 70,
  anon_sym_LBRACEcaret_RBRACE = 71,
  anon_sym_LBRACEasterisk_RBRACE = 72,
  anon_sym_LBRACEtilde_RBRACE = 73,
  anon_sym_LBRACEbackslash_RBRACE = 74,
  anon_sym_LBRACEbacktick_RBRACE = 75,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 76,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 77,
  anon_sym_LBRACEcpp_RBRACE = 78,
  anon_sym_LBRACEpp_RBRACE = 79,
  sym_document = 80,
  sym__block = 81,
  sym__admonitions = 82,
  sym_note = 83,
  sym__note_line = 84,
  sym__note_block = 85,
  sym_tip = 86,
  sym__tip = 87,
  sym__tip_block = 88,
  sym_important = 89,
  sym__important = 90,
  sym__important_block = 91,
  sym_caution = 92,
  sym__caution = 93,
  sym__caution_block = 94,
  sym_warning = 95,
  sym__warning = 96,
  sym__warning_block = 97,
  sym_list = 98,
  aux_sym__list_item = 99,
  sym_code = 100,
  sym_comment = 101,
  sym_page_breaks = 102,
  sym_image = 103,
  sym_table = 104,
  sym_description_list = 105,
  sym_audio = 106,
  sym_video = 107,
  sym_paragraph = 108,
  sym__inline_element = 109,
  sym_kbd = 110,
  sym_footnote = 111,
  sym_url = 112,
  sym_xref = 113,
  sym__inline_xref = 114,
  sym__xref = 115,
  sym_passthrough = 116,
  sym_replacement = 117,
  aux_sym_document_repeat1 = 118,
  aux_sym__note_block_repeat1 = 119,
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
  [anon_sym_LF] = "\n",
  [aux_sym__list_item_token1] = "_list_item_token1",
  [aux_sym_code_token1] = "code_token1",
  [aux_sym_code_token2] = "code_token2",
  [anon_sym_RBRACK_LF] = "]\n",
  [anon_sym_SLASH_SLASH] = "// ",
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_comment] = "comment",
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
  [aux_sym_code_token2] = aux_sym_code_token2,
  [anon_sym_RBRACK_LF] = anon_sym_RBRACK_LF,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_comment] = sym_comment,
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
  [aux_sym_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK_LF] = {
    .visible = true,
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
  [sym_comment] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(262);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(298);
      if (lookahead == 'I') ADVANCE(306);
      if (lookahead == 'N') ADVANCE(311);
      if (lookahead == 'T') ADVANCE(303);
      if (lookahead == 'W') ADVANCE(299);
      if (lookahead == '[') ADVANCE(433);
      if (lookahead == ']') ADVANCE(442);
      if (lookahead == '^') ADVANCE(257);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == 'v') ADVANCE(336);
      if (lookahead == 'x') ADVANCE(344);
      if (lookahead == '{') ADVANCE(123);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(269);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(269);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(429);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(436);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ':') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == ':') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == ':') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == ':') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == ':') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(275);
      if (lookahead == ':') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '[') ADVANCE(434);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 'k') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead == '{') ADVANCE(123);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '[') ADVANCE(434);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 'k') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead == '{') ADVANCE(123);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(421);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(439);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(276);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 45:
      if (lookahead == ',') ADVANCE(285);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(73);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(137);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(453);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(450);
      if (lookahead == '^') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(451);
      if (lookahead == '_') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(452);
      if (lookahead == '`') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '^') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '_') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '`') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(440);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(430);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(443);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '[') ADVANCE(445);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '[') ADVANCE(469);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '[') ADVANCE(448);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(440);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(430);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(443);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '^') ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '_') ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '`') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(97);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(91);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(84);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'G') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'I') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'I') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'I') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'P') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'P') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ']') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ']') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ']') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ']') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 105:
      if (lookahead == '<') ADVANCE(455);
      END_STATE();
    case 106:
      if (lookahead == '<') ADVANCE(454);
      END_STATE();
    case 107:
      if (lookahead == '=') ADVANCE(438);
      END_STATE();
    case 108:
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == '=') ADVANCE(4);
      END_STATE();
    case 111:
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == '>') ADVANCE(457);
      END_STATE();
    case 114:
      if (lookahead == '[') ADVANCE(445);
      END_STATE();
    case 115:
      if (lookahead == '[') ADVANCE(469);
      END_STATE();
    case 116:
      if (lookahead == '[') ADVANCE(448);
      END_STATE();
    case 117:
      if (lookahead == '[') ADVANCE(432);
      if (lookahead == ']') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 118:
      if (lookahead == ']') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 119:
      if (lookahead == ']') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 120:
      if (lookahead == '^') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == '`') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'g') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 'q') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'v') ADVANCE(134);
      if (lookahead == 'w') ADVANCE(155);
      if (lookahead == 'z') ADVANCE(221);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(206);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(240);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(247);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 155:
      if (lookahead == 'j') ADVANCE(227);
      END_STATE();
    case 156:
      if (lookahead == 'k') ADVANCE(198);
      END_STATE();
    case 157:
      if (lookahead == 'k') ADVANCE(237);
      END_STATE();
    case 158:
      if (lookahead == 'k') ADVANCE(248);
      END_STATE();
    case 159:
      if (lookahead == 'k') ADVANCE(249);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 188:
      if (lookahead == 'q') ADVANCE(215);
      END_STATE();
    case 189:
      if (lookahead == 'q') ADVANCE(217);
      END_STATE();
    case 190:
      if (lookahead == 'q') ADVANCE(218);
      END_STATE();
    case 191:
      if (lookahead == 'q') ADVANCE(219);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 220:
      if (lookahead == 'v') ADVANCE(135);
      END_STATE();
    case 221:
      if (lookahead == 'w') ADVANCE(207);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 223:
      if (lookahead == '}') ADVANCE(488);
      END_STATE();
    case 224:
      if (lookahead == '}') ADVANCE(487);
      END_STATE();
    case 225:
      if (lookahead == '}') ADVANCE(499);
      END_STATE();
    case 226:
      if (lookahead == '}') ADVANCE(472);
      END_STATE();
    case 227:
      if (lookahead == '}') ADVANCE(475);
      END_STATE();
    case 228:
      if (lookahead == '}') ADVANCE(486);
      END_STATE();
    case 229:
      if (lookahead == '}') ADVANCE(498);
      END_STATE();
    case 230:
      if (lookahead == '}') ADVANCE(482);
      END_STATE();
    case 231:
      if (lookahead == '}') ADVANCE(476);
      END_STATE();
    case 232:
      if (lookahead == '}') ADVANCE(473);
      END_STATE();
    case 233:
      if (lookahead == '}') ADVANCE(483);
      END_STATE();
    case 234:
      if (lookahead == '}') ADVANCE(477);
      END_STATE();
    case 235:
      if (lookahead == '}') ADVANCE(485);
      END_STATE();
    case 236:
      if (lookahead == '}') ADVANCE(474);
      END_STATE();
    case 237:
      if (lookahead == '}') ADVANCE(470);
      END_STATE();
    case 238:
      if (lookahead == '}') ADVANCE(491);
      END_STATE();
    case 239:
      if (lookahead == '}') ADVANCE(471);
      END_STATE();
    case 240:
      if (lookahead == '}') ADVANCE(490);
      END_STATE();
    case 241:
      if (lookahead == '}') ADVANCE(480);
      END_STATE();
    case 242:
      if (lookahead == '}') ADVANCE(478);
      END_STATE();
    case 243:
      if (lookahead == '}') ADVANCE(481);
      END_STATE();
    case 244:
      if (lookahead == '}') ADVANCE(479);
      END_STATE();
    case 245:
      if (lookahead == '}') ADVANCE(493);
      END_STATE();
    case 246:
      if (lookahead == '}') ADVANCE(484);
      END_STATE();
    case 247:
      if (lookahead == '}') ADVANCE(489);
      END_STATE();
    case 248:
      if (lookahead == '}') ADVANCE(492);
      END_STATE();
    case 249:
      if (lookahead == '}') ADVANCE(495);
      END_STATE();
    case 250:
      if (lookahead == '}') ADVANCE(494);
      END_STATE();
    case 251:
      if (lookahead == '}') ADVANCE(496);
      END_STATE();
    case 252:
      if (lookahead == '}') ADVANCE(497);
      END_STATE();
    case 253:
      if (lookahead == '~') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 256:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 257:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 259:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 260:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 261:
      if (eof) ADVANCE(262);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(357);
      if (lookahead == 'I') ADVANCE(365);
      if (lookahead == 'N') ADVANCE(370);
      if (lookahead == 'T') ADVANCE(362);
      if (lookahead == 'W') ADVANCE(358);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead == ']') ADVANCE(5);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == '_') ADVANCE(352);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'k') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == 'v') ADVANCE(395);
      if (lookahead == 'x') ADVANCE(403);
      if (lookahead == '{') ADVANCE(123);
      if (lookahead == '|') ADVANCE(112);
      if (lookahead == '~') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(261)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'A') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'A') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'A') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'E') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'G') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'M') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'N') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'N') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'N') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'N') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'O') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'O') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'O') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'P') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'P') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'R') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'R') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'T') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'T') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'T') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'T') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'U') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'a') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'b') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'd') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'd') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'f') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'g') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'm') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'o') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 's') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'u') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(255);
      if (lookahead == '.') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '_') ADVANCE(351);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(56);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(31);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(62);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(459);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(59);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(375);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'A') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'G') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'I') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'I') ADVANCE(366);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'I') ADVANCE(372);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(373);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(361);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(363);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(376);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'O') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'P') ADVANCE(371);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'P') ADVANCE(353);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(379);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(360);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(364);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(359);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(354);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(355);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'g') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(383);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(356);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 's') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 's') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 't') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 't') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(58);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(33);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(63);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(60);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(35);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(64);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(61);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(37);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(39);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '|') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(285);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_table_token1);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '\n') ADVANCE(436);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(21);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '_') ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(462);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '`') ADVANCE(464);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '^') ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 261},
  [2] = {.lex_state = 261},
  [3] = {.lex_state = 261},
  [4] = {.lex_state = 261},
  [5] = {.lex_state = 261},
  [6] = {.lex_state = 261},
  [7] = {.lex_state = 261},
  [8] = {.lex_state = 261},
  [9] = {.lex_state = 261},
  [10] = {.lex_state = 261},
  [11] = {.lex_state = 261},
  [12] = {.lex_state = 261},
  [13] = {.lex_state = 261},
  [14] = {.lex_state = 261},
  [15] = {.lex_state = 261},
  [16] = {.lex_state = 261},
  [17] = {.lex_state = 261},
  [18] = {.lex_state = 261},
  [19] = {.lex_state = 261},
  [20] = {.lex_state = 261},
  [21] = {.lex_state = 261},
  [22] = {.lex_state = 261},
  [23] = {.lex_state = 261},
  [24] = {.lex_state = 261},
  [25] = {.lex_state = 261},
  [26] = {.lex_state = 261},
  [27] = {.lex_state = 261},
  [28] = {.lex_state = 261},
  [29] = {.lex_state = 261},
  [30] = {.lex_state = 261},
  [31] = {.lex_state = 261},
  [32] = {.lex_state = 261},
  [33] = {.lex_state = 261},
  [34] = {.lex_state = 261},
  [35] = {.lex_state = 261},
  [36] = {.lex_state = 261},
  [37] = {.lex_state = 261},
  [38] = {.lex_state = 261},
  [39] = {.lex_state = 261},
  [40] = {.lex_state = 261},
  [41] = {.lex_state = 261},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 426},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 426},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 426},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 117},
  [76] = {.lex_state = 435},
  [77] = {.lex_state = 118},
  [78] = {.lex_state = 118},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 435},
  [81] = {.lex_state = 118},
  [82] = {.lex_state = 119},
  [83] = {.lex_state = 118},
  [84] = {.lex_state = 427},
  [85] = {.lex_state = 117},
  [86] = {.lex_state = 261},
  [87] = {.lex_state = 435},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 254},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 254},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 254},
  [95] = {.lex_state = 435},
  [96] = {.lex_state = 254},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 117},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 254},
  [101] = {.lex_state = 431},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 254},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 261},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 117},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 117},
  [121] = {.lex_state = 19},
  [122] = {.lex_state = 0},
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
    [aux_sym_code_token2] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
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
    [sym_document] = STATE(92),
    [sym__block] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(28),
    [sym__note_block] = STATE(28),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(29),
    [sym__tip_block] = STATE(29),
    [sym_important] = STATE(3),
    [sym__important] = STATE(30),
    [sym__important_block] = STATE(30),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(31),
    [sym__caution_block] = STATE(31),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(32),
    [sym__warning_block] = STATE(32),
    [sym_list] = STATE(3),
    [aux_sym__list_item] = STATE(72),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(42),
    [sym_kbd] = STATE(42),
    [sym_footnote] = STATE(42),
    [sym_url] = STATE(42),
    [sym_xref] = STATE(42),
    [sym__inline_xref] = STATE(48),
    [sym__xref] = STATE(48),
    [sym_passthrough] = STATE(42),
    [sym_replacement] = STATE(42),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(42),
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
    [aux_sym_code_token2] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(35),
    [anon_sym_image_COLON_COLON] = ACTIONS(37),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(39),
    [anon_sym_audio_COLON_COLON] = ACTIONS(41),
    [anon_sym_video_COLON_COLON] = ACTIONS(43),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(45),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(47),
    [aux_sym_url_token1] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(51),
    [anon_sym_xref_COLON] = ACTIONS(53),
    [sym_emphasis] = ACTIONS(55),
    [sym_strong] = ACTIONS(55),
    [sym_monospace] = ACTIONS(55),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(57),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(61),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(28),
    [sym__note_block] = STATE(28),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(29),
    [sym__tip_block] = STATE(29),
    [sym_important] = STATE(2),
    [sym__important] = STATE(30),
    [sym__important_block] = STATE(30),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(31),
    [sym__caution_block] = STATE(31),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(32),
    [sym__warning_block] = STATE(32),
    [sym_list] = STATE(2),
    [aux_sym__list_item] = STATE(72),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(42),
    [sym_kbd] = STATE(42),
    [sym_footnote] = STATE(42),
    [sym_url] = STATE(42),
    [sym_xref] = STATE(42),
    [sym__inline_xref] = STATE(48),
    [sym__xref] = STATE(48),
    [sym_passthrough] = STATE(42),
    [sym_replacement] = STATE(42),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_title] = ACTIONS(65),
    [anon_sym_NOTE_COLON] = ACTIONS(68),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(71),
    [anon_sym_TIP_COLON] = ACTIONS(74),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(77),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(80),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(83),
    [anon_sym_CAUTION_COLON] = ACTIONS(86),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(89),
    [anon_sym_WARNING_COLON] = ACTIONS(92),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(95),
    [aux_sym__list_item_token1] = ACTIONS(98),
    [aux_sym_code_token1] = ACTIONS(101),
    [aux_sym_code_token2] = ACTIONS(104),
    [anon_sym_SLASH_SLASH] = ACTIONS(107),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(110),
    [anon_sym_image_COLON_COLON] = ACTIONS(113),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(116),
    [anon_sym_audio_COLON_COLON] = ACTIONS(119),
    [anon_sym_video_COLON_COLON] = ACTIONS(122),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(125),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(128),
    [aux_sym_url_token1] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(134),
    [anon_sym_xref_COLON] = ACTIONS(137),
    [sym_emphasis] = ACTIONS(140),
    [sym_strong] = ACTIONS(140),
    [sym_monospace] = ACTIONS(140),
    [sym_superscript] = ACTIONS(140),
    [sym_subscript] = ACTIONS(143),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(149),
  },
  [3] = {
    [sym__block] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(28),
    [sym__note_block] = STATE(28),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(29),
    [sym__tip_block] = STATE(29),
    [sym_important] = STATE(2),
    [sym__important] = STATE(30),
    [sym__important_block] = STATE(30),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(31),
    [sym__caution_block] = STATE(31),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(32),
    [sym__warning_block] = STATE(32),
    [sym_list] = STATE(2),
    [aux_sym__list_item] = STATE(72),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(42),
    [sym_kbd] = STATE(42),
    [sym_footnote] = STATE(42),
    [sym_url] = STATE(42),
    [sym_xref] = STATE(42),
    [sym__inline_xref] = STATE(48),
    [sym__xref] = STATE(48),
    [sym_passthrough] = STATE(42),
    [sym_replacement] = STATE(42),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_title] = ACTIONS(154),
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
    [aux_sym_code_token2] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(35),
    [anon_sym_image_COLON_COLON] = ACTIONS(37),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(39),
    [anon_sym_audio_COLON_COLON] = ACTIONS(41),
    [anon_sym_video_COLON_COLON] = ACTIONS(43),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(45),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(47),
    [aux_sym_url_token1] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(51),
    [anon_sym_xref_COLON] = ACTIONS(53),
    [sym_emphasis] = ACTIONS(55),
    [sym_strong] = ACTIONS(55),
    [sym_monospace] = ACTIONS(55),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(57),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(61),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_title] = ACTIONS(156),
    [anon_sym_NOTE_COLON] = ACTIONS(156),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(156),
    [anon_sym_TIP_COLON] = ACTIONS(156),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(156),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(156),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(156),
    [anon_sym_CAUTION_COLON] = ACTIONS(156),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(156),
    [anon_sym_WARNING_COLON] = ACTIONS(156),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(156),
    [aux_sym__list_item_token1] = ACTIONS(156),
    [aux_sym_code_token1] = ACTIONS(156),
    [aux_sym_code_token2] = ACTIONS(158),
    [anon_sym_SLASH_SLASH] = ACTIONS(156),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(156),
    [anon_sym_image_COLON_COLON] = ACTIONS(156),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(156),
    [anon_sym_audio_COLON_COLON] = ACTIONS(156),
    [anon_sym_video_COLON_COLON] = ACTIONS(156),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(156),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(156),
    [aux_sym_url_token1] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(158),
    [anon_sym_xref_COLON] = ACTIONS(158),
    [sym_emphasis] = ACTIONS(158),
    [sym_strong] = ACTIONS(158),
    [sym_monospace] = ACTIONS(158),
    [sym_superscript] = ACTIONS(158),
    [sym_subscript] = ACTIONS(156),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(156),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(156),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(156),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_title] = ACTIONS(160),
    [anon_sym_NOTE_COLON] = ACTIONS(160),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(160),
    [anon_sym_TIP_COLON] = ACTIONS(160),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(160),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(160),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(160),
    [anon_sym_CAUTION_COLON] = ACTIONS(160),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(160),
    [anon_sym_WARNING_COLON] = ACTIONS(160),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(160),
    [aux_sym__list_item_token1] = ACTIONS(160),
    [aux_sym_code_token1] = ACTIONS(160),
    [aux_sym_code_token2] = ACTIONS(162),
    [anon_sym_SLASH_SLASH] = ACTIONS(160),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(160),
    [anon_sym_image_COLON_COLON] = ACTIONS(160),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(160),
    [anon_sym_audio_COLON_COLON] = ACTIONS(160),
    [anon_sym_video_COLON_COLON] = ACTIONS(160),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(160),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(160),
    [aux_sym_url_token1] = ACTIONS(162),
    [anon_sym_LT_LT] = ACTIONS(162),
    [anon_sym_xref_COLON] = ACTIONS(162),
    [sym_emphasis] = ACTIONS(162),
    [sym_strong] = ACTIONS(162),
    [sym_monospace] = ACTIONS(162),
    [sym_superscript] = ACTIONS(162),
    [sym_subscript] = ACTIONS(160),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(160),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(160),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(160),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [sym_title] = ACTIONS(164),
    [anon_sym_NOTE_COLON] = ACTIONS(164),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(164),
    [anon_sym_TIP_COLON] = ACTIONS(164),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(164),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(164),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(164),
    [anon_sym_CAUTION_COLON] = ACTIONS(164),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(164),
    [anon_sym_WARNING_COLON] = ACTIONS(164),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(164),
    [aux_sym__list_item_token1] = ACTIONS(164),
    [aux_sym_code_token1] = ACTIONS(164),
    [aux_sym_code_token2] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(164),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(164),
    [anon_sym_image_COLON_COLON] = ACTIONS(164),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(164),
    [anon_sym_audio_COLON_COLON] = ACTIONS(164),
    [anon_sym_video_COLON_COLON] = ACTIONS(164),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(164),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(164),
    [aux_sym_url_token1] = ACTIONS(166),
    [anon_sym_LT_LT] = ACTIONS(166),
    [anon_sym_xref_COLON] = ACTIONS(166),
    [sym_emphasis] = ACTIONS(166),
    [sym_strong] = ACTIONS(166),
    [sym_monospace] = ACTIONS(166),
    [sym_superscript] = ACTIONS(166),
    [sym_subscript] = ACTIONS(164),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(164),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(164),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(164),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [sym_title] = ACTIONS(168),
    [anon_sym_NOTE_COLON] = ACTIONS(168),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(168),
    [anon_sym_TIP_COLON] = ACTIONS(168),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(168),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(168),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(168),
    [anon_sym_CAUTION_COLON] = ACTIONS(168),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(168),
    [anon_sym_WARNING_COLON] = ACTIONS(168),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(168),
    [aux_sym__list_item_token1] = ACTIONS(168),
    [aux_sym_code_token1] = ACTIONS(168),
    [aux_sym_code_token2] = ACTIONS(170),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(168),
    [anon_sym_image_COLON_COLON] = ACTIONS(168),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(168),
    [anon_sym_audio_COLON_COLON] = ACTIONS(168),
    [anon_sym_video_COLON_COLON] = ACTIONS(168),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(168),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(168),
    [aux_sym_url_token1] = ACTIONS(170),
    [anon_sym_LT_LT] = ACTIONS(170),
    [anon_sym_xref_COLON] = ACTIONS(170),
    [sym_emphasis] = ACTIONS(170),
    [sym_strong] = ACTIONS(170),
    [sym_monospace] = ACTIONS(170),
    [sym_superscript] = ACTIONS(170),
    [sym_subscript] = ACTIONS(168),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(168),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(168),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(168),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_title] = ACTIONS(172),
    [anon_sym_NOTE_COLON] = ACTIONS(172),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(172),
    [anon_sym_TIP_COLON] = ACTIONS(172),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(172),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(172),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(172),
    [anon_sym_CAUTION_COLON] = ACTIONS(172),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(172),
    [anon_sym_WARNING_COLON] = ACTIONS(172),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(172),
    [aux_sym__list_item_token1] = ACTIONS(172),
    [aux_sym_code_token1] = ACTIONS(172),
    [aux_sym_code_token2] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(172),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(172),
    [anon_sym_image_COLON_COLON] = ACTIONS(172),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(172),
    [anon_sym_audio_COLON_COLON] = ACTIONS(172),
    [anon_sym_video_COLON_COLON] = ACTIONS(172),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(172),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(172),
    [aux_sym_url_token1] = ACTIONS(174),
    [anon_sym_LT_LT] = ACTIONS(174),
    [anon_sym_xref_COLON] = ACTIONS(174),
    [sym_emphasis] = ACTIONS(174),
    [sym_strong] = ACTIONS(174),
    [sym_monospace] = ACTIONS(174),
    [sym_superscript] = ACTIONS(174),
    [sym_subscript] = ACTIONS(172),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(172),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(172),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(172),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_title] = ACTIONS(176),
    [anon_sym_NOTE_COLON] = ACTIONS(176),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(176),
    [anon_sym_TIP_COLON] = ACTIONS(176),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(176),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(176),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(176),
    [anon_sym_CAUTION_COLON] = ACTIONS(176),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(176),
    [anon_sym_WARNING_COLON] = ACTIONS(176),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(176),
    [aux_sym__list_item_token1] = ACTIONS(176),
    [aux_sym_code_token1] = ACTIONS(176),
    [aux_sym_code_token2] = ACTIONS(178),
    [anon_sym_SLASH_SLASH] = ACTIONS(176),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(176),
    [anon_sym_image_COLON_COLON] = ACTIONS(176),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(176),
    [anon_sym_audio_COLON_COLON] = ACTIONS(176),
    [anon_sym_video_COLON_COLON] = ACTIONS(176),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(176),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(176),
    [aux_sym_url_token1] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_xref_COLON] = ACTIONS(178),
    [sym_emphasis] = ACTIONS(178),
    [sym_strong] = ACTIONS(178),
    [sym_monospace] = ACTIONS(178),
    [sym_superscript] = ACTIONS(178),
    [sym_subscript] = ACTIONS(176),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(176),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(176),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_title] = ACTIONS(180),
    [anon_sym_NOTE_COLON] = ACTIONS(180),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(180),
    [anon_sym_TIP_COLON] = ACTIONS(180),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(180),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(180),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(180),
    [anon_sym_CAUTION_COLON] = ACTIONS(180),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(180),
    [anon_sym_WARNING_COLON] = ACTIONS(180),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(180),
    [aux_sym__list_item_token1] = ACTIONS(180),
    [aux_sym_code_token1] = ACTIONS(180),
    [aux_sym_code_token2] = ACTIONS(182),
    [anon_sym_SLASH_SLASH] = ACTIONS(180),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(180),
    [anon_sym_image_COLON_COLON] = ACTIONS(180),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(180),
    [anon_sym_audio_COLON_COLON] = ACTIONS(180),
    [anon_sym_video_COLON_COLON] = ACTIONS(180),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(180),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(180),
    [aux_sym_url_token1] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_xref_COLON] = ACTIONS(182),
    [sym_emphasis] = ACTIONS(182),
    [sym_strong] = ACTIONS(182),
    [sym_monospace] = ACTIONS(182),
    [sym_superscript] = ACTIONS(182),
    [sym_subscript] = ACTIONS(180),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(180),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(180),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_title] = ACTIONS(184),
    [anon_sym_NOTE_COLON] = ACTIONS(184),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(184),
    [anon_sym_TIP_COLON] = ACTIONS(184),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(184),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(184),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(184),
    [anon_sym_CAUTION_COLON] = ACTIONS(184),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(184),
    [anon_sym_WARNING_COLON] = ACTIONS(184),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(184),
    [aux_sym__list_item_token1] = ACTIONS(184),
    [aux_sym_code_token1] = ACTIONS(184),
    [aux_sym_code_token2] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(184),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(184),
    [anon_sym_image_COLON_COLON] = ACTIONS(184),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(184),
    [anon_sym_audio_COLON_COLON] = ACTIONS(184),
    [anon_sym_video_COLON_COLON] = ACTIONS(184),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(184),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(184),
    [aux_sym_url_token1] = ACTIONS(186),
    [anon_sym_LT_LT] = ACTIONS(186),
    [anon_sym_xref_COLON] = ACTIONS(186),
    [sym_emphasis] = ACTIONS(186),
    [sym_strong] = ACTIONS(186),
    [sym_monospace] = ACTIONS(186),
    [sym_superscript] = ACTIONS(186),
    [sym_subscript] = ACTIONS(184),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(184),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(184),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_title] = ACTIONS(188),
    [anon_sym_NOTE_COLON] = ACTIONS(188),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(188),
    [anon_sym_TIP_COLON] = ACTIONS(188),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(188),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(188),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(188),
    [anon_sym_CAUTION_COLON] = ACTIONS(188),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(188),
    [anon_sym_WARNING_COLON] = ACTIONS(188),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(188),
    [aux_sym__list_item_token1] = ACTIONS(188),
    [aux_sym_code_token1] = ACTIONS(188),
    [aux_sym_code_token2] = ACTIONS(190),
    [anon_sym_SLASH_SLASH] = ACTIONS(188),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(188),
    [anon_sym_image_COLON_COLON] = ACTIONS(188),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(188),
    [anon_sym_audio_COLON_COLON] = ACTIONS(188),
    [anon_sym_video_COLON_COLON] = ACTIONS(188),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(188),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(188),
    [aux_sym_url_token1] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(190),
    [anon_sym_xref_COLON] = ACTIONS(190),
    [sym_emphasis] = ACTIONS(190),
    [sym_strong] = ACTIONS(190),
    [sym_monospace] = ACTIONS(190),
    [sym_superscript] = ACTIONS(190),
    [sym_subscript] = ACTIONS(188),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(188),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(188),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_title] = ACTIONS(192),
    [anon_sym_NOTE_COLON] = ACTIONS(192),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(192),
    [anon_sym_TIP_COLON] = ACTIONS(192),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(192),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(192),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(192),
    [anon_sym_CAUTION_COLON] = ACTIONS(192),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(192),
    [anon_sym_WARNING_COLON] = ACTIONS(192),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(192),
    [aux_sym__list_item_token1] = ACTIONS(192),
    [aux_sym_code_token1] = ACTIONS(192),
    [aux_sym_code_token2] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(192),
    [anon_sym_image_COLON_COLON] = ACTIONS(192),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(192),
    [anon_sym_audio_COLON_COLON] = ACTIONS(192),
    [anon_sym_video_COLON_COLON] = ACTIONS(192),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(192),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(192),
    [aux_sym_url_token1] = ACTIONS(194),
    [anon_sym_LT_LT] = ACTIONS(194),
    [anon_sym_xref_COLON] = ACTIONS(194),
    [sym_emphasis] = ACTIONS(194),
    [sym_strong] = ACTIONS(194),
    [sym_monospace] = ACTIONS(194),
    [sym_superscript] = ACTIONS(194),
    [sym_subscript] = ACTIONS(192),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(192),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(192),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym_title] = ACTIONS(196),
    [anon_sym_NOTE_COLON] = ACTIONS(196),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(196),
    [anon_sym_TIP_COLON] = ACTIONS(196),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(196),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(196),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(196),
    [anon_sym_CAUTION_COLON] = ACTIONS(196),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(196),
    [anon_sym_WARNING_COLON] = ACTIONS(196),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(196),
    [aux_sym__list_item_token1] = ACTIONS(196),
    [aux_sym_code_token1] = ACTIONS(196),
    [aux_sym_code_token2] = ACTIONS(198),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(196),
    [anon_sym_image_COLON_COLON] = ACTIONS(196),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(196),
    [anon_sym_audio_COLON_COLON] = ACTIONS(196),
    [anon_sym_video_COLON_COLON] = ACTIONS(196),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(196),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(196),
    [aux_sym_url_token1] = ACTIONS(198),
    [anon_sym_LT_LT] = ACTIONS(198),
    [anon_sym_xref_COLON] = ACTIONS(198),
    [sym_emphasis] = ACTIONS(198),
    [sym_strong] = ACTIONS(198),
    [sym_monospace] = ACTIONS(198),
    [sym_superscript] = ACTIONS(198),
    [sym_subscript] = ACTIONS(196),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(196),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(196),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_title] = ACTIONS(200),
    [anon_sym_NOTE_COLON] = ACTIONS(200),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(200),
    [anon_sym_TIP_COLON] = ACTIONS(200),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(200),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(200),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(200),
    [anon_sym_CAUTION_COLON] = ACTIONS(200),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(200),
    [anon_sym_WARNING_COLON] = ACTIONS(200),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(200),
    [aux_sym__list_item_token1] = ACTIONS(200),
    [aux_sym_code_token1] = ACTIONS(200),
    [aux_sym_code_token2] = ACTIONS(202),
    [anon_sym_SLASH_SLASH] = ACTIONS(200),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(200),
    [anon_sym_image_COLON_COLON] = ACTIONS(200),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(200),
    [anon_sym_audio_COLON_COLON] = ACTIONS(200),
    [anon_sym_video_COLON_COLON] = ACTIONS(200),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(200),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(200),
    [aux_sym_url_token1] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(202),
    [anon_sym_xref_COLON] = ACTIONS(202),
    [sym_emphasis] = ACTIONS(202),
    [sym_strong] = ACTIONS(202),
    [sym_monospace] = ACTIONS(202),
    [sym_superscript] = ACTIONS(202),
    [sym_subscript] = ACTIONS(200),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(200),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(200),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym_title] = ACTIONS(204),
    [anon_sym_NOTE_COLON] = ACTIONS(204),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(204),
    [anon_sym_TIP_COLON] = ACTIONS(204),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(204),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(204),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(204),
    [anon_sym_CAUTION_COLON] = ACTIONS(204),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(204),
    [anon_sym_WARNING_COLON] = ACTIONS(204),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(204),
    [aux_sym__list_item_token1] = ACTIONS(204),
    [aux_sym_code_token1] = ACTIONS(204),
    [aux_sym_code_token2] = ACTIONS(206),
    [anon_sym_SLASH_SLASH] = ACTIONS(204),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(204),
    [anon_sym_image_COLON_COLON] = ACTIONS(204),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(204),
    [anon_sym_audio_COLON_COLON] = ACTIONS(204),
    [anon_sym_video_COLON_COLON] = ACTIONS(204),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(204),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(204),
    [aux_sym_url_token1] = ACTIONS(206),
    [anon_sym_LT_LT] = ACTIONS(206),
    [anon_sym_xref_COLON] = ACTIONS(206),
    [sym_emphasis] = ACTIONS(206),
    [sym_strong] = ACTIONS(206),
    [sym_monospace] = ACTIONS(206),
    [sym_superscript] = ACTIONS(206),
    [sym_subscript] = ACTIONS(204),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(204),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(204),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_title] = ACTIONS(208),
    [anon_sym_NOTE_COLON] = ACTIONS(208),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(208),
    [anon_sym_TIP_COLON] = ACTIONS(208),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(208),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(208),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(208),
    [anon_sym_CAUTION_COLON] = ACTIONS(208),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(208),
    [anon_sym_WARNING_COLON] = ACTIONS(208),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(208),
    [aux_sym__list_item_token1] = ACTIONS(208),
    [aux_sym_code_token1] = ACTIONS(208),
    [aux_sym_code_token2] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(208),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(208),
    [anon_sym_image_COLON_COLON] = ACTIONS(208),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(208),
    [anon_sym_audio_COLON_COLON] = ACTIONS(208),
    [anon_sym_video_COLON_COLON] = ACTIONS(208),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(208),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(208),
    [aux_sym_url_token1] = ACTIONS(210),
    [anon_sym_LT_LT] = ACTIONS(210),
    [anon_sym_xref_COLON] = ACTIONS(210),
    [sym_emphasis] = ACTIONS(210),
    [sym_strong] = ACTIONS(210),
    [sym_monospace] = ACTIONS(210),
    [sym_superscript] = ACTIONS(210),
    [sym_subscript] = ACTIONS(208),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(208),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(208),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym_title] = ACTIONS(212),
    [anon_sym_NOTE_COLON] = ACTIONS(212),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(212),
    [anon_sym_TIP_COLON] = ACTIONS(212),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(212),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(212),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(212),
    [anon_sym_CAUTION_COLON] = ACTIONS(212),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(212),
    [anon_sym_WARNING_COLON] = ACTIONS(212),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(212),
    [aux_sym__list_item_token1] = ACTIONS(212),
    [aux_sym_code_token1] = ACTIONS(212),
    [aux_sym_code_token2] = ACTIONS(214),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(212),
    [anon_sym_image_COLON_COLON] = ACTIONS(212),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(212),
    [anon_sym_audio_COLON_COLON] = ACTIONS(212),
    [anon_sym_video_COLON_COLON] = ACTIONS(212),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(212),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(212),
    [aux_sym_url_token1] = ACTIONS(214),
    [anon_sym_LT_LT] = ACTIONS(214),
    [anon_sym_xref_COLON] = ACTIONS(214),
    [sym_emphasis] = ACTIONS(214),
    [sym_strong] = ACTIONS(214),
    [sym_monospace] = ACTIONS(214),
    [sym_superscript] = ACTIONS(214),
    [sym_subscript] = ACTIONS(212),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(212),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(212),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_title] = ACTIONS(216),
    [anon_sym_NOTE_COLON] = ACTIONS(216),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(216),
    [anon_sym_TIP_COLON] = ACTIONS(216),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(216),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(216),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(216),
    [anon_sym_CAUTION_COLON] = ACTIONS(216),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(216),
    [anon_sym_WARNING_COLON] = ACTIONS(216),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(216),
    [aux_sym__list_item_token1] = ACTIONS(216),
    [aux_sym_code_token1] = ACTIONS(216),
    [aux_sym_code_token2] = ACTIONS(218),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(216),
    [anon_sym_image_COLON_COLON] = ACTIONS(216),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(216),
    [anon_sym_audio_COLON_COLON] = ACTIONS(216),
    [anon_sym_video_COLON_COLON] = ACTIONS(216),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(216),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(216),
    [aux_sym_url_token1] = ACTIONS(218),
    [anon_sym_LT_LT] = ACTIONS(218),
    [anon_sym_xref_COLON] = ACTIONS(218),
    [sym_emphasis] = ACTIONS(218),
    [sym_strong] = ACTIONS(218),
    [sym_monospace] = ACTIONS(218),
    [sym_superscript] = ACTIONS(218),
    [sym_subscript] = ACTIONS(216),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(216),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(216),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [sym_title] = ACTIONS(220),
    [anon_sym_NOTE_COLON] = ACTIONS(220),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(220),
    [anon_sym_TIP_COLON] = ACTIONS(220),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(220),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(220),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(220),
    [anon_sym_CAUTION_COLON] = ACTIONS(220),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(220),
    [anon_sym_WARNING_COLON] = ACTIONS(220),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(220),
    [aux_sym__list_item_token1] = ACTIONS(220),
    [aux_sym_code_token1] = ACTIONS(220),
    [aux_sym_code_token2] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(220),
    [anon_sym_image_COLON_COLON] = ACTIONS(220),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(220),
    [anon_sym_audio_COLON_COLON] = ACTIONS(220),
    [anon_sym_video_COLON_COLON] = ACTIONS(220),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(220),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(220),
    [aux_sym_url_token1] = ACTIONS(222),
    [anon_sym_LT_LT] = ACTIONS(222),
    [anon_sym_xref_COLON] = ACTIONS(222),
    [sym_emphasis] = ACTIONS(222),
    [sym_strong] = ACTIONS(222),
    [sym_monospace] = ACTIONS(222),
    [sym_superscript] = ACTIONS(222),
    [sym_subscript] = ACTIONS(220),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(220),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(220),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym_title] = ACTIONS(224),
    [anon_sym_NOTE_COLON] = ACTIONS(224),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(224),
    [anon_sym_TIP_COLON] = ACTIONS(224),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(224),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(224),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(224),
    [anon_sym_CAUTION_COLON] = ACTIONS(224),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(224),
    [anon_sym_WARNING_COLON] = ACTIONS(224),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(224),
    [aux_sym__list_item_token1] = ACTIONS(224),
    [aux_sym_code_token1] = ACTIONS(224),
    [aux_sym_code_token2] = ACTIONS(226),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(224),
    [anon_sym_image_COLON_COLON] = ACTIONS(224),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(224),
    [anon_sym_audio_COLON_COLON] = ACTIONS(224),
    [anon_sym_video_COLON_COLON] = ACTIONS(224),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(224),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(224),
    [aux_sym_url_token1] = ACTIONS(226),
    [anon_sym_LT_LT] = ACTIONS(226),
    [anon_sym_xref_COLON] = ACTIONS(226),
    [sym_emphasis] = ACTIONS(226),
    [sym_strong] = ACTIONS(226),
    [sym_monospace] = ACTIONS(226),
    [sym_superscript] = ACTIONS(226),
    [sym_subscript] = ACTIONS(224),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(224),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(224),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_title] = ACTIONS(228),
    [anon_sym_NOTE_COLON] = ACTIONS(228),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(228),
    [anon_sym_TIP_COLON] = ACTIONS(228),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(228),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(228),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(228),
    [anon_sym_CAUTION_COLON] = ACTIONS(228),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(228),
    [anon_sym_WARNING_COLON] = ACTIONS(228),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(228),
    [aux_sym__list_item_token1] = ACTIONS(228),
    [aux_sym_code_token1] = ACTIONS(228),
    [aux_sym_code_token2] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(228),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(228),
    [anon_sym_image_COLON_COLON] = ACTIONS(228),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(228),
    [anon_sym_audio_COLON_COLON] = ACTIONS(228),
    [anon_sym_video_COLON_COLON] = ACTIONS(228),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(228),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(228),
    [aux_sym_url_token1] = ACTIONS(230),
    [anon_sym_LT_LT] = ACTIONS(230),
    [anon_sym_xref_COLON] = ACTIONS(230),
    [sym_emphasis] = ACTIONS(230),
    [sym_strong] = ACTIONS(230),
    [sym_monospace] = ACTIONS(230),
    [sym_superscript] = ACTIONS(230),
    [sym_subscript] = ACTIONS(228),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(228),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(228),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_title] = ACTIONS(232),
    [anon_sym_NOTE_COLON] = ACTIONS(232),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(232),
    [anon_sym_TIP_COLON] = ACTIONS(232),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(232),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(232),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(232),
    [anon_sym_CAUTION_COLON] = ACTIONS(232),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(232),
    [anon_sym_WARNING_COLON] = ACTIONS(232),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(232),
    [aux_sym__list_item_token1] = ACTIONS(232),
    [aux_sym_code_token1] = ACTIONS(232),
    [aux_sym_code_token2] = ACTIONS(234),
    [anon_sym_SLASH_SLASH] = ACTIONS(232),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(232),
    [anon_sym_image_COLON_COLON] = ACTIONS(232),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(232),
    [anon_sym_audio_COLON_COLON] = ACTIONS(232),
    [anon_sym_video_COLON_COLON] = ACTIONS(232),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(232),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(232),
    [aux_sym_url_token1] = ACTIONS(234),
    [anon_sym_LT_LT] = ACTIONS(234),
    [anon_sym_xref_COLON] = ACTIONS(234),
    [sym_emphasis] = ACTIONS(234),
    [sym_strong] = ACTIONS(234),
    [sym_monospace] = ACTIONS(234),
    [sym_superscript] = ACTIONS(234),
    [sym_subscript] = ACTIONS(232),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(232),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(232),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(232),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_title] = ACTIONS(236),
    [anon_sym_NOTE_COLON] = ACTIONS(236),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(236),
    [anon_sym_TIP_COLON] = ACTIONS(236),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(236),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(236),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(236),
    [anon_sym_CAUTION_COLON] = ACTIONS(236),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(236),
    [anon_sym_WARNING_COLON] = ACTIONS(236),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(236),
    [aux_sym__list_item_token1] = ACTIONS(236),
    [aux_sym_code_token1] = ACTIONS(236),
    [aux_sym_code_token2] = ACTIONS(238),
    [anon_sym_SLASH_SLASH] = ACTIONS(236),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(236),
    [anon_sym_image_COLON_COLON] = ACTIONS(236),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(236),
    [anon_sym_audio_COLON_COLON] = ACTIONS(236),
    [anon_sym_video_COLON_COLON] = ACTIONS(236),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(236),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(236),
    [aux_sym_url_token1] = ACTIONS(238),
    [anon_sym_LT_LT] = ACTIONS(238),
    [anon_sym_xref_COLON] = ACTIONS(238),
    [sym_emphasis] = ACTIONS(238),
    [sym_strong] = ACTIONS(238),
    [sym_monospace] = ACTIONS(238),
    [sym_superscript] = ACTIONS(238),
    [sym_subscript] = ACTIONS(236),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(236),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(236),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(236),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [sym_title] = ACTIONS(240),
    [anon_sym_NOTE_COLON] = ACTIONS(240),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(240),
    [anon_sym_TIP_COLON] = ACTIONS(240),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(240),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(240),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(240),
    [anon_sym_CAUTION_COLON] = ACTIONS(240),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(240),
    [anon_sym_WARNING_COLON] = ACTIONS(240),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(240),
    [aux_sym__list_item_token1] = ACTIONS(240),
    [aux_sym_code_token1] = ACTIONS(240),
    [aux_sym_code_token2] = ACTIONS(242),
    [anon_sym_SLASH_SLASH] = ACTIONS(240),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(240),
    [anon_sym_image_COLON_COLON] = ACTIONS(240),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(240),
    [anon_sym_audio_COLON_COLON] = ACTIONS(240),
    [anon_sym_video_COLON_COLON] = ACTIONS(240),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(240),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(240),
    [aux_sym_url_token1] = ACTIONS(242),
    [anon_sym_LT_LT] = ACTIONS(242),
    [anon_sym_xref_COLON] = ACTIONS(242),
    [sym_emphasis] = ACTIONS(242),
    [sym_strong] = ACTIONS(242),
    [sym_monospace] = ACTIONS(242),
    [sym_superscript] = ACTIONS(242),
    [sym_subscript] = ACTIONS(240),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(240),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(240),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(240),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym_title] = ACTIONS(244),
    [anon_sym_NOTE_COLON] = ACTIONS(244),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(244),
    [anon_sym_TIP_COLON] = ACTIONS(244),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(244),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(244),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(244),
    [anon_sym_CAUTION_COLON] = ACTIONS(244),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(244),
    [anon_sym_WARNING_COLON] = ACTIONS(244),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(244),
    [aux_sym__list_item_token1] = ACTIONS(244),
    [aux_sym_code_token1] = ACTIONS(244),
    [aux_sym_code_token2] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(244),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(244),
    [anon_sym_image_COLON_COLON] = ACTIONS(244),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(244),
    [anon_sym_audio_COLON_COLON] = ACTIONS(244),
    [anon_sym_video_COLON_COLON] = ACTIONS(244),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(244),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(244),
    [aux_sym_url_token1] = ACTIONS(246),
    [anon_sym_LT_LT] = ACTIONS(246),
    [anon_sym_xref_COLON] = ACTIONS(246),
    [sym_emphasis] = ACTIONS(246),
    [sym_strong] = ACTIONS(246),
    [sym_monospace] = ACTIONS(246),
    [sym_superscript] = ACTIONS(246),
    [sym_subscript] = ACTIONS(244),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(244),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(244),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym_title] = ACTIONS(248),
    [anon_sym_NOTE_COLON] = ACTIONS(248),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(248),
    [anon_sym_TIP_COLON] = ACTIONS(248),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(248),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(248),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(248),
    [anon_sym_CAUTION_COLON] = ACTIONS(248),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(248),
    [anon_sym_WARNING_COLON] = ACTIONS(248),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(248),
    [aux_sym__list_item_token1] = ACTIONS(248),
    [aux_sym_code_token1] = ACTIONS(248),
    [aux_sym_code_token2] = ACTIONS(250),
    [anon_sym_SLASH_SLASH] = ACTIONS(248),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(248),
    [anon_sym_image_COLON_COLON] = ACTIONS(248),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(248),
    [anon_sym_audio_COLON_COLON] = ACTIONS(248),
    [anon_sym_video_COLON_COLON] = ACTIONS(248),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(248),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(248),
    [aux_sym_url_token1] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_xref_COLON] = ACTIONS(250),
    [sym_emphasis] = ACTIONS(250),
    [sym_strong] = ACTIONS(250),
    [sym_monospace] = ACTIONS(250),
    [sym_superscript] = ACTIONS(250),
    [sym_subscript] = ACTIONS(248),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(248),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(248),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_title] = ACTIONS(252),
    [anon_sym_NOTE_COLON] = ACTIONS(252),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(252),
    [anon_sym_TIP_COLON] = ACTIONS(252),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(252),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(252),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(252),
    [anon_sym_CAUTION_COLON] = ACTIONS(252),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(252),
    [anon_sym_WARNING_COLON] = ACTIONS(252),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(252),
    [aux_sym__list_item_token1] = ACTIONS(252),
    [aux_sym_code_token1] = ACTIONS(252),
    [aux_sym_code_token2] = ACTIONS(254),
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(252),
    [anon_sym_image_COLON_COLON] = ACTIONS(252),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(252),
    [anon_sym_audio_COLON_COLON] = ACTIONS(252),
    [anon_sym_video_COLON_COLON] = ACTIONS(252),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(252),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(252),
    [aux_sym_url_token1] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_xref_COLON] = ACTIONS(254),
    [sym_emphasis] = ACTIONS(254),
    [sym_strong] = ACTIONS(254),
    [sym_monospace] = ACTIONS(254),
    [sym_superscript] = ACTIONS(254),
    [sym_subscript] = ACTIONS(252),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(252),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(252),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_title] = ACTIONS(256),
    [anon_sym_NOTE_COLON] = ACTIONS(256),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(256),
    [anon_sym_TIP_COLON] = ACTIONS(256),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(256),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(256),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(256),
    [anon_sym_CAUTION_COLON] = ACTIONS(256),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(256),
    [anon_sym_WARNING_COLON] = ACTIONS(256),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(256),
    [aux_sym__list_item_token1] = ACTIONS(256),
    [aux_sym_code_token1] = ACTIONS(256),
    [aux_sym_code_token2] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(256),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(256),
    [anon_sym_image_COLON_COLON] = ACTIONS(256),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(256),
    [anon_sym_audio_COLON_COLON] = ACTIONS(256),
    [anon_sym_video_COLON_COLON] = ACTIONS(256),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(256),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(256),
    [aux_sym_url_token1] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_xref_COLON] = ACTIONS(258),
    [sym_emphasis] = ACTIONS(258),
    [sym_strong] = ACTIONS(258),
    [sym_monospace] = ACTIONS(258),
    [sym_superscript] = ACTIONS(258),
    [sym_subscript] = ACTIONS(256),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(256),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(256),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [sym_title] = ACTIONS(260),
    [anon_sym_NOTE_COLON] = ACTIONS(260),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(260),
    [anon_sym_TIP_COLON] = ACTIONS(260),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(260),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(260),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(260),
    [anon_sym_CAUTION_COLON] = ACTIONS(260),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(260),
    [anon_sym_WARNING_COLON] = ACTIONS(260),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(260),
    [aux_sym__list_item_token1] = ACTIONS(260),
    [aux_sym_code_token1] = ACTIONS(260),
    [aux_sym_code_token2] = ACTIONS(262),
    [anon_sym_SLASH_SLASH] = ACTIONS(260),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(260),
    [anon_sym_image_COLON_COLON] = ACTIONS(260),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(260),
    [anon_sym_audio_COLON_COLON] = ACTIONS(260),
    [anon_sym_video_COLON_COLON] = ACTIONS(260),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(260),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(260),
    [aux_sym_url_token1] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(262),
    [anon_sym_xref_COLON] = ACTIONS(262),
    [sym_emphasis] = ACTIONS(262),
    [sym_strong] = ACTIONS(262),
    [sym_monospace] = ACTIONS(262),
    [sym_superscript] = ACTIONS(262),
    [sym_subscript] = ACTIONS(260),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(260),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(260),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym_title] = ACTIONS(264),
    [anon_sym_NOTE_COLON] = ACTIONS(264),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(264),
    [anon_sym_TIP_COLON] = ACTIONS(264),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(264),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(264),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(264),
    [anon_sym_CAUTION_COLON] = ACTIONS(264),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(264),
    [anon_sym_WARNING_COLON] = ACTIONS(264),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(264),
    [aux_sym__list_item_token1] = ACTIONS(264),
    [aux_sym_code_token1] = ACTIONS(264),
    [aux_sym_code_token2] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(264),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(264),
    [anon_sym_image_COLON_COLON] = ACTIONS(264),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(264),
    [anon_sym_audio_COLON_COLON] = ACTIONS(264),
    [anon_sym_video_COLON_COLON] = ACTIONS(264),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(264),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(264),
    [aux_sym_url_token1] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_xref_COLON] = ACTIONS(266),
    [sym_emphasis] = ACTIONS(266),
    [sym_strong] = ACTIONS(266),
    [sym_monospace] = ACTIONS(266),
    [sym_superscript] = ACTIONS(266),
    [sym_subscript] = ACTIONS(264),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(264),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(264),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [sym_title] = ACTIONS(268),
    [anon_sym_NOTE_COLON] = ACTIONS(268),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(268),
    [anon_sym_TIP_COLON] = ACTIONS(268),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(268),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(268),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(268),
    [anon_sym_CAUTION_COLON] = ACTIONS(268),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(268),
    [anon_sym_WARNING_COLON] = ACTIONS(268),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(268),
    [aux_sym__list_item_token1] = ACTIONS(268),
    [aux_sym_code_token1] = ACTIONS(268),
    [aux_sym_code_token2] = ACTIONS(270),
    [anon_sym_SLASH_SLASH] = ACTIONS(268),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(268),
    [anon_sym_image_COLON_COLON] = ACTIONS(268),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(268),
    [anon_sym_audio_COLON_COLON] = ACTIONS(268),
    [anon_sym_video_COLON_COLON] = ACTIONS(268),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(268),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(268),
    [aux_sym_url_token1] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(270),
    [anon_sym_xref_COLON] = ACTIONS(270),
    [sym_emphasis] = ACTIONS(270),
    [sym_strong] = ACTIONS(270),
    [sym_monospace] = ACTIONS(270),
    [sym_superscript] = ACTIONS(270),
    [sym_subscript] = ACTIONS(268),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(268),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(268),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [sym_title] = ACTIONS(272),
    [anon_sym_NOTE_COLON] = ACTIONS(272),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(272),
    [anon_sym_TIP_COLON] = ACTIONS(272),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(272),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(272),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(272),
    [anon_sym_CAUTION_COLON] = ACTIONS(272),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(272),
    [anon_sym_WARNING_COLON] = ACTIONS(272),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(272),
    [aux_sym__list_item_token1] = ACTIONS(272),
    [aux_sym_code_token1] = ACTIONS(272),
    [aux_sym_code_token2] = ACTIONS(274),
    [anon_sym_SLASH_SLASH] = ACTIONS(272),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(272),
    [anon_sym_image_COLON_COLON] = ACTIONS(272),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(272),
    [anon_sym_audio_COLON_COLON] = ACTIONS(272),
    [anon_sym_video_COLON_COLON] = ACTIONS(272),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(272),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(272),
    [aux_sym_url_token1] = ACTIONS(274),
    [anon_sym_LT_LT] = ACTIONS(274),
    [anon_sym_xref_COLON] = ACTIONS(274),
    [sym_emphasis] = ACTIONS(274),
    [sym_strong] = ACTIONS(274),
    [sym_monospace] = ACTIONS(274),
    [sym_superscript] = ACTIONS(274),
    [sym_subscript] = ACTIONS(272),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(272),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(272),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(272),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [sym_title] = ACTIONS(276),
    [anon_sym_NOTE_COLON] = ACTIONS(276),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(276),
    [anon_sym_TIP_COLON] = ACTIONS(276),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(276),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(276),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(276),
    [anon_sym_CAUTION_COLON] = ACTIONS(276),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(276),
    [anon_sym_WARNING_COLON] = ACTIONS(276),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(276),
    [aux_sym__list_item_token1] = ACTIONS(276),
    [aux_sym_code_token1] = ACTIONS(276),
    [aux_sym_code_token2] = ACTIONS(278),
    [anon_sym_SLASH_SLASH] = ACTIONS(276),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(276),
    [anon_sym_image_COLON_COLON] = ACTIONS(276),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(276),
    [anon_sym_audio_COLON_COLON] = ACTIONS(276),
    [anon_sym_video_COLON_COLON] = ACTIONS(276),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(276),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(276),
    [aux_sym_url_token1] = ACTIONS(278),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_xref_COLON] = ACTIONS(278),
    [sym_emphasis] = ACTIONS(278),
    [sym_strong] = ACTIONS(278),
    [sym_monospace] = ACTIONS(278),
    [sym_superscript] = ACTIONS(278),
    [sym_subscript] = ACTIONS(276),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(276),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(276),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(276),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [sym_title] = ACTIONS(280),
    [anon_sym_NOTE_COLON] = ACTIONS(280),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(280),
    [anon_sym_TIP_COLON] = ACTIONS(280),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(280),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(280),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(280),
    [anon_sym_CAUTION_COLON] = ACTIONS(280),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(280),
    [anon_sym_WARNING_COLON] = ACTIONS(280),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(280),
    [aux_sym__list_item_token1] = ACTIONS(280),
    [aux_sym_code_token1] = ACTIONS(280),
    [aux_sym_code_token2] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(280),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(280),
    [anon_sym_image_COLON_COLON] = ACTIONS(280),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(280),
    [anon_sym_audio_COLON_COLON] = ACTIONS(280),
    [anon_sym_video_COLON_COLON] = ACTIONS(280),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(280),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(280),
    [aux_sym_url_token1] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_xref_COLON] = ACTIONS(282),
    [sym_emphasis] = ACTIONS(282),
    [sym_strong] = ACTIONS(282),
    [sym_monospace] = ACTIONS(282),
    [sym_superscript] = ACTIONS(282),
    [sym_subscript] = ACTIONS(280),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(280),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(280),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(280),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_title] = ACTIONS(284),
    [anon_sym_NOTE_COLON] = ACTIONS(284),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(284),
    [anon_sym_TIP_COLON] = ACTIONS(284),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(284),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(284),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(284),
    [anon_sym_CAUTION_COLON] = ACTIONS(284),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(284),
    [anon_sym_WARNING_COLON] = ACTIONS(284),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(284),
    [aux_sym__list_item_token1] = ACTIONS(284),
    [aux_sym_code_token1] = ACTIONS(284),
    [aux_sym_code_token2] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(284),
    [anon_sym_image_COLON_COLON] = ACTIONS(284),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(284),
    [anon_sym_audio_COLON_COLON] = ACTIONS(284),
    [anon_sym_video_COLON_COLON] = ACTIONS(284),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(284),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(284),
    [aux_sym_url_token1] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(286),
    [anon_sym_xref_COLON] = ACTIONS(286),
    [sym_emphasis] = ACTIONS(286),
    [sym_strong] = ACTIONS(286),
    [sym_monospace] = ACTIONS(286),
    [sym_superscript] = ACTIONS(286),
    [sym_subscript] = ACTIONS(284),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(284),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(284),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [sym_title] = ACTIONS(288),
    [anon_sym_NOTE_COLON] = ACTIONS(288),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(288),
    [anon_sym_TIP_COLON] = ACTIONS(288),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(288),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(288),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(288),
    [anon_sym_CAUTION_COLON] = ACTIONS(288),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(288),
    [anon_sym_WARNING_COLON] = ACTIONS(288),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(288),
    [aux_sym__list_item_token1] = ACTIONS(288),
    [aux_sym_code_token1] = ACTIONS(288),
    [aux_sym_code_token2] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(288),
    [anon_sym_image_COLON_COLON] = ACTIONS(288),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(288),
    [anon_sym_audio_COLON_COLON] = ACTIONS(288),
    [anon_sym_video_COLON_COLON] = ACTIONS(288),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(288),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(288),
    [aux_sym_url_token1] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(290),
    [anon_sym_xref_COLON] = ACTIONS(290),
    [sym_emphasis] = ACTIONS(290),
    [sym_strong] = ACTIONS(290),
    [sym_monospace] = ACTIONS(290),
    [sym_superscript] = ACTIONS(290),
    [sym_subscript] = ACTIONS(288),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(288),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(288),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(288),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym_title] = ACTIONS(292),
    [anon_sym_NOTE_COLON] = ACTIONS(292),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(292),
    [anon_sym_TIP_COLON] = ACTIONS(292),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(292),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(292),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(292),
    [anon_sym_CAUTION_COLON] = ACTIONS(292),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(292),
    [anon_sym_WARNING_COLON] = ACTIONS(292),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(292),
    [aux_sym__list_item_token1] = ACTIONS(292),
    [aux_sym_code_token1] = ACTIONS(292),
    [aux_sym_code_token2] = ACTIONS(294),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(292),
    [anon_sym_image_COLON_COLON] = ACTIONS(292),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(292),
    [anon_sym_audio_COLON_COLON] = ACTIONS(292),
    [anon_sym_video_COLON_COLON] = ACTIONS(292),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(292),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(292),
    [aux_sym_url_token1] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_xref_COLON] = ACTIONS(294),
    [sym_emphasis] = ACTIONS(294),
    [sym_strong] = ACTIONS(294),
    [sym_monospace] = ACTIONS(294),
    [sym_superscript] = ACTIONS(294),
    [sym_subscript] = ACTIONS(292),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(292),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(292),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(292),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [sym_title] = ACTIONS(296),
    [anon_sym_NOTE_COLON] = ACTIONS(296),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(296),
    [anon_sym_TIP_COLON] = ACTIONS(296),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(296),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(296),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(296),
    [anon_sym_CAUTION_COLON] = ACTIONS(296),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(296),
    [anon_sym_WARNING_COLON] = ACTIONS(296),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(296),
    [aux_sym__list_item_token1] = ACTIONS(296),
    [aux_sym_code_token1] = ACTIONS(296),
    [aux_sym_code_token2] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(296),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(296),
    [anon_sym_image_COLON_COLON] = ACTIONS(296),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(296),
    [anon_sym_audio_COLON_COLON] = ACTIONS(296),
    [anon_sym_video_COLON_COLON] = ACTIONS(296),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(296),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(296),
    [aux_sym_url_token1] = ACTIONS(298),
    [anon_sym_LT_LT] = ACTIONS(298),
    [anon_sym_xref_COLON] = ACTIONS(298),
    [sym_emphasis] = ACTIONS(298),
    [sym_strong] = ACTIONS(298),
    [sym_monospace] = ACTIONS(298),
    [sym_superscript] = ACTIONS(298),
    [sym_subscript] = ACTIONS(296),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(296),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(296),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym_title] = ACTIONS(300),
    [anon_sym_NOTE_COLON] = ACTIONS(300),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(300),
    [anon_sym_TIP_COLON] = ACTIONS(300),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(300),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(300),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(300),
    [anon_sym_CAUTION_COLON] = ACTIONS(300),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(300),
    [anon_sym_WARNING_COLON] = ACTIONS(300),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(300),
    [aux_sym__list_item_token1] = ACTIONS(300),
    [aux_sym_code_token1] = ACTIONS(300),
    [aux_sym_code_token2] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(300),
    [anon_sym_image_COLON_COLON] = ACTIONS(300),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(300),
    [anon_sym_audio_COLON_COLON] = ACTIONS(300),
    [anon_sym_video_COLON_COLON] = ACTIONS(300),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(300),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(300),
    [aux_sym_url_token1] = ACTIONS(302),
    [anon_sym_LT_LT] = ACTIONS(302),
    [anon_sym_xref_COLON] = ACTIONS(302),
    [sym_emphasis] = ACTIONS(302),
    [sym_strong] = ACTIONS(302),
    [sym_monospace] = ACTIONS(302),
    [sym_superscript] = ACTIONS(302),
    [sym_subscript] = ACTIONS(300),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(300),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(300),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [sym_title] = ACTIONS(304),
    [anon_sym_NOTE_COLON] = ACTIONS(304),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(304),
    [anon_sym_TIP_COLON] = ACTIONS(304),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(304),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(304),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(304),
    [anon_sym_CAUTION_COLON] = ACTIONS(304),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(304),
    [anon_sym_WARNING_COLON] = ACTIONS(304),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(304),
    [aux_sym__list_item_token1] = ACTIONS(304),
    [aux_sym_code_token1] = ACTIONS(304),
    [aux_sym_code_token2] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(304),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(304),
    [anon_sym_image_COLON_COLON] = ACTIONS(304),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(304),
    [anon_sym_audio_COLON_COLON] = ACTIONS(304),
    [anon_sym_video_COLON_COLON] = ACTIONS(304),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(304),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(304),
    [aux_sym_url_token1] = ACTIONS(306),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_xref_COLON] = ACTIONS(306),
    [sym_emphasis] = ACTIONS(306),
    [sym_strong] = ACTIONS(306),
    [sym_monospace] = ACTIONS(306),
    [sym_superscript] = ACTIONS(306),
    [sym_subscript] = ACTIONS(304),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(304),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(304),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(304),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(49), 1,
      aux_sym_url_token1,
    ACTIONS(51), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_xref_COLON,
    ACTIONS(310), 1,
      anon_sym_LF_LF,
    ACTIONS(312), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(314), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(316), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(48), 2,
      sym__inline_xref,
      sym__xref,
    ACTIONS(308), 6,
      aux_sym_code_token2,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    STATE(43), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(318), 30,
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
  [76] = 11,
    ACTIONS(323), 1,
      anon_sym_LF_LF,
    ACTIONS(325), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(328), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(331), 1,
      aux_sym_url_token1,
    ACTIONS(334), 1,
      anon_sym_LT_LT,
    ACTIONS(337), 1,
      anon_sym_xref_COLON,
    ACTIONS(340), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(48), 2,
      sym__inline_xref,
      sym__xref,
    ACTIONS(320), 6,
      aux_sym_code_token2,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    STATE(43), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(343), 30,
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
  [152] = 3,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      anon_sym_LF_LF,
    ACTIONS(346), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [203] = 3,
    ACTIONS(354), 1,
      anon_sym_COLON_COLON,
    ACTIONS(356), 1,
      anon_sym_LF_LF,
    ACTIONS(352), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [254] = 2,
    ACTIONS(360), 1,
      anon_sym_LF_LF,
    ACTIONS(358), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [302] = 2,
    ACTIONS(364), 1,
      anon_sym_LF_LF,
    ACTIONS(362), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [350] = 2,
    ACTIONS(368), 1,
      anon_sym_LF_LF,
    ACTIONS(366), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [398] = 2,
    ACTIONS(372), 1,
      anon_sym_LF_LF,
    ACTIONS(370), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [446] = 2,
    ACTIONS(376), 1,
      anon_sym_LF_LF,
    ACTIONS(374), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [494] = 2,
    ACTIONS(380), 1,
      anon_sym_LF_LF,
    ACTIONS(378), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [542] = 2,
    ACTIONS(384), 1,
      anon_sym_LF_LF,
    ACTIONS(382), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [590] = 2,
    ACTIONS(388), 1,
      anon_sym_LF_LF,
    ACTIONS(386), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [638] = 2,
    ACTIONS(392), 1,
      anon_sym_LF_LF,
    ACTIONS(390), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [686] = 2,
    ACTIONS(396), 1,
      anon_sym_LF_LF,
    ACTIONS(394), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [734] = 2,
    ACTIONS(400), 1,
      anon_sym_LF_LF,
    ACTIONS(398), 42,
      aux_sym_code_token2,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_url_token1,
      anon_sym_LT_LT,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym_strong,
      sym_monospace,
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
  [782] = 3,
    ACTIONS(402), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(404), 1,
      aux_sym__note_block_token1,
    STATE(70), 1,
      aux_sym__note_block_repeat1,
  [792] = 3,
    ACTIONS(406), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(408), 1,
      aux_sym__note_block_token1,
    STATE(58), 1,
      aux_sym__note_block_repeat1,
  [802] = 3,
    ACTIONS(411), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(413), 1,
      aux_sym__note_block_token1,
    STATE(74), 1,
      aux_sym__note_block_repeat1,
  [812] = 3,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      aux_sym_table_token1,
    STATE(63), 1,
      aux_sym_table_repeat1,
  [822] = 3,
    ACTIONS(419), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(421), 1,
      aux_sym__note_block_token1,
    STATE(58), 1,
      aux_sym__note_block_repeat1,
  [832] = 3,
    ACTIONS(423), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(425), 1,
      aux_sym__note_block_token1,
    STATE(64), 1,
      aux_sym__note_block_repeat1,
  [842] = 3,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      aux_sym_table_token1,
    STATE(65), 1,
      aux_sym_table_repeat1,
  [852] = 3,
    ACTIONS(421), 1,
      aux_sym__note_block_token1,
    ACTIONS(431), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(58), 1,
      aux_sym__note_block_repeat1,
  [862] = 3,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      aux_sym_table_token1,
    STATE(65), 1,
      aux_sym_table_repeat1,
  [872] = 3,
    ACTIONS(438), 1,
      anon_sym_LF,
    ACTIONS(440), 1,
      aux_sym__list_item_token1,
    STATE(66), 1,
      aux_sym__list_item,
  [882] = 3,
    ACTIONS(443), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(445), 1,
      aux_sym__note_block_token1,
    STATE(61), 1,
      aux_sym__note_block_repeat1,
  [892] = 3,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(449), 1,
      aux_sym__note_block_token1,
    STATE(73), 1,
      aux_sym__note_block_repeat1,
  [902] = 3,
    ACTIONS(451), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(453), 1,
      aux_sym__note_block_token1,
    STATE(71), 1,
      aux_sym__note_block_repeat1,
  [912] = 3,
    ACTIONS(421), 1,
      aux_sym__note_block_token1,
    ACTIONS(455), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(58), 1,
      aux_sym__note_block_repeat1,
  [922] = 3,
    ACTIONS(421), 1,
      aux_sym__note_block_token1,
    ACTIONS(457), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(58), 1,
      aux_sym__note_block_repeat1,
  [932] = 3,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 1,
      aux_sym__list_item_token1,
    STATE(66), 1,
      aux_sym__list_item,
  [942] = 3,
    ACTIONS(421), 1,
      aux_sym__note_block_token1,
    ACTIONS(463), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(58), 1,
      aux_sym__note_block_repeat1,
  [952] = 3,
    ACTIONS(421), 1,
      aux_sym__note_block_token1,
    ACTIONS(465), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(58), 1,
      aux_sym__note_block_repeat1,
  [962] = 2,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    ACTIONS(469), 1,
      aux_sym_footnote_token1,
  [969] = 2,
    ACTIONS(471), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      aux_sym_image_token2,
  [976] = 2,
    ACTIONS(475), 1,
      aux_sym_audio_token1,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
  [983] = 2,
    ACTIONS(479), 1,
      aux_sym_audio_token1,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
  [990] = 2,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_GT_GT,
  [997] = 2,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(489), 1,
      aux_sym_image_token2,
  [1004] = 2,
    ACTIONS(491), 1,
      aux_sym_audio_token1,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
  [1011] = 2,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    ACTIONS(497), 1,
      aux_sym_kbd_token1,
  [1018] = 2,
    ACTIONS(499), 1,
      aux_sym_audio_token1,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
  [1025] = 1,
    ACTIONS(503), 1,
      aux_sym_comment_token1,
  [1029] = 1,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
  [1033] = 1,
    ACTIONS(507), 1,
      anon_sym_RBRACK_LF,
  [1037] = 1,
    ACTIONS(509), 1,
      aux_sym_image_token2,
  [1041] = 1,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
  [1045] = 1,
    ACTIONS(513), 1,
      aux_sym_code_token2,
  [1049] = 1,
    ACTIONS(515), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1053] = 1,
    ACTIONS(517), 1,
      aux_sym_code_token2,
  [1057] = 1,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
  [1061] = 1,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
  [1065] = 1,
    ACTIONS(523), 1,
      aux_sym_code_token2,
  [1069] = 1,
    ACTIONS(525), 1,
      aux_sym_image_token2,
  [1073] = 1,
    ACTIONS(527), 1,
      aux_sym_code_token2,
  [1077] = 1,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
  [1081] = 1,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
  [1085] = 1,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
  [1089] = 1,
    ACTIONS(535), 1,
      aux_sym_code_token2,
  [1093] = 1,
    ACTIONS(537), 1,
      aux_sym_image_token1,
  [1097] = 1,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
  [1101] = 1,
    ACTIONS(541), 1,
      aux_sym_code_token2,
  [1105] = 1,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
  [1109] = 1,
    ACTIONS(545), 1,
      anon_sym_RBRACK_LF,
  [1113] = 1,
    ACTIONS(547), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1117] = 1,
    ACTIONS(549), 1,
      aux_sym__note_line_token1,
  [1121] = 1,
    ACTIONS(551), 1,
      aux_sym__note_line_token1,
  [1125] = 1,
    ACTIONS(553), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1129] = 1,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
  [1133] = 1,
    ACTIONS(557), 1,
      aux_sym__note_line_token1,
  [1137] = 1,
    ACTIONS(559), 1,
      anon_sym_LBRACK,
  [1141] = 1,
    ACTIONS(561), 1,
      anon_sym_GT_GT,
  [1145] = 1,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
  [1149] = 1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1153] = 1,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
  [1157] = 1,
    ACTIONS(569), 1,
      aux_sym__note_line_token1,
  [1161] = 1,
    ACTIONS(571), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1165] = 1,
    ACTIONS(573), 1,
      aux_sym__note_line_token1,
  [1169] = 1,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
  [1173] = 1,
    ACTIONS(577), 1,
      aux_sym__note_line_token1,
  [1177] = 1,
    ACTIONS(579), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(42)] = 0,
  [SMALL_STATE(43)] = 76,
  [SMALL_STATE(44)] = 152,
  [SMALL_STATE(45)] = 203,
  [SMALL_STATE(46)] = 254,
  [SMALL_STATE(47)] = 302,
  [SMALL_STATE(48)] = 350,
  [SMALL_STATE(49)] = 398,
  [SMALL_STATE(50)] = 446,
  [SMALL_STATE(51)] = 494,
  [SMALL_STATE(52)] = 542,
  [SMALL_STATE(53)] = 590,
  [SMALL_STATE(54)] = 638,
  [SMALL_STATE(55)] = 686,
  [SMALL_STATE(56)] = 734,
  [SMALL_STATE(57)] = 782,
  [SMALL_STATE(58)] = 792,
  [SMALL_STATE(59)] = 802,
  [SMALL_STATE(60)] = 812,
  [SMALL_STATE(61)] = 822,
  [SMALL_STATE(62)] = 832,
  [SMALL_STATE(63)] = 842,
  [SMALL_STATE(64)] = 852,
  [SMALL_STATE(65)] = 862,
  [SMALL_STATE(66)] = 872,
  [SMALL_STATE(67)] = 882,
  [SMALL_STATE(68)] = 892,
  [SMALL_STATE(69)] = 902,
  [SMALL_STATE(70)] = 912,
  [SMALL_STATE(71)] = 922,
  [SMALL_STATE(72)] = 932,
  [SMALL_STATE(73)] = 942,
  [SMALL_STATE(74)] = 952,
  [SMALL_STATE(75)] = 962,
  [SMALL_STATE(76)] = 969,
  [SMALL_STATE(77)] = 976,
  [SMALL_STATE(78)] = 983,
  [SMALL_STATE(79)] = 990,
  [SMALL_STATE(80)] = 997,
  [SMALL_STATE(81)] = 1004,
  [SMALL_STATE(82)] = 1011,
  [SMALL_STATE(83)] = 1018,
  [SMALL_STATE(84)] = 1025,
  [SMALL_STATE(85)] = 1029,
  [SMALL_STATE(86)] = 1033,
  [SMALL_STATE(87)] = 1037,
  [SMALL_STATE(88)] = 1041,
  [SMALL_STATE(89)] = 1045,
  [SMALL_STATE(90)] = 1049,
  [SMALL_STATE(91)] = 1053,
  [SMALL_STATE(92)] = 1057,
  [SMALL_STATE(93)] = 1061,
  [SMALL_STATE(94)] = 1065,
  [SMALL_STATE(95)] = 1069,
  [SMALL_STATE(96)] = 1073,
  [SMALL_STATE(97)] = 1077,
  [SMALL_STATE(98)] = 1081,
  [SMALL_STATE(99)] = 1085,
  [SMALL_STATE(100)] = 1089,
  [SMALL_STATE(101)] = 1093,
  [SMALL_STATE(102)] = 1097,
  [SMALL_STATE(103)] = 1101,
  [SMALL_STATE(104)] = 1105,
  [SMALL_STATE(105)] = 1109,
  [SMALL_STATE(106)] = 1113,
  [SMALL_STATE(107)] = 1117,
  [SMALL_STATE(108)] = 1121,
  [SMALL_STATE(109)] = 1125,
  [SMALL_STATE(110)] = 1129,
  [SMALL_STATE(111)] = 1133,
  [SMALL_STATE(112)] = 1137,
  [SMALL_STATE(113)] = 1141,
  [SMALL_STATE(114)] = 1145,
  [SMALL_STATE(115)] = 1149,
  [SMALL_STATE(116)] = 1153,
  [SMALL_STATE(117)] = 1157,
  [SMALL_STATE(118)] = 1161,
  [SMALL_STATE(119)] = 1165,
  [SMALL_STATE(120)] = 1169,
  [SMALL_STATE(121)] = 1173,
  [SMALL_STATE(122)] = 1177,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(43),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(82),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(75),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(44),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(103),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(89),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(91),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(51),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(58),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(65),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item, 2),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item, 2), SHIFT_REPEAT(66),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [519] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
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
