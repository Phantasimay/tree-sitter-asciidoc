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
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 44
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  sym_title1 = 1,
  sym_title2 = 2,
  sym_title3 = 3,
  sym_title4 = 4,
  sym_title5 = 5,
  anon_sym_NOTE_COLON = 6,
  aux_sym__note_line_token1 = 7,
  anon_sym_LBRACKNOTE_RBRACK_LF = 8,
  anon_sym_DASH_DASH_DASH_DASH_LF = 9,
  aux_sym__note_block_token1 = 10,
  anon_sym_TIP_COLON = 11,
  anon_sym_LBRACKTIP_RBRACK_LF = 12,
  anon_sym_IMPORTANT_COLON = 13,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 14,
  anon_sym_CAUTION_COLON = 15,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 16,
  anon_sym_WARNING_COLON = 17,
  anon_sym_LBRACKWARNING_RBRACK_LF = 18,
  anon_sym_LF = 19,
  anon_sym_ = 20,
  sym_list_item_mark = 21,
  aux_sym_list_item_content_token1 = 22,
  aux_sym_code_token1 = 23,
  anon_sym_RBRACK_LF = 24,
  aux_sym_code_language_token1 = 25,
  anon_sym_SLASH_SLASH = 26,
  aux_sym_comment_token1 = 27,
  aux_sym_line_breaks_token1 = 28,
  anon_sym_LT_LT_LT_LF_LF = 29,
  anon_sym_image_COLON_COLON = 30,
  aux_sym_image_token1 = 31,
  anon_sym_LBRACK = 32,
  aux_sym_image_token2 = 33,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 34,
  anon_sym_COLON_COLON = 35,
  anon_sym_audio_COLON_COLON = 36,
  aux_sym_audio_token1 = 37,
  anon_sym_RBRACK = 38,
  anon_sym_video_COLON_COLON = 39,
  anon_sym_LF_LF = 40,
  anon_sym_kbd_COLON_LBRACK = 41,
  sym_kbd_content = 42,
  anon_sym_footnote_COLON_LBRACK = 43,
  sym_footnote_content = 44,
  aux_sym_url_token1 = 45,
  anon_sym_LT_LT = 46,
  anon_sym_COMMA = 47,
  anon_sym_GT_GT = 48,
  anon_sym_xref_COLON = 49,
  sym_emphasis = 50,
  sym_strong = 51,
  sym_monospace = 52,
  sym_highlight = 53,
  sym_superscript = 54,
  sym_subscript = 55,
  anon_sym_PLUS_PLUS_PLUS = 56,
  anon_sym_pass_COLON_LBRACK = 57,
  anon_sym_LBRACEblank_RBRACE = 58,
  anon_sym_LBRACEempty_RBRACE = 59,
  anon_sym_LBRACEsp_RBRACE = 60,
  anon_sym_LBRACEnbsp_RBRACE = 61,
  anon_sym_LBRACEzwsp_RBRACE = 62,
  anon_sym_LBRACEwj_RBRACE = 63,
  anon_sym_LBRACEapos_RBRACE = 64,
  anon_sym_LBRACEquot_RBRACE = 65,
  anon_sym_LBRACElsquo_RBRACE = 66,
  anon_sym_LBRACErsquo_RBRACE = 67,
  anon_sym_LBRACEldquo_RBRACE = 68,
  anon_sym_LBRACErdquo_RBRACE = 69,
  anon_sym_LBRACEdeg_RBRACE = 70,
  anon_sym_LBRACEplus_RBRACE = 71,
  anon_sym_LBRACEbrvbar_RBRACE = 72,
  anon_sym_LBRACEvbar_RBRACE = 73,
  anon_sym_LBRACEamp_RBRACE = 74,
  anon_sym_LBRACElt_RBRACE = 75,
  anon_sym_LBRACEgt_RBRACE = 76,
  anon_sym_LBRACEstartsb_RBRACE = 77,
  anon_sym_LBRACEendsb_RBRACE = 78,
  anon_sym_LBRACEcaret_RBRACE = 79,
  anon_sym_LBRACEasterisk_RBRACE = 80,
  anon_sym_LBRACEtilde_RBRACE = 81,
  anon_sym_LBRACEbackslash_RBRACE = 82,
  anon_sym_LBRACEbacktick_RBRACE = 83,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 84,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 85,
  anon_sym_LBRACEcpp_RBRACE = 86,
  anon_sym_LBRACEpp_RBRACE = 87,
  sym_document = 88,
  sym__block = 89,
  sym__admonitions = 90,
  sym_note = 91,
  sym__note_line = 92,
  sym__note_block = 93,
  sym_tip = 94,
  sym__tip = 95,
  sym__tip_block = 96,
  sym_important = 97,
  sym__important = 98,
  sym__important_block = 99,
  sym_caution = 100,
  sym__caution = 101,
  sym__caution_block = 102,
  sym_warning = 103,
  sym__warning = 104,
  sym__warning_block = 105,
  sym_list = 106,
  sym_list_item = 107,
  sym_list_item_content = 108,
  sym_code = 109,
  sym_code_language = 110,
  sym_code_content = 111,
  sym_comment = 112,
  sym_line_breaks = 113,
  sym_page_breaks = 114,
  sym_image = 115,
  sym_table = 116,
  sym_table_start = 117,
  sym_table_content = 118,
  sym_table_end = 119,
  sym_description_list = 120,
  sym_audio = 121,
  sym_video = 122,
  sym_paragraph = 123,
  sym__inline_element = 124,
  sym_kbd = 125,
  sym_footnote = 126,
  sym_url = 127,
  sym_xref = 128,
  sym__inline_xref = 129,
  sym__xref = 130,
  sym_passthrough = 131,
  sym__passthrough_plus = 132,
  sym__passthrough_cmd = 133,
  sym_replacement = 134,
  aux_sym_document_repeat1 = 135,
  aux_sym__note_block_repeat1 = 136,
  aux_sym_list_repeat1 = 137,
  aux_sym_table_content_repeat1 = 138,
  aux_sym_paragraph_repeat1 = 139,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_title1] = "title1",
  [sym_title2] = "title2",
  [sym_title3] = "title3",
  [sym_title4] = "title4",
  [sym_title5] = "title5",
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
  [anon_sym_] = " ",
  [sym_list_item_mark] = "list_item_mark",
  [aux_sym_list_item_content_token1] = "list_item_content_token1",
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
  [anon_sym_COLON_COLON] = ":: ",
  [anon_sym_audio_COLON_COLON] = "audio::",
  [aux_sym_audio_token1] = "audio_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_video_COLON_COLON] = "video::",
  [anon_sym_LF_LF] = "\n\n",
  [anon_sym_kbd_COLON_LBRACK] = "kbd:[",
  [sym_kbd_content] = "kbd_content",
  [anon_sym_footnote_COLON_LBRACK] = "footnote:[",
  [sym_footnote_content] = "footnote_content",
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
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
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
  [sym_list_item] = "list_item",
  [sym_list_item_content] = "list_item_content",
  [sym_code] = "code",
  [sym_code_language] = "code_language",
  [sym_code_content] = "code_content",
  [sym_comment] = "comment",
  [sym_line_breaks] = "line_breaks",
  [sym_page_breaks] = "page_breaks",
  [sym_image] = "image",
  [sym_table] = "table",
  [sym_table_start] = "table_start",
  [sym_table_content] = "table_content",
  [sym_table_end] = "table_end",
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
  [sym__passthrough_plus] = "_passthrough_plus",
  [sym__passthrough_cmd] = "_passthrough_cmd",
  [sym_replacement] = "replacement",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__note_block_repeat1] = "_note_block_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_table_content_repeat1] = "table_content_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_title1] = sym_title1,
  [sym_title2] = sym_title2,
  [sym_title3] = sym_title3,
  [sym_title4] = sym_title4,
  [sym_title5] = sym_title5,
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
  [anon_sym_] = anon_sym_,
  [sym_list_item_mark] = sym_list_item_mark,
  [aux_sym_list_item_content_token1] = aux_sym_list_item_content_token1,
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_audio_COLON_COLON] = anon_sym_audio_COLON_COLON,
  [aux_sym_audio_token1] = aux_sym_audio_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_video_COLON_COLON] = anon_sym_video_COLON_COLON,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
  [anon_sym_kbd_COLON_LBRACK] = anon_sym_kbd_COLON_LBRACK,
  [sym_kbd_content] = sym_kbd_content,
  [anon_sym_footnote_COLON_LBRACK] = anon_sym_footnote_COLON_LBRACK,
  [sym_footnote_content] = sym_footnote_content,
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
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
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
  [sym_list_item] = sym_list_item,
  [sym_list_item_content] = sym_list_item_content,
  [sym_code] = sym_code,
  [sym_code_language] = sym_code_language,
  [sym_code_content] = sym_code_content,
  [sym_comment] = sym_comment,
  [sym_line_breaks] = sym_line_breaks,
  [sym_page_breaks] = sym_page_breaks,
  [sym_image] = sym_image,
  [sym_table] = sym_table,
  [sym_table_start] = sym_table_start,
  [sym_table_content] = sym_table_content,
  [sym_table_end] = sym_table_end,
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
  [sym__passthrough_plus] = sym__passthrough_plus,
  [sym__passthrough_cmd] = sym__passthrough_cmd,
  [sym_replacement] = sym_replacement,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym__note_block_repeat1] = aux_sym__note_block_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_table_content_repeat1] = aux_sym_table_content_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_title1] = {
    .visible = true,
    .named = true,
  },
  [sym_title2] = {
    .visible = true,
    .named = true,
  },
  [sym_title3] = {
    .visible = true,
    .named = true,
  },
  [sym_title4] = {
    .visible = true,
    .named = true,
  },
  [sym_title5] = {
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_list_item_mark] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_item_content_token1] = {
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
  [sym_kbd_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_footnote_COLON_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_footnote_content] = {
    .visible = true,
    .named = true,
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
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
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
  [sym_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item_content] = {
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
  [sym_table_start] = {
    .visible = true,
    .named = true,
  },
  [sym_table_content] = {
    .visible = true,
    .named = true,
  },
  [sym_table_end] = {
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
  [sym__passthrough_plus] = {
    .visible = false,
    .named = true,
  },
  [sym__passthrough_cmd] = {
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
  [aux_sym__note_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_content_repeat1] = {
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
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(267);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(476);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == 'C') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'N') ADVANCE(338);
      if (lookahead == 'T') ADVANCE(330);
      if (lookahead == 'W') ADVANCE(326);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == '^') ADVANCE(263);
      if (lookahead == '`') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'f') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'k') ADVANCE(352);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'v') ADVANCE(363);
      if (lookahead == 'x') ADVANCE(371);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '~') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(450);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(282);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(451);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(458);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(312);
      if (lookahead == ':') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead == ':') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == ':') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(290);
      if (lookahead == ':') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == ':') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(288);
      if (lookahead == ':') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(464);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(114);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == '_') ADVANCE(379);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(426);
      if (lookahead == 'k') ADVANCE(411);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == 'x') ADVANCE(430);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '~') ADVANCE(265);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(295);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(483);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(114);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == '_') ADVANCE(379);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(426);
      if (lookahead == 'k') ADVANCE(411);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == 'x') ADVANCE(430);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '~') ADVANCE(265);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(447);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(459);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(273);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(275);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(482);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == '+') ADVANCE(490);
      END_STATE();
    case 51:
      if (lookahead == '+') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'N') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead == 'W') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '[') ADVANCE(454);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(473);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(470);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(471);
      if (lookahead == '_') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(472);
      if (lookahead == '`') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '_') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '`') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(460);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(452);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(463);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '[') ADVANCE(465);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '[') ADVANCE(491);
      END_STATE();
    case 72:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '[') ADVANCE(468);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(460);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(452);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(463);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '^') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '_') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '`') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(105);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(99);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(92);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'E') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'G') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'M') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'P') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'P') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == ']') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == ']') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == ']') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == ']') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 113:
      if (lookahead == '<') ADVANCE(475);
      END_STATE();
    case 114:
      if (lookahead == '<') ADVANCE(474);
      END_STATE();
    case 115:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 117:
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 118:
      if (lookahead == '>') ADVANCE(477);
      END_STATE();
    case 119:
      if (lookahead == '[') ADVANCE(465);
      END_STATE();
    case 120:
      if (lookahead == '[') ADVANCE(491);
      END_STATE();
    case 121:
      if (lookahead == '[') ADVANCE(468);
      END_STATE();
    case 122:
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      END_STATE();
    case 124:
      if (lookahead == '^') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == '`') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == 'q') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'v') ADVANCE(138);
      if (lookahead == 'w') ADVANCE(159);
      if (lookahead == 'z') ADVANCE(225);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(210);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 153:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 154:
      if (lookahead == 'h') ADVANCE(254);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 159:
      if (lookahead == 'j') ADVANCE(231);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(202);
      END_STATE();
    case 161:
      if (lookahead == 'k') ADVANCE(241);
      END_STATE();
    case 162:
      if (lookahead == 'k') ADVANCE(252);
      END_STATE();
    case 163:
      if (lookahead == 'k') ADVANCE(253);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(230);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 192:
      if (lookahead == 'q') ADVANCE(219);
      END_STATE();
    case 193:
      if (lookahead == 'q') ADVANCE(221);
      END_STATE();
    case 194:
      if (lookahead == 'q') ADVANCE(222);
      END_STATE();
    case 195:
      if (lookahead == 'q') ADVANCE(223);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 224:
      if (lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 225:
      if (lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 226:
      if (lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 227:
      if (lookahead == '}') ADVANCE(510);
      END_STATE();
    case 228:
      if (lookahead == '}') ADVANCE(509);
      END_STATE();
    case 229:
      if (lookahead == '}') ADVANCE(521);
      END_STATE();
    case 230:
      if (lookahead == '}') ADVANCE(494);
      END_STATE();
    case 231:
      if (lookahead == '}') ADVANCE(497);
      END_STATE();
    case 232:
      if (lookahead == '}') ADVANCE(508);
      END_STATE();
    case 233:
      if (lookahead == '}') ADVANCE(520);
      END_STATE();
    case 234:
      if (lookahead == '}') ADVANCE(504);
      END_STATE();
    case 235:
      if (lookahead == '}') ADVANCE(498);
      END_STATE();
    case 236:
      if (lookahead == '}') ADVANCE(495);
      END_STATE();
    case 237:
      if (lookahead == '}') ADVANCE(505);
      END_STATE();
    case 238:
      if (lookahead == '}') ADVANCE(499);
      END_STATE();
    case 239:
      if (lookahead == '}') ADVANCE(507);
      END_STATE();
    case 240:
      if (lookahead == '}') ADVANCE(496);
      END_STATE();
    case 241:
      if (lookahead == '}') ADVANCE(492);
      END_STATE();
    case 242:
      if (lookahead == '}') ADVANCE(513);
      END_STATE();
    case 243:
      if (lookahead == '}') ADVANCE(493);
      END_STATE();
    case 244:
      if (lookahead == '}') ADVANCE(512);
      END_STATE();
    case 245:
      if (lookahead == '}') ADVANCE(502);
      END_STATE();
    case 246:
      if (lookahead == '}') ADVANCE(500);
      END_STATE();
    case 247:
      if (lookahead == '}') ADVANCE(503);
      END_STATE();
    case 248:
      if (lookahead == '}') ADVANCE(501);
      END_STATE();
    case 249:
      if (lookahead == '}') ADVANCE(515);
      END_STATE();
    case 250:
      if (lookahead == '}') ADVANCE(506);
      END_STATE();
    case 251:
      if (lookahead == '}') ADVANCE(511);
      END_STATE();
    case 252:
      if (lookahead == '}') ADVANCE(514);
      END_STATE();
    case 253:
      if (lookahead == '}') ADVANCE(517);
      END_STATE();
    case 254:
      if (lookahead == '}') ADVANCE(516);
      END_STATE();
    case 255:
      if (lookahead == '}') ADVANCE(518);
      END_STATE();
    case 256:
      if (lookahead == '}') ADVANCE(519);
      END_STATE();
    case 257:
      if (lookahead == '~') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 258:
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(22);
      END_STATE();
    case 259:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(259)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 262:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 263:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 264:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 266:
      if (eof) ADVANCE(267);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(384);
      if (lookahead == 'I') ADVANCE(392);
      if (lookahead == 'N') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(389);
      if (lookahead == 'W') ADVANCE(385);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == ']') ADVANCE(6);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == '_') ADVANCE(379);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'f') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'k') ADVANCE(411);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == 'v') ADVANCE(422);
      if (lookahead == 'x') ADVANCE(430);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '~') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_title1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_title1);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_title5);
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
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
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
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_list_item_mark);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(258);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(458);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead == '=') ADVANCE(303);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead == '=') ADVANCE(302);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(300);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '|') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'A') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'A') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'A') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'E') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'G') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'I') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'I') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'I') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'M') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'N') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'N') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'N') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'N') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'O') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'O') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'O') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'P') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'P') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'R') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'R') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'T') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'T') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'T') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'T') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'U') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'b') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'd') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'd') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'd') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'f') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'g') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'i') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 's') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 's') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 't') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '_') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(35);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(70);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(479);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(67);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'E') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'G') ADVANCE(443);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'M') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'N') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(396);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'P') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'P') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(444);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'a') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(421);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(441);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'g') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(433);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(434);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(383);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 's') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 's') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 't') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 't') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(38);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(71);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(40);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(44);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(311);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(27);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '_') ADVANCE(480);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(483);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '`') ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '^') ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 266},
  [2] = {.lex_state = 266},
  [3] = {.lex_state = 266},
  [4] = {.lex_state = 266},
  [5] = {.lex_state = 266},
  [6] = {.lex_state = 266},
  [7] = {.lex_state = 266},
  [8] = {.lex_state = 266},
  [9] = {.lex_state = 266},
  [10] = {.lex_state = 266},
  [11] = {.lex_state = 266},
  [12] = {.lex_state = 266},
  [13] = {.lex_state = 266},
  [14] = {.lex_state = 266},
  [15] = {.lex_state = 266},
  [16] = {.lex_state = 266},
  [17] = {.lex_state = 266},
  [18] = {.lex_state = 266},
  [19] = {.lex_state = 266},
  [20] = {.lex_state = 266},
  [21] = {.lex_state = 266},
  [22] = {.lex_state = 266},
  [23] = {.lex_state = 266},
  [24] = {.lex_state = 266},
  [25] = {.lex_state = 266},
  [26] = {.lex_state = 266},
  [27] = {.lex_state = 266},
  [28] = {.lex_state = 266},
  [29] = {.lex_state = 266},
  [30] = {.lex_state = 266},
  [31] = {.lex_state = 266},
  [32] = {.lex_state = 266},
  [33] = {.lex_state = 266},
  [34] = {.lex_state = 266},
  [35] = {.lex_state = 266},
  [36] = {.lex_state = 266},
  [37] = {.lex_state = 266},
  [38] = {.lex_state = 266},
  [39] = {.lex_state = 266},
  [40] = {.lex_state = 266},
  [41] = {.lex_state = 266},
  [42] = {.lex_state = 266},
  [43] = {.lex_state = 266},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 25},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 25},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 457},
  [81] = {.lex_state = 54},
  [82] = {.lex_state = 122},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 259},
  [86] = {.lex_state = 54},
  [87] = {.lex_state = 54},
  [88] = {.lex_state = 123},
  [89] = {.lex_state = 457},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 54},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 259},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 266},
  [97] = {.lex_state = 457},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 54},
  [100] = {.lex_state = 259},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 259},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 259},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 259},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 54},
  [111] = {.lex_state = 457},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 453},
  [114] = {.lex_state = 448},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 45},
  [117] = {.lex_state = 54},
  [118] = {.lex_state = 266},
  [119] = {.lex_state = 54},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 54},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 54},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 54},
  [129] = {.lex_state = 54},
  [130] = {.lex_state = 54},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 54},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 26},
  [135] = {.lex_state = 266},
  [136] = {.lex_state = 54},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_title1] = ACTIONS(1),
    [sym_title2] = ACTIONS(1),
    [sym_title3] = ACTIONS(1),
    [sym_title4] = ACTIONS(1),
    [sym_title5] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH_LF] = ACTIONS(1),
    [anon_sym_TIP_COLON] = ACTIONS(1),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(1),
    [anon_sym_CAUTION_COLON] = ACTIONS(1),
    [anon_sym_WARNING_COLON] = ACTIONS(1),
    [sym_list_item_mark] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [aux_sym_code_language_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym_line_breaks_token1] = ACTIONS(1),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(1),
    [anon_sym_image_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_audio_COLON_COLON] = ACTIONS(1),
    [aux_sym_audio_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_video_COLON_COLON] = ACTIONS(1),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(1),
    [sym_footnote_content] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_xref_COLON] = ACTIONS(1),
    [sym_strong] = ACTIONS(1),
    [sym_monospace] = ACTIONS(1),
    [sym_highlight] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
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
    [sym_document] = STATE(105),
    [sym__block] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(31),
    [sym__note_block] = STATE(31),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(32),
    [sym__tip_block] = STATE(32),
    [sym_important] = STATE(2),
    [sym__important] = STATE(33),
    [sym__important_block] = STATE(33),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(34),
    [sym__caution_block] = STATE(34),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(5),
    [sym__warning_block] = STATE(5),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(62),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(61),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(44),
    [sym_kbd] = STATE(44),
    [sym_footnote] = STATE(44),
    [sym_url] = STATE(44),
    [sym_xref] = STATE(44),
    [sym__inline_xref] = STATE(51),
    [sym__xref] = STATE(51),
    [sym_passthrough] = STATE(44),
    [sym__passthrough_plus] = STATE(52),
    [sym__passthrough_cmd] = STATE(52),
    [sym_replacement] = STATE(44),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(62),
    [aux_sym_paragraph_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_title1] = ACTIONS(5),
    [sym_title2] = ACTIONS(5),
    [sym_title3] = ACTIONS(5),
    [sym_title4] = ACTIONS(5),
    [sym_title5] = ACTIONS(5),
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
    [sym_list_item_mark] = ACTIONS(27),
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
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(61),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(63),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(65),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(31),
    [sym__note_block] = STATE(31),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(32),
    [sym__tip_block] = STATE(32),
    [sym_important] = STATE(3),
    [sym__important] = STATE(33),
    [sym__important_block] = STATE(33),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(34),
    [sym__caution_block] = STATE(34),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(5),
    [sym__warning_block] = STATE(5),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(62),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(61),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(44),
    [sym_kbd] = STATE(44),
    [sym_footnote] = STATE(44),
    [sym_url] = STATE(44),
    [sym_xref] = STATE(44),
    [sym__inline_xref] = STATE(51),
    [sym__xref] = STATE(51),
    [sym_passthrough] = STATE(44),
    [sym__passthrough_plus] = STATE(52),
    [sym__passthrough_cmd] = STATE(52),
    [sym_replacement] = STATE(44),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(62),
    [aux_sym_paragraph_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_title1] = ACTIONS(69),
    [sym_title2] = ACTIONS(69),
    [sym_title3] = ACTIONS(69),
    [sym_title4] = ACTIONS(69),
    [sym_title5] = ACTIONS(69),
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
    [sym_list_item_mark] = ACTIONS(27),
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
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(61),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(63),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(65),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(31),
    [sym__note_block] = STATE(31),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(32),
    [sym__tip_block] = STATE(32),
    [sym_important] = STATE(3),
    [sym__important] = STATE(33),
    [sym__important_block] = STATE(33),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(34),
    [sym__caution_block] = STATE(34),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(5),
    [sym__warning_block] = STATE(5),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(62),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(61),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(44),
    [sym_kbd] = STATE(44),
    [sym_footnote] = STATE(44),
    [sym_url] = STATE(44),
    [sym_xref] = STATE(44),
    [sym__inline_xref] = STATE(51),
    [sym__xref] = STATE(51),
    [sym_passthrough] = STATE(44),
    [sym__passthrough_plus] = STATE(52),
    [sym__passthrough_cmd] = STATE(52),
    [sym_replacement] = STATE(44),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(62),
    [aux_sym_paragraph_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_title1] = ACTIONS(73),
    [sym_title2] = ACTIONS(73),
    [sym_title3] = ACTIONS(73),
    [sym_title4] = ACTIONS(73),
    [sym_title5] = ACTIONS(73),
    [anon_sym_NOTE_COLON] = ACTIONS(76),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(79),
    [anon_sym_TIP_COLON] = ACTIONS(82),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(85),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(88),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(91),
    [anon_sym_CAUTION_COLON] = ACTIONS(94),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(97),
    [anon_sym_WARNING_COLON] = ACTIONS(100),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(103),
    [sym_list_item_mark] = ACTIONS(106),
    [aux_sym_code_token1] = ACTIONS(109),
    [aux_sym_code_language_token1] = ACTIONS(112),
    [anon_sym_SLASH_SLASH] = ACTIONS(115),
    [aux_sym_line_breaks_token1] = ACTIONS(118),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(121),
    [anon_sym_image_COLON_COLON] = ACTIONS(124),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(127),
    [anon_sym_audio_COLON_COLON] = ACTIONS(130),
    [anon_sym_video_COLON_COLON] = ACTIONS(133),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(136),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(139),
    [aux_sym_url_token1] = ACTIONS(142),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_xref_COLON] = ACTIONS(148),
    [sym_emphasis] = ACTIONS(151),
    [sym_strong] = ACTIONS(151),
    [sym_monospace] = ACTIONS(151),
    [sym_highlight] = ACTIONS(154),
    [sym_superscript] = ACTIONS(151),
    [sym_subscript] = ACTIONS(154),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(157),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(160),
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
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_title1] = ACTIONS(166),
    [sym_title2] = ACTIONS(166),
    [sym_title3] = ACTIONS(166),
    [sym_title4] = ACTIONS(166),
    [sym_title5] = ACTIONS(166),
    [anon_sym_NOTE_COLON] = ACTIONS(166),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(166),
    [anon_sym_TIP_COLON] = ACTIONS(166),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(166),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(166),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(166),
    [anon_sym_CAUTION_COLON] = ACTIONS(166),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(166),
    [anon_sym_WARNING_COLON] = ACTIONS(166),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(166),
    [sym_list_item_mark] = ACTIONS(168),
    [aux_sym_code_token1] = ACTIONS(166),
    [aux_sym_code_language_token1] = ACTIONS(168),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [aux_sym_line_breaks_token1] = ACTIONS(166),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(166),
    [anon_sym_image_COLON_COLON] = ACTIONS(166),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(166),
    [anon_sym_audio_COLON_COLON] = ACTIONS(166),
    [anon_sym_video_COLON_COLON] = ACTIONS(166),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(166),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(166),
    [aux_sym_url_token1] = ACTIONS(168),
    [anon_sym_LT_LT] = ACTIONS(168),
    [anon_sym_xref_COLON] = ACTIONS(168),
    [sym_emphasis] = ACTIONS(168),
    [sym_strong] = ACTIONS(168),
    [sym_monospace] = ACTIONS(168),
    [sym_highlight] = ACTIONS(166),
    [sym_superscript] = ACTIONS(168),
    [sym_subscript] = ACTIONS(166),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(166),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(166),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(166),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_title1] = ACTIONS(170),
    [sym_title2] = ACTIONS(170),
    [sym_title3] = ACTIONS(170),
    [sym_title4] = ACTIONS(170),
    [sym_title5] = ACTIONS(170),
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
    [sym_list_item_mark] = ACTIONS(172),
    [aux_sym_code_token1] = ACTIONS(170),
    [aux_sym_code_language_token1] = ACTIONS(172),
    [anon_sym_SLASH_SLASH] = ACTIONS(170),
    [aux_sym_line_breaks_token1] = ACTIONS(170),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(170),
    [anon_sym_image_COLON_COLON] = ACTIONS(170),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(170),
    [anon_sym_audio_COLON_COLON] = ACTIONS(170),
    [anon_sym_video_COLON_COLON] = ACTIONS(170),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(170),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(170),
    [aux_sym_url_token1] = ACTIONS(172),
    [anon_sym_LT_LT] = ACTIONS(172),
    [anon_sym_xref_COLON] = ACTIONS(172),
    [sym_emphasis] = ACTIONS(172),
    [sym_strong] = ACTIONS(172),
    [sym_monospace] = ACTIONS(172),
    [sym_highlight] = ACTIONS(170),
    [sym_superscript] = ACTIONS(172),
    [sym_subscript] = ACTIONS(170),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(170),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_title1] = ACTIONS(174),
    [sym_title2] = ACTIONS(174),
    [sym_title3] = ACTIONS(174),
    [sym_title4] = ACTIONS(174),
    [sym_title5] = ACTIONS(174),
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
    [sym_list_item_mark] = ACTIONS(176),
    [aux_sym_code_token1] = ACTIONS(174),
    [aux_sym_code_language_token1] = ACTIONS(176),
    [anon_sym_SLASH_SLASH] = ACTIONS(174),
    [aux_sym_line_breaks_token1] = ACTIONS(174),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(174),
    [anon_sym_image_COLON_COLON] = ACTIONS(174),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(174),
    [anon_sym_audio_COLON_COLON] = ACTIONS(174),
    [anon_sym_video_COLON_COLON] = ACTIONS(174),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(174),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(174),
    [aux_sym_url_token1] = ACTIONS(176),
    [anon_sym_LT_LT] = ACTIONS(176),
    [anon_sym_xref_COLON] = ACTIONS(176),
    [sym_emphasis] = ACTIONS(176),
    [sym_strong] = ACTIONS(176),
    [sym_monospace] = ACTIONS(176),
    [sym_highlight] = ACTIONS(174),
    [sym_superscript] = ACTIONS(176),
    [sym_subscript] = ACTIONS(174),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(174),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(174),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(174),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [sym_title1] = ACTIONS(178),
    [sym_title2] = ACTIONS(178),
    [sym_title3] = ACTIONS(178),
    [sym_title4] = ACTIONS(178),
    [sym_title5] = ACTIONS(178),
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
    [sym_list_item_mark] = ACTIONS(180),
    [aux_sym_code_token1] = ACTIONS(178),
    [aux_sym_code_language_token1] = ACTIONS(180),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [aux_sym_line_breaks_token1] = ACTIONS(178),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(178),
    [anon_sym_image_COLON_COLON] = ACTIONS(178),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(178),
    [anon_sym_audio_COLON_COLON] = ACTIONS(178),
    [anon_sym_video_COLON_COLON] = ACTIONS(178),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(178),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(178),
    [aux_sym_url_token1] = ACTIONS(180),
    [anon_sym_LT_LT] = ACTIONS(180),
    [anon_sym_xref_COLON] = ACTIONS(180),
    [sym_emphasis] = ACTIONS(180),
    [sym_strong] = ACTIONS(180),
    [sym_monospace] = ACTIONS(180),
    [sym_highlight] = ACTIONS(178),
    [sym_superscript] = ACTIONS(180),
    [sym_subscript] = ACTIONS(178),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(178),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(178),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(178),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_title1] = ACTIONS(182),
    [sym_title2] = ACTIONS(182),
    [sym_title3] = ACTIONS(182),
    [sym_title4] = ACTIONS(182),
    [sym_title5] = ACTIONS(182),
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
    [sym_list_item_mark] = ACTIONS(184),
    [aux_sym_code_token1] = ACTIONS(182),
    [aux_sym_code_language_token1] = ACTIONS(184),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [aux_sym_line_breaks_token1] = ACTIONS(182),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(182),
    [anon_sym_image_COLON_COLON] = ACTIONS(182),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(182),
    [anon_sym_audio_COLON_COLON] = ACTIONS(182),
    [anon_sym_video_COLON_COLON] = ACTIONS(182),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(182),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(182),
    [aux_sym_url_token1] = ACTIONS(184),
    [anon_sym_LT_LT] = ACTIONS(184),
    [anon_sym_xref_COLON] = ACTIONS(184),
    [sym_emphasis] = ACTIONS(184),
    [sym_strong] = ACTIONS(184),
    [sym_monospace] = ACTIONS(184),
    [sym_highlight] = ACTIONS(182),
    [sym_superscript] = ACTIONS(184),
    [sym_subscript] = ACTIONS(182),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(182),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(182),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(182),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_title1] = ACTIONS(186),
    [sym_title2] = ACTIONS(186),
    [sym_title3] = ACTIONS(186),
    [sym_title4] = ACTIONS(186),
    [sym_title5] = ACTIONS(186),
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
    [sym_list_item_mark] = ACTIONS(188),
    [aux_sym_code_token1] = ACTIONS(186),
    [aux_sym_code_language_token1] = ACTIONS(188),
    [anon_sym_SLASH_SLASH] = ACTIONS(186),
    [aux_sym_line_breaks_token1] = ACTIONS(186),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(186),
    [anon_sym_image_COLON_COLON] = ACTIONS(186),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(186),
    [anon_sym_audio_COLON_COLON] = ACTIONS(186),
    [anon_sym_video_COLON_COLON] = ACTIONS(186),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(186),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(186),
    [aux_sym_url_token1] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_xref_COLON] = ACTIONS(188),
    [sym_emphasis] = ACTIONS(188),
    [sym_strong] = ACTIONS(188),
    [sym_monospace] = ACTIONS(188),
    [sym_highlight] = ACTIONS(186),
    [sym_superscript] = ACTIONS(188),
    [sym_subscript] = ACTIONS(186),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(186),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(186),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(186),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_title1] = ACTIONS(190),
    [sym_title2] = ACTIONS(190),
    [sym_title3] = ACTIONS(190),
    [sym_title4] = ACTIONS(190),
    [sym_title5] = ACTIONS(190),
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
    [sym_list_item_mark] = ACTIONS(192),
    [aux_sym_code_token1] = ACTIONS(190),
    [aux_sym_code_language_token1] = ACTIONS(192),
    [anon_sym_SLASH_SLASH] = ACTIONS(190),
    [aux_sym_line_breaks_token1] = ACTIONS(190),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(190),
    [anon_sym_image_COLON_COLON] = ACTIONS(190),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(190),
    [anon_sym_audio_COLON_COLON] = ACTIONS(190),
    [anon_sym_video_COLON_COLON] = ACTIONS(190),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(190),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(190),
    [aux_sym_url_token1] = ACTIONS(192),
    [anon_sym_LT_LT] = ACTIONS(192),
    [anon_sym_xref_COLON] = ACTIONS(192),
    [sym_emphasis] = ACTIONS(192),
    [sym_strong] = ACTIONS(192),
    [sym_monospace] = ACTIONS(192),
    [sym_highlight] = ACTIONS(190),
    [sym_superscript] = ACTIONS(192),
    [sym_subscript] = ACTIONS(190),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(190),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(190),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(190),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_title1] = ACTIONS(194),
    [sym_title2] = ACTIONS(194),
    [sym_title3] = ACTIONS(194),
    [sym_title4] = ACTIONS(194),
    [sym_title5] = ACTIONS(194),
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
    [sym_list_item_mark] = ACTIONS(196),
    [aux_sym_code_token1] = ACTIONS(194),
    [aux_sym_code_language_token1] = ACTIONS(196),
    [anon_sym_SLASH_SLASH] = ACTIONS(194),
    [aux_sym_line_breaks_token1] = ACTIONS(194),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(194),
    [anon_sym_image_COLON_COLON] = ACTIONS(194),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(194),
    [anon_sym_audio_COLON_COLON] = ACTIONS(194),
    [anon_sym_video_COLON_COLON] = ACTIONS(194),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(194),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(194),
    [aux_sym_url_token1] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(196),
    [anon_sym_xref_COLON] = ACTIONS(196),
    [sym_emphasis] = ACTIONS(196),
    [sym_strong] = ACTIONS(196),
    [sym_monospace] = ACTIONS(196),
    [sym_highlight] = ACTIONS(194),
    [sym_superscript] = ACTIONS(196),
    [sym_subscript] = ACTIONS(194),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(194),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(194),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_title1] = ACTIONS(198),
    [sym_title2] = ACTIONS(198),
    [sym_title3] = ACTIONS(198),
    [sym_title4] = ACTIONS(198),
    [sym_title5] = ACTIONS(198),
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
    [sym_list_item_mark] = ACTIONS(200),
    [aux_sym_code_token1] = ACTIONS(198),
    [aux_sym_code_language_token1] = ACTIONS(200),
    [anon_sym_SLASH_SLASH] = ACTIONS(198),
    [aux_sym_line_breaks_token1] = ACTIONS(198),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(198),
    [anon_sym_image_COLON_COLON] = ACTIONS(198),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(198),
    [anon_sym_audio_COLON_COLON] = ACTIONS(198),
    [anon_sym_video_COLON_COLON] = ACTIONS(198),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(198),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(198),
    [aux_sym_url_token1] = ACTIONS(200),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_xref_COLON] = ACTIONS(200),
    [sym_emphasis] = ACTIONS(200),
    [sym_strong] = ACTIONS(200),
    [sym_monospace] = ACTIONS(200),
    [sym_highlight] = ACTIONS(198),
    [sym_superscript] = ACTIONS(200),
    [sym_subscript] = ACTIONS(198),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(198),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(198),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(198),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_title1] = ACTIONS(202),
    [sym_title2] = ACTIONS(202),
    [sym_title3] = ACTIONS(202),
    [sym_title4] = ACTIONS(202),
    [sym_title5] = ACTIONS(202),
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
    [sym_list_item_mark] = ACTIONS(204),
    [aux_sym_code_token1] = ACTIONS(202),
    [aux_sym_code_language_token1] = ACTIONS(204),
    [anon_sym_SLASH_SLASH] = ACTIONS(202),
    [aux_sym_line_breaks_token1] = ACTIONS(202),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(202),
    [anon_sym_image_COLON_COLON] = ACTIONS(202),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(202),
    [anon_sym_audio_COLON_COLON] = ACTIONS(202),
    [anon_sym_video_COLON_COLON] = ACTIONS(202),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(202),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(202),
    [aux_sym_url_token1] = ACTIONS(204),
    [anon_sym_LT_LT] = ACTIONS(204),
    [anon_sym_xref_COLON] = ACTIONS(204),
    [sym_emphasis] = ACTIONS(204),
    [sym_strong] = ACTIONS(204),
    [sym_monospace] = ACTIONS(204),
    [sym_highlight] = ACTIONS(202),
    [sym_superscript] = ACTIONS(204),
    [sym_subscript] = ACTIONS(202),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(202),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(202),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(202),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_title1] = ACTIONS(206),
    [sym_title2] = ACTIONS(206),
    [sym_title3] = ACTIONS(206),
    [sym_title4] = ACTIONS(206),
    [sym_title5] = ACTIONS(206),
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
    [sym_list_item_mark] = ACTIONS(208),
    [aux_sym_code_token1] = ACTIONS(206),
    [aux_sym_code_language_token1] = ACTIONS(208),
    [anon_sym_SLASH_SLASH] = ACTIONS(206),
    [aux_sym_line_breaks_token1] = ACTIONS(206),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(206),
    [anon_sym_image_COLON_COLON] = ACTIONS(206),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(206),
    [anon_sym_audio_COLON_COLON] = ACTIONS(206),
    [anon_sym_video_COLON_COLON] = ACTIONS(206),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(206),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(206),
    [aux_sym_url_token1] = ACTIONS(208),
    [anon_sym_LT_LT] = ACTIONS(208),
    [anon_sym_xref_COLON] = ACTIONS(208),
    [sym_emphasis] = ACTIONS(208),
    [sym_strong] = ACTIONS(208),
    [sym_monospace] = ACTIONS(208),
    [sym_highlight] = ACTIONS(206),
    [sym_superscript] = ACTIONS(208),
    [sym_subscript] = ACTIONS(206),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(206),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(206),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(206),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_title1] = ACTIONS(210),
    [sym_title2] = ACTIONS(210),
    [sym_title3] = ACTIONS(210),
    [sym_title4] = ACTIONS(210),
    [sym_title5] = ACTIONS(210),
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
    [sym_list_item_mark] = ACTIONS(212),
    [aux_sym_code_token1] = ACTIONS(210),
    [aux_sym_code_language_token1] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(210),
    [aux_sym_line_breaks_token1] = ACTIONS(210),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(210),
    [anon_sym_image_COLON_COLON] = ACTIONS(210),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(210),
    [anon_sym_audio_COLON_COLON] = ACTIONS(210),
    [anon_sym_video_COLON_COLON] = ACTIONS(210),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(210),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(210),
    [aux_sym_url_token1] = ACTIONS(212),
    [anon_sym_LT_LT] = ACTIONS(212),
    [anon_sym_xref_COLON] = ACTIONS(212),
    [sym_emphasis] = ACTIONS(212),
    [sym_strong] = ACTIONS(212),
    [sym_monospace] = ACTIONS(212),
    [sym_highlight] = ACTIONS(210),
    [sym_superscript] = ACTIONS(212),
    [sym_subscript] = ACTIONS(210),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(210),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(210),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(210),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_title1] = ACTIONS(214),
    [sym_title2] = ACTIONS(214),
    [sym_title3] = ACTIONS(214),
    [sym_title4] = ACTIONS(214),
    [sym_title5] = ACTIONS(214),
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
    [sym_list_item_mark] = ACTIONS(216),
    [aux_sym_code_token1] = ACTIONS(214),
    [aux_sym_code_language_token1] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [aux_sym_line_breaks_token1] = ACTIONS(214),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(214),
    [anon_sym_image_COLON_COLON] = ACTIONS(214),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(214),
    [anon_sym_audio_COLON_COLON] = ACTIONS(214),
    [anon_sym_video_COLON_COLON] = ACTIONS(214),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(214),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(214),
    [aux_sym_url_token1] = ACTIONS(216),
    [anon_sym_LT_LT] = ACTIONS(216),
    [anon_sym_xref_COLON] = ACTIONS(216),
    [sym_emphasis] = ACTIONS(216),
    [sym_strong] = ACTIONS(216),
    [sym_monospace] = ACTIONS(216),
    [sym_highlight] = ACTIONS(214),
    [sym_superscript] = ACTIONS(216),
    [sym_subscript] = ACTIONS(214),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(214),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(214),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(214),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym_title1] = ACTIONS(218),
    [sym_title2] = ACTIONS(218),
    [sym_title3] = ACTIONS(218),
    [sym_title4] = ACTIONS(218),
    [sym_title5] = ACTIONS(218),
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
    [sym_list_item_mark] = ACTIONS(220),
    [aux_sym_code_token1] = ACTIONS(218),
    [aux_sym_code_language_token1] = ACTIONS(220),
    [anon_sym_SLASH_SLASH] = ACTIONS(218),
    [aux_sym_line_breaks_token1] = ACTIONS(218),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(218),
    [anon_sym_image_COLON_COLON] = ACTIONS(218),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(218),
    [anon_sym_audio_COLON_COLON] = ACTIONS(218),
    [anon_sym_video_COLON_COLON] = ACTIONS(218),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(218),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(218),
    [aux_sym_url_token1] = ACTIONS(220),
    [anon_sym_LT_LT] = ACTIONS(220),
    [anon_sym_xref_COLON] = ACTIONS(220),
    [sym_emphasis] = ACTIONS(220),
    [sym_strong] = ACTIONS(220),
    [sym_monospace] = ACTIONS(220),
    [sym_highlight] = ACTIONS(218),
    [sym_superscript] = ACTIONS(220),
    [sym_subscript] = ACTIONS(218),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(218),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(218),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(218),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_title1] = ACTIONS(222),
    [sym_title2] = ACTIONS(222),
    [sym_title3] = ACTIONS(222),
    [sym_title4] = ACTIONS(222),
    [sym_title5] = ACTIONS(222),
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
    [sym_list_item_mark] = ACTIONS(224),
    [aux_sym_code_token1] = ACTIONS(222),
    [aux_sym_code_language_token1] = ACTIONS(224),
    [anon_sym_SLASH_SLASH] = ACTIONS(222),
    [aux_sym_line_breaks_token1] = ACTIONS(222),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(222),
    [anon_sym_image_COLON_COLON] = ACTIONS(222),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(222),
    [anon_sym_audio_COLON_COLON] = ACTIONS(222),
    [anon_sym_video_COLON_COLON] = ACTIONS(222),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(222),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(222),
    [aux_sym_url_token1] = ACTIONS(224),
    [anon_sym_LT_LT] = ACTIONS(224),
    [anon_sym_xref_COLON] = ACTIONS(224),
    [sym_emphasis] = ACTIONS(224),
    [sym_strong] = ACTIONS(224),
    [sym_monospace] = ACTIONS(224),
    [sym_highlight] = ACTIONS(222),
    [sym_superscript] = ACTIONS(224),
    [sym_subscript] = ACTIONS(222),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(222),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(222),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(222),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_title1] = ACTIONS(226),
    [sym_title2] = ACTIONS(226),
    [sym_title3] = ACTIONS(226),
    [sym_title4] = ACTIONS(226),
    [sym_title5] = ACTIONS(226),
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
    [sym_list_item_mark] = ACTIONS(228),
    [aux_sym_code_token1] = ACTIONS(226),
    [aux_sym_code_language_token1] = ACTIONS(228),
    [anon_sym_SLASH_SLASH] = ACTIONS(226),
    [aux_sym_line_breaks_token1] = ACTIONS(226),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(226),
    [anon_sym_image_COLON_COLON] = ACTIONS(226),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(226),
    [anon_sym_audio_COLON_COLON] = ACTIONS(226),
    [anon_sym_video_COLON_COLON] = ACTIONS(226),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(226),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(226),
    [aux_sym_url_token1] = ACTIONS(228),
    [anon_sym_LT_LT] = ACTIONS(228),
    [anon_sym_xref_COLON] = ACTIONS(228),
    [sym_emphasis] = ACTIONS(228),
    [sym_strong] = ACTIONS(228),
    [sym_monospace] = ACTIONS(228),
    [sym_highlight] = ACTIONS(226),
    [sym_superscript] = ACTIONS(228),
    [sym_subscript] = ACTIONS(226),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(226),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(226),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(226),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_title1] = ACTIONS(230),
    [sym_title2] = ACTIONS(230),
    [sym_title3] = ACTIONS(230),
    [sym_title4] = ACTIONS(230),
    [sym_title5] = ACTIONS(230),
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
    [sym_list_item_mark] = ACTIONS(232),
    [aux_sym_code_token1] = ACTIONS(230),
    [aux_sym_code_language_token1] = ACTIONS(232),
    [anon_sym_SLASH_SLASH] = ACTIONS(230),
    [aux_sym_line_breaks_token1] = ACTIONS(230),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(230),
    [anon_sym_image_COLON_COLON] = ACTIONS(230),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(230),
    [anon_sym_audio_COLON_COLON] = ACTIONS(230),
    [anon_sym_video_COLON_COLON] = ACTIONS(230),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(230),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(230),
    [aux_sym_url_token1] = ACTIONS(232),
    [anon_sym_LT_LT] = ACTIONS(232),
    [anon_sym_xref_COLON] = ACTIONS(232),
    [sym_emphasis] = ACTIONS(232),
    [sym_strong] = ACTIONS(232),
    [sym_monospace] = ACTIONS(232),
    [sym_highlight] = ACTIONS(230),
    [sym_superscript] = ACTIONS(232),
    [sym_subscript] = ACTIONS(230),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(230),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(230),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(230),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym_title1] = ACTIONS(234),
    [sym_title2] = ACTIONS(234),
    [sym_title3] = ACTIONS(234),
    [sym_title4] = ACTIONS(234),
    [sym_title5] = ACTIONS(234),
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
    [sym_list_item_mark] = ACTIONS(236),
    [aux_sym_code_token1] = ACTIONS(234),
    [aux_sym_code_language_token1] = ACTIONS(236),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [aux_sym_line_breaks_token1] = ACTIONS(234),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(234),
    [anon_sym_image_COLON_COLON] = ACTIONS(234),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(234),
    [anon_sym_audio_COLON_COLON] = ACTIONS(234),
    [anon_sym_video_COLON_COLON] = ACTIONS(234),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(234),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(234),
    [aux_sym_url_token1] = ACTIONS(236),
    [anon_sym_LT_LT] = ACTIONS(236),
    [anon_sym_xref_COLON] = ACTIONS(236),
    [sym_emphasis] = ACTIONS(236),
    [sym_strong] = ACTIONS(236),
    [sym_monospace] = ACTIONS(236),
    [sym_highlight] = ACTIONS(234),
    [sym_superscript] = ACTIONS(236),
    [sym_subscript] = ACTIONS(234),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(234),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(234),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym_title1] = ACTIONS(238),
    [sym_title2] = ACTIONS(238),
    [sym_title3] = ACTIONS(238),
    [sym_title4] = ACTIONS(238),
    [sym_title5] = ACTIONS(238),
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
    [sym_list_item_mark] = ACTIONS(240),
    [aux_sym_code_token1] = ACTIONS(238),
    [aux_sym_code_language_token1] = ACTIONS(240),
    [anon_sym_SLASH_SLASH] = ACTIONS(238),
    [aux_sym_line_breaks_token1] = ACTIONS(238),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(238),
    [anon_sym_image_COLON_COLON] = ACTIONS(238),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(238),
    [anon_sym_audio_COLON_COLON] = ACTIONS(238),
    [anon_sym_video_COLON_COLON] = ACTIONS(238),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(238),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(238),
    [aux_sym_url_token1] = ACTIONS(240),
    [anon_sym_LT_LT] = ACTIONS(240),
    [anon_sym_xref_COLON] = ACTIONS(240),
    [sym_emphasis] = ACTIONS(240),
    [sym_strong] = ACTIONS(240),
    [sym_monospace] = ACTIONS(240),
    [sym_highlight] = ACTIONS(238),
    [sym_superscript] = ACTIONS(240),
    [sym_subscript] = ACTIONS(238),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(238),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(238),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(238),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [sym_title1] = ACTIONS(242),
    [sym_title2] = ACTIONS(242),
    [sym_title3] = ACTIONS(242),
    [sym_title4] = ACTIONS(242),
    [sym_title5] = ACTIONS(242),
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
    [sym_list_item_mark] = ACTIONS(244),
    [aux_sym_code_token1] = ACTIONS(242),
    [aux_sym_code_language_token1] = ACTIONS(244),
    [anon_sym_SLASH_SLASH] = ACTIONS(242),
    [aux_sym_line_breaks_token1] = ACTIONS(242),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(242),
    [anon_sym_image_COLON_COLON] = ACTIONS(242),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(242),
    [anon_sym_audio_COLON_COLON] = ACTIONS(242),
    [anon_sym_video_COLON_COLON] = ACTIONS(242),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(242),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(242),
    [aux_sym_url_token1] = ACTIONS(244),
    [anon_sym_LT_LT] = ACTIONS(244),
    [anon_sym_xref_COLON] = ACTIONS(244),
    [sym_emphasis] = ACTIONS(244),
    [sym_strong] = ACTIONS(244),
    [sym_monospace] = ACTIONS(244),
    [sym_highlight] = ACTIONS(242),
    [sym_superscript] = ACTIONS(244),
    [sym_subscript] = ACTIONS(242),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(242),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(242),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(242),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym_title1] = ACTIONS(246),
    [sym_title2] = ACTIONS(246),
    [sym_title3] = ACTIONS(246),
    [sym_title4] = ACTIONS(246),
    [sym_title5] = ACTIONS(246),
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
    [sym_list_item_mark] = ACTIONS(248),
    [aux_sym_code_token1] = ACTIONS(246),
    [aux_sym_code_language_token1] = ACTIONS(248),
    [anon_sym_SLASH_SLASH] = ACTIONS(246),
    [aux_sym_line_breaks_token1] = ACTIONS(246),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(246),
    [anon_sym_image_COLON_COLON] = ACTIONS(246),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(246),
    [anon_sym_audio_COLON_COLON] = ACTIONS(246),
    [anon_sym_video_COLON_COLON] = ACTIONS(246),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(246),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(246),
    [aux_sym_url_token1] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_xref_COLON] = ACTIONS(248),
    [sym_emphasis] = ACTIONS(248),
    [sym_strong] = ACTIONS(248),
    [sym_monospace] = ACTIONS(248),
    [sym_highlight] = ACTIONS(246),
    [sym_superscript] = ACTIONS(248),
    [sym_subscript] = ACTIONS(246),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(246),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(246),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(246),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(250),
    [sym_title1] = ACTIONS(250),
    [sym_title2] = ACTIONS(250),
    [sym_title3] = ACTIONS(250),
    [sym_title4] = ACTIONS(250),
    [sym_title5] = ACTIONS(250),
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
    [sym_list_item_mark] = ACTIONS(252),
    [aux_sym_code_token1] = ACTIONS(250),
    [aux_sym_code_language_token1] = ACTIONS(252),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [aux_sym_line_breaks_token1] = ACTIONS(250),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(250),
    [anon_sym_image_COLON_COLON] = ACTIONS(250),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(250),
    [anon_sym_audio_COLON_COLON] = ACTIONS(250),
    [anon_sym_video_COLON_COLON] = ACTIONS(250),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(250),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(250),
    [aux_sym_url_token1] = ACTIONS(252),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_xref_COLON] = ACTIONS(252),
    [sym_emphasis] = ACTIONS(252),
    [sym_strong] = ACTIONS(252),
    [sym_monospace] = ACTIONS(252),
    [sym_highlight] = ACTIONS(250),
    [sym_superscript] = ACTIONS(252),
    [sym_subscript] = ACTIONS(250),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(250),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(250),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(250),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(250),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [sym_title1] = ACTIONS(254),
    [sym_title2] = ACTIONS(254),
    [sym_title3] = ACTIONS(254),
    [sym_title4] = ACTIONS(254),
    [sym_title5] = ACTIONS(254),
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
    [sym_list_item_mark] = ACTIONS(256),
    [aux_sym_code_token1] = ACTIONS(254),
    [aux_sym_code_language_token1] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(254),
    [aux_sym_line_breaks_token1] = ACTIONS(254),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(254),
    [anon_sym_image_COLON_COLON] = ACTIONS(254),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(254),
    [anon_sym_audio_COLON_COLON] = ACTIONS(254),
    [anon_sym_video_COLON_COLON] = ACTIONS(254),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(254),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(254),
    [aux_sym_url_token1] = ACTIONS(256),
    [anon_sym_LT_LT] = ACTIONS(256),
    [anon_sym_xref_COLON] = ACTIONS(256),
    [sym_emphasis] = ACTIONS(256),
    [sym_strong] = ACTIONS(256),
    [sym_monospace] = ACTIONS(256),
    [sym_highlight] = ACTIONS(254),
    [sym_superscript] = ACTIONS(256),
    [sym_subscript] = ACTIONS(254),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(254),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(254),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [sym_title1] = ACTIONS(258),
    [sym_title2] = ACTIONS(258),
    [sym_title3] = ACTIONS(258),
    [sym_title4] = ACTIONS(258),
    [sym_title5] = ACTIONS(258),
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
    [sym_list_item_mark] = ACTIONS(260),
    [aux_sym_code_token1] = ACTIONS(258),
    [aux_sym_code_language_token1] = ACTIONS(260),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [aux_sym_line_breaks_token1] = ACTIONS(258),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(258),
    [anon_sym_image_COLON_COLON] = ACTIONS(258),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(258),
    [anon_sym_audio_COLON_COLON] = ACTIONS(258),
    [anon_sym_video_COLON_COLON] = ACTIONS(258),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(258),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(258),
    [aux_sym_url_token1] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(260),
    [anon_sym_xref_COLON] = ACTIONS(260),
    [sym_emphasis] = ACTIONS(260),
    [sym_strong] = ACTIONS(260),
    [sym_monospace] = ACTIONS(260),
    [sym_highlight] = ACTIONS(258),
    [sym_superscript] = ACTIONS(260),
    [sym_subscript] = ACTIONS(258),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(258),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(258),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(258),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [sym_title1] = ACTIONS(262),
    [sym_title2] = ACTIONS(262),
    [sym_title3] = ACTIONS(262),
    [sym_title4] = ACTIONS(262),
    [sym_title5] = ACTIONS(262),
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
    [sym_list_item_mark] = ACTIONS(264),
    [aux_sym_code_token1] = ACTIONS(262),
    [aux_sym_code_language_token1] = ACTIONS(264),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [aux_sym_line_breaks_token1] = ACTIONS(262),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(262),
    [anon_sym_image_COLON_COLON] = ACTIONS(262),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(262),
    [anon_sym_audio_COLON_COLON] = ACTIONS(262),
    [anon_sym_video_COLON_COLON] = ACTIONS(262),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(262),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(262),
    [aux_sym_url_token1] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_xref_COLON] = ACTIONS(264),
    [sym_emphasis] = ACTIONS(264),
    [sym_strong] = ACTIONS(264),
    [sym_monospace] = ACTIONS(264),
    [sym_highlight] = ACTIONS(262),
    [sym_superscript] = ACTIONS(264),
    [sym_subscript] = ACTIONS(262),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(262),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(262),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(262),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [sym_title1] = ACTIONS(266),
    [sym_title2] = ACTIONS(266),
    [sym_title3] = ACTIONS(266),
    [sym_title4] = ACTIONS(266),
    [sym_title5] = ACTIONS(266),
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
    [sym_list_item_mark] = ACTIONS(268),
    [aux_sym_code_token1] = ACTIONS(266),
    [aux_sym_code_language_token1] = ACTIONS(268),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [aux_sym_line_breaks_token1] = ACTIONS(266),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(266),
    [anon_sym_image_COLON_COLON] = ACTIONS(266),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(266),
    [anon_sym_audio_COLON_COLON] = ACTIONS(266),
    [anon_sym_video_COLON_COLON] = ACTIONS(266),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(266),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(266),
    [aux_sym_url_token1] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_xref_COLON] = ACTIONS(268),
    [sym_emphasis] = ACTIONS(268),
    [sym_strong] = ACTIONS(268),
    [sym_monospace] = ACTIONS(268),
    [sym_highlight] = ACTIONS(266),
    [sym_superscript] = ACTIONS(268),
    [sym_subscript] = ACTIONS(266),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(266),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(266),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(266),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_title1] = ACTIONS(270),
    [sym_title2] = ACTIONS(270),
    [sym_title3] = ACTIONS(270),
    [sym_title4] = ACTIONS(270),
    [sym_title5] = ACTIONS(270),
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
    [sym_list_item_mark] = ACTIONS(272),
    [aux_sym_code_token1] = ACTIONS(270),
    [aux_sym_code_language_token1] = ACTIONS(272),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [aux_sym_line_breaks_token1] = ACTIONS(270),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(270),
    [anon_sym_image_COLON_COLON] = ACTIONS(270),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(270),
    [anon_sym_audio_COLON_COLON] = ACTIONS(270),
    [anon_sym_video_COLON_COLON] = ACTIONS(270),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(270),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(270),
    [aux_sym_url_token1] = ACTIONS(272),
    [anon_sym_LT_LT] = ACTIONS(272),
    [anon_sym_xref_COLON] = ACTIONS(272),
    [sym_emphasis] = ACTIONS(272),
    [sym_strong] = ACTIONS(272),
    [sym_monospace] = ACTIONS(272),
    [sym_highlight] = ACTIONS(270),
    [sym_superscript] = ACTIONS(272),
    [sym_subscript] = ACTIONS(270),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(270),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(270),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(270),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_title1] = ACTIONS(274),
    [sym_title2] = ACTIONS(274),
    [sym_title3] = ACTIONS(274),
    [sym_title4] = ACTIONS(274),
    [sym_title5] = ACTIONS(274),
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
    [sym_list_item_mark] = ACTIONS(276),
    [aux_sym_code_token1] = ACTIONS(274),
    [aux_sym_code_language_token1] = ACTIONS(276),
    [anon_sym_SLASH_SLASH] = ACTIONS(274),
    [aux_sym_line_breaks_token1] = ACTIONS(274),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(274),
    [anon_sym_image_COLON_COLON] = ACTIONS(274),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(274),
    [anon_sym_audio_COLON_COLON] = ACTIONS(274),
    [anon_sym_video_COLON_COLON] = ACTIONS(274),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(274),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(274),
    [aux_sym_url_token1] = ACTIONS(276),
    [anon_sym_LT_LT] = ACTIONS(276),
    [anon_sym_xref_COLON] = ACTIONS(276),
    [sym_emphasis] = ACTIONS(276),
    [sym_strong] = ACTIONS(276),
    [sym_monospace] = ACTIONS(276),
    [sym_highlight] = ACTIONS(274),
    [sym_superscript] = ACTIONS(276),
    [sym_subscript] = ACTIONS(274),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(274),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(274),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(274),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_title1] = ACTIONS(278),
    [sym_title2] = ACTIONS(278),
    [sym_title3] = ACTIONS(278),
    [sym_title4] = ACTIONS(278),
    [sym_title5] = ACTIONS(278),
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
    [sym_list_item_mark] = ACTIONS(280),
    [aux_sym_code_token1] = ACTIONS(278),
    [aux_sym_code_language_token1] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(278),
    [aux_sym_line_breaks_token1] = ACTIONS(278),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(278),
    [anon_sym_image_COLON_COLON] = ACTIONS(278),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(278),
    [anon_sym_audio_COLON_COLON] = ACTIONS(278),
    [anon_sym_video_COLON_COLON] = ACTIONS(278),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(278),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(278),
    [aux_sym_url_token1] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(280),
    [anon_sym_xref_COLON] = ACTIONS(280),
    [sym_emphasis] = ACTIONS(280),
    [sym_strong] = ACTIONS(280),
    [sym_monospace] = ACTIONS(280),
    [sym_highlight] = ACTIONS(278),
    [sym_superscript] = ACTIONS(280),
    [sym_subscript] = ACTIONS(278),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(278),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(278),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(278),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [sym_title1] = ACTIONS(282),
    [sym_title2] = ACTIONS(282),
    [sym_title3] = ACTIONS(282),
    [sym_title4] = ACTIONS(282),
    [sym_title5] = ACTIONS(282),
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
    [sym_list_item_mark] = ACTIONS(284),
    [aux_sym_code_token1] = ACTIONS(282),
    [aux_sym_code_language_token1] = ACTIONS(284),
    [anon_sym_SLASH_SLASH] = ACTIONS(282),
    [aux_sym_line_breaks_token1] = ACTIONS(282),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(282),
    [anon_sym_image_COLON_COLON] = ACTIONS(282),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(282),
    [anon_sym_audio_COLON_COLON] = ACTIONS(282),
    [anon_sym_video_COLON_COLON] = ACTIONS(282),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(282),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(282),
    [aux_sym_url_token1] = ACTIONS(284),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_xref_COLON] = ACTIONS(284),
    [sym_emphasis] = ACTIONS(284),
    [sym_strong] = ACTIONS(284),
    [sym_monospace] = ACTIONS(284),
    [sym_highlight] = ACTIONS(282),
    [sym_superscript] = ACTIONS(284),
    [sym_subscript] = ACTIONS(282),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(282),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(282),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(282),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym_title1] = ACTIONS(286),
    [sym_title2] = ACTIONS(286),
    [sym_title3] = ACTIONS(286),
    [sym_title4] = ACTIONS(286),
    [sym_title5] = ACTIONS(286),
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
    [sym_list_item_mark] = ACTIONS(288),
    [aux_sym_code_token1] = ACTIONS(286),
    [aux_sym_code_language_token1] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [aux_sym_line_breaks_token1] = ACTIONS(286),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(286),
    [anon_sym_image_COLON_COLON] = ACTIONS(286),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(286),
    [anon_sym_audio_COLON_COLON] = ACTIONS(286),
    [anon_sym_video_COLON_COLON] = ACTIONS(286),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(286),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(286),
    [aux_sym_url_token1] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_xref_COLON] = ACTIONS(288),
    [sym_emphasis] = ACTIONS(288),
    [sym_strong] = ACTIONS(288),
    [sym_monospace] = ACTIONS(288),
    [sym_highlight] = ACTIONS(286),
    [sym_superscript] = ACTIONS(288),
    [sym_subscript] = ACTIONS(286),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(286),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(286),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(286),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_title1] = ACTIONS(290),
    [sym_title2] = ACTIONS(290),
    [sym_title3] = ACTIONS(290),
    [sym_title4] = ACTIONS(290),
    [sym_title5] = ACTIONS(290),
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
    [sym_list_item_mark] = ACTIONS(292),
    [aux_sym_code_token1] = ACTIONS(290),
    [aux_sym_code_language_token1] = ACTIONS(292),
    [anon_sym_SLASH_SLASH] = ACTIONS(290),
    [aux_sym_line_breaks_token1] = ACTIONS(290),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(290),
    [anon_sym_image_COLON_COLON] = ACTIONS(290),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(290),
    [anon_sym_audio_COLON_COLON] = ACTIONS(290),
    [anon_sym_video_COLON_COLON] = ACTIONS(290),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(290),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(290),
    [aux_sym_url_token1] = ACTIONS(292),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_xref_COLON] = ACTIONS(292),
    [sym_emphasis] = ACTIONS(292),
    [sym_strong] = ACTIONS(292),
    [sym_monospace] = ACTIONS(292),
    [sym_highlight] = ACTIONS(290),
    [sym_superscript] = ACTIONS(292),
    [sym_subscript] = ACTIONS(290),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(290),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(290),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(290),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym_title1] = ACTIONS(294),
    [sym_title2] = ACTIONS(294),
    [sym_title3] = ACTIONS(294),
    [sym_title4] = ACTIONS(294),
    [sym_title5] = ACTIONS(294),
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
    [sym_list_item_mark] = ACTIONS(296),
    [aux_sym_code_token1] = ACTIONS(294),
    [aux_sym_code_language_token1] = ACTIONS(296),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [aux_sym_line_breaks_token1] = ACTIONS(294),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(294),
    [anon_sym_image_COLON_COLON] = ACTIONS(294),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(294),
    [anon_sym_audio_COLON_COLON] = ACTIONS(294),
    [anon_sym_video_COLON_COLON] = ACTIONS(294),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(294),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(294),
    [aux_sym_url_token1] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_xref_COLON] = ACTIONS(296),
    [sym_emphasis] = ACTIONS(296),
    [sym_strong] = ACTIONS(296),
    [sym_monospace] = ACTIONS(296),
    [sym_highlight] = ACTIONS(294),
    [sym_superscript] = ACTIONS(296),
    [sym_subscript] = ACTIONS(294),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(294),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(294),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(294),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym_title1] = ACTIONS(298),
    [sym_title2] = ACTIONS(298),
    [sym_title3] = ACTIONS(298),
    [sym_title4] = ACTIONS(298),
    [sym_title5] = ACTIONS(298),
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
    [sym_list_item_mark] = ACTIONS(300),
    [aux_sym_code_token1] = ACTIONS(298),
    [aux_sym_code_language_token1] = ACTIONS(300),
    [anon_sym_SLASH_SLASH] = ACTIONS(298),
    [aux_sym_line_breaks_token1] = ACTIONS(298),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(298),
    [anon_sym_image_COLON_COLON] = ACTIONS(298),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(298),
    [anon_sym_audio_COLON_COLON] = ACTIONS(298),
    [anon_sym_video_COLON_COLON] = ACTIONS(298),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(298),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(298),
    [aux_sym_url_token1] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_xref_COLON] = ACTIONS(300),
    [sym_emphasis] = ACTIONS(300),
    [sym_strong] = ACTIONS(300),
    [sym_monospace] = ACTIONS(300),
    [sym_highlight] = ACTIONS(298),
    [sym_superscript] = ACTIONS(300),
    [sym_subscript] = ACTIONS(298),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(298),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(298),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(298),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_title1] = ACTIONS(302),
    [sym_title2] = ACTIONS(302),
    [sym_title3] = ACTIONS(302),
    [sym_title4] = ACTIONS(302),
    [sym_title5] = ACTIONS(302),
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
    [sym_list_item_mark] = ACTIONS(304),
    [aux_sym_code_token1] = ACTIONS(302),
    [aux_sym_code_language_token1] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(302),
    [aux_sym_line_breaks_token1] = ACTIONS(302),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(302),
    [anon_sym_image_COLON_COLON] = ACTIONS(302),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(302),
    [anon_sym_audio_COLON_COLON] = ACTIONS(302),
    [anon_sym_video_COLON_COLON] = ACTIONS(302),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(302),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(302),
    [aux_sym_url_token1] = ACTIONS(304),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_xref_COLON] = ACTIONS(304),
    [sym_emphasis] = ACTIONS(304),
    [sym_strong] = ACTIONS(304),
    [sym_monospace] = ACTIONS(304),
    [sym_highlight] = ACTIONS(302),
    [sym_superscript] = ACTIONS(304),
    [sym_subscript] = ACTIONS(302),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(302),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(302),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(302),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(302),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [sym_title1] = ACTIONS(306),
    [sym_title2] = ACTIONS(306),
    [sym_title3] = ACTIONS(306),
    [sym_title4] = ACTIONS(306),
    [sym_title5] = ACTIONS(306),
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
    [sym_list_item_mark] = ACTIONS(308),
    [aux_sym_code_token1] = ACTIONS(306),
    [aux_sym_code_language_token1] = ACTIONS(308),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [aux_sym_line_breaks_token1] = ACTIONS(306),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(306),
    [anon_sym_image_COLON_COLON] = ACTIONS(306),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(306),
    [anon_sym_audio_COLON_COLON] = ACTIONS(306),
    [anon_sym_video_COLON_COLON] = ACTIONS(306),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(306),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(306),
    [aux_sym_url_token1] = ACTIONS(308),
    [anon_sym_LT_LT] = ACTIONS(308),
    [anon_sym_xref_COLON] = ACTIONS(308),
    [sym_emphasis] = ACTIONS(308),
    [sym_strong] = ACTIONS(308),
    [sym_monospace] = ACTIONS(308),
    [sym_highlight] = ACTIONS(306),
    [sym_superscript] = ACTIONS(308),
    [sym_subscript] = ACTIONS(306),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(306),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(306),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(306),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_title1] = ACTIONS(310),
    [sym_title2] = ACTIONS(310),
    [sym_title3] = ACTIONS(310),
    [sym_title4] = ACTIONS(310),
    [sym_title5] = ACTIONS(310),
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
    [sym_list_item_mark] = ACTIONS(312),
    [aux_sym_code_token1] = ACTIONS(310),
    [aux_sym_code_language_token1] = ACTIONS(312),
    [anon_sym_SLASH_SLASH] = ACTIONS(310),
    [aux_sym_line_breaks_token1] = ACTIONS(310),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(310),
    [anon_sym_image_COLON_COLON] = ACTIONS(310),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(310),
    [anon_sym_audio_COLON_COLON] = ACTIONS(310),
    [anon_sym_video_COLON_COLON] = ACTIONS(310),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(310),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(310),
    [aux_sym_url_token1] = ACTIONS(312),
    [anon_sym_LT_LT] = ACTIONS(312),
    [anon_sym_xref_COLON] = ACTIONS(312),
    [sym_emphasis] = ACTIONS(312),
    [sym_strong] = ACTIONS(312),
    [sym_monospace] = ACTIONS(312),
    [sym_highlight] = ACTIONS(310),
    [sym_superscript] = ACTIONS(312),
    [sym_subscript] = ACTIONS(310),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(310),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(310),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(310),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym_title1] = ACTIONS(314),
    [sym_title2] = ACTIONS(314),
    [sym_title3] = ACTIONS(314),
    [sym_title4] = ACTIONS(314),
    [sym_title5] = ACTIONS(314),
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
    [sym_list_item_mark] = ACTIONS(316),
    [aux_sym_code_token1] = ACTIONS(314),
    [aux_sym_code_language_token1] = ACTIONS(316),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [aux_sym_line_breaks_token1] = ACTIONS(314),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(314),
    [anon_sym_image_COLON_COLON] = ACTIONS(314),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(314),
    [anon_sym_audio_COLON_COLON] = ACTIONS(314),
    [anon_sym_video_COLON_COLON] = ACTIONS(314),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(314),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(314),
    [aux_sym_url_token1] = ACTIONS(316),
    [anon_sym_LT_LT] = ACTIONS(316),
    [anon_sym_xref_COLON] = ACTIONS(316),
    [sym_emphasis] = ACTIONS(316),
    [sym_strong] = ACTIONS(316),
    [sym_monospace] = ACTIONS(316),
    [sym_highlight] = ACTIONS(314),
    [sym_superscript] = ACTIONS(316),
    [sym_subscript] = ACTIONS(314),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(314),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(314),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(314),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(314),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [sym_title1] = ACTIONS(318),
    [sym_title2] = ACTIONS(318),
    [sym_title3] = ACTIONS(318),
    [sym_title4] = ACTIONS(318),
    [sym_title5] = ACTIONS(318),
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
    [sym_list_item_mark] = ACTIONS(320),
    [aux_sym_code_token1] = ACTIONS(318),
    [aux_sym_code_language_token1] = ACTIONS(320),
    [anon_sym_SLASH_SLASH] = ACTIONS(318),
    [aux_sym_line_breaks_token1] = ACTIONS(318),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(318),
    [anon_sym_image_COLON_COLON] = ACTIONS(318),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(318),
    [anon_sym_audio_COLON_COLON] = ACTIONS(318),
    [anon_sym_video_COLON_COLON] = ACTIONS(318),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(318),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(318),
    [aux_sym_url_token1] = ACTIONS(320),
    [anon_sym_LT_LT] = ACTIONS(320),
    [anon_sym_xref_COLON] = ACTIONS(320),
    [sym_emphasis] = ACTIONS(320),
    [sym_strong] = ACTIONS(320),
    [sym_monospace] = ACTIONS(320),
    [sym_highlight] = ACTIONS(318),
    [sym_superscript] = ACTIONS(320),
    [sym_subscript] = ACTIONS(318),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(318),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(318),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(318),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym_title1] = ACTIONS(322),
    [sym_title2] = ACTIONS(322),
    [sym_title3] = ACTIONS(322),
    [sym_title4] = ACTIONS(322),
    [sym_title5] = ACTIONS(322),
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
    [sym_list_item_mark] = ACTIONS(324),
    [aux_sym_code_token1] = ACTIONS(322),
    [aux_sym_code_language_token1] = ACTIONS(324),
    [anon_sym_SLASH_SLASH] = ACTIONS(322),
    [aux_sym_line_breaks_token1] = ACTIONS(322),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(322),
    [anon_sym_image_COLON_COLON] = ACTIONS(322),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(322),
    [anon_sym_audio_COLON_COLON] = ACTIONS(322),
    [anon_sym_video_COLON_COLON] = ACTIONS(322),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(322),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(322),
    [aux_sym_url_token1] = ACTIONS(324),
    [anon_sym_LT_LT] = ACTIONS(324),
    [anon_sym_xref_COLON] = ACTIONS(324),
    [sym_emphasis] = ACTIONS(324),
    [sym_strong] = ACTIONS(324),
    [sym_monospace] = ACTIONS(324),
    [sym_highlight] = ACTIONS(322),
    [sym_superscript] = ACTIONS(324),
    [sym_subscript] = ACTIONS(322),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(322),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(322),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(322),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(322),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(51), 1,
      aux_sym_url_token1,
    ACTIONS(53), 1,
      anon_sym_LT_LT,
    ACTIONS(55), 1,
      anon_sym_xref_COLON,
    ACTIONS(328), 1,
      anon_sym_LF_LF,
    ACTIONS(330), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(332), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(334), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(336), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(51), 2,
      sym__inline_xref,
      sym__xref,
    STATE(52), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(326), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(45), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(338), 30,
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
  [84] = 13,
    ACTIONS(343), 1,
      anon_sym_LF_LF,
    ACTIONS(345), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(348), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(351), 1,
      aux_sym_url_token1,
    ACTIONS(354), 1,
      anon_sym_LT_LT,
    ACTIONS(357), 1,
      anon_sym_xref_COLON,
    ACTIONS(360), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(363), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(51), 2,
      sym__inline_xref,
      sym__xref,
    STATE(52), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(340), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(45), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(366), 30,
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
  [168] = 3,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LF_LF,
    ACTIONS(369), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [221] = 3,
    ACTIONS(377), 1,
      anon_sym_COLON_COLON,
    ACTIONS(379), 1,
      anon_sym_LF_LF,
    ACTIONS(375), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [274] = 2,
    ACTIONS(383), 1,
      anon_sym_LF_LF,
    ACTIONS(381), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [324] = 2,
    ACTIONS(387), 1,
      anon_sym_LF_LF,
    ACTIONS(385), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [374] = 2,
    ACTIONS(391), 1,
      anon_sym_LF_LF,
    ACTIONS(389), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [424] = 2,
    ACTIONS(395), 1,
      anon_sym_LF_LF,
    ACTIONS(393), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [474] = 2,
    ACTIONS(399), 1,
      anon_sym_LF_LF,
    ACTIONS(397), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [524] = 2,
    ACTIONS(403), 1,
      anon_sym_LF_LF,
    ACTIONS(401), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [574] = 2,
    ACTIONS(407), 1,
      anon_sym_LF_LF,
    ACTIONS(405), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [624] = 2,
    ACTIONS(411), 1,
      anon_sym_LF_LF,
    ACTIONS(409), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [674] = 2,
    ACTIONS(415), 1,
      anon_sym_LF_LF,
    ACTIONS(413), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [724] = 2,
    ACTIONS(419), 1,
      anon_sym_LF_LF,
    ACTIONS(417), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [774] = 2,
    ACTIONS(423), 1,
      anon_sym_LF_LF,
    ACTIONS(421), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [824] = 2,
    ACTIONS(427), 1,
      anon_sym_LF_LF,
    ACTIONS(425), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [874] = 2,
    ACTIONS(431), 1,
      anon_sym_LF_LF,
    ACTIONS(429), 44,
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
      anon_sym_PLUS_PLUS_PLUS,
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
  [924] = 5,
    ACTIONS(433), 1,
      aux_sym_list_item_content_token1,
    ACTIONS(435), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(40), 1,
      sym_table_end,
    STATE(74), 1,
      aux_sym_table_content_repeat1,
    STATE(83), 1,
      sym_table_content,
  [940] = 3,
    ACTIONS(27), 1,
      sym_list_item_mark,
    ACTIONS(437), 1,
      anon_sym_LF,
    STATE(63), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [951] = 3,
    ACTIONS(439), 1,
      anon_sym_LF,
    ACTIONS(441), 1,
      sym_list_item_mark,
    STATE(63), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [962] = 4,
    ACTIONS(444), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(446), 1,
      aux_sym__note_block_token1,
    STATE(70), 1,
      aux_sym__note_block_repeat1,
    STATE(129), 1,
      sym_code_content,
  [975] = 3,
    ACTIONS(448), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(450), 1,
      aux_sym__note_block_token1,
    STATE(77), 1,
      aux_sym__note_block_repeat1,
  [985] = 3,
    ACTIONS(450), 1,
      aux_sym__note_block_token1,
    ACTIONS(452), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(77), 1,
      aux_sym__note_block_repeat1,
  [995] = 3,
    ACTIONS(454), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(456), 1,
      aux_sym__note_block_token1,
    STATE(72), 1,
      aux_sym__note_block_repeat1,
  [1005] = 3,
    ACTIONS(450), 1,
      aux_sym__note_block_token1,
    ACTIONS(458), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(77), 1,
      aux_sym__note_block_repeat1,
  [1015] = 3,
    ACTIONS(460), 1,
      aux_sym_list_item_content_token1,
    ACTIONS(463), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(69), 1,
      aux_sym_table_content_repeat1,
  [1025] = 3,
    ACTIONS(450), 1,
      aux_sym__note_block_token1,
    ACTIONS(465), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(77), 1,
      aux_sym__note_block_repeat1,
  [1035] = 3,
    ACTIONS(467), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(469), 1,
      aux_sym__note_block_token1,
    STATE(65), 1,
      aux_sym__note_block_repeat1,
  [1045] = 3,
    ACTIONS(450), 1,
      aux_sym__note_block_token1,
    ACTIONS(471), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(77), 1,
      aux_sym__note_block_repeat1,
  [1055] = 3,
    ACTIONS(473), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(475), 1,
      aux_sym__note_block_token1,
    STATE(75), 1,
      aux_sym__note_block_repeat1,
  [1065] = 3,
    ACTIONS(477), 1,
      aux_sym_list_item_content_token1,
    ACTIONS(479), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(69), 1,
      aux_sym_table_content_repeat1,
  [1075] = 3,
    ACTIONS(450), 1,
      aux_sym__note_block_token1,
    ACTIONS(481), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(77), 1,
      aux_sym__note_block_repeat1,
  [1085] = 3,
    ACTIONS(483), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(485), 1,
      aux_sym__note_block_token1,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [1095] = 3,
    ACTIONS(487), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(489), 1,
      aux_sym__note_block_token1,
    STATE(77), 1,
      aux_sym__note_block_repeat1,
  [1105] = 3,
    ACTIONS(492), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(494), 1,
      aux_sym__note_block_token1,
    STATE(66), 1,
      aux_sym__note_block_repeat1,
  [1115] = 1,
    ACTIONS(496), 2,
      aux_sym_list_item_content_token1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1120] = 2,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      aux_sym_image_token2,
  [1127] = 2,
    ACTIONS(502), 1,
      aux_sym_audio_token1,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
  [1134] = 2,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    ACTIONS(508), 1,
      sym_footnote_content,
  [1141] = 2,
    ACTIONS(510), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(20), 1,
      sym_table_end,
  [1148] = 2,
    ACTIONS(512), 1,
      aux_sym_list_item_content_token1,
    STATE(91), 1,
      sym_list_item_content,
  [1155] = 2,
    ACTIONS(514), 1,
      aux_sym_code_language_token1,
    STATE(135), 1,
      sym_code_language,
  [1162] = 2,
    ACTIONS(516), 1,
      aux_sym_audio_token1,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
  [1169] = 2,
    ACTIONS(520), 1,
      aux_sym_audio_token1,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
  [1176] = 2,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    ACTIONS(526), 1,
      sym_kbd_content,
  [1183] = 2,
    ACTIONS(528), 1,
      anon_sym_LBRACK,
    ACTIONS(530), 1,
      aux_sym_image_token2,
  [1190] = 2,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(534), 1,
      sym_list_item_mark,
  [1197] = 2,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(538), 1,
      sym_list_item_mark,
  [1204] = 2,
    ACTIONS(540), 1,
      aux_sym_audio_token1,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
  [1211] = 2,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_GT_GT,
  [1218] = 1,
    ACTIONS(548), 1,
      aux_sym_code_language_token1,
  [1222] = 1,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
  [1226] = 1,
    ACTIONS(552), 1,
      anon_sym_RBRACK_LF,
  [1230] = 1,
    ACTIONS(554), 1,
      aux_sym_image_token2,
  [1234] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
  [1238] = 1,
    ACTIONS(558), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1242] = 1,
    ACTIONS(560), 1,
      aux_sym_code_language_token1,
  [1246] = 1,
    ACTIONS(562), 1,
      aux_sym__note_line_token1,
  [1250] = 1,
    ACTIONS(564), 1,
      aux_sym_code_language_token1,
  [1254] = 1,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
  [1258] = 1,
    ACTIONS(568), 1,
      aux_sym_code_language_token1,
  [1262] = 1,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
  [1266] = 1,
    ACTIONS(572), 1,
      aux_sym_code_language_token1,
  [1270] = 1,
    ACTIONS(574), 1,
      aux_sym__note_line_token1,
  [1274] = 1,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
  [1278] = 1,
    ACTIONS(578), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1282] = 1,
    ACTIONS(580), 1,
      anon_sym_LBRACK,
  [1286] = 1,
    ACTIONS(582), 1,
      aux_sym_image_token2,
  [1290] = 1,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
  [1294] = 1,
    ACTIONS(586), 1,
      aux_sym_image_token1,
  [1298] = 1,
    ACTIONS(588), 1,
      aux_sym_comment_token1,
  [1302] = 1,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
  [1306] = 1,
    ACTIONS(592), 1,
      anon_sym_,
  [1310] = 1,
    ACTIONS(594), 1,
      anon_sym_LBRACK,
  [1314] = 1,
    ACTIONS(596), 1,
      anon_sym_RBRACK_LF,
  [1318] = 1,
    ACTIONS(598), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1322] = 1,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
  [1326] = 1,
    ACTIONS(602), 1,
      aux_sym__note_line_token1,
  [1330] = 1,
    ACTIONS(604), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1334] = 1,
    ACTIONS(606), 1,
      anon_sym_RBRACK,
  [1338] = 1,
    ACTIONS(608), 1,
      aux_sym__note_line_token1,
  [1342] = 1,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
  [1346] = 1,
    ACTIONS(612), 1,
      anon_sym_GT_GT,
  [1350] = 1,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
  [1354] = 1,
    ACTIONS(616), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1358] = 1,
    ACTIONS(618), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1362] = 1,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
  [1366] = 1,
    ACTIONS(622), 1,
      aux_sym__note_line_token1,
  [1370] = 1,
    ACTIONS(624), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1374] = 1,
    ACTIONS(626), 1,
      aux_sym__note_line_token1,
  [1378] = 1,
    ACTIONS(628), 1,
      aux_sym__note_line_token1,
  [1382] = 1,
    ACTIONS(630), 1,
      anon_sym_RBRACK_LF,
  [1386] = 1,
    ACTIONS(632), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(44)] = 0,
  [SMALL_STATE(45)] = 84,
  [SMALL_STATE(46)] = 168,
  [SMALL_STATE(47)] = 221,
  [SMALL_STATE(48)] = 274,
  [SMALL_STATE(49)] = 324,
  [SMALL_STATE(50)] = 374,
  [SMALL_STATE(51)] = 424,
  [SMALL_STATE(52)] = 474,
  [SMALL_STATE(53)] = 524,
  [SMALL_STATE(54)] = 574,
  [SMALL_STATE(55)] = 624,
  [SMALL_STATE(56)] = 674,
  [SMALL_STATE(57)] = 724,
  [SMALL_STATE(58)] = 774,
  [SMALL_STATE(59)] = 824,
  [SMALL_STATE(60)] = 874,
  [SMALL_STATE(61)] = 924,
  [SMALL_STATE(62)] = 940,
  [SMALL_STATE(63)] = 951,
  [SMALL_STATE(64)] = 962,
  [SMALL_STATE(65)] = 975,
  [SMALL_STATE(66)] = 985,
  [SMALL_STATE(67)] = 995,
  [SMALL_STATE(68)] = 1005,
  [SMALL_STATE(69)] = 1015,
  [SMALL_STATE(70)] = 1025,
  [SMALL_STATE(71)] = 1035,
  [SMALL_STATE(72)] = 1045,
  [SMALL_STATE(73)] = 1055,
  [SMALL_STATE(74)] = 1065,
  [SMALL_STATE(75)] = 1075,
  [SMALL_STATE(76)] = 1085,
  [SMALL_STATE(77)] = 1095,
  [SMALL_STATE(78)] = 1105,
  [SMALL_STATE(79)] = 1115,
  [SMALL_STATE(80)] = 1120,
  [SMALL_STATE(81)] = 1127,
  [SMALL_STATE(82)] = 1134,
  [SMALL_STATE(83)] = 1141,
  [SMALL_STATE(84)] = 1148,
  [SMALL_STATE(85)] = 1155,
  [SMALL_STATE(86)] = 1162,
  [SMALL_STATE(87)] = 1169,
  [SMALL_STATE(88)] = 1176,
  [SMALL_STATE(89)] = 1183,
  [SMALL_STATE(90)] = 1190,
  [SMALL_STATE(91)] = 1197,
  [SMALL_STATE(92)] = 1204,
  [SMALL_STATE(93)] = 1211,
  [SMALL_STATE(94)] = 1218,
  [SMALL_STATE(95)] = 1222,
  [SMALL_STATE(96)] = 1226,
  [SMALL_STATE(97)] = 1230,
  [SMALL_STATE(98)] = 1234,
  [SMALL_STATE(99)] = 1238,
  [SMALL_STATE(100)] = 1242,
  [SMALL_STATE(101)] = 1246,
  [SMALL_STATE(102)] = 1250,
  [SMALL_STATE(103)] = 1254,
  [SMALL_STATE(104)] = 1258,
  [SMALL_STATE(105)] = 1262,
  [SMALL_STATE(106)] = 1266,
  [SMALL_STATE(107)] = 1270,
  [SMALL_STATE(108)] = 1274,
  [SMALL_STATE(109)] = 1278,
  [SMALL_STATE(110)] = 1282,
  [SMALL_STATE(111)] = 1286,
  [SMALL_STATE(112)] = 1290,
  [SMALL_STATE(113)] = 1294,
  [SMALL_STATE(114)] = 1298,
  [SMALL_STATE(115)] = 1302,
  [SMALL_STATE(116)] = 1306,
  [SMALL_STATE(117)] = 1310,
  [SMALL_STATE(118)] = 1314,
  [SMALL_STATE(119)] = 1318,
  [SMALL_STATE(120)] = 1322,
  [SMALL_STATE(121)] = 1326,
  [SMALL_STATE(122)] = 1330,
  [SMALL_STATE(123)] = 1334,
  [SMALL_STATE(124)] = 1338,
  [SMALL_STATE(125)] = 1342,
  [SMALL_STATE(126)] = 1346,
  [SMALL_STATE(127)] = 1350,
  [SMALL_STATE(128)] = 1354,
  [SMALL_STATE(129)] = 1358,
  [SMALL_STATE(130)] = 1362,
  [SMALL_STATE(131)] = 1366,
  [SMALL_STATE(132)] = 1370,
  [SMALL_STATE(133)] = 1374,
  [SMALL_STATE(134)] = 1378,
  [SMALL_STATE(135)] = 1382,
  [SMALL_STATE(136)] = 1386,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(136),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(133),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(132),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(131),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(128),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(45),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(88),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(82),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(46),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(94),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(100),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(101),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(102),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(49),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(116),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(69),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_content, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(77),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [570] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
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
