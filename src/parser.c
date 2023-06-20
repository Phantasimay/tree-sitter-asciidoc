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
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 41
#define SYMBOL_COUNT 119
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
  aux_sym_code_token2 = 18,
  anon_sym_RBRACK_LF = 19,
  anon_sym_SLASH_SLASH = 20,
  aux_sym_comment_token1 = 21,
  anon_sym_image_COLON_COLON = 22,
  aux_sym_image_token1 = 23,
  anon_sym_LBRACK = 24,
  aux_sym_image_token2 = 25,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 26,
  aux_sym_table_token1 = 27,
  anon_sym_COLON_COLON = 28,
  anon_sym_audio_COLON_COLON = 29,
  aux_sym_audio_token1 = 30,
  anon_sym_RBRACK = 31,
  anon_sym_video_COLON_COLON = 32,
  anon_sym_kbd_COLON_LBRACK = 33,
  aux_sym_kbd_token1 = 34,
  anon_sym_footnote_COLON_LBRACK = 35,
  aux_sym_footnote_token1 = 36,
  aux_sym_url_token1 = 37,
  anon_sym_LT_LT = 38,
  anon_sym_COMMA = 39,
  anon_sym_GT_GT = 40,
  anon_sym_xref_COLON = 41,
  sym_emphasis = 42,
  sym_strong = 43,
  sym_monospace = 44,
  sym_superscript = 45,
  sym_subscript = 46,
  anon_sym_pass_COLON_LBRACK = 47,
  anon_sym_LBRACEblank_RBRACE = 48,
  anon_sym_LBRACEempty_RBRACE = 49,
  anon_sym_LBRACEsp_RBRACE = 50,
  anon_sym_LBRACEnbsp_RBRACE = 51,
  anon_sym_LBRACEzwsp_RBRACE = 52,
  anon_sym_LBRACEwj_RBRACE = 53,
  anon_sym_LBRACEapos_RBRACE = 54,
  anon_sym_LBRACEquot_RBRACE = 55,
  anon_sym_LBRACElsquo_RBRACE = 56,
  anon_sym_LBRACErsquo_RBRACE = 57,
  anon_sym_LBRACEldquo_RBRACE = 58,
  anon_sym_LBRACErdquo_RBRACE = 59,
  anon_sym_LBRACEdeg_RBRACE = 60,
  anon_sym_LBRACEplus_RBRACE = 61,
  anon_sym_LBRACEbrvbar_RBRACE = 62,
  anon_sym_LBRACEvbar_RBRACE = 63,
  anon_sym_LBRACEamp_RBRACE = 64,
  anon_sym_LBRACElt_RBRACE = 65,
  anon_sym_LBRACEgt_RBRACE = 66,
  anon_sym_LBRACEstartsb_RBRACE = 67,
  anon_sym_LBRACEendsb_RBRACE = 68,
  anon_sym_LBRACEcaret_RBRACE = 69,
  anon_sym_LBRACEasterisk_RBRACE = 70,
  anon_sym_LBRACEtilde_RBRACE = 71,
  anon_sym_LBRACEbackslash_RBRACE = 72,
  anon_sym_LBRACEbacktick_RBRACE = 73,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 74,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 75,
  anon_sym_LBRACEcpp_RBRACE = 76,
  anon_sym_LBRACEpp_RBRACE = 77,
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
  sym_comment = 99,
  sym_image = 100,
  sym_table = 101,
  sym_description_list = 102,
  sym_audio = 103,
  sym_video = 104,
  sym_paragraph = 105,
  sym__inline_element = 106,
  sym_kbd = 107,
  sym_footnote = 108,
  sym_url = 109,
  sym_xref = 110,
  sym__inline_xref = 111,
  sym__xref = 112,
  sym_passthrough = 113,
  sym_replacement = 114,
  aux_sym_document_repeat1 = 115,
  aux_sym__note_block_repeat1 = 116,
  aux_sym_table_repeat1 = 117,
  aux_sym_paragraph_repeat1 = 118,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(253);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == ',') ADVANCE(444);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'I') ADVANCE(297);
      if (lookahead == 'N') ADVANCE(302);
      if (lookahead == 'T') ADVANCE(294);
      if (lookahead == 'W') ADVANCE(290);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead == ']') ADVANCE(432);
      if (lookahead == '^') ADVANCE(248);
      if (lookahead == '`') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 'v') ADVANCE(327);
      if (lookahead == 'x') ADVANCE(335);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '|') ADVANCE(102);
      if (lookahead == '~') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(260);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(426);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ':') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(264);
      if (lookahead == ':') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == ':') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead == ':') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == ':') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == ':') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == '^') ADVANCE(61);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'k') ADVANCE(375);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == 'x') ADVANCE(394);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '~') ADVANCE(250);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(34);
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
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(262);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(412);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(429);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(267);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '*') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 37:
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(442);
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(439);
      if (lookahead == '^') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(440);
      if (lookahead == '_') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(441);
      if (lookahead == '`') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '^') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '_') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '`') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(430);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(420);
      END_STATE();
    case 53:
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(433);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '[') ADVANCE(434);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '[') ADVANCE(457);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '[') ADVANCE(437);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(430);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(420);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(433);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '^') ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '_') ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '`') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(89);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(83);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(76);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ']') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ']') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ']') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ']') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(21);
      END_STATE();
    case 97:
      if (lookahead == '<') ADVANCE(443);
      END_STATE();
    case 98:
      if (lookahead == '=') ADVANCE(428);
      END_STATE();
    case 99:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 101:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 104:
      if (lookahead == '>') ADVANCE(445);
      END_STATE();
    case 105:
      if (lookahead == '[') ADVANCE(434);
      END_STATE();
    case 106:
      if (lookahead == '[') ADVANCE(457);
      END_STATE();
    case 107:
      if (lookahead == '[') ADVANCE(437);
      END_STATE();
    case 108:
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == ']') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 109:
      if (lookahead == ']') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(110)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 111:
      if (lookahead == '^') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      if (lookahead == '`') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'g') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == 'q') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(125);
      if (lookahead == 'w') ADVANCE(146);
      if (lookahead == 'z') ADVANCE(212);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(197);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(231);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(238);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(221);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(164);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 146:
      if (lookahead == 'j') ADVANCE(218);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(228);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(239);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(240);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 179:
      if (lookahead == 'q') ADVANCE(206);
      END_STATE();
    case 180:
      if (lookahead == 'q') ADVANCE(208);
      END_STATE();
    case 181:
      if (lookahead == 'q') ADVANCE(209);
      END_STATE();
    case 182:
      if (lookahead == 'q') ADVANCE(210);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 205:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 212:
      if (lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 213:
      if (lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 214:
      if (lookahead == '}') ADVANCE(476);
      END_STATE();
    case 215:
      if (lookahead == '}') ADVANCE(475);
      END_STATE();
    case 216:
      if (lookahead == '}') ADVANCE(487);
      END_STATE();
    case 217:
      if (lookahead == '}') ADVANCE(460);
      END_STATE();
    case 218:
      if (lookahead == '}') ADVANCE(463);
      END_STATE();
    case 219:
      if (lookahead == '}') ADVANCE(474);
      END_STATE();
    case 220:
      if (lookahead == '}') ADVANCE(486);
      END_STATE();
    case 221:
      if (lookahead == '}') ADVANCE(470);
      END_STATE();
    case 222:
      if (lookahead == '}') ADVANCE(464);
      END_STATE();
    case 223:
      if (lookahead == '}') ADVANCE(461);
      END_STATE();
    case 224:
      if (lookahead == '}') ADVANCE(471);
      END_STATE();
    case 225:
      if (lookahead == '}') ADVANCE(465);
      END_STATE();
    case 226:
      if (lookahead == '}') ADVANCE(473);
      END_STATE();
    case 227:
      if (lookahead == '}') ADVANCE(462);
      END_STATE();
    case 228:
      if (lookahead == '}') ADVANCE(458);
      END_STATE();
    case 229:
      if (lookahead == '}') ADVANCE(479);
      END_STATE();
    case 230:
      if (lookahead == '}') ADVANCE(459);
      END_STATE();
    case 231:
      if (lookahead == '}') ADVANCE(478);
      END_STATE();
    case 232:
      if (lookahead == '}') ADVANCE(468);
      END_STATE();
    case 233:
      if (lookahead == '}') ADVANCE(466);
      END_STATE();
    case 234:
      if (lookahead == '}') ADVANCE(469);
      END_STATE();
    case 235:
      if (lookahead == '}') ADVANCE(467);
      END_STATE();
    case 236:
      if (lookahead == '}') ADVANCE(481);
      END_STATE();
    case 237:
      if (lookahead == '}') ADVANCE(472);
      END_STATE();
    case 238:
      if (lookahead == '}') ADVANCE(477);
      END_STATE();
    case 239:
      if (lookahead == '}') ADVANCE(480);
      END_STATE();
    case 240:
      if (lookahead == '}') ADVANCE(483);
      END_STATE();
    case 241:
      if (lookahead == '}') ADVANCE(482);
      END_STATE();
    case 242:
      if (lookahead == '}') ADVANCE(484);
      END_STATE();
    case 243:
      if (lookahead == '}') ADVANCE(485);
      END_STATE();
    case 244:
      if (lookahead == '~') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 245:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 247:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 248:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 249:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 250:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 251:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 252:
      if (eof) ADVANCE(253);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(348);
      if (lookahead == 'I') ADVANCE(356);
      if (lookahead == 'N') ADVANCE(361);
      if (lookahead == 'T') ADVANCE(353);
      if (lookahead == 'W') ADVANCE(349);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(61);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'k') ADVANCE(375);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(386);
      if (lookahead == 'x') ADVANCE(394);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead == '|') ADVANCE(103);
      if (lookahead == '~') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__list_item_token1);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'A') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'A') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'A') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'E') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'G') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'M') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'N') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'N') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'N') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'N') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'O') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'O') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'O') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'P') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'P') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'R') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'R') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'T') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'T') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'T') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'T') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'U') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'a') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'a') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'b') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'd') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'd') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'd') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'f') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'g') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'i') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'm') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'n') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 's') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead == 'u') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '+') ADVANCE(246);
      if (lookahead == '.') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '_') ADVANCE(342);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(48);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(23);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(54);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(447);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(51);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(372);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(366);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(359);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(357);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(363);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(364);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(354);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(371);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(360);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(362);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'P') ADVANCE(344);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(358);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(351);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(355);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(350);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(384);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(345);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(383);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(346);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(347);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(379);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 's') ADVANCE(396);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 's') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 't') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 't') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(376);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(50);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(25);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(55);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(52);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(27);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(56);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(53);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(29);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == ':') ADVANCE(31);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(400);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (lookahead == '_') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(419);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(419);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(419);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(419);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(276);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_table_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '\n') ADVANCE(426);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (lookahead == '+') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_kbd_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_footnote_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '_') ADVANCE(448);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '*') ADVANCE(450);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '`') ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '^') ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 252},
  [2] = {.lex_state = 252},
  [3] = {.lex_state = 252},
  [4] = {.lex_state = 252},
  [5] = {.lex_state = 252},
  [6] = {.lex_state = 252},
  [7] = {.lex_state = 252},
  [8] = {.lex_state = 252},
  [9] = {.lex_state = 252},
  [10] = {.lex_state = 252},
  [11] = {.lex_state = 252},
  [12] = {.lex_state = 252},
  [13] = {.lex_state = 252},
  [14] = {.lex_state = 252},
  [15] = {.lex_state = 252},
  [16] = {.lex_state = 252},
  [17] = {.lex_state = 252},
  [18] = {.lex_state = 252},
  [19] = {.lex_state = 252},
  [20] = {.lex_state = 252},
  [21] = {.lex_state = 252},
  [22] = {.lex_state = 252},
  [23] = {.lex_state = 252},
  [24] = {.lex_state = 252},
  [25] = {.lex_state = 252},
  [26] = {.lex_state = 252},
  [27] = {.lex_state = 252},
  [28] = {.lex_state = 252},
  [29] = {.lex_state = 252},
  [30] = {.lex_state = 252},
  [31] = {.lex_state = 252},
  [32] = {.lex_state = 252},
  [33] = {.lex_state = 252},
  [34] = {.lex_state = 252},
  [35] = {.lex_state = 252},
  [36] = {.lex_state = 252},
  [37] = {.lex_state = 252},
  [38] = {.lex_state = 252},
  [39] = {.lex_state = 252},
  [40] = {.lex_state = 252},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 417},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 417},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 417},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 108},
  [75] = {.lex_state = 425},
  [76] = {.lex_state = 109},
  [77] = {.lex_state = 109},
  [78] = {.lex_state = 425},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 109},
  [81] = {.lex_state = 110},
  [82] = {.lex_state = 109},
  [83] = {.lex_state = 418},
  [84] = {.lex_state = 108},
  [85] = {.lex_state = 252},
  [86] = {.lex_state = 425},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 245},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 245},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 245},
  [94] = {.lex_state = 425},
  [95] = {.lex_state = 245},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 108},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 245},
  [100] = {.lex_state = 421},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 245},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 252},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 108},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 108},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 0},
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
    [sym_document] = STATE(91),
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
    [sym__caution] = STATE(30),
    [sym__caution_block] = STATE(30),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(31),
    [sym__warning_block] = STATE(31),
    [sym_list] = STATE(3),
    [aux_sym__list_item] = STATE(71),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(41),
    [sym_kbd] = STATE(41),
    [sym_footnote] = STATE(41),
    [sym_url] = STATE(41),
    [sym_xref] = STATE(41),
    [sym__inline_xref] = STATE(47),
    [sym__xref] = STATE(47),
    [sym_passthrough] = STATE(41),
    [sym_replacement] = STATE(41),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(41),
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
    [anon_sym_image_COLON_COLON] = ACTIONS(35),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(37),
    [anon_sym_audio_COLON_COLON] = ACTIONS(39),
    [anon_sym_video_COLON_COLON] = ACTIONS(41),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(43),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(45),
    [aux_sym_url_token1] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_xref_COLON] = ACTIONS(51),
    [sym_emphasis] = ACTIONS(53),
    [sym_strong] = ACTIONS(53),
    [sym_monospace] = ACTIONS(53),
    [sym_superscript] = ACTIONS(53),
    [sym_subscript] = ACTIONS(55),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(59),
  },
  [2] = {
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
    [sym__caution] = STATE(30),
    [sym__caution_block] = STATE(30),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(31),
    [sym__warning_block] = STATE(31),
    [sym_list] = STATE(2),
    [aux_sym__list_item] = STATE(71),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(41),
    [sym_kbd] = STATE(41),
    [sym_footnote] = STATE(41),
    [sym_url] = STATE(41),
    [sym_xref] = STATE(41),
    [sym__inline_xref] = STATE(47),
    [sym__xref] = STATE(47),
    [sym_passthrough] = STATE(41),
    [sym_replacement] = STATE(41),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_title] = ACTIONS(63),
    [anon_sym_NOTE_COLON] = ACTIONS(66),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(69),
    [anon_sym_TIP_COLON] = ACTIONS(72),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(75),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(78),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(81),
    [anon_sym_CAUTION_COLON] = ACTIONS(84),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(87),
    [anon_sym_WARNING_COLON] = ACTIONS(90),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(93),
    [aux_sym__list_item_token1] = ACTIONS(96),
    [aux_sym_code_token1] = ACTIONS(99),
    [aux_sym_code_token2] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(105),
    [anon_sym_image_COLON_COLON] = ACTIONS(108),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(111),
    [anon_sym_audio_COLON_COLON] = ACTIONS(114),
    [anon_sym_video_COLON_COLON] = ACTIONS(117),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(120),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(123),
    [aux_sym_url_token1] = ACTIONS(126),
    [anon_sym_LT_LT] = ACTIONS(129),
    [anon_sym_xref_COLON] = ACTIONS(132),
    [sym_emphasis] = ACTIONS(135),
    [sym_strong] = ACTIONS(135),
    [sym_monospace] = ACTIONS(135),
    [sym_superscript] = ACTIONS(135),
    [sym_subscript] = ACTIONS(138),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(141),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(144),
  },
  [3] = {
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
    [sym__caution] = STATE(30),
    [sym__caution_block] = STATE(30),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(31),
    [sym__warning_block] = STATE(31),
    [sym_list] = STATE(2),
    [aux_sym__list_item] = STATE(71),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(41),
    [sym_kbd] = STATE(41),
    [sym_footnote] = STATE(41),
    [sym_url] = STATE(41),
    [sym_xref] = STATE(41),
    [sym__inline_xref] = STATE(47),
    [sym__xref] = STATE(47),
    [sym_passthrough] = STATE(41),
    [sym_replacement] = STATE(41),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_title] = ACTIONS(149),
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
    [anon_sym_image_COLON_COLON] = ACTIONS(35),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(37),
    [anon_sym_audio_COLON_COLON] = ACTIONS(39),
    [anon_sym_video_COLON_COLON] = ACTIONS(41),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(43),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(45),
    [aux_sym_url_token1] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_xref_COLON] = ACTIONS(51),
    [sym_emphasis] = ACTIONS(53),
    [sym_strong] = ACTIONS(53),
    [sym_monospace] = ACTIONS(53),
    [sym_superscript] = ACTIONS(53),
    [sym_subscript] = ACTIONS(55),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(59),
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
    [aux_sym_code_token2] = ACTIONS(153),
    [anon_sym_SLASH_SLASH] = ACTIONS(151),
    [anon_sym_image_COLON_COLON] = ACTIONS(151),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(151),
    [anon_sym_audio_COLON_COLON] = ACTIONS(151),
    [anon_sym_video_COLON_COLON] = ACTIONS(151),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(151),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(151),
    [aux_sym_url_token1] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(151),
    [anon_sym_xref_COLON] = ACTIONS(153),
    [sym_emphasis] = ACTIONS(153),
    [sym_strong] = ACTIONS(153),
    [sym_monospace] = ACTIONS(153),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(151),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(151),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_title] = ACTIONS(155),
    [anon_sym_NOTE_COLON] = ACTIONS(155),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(155),
    [anon_sym_TIP_COLON] = ACTIONS(155),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(155),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(155),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(155),
    [anon_sym_CAUTION_COLON] = ACTIONS(155),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(155),
    [anon_sym_WARNING_COLON] = ACTIONS(155),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(155),
    [aux_sym__list_item_token1] = ACTIONS(155),
    [aux_sym_code_token1] = ACTIONS(155),
    [aux_sym_code_token2] = ACTIONS(157),
    [anon_sym_SLASH_SLASH] = ACTIONS(155),
    [anon_sym_image_COLON_COLON] = ACTIONS(155),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(155),
    [anon_sym_audio_COLON_COLON] = ACTIONS(155),
    [anon_sym_video_COLON_COLON] = ACTIONS(155),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(155),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(155),
    [aux_sym_url_token1] = ACTIONS(157),
    [anon_sym_LT_LT] = ACTIONS(155),
    [anon_sym_xref_COLON] = ACTIONS(157),
    [sym_emphasis] = ACTIONS(157),
    [sym_strong] = ACTIONS(157),
    [sym_monospace] = ACTIONS(157),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(155),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(155),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(155),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(155),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_title] = ACTIONS(159),
    [anon_sym_NOTE_COLON] = ACTIONS(159),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(159),
    [anon_sym_TIP_COLON] = ACTIONS(159),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(159),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(159),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(159),
    [anon_sym_CAUTION_COLON] = ACTIONS(159),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(159),
    [anon_sym_WARNING_COLON] = ACTIONS(159),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(159),
    [aux_sym__list_item_token1] = ACTIONS(159),
    [aux_sym_code_token1] = ACTIONS(159),
    [aux_sym_code_token2] = ACTIONS(161),
    [anon_sym_SLASH_SLASH] = ACTIONS(159),
    [anon_sym_image_COLON_COLON] = ACTIONS(159),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(159),
    [anon_sym_audio_COLON_COLON] = ACTIONS(159),
    [anon_sym_video_COLON_COLON] = ACTIONS(159),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(159),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(159),
    [aux_sym_url_token1] = ACTIONS(161),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_xref_COLON] = ACTIONS(161),
    [sym_emphasis] = ACTIONS(161),
    [sym_strong] = ACTIONS(161),
    [sym_monospace] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(159),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(159),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(159),
  },
  [7] = {
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
    [aux_sym__list_item_token1] = ACTIONS(163),
    [aux_sym_code_token1] = ACTIONS(163),
    [aux_sym_code_token2] = ACTIONS(165),
    [anon_sym_SLASH_SLASH] = ACTIONS(163),
    [anon_sym_image_COLON_COLON] = ACTIONS(163),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(163),
    [anon_sym_audio_COLON_COLON] = ACTIONS(163),
    [anon_sym_video_COLON_COLON] = ACTIONS(163),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(163),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(163),
    [aux_sym_url_token1] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(163),
    [anon_sym_xref_COLON] = ACTIONS(165),
    [sym_emphasis] = ACTIONS(165),
    [sym_strong] = ACTIONS(165),
    [sym_monospace] = ACTIONS(165),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(163),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(163),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_title] = ACTIONS(167),
    [anon_sym_NOTE_COLON] = ACTIONS(167),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(167),
    [anon_sym_TIP_COLON] = ACTIONS(167),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(167),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(167),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(167),
    [anon_sym_CAUTION_COLON] = ACTIONS(167),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(167),
    [anon_sym_WARNING_COLON] = ACTIONS(167),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(167),
    [aux_sym__list_item_token1] = ACTIONS(167),
    [aux_sym_code_token1] = ACTIONS(167),
    [aux_sym_code_token2] = ACTIONS(169),
    [anon_sym_SLASH_SLASH] = ACTIONS(167),
    [anon_sym_image_COLON_COLON] = ACTIONS(167),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(167),
    [anon_sym_audio_COLON_COLON] = ACTIONS(167),
    [anon_sym_video_COLON_COLON] = ACTIONS(167),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(167),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(167),
    [aux_sym_url_token1] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_xref_COLON] = ACTIONS(169),
    [sym_emphasis] = ACTIONS(169),
    [sym_strong] = ACTIONS(169),
    [sym_monospace] = ACTIONS(169),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(167),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(167),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(167),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(167),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_title] = ACTIONS(171),
    [anon_sym_NOTE_COLON] = ACTIONS(171),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(171),
    [anon_sym_TIP_COLON] = ACTIONS(171),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(171),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(171),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(171),
    [anon_sym_CAUTION_COLON] = ACTIONS(171),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(171),
    [anon_sym_WARNING_COLON] = ACTIONS(171),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(171),
    [aux_sym__list_item_token1] = ACTIONS(171),
    [aux_sym_code_token1] = ACTIONS(171),
    [aux_sym_code_token2] = ACTIONS(173),
    [anon_sym_SLASH_SLASH] = ACTIONS(171),
    [anon_sym_image_COLON_COLON] = ACTIONS(171),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(171),
    [anon_sym_audio_COLON_COLON] = ACTIONS(171),
    [anon_sym_video_COLON_COLON] = ACTIONS(171),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(171),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(171),
    [aux_sym_url_token1] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_xref_COLON] = ACTIONS(173),
    [sym_emphasis] = ACTIONS(173),
    [sym_strong] = ACTIONS(173),
    [sym_monospace] = ACTIONS(173),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(171),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(171),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_title] = ACTIONS(175),
    [anon_sym_NOTE_COLON] = ACTIONS(175),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(175),
    [anon_sym_TIP_COLON] = ACTIONS(175),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(175),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(175),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(175),
    [anon_sym_CAUTION_COLON] = ACTIONS(175),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(175),
    [anon_sym_WARNING_COLON] = ACTIONS(175),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(175),
    [aux_sym__list_item_token1] = ACTIONS(175),
    [aux_sym_code_token1] = ACTIONS(175),
    [aux_sym_code_token2] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [anon_sym_image_COLON_COLON] = ACTIONS(175),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(175),
    [anon_sym_audio_COLON_COLON] = ACTIONS(175),
    [anon_sym_video_COLON_COLON] = ACTIONS(175),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(175),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(175),
    [aux_sym_url_token1] = ACTIONS(177),
    [anon_sym_LT_LT] = ACTIONS(175),
    [anon_sym_xref_COLON] = ACTIONS(177),
    [sym_emphasis] = ACTIONS(177),
    [sym_strong] = ACTIONS(177),
    [sym_monospace] = ACTIONS(177),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(175),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(175),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(175),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(175),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_title] = ACTIONS(179),
    [anon_sym_NOTE_COLON] = ACTIONS(179),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(179),
    [anon_sym_TIP_COLON] = ACTIONS(179),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(179),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(179),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(179),
    [anon_sym_CAUTION_COLON] = ACTIONS(179),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(179),
    [anon_sym_WARNING_COLON] = ACTIONS(179),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(179),
    [aux_sym__list_item_token1] = ACTIONS(179),
    [aux_sym_code_token1] = ACTIONS(179),
    [aux_sym_code_token2] = ACTIONS(181),
    [anon_sym_SLASH_SLASH] = ACTIONS(179),
    [anon_sym_image_COLON_COLON] = ACTIONS(179),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(179),
    [anon_sym_audio_COLON_COLON] = ACTIONS(179),
    [anon_sym_video_COLON_COLON] = ACTIONS(179),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(179),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(179),
    [aux_sym_url_token1] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_xref_COLON] = ACTIONS(181),
    [sym_emphasis] = ACTIONS(181),
    [sym_strong] = ACTIONS(181),
    [sym_monospace] = ACTIONS(181),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(179),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(179),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(179),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_title] = ACTIONS(183),
    [anon_sym_NOTE_COLON] = ACTIONS(183),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(183),
    [anon_sym_TIP_COLON] = ACTIONS(183),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(183),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(183),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(183),
    [anon_sym_CAUTION_COLON] = ACTIONS(183),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(183),
    [anon_sym_WARNING_COLON] = ACTIONS(183),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(183),
    [aux_sym__list_item_token1] = ACTIONS(183),
    [aux_sym_code_token1] = ACTIONS(183),
    [aux_sym_code_token2] = ACTIONS(185),
    [anon_sym_SLASH_SLASH] = ACTIONS(183),
    [anon_sym_image_COLON_COLON] = ACTIONS(183),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(183),
    [anon_sym_audio_COLON_COLON] = ACTIONS(183),
    [anon_sym_video_COLON_COLON] = ACTIONS(183),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(183),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(183),
    [aux_sym_url_token1] = ACTIONS(185),
    [anon_sym_LT_LT] = ACTIONS(183),
    [anon_sym_xref_COLON] = ACTIONS(185),
    [sym_emphasis] = ACTIONS(185),
    [sym_strong] = ACTIONS(185),
    [sym_monospace] = ACTIONS(185),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(183),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(183),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(183),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(183),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_title] = ACTIONS(187),
    [anon_sym_NOTE_COLON] = ACTIONS(187),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(187),
    [anon_sym_TIP_COLON] = ACTIONS(187),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(187),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(187),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(187),
    [anon_sym_CAUTION_COLON] = ACTIONS(187),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(187),
    [anon_sym_WARNING_COLON] = ACTIONS(187),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(187),
    [aux_sym__list_item_token1] = ACTIONS(187),
    [aux_sym_code_token1] = ACTIONS(187),
    [aux_sym_code_token2] = ACTIONS(189),
    [anon_sym_SLASH_SLASH] = ACTIONS(187),
    [anon_sym_image_COLON_COLON] = ACTIONS(187),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(187),
    [anon_sym_audio_COLON_COLON] = ACTIONS(187),
    [anon_sym_video_COLON_COLON] = ACTIONS(187),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(187),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(187),
    [aux_sym_url_token1] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(187),
    [anon_sym_xref_COLON] = ACTIONS(189),
    [sym_emphasis] = ACTIONS(189),
    [sym_strong] = ACTIONS(189),
    [sym_monospace] = ACTIONS(189),
    [sym_superscript] = ACTIONS(189),
    [sym_subscript] = ACTIONS(187),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(187),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(187),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_title] = ACTIONS(191),
    [anon_sym_NOTE_COLON] = ACTIONS(191),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(191),
    [anon_sym_TIP_COLON] = ACTIONS(191),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(191),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(191),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(191),
    [anon_sym_CAUTION_COLON] = ACTIONS(191),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(191),
    [anon_sym_WARNING_COLON] = ACTIONS(191),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(191),
    [aux_sym__list_item_token1] = ACTIONS(191),
    [aux_sym_code_token1] = ACTIONS(191),
    [aux_sym_code_token2] = ACTIONS(193),
    [anon_sym_SLASH_SLASH] = ACTIONS(191),
    [anon_sym_image_COLON_COLON] = ACTIONS(191),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(191),
    [anon_sym_audio_COLON_COLON] = ACTIONS(191),
    [anon_sym_video_COLON_COLON] = ACTIONS(191),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(191),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(191),
    [aux_sym_url_token1] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(191),
    [anon_sym_xref_COLON] = ACTIONS(193),
    [sym_emphasis] = ACTIONS(193),
    [sym_strong] = ACTIONS(193),
    [sym_monospace] = ACTIONS(193),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(191),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(191),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(191),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_title] = ACTIONS(195),
    [anon_sym_NOTE_COLON] = ACTIONS(195),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(195),
    [anon_sym_TIP_COLON] = ACTIONS(195),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(195),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(195),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(195),
    [anon_sym_CAUTION_COLON] = ACTIONS(195),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(195),
    [anon_sym_WARNING_COLON] = ACTIONS(195),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(195),
    [aux_sym__list_item_token1] = ACTIONS(195),
    [aux_sym_code_token1] = ACTIONS(195),
    [aux_sym_code_token2] = ACTIONS(197),
    [anon_sym_SLASH_SLASH] = ACTIONS(195),
    [anon_sym_image_COLON_COLON] = ACTIONS(195),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(195),
    [anon_sym_audio_COLON_COLON] = ACTIONS(195),
    [anon_sym_video_COLON_COLON] = ACTIONS(195),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(195),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(195),
    [aux_sym_url_token1] = ACTIONS(197),
    [anon_sym_LT_LT] = ACTIONS(195),
    [anon_sym_xref_COLON] = ACTIONS(197),
    [sym_emphasis] = ACTIONS(197),
    [sym_strong] = ACTIONS(197),
    [sym_monospace] = ACTIONS(197),
    [sym_superscript] = ACTIONS(197),
    [sym_subscript] = ACTIONS(195),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(195),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(195),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(195),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_title] = ACTIONS(199),
    [anon_sym_NOTE_COLON] = ACTIONS(199),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(199),
    [anon_sym_TIP_COLON] = ACTIONS(199),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(199),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(199),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(199),
    [anon_sym_CAUTION_COLON] = ACTIONS(199),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(199),
    [anon_sym_WARNING_COLON] = ACTIONS(199),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(199),
    [aux_sym__list_item_token1] = ACTIONS(199),
    [aux_sym_code_token1] = ACTIONS(199),
    [aux_sym_code_token2] = ACTIONS(201),
    [anon_sym_SLASH_SLASH] = ACTIONS(199),
    [anon_sym_image_COLON_COLON] = ACTIONS(199),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(199),
    [anon_sym_audio_COLON_COLON] = ACTIONS(199),
    [anon_sym_video_COLON_COLON] = ACTIONS(199),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(199),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(199),
    [aux_sym_url_token1] = ACTIONS(201),
    [anon_sym_LT_LT] = ACTIONS(199),
    [anon_sym_xref_COLON] = ACTIONS(201),
    [sym_emphasis] = ACTIONS(201),
    [sym_strong] = ACTIONS(201),
    [sym_monospace] = ACTIONS(201),
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(199),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(199),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(199),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_title] = ACTIONS(203),
    [anon_sym_NOTE_COLON] = ACTIONS(203),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(203),
    [anon_sym_TIP_COLON] = ACTIONS(203),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(203),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(203),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(203),
    [anon_sym_CAUTION_COLON] = ACTIONS(203),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(203),
    [anon_sym_WARNING_COLON] = ACTIONS(203),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(203),
    [aux_sym__list_item_token1] = ACTIONS(203),
    [aux_sym_code_token1] = ACTIONS(203),
    [aux_sym_code_token2] = ACTIONS(205),
    [anon_sym_SLASH_SLASH] = ACTIONS(203),
    [anon_sym_image_COLON_COLON] = ACTIONS(203),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(203),
    [anon_sym_audio_COLON_COLON] = ACTIONS(203),
    [anon_sym_video_COLON_COLON] = ACTIONS(203),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(203),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(203),
    [aux_sym_url_token1] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(203),
    [anon_sym_xref_COLON] = ACTIONS(205),
    [sym_emphasis] = ACTIONS(205),
    [sym_strong] = ACTIONS(205),
    [sym_monospace] = ACTIONS(205),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(203),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(203),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(203),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(203),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_title] = ACTIONS(207),
    [anon_sym_NOTE_COLON] = ACTIONS(207),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(207),
    [anon_sym_TIP_COLON] = ACTIONS(207),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(207),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(207),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(207),
    [anon_sym_CAUTION_COLON] = ACTIONS(207),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(207),
    [anon_sym_WARNING_COLON] = ACTIONS(207),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(207),
    [aux_sym__list_item_token1] = ACTIONS(207),
    [aux_sym_code_token1] = ACTIONS(207),
    [aux_sym_code_token2] = ACTIONS(209),
    [anon_sym_SLASH_SLASH] = ACTIONS(207),
    [anon_sym_image_COLON_COLON] = ACTIONS(207),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(207),
    [anon_sym_audio_COLON_COLON] = ACTIONS(207),
    [anon_sym_video_COLON_COLON] = ACTIONS(207),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(207),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(207),
    [aux_sym_url_token1] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_xref_COLON] = ACTIONS(209),
    [sym_emphasis] = ACTIONS(209),
    [sym_strong] = ACTIONS(209),
    [sym_monospace] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(207),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(207),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(207),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_title] = ACTIONS(211),
    [anon_sym_NOTE_COLON] = ACTIONS(211),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(211),
    [anon_sym_TIP_COLON] = ACTIONS(211),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(211),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(211),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(211),
    [anon_sym_CAUTION_COLON] = ACTIONS(211),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(211),
    [anon_sym_WARNING_COLON] = ACTIONS(211),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(211),
    [aux_sym__list_item_token1] = ACTIONS(211),
    [aux_sym_code_token1] = ACTIONS(211),
    [aux_sym_code_token2] = ACTIONS(213),
    [anon_sym_SLASH_SLASH] = ACTIONS(211),
    [anon_sym_image_COLON_COLON] = ACTIONS(211),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(211),
    [anon_sym_audio_COLON_COLON] = ACTIONS(211),
    [anon_sym_video_COLON_COLON] = ACTIONS(211),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(211),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(211),
    [aux_sym_url_token1] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_xref_COLON] = ACTIONS(213),
    [sym_emphasis] = ACTIONS(213),
    [sym_strong] = ACTIONS(213),
    [sym_monospace] = ACTIONS(213),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(211),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(211),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(211),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(211),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [sym_title] = ACTIONS(215),
    [anon_sym_NOTE_COLON] = ACTIONS(215),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(215),
    [anon_sym_TIP_COLON] = ACTIONS(215),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(215),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(215),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(215),
    [anon_sym_CAUTION_COLON] = ACTIONS(215),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(215),
    [anon_sym_WARNING_COLON] = ACTIONS(215),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(215),
    [aux_sym__list_item_token1] = ACTIONS(215),
    [aux_sym_code_token1] = ACTIONS(215),
    [aux_sym_code_token2] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [anon_sym_image_COLON_COLON] = ACTIONS(215),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(215),
    [anon_sym_audio_COLON_COLON] = ACTIONS(215),
    [anon_sym_video_COLON_COLON] = ACTIONS(215),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(215),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(215),
    [aux_sym_url_token1] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(215),
    [anon_sym_xref_COLON] = ACTIONS(217),
    [sym_emphasis] = ACTIONS(217),
    [sym_strong] = ACTIONS(217),
    [sym_monospace] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(215),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(215),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(215),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(215),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_title] = ACTIONS(219),
    [anon_sym_NOTE_COLON] = ACTIONS(219),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(219),
    [anon_sym_TIP_COLON] = ACTIONS(219),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(219),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(219),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(219),
    [anon_sym_CAUTION_COLON] = ACTIONS(219),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(219),
    [anon_sym_WARNING_COLON] = ACTIONS(219),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(219),
    [aux_sym__list_item_token1] = ACTIONS(219),
    [aux_sym_code_token1] = ACTIONS(219),
    [aux_sym_code_token2] = ACTIONS(221),
    [anon_sym_SLASH_SLASH] = ACTIONS(219),
    [anon_sym_image_COLON_COLON] = ACTIONS(219),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(219),
    [anon_sym_audio_COLON_COLON] = ACTIONS(219),
    [anon_sym_video_COLON_COLON] = ACTIONS(219),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(219),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(219),
    [aux_sym_url_token1] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_xref_COLON] = ACTIONS(221),
    [sym_emphasis] = ACTIONS(221),
    [sym_strong] = ACTIONS(221),
    [sym_monospace] = ACTIONS(221),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(219),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(219),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(219),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(219),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_title] = ACTIONS(223),
    [anon_sym_NOTE_COLON] = ACTIONS(223),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(223),
    [anon_sym_TIP_COLON] = ACTIONS(223),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(223),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(223),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(223),
    [anon_sym_CAUTION_COLON] = ACTIONS(223),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(223),
    [anon_sym_WARNING_COLON] = ACTIONS(223),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(223),
    [aux_sym__list_item_token1] = ACTIONS(223),
    [aux_sym_code_token1] = ACTIONS(223),
    [aux_sym_code_token2] = ACTIONS(225),
    [anon_sym_SLASH_SLASH] = ACTIONS(223),
    [anon_sym_image_COLON_COLON] = ACTIONS(223),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(223),
    [anon_sym_audio_COLON_COLON] = ACTIONS(223),
    [anon_sym_video_COLON_COLON] = ACTIONS(223),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(223),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(223),
    [aux_sym_url_token1] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_xref_COLON] = ACTIONS(225),
    [sym_emphasis] = ACTIONS(225),
    [sym_strong] = ACTIONS(225),
    [sym_monospace] = ACTIONS(225),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(223),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(223),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(223),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [sym_title] = ACTIONS(227),
    [anon_sym_NOTE_COLON] = ACTIONS(227),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(227),
    [anon_sym_TIP_COLON] = ACTIONS(227),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(227),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(227),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(227),
    [anon_sym_CAUTION_COLON] = ACTIONS(227),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(227),
    [anon_sym_WARNING_COLON] = ACTIONS(227),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(227),
    [aux_sym__list_item_token1] = ACTIONS(227),
    [aux_sym_code_token1] = ACTIONS(227),
    [aux_sym_code_token2] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [anon_sym_image_COLON_COLON] = ACTIONS(227),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(227),
    [anon_sym_audio_COLON_COLON] = ACTIONS(227),
    [anon_sym_video_COLON_COLON] = ACTIONS(227),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(227),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(227),
    [aux_sym_url_token1] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_xref_COLON] = ACTIONS(229),
    [sym_emphasis] = ACTIONS(229),
    [sym_strong] = ACTIONS(229),
    [sym_monospace] = ACTIONS(229),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(227),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(227),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(227),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(227),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_title] = ACTIONS(231),
    [anon_sym_NOTE_COLON] = ACTIONS(231),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(231),
    [anon_sym_TIP_COLON] = ACTIONS(231),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(231),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(231),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(231),
    [anon_sym_CAUTION_COLON] = ACTIONS(231),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(231),
    [anon_sym_WARNING_COLON] = ACTIONS(231),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(231),
    [aux_sym__list_item_token1] = ACTIONS(231),
    [aux_sym_code_token1] = ACTIONS(231),
    [aux_sym_code_token2] = ACTIONS(233),
    [anon_sym_SLASH_SLASH] = ACTIONS(231),
    [anon_sym_image_COLON_COLON] = ACTIONS(231),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(231),
    [anon_sym_audio_COLON_COLON] = ACTIONS(231),
    [anon_sym_video_COLON_COLON] = ACTIONS(231),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(231),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(231),
    [aux_sym_url_token1] = ACTIONS(233),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_xref_COLON] = ACTIONS(233),
    [sym_emphasis] = ACTIONS(233),
    [sym_strong] = ACTIONS(233),
    [sym_monospace] = ACTIONS(233),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(231),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(231),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(231),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_title] = ACTIONS(235),
    [anon_sym_NOTE_COLON] = ACTIONS(235),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(235),
    [anon_sym_TIP_COLON] = ACTIONS(235),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(235),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(235),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(235),
    [anon_sym_CAUTION_COLON] = ACTIONS(235),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(235),
    [anon_sym_WARNING_COLON] = ACTIONS(235),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(235),
    [aux_sym__list_item_token1] = ACTIONS(235),
    [aux_sym_code_token1] = ACTIONS(235),
    [aux_sym_code_token2] = ACTIONS(237),
    [anon_sym_SLASH_SLASH] = ACTIONS(235),
    [anon_sym_image_COLON_COLON] = ACTIONS(235),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(235),
    [anon_sym_audio_COLON_COLON] = ACTIONS(235),
    [anon_sym_video_COLON_COLON] = ACTIONS(235),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(235),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(235),
    [aux_sym_url_token1] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(235),
    [anon_sym_xref_COLON] = ACTIONS(237),
    [sym_emphasis] = ACTIONS(237),
    [sym_strong] = ACTIONS(237),
    [sym_monospace] = ACTIONS(237),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(235),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(235),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(235),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(235),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_title] = ACTIONS(239),
    [anon_sym_NOTE_COLON] = ACTIONS(239),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(239),
    [anon_sym_TIP_COLON] = ACTIONS(239),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(239),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(239),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(239),
    [anon_sym_CAUTION_COLON] = ACTIONS(239),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(239),
    [anon_sym_WARNING_COLON] = ACTIONS(239),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(239),
    [aux_sym__list_item_token1] = ACTIONS(239),
    [aux_sym_code_token1] = ACTIONS(239),
    [aux_sym_code_token2] = ACTIONS(241),
    [anon_sym_SLASH_SLASH] = ACTIONS(239),
    [anon_sym_image_COLON_COLON] = ACTIONS(239),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(239),
    [anon_sym_audio_COLON_COLON] = ACTIONS(239),
    [anon_sym_video_COLON_COLON] = ACTIONS(239),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(239),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(239),
    [aux_sym_url_token1] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_xref_COLON] = ACTIONS(241),
    [sym_emphasis] = ACTIONS(241),
    [sym_strong] = ACTIONS(241),
    [sym_monospace] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(239),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(239),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(239),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_title] = ACTIONS(243),
    [anon_sym_NOTE_COLON] = ACTIONS(243),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(243),
    [anon_sym_TIP_COLON] = ACTIONS(243),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(243),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(243),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(243),
    [anon_sym_CAUTION_COLON] = ACTIONS(243),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(243),
    [anon_sym_WARNING_COLON] = ACTIONS(243),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(243),
    [aux_sym__list_item_token1] = ACTIONS(243),
    [aux_sym_code_token1] = ACTIONS(243),
    [aux_sym_code_token2] = ACTIONS(245),
    [anon_sym_SLASH_SLASH] = ACTIONS(243),
    [anon_sym_image_COLON_COLON] = ACTIONS(243),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(243),
    [anon_sym_audio_COLON_COLON] = ACTIONS(243),
    [anon_sym_video_COLON_COLON] = ACTIONS(243),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(243),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(243),
    [aux_sym_url_token1] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_xref_COLON] = ACTIONS(245),
    [sym_emphasis] = ACTIONS(245),
    [sym_strong] = ACTIONS(245),
    [sym_monospace] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(243),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(243),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(243),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_title] = ACTIONS(247),
    [anon_sym_NOTE_COLON] = ACTIONS(247),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(247),
    [anon_sym_TIP_COLON] = ACTIONS(247),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(247),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(247),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(247),
    [anon_sym_CAUTION_COLON] = ACTIONS(247),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(247),
    [anon_sym_WARNING_COLON] = ACTIONS(247),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(247),
    [aux_sym__list_item_token1] = ACTIONS(247),
    [aux_sym_code_token1] = ACTIONS(247),
    [aux_sym_code_token2] = ACTIONS(249),
    [anon_sym_SLASH_SLASH] = ACTIONS(247),
    [anon_sym_image_COLON_COLON] = ACTIONS(247),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(247),
    [anon_sym_audio_COLON_COLON] = ACTIONS(247),
    [anon_sym_video_COLON_COLON] = ACTIONS(247),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(247),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(247),
    [aux_sym_url_token1] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_xref_COLON] = ACTIONS(249),
    [sym_emphasis] = ACTIONS(249),
    [sym_strong] = ACTIONS(249),
    [sym_monospace] = ACTIONS(249),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(247),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(247),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(247),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_title] = ACTIONS(251),
    [anon_sym_NOTE_COLON] = ACTIONS(251),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(251),
    [anon_sym_TIP_COLON] = ACTIONS(251),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(251),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(251),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(251),
    [anon_sym_CAUTION_COLON] = ACTIONS(251),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(251),
    [anon_sym_WARNING_COLON] = ACTIONS(251),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(251),
    [aux_sym__list_item_token1] = ACTIONS(251),
    [aux_sym_code_token1] = ACTIONS(251),
    [aux_sym_code_token2] = ACTIONS(253),
    [anon_sym_SLASH_SLASH] = ACTIONS(251),
    [anon_sym_image_COLON_COLON] = ACTIONS(251),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(251),
    [anon_sym_audio_COLON_COLON] = ACTIONS(251),
    [anon_sym_video_COLON_COLON] = ACTIONS(251),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(251),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(251),
    [aux_sym_url_token1] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_xref_COLON] = ACTIONS(253),
    [sym_emphasis] = ACTIONS(253),
    [sym_strong] = ACTIONS(253),
    [sym_monospace] = ACTIONS(253),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(251),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(251),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(251),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym_title] = ACTIONS(255),
    [anon_sym_NOTE_COLON] = ACTIONS(255),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(255),
    [anon_sym_TIP_COLON] = ACTIONS(255),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(255),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(255),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(255),
    [anon_sym_CAUTION_COLON] = ACTIONS(255),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(255),
    [anon_sym_WARNING_COLON] = ACTIONS(255),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(255),
    [aux_sym__list_item_token1] = ACTIONS(255),
    [aux_sym_code_token1] = ACTIONS(255),
    [aux_sym_code_token2] = ACTIONS(257),
    [anon_sym_SLASH_SLASH] = ACTIONS(255),
    [anon_sym_image_COLON_COLON] = ACTIONS(255),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(255),
    [anon_sym_audio_COLON_COLON] = ACTIONS(255),
    [anon_sym_video_COLON_COLON] = ACTIONS(255),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(255),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(255),
    [aux_sym_url_token1] = ACTIONS(257),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_xref_COLON] = ACTIONS(257),
    [sym_emphasis] = ACTIONS(257),
    [sym_strong] = ACTIONS(257),
    [sym_monospace] = ACTIONS(257),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(255),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(255),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(255),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym_title] = ACTIONS(259),
    [anon_sym_NOTE_COLON] = ACTIONS(259),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(259),
    [anon_sym_TIP_COLON] = ACTIONS(259),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(259),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(259),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(259),
    [anon_sym_CAUTION_COLON] = ACTIONS(259),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(259),
    [anon_sym_WARNING_COLON] = ACTIONS(259),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(259),
    [aux_sym__list_item_token1] = ACTIONS(259),
    [aux_sym_code_token1] = ACTIONS(259),
    [aux_sym_code_token2] = ACTIONS(261),
    [anon_sym_SLASH_SLASH] = ACTIONS(259),
    [anon_sym_image_COLON_COLON] = ACTIONS(259),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(259),
    [anon_sym_audio_COLON_COLON] = ACTIONS(259),
    [anon_sym_video_COLON_COLON] = ACTIONS(259),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(259),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(259),
    [aux_sym_url_token1] = ACTIONS(261),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_xref_COLON] = ACTIONS(261),
    [sym_emphasis] = ACTIONS(261),
    [sym_strong] = ACTIONS(261),
    [sym_monospace] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(259),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(259),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(259),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(259),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_title] = ACTIONS(263),
    [anon_sym_NOTE_COLON] = ACTIONS(263),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(263),
    [anon_sym_TIP_COLON] = ACTIONS(263),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(263),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(263),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(263),
    [anon_sym_CAUTION_COLON] = ACTIONS(263),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(263),
    [anon_sym_WARNING_COLON] = ACTIONS(263),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(263),
    [aux_sym__list_item_token1] = ACTIONS(263),
    [aux_sym_code_token1] = ACTIONS(263),
    [aux_sym_code_token2] = ACTIONS(265),
    [anon_sym_SLASH_SLASH] = ACTIONS(263),
    [anon_sym_image_COLON_COLON] = ACTIONS(263),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(263),
    [anon_sym_audio_COLON_COLON] = ACTIONS(263),
    [anon_sym_video_COLON_COLON] = ACTIONS(263),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(263),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(263),
    [aux_sym_url_token1] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_xref_COLON] = ACTIONS(265),
    [sym_emphasis] = ACTIONS(265),
    [sym_strong] = ACTIONS(265),
    [sym_monospace] = ACTIONS(265),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(263),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(263),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(263),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym_title] = ACTIONS(267),
    [anon_sym_NOTE_COLON] = ACTIONS(267),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(267),
    [anon_sym_TIP_COLON] = ACTIONS(267),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(267),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(267),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(267),
    [anon_sym_CAUTION_COLON] = ACTIONS(267),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(267),
    [anon_sym_WARNING_COLON] = ACTIONS(267),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(267),
    [aux_sym__list_item_token1] = ACTIONS(267),
    [aux_sym_code_token1] = ACTIONS(267),
    [aux_sym_code_token2] = ACTIONS(269),
    [anon_sym_SLASH_SLASH] = ACTIONS(267),
    [anon_sym_image_COLON_COLON] = ACTIONS(267),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(267),
    [anon_sym_audio_COLON_COLON] = ACTIONS(267),
    [anon_sym_video_COLON_COLON] = ACTIONS(267),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(267),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(267),
    [aux_sym_url_token1] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(267),
    [anon_sym_xref_COLON] = ACTIONS(269),
    [sym_emphasis] = ACTIONS(269),
    [sym_strong] = ACTIONS(269),
    [sym_monospace] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(267),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(267),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(267),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(267),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [sym_title] = ACTIONS(271),
    [anon_sym_NOTE_COLON] = ACTIONS(271),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(271),
    [anon_sym_TIP_COLON] = ACTIONS(271),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(271),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(271),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(271),
    [anon_sym_CAUTION_COLON] = ACTIONS(271),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(271),
    [anon_sym_WARNING_COLON] = ACTIONS(271),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(271),
    [aux_sym__list_item_token1] = ACTIONS(271),
    [aux_sym_code_token1] = ACTIONS(271),
    [aux_sym_code_token2] = ACTIONS(273),
    [anon_sym_SLASH_SLASH] = ACTIONS(271),
    [anon_sym_image_COLON_COLON] = ACTIONS(271),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(271),
    [anon_sym_audio_COLON_COLON] = ACTIONS(271),
    [anon_sym_video_COLON_COLON] = ACTIONS(271),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(271),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(271),
    [aux_sym_url_token1] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(271),
    [anon_sym_xref_COLON] = ACTIONS(273),
    [sym_emphasis] = ACTIONS(273),
    [sym_strong] = ACTIONS(273),
    [sym_monospace] = ACTIONS(273),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(271),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(271),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(271),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(271),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_title] = ACTIONS(275),
    [anon_sym_NOTE_COLON] = ACTIONS(275),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(275),
    [anon_sym_TIP_COLON] = ACTIONS(275),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(275),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(275),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(275),
    [anon_sym_CAUTION_COLON] = ACTIONS(275),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(275),
    [anon_sym_WARNING_COLON] = ACTIONS(275),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(275),
    [aux_sym__list_item_token1] = ACTIONS(275),
    [aux_sym_code_token1] = ACTIONS(275),
    [aux_sym_code_token2] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(275),
    [anon_sym_image_COLON_COLON] = ACTIONS(275),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(275),
    [anon_sym_audio_COLON_COLON] = ACTIONS(275),
    [anon_sym_video_COLON_COLON] = ACTIONS(275),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(275),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(275),
    [aux_sym_url_token1] = ACTIONS(277),
    [anon_sym_LT_LT] = ACTIONS(275),
    [anon_sym_xref_COLON] = ACTIONS(277),
    [sym_emphasis] = ACTIONS(277),
    [sym_strong] = ACTIONS(277),
    [sym_monospace] = ACTIONS(277),
    [sym_superscript] = ACTIONS(277),
    [sym_subscript] = ACTIONS(275),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(275),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(275),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [sym_title] = ACTIONS(279),
    [anon_sym_NOTE_COLON] = ACTIONS(279),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(279),
    [anon_sym_TIP_COLON] = ACTIONS(279),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(279),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(279),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(279),
    [anon_sym_CAUTION_COLON] = ACTIONS(279),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(279),
    [anon_sym_WARNING_COLON] = ACTIONS(279),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(279),
    [aux_sym__list_item_token1] = ACTIONS(279),
    [aux_sym_code_token1] = ACTIONS(279),
    [aux_sym_code_token2] = ACTIONS(281),
    [anon_sym_SLASH_SLASH] = ACTIONS(279),
    [anon_sym_image_COLON_COLON] = ACTIONS(279),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(279),
    [anon_sym_audio_COLON_COLON] = ACTIONS(279),
    [anon_sym_video_COLON_COLON] = ACTIONS(279),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(279),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(279),
    [aux_sym_url_token1] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(279),
    [anon_sym_xref_COLON] = ACTIONS(281),
    [sym_emphasis] = ACTIONS(281),
    [sym_strong] = ACTIONS(281),
    [sym_monospace] = ACTIONS(281),
    [sym_superscript] = ACTIONS(281),
    [sym_subscript] = ACTIONS(279),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(279),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(279),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_title] = ACTIONS(283),
    [anon_sym_NOTE_COLON] = ACTIONS(283),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(283),
    [anon_sym_TIP_COLON] = ACTIONS(283),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(283),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(283),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(283),
    [anon_sym_CAUTION_COLON] = ACTIONS(283),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(283),
    [anon_sym_WARNING_COLON] = ACTIONS(283),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(283),
    [aux_sym__list_item_token1] = ACTIONS(283),
    [aux_sym_code_token1] = ACTIONS(283),
    [aux_sym_code_token2] = ACTIONS(285),
    [anon_sym_SLASH_SLASH] = ACTIONS(283),
    [anon_sym_image_COLON_COLON] = ACTIONS(283),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(283),
    [anon_sym_audio_COLON_COLON] = ACTIONS(283),
    [anon_sym_video_COLON_COLON] = ACTIONS(283),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(283),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(283),
    [aux_sym_url_token1] = ACTIONS(285),
    [anon_sym_LT_LT] = ACTIONS(283),
    [anon_sym_xref_COLON] = ACTIONS(285),
    [sym_emphasis] = ACTIONS(285),
    [sym_strong] = ACTIONS(285),
    [sym_monospace] = ACTIONS(285),
    [sym_superscript] = ACTIONS(285),
    [sym_subscript] = ACTIONS(283),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(283),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(283),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym_title] = ACTIONS(287),
    [anon_sym_NOTE_COLON] = ACTIONS(287),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(287),
    [anon_sym_TIP_COLON] = ACTIONS(287),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(287),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(287),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(287),
    [anon_sym_CAUTION_COLON] = ACTIONS(287),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(287),
    [anon_sym_WARNING_COLON] = ACTIONS(287),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(287),
    [aux_sym__list_item_token1] = ACTIONS(287),
    [aux_sym_code_token1] = ACTIONS(287),
    [aux_sym_code_token2] = ACTIONS(289),
    [anon_sym_SLASH_SLASH] = ACTIONS(287),
    [anon_sym_image_COLON_COLON] = ACTIONS(287),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(287),
    [anon_sym_audio_COLON_COLON] = ACTIONS(287),
    [anon_sym_video_COLON_COLON] = ACTIONS(287),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(287),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(287),
    [aux_sym_url_token1] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(287),
    [anon_sym_xref_COLON] = ACTIONS(289),
    [sym_emphasis] = ACTIONS(289),
    [sym_strong] = ACTIONS(289),
    [sym_monospace] = ACTIONS(289),
    [sym_superscript] = ACTIONS(289),
    [sym_subscript] = ACTIONS(287),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(287),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(287),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym_title] = ACTIONS(291),
    [anon_sym_NOTE_COLON] = ACTIONS(291),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(291),
    [anon_sym_TIP_COLON] = ACTIONS(291),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(291),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(291),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(291),
    [anon_sym_CAUTION_COLON] = ACTIONS(291),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(291),
    [anon_sym_WARNING_COLON] = ACTIONS(291),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(291),
    [aux_sym__list_item_token1] = ACTIONS(291),
    [aux_sym_code_token1] = ACTIONS(291),
    [aux_sym_code_token2] = ACTIONS(293),
    [anon_sym_SLASH_SLASH] = ACTIONS(291),
    [anon_sym_image_COLON_COLON] = ACTIONS(291),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(291),
    [anon_sym_audio_COLON_COLON] = ACTIONS(291),
    [anon_sym_video_COLON_COLON] = ACTIONS(291),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(291),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(291),
    [aux_sym_url_token1] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_xref_COLON] = ACTIONS(293),
    [sym_emphasis] = ACTIONS(293),
    [sym_strong] = ACTIONS(293),
    [sym_monospace] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [sym_subscript] = ACTIONS(291),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(291),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(291),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [sym_title] = ACTIONS(295),
    [anon_sym_NOTE_COLON] = ACTIONS(295),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(295),
    [anon_sym_TIP_COLON] = ACTIONS(295),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(295),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(295),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(295),
    [anon_sym_CAUTION_COLON] = ACTIONS(295),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(295),
    [anon_sym_WARNING_COLON] = ACTIONS(295),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(295),
    [aux_sym__list_item_token1] = ACTIONS(295),
    [aux_sym_code_token1] = ACTIONS(295),
    [aux_sym_code_token2] = ACTIONS(297),
    [anon_sym_SLASH_SLASH] = ACTIONS(295),
    [anon_sym_image_COLON_COLON] = ACTIONS(295),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(295),
    [anon_sym_audio_COLON_COLON] = ACTIONS(295),
    [anon_sym_video_COLON_COLON] = ACTIONS(295),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(295),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(295),
    [aux_sym_url_token1] = ACTIONS(297),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_xref_COLON] = ACTIONS(297),
    [sym_emphasis] = ACTIONS(297),
    [sym_strong] = ACTIONS(297),
    [sym_monospace] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(295),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(295),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(295),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(47), 1,
      aux_sym_url_token1,
    ACTIONS(51), 1,
      anon_sym_xref_COLON,
    ACTIONS(299), 1,
      anon_sym_LF,
    ACTIONS(303), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(305), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(307), 1,
      anon_sym_LT_LT,
    ACTIONS(309), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(47), 2,
      sym__inline_xref,
      sym__xref,
    ACTIONS(301), 6,
      aux_sym_code_token2,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    STATE(42), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(311), 30,
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
    ACTIONS(313), 1,
      anon_sym_LF,
    ACTIONS(318), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(321), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(324), 1,
      aux_sym_url_token1,
    ACTIONS(327), 1,
      anon_sym_LT_LT,
    ACTIONS(330), 1,
      anon_sym_xref_COLON,
    ACTIONS(333), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(47), 2,
      sym__inline_xref,
      sym__xref,
    ACTIONS(315), 6,
      aux_sym_code_token2,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_superscript,
      sym_subscript,
    STATE(42), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(336), 30,
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
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 42,
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
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(349), 1,
      anon_sym_COLON_COLON,
    ACTIONS(347), 42,
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
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(353), 42,
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
    ACTIONS(355), 1,
      anon_sym_LF,
    ACTIONS(357), 42,
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
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(361), 42,
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
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(365), 42,
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
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(369), 42,
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
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(373), 42,
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
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(377), 42,
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
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 42,
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
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 42,
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
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(389), 42,
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
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 42,
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
    ACTIONS(395), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(397), 1,
      aux_sym__note_block_token1,
    STATE(69), 1,
      aux_sym__note_block_repeat1,
  [792] = 3,
    ACTIONS(399), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(401), 1,
      aux_sym__note_block_token1,
    STATE(57), 1,
      aux_sym__note_block_repeat1,
  [802] = 3,
    ACTIONS(404), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(406), 1,
      aux_sym__note_block_token1,
    STATE(73), 1,
      aux_sym__note_block_repeat1,
  [812] = 3,
    ACTIONS(408), 1,
      aux_sym_comment_token1,
    ACTIONS(410), 1,
      aux_sym_table_token1,
    STATE(62), 1,
      aux_sym_table_repeat1,
  [822] = 3,
    ACTIONS(412), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(414), 1,
      aux_sym__note_block_token1,
    STATE(57), 1,
      aux_sym__note_block_repeat1,
  [832] = 3,
    ACTIONS(416), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(418), 1,
      aux_sym__note_block_token1,
    STATE(63), 1,
      aux_sym__note_block_repeat1,
  [842] = 3,
    ACTIONS(420), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      aux_sym_table_token1,
    STATE(64), 1,
      aux_sym_table_repeat1,
  [852] = 3,
    ACTIONS(414), 1,
      aux_sym__note_block_token1,
    ACTIONS(424), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(57), 1,
      aux_sym__note_block_repeat1,
  [862] = 3,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      aux_sym_table_token1,
    STATE(64), 1,
      aux_sym_table_repeat1,
  [872] = 3,
    ACTIONS(431), 1,
      anon_sym_LF,
    ACTIONS(433), 1,
      aux_sym__list_item_token1,
    STATE(65), 1,
      aux_sym__list_item,
  [882] = 3,
    ACTIONS(436), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(438), 1,
      aux_sym__note_block_token1,
    STATE(60), 1,
      aux_sym__note_block_repeat1,
  [892] = 3,
    ACTIONS(440), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(442), 1,
      aux_sym__note_block_token1,
    STATE(72), 1,
      aux_sym__note_block_repeat1,
  [902] = 3,
    ACTIONS(444), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(446), 1,
      aux_sym__note_block_token1,
    STATE(70), 1,
      aux_sym__note_block_repeat1,
  [912] = 3,
    ACTIONS(414), 1,
      aux_sym__note_block_token1,
    ACTIONS(448), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(57), 1,
      aux_sym__note_block_repeat1,
  [922] = 3,
    ACTIONS(414), 1,
      aux_sym__note_block_token1,
    ACTIONS(450), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(57), 1,
      aux_sym__note_block_repeat1,
  [932] = 3,
    ACTIONS(452), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      aux_sym__list_item_token1,
    STATE(65), 1,
      aux_sym__list_item,
  [942] = 3,
    ACTIONS(414), 1,
      aux_sym__note_block_token1,
    ACTIONS(456), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(57), 1,
      aux_sym__note_block_repeat1,
  [952] = 3,
    ACTIONS(414), 1,
      aux_sym__note_block_token1,
    ACTIONS(458), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(57), 1,
      aux_sym__note_block_repeat1,
  [962] = 2,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    ACTIONS(462), 1,
      aux_sym_footnote_token1,
  [969] = 2,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      aux_sym_image_token2,
  [976] = 2,
    ACTIONS(468), 1,
      aux_sym_audio_token1,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
  [983] = 2,
    ACTIONS(472), 1,
      aux_sym_audio_token1,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
  [990] = 2,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 1,
      aux_sym_image_token2,
  [997] = 2,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_GT_GT,
  [1004] = 2,
    ACTIONS(484), 1,
      aux_sym_audio_token1,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
  [1011] = 2,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    ACTIONS(490), 1,
      aux_sym_kbd_token1,
  [1018] = 2,
    ACTIONS(492), 1,
      aux_sym_audio_token1,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
  [1025] = 1,
    ACTIONS(496), 1,
      aux_sym_comment_token1,
  [1029] = 1,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
  [1033] = 1,
    ACTIONS(500), 1,
      anon_sym_RBRACK_LF,
  [1037] = 1,
    ACTIONS(502), 1,
      aux_sym_image_token2,
  [1041] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
  [1045] = 1,
    ACTIONS(506), 1,
      aux_sym_code_token2,
  [1049] = 1,
    ACTIONS(508), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1053] = 1,
    ACTIONS(510), 1,
      aux_sym_code_token2,
  [1057] = 1,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
  [1061] = 1,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
  [1065] = 1,
    ACTIONS(516), 1,
      aux_sym_code_token2,
  [1069] = 1,
    ACTIONS(518), 1,
      aux_sym_image_token2,
  [1073] = 1,
    ACTIONS(520), 1,
      aux_sym_code_token2,
  [1077] = 1,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
  [1081] = 1,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
  [1085] = 1,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
  [1089] = 1,
    ACTIONS(528), 1,
      aux_sym_code_token2,
  [1093] = 1,
    ACTIONS(530), 1,
      aux_sym_image_token1,
  [1097] = 1,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
  [1101] = 1,
    ACTIONS(534), 1,
      aux_sym_code_token2,
  [1105] = 1,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
  [1109] = 1,
    ACTIONS(538), 1,
      anon_sym_RBRACK_LF,
  [1113] = 1,
    ACTIONS(540), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1117] = 1,
    ACTIONS(542), 1,
      aux_sym__note_line_token1,
  [1121] = 1,
    ACTIONS(544), 1,
      aux_sym__note_line_token1,
  [1125] = 1,
    ACTIONS(546), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1129] = 1,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
  [1133] = 1,
    ACTIONS(550), 1,
      aux_sym__note_line_token1,
  [1137] = 1,
    ACTIONS(552), 1,
      anon_sym_LBRACK,
  [1141] = 1,
    ACTIONS(554), 1,
      anon_sym_GT_GT,
  [1145] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
  [1149] = 1,
    ACTIONS(558), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1153] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
  [1157] = 1,
    ACTIONS(562), 1,
      aux_sym__note_line_token1,
  [1161] = 1,
    ACTIONS(564), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1165] = 1,
    ACTIONS(566), 1,
      aux_sym__note_line_token1,
  [1169] = 1,
    ACTIONS(568), 1,
      anon_sym_LBRACK,
  [1173] = 1,
    ACTIONS(570), 1,
      aux_sym__note_line_token1,
  [1177] = 1,
    ACTIONS(572), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(41)] = 0,
  [SMALL_STATE(42)] = 76,
  [SMALL_STATE(43)] = 152,
  [SMALL_STATE(44)] = 203,
  [SMALL_STATE(45)] = 254,
  [SMALL_STATE(46)] = 302,
  [SMALL_STATE(47)] = 350,
  [SMALL_STATE(48)] = 398,
  [SMALL_STATE(49)] = 446,
  [SMALL_STATE(50)] = 494,
  [SMALL_STATE(51)] = 542,
  [SMALL_STATE(52)] = 590,
  [SMALL_STATE(53)] = 638,
  [SMALL_STATE(54)] = 686,
  [SMALL_STATE(55)] = 734,
  [SMALL_STATE(56)] = 782,
  [SMALL_STATE(57)] = 792,
  [SMALL_STATE(58)] = 802,
  [SMALL_STATE(59)] = 812,
  [SMALL_STATE(60)] = 822,
  [SMALL_STATE(61)] = 832,
  [SMALL_STATE(62)] = 842,
  [SMALL_STATE(63)] = 852,
  [SMALL_STATE(64)] = 862,
  [SMALL_STATE(65)] = 872,
  [SMALL_STATE(66)] = 882,
  [SMALL_STATE(67)] = 892,
  [SMALL_STATE(68)] = 902,
  [SMALL_STATE(69)] = 912,
  [SMALL_STATE(70)] = 922,
  [SMALL_STATE(71)] = 932,
  [SMALL_STATE(72)] = 942,
  [SMALL_STATE(73)] = 952,
  [SMALL_STATE(74)] = 962,
  [SMALL_STATE(75)] = 969,
  [SMALL_STATE(76)] = 976,
  [SMALL_STATE(77)] = 983,
  [SMALL_STATE(78)] = 990,
  [SMALL_STATE(79)] = 997,
  [SMALL_STATE(80)] = 1004,
  [SMALL_STATE(81)] = 1011,
  [SMALL_STATE(82)] = 1018,
  [SMALL_STATE(83)] = 1025,
  [SMALL_STATE(84)] = 1029,
  [SMALL_STATE(85)] = 1033,
  [SMALL_STATE(86)] = 1037,
  [SMALL_STATE(87)] = 1041,
  [SMALL_STATE(88)] = 1045,
  [SMALL_STATE(89)] = 1049,
  [SMALL_STATE(90)] = 1053,
  [SMALL_STATE(91)] = 1057,
  [SMALL_STATE(92)] = 1061,
  [SMALL_STATE(93)] = 1065,
  [SMALL_STATE(94)] = 1069,
  [SMALL_STATE(95)] = 1073,
  [SMALL_STATE(96)] = 1077,
  [SMALL_STATE(97)] = 1081,
  [SMALL_STATE(98)] = 1085,
  [SMALL_STATE(99)] = 1089,
  [SMALL_STATE(100)] = 1093,
  [SMALL_STATE(101)] = 1097,
  [SMALL_STATE(102)] = 1101,
  [SMALL_STATE(103)] = 1105,
  [SMALL_STATE(104)] = 1109,
  [SMALL_STATE(105)] = 1113,
  [SMALL_STATE(106)] = 1117,
  [SMALL_STATE(107)] = 1121,
  [SMALL_STATE(108)] = 1125,
  [SMALL_STATE(109)] = 1129,
  [SMALL_STATE(110)] = 1133,
  [SMALL_STATE(111)] = 1137,
  [SMALL_STATE(112)] = 1141,
  [SMALL_STATE(113)] = 1145,
  [SMALL_STATE(114)] = 1149,
  [SMALL_STATE(115)] = 1153,
  [SMALL_STATE(116)] = 1157,
  [SMALL_STATE(117)] = 1161,
  [SMALL_STATE(118)] = 1165,
  [SMALL_STATE(119)] = 1169,
  [SMALL_STATE(120)] = 1173,
  [SMALL_STATE(121)] = 1177,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
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
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(42),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(81),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(74),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(43),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(102),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(88),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(90),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(50),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(57),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(64),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_item, 2),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_item, 2), SHIFT_REPEAT(65),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [512] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
