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
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 44
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
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
  anon_sym_pass_COLON_LBRACK = 56,
  anon_sym_LBRACEblank_RBRACE = 57,
  anon_sym_LBRACEempty_RBRACE = 58,
  anon_sym_LBRACEsp_RBRACE = 59,
  anon_sym_LBRACEnbsp_RBRACE = 60,
  anon_sym_LBRACEzwsp_RBRACE = 61,
  anon_sym_LBRACEwj_RBRACE = 62,
  anon_sym_LBRACEapos_RBRACE = 63,
  anon_sym_LBRACEquot_RBRACE = 64,
  anon_sym_LBRACElsquo_RBRACE = 65,
  anon_sym_LBRACErsquo_RBRACE = 66,
  anon_sym_LBRACEldquo_RBRACE = 67,
  anon_sym_LBRACErdquo_RBRACE = 68,
  anon_sym_LBRACEdeg_RBRACE = 69,
  anon_sym_LBRACEplus_RBRACE = 70,
  anon_sym_LBRACEbrvbar_RBRACE = 71,
  anon_sym_LBRACEvbar_RBRACE = 72,
  anon_sym_LBRACEamp_RBRACE = 73,
  anon_sym_LBRACElt_RBRACE = 74,
  anon_sym_LBRACEgt_RBRACE = 75,
  anon_sym_LBRACEstartsb_RBRACE = 76,
  anon_sym_LBRACEendsb_RBRACE = 77,
  anon_sym_LBRACEcaret_RBRACE = 78,
  anon_sym_LBRACEasterisk_RBRACE = 79,
  anon_sym_LBRACEtilde_RBRACE = 80,
  anon_sym_LBRACEbackslash_RBRACE = 81,
  anon_sym_LBRACEbacktick_RBRACE = 82,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 83,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 84,
  anon_sym_LBRACEcpp_RBRACE = 85,
  anon_sym_LBRACEpp_RBRACE = 86,
  sym_document = 87,
  sym__block = 88,
  sym__admonitions = 89,
  sym_note = 90,
  sym__note_line = 91,
  sym__note_block = 92,
  sym_tip = 93,
  sym__tip = 94,
  sym__tip_block = 95,
  sym_important = 96,
  sym__important = 97,
  sym__important_block = 98,
  sym_caution = 99,
  sym__caution = 100,
  sym__caution_block = 101,
  sym_warning = 102,
  sym__warning = 103,
  sym__warning_block = 104,
  sym_list = 105,
  sym_list_item = 106,
  sym_list_item_content = 107,
  sym_code = 108,
  sym_code_language = 109,
  sym_code_content = 110,
  sym_comment = 111,
  sym_line_breaks = 112,
  sym_page_breaks = 113,
  sym_image = 114,
  sym_table = 115,
  sym_table_start = 116,
  sym_table_content = 117,
  sym_table_end = 118,
  sym_description_list = 119,
  sym_audio = 120,
  sym_video = 121,
  sym_paragraph = 122,
  sym__inline_element = 123,
  sym_kbd = 124,
  sym_footnote = 125,
  sym_url = 126,
  sym_xref = 127,
  sym__inline_xref = 128,
  sym__xref = 129,
  sym_passthrough = 130,
  sym_replacement = 131,
  aux_sym_document_repeat1 = 132,
  aux_sym__note_block_repeat1 = 133,
  aux_sym_list_repeat1 = 134,
  aux_sym_table_content_repeat1 = 135,
  aux_sym_paragraph_repeat1 = 136,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(265);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == '-') ADVANCE(294);
      if (lookahead == '.') ADVANCE(297);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(116);
      if (lookahead == 'C') ADVANCE(323);
      if (lookahead == 'I') ADVANCE(331);
      if (lookahead == 'N') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(328);
      if (lookahead == 'W') ADVANCE(324);
      if (lookahead == '[') ADVANCE(453);
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '^') ADVANCE(261);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'k') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(348);
      if (lookahead == 'v') ADVANCE(361);
      if (lookahead == 'x') ADVANCE(369);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '~') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(448);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(280);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(449);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(456);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == ':') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == ':') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(279);
      if (lookahead == ':') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(288);
      if (lookahead == ':') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(290);
      if (lookahead == ':') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(286);
      if (lookahead == ':') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(462);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '[') ADVANCE(454);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'k') ADVANCE(409);
      if (lookahead == 'p') ADVANCE(407);
      if (lookahead == 'x') ADVANCE(428);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '~') ADVANCE(263);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '|') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(293);
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
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(282);
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
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '[') ADVANCE(454);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'k') ADVANCE(409);
      if (lookahead == 'p') ADVANCE(407);
      if (lookahead == 'x') ADVANCE(428);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '~') ADVANCE(263);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(267);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(445);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(457);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(273);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(276);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(480);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == ',') ADVANCE(309);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '[') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(471);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(469);
      if (lookahead == '_') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(470);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '_') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(458);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(450);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(461);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '[') ADVANCE(463);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '[') ADVANCE(488);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '[') ADVANCE(466);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(458);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(450);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(461);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '^') ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '`') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(103);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(97);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(90);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'E') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'G') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'M') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ']') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ']') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ']') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ']') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 111:
      if (lookahead == '<') ADVANCE(473);
      END_STATE();
    case 112:
      if (lookahead == '<') ADVANCE(472);
      END_STATE();
    case 113:
      if (lookahead == '=') ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 115:
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 116:
      if (lookahead == '>') ADVANCE(475);
      END_STATE();
    case 117:
      if (lookahead == '[') ADVANCE(463);
      END_STATE();
    case 118:
      if (lookahead == '[') ADVANCE(488);
      END_STATE();
    case 119:
      if (lookahead == '[') ADVANCE(466);
      END_STATE();
    case 120:
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 121:
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 122:
      if (lookahead == ']') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      END_STATE();
    case 123:
      if (lookahead == '^') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == '`') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(211);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == 'q') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'v') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(158);
      if (lookahead == 'z') ADVANCE(224);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(209);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(250);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'w') ADVANCE(174);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 158:
      if (lookahead == 'j') ADVANCE(230);
      END_STATE();
    case 159:
      if (lookahead == 'k') ADVANCE(201);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(240);
      END_STATE();
    case 161:
      if (lookahead == 'k') ADVANCE(251);
      END_STATE();
    case 162:
      if (lookahead == 'k') ADVANCE(252);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(244);
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
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 191:
      if (lookahead == 'q') ADVANCE(218);
      END_STATE();
    case 192:
      if (lookahead == 'q') ADVANCE(220);
      END_STATE();
    case 193:
      if (lookahead == 'q') ADVANCE(221);
      END_STATE();
    case 194:
      if (lookahead == 'q') ADVANCE(222);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 223:
      if (lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 224:
      if (lookahead == 'w') ADVANCE(210);
      END_STATE();
    case 225:
      if (lookahead == 'y') ADVANCE(242);
      END_STATE();
    case 226:
      if (lookahead == '}') ADVANCE(507);
      END_STATE();
    case 227:
      if (lookahead == '}') ADVANCE(506);
      END_STATE();
    case 228:
      if (lookahead == '}') ADVANCE(518);
      END_STATE();
    case 229:
      if (lookahead == '}') ADVANCE(491);
      END_STATE();
    case 230:
      if (lookahead == '}') ADVANCE(494);
      END_STATE();
    case 231:
      if (lookahead == '}') ADVANCE(505);
      END_STATE();
    case 232:
      if (lookahead == '}') ADVANCE(517);
      END_STATE();
    case 233:
      if (lookahead == '}') ADVANCE(501);
      END_STATE();
    case 234:
      if (lookahead == '}') ADVANCE(495);
      END_STATE();
    case 235:
      if (lookahead == '}') ADVANCE(492);
      END_STATE();
    case 236:
      if (lookahead == '}') ADVANCE(502);
      END_STATE();
    case 237:
      if (lookahead == '}') ADVANCE(496);
      END_STATE();
    case 238:
      if (lookahead == '}') ADVANCE(504);
      END_STATE();
    case 239:
      if (lookahead == '}') ADVANCE(493);
      END_STATE();
    case 240:
      if (lookahead == '}') ADVANCE(489);
      END_STATE();
    case 241:
      if (lookahead == '}') ADVANCE(510);
      END_STATE();
    case 242:
      if (lookahead == '}') ADVANCE(490);
      END_STATE();
    case 243:
      if (lookahead == '}') ADVANCE(509);
      END_STATE();
    case 244:
      if (lookahead == '}') ADVANCE(499);
      END_STATE();
    case 245:
      if (lookahead == '}') ADVANCE(497);
      END_STATE();
    case 246:
      if (lookahead == '}') ADVANCE(500);
      END_STATE();
    case 247:
      if (lookahead == '}') ADVANCE(498);
      END_STATE();
    case 248:
      if (lookahead == '}') ADVANCE(512);
      END_STATE();
    case 249:
      if (lookahead == '}') ADVANCE(503);
      END_STATE();
    case 250:
      if (lookahead == '}') ADVANCE(508);
      END_STATE();
    case 251:
      if (lookahead == '}') ADVANCE(511);
      END_STATE();
    case 252:
      if (lookahead == '}') ADVANCE(514);
      END_STATE();
    case 253:
      if (lookahead == '}') ADVANCE(513);
      END_STATE();
    case 254:
      if (lookahead == '}') ADVANCE(515);
      END_STATE();
    case 255:
      if (lookahead == '}') ADVANCE(516);
      END_STATE();
    case 256:
      if (lookahead == '~') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 257:
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(22);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 259:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 260:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 262:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 263:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 264:
      if (eof) ADVANCE(265);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(390);
      if (lookahead == 'N') ADVANCE(395);
      if (lookahead == 'T') ADVANCE(387);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == ']') ADVANCE(6);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '_') ADVANCE(377);
      if (lookahead == '`') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == 'k') ADVANCE(409);
      if (lookahead == 'p') ADVANCE(407);
      if (lookahead == 'v') ADVANCE(420);
      if (lookahead == 'x') ADVANCE(428);
      if (lookahead == '{') ADVANCE(126);
      if (lookahead == '|') ADVANCE(115);
      if (lookahead == '~') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_title1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_title1);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(268);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_title5);
      if (lookahead == '\n') ADVANCE(274);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_list_item_mark);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '*') ADVANCE(257);
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(257);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(456);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(298);
      if (lookahead == '=') ADVANCE(301);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(298);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(298);
      if (lookahead == '=') ADVANCE(300);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(298);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '|') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '|') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(303);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_list_item_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(303);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'A') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'A') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'A') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'E') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'G') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'I') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'I') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'I') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'M') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'N') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'N') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'N') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'N') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'O') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'O') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'O') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'P') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'P') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'R') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'R') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'T') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'T') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'T') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'T') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'U') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'b') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'd') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'd') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'd') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'f') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'g') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'n') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '+') ADVANCE(258);
      if (lookahead == '.') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(376);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(35);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(477);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(65);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'E') ADVANCE(435);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'G') ADVANCE(441);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'M') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(396);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(384);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'U') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(379);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(423);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 's') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 's') ADVANCE(436);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 't') ADVANCE(422);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 't') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(38);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(40);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(70);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(67);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(44);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_image_token1);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(309);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_image_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_audio_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(27);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '`') ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '^') ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 264},
  [2] = {.lex_state = 264},
  [3] = {.lex_state = 264},
  [4] = {.lex_state = 264},
  [5] = {.lex_state = 264},
  [6] = {.lex_state = 264},
  [7] = {.lex_state = 264},
  [8] = {.lex_state = 264},
  [9] = {.lex_state = 264},
  [10] = {.lex_state = 264},
  [11] = {.lex_state = 264},
  [12] = {.lex_state = 264},
  [13] = {.lex_state = 264},
  [14] = {.lex_state = 264},
  [15] = {.lex_state = 264},
  [16] = {.lex_state = 264},
  [17] = {.lex_state = 264},
  [18] = {.lex_state = 264},
  [19] = {.lex_state = 264},
  [20] = {.lex_state = 264},
  [21] = {.lex_state = 264},
  [22] = {.lex_state = 264},
  [23] = {.lex_state = 264},
  [24] = {.lex_state = 264},
  [25] = {.lex_state = 264},
  [26] = {.lex_state = 264},
  [27] = {.lex_state = 264},
  [28] = {.lex_state = 264},
  [29] = {.lex_state = 264},
  [30] = {.lex_state = 264},
  [31] = {.lex_state = 264},
  [32] = {.lex_state = 264},
  [33] = {.lex_state = 264},
  [34] = {.lex_state = 264},
  [35] = {.lex_state = 264},
  [36] = {.lex_state = 264},
  [37] = {.lex_state = 264},
  [38] = {.lex_state = 264},
  [39] = {.lex_state = 264},
  [40] = {.lex_state = 264},
  [41] = {.lex_state = 264},
  [42] = {.lex_state = 264},
  [43] = {.lex_state = 264},
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
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 52},
  [78] = {.lex_state = 120},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 121},
  [81] = {.lex_state = 121},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 455},
  [85] = {.lex_state = 455},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 121},
  [90] = {.lex_state = 122},
  [91] = {.lex_state = 121},
  [92] = {.lex_state = 52},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 455},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 52},
  [98] = {.lex_state = 52},
  [99] = {.lex_state = 52},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 52},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 455},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 52},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 26},
  [109] = {.lex_state = 451},
  [110] = {.lex_state = 446},
  [111] = {.lex_state = 52},
  [112] = {.lex_state = 45},
  [113] = {.lex_state = 52},
  [114] = {.lex_state = 264},
  [115] = {.lex_state = 52},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 52},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 52},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 52},
  [125] = {.lex_state = 52},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 26},
  [128] = {.lex_state = 52},
  [129] = {.lex_state = 26},
  [130] = {.lex_state = 264},
  [131] = {.lex_state = 264},
  [132] = {.lex_state = 52},
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
    [sym_kbd_content] = ACTIONS(1),
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
    [sym_document] = STATE(107),
    [sym__block] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(30),
    [sym__note_block] = STATE(30),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(31),
    [sym__tip_block] = STATE(31),
    [sym_important] = STATE(3),
    [sym__important] = STATE(32),
    [sym__important_block] = STATE(32),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(33),
    [sym__caution_block] = STATE(33),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(34),
    [sym__warning_block] = STATE(34),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(60),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(59),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(45),
    [sym_kbd] = STATE(45),
    [sym_footnote] = STATE(45),
    [sym_url] = STATE(45),
    [sym_xref] = STATE(45),
    [sym__inline_xref] = STATE(50),
    [sym__xref] = STATE(50),
    [sym_passthrough] = STATE(45),
    [sym_replacement] = STATE(45),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(60),
    [aux_sym_paragraph_repeat1] = STATE(45),
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
    [sym__note_line] = STATE(30),
    [sym__note_block] = STATE(30),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(31),
    [sym__tip_block] = STATE(31),
    [sym_important] = STATE(2),
    [sym__important] = STATE(32),
    [sym__important_block] = STATE(32),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(33),
    [sym__caution_block] = STATE(33),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(34),
    [sym__warning_block] = STATE(34),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(60),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(59),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(45),
    [sym_kbd] = STATE(45),
    [sym_footnote] = STATE(45),
    [sym_url] = STATE(45),
    [sym_xref] = STATE(45),
    [sym__inline_xref] = STATE(50),
    [sym__xref] = STATE(50),
    [sym_passthrough] = STATE(45),
    [sym_replacement] = STATE(45),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(60),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_title1] = ACTIONS(67),
    [sym_title2] = ACTIONS(67),
    [sym_title3] = ACTIONS(67),
    [sym_title4] = ACTIONS(67),
    [sym_title5] = ACTIONS(67),
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
    [sym_list_item_mark] = ACTIONS(100),
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
    [sym__note_line] = STATE(30),
    [sym__note_block] = STATE(30),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(31),
    [sym__tip_block] = STATE(31),
    [sym_important] = STATE(2),
    [sym__important] = STATE(32),
    [sym__important_block] = STATE(32),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(33),
    [sym__caution_block] = STATE(33),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(34),
    [sym__warning_block] = STATE(34),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(60),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(59),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(45),
    [sym_kbd] = STATE(45),
    [sym_footnote] = STATE(45),
    [sym_url] = STATE(45),
    [sym_xref] = STATE(45),
    [sym__inline_xref] = STATE(50),
    [sym__xref] = STATE(50),
    [sym_passthrough] = STATE(45),
    [sym_replacement] = STATE(45),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(60),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_title1] = ACTIONS(159),
    [sym_title2] = ACTIONS(159),
    [sym_title3] = ACTIONS(159),
    [sym_title4] = ACTIONS(159),
    [sym_title5] = ACTIONS(159),
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
    [sym_title1] = ACTIONS(161),
    [sym_title2] = ACTIONS(161),
    [sym_title3] = ACTIONS(161),
    [sym_title4] = ACTIONS(161),
    [sym_title5] = ACTIONS(161),
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
    [sym_list_item_mark] = ACTIONS(163),
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
    [sym_title1] = ACTIONS(165),
    [sym_title2] = ACTIONS(165),
    [sym_title3] = ACTIONS(165),
    [sym_title4] = ACTIONS(165),
    [sym_title5] = ACTIONS(165),
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
    [sym_list_item_mark] = ACTIONS(167),
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
    [sym_title1] = ACTIONS(169),
    [sym_title2] = ACTIONS(169),
    [sym_title3] = ACTIONS(169),
    [sym_title4] = ACTIONS(169),
    [sym_title5] = ACTIONS(169),
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
    [sym_list_item_mark] = ACTIONS(171),
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
    [sym_title1] = ACTIONS(173),
    [sym_title2] = ACTIONS(173),
    [sym_title3] = ACTIONS(173),
    [sym_title4] = ACTIONS(173),
    [sym_title5] = ACTIONS(173),
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
    [sym_list_item_mark] = ACTIONS(175),
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
    [sym_title1] = ACTIONS(177),
    [sym_title2] = ACTIONS(177),
    [sym_title3] = ACTIONS(177),
    [sym_title4] = ACTIONS(177),
    [sym_title5] = ACTIONS(177),
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
    [sym_list_item_mark] = ACTIONS(179),
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
    [sym_title1] = ACTIONS(181),
    [sym_title2] = ACTIONS(181),
    [sym_title3] = ACTIONS(181),
    [sym_title4] = ACTIONS(181),
    [sym_title5] = ACTIONS(181),
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
    [sym_list_item_mark] = ACTIONS(183),
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
    [sym_title1] = ACTIONS(185),
    [sym_title2] = ACTIONS(185),
    [sym_title3] = ACTIONS(185),
    [sym_title4] = ACTIONS(185),
    [sym_title5] = ACTIONS(185),
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
    [sym_list_item_mark] = ACTIONS(187),
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
    [sym_title1] = ACTIONS(189),
    [sym_title2] = ACTIONS(189),
    [sym_title3] = ACTIONS(189),
    [sym_title4] = ACTIONS(189),
    [sym_title5] = ACTIONS(189),
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
    [sym_list_item_mark] = ACTIONS(191),
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
    [sym_title1] = ACTIONS(193),
    [sym_title2] = ACTIONS(193),
    [sym_title3] = ACTIONS(193),
    [sym_title4] = ACTIONS(193),
    [sym_title5] = ACTIONS(193),
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
    [sym_list_item_mark] = ACTIONS(195),
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
    [sym_title1] = ACTIONS(197),
    [sym_title2] = ACTIONS(197),
    [sym_title3] = ACTIONS(197),
    [sym_title4] = ACTIONS(197),
    [sym_title5] = ACTIONS(197),
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
    [sym_list_item_mark] = ACTIONS(199),
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
    [sym_title1] = ACTIONS(201),
    [sym_title2] = ACTIONS(201),
    [sym_title3] = ACTIONS(201),
    [sym_title4] = ACTIONS(201),
    [sym_title5] = ACTIONS(201),
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
    [sym_list_item_mark] = ACTIONS(203),
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
    [sym_title1] = ACTIONS(205),
    [sym_title2] = ACTIONS(205),
    [sym_title3] = ACTIONS(205),
    [sym_title4] = ACTIONS(205),
    [sym_title5] = ACTIONS(205),
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
    [sym_list_item_mark] = ACTIONS(207),
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
    [sym_title1] = ACTIONS(209),
    [sym_title2] = ACTIONS(209),
    [sym_title3] = ACTIONS(209),
    [sym_title4] = ACTIONS(209),
    [sym_title5] = ACTIONS(209),
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
    [sym_list_item_mark] = ACTIONS(211),
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
    [sym_title1] = ACTIONS(213),
    [sym_title2] = ACTIONS(213),
    [sym_title3] = ACTIONS(213),
    [sym_title4] = ACTIONS(213),
    [sym_title5] = ACTIONS(213),
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
    [sym_list_item_mark] = ACTIONS(215),
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
    [sym_title1] = ACTIONS(217),
    [sym_title2] = ACTIONS(217),
    [sym_title3] = ACTIONS(217),
    [sym_title4] = ACTIONS(217),
    [sym_title5] = ACTIONS(217),
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
    [sym_list_item_mark] = ACTIONS(219),
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
    [sym_title1] = ACTIONS(221),
    [sym_title2] = ACTIONS(221),
    [sym_title3] = ACTIONS(221),
    [sym_title4] = ACTIONS(221),
    [sym_title5] = ACTIONS(221),
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
    [sym_list_item_mark] = ACTIONS(223),
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
    [sym_title1] = ACTIONS(225),
    [sym_title2] = ACTIONS(225),
    [sym_title3] = ACTIONS(225),
    [sym_title4] = ACTIONS(225),
    [sym_title5] = ACTIONS(225),
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
    [sym_list_item_mark] = ACTIONS(227),
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
    [sym_title1] = ACTIONS(229),
    [sym_title2] = ACTIONS(229),
    [sym_title3] = ACTIONS(229),
    [sym_title4] = ACTIONS(229),
    [sym_title5] = ACTIONS(229),
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
    [sym_list_item_mark] = ACTIONS(231),
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
    [sym_title1] = ACTIONS(233),
    [sym_title2] = ACTIONS(233),
    [sym_title3] = ACTIONS(233),
    [sym_title4] = ACTIONS(233),
    [sym_title5] = ACTIONS(233),
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
    [sym_list_item_mark] = ACTIONS(235),
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
    [sym_title1] = ACTIONS(237),
    [sym_title2] = ACTIONS(237),
    [sym_title3] = ACTIONS(237),
    [sym_title4] = ACTIONS(237),
    [sym_title5] = ACTIONS(237),
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
    [sym_list_item_mark] = ACTIONS(239),
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
    [sym_title1] = ACTIONS(241),
    [sym_title2] = ACTIONS(241),
    [sym_title3] = ACTIONS(241),
    [sym_title4] = ACTIONS(241),
    [sym_title5] = ACTIONS(241),
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
    [sym_list_item_mark] = ACTIONS(243),
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
    [sym_title1] = ACTIONS(245),
    [sym_title2] = ACTIONS(245),
    [sym_title3] = ACTIONS(245),
    [sym_title4] = ACTIONS(245),
    [sym_title5] = ACTIONS(245),
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
    [sym_list_item_mark] = ACTIONS(247),
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
    [sym_title1] = ACTIONS(249),
    [sym_title2] = ACTIONS(249),
    [sym_title3] = ACTIONS(249),
    [sym_title4] = ACTIONS(249),
    [sym_title5] = ACTIONS(249),
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
    [sym_list_item_mark] = ACTIONS(251),
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
    [sym_title1] = ACTIONS(253),
    [sym_title2] = ACTIONS(253),
    [sym_title3] = ACTIONS(253),
    [sym_title4] = ACTIONS(253),
    [sym_title5] = ACTIONS(253),
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
    [sym_list_item_mark] = ACTIONS(255),
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
    [sym_title1] = ACTIONS(257),
    [sym_title2] = ACTIONS(257),
    [sym_title3] = ACTIONS(257),
    [sym_title4] = ACTIONS(257),
    [sym_title5] = ACTIONS(257),
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
    [sym_list_item_mark] = ACTIONS(259),
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
    [sym_title1] = ACTIONS(261),
    [sym_title2] = ACTIONS(261),
    [sym_title3] = ACTIONS(261),
    [sym_title4] = ACTIONS(261),
    [sym_title5] = ACTIONS(261),
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
    [sym_list_item_mark] = ACTIONS(263),
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
    [sym_title1] = ACTIONS(265),
    [sym_title2] = ACTIONS(265),
    [sym_title3] = ACTIONS(265),
    [sym_title4] = ACTIONS(265),
    [sym_title5] = ACTIONS(265),
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
    [sym_list_item_mark] = ACTIONS(267),
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
    [sym_title1] = ACTIONS(269),
    [sym_title2] = ACTIONS(269),
    [sym_title3] = ACTIONS(269),
    [sym_title4] = ACTIONS(269),
    [sym_title5] = ACTIONS(269),
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
    [sym_list_item_mark] = ACTIONS(271),
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
    [sym_title1] = ACTIONS(273),
    [sym_title2] = ACTIONS(273),
    [sym_title3] = ACTIONS(273),
    [sym_title4] = ACTIONS(273),
    [sym_title5] = ACTIONS(273),
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
    [sym_list_item_mark] = ACTIONS(275),
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
    [sym_title1] = ACTIONS(277),
    [sym_title2] = ACTIONS(277),
    [sym_title3] = ACTIONS(277),
    [sym_title4] = ACTIONS(277),
    [sym_title5] = ACTIONS(277),
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
    [sym_list_item_mark] = ACTIONS(279),
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
    [sym_title1] = ACTIONS(281),
    [sym_title2] = ACTIONS(281),
    [sym_title3] = ACTIONS(281),
    [sym_title4] = ACTIONS(281),
    [sym_title5] = ACTIONS(281),
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
    [sym_list_item_mark] = ACTIONS(283),
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
    [sym_title1] = ACTIONS(285),
    [sym_title2] = ACTIONS(285),
    [sym_title3] = ACTIONS(285),
    [sym_title4] = ACTIONS(285),
    [sym_title5] = ACTIONS(285),
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
    [sym_list_item_mark] = ACTIONS(287),
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
    [sym_title1] = ACTIONS(289),
    [sym_title2] = ACTIONS(289),
    [sym_title3] = ACTIONS(289),
    [sym_title4] = ACTIONS(289),
    [sym_title5] = ACTIONS(289),
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
    [sym_list_item_mark] = ACTIONS(291),
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
    [sym_title1] = ACTIONS(293),
    [sym_title2] = ACTIONS(293),
    [sym_title3] = ACTIONS(293),
    [sym_title4] = ACTIONS(293),
    [sym_title5] = ACTIONS(293),
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
    [sym_list_item_mark] = ACTIONS(295),
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
    [sym_title1] = ACTIONS(297),
    [sym_title2] = ACTIONS(297),
    [sym_title3] = ACTIONS(297),
    [sym_title4] = ACTIONS(297),
    [sym_title5] = ACTIONS(297),
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
    [sym_list_item_mark] = ACTIONS(299),
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
    [sym_title1] = ACTIONS(301),
    [sym_title2] = ACTIONS(301),
    [sym_title3] = ACTIONS(301),
    [sym_title4] = ACTIONS(301),
    [sym_title5] = ACTIONS(301),
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
    [sym_list_item_mark] = ACTIONS(303),
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
    [sym_title1] = ACTIONS(305),
    [sym_title2] = ACTIONS(305),
    [sym_title3] = ACTIONS(305),
    [sym_title4] = ACTIONS(305),
    [sym_title5] = ACTIONS(305),
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
    [sym_list_item_mark] = ACTIONS(307),
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
    [sym_title1] = ACTIONS(309),
    [sym_title2] = ACTIONS(309),
    [sym_title3] = ACTIONS(309),
    [sym_title4] = ACTIONS(309),
    [sym_title5] = ACTIONS(309),
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
    [sym_list_item_mark] = ACTIONS(311),
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
    [sym_title1] = ACTIONS(313),
    [sym_title2] = ACTIONS(313),
    [sym_title3] = ACTIONS(313),
    [sym_title4] = ACTIONS(313),
    [sym_title5] = ACTIONS(313),
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
    [sym_list_item_mark] = ACTIONS(315),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_title1] = ACTIONS(317),
    [sym_title2] = ACTIONS(317),
    [sym_title3] = ACTIONS(317),
    [sym_title4] = ACTIONS(317),
    [sym_title5] = ACTIONS(317),
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
    [sym_list_item_mark] = ACTIONS(319),
    [aux_sym_code_token1] = ACTIONS(317),
    [aux_sym_code_language_token1] = ACTIONS(319),
    [anon_sym_SLASH_SLASH] = ACTIONS(317),
    [aux_sym_line_breaks_token1] = ACTIONS(317),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(317),
    [anon_sym_image_COLON_COLON] = ACTIONS(317),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(317),
    [anon_sym_audio_COLON_COLON] = ACTIONS(317),
    [anon_sym_video_COLON_COLON] = ACTIONS(317),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(317),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(317),
    [aux_sym_url_token1] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_xref_COLON] = ACTIONS(319),
    [sym_emphasis] = ACTIONS(319),
    [sym_strong] = ACTIONS(319),
    [sym_monospace] = ACTIONS(319),
    [sym_highlight] = ACTIONS(317),
    [sym_superscript] = ACTIONS(319),
    [sym_subscript] = ACTIONS(317),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(317),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(324), 1,
      anon_sym_LF_LF,
    ACTIONS(326), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(329), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(332), 1,
      aux_sym_url_token1,
    ACTIONS(335), 1,
      anon_sym_LT_LT,
    ACTIONS(338), 1,
      anon_sym_xref_COLON,
    ACTIONS(341), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(50), 2,
      sym__inline_xref,
      sym__xref,
    ACTIONS(321), 7,
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
    ACTIONS(344), 30,
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
    ACTIONS(51), 1,
      aux_sym_url_token1,
    ACTIONS(53), 1,
      anon_sym_LT_LT,
    ACTIONS(55), 1,
      anon_sym_xref_COLON,
    ACTIONS(349), 1,
      anon_sym_LF_LF,
    ACTIONS(351), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(353), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(355), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(50), 2,
      sym__inline_xref,
      sym__xref,
    ACTIONS(347), 7,
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
    ACTIONS(357), 30,
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
    ACTIONS(361), 1,
      anon_sym_LBRACK,
    ACTIONS(363), 1,
      anon_sym_LF_LF,
    ACTIONS(359), 43,
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
    ACTIONS(367), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 1,
      anon_sym_LF_LF,
    ACTIONS(365), 43,
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
  [307] = 2,
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
  [356] = 2,
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
  [405] = 2,
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
  [454] = 2,
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
  [503] = 2,
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
  [552] = 2,
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
  [601] = 2,
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
  [650] = 2,
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
  [699] = 2,
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
  [748] = 2,
    ACTIONS(413), 1,
      anon_sym_LF_LF,
    ACTIONS(411), 43,
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
  [797] = 5,
    ACTIONS(415), 1,
      aux_sym_list_item_content_token1,
    ACTIONS(417), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(41), 1,
      sym_table_end,
    STATE(71), 1,
      aux_sym_table_content_repeat1,
    STATE(83), 1,
      sym_table_content,
  [813] = 3,
    ACTIONS(27), 1,
      sym_list_item_mark,
    ACTIONS(419), 1,
      anon_sym_LF,
    STATE(62), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [824] = 4,
    ACTIONS(421), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(423), 1,
      aux_sym__note_block_token1,
    STATE(76), 1,
      aux_sym__note_block_repeat1,
    STATE(125), 1,
      sym_code_content,
  [837] = 3,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 1,
      sym_list_item_mark,
    STATE(62), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [848] = 3,
    ACTIONS(430), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(432), 1,
      aux_sym__note_block_token1,
    STATE(65), 1,
      aux_sym__note_block_repeat1,
  [858] = 3,
    ACTIONS(434), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(436), 1,
      aux_sym__note_block_token1,
    STATE(75), 1,
      aux_sym__note_block_repeat1,
  [868] = 3,
    ACTIONS(436), 1,
      aux_sym__note_block_token1,
    ACTIONS(438), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(75), 1,
      aux_sym__note_block_repeat1,
  [878] = 3,
    ACTIONS(436), 1,
      aux_sym__note_block_token1,
    ACTIONS(440), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(75), 1,
      aux_sym__note_block_repeat1,
  [888] = 3,
    ACTIONS(442), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(444), 1,
      aux_sym__note_block_token1,
    STATE(69), 1,
      aux_sym__note_block_repeat1,
  [898] = 3,
    ACTIONS(436), 1,
      aux_sym__note_block_token1,
    ACTIONS(446), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(75), 1,
      aux_sym__note_block_repeat1,
  [908] = 3,
    ACTIONS(436), 1,
      aux_sym__note_block_token1,
    ACTIONS(448), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(75), 1,
      aux_sym__note_block_repeat1,
  [918] = 3,
    ACTIONS(450), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(452), 1,
      aux_sym__note_block_token1,
    STATE(68), 1,
      aux_sym__note_block_repeat1,
  [928] = 3,
    ACTIONS(454), 1,
      aux_sym_list_item_content_token1,
    ACTIONS(456), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(74), 1,
      aux_sym_table_content_repeat1,
  [938] = 3,
    ACTIONS(458), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(460), 1,
      aux_sym__note_block_token1,
    STATE(66), 1,
      aux_sym__note_block_repeat1,
  [948] = 3,
    ACTIONS(462), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(464), 1,
      aux_sym__note_block_token1,
    STATE(64), 1,
      aux_sym__note_block_repeat1,
  [958] = 3,
    ACTIONS(466), 1,
      aux_sym_list_item_content_token1,
    ACTIONS(469), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(74), 1,
      aux_sym_table_content_repeat1,
  [968] = 3,
    ACTIONS(471), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(473), 1,
      aux_sym__note_block_token1,
    STATE(75), 1,
      aux_sym__note_block_repeat1,
  [978] = 3,
    ACTIONS(436), 1,
      aux_sym__note_block_token1,
    ACTIONS(476), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(75), 1,
      aux_sym__note_block_repeat1,
  [988] = 2,
    ACTIONS(478), 1,
      aux_sym_code_language_token1,
    STATE(130), 1,
      sym_code_language,
  [995] = 2,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    ACTIONS(482), 1,
      sym_kbd_content,
  [1002] = 2,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_GT_GT,
  [1009] = 2,
    ACTIONS(488), 1,
      aux_sym_audio_token1,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
  [1016] = 2,
    ACTIONS(492), 1,
      aux_sym_audio_token1,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
  [1023] = 1,
    ACTIONS(496), 2,
      aux_sym_list_item_content_token1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1028] = 2,
    ACTIONS(498), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(20), 1,
      sym_table_end,
  [1035] = 2,
    ACTIONS(500), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      aux_sym_image_token2,
  [1042] = 2,
    ACTIONS(504), 1,
      anon_sym_LBRACK,
    ACTIONS(506), 1,
      aux_sym_image_token2,
  [1049] = 2,
    ACTIONS(508), 1,
      aux_sym_list_item_content_token1,
    STATE(88), 1,
      sym_list_item_content,
  [1056] = 2,
    ACTIONS(510), 1,
      anon_sym_LF,
    ACTIONS(512), 1,
      sym_list_item_mark,
  [1063] = 2,
    ACTIONS(514), 1,
      anon_sym_LF,
    ACTIONS(516), 1,
      sym_list_item_mark,
  [1070] = 2,
    ACTIONS(518), 1,
      aux_sym_audio_token1,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
  [1077] = 2,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    ACTIONS(524), 1,
      sym_footnote_content,
  [1084] = 2,
    ACTIONS(526), 1,
      aux_sym_audio_token1,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
  [1091] = 1,
    ACTIONS(530), 1,
      aux_sym_code_language_token1,
  [1095] = 1,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
  [1099] = 1,
    ACTIONS(534), 1,
      aux_sym_image_token2,
  [1103] = 1,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
  [1107] = 1,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
  [1111] = 1,
    ACTIONS(540), 1,
      anon_sym_LBRACK,
  [1115] = 1,
    ACTIONS(542), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1119] = 1,
    ACTIONS(544), 1,
      aux_sym_code_language_token1,
  [1123] = 1,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
  [1127] = 1,
    ACTIONS(548), 1,
      aux_sym_code_language_token1,
  [1131] = 1,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
  [1135] = 1,
    ACTIONS(552), 1,
      aux_sym_image_token2,
  [1139] = 1,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
  [1143] = 1,
    ACTIONS(556), 1,
      aux_sym_code_language_token1,
  [1147] = 1,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
  [1151] = 1,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
  [1155] = 1,
    ACTIONS(562), 1,
      aux_sym__note_line_token1,
  [1159] = 1,
    ACTIONS(564), 1,
      aux_sym_image_token1,
  [1163] = 1,
    ACTIONS(566), 1,
      aux_sym_comment_token1,
  [1167] = 1,
    ACTIONS(568), 1,
      anon_sym_LBRACK,
  [1171] = 1,
    ACTIONS(570), 1,
      anon_sym_,
  [1175] = 1,
    ACTIONS(572), 1,
      aux_sym_code_language_token1,
  [1179] = 1,
    ACTIONS(574), 1,
      anon_sym_RBRACK_LF,
  [1183] = 1,
    ACTIONS(576), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1187] = 1,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
  [1191] = 1,
    ACTIONS(580), 1,
      aux_sym__note_line_token1,
  [1195] = 1,
    ACTIONS(582), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1199] = 1,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
  [1203] = 1,
    ACTIONS(586), 1,
      aux_sym__note_line_token1,
  [1207] = 1,
    ACTIONS(588), 1,
      anon_sym_LBRACK,
  [1211] = 1,
    ACTIONS(590), 1,
      anon_sym_GT_GT,
  [1215] = 1,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
  [1219] = 1,
    ACTIONS(594), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1223] = 1,
    ACTIONS(596), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1227] = 1,
    ACTIONS(598), 1,
      aux_sym__note_line_token1,
  [1231] = 1,
    ACTIONS(600), 1,
      aux_sym__note_line_token1,
  [1235] = 1,
    ACTIONS(602), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1239] = 1,
    ACTIONS(604), 1,
      aux_sym__note_line_token1,
  [1243] = 1,
    ACTIONS(606), 1,
      anon_sym_RBRACK_LF,
  [1247] = 1,
    ACTIONS(608), 1,
      anon_sym_RBRACK_LF,
  [1251] = 1,
    ACTIONS(610), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(44)] = 0,
  [SMALL_STATE(45)] = 77,
  [SMALL_STATE(46)] = 154,
  [SMALL_STATE(47)] = 206,
  [SMALL_STATE(48)] = 258,
  [SMALL_STATE(49)] = 307,
  [SMALL_STATE(50)] = 356,
  [SMALL_STATE(51)] = 405,
  [SMALL_STATE(52)] = 454,
  [SMALL_STATE(53)] = 503,
  [SMALL_STATE(54)] = 552,
  [SMALL_STATE(55)] = 601,
  [SMALL_STATE(56)] = 650,
  [SMALL_STATE(57)] = 699,
  [SMALL_STATE(58)] = 748,
  [SMALL_STATE(59)] = 797,
  [SMALL_STATE(60)] = 813,
  [SMALL_STATE(61)] = 824,
  [SMALL_STATE(62)] = 837,
  [SMALL_STATE(63)] = 848,
  [SMALL_STATE(64)] = 858,
  [SMALL_STATE(65)] = 868,
  [SMALL_STATE(66)] = 878,
  [SMALL_STATE(67)] = 888,
  [SMALL_STATE(68)] = 898,
  [SMALL_STATE(69)] = 908,
  [SMALL_STATE(70)] = 918,
  [SMALL_STATE(71)] = 928,
  [SMALL_STATE(72)] = 938,
  [SMALL_STATE(73)] = 948,
  [SMALL_STATE(74)] = 958,
  [SMALL_STATE(75)] = 968,
  [SMALL_STATE(76)] = 978,
  [SMALL_STATE(77)] = 988,
  [SMALL_STATE(78)] = 995,
  [SMALL_STATE(79)] = 1002,
  [SMALL_STATE(80)] = 1009,
  [SMALL_STATE(81)] = 1016,
  [SMALL_STATE(82)] = 1023,
  [SMALL_STATE(83)] = 1028,
  [SMALL_STATE(84)] = 1035,
  [SMALL_STATE(85)] = 1042,
  [SMALL_STATE(86)] = 1049,
  [SMALL_STATE(87)] = 1056,
  [SMALL_STATE(88)] = 1063,
  [SMALL_STATE(89)] = 1070,
  [SMALL_STATE(90)] = 1077,
  [SMALL_STATE(91)] = 1084,
  [SMALL_STATE(92)] = 1091,
  [SMALL_STATE(93)] = 1095,
  [SMALL_STATE(94)] = 1099,
  [SMALL_STATE(95)] = 1103,
  [SMALL_STATE(96)] = 1107,
  [SMALL_STATE(97)] = 1111,
  [SMALL_STATE(98)] = 1115,
  [SMALL_STATE(99)] = 1119,
  [SMALL_STATE(100)] = 1123,
  [SMALL_STATE(101)] = 1127,
  [SMALL_STATE(102)] = 1131,
  [SMALL_STATE(103)] = 1135,
  [SMALL_STATE(104)] = 1139,
  [SMALL_STATE(105)] = 1143,
  [SMALL_STATE(106)] = 1147,
  [SMALL_STATE(107)] = 1151,
  [SMALL_STATE(108)] = 1155,
  [SMALL_STATE(109)] = 1159,
  [SMALL_STATE(110)] = 1163,
  [SMALL_STATE(111)] = 1167,
  [SMALL_STATE(112)] = 1171,
  [SMALL_STATE(113)] = 1175,
  [SMALL_STATE(114)] = 1179,
  [SMALL_STATE(115)] = 1183,
  [SMALL_STATE(116)] = 1187,
  [SMALL_STATE(117)] = 1191,
  [SMALL_STATE(118)] = 1195,
  [SMALL_STATE(119)] = 1199,
  [SMALL_STATE(120)] = 1203,
  [SMALL_STATE(121)] = 1207,
  [SMALL_STATE(122)] = 1211,
  [SMALL_STATE(123)] = 1215,
  [SMALL_STATE(124)] = 1219,
  [SMALL_STATE(125)] = 1223,
  [SMALL_STATE(126)] = 1227,
  [SMALL_STATE(127)] = 1231,
  [SMALL_STATE(128)] = 1235,
  [SMALL_STATE(129)] = 1239,
  [SMALL_STATE(130)] = 1243,
  [SMALL_STATE(131)] = 1247,
  [SMALL_STATE(132)] = 1251,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(132),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(128),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
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
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(44),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(78),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(90),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(46),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(113),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(99),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(105),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(54),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 4),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(112),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_content, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(74),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(75),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [560] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
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
