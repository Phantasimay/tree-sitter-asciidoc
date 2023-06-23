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
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 45
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_DOT = 1,
  aux_sym_block_title_token1 = 2,
  sym_title1 = 3,
  sym_title2 = 4,
  sym_title3 = 5,
  sym_title4 = 6,
  sym_title5 = 7,
  anon_sym_NOTE_COLON = 8,
  aux_sym__note_line_token1 = 9,
  anon_sym_LBRACKNOTE_RBRACK_LF = 10,
  anon_sym_DASH_DASH_DASH_DASH_LF = 11,
  aux_sym__note_block_token1 = 12,
  anon_sym_TIP_COLON = 13,
  anon_sym_LBRACKTIP_RBRACK_LF = 14,
  anon_sym_IMPORTANT_COLON = 15,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 16,
  anon_sym_CAUTION_COLON = 17,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 18,
  anon_sym_WARNING_COLON = 19,
  anon_sym_LBRACKWARNING_RBRACK_LF = 20,
  anon_sym_LF = 21,
  anon_sym_ = 22,
  sym_list_item_mark = 23,
  aux_sym_code_token1 = 24,
  anon_sym_RBRACK_LF = 25,
  aux_sym_code_language_token1 = 26,
  anon_sym_SLASH_SLASH = 27,
  aux_sym_comment_token1 = 28,
  aux_sym_line_breaks_token1 = 29,
  anon_sym_LT_LT_LT_LF_LF = 30,
  anon_sym_image_COLON_COLON = 31,
  anon_sym_LBRACK = 32,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 33,
  anon_sym_COLON_COLON = 34,
  anon_sym_audio_COLON_COLON = 35,
  anon_sym_RBRACK = 36,
  aux_sym_audio_url_token1 = 37,
  anon_sym_video_COLON_COLON = 38,
  anon_sym_LF_LF = 39,
  anon_sym_kbd_COLON_LBRACK = 40,
  sym_kbd_content = 41,
  anon_sym_footnote_COLON_LBRACK = 42,
  sym_footnote_content = 43,
  aux_sym_url_token1 = 44,
  aux_sym_url_token2 = 45,
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
  sym__titled_block = 90,
  sym_block_title = 91,
  sym__admonitions = 92,
  sym_note = 93,
  sym__note_line = 94,
  sym__note_block = 95,
  sym_tip = 96,
  sym__tip = 97,
  sym__tip_block = 98,
  sym_important = 99,
  sym__important = 100,
  sym__important_block = 101,
  sym_caution = 102,
  sym__caution = 103,
  sym__caution_block = 104,
  sym_warning = 105,
  sym__warning = 106,
  sym__warning_block = 107,
  sym_list = 108,
  sym_list_item = 109,
  sym_list_item_content = 110,
  sym_code = 111,
  sym_code_language = 112,
  sym_code_content = 113,
  sym_comment = 114,
  sym_line_breaks = 115,
  sym_page_breaks = 116,
  sym_image = 117,
  sym_table = 118,
  sym_table_start = 119,
  sym_table_content = 120,
  sym_table_end = 121,
  sym_description_list = 122,
  sym_audio = 123,
  sym_audio_url = 124,
  sym_audio_title = 125,
  sym_video = 126,
  sym_paragraph = 127,
  sym__inline_element = 128,
  sym_kbd = 129,
  sym_footnote = 130,
  sym_url = 131,
  sym_xref = 132,
  sym__inline_xref = 133,
  sym__xref = 134,
  sym_xref_url = 135,
  sym_passthrough = 136,
  sym__passthrough_plus = 137,
  sym__passthrough_cmd = 138,
  sym_passthrough_content = 139,
  sym_replacement = 140,
  aux_sym_document_repeat1 = 141,
  aux_sym__note_block_repeat1 = 142,
  aux_sym_list_repeat1 = 143,
  aux_sym_table_content_repeat1 = 144,
  aux_sym_paragraph_repeat1 = 145,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [aux_sym_block_title_token1] = "block_title_token1",
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
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RBRACK_LF] = "]\n",
  [aux_sym_code_language_token1] = "code_language_token1",
  [anon_sym_SLASH_SLASH] = "// ",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_line_breaks_token1] = "line_breaks_token1",
  [anon_sym_LT_LT_LT_LF_LF] = "<<<\n\n",
  [anon_sym_image_COLON_COLON] = "image::",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PIPE_EQ_EQ_EQ_LF] = "|===\n",
  [anon_sym_COLON_COLON] = ":: ",
  [anon_sym_audio_COLON_COLON] = "audio::",
  [anon_sym_RBRACK] = "]",
  [aux_sym_audio_url_token1] = "audio_url_token1",
  [anon_sym_video_COLON_COLON] = "video::",
  [anon_sym_LF_LF] = "\n\n",
  [anon_sym_kbd_COLON_LBRACK] = "kbd:[",
  [sym_kbd_content] = "kbd_content",
  [anon_sym_footnote_COLON_LBRACK] = "footnote:[",
  [sym_footnote_content] = "footnote_content",
  [aux_sym_url_token1] = "url_token1",
  [aux_sym_url_token2] = "url_token2",
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
  [sym__titled_block] = "_titled_block",
  [sym_block_title] = "block_title",
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
  [sym_audio_url] = "audio_url",
  [sym_audio_title] = "audio_title",
  [sym_video] = "video",
  [sym_paragraph] = "paragraph",
  [sym__inline_element] = "_inline_element",
  [sym_kbd] = "kbd",
  [sym_footnote] = "footnote",
  [sym_url] = "url",
  [sym_xref] = "xref",
  [sym__inline_xref] = "_inline_xref",
  [sym__xref] = "_xref",
  [sym_xref_url] = "xref_url",
  [sym_passthrough] = "passthrough",
  [sym__passthrough_plus] = "_passthrough_plus",
  [sym__passthrough_cmd] = "_passthrough_cmd",
  [sym_passthrough_content] = "passthrough_content",
  [sym_replacement] = "replacement",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym__note_block_repeat1] = "_note_block_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_table_content_repeat1] = "table_content_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_block_title_token1] = aux_sym_block_title_token1,
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
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RBRACK_LF] = anon_sym_RBRACK_LF,
  [aux_sym_code_language_token1] = aux_sym_code_language_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_line_breaks_token1] = aux_sym_line_breaks_token1,
  [anon_sym_LT_LT_LT_LF_LF] = anon_sym_LT_LT_LT_LF_LF,
  [anon_sym_image_COLON_COLON] = anon_sym_image_COLON_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PIPE_EQ_EQ_EQ_LF] = anon_sym_PIPE_EQ_EQ_EQ_LF,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_audio_COLON_COLON] = anon_sym_audio_COLON_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_audio_url_token1] = aux_sym_audio_url_token1,
  [anon_sym_video_COLON_COLON] = anon_sym_video_COLON_COLON,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
  [anon_sym_kbd_COLON_LBRACK] = anon_sym_kbd_COLON_LBRACK,
  [sym_kbd_content] = sym_kbd_content,
  [anon_sym_footnote_COLON_LBRACK] = anon_sym_footnote_COLON_LBRACK,
  [sym_footnote_content] = sym_footnote_content,
  [aux_sym_url_token1] = aux_sym_url_token1,
  [aux_sym_url_token2] = aux_sym_url_token2,
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
  [sym__titled_block] = sym__titled_block,
  [sym_block_title] = sym_block_title,
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
  [sym_audio_url] = sym_audio_url,
  [sym_audio_title] = sym_audio_title,
  [sym_video] = sym_video,
  [sym_paragraph] = sym_paragraph,
  [sym__inline_element] = sym__inline_element,
  [sym_kbd] = sym_kbd,
  [sym_footnote] = sym_footnote,
  [sym_url] = sym_url,
  [sym_xref] = sym_xref,
  [sym__inline_xref] = sym__inline_xref,
  [sym__xref] = sym__xref,
  [sym_xref_url] = sym_xref_url,
  [sym_passthrough] = sym_passthrough,
  [sym__passthrough_plus] = sym__passthrough_plus,
  [sym__passthrough_cmd] = sym__passthrough_cmd,
  [sym_passthrough_content] = sym_passthrough_content,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_title_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_audio_url_token1] = {
    .visible = false,
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
  [aux_sym_url_token2] = {
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
  [sym__titled_block] = {
    .visible = false,
    .named = true,
  },
  [sym_block_title] = {
    .visible = true,
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
  [sym_audio_url] = {
    .visible = true,
    .named = true,
  },
  [sym_audio_title] = {
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
  [sym_xref_url] = {
    .visible = true,
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
  [sym_passthrough_content] = {
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_title, 0, .inherited = true},
    {field_url, 0, .inherited = true},
  [2] =
    {field_url, 1},
  [3] =
    {field_title, 2},
  [4] =
    {field_language, 1},
  [5] =
    {field_title, 3},
    {field_url, 1},
  [7] =
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
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 105,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(304);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '*') ADVANCE(345);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(512);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == 'C') ADVANCE(429);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead == 'N') ADVANCE(442);
      if (lookahead == 'T') ADVANCE(434);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '[') ADVANCE(491);
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '^') ADVANCE(300);
      if (lookahead == '_') ADVANCE(483);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'f') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'k') ADVANCE(457);
      if (lookahead == 'p') ADVANCE(455);
      if (lookahead == 'v') ADVANCE(468);
      if (lookahead == 'x') ADVANCE(476);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '~') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(487);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(330);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(330);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(488);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(493);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(349);
      if (lookahead == ':') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(334);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == ':') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(329);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == ':') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(338);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead == ':') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(340);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead == ':') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(336);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == ':') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '[') ADVANCE(492);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '_') ADVANCE(353);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead == 'k') ADVANCE(385);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(404);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '~') ADVANCE(302);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(343);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '<') ADVANCE(120);
      if (lookahead == '[') ADVANCE(492);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '_') ADVANCE(353);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead == 'k') ADVANCE(385);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(404);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '~') ADVANCE(302);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(317);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(484);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(494);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(321);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(323);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(333);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(333);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(325);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(337);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(337);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(335);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(518);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 55:
      if (lookahead == '+') ADVANCE(526);
      END_STATE();
    case 56:
      if (lookahead == '+') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == ',') ADVANCE(512);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '[') ADVANCE(490);
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(497);
      END_STATE();
    case 58:
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(92);
      if (lookahead == 'W') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 59:
      if (lookahead == ',') ADVANCE(348);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(134);
      if (lookahead == 'N') ADVANCE(139);
      if (lookahead == 'T') ADVANCE(131);
      if (lookahead == 'W') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(508);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(505);
      if (lookahead == '^') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(506);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(507);
      if (lookahead == '`') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '^') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '`') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 72:
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(495);
      END_STATE();
    case 74:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(489);
      END_STATE();
    case 75:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(498);
      END_STATE();
    case 76:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '[') ADVANCE(500);
      END_STATE();
    case 77:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '[') ADVANCE(527);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '[') ADVANCE(503);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(495);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(489);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(498);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '^') ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '_') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '`') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(111);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(105);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(98);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'M') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ']') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ']') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ']') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == ']') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 119:
      if (lookahead == '<') ADVANCE(511);
      END_STATE();
    case 120:
      if (lookahead == '<') ADVANCE(510);
      END_STATE();
    case 121:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 123:
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 124:
      if (lookahead == '>') ADVANCE(513);
      END_STATE();
    case 125:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 126:
      if (lookahead == 'A') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 128:
      if (lookahead == 'C') ADVANCE(429);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead == 'N') ADVANCE(442);
      if (lookahead == 'T') ADVANCE(434);
      if (lookahead == 'W') ADVANCE(430);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'v') ADVANCE(468);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 130:
      if (lookahead == 'G') ADVANCE(159);
      END_STATE();
    case 131:
      if (lookahead == 'I') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 133:
      if (lookahead == 'I') ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == 'M') ADVANCE(143);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(158);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(146);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(145);
      END_STATE();
    case 141:
      if (lookahead == 'O') ADVANCE(138);
      END_STATE();
    case 142:
      if (lookahead == 'P') ADVANCE(156);
      END_STATE();
    case 143:
      if (lookahead == 'P') ADVANCE(140);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(148);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 150:
      if (lookahead == 'U') ADVANCE(147);
      END_STATE();
    case 151:
      if (lookahead == '[') ADVANCE(500);
      END_STATE();
    case 152:
      if (lookahead == '[') ADVANCE(527);
      END_STATE();
    case 153:
      if (lookahead == '[') ADVANCE(503);
      END_STATE();
    case 154:
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 155:
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(155)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 156:
      if (lookahead == ']') ADVANCE(7);
      END_STATE();
    case 157:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 158:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 159:
      if (lookahead == ']') ADVANCE(13);
      END_STATE();
    case 160:
      if (lookahead == ']') ADVANCE(15);
      END_STATE();
    case 161:
      if (lookahead == '^') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == '`') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'g') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(201);
      if (lookahead == 'q') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'v') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(196);
      if (lookahead == 'z') ADVANCE(262);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(247);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 174:
      if (lookahead == 'b') ADVANCE(288);
      END_STATE();
    case 175:
      if (lookahead == 'b') ADVANCE(169);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(229);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 196:
      if (lookahead == 'j') ADVANCE(268);
      END_STATE();
    case 197:
      if (lookahead == 'k') ADVANCE(239);
      END_STATE();
    case 198:
      if (lookahead == 'k') ADVANCE(278);
      END_STATE();
    case 199:
      if (lookahead == 'k') ADVANCE(289);
      END_STATE();
    case 200:
      if (lookahead == 'k') ADVANCE(290);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 229:
      if (lookahead == 'q') ADVANCE(256);
      END_STATE();
    case 230:
      if (lookahead == 'q') ADVANCE(258);
      END_STATE();
    case 231:
      if (lookahead == 'q') ADVANCE(259);
      END_STATE();
    case 232:
      if (lookahead == 'q') ADVANCE(260);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 261:
      if (lookahead == 'v') ADVANCE(176);
      END_STATE();
    case 262:
      if (lookahead == 'w') ADVANCE(248);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 264:
      if (lookahead == '}') ADVANCE(546);
      END_STATE();
    case 265:
      if (lookahead == '}') ADVANCE(545);
      END_STATE();
    case 266:
      if (lookahead == '}') ADVANCE(557);
      END_STATE();
    case 267:
      if (lookahead == '}') ADVANCE(530);
      END_STATE();
    case 268:
      if (lookahead == '}') ADVANCE(533);
      END_STATE();
    case 269:
      if (lookahead == '}') ADVANCE(544);
      END_STATE();
    case 270:
      if (lookahead == '}') ADVANCE(556);
      END_STATE();
    case 271:
      if (lookahead == '}') ADVANCE(540);
      END_STATE();
    case 272:
      if (lookahead == '}') ADVANCE(534);
      END_STATE();
    case 273:
      if (lookahead == '}') ADVANCE(531);
      END_STATE();
    case 274:
      if (lookahead == '}') ADVANCE(541);
      END_STATE();
    case 275:
      if (lookahead == '}') ADVANCE(535);
      END_STATE();
    case 276:
      if (lookahead == '}') ADVANCE(543);
      END_STATE();
    case 277:
      if (lookahead == '}') ADVANCE(532);
      END_STATE();
    case 278:
      if (lookahead == '}') ADVANCE(528);
      END_STATE();
    case 279:
      if (lookahead == '}') ADVANCE(549);
      END_STATE();
    case 280:
      if (lookahead == '}') ADVANCE(529);
      END_STATE();
    case 281:
      if (lookahead == '}') ADVANCE(548);
      END_STATE();
    case 282:
      if (lookahead == '}') ADVANCE(538);
      END_STATE();
    case 283:
      if (lookahead == '}') ADVANCE(536);
      END_STATE();
    case 284:
      if (lookahead == '}') ADVANCE(539);
      END_STATE();
    case 285:
      if (lookahead == '}') ADVANCE(537);
      END_STATE();
    case 286:
      if (lookahead == '}') ADVANCE(551);
      END_STATE();
    case 287:
      if (lookahead == '}') ADVANCE(542);
      END_STATE();
    case 288:
      if (lookahead == '}') ADVANCE(547);
      END_STATE();
    case 289:
      if (lookahead == '}') ADVANCE(550);
      END_STATE();
    case 290:
      if (lookahead == '}') ADVANCE(553);
      END_STATE();
    case 291:
      if (lookahead == '}') ADVANCE(552);
      END_STATE();
    case 292:
      if (lookahead == '}') ADVANCE(554);
      END_STATE();
    case 293:
      if (lookahead == '}') ADVANCE(555);
      END_STATE();
    case 294:
      if (lookahead == '~') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 295:
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(27);
      END_STATE();
    case 296:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      END_STATE();
    case 298:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 299:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 300:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 301:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 302:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 303:
      if (eof) ADVANCE(304);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '*') ADVANCE(345);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'C') ADVANCE(358);
      if (lookahead == 'I') ADVANCE(366);
      if (lookahead == 'N') ADVANCE(371);
      if (lookahead == 'T') ADVANCE(363);
      if (lookahead == 'W') ADVANCE(359);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == ']') ADVANCE(6);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '_') ADVANCE(353);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 'k') ADVANCE(385);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead == 'v') ADVANCE(396);
      if (lookahead == 'x') ADVANCE(404);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '~') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(303)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(493);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '=') ADVANCE(307);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_title1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_title1);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(322);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_title5);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__note_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_list_item_mark);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_list_item_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(295);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '_') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(70);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(40);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(76);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(515);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(73);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(376);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(423);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(375);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(373);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'M') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(362);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(364);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(372);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(354);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(361);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(360);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(379);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(355);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(356);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'g') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(384);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(357);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(421);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 's') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 's') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 't') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 't') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(77);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(74);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(45);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(78);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(47);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(49);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'M') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'b') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'f') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'g') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'm') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'n') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'r') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 's') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 's') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'u') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(348);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(32);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '_') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '`') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '^') ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 303},
  [2] = {.lex_state = 303},
  [3] = {.lex_state = 303},
  [4] = {.lex_state = 303},
  [5] = {.lex_state = 303},
  [6] = {.lex_state = 303},
  [7] = {.lex_state = 303},
  [8] = {.lex_state = 303},
  [9] = {.lex_state = 303},
  [10] = {.lex_state = 303},
  [11] = {.lex_state = 303},
  [12] = {.lex_state = 303},
  [13] = {.lex_state = 303},
  [14] = {.lex_state = 303},
  [15] = {.lex_state = 303},
  [16] = {.lex_state = 303},
  [17] = {.lex_state = 303},
  [18] = {.lex_state = 303},
  [19] = {.lex_state = 303},
  [20] = {.lex_state = 303},
  [21] = {.lex_state = 303},
  [22] = {.lex_state = 303},
  [23] = {.lex_state = 303},
  [24] = {.lex_state = 303},
  [25] = {.lex_state = 303},
  [26] = {.lex_state = 303},
  [27] = {.lex_state = 303},
  [28] = {.lex_state = 303},
  [29] = {.lex_state = 303},
  [30] = {.lex_state = 303},
  [31] = {.lex_state = 303},
  [32] = {.lex_state = 303},
  [33] = {.lex_state = 303},
  [34] = {.lex_state = 303},
  [35] = {.lex_state = 303},
  [36] = {.lex_state = 303},
  [37] = {.lex_state = 303},
  [38] = {.lex_state = 303},
  [39] = {.lex_state = 303},
  [40] = {.lex_state = 303},
  [41] = {.lex_state = 303},
  [42] = {.lex_state = 303},
  [43] = {.lex_state = 303},
  [44] = {.lex_state = 303},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 30},
  [50] = {.lex_state = 30},
  [51] = {.lex_state = 30},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 30},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 30},
  [57] = {.lex_state = 30},
  [58] = {.lex_state = 30},
  [59] = {.lex_state = 30},
  [60] = {.lex_state = 30},
  [61] = {.lex_state = 30},
  [62] = {.lex_state = 30},
  [63] = {.lex_state = 128},
  [64] = {.lex_state = 128},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 57},
  [72] = {.lex_state = 57},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 296},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 296},
  [93] = {.lex_state = 57},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 296},
  [97] = {.lex_state = 296},
  [98] = {.lex_state = 296},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 57},
  [102] = {.lex_state = 154},
  [103] = {.lex_state = 57},
  [104] = {.lex_state = 155},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 57},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 303},
  [111] = {.lex_state = 57},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 509},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 57},
  [120] = {.lex_state = 57},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 57},
  [123] = {.lex_state = 485},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 50},
  [126] = {.lex_state = 57},
  [127] = {.lex_state = 57},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 57},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 31},
  [133] = {.lex_state = 57},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 57},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 31},
  [139] = {.lex_state = 57},
  [140] = {.lex_state = 31},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 31},
  [143] = {.lex_state = 57},
  [144] = {.lex_state = 303},
  [145] = {.lex_state = 303},
  [146] = {.lex_state = 31},
  [147] = {.lex_state = 303},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_video_COLON_COLON] = ACTIONS(1),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_xref_COLON] = ACTIONS(1),
    [sym_emphasis] = ACTIONS(1),
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
    [sym_document] = STATE(121),
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(63),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(33),
    [sym__note_block] = STATE(33),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(34),
    [sym__tip_block] = STATE(34),
    [sym_important] = STATE(2),
    [sym__important] = STATE(35),
    [sym__important_block] = STATE(35),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(36),
    [sym__caution_block] = STATE(36),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(37),
    [sym__warning_block] = STATE(37),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(66),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(65),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(45),
    [sym_kbd] = STATE(45),
    [sym_footnote] = STATE(45),
    [sym_url] = STATE(45),
    [sym_xref] = STATE(45),
    [sym__inline_xref] = STATE(52),
    [sym__xref] = STATE(53),
    [sym_passthrough] = STATE(45),
    [sym__passthrough_plus] = STATE(54),
    [sym__passthrough_cmd] = STATE(54),
    [sym_replacement] = STATE(45),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(66),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(5),
    [sym_title1] = ACTIONS(7),
    [sym_title2] = ACTIONS(7),
    [sym_title3] = ACTIONS(7),
    [sym_title4] = ACTIONS(7),
    [sym_title5] = ACTIONS(7),
    [anon_sym_NOTE_COLON] = ACTIONS(9),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(11),
    [anon_sym_TIP_COLON] = ACTIONS(13),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(15),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(17),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(19),
    [anon_sym_CAUTION_COLON] = ACTIONS(21),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(23),
    [anon_sym_WARNING_COLON] = ACTIONS(25),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(27),
    [sym_list_item_mark] = ACTIONS(29),
    [aux_sym_code_token1] = ACTIONS(31),
    [aux_sym_code_language_token1] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [aux_sym_line_breaks_token1] = ACTIONS(37),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(39),
    [anon_sym_image_COLON_COLON] = ACTIONS(41),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(43),
    [anon_sym_audio_COLON_COLON] = ACTIONS(45),
    [anon_sym_video_COLON_COLON] = ACTIONS(47),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(49),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(51),
    [aux_sym_url_token1] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_xref_COLON] = ACTIONS(57),
    [sym_emphasis] = ACTIONS(59),
    [sym_strong] = ACTIONS(59),
    [sym_monospace] = ACTIONS(59),
    [sym_highlight] = ACTIONS(61),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(61),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(63),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(65),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(67),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(63),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(33),
    [sym__note_block] = STATE(33),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(34),
    [sym__tip_block] = STATE(34),
    [sym_important] = STATE(3),
    [sym__important] = STATE(35),
    [sym__important_block] = STATE(35),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(36),
    [sym__caution_block] = STATE(36),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(37),
    [sym__warning_block] = STATE(37),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(66),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(65),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(45),
    [sym_kbd] = STATE(45),
    [sym_footnote] = STATE(45),
    [sym_url] = STATE(45),
    [sym_xref] = STATE(45),
    [sym__inline_xref] = STATE(52),
    [sym__xref] = STATE(53),
    [sym_passthrough] = STATE(45),
    [sym__passthrough_plus] = STATE(54),
    [sym__passthrough_cmd] = STATE(54),
    [sym_replacement] = STATE(45),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(66),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(5),
    [sym_title1] = ACTIONS(71),
    [sym_title2] = ACTIONS(71),
    [sym_title3] = ACTIONS(71),
    [sym_title4] = ACTIONS(71),
    [sym_title5] = ACTIONS(71),
    [anon_sym_NOTE_COLON] = ACTIONS(9),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(11),
    [anon_sym_TIP_COLON] = ACTIONS(13),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(15),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(17),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(19),
    [anon_sym_CAUTION_COLON] = ACTIONS(21),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(23),
    [anon_sym_WARNING_COLON] = ACTIONS(25),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(27),
    [sym_list_item_mark] = ACTIONS(29),
    [aux_sym_code_token1] = ACTIONS(31),
    [aux_sym_code_language_token1] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(35),
    [aux_sym_line_breaks_token1] = ACTIONS(37),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(39),
    [anon_sym_image_COLON_COLON] = ACTIONS(41),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(43),
    [anon_sym_audio_COLON_COLON] = ACTIONS(45),
    [anon_sym_video_COLON_COLON] = ACTIONS(47),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(49),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(51),
    [aux_sym_url_token1] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_xref_COLON] = ACTIONS(57),
    [sym_emphasis] = ACTIONS(59),
    [sym_strong] = ACTIONS(59),
    [sym_monospace] = ACTIONS(59),
    [sym_highlight] = ACTIONS(61),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(61),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(63),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(65),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(67),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(63),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(33),
    [sym__note_block] = STATE(33),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(34),
    [sym__tip_block] = STATE(34),
    [sym_important] = STATE(3),
    [sym__important] = STATE(35),
    [sym__important_block] = STATE(35),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(36),
    [sym__caution_block] = STATE(36),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(37),
    [sym__warning_block] = STATE(37),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(66),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(65),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(45),
    [sym_kbd] = STATE(45),
    [sym_footnote] = STATE(45),
    [sym_url] = STATE(45),
    [sym_xref] = STATE(45),
    [sym__inline_xref] = STATE(52),
    [sym__xref] = STATE(53),
    [sym_passthrough] = STATE(45),
    [sym__passthrough_plus] = STATE(54),
    [sym__passthrough_cmd] = STATE(54),
    [sym_replacement] = STATE(45),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(66),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(75),
    [sym_title1] = ACTIONS(78),
    [sym_title2] = ACTIONS(78),
    [sym_title3] = ACTIONS(78),
    [sym_title4] = ACTIONS(78),
    [sym_title5] = ACTIONS(78),
    [anon_sym_NOTE_COLON] = ACTIONS(81),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(84),
    [anon_sym_TIP_COLON] = ACTIONS(87),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(90),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(93),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(96),
    [anon_sym_CAUTION_COLON] = ACTIONS(99),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(102),
    [anon_sym_WARNING_COLON] = ACTIONS(105),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(108),
    [sym_list_item_mark] = ACTIONS(111),
    [aux_sym_code_token1] = ACTIONS(114),
    [aux_sym_code_language_token1] = ACTIONS(117),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [aux_sym_line_breaks_token1] = ACTIONS(123),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(126),
    [anon_sym_image_COLON_COLON] = ACTIONS(129),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(132),
    [anon_sym_audio_COLON_COLON] = ACTIONS(135),
    [anon_sym_video_COLON_COLON] = ACTIONS(138),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(141),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(144),
    [aux_sym_url_token1] = ACTIONS(147),
    [anon_sym_LT_LT] = ACTIONS(150),
    [anon_sym_xref_COLON] = ACTIONS(153),
    [sym_emphasis] = ACTIONS(156),
    [sym_strong] = ACTIONS(156),
    [sym_monospace] = ACTIONS(156),
    [sym_highlight] = ACTIONS(159),
    [sym_superscript] = ACTIONS(156),
    [sym_subscript] = ACTIONS(159),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(162),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(165),
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
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [sym_title1] = ACTIONS(171),
    [sym_title2] = ACTIONS(171),
    [sym_title3] = ACTIONS(171),
    [sym_title4] = ACTIONS(171),
    [sym_title5] = ACTIONS(171),
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
    [sym_list_item_mark] = ACTIONS(173),
    [aux_sym_code_token1] = ACTIONS(171),
    [aux_sym_code_language_token1] = ACTIONS(173),
    [anon_sym_SLASH_SLASH] = ACTIONS(171),
    [aux_sym_line_breaks_token1] = ACTIONS(171),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(171),
    [anon_sym_image_COLON_COLON] = ACTIONS(171),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(171),
    [anon_sym_audio_COLON_COLON] = ACTIONS(171),
    [anon_sym_video_COLON_COLON] = ACTIONS(171),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(171),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(171),
    [aux_sym_url_token1] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(173),
    [anon_sym_xref_COLON] = ACTIONS(173),
    [sym_emphasis] = ACTIONS(173),
    [sym_strong] = ACTIONS(173),
    [sym_monospace] = ACTIONS(173),
    [sym_highlight] = ACTIONS(171),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(171),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(171),
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
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(175),
    [sym_title1] = ACTIONS(175),
    [sym_title2] = ACTIONS(175),
    [sym_title3] = ACTIONS(175),
    [sym_title4] = ACTIONS(175),
    [sym_title5] = ACTIONS(175),
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
    [sym_list_item_mark] = ACTIONS(177),
    [aux_sym_code_token1] = ACTIONS(175),
    [aux_sym_code_language_token1] = ACTIONS(177),
    [anon_sym_SLASH_SLASH] = ACTIONS(175),
    [aux_sym_line_breaks_token1] = ACTIONS(175),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(175),
    [anon_sym_image_COLON_COLON] = ACTIONS(175),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(175),
    [anon_sym_audio_COLON_COLON] = ACTIONS(175),
    [anon_sym_video_COLON_COLON] = ACTIONS(175),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(175),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(175),
    [aux_sym_url_token1] = ACTIONS(177),
    [anon_sym_LT_LT] = ACTIONS(177),
    [anon_sym_xref_COLON] = ACTIONS(177),
    [sym_emphasis] = ACTIONS(177),
    [sym_strong] = ACTIONS(177),
    [sym_monospace] = ACTIONS(177),
    [sym_highlight] = ACTIONS(175),
    [sym_superscript] = ACTIONS(177),
    [sym_subscript] = ACTIONS(175),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(175),
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
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(179),
    [sym_title1] = ACTIONS(179),
    [sym_title2] = ACTIONS(179),
    [sym_title3] = ACTIONS(179),
    [sym_title4] = ACTIONS(179),
    [sym_title5] = ACTIONS(179),
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
    [sym_list_item_mark] = ACTIONS(181),
    [aux_sym_code_token1] = ACTIONS(179),
    [aux_sym_code_language_token1] = ACTIONS(181),
    [anon_sym_SLASH_SLASH] = ACTIONS(179),
    [aux_sym_line_breaks_token1] = ACTIONS(179),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(179),
    [anon_sym_image_COLON_COLON] = ACTIONS(179),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(179),
    [anon_sym_audio_COLON_COLON] = ACTIONS(179),
    [anon_sym_video_COLON_COLON] = ACTIONS(179),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(179),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(179),
    [aux_sym_url_token1] = ACTIONS(181),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_xref_COLON] = ACTIONS(181),
    [sym_emphasis] = ACTIONS(181),
    [sym_strong] = ACTIONS(181),
    [sym_monospace] = ACTIONS(181),
    [sym_highlight] = ACTIONS(179),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(179),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(179),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
    [sym_title1] = ACTIONS(183),
    [sym_title2] = ACTIONS(183),
    [sym_title3] = ACTIONS(183),
    [sym_title4] = ACTIONS(183),
    [sym_title5] = ACTIONS(183),
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
    [sym_list_item_mark] = ACTIONS(185),
    [aux_sym_code_token1] = ACTIONS(183),
    [aux_sym_code_language_token1] = ACTIONS(185),
    [anon_sym_SLASH_SLASH] = ACTIONS(183),
    [aux_sym_line_breaks_token1] = ACTIONS(183),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(183),
    [anon_sym_image_COLON_COLON] = ACTIONS(183),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(183),
    [anon_sym_audio_COLON_COLON] = ACTIONS(183),
    [anon_sym_video_COLON_COLON] = ACTIONS(183),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(183),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(183),
    [aux_sym_url_token1] = ACTIONS(185),
    [anon_sym_LT_LT] = ACTIONS(185),
    [anon_sym_xref_COLON] = ACTIONS(185),
    [sym_emphasis] = ACTIONS(185),
    [sym_strong] = ACTIONS(185),
    [sym_monospace] = ACTIONS(185),
    [sym_highlight] = ACTIONS(183),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(183),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(183),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
    [sym_title1] = ACTIONS(187),
    [sym_title2] = ACTIONS(187),
    [sym_title3] = ACTIONS(187),
    [sym_title4] = ACTIONS(187),
    [sym_title5] = ACTIONS(187),
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
    [sym_list_item_mark] = ACTIONS(189),
    [aux_sym_code_token1] = ACTIONS(187),
    [aux_sym_code_language_token1] = ACTIONS(189),
    [anon_sym_SLASH_SLASH] = ACTIONS(187),
    [aux_sym_line_breaks_token1] = ACTIONS(187),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(187),
    [anon_sym_image_COLON_COLON] = ACTIONS(187),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(187),
    [anon_sym_audio_COLON_COLON] = ACTIONS(187),
    [anon_sym_video_COLON_COLON] = ACTIONS(187),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(187),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(187),
    [aux_sym_url_token1] = ACTIONS(189),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_xref_COLON] = ACTIONS(189),
    [sym_emphasis] = ACTIONS(189),
    [sym_strong] = ACTIONS(189),
    [sym_monospace] = ACTIONS(189),
    [sym_highlight] = ACTIONS(187),
    [sym_superscript] = ACTIONS(189),
    [sym_subscript] = ACTIONS(187),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(187),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [sym_title1] = ACTIONS(191),
    [sym_title2] = ACTIONS(191),
    [sym_title3] = ACTIONS(191),
    [sym_title4] = ACTIONS(191),
    [sym_title5] = ACTIONS(191),
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
    [sym_list_item_mark] = ACTIONS(193),
    [aux_sym_code_token1] = ACTIONS(191),
    [aux_sym_code_language_token1] = ACTIONS(193),
    [anon_sym_SLASH_SLASH] = ACTIONS(191),
    [aux_sym_line_breaks_token1] = ACTIONS(191),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(191),
    [anon_sym_image_COLON_COLON] = ACTIONS(191),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(191),
    [anon_sym_audio_COLON_COLON] = ACTIONS(191),
    [anon_sym_video_COLON_COLON] = ACTIONS(191),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(191),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(191),
    [aux_sym_url_token1] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(193),
    [anon_sym_xref_COLON] = ACTIONS(193),
    [sym_emphasis] = ACTIONS(193),
    [sym_strong] = ACTIONS(193),
    [sym_monospace] = ACTIONS(193),
    [sym_highlight] = ACTIONS(191),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(191),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(191),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(195),
    [sym_title1] = ACTIONS(195),
    [sym_title2] = ACTIONS(195),
    [sym_title3] = ACTIONS(195),
    [sym_title4] = ACTIONS(195),
    [sym_title5] = ACTIONS(195),
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
    [sym_list_item_mark] = ACTIONS(197),
    [aux_sym_code_token1] = ACTIONS(195),
    [aux_sym_code_language_token1] = ACTIONS(197),
    [anon_sym_SLASH_SLASH] = ACTIONS(195),
    [aux_sym_line_breaks_token1] = ACTIONS(195),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(195),
    [anon_sym_image_COLON_COLON] = ACTIONS(195),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(195),
    [anon_sym_audio_COLON_COLON] = ACTIONS(195),
    [anon_sym_video_COLON_COLON] = ACTIONS(195),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(195),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(195),
    [aux_sym_url_token1] = ACTIONS(197),
    [anon_sym_LT_LT] = ACTIONS(197),
    [anon_sym_xref_COLON] = ACTIONS(197),
    [sym_emphasis] = ACTIONS(197),
    [sym_strong] = ACTIONS(197),
    [sym_monospace] = ACTIONS(197),
    [sym_highlight] = ACTIONS(195),
    [sym_superscript] = ACTIONS(197),
    [sym_subscript] = ACTIONS(195),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(195),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [sym_title1] = ACTIONS(199),
    [sym_title2] = ACTIONS(199),
    [sym_title3] = ACTIONS(199),
    [sym_title4] = ACTIONS(199),
    [sym_title5] = ACTIONS(199),
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
    [sym_list_item_mark] = ACTIONS(201),
    [aux_sym_code_token1] = ACTIONS(199),
    [aux_sym_code_language_token1] = ACTIONS(201),
    [anon_sym_SLASH_SLASH] = ACTIONS(199),
    [aux_sym_line_breaks_token1] = ACTIONS(199),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(199),
    [anon_sym_image_COLON_COLON] = ACTIONS(199),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(199),
    [anon_sym_audio_COLON_COLON] = ACTIONS(199),
    [anon_sym_video_COLON_COLON] = ACTIONS(199),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(199),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(199),
    [aux_sym_url_token1] = ACTIONS(201),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_xref_COLON] = ACTIONS(201),
    [sym_emphasis] = ACTIONS(201),
    [sym_strong] = ACTIONS(201),
    [sym_monospace] = ACTIONS(201),
    [sym_highlight] = ACTIONS(199),
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(199),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(199),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
    [sym_title1] = ACTIONS(203),
    [sym_title2] = ACTIONS(203),
    [sym_title3] = ACTIONS(203),
    [sym_title4] = ACTIONS(203),
    [sym_title5] = ACTIONS(203),
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
    [sym_list_item_mark] = ACTIONS(205),
    [aux_sym_code_token1] = ACTIONS(203),
    [aux_sym_code_language_token1] = ACTIONS(205),
    [anon_sym_SLASH_SLASH] = ACTIONS(203),
    [aux_sym_line_breaks_token1] = ACTIONS(203),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(203),
    [anon_sym_image_COLON_COLON] = ACTIONS(203),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(203),
    [anon_sym_audio_COLON_COLON] = ACTIONS(203),
    [anon_sym_video_COLON_COLON] = ACTIONS(203),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(203),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(203),
    [aux_sym_url_token1] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(205),
    [anon_sym_xref_COLON] = ACTIONS(205),
    [sym_emphasis] = ACTIONS(205),
    [sym_strong] = ACTIONS(205),
    [sym_monospace] = ACTIONS(205),
    [sym_highlight] = ACTIONS(203),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(203),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(203),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [sym_title1] = ACTIONS(207),
    [sym_title2] = ACTIONS(207),
    [sym_title3] = ACTIONS(207),
    [sym_title4] = ACTIONS(207),
    [sym_title5] = ACTIONS(207),
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
    [sym_list_item_mark] = ACTIONS(209),
    [aux_sym_code_token1] = ACTIONS(207),
    [aux_sym_code_language_token1] = ACTIONS(209),
    [anon_sym_SLASH_SLASH] = ACTIONS(207),
    [aux_sym_line_breaks_token1] = ACTIONS(207),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(207),
    [anon_sym_image_COLON_COLON] = ACTIONS(207),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(207),
    [anon_sym_audio_COLON_COLON] = ACTIONS(207),
    [anon_sym_video_COLON_COLON] = ACTIONS(207),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(207),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(207),
    [aux_sym_url_token1] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_xref_COLON] = ACTIONS(209),
    [sym_emphasis] = ACTIONS(209),
    [sym_strong] = ACTIONS(209),
    [sym_monospace] = ACTIONS(209),
    [sym_highlight] = ACTIONS(207),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(207),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(207),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(211),
    [sym_title1] = ACTIONS(211),
    [sym_title2] = ACTIONS(211),
    [sym_title3] = ACTIONS(211),
    [sym_title4] = ACTIONS(211),
    [sym_title5] = ACTIONS(211),
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
    [sym_list_item_mark] = ACTIONS(213),
    [aux_sym_code_token1] = ACTIONS(211),
    [aux_sym_code_language_token1] = ACTIONS(213),
    [anon_sym_SLASH_SLASH] = ACTIONS(211),
    [aux_sym_line_breaks_token1] = ACTIONS(211),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(211),
    [anon_sym_image_COLON_COLON] = ACTIONS(211),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(211),
    [anon_sym_audio_COLON_COLON] = ACTIONS(211),
    [anon_sym_video_COLON_COLON] = ACTIONS(211),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(211),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(211),
    [aux_sym_url_token1] = ACTIONS(213),
    [anon_sym_LT_LT] = ACTIONS(213),
    [anon_sym_xref_COLON] = ACTIONS(213),
    [sym_emphasis] = ACTIONS(213),
    [sym_strong] = ACTIONS(213),
    [sym_monospace] = ACTIONS(213),
    [sym_highlight] = ACTIONS(211),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(211),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(211),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(215),
    [sym_title1] = ACTIONS(215),
    [sym_title2] = ACTIONS(215),
    [sym_title3] = ACTIONS(215),
    [sym_title4] = ACTIONS(215),
    [sym_title5] = ACTIONS(215),
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
    [sym_list_item_mark] = ACTIONS(217),
    [aux_sym_code_token1] = ACTIONS(215),
    [aux_sym_code_language_token1] = ACTIONS(217),
    [anon_sym_SLASH_SLASH] = ACTIONS(215),
    [aux_sym_line_breaks_token1] = ACTIONS(215),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(215),
    [anon_sym_image_COLON_COLON] = ACTIONS(215),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(215),
    [anon_sym_audio_COLON_COLON] = ACTIONS(215),
    [anon_sym_video_COLON_COLON] = ACTIONS(215),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(215),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(215),
    [aux_sym_url_token1] = ACTIONS(217),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_xref_COLON] = ACTIONS(217),
    [sym_emphasis] = ACTIONS(217),
    [sym_strong] = ACTIONS(217),
    [sym_monospace] = ACTIONS(217),
    [sym_highlight] = ACTIONS(215),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(215),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(215),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(219),
    [sym_title1] = ACTIONS(219),
    [sym_title2] = ACTIONS(219),
    [sym_title3] = ACTIONS(219),
    [sym_title4] = ACTIONS(219),
    [sym_title5] = ACTIONS(219),
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
    [sym_list_item_mark] = ACTIONS(221),
    [aux_sym_code_token1] = ACTIONS(219),
    [aux_sym_code_language_token1] = ACTIONS(221),
    [anon_sym_SLASH_SLASH] = ACTIONS(219),
    [aux_sym_line_breaks_token1] = ACTIONS(219),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(219),
    [anon_sym_image_COLON_COLON] = ACTIONS(219),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(219),
    [anon_sym_audio_COLON_COLON] = ACTIONS(219),
    [anon_sym_video_COLON_COLON] = ACTIONS(219),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(219),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(219),
    [aux_sym_url_token1] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_xref_COLON] = ACTIONS(221),
    [sym_emphasis] = ACTIONS(221),
    [sym_strong] = ACTIONS(221),
    [sym_monospace] = ACTIONS(221),
    [sym_highlight] = ACTIONS(219),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(219),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(219),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
    [sym_title1] = ACTIONS(223),
    [sym_title2] = ACTIONS(223),
    [sym_title3] = ACTIONS(223),
    [sym_title4] = ACTIONS(223),
    [sym_title5] = ACTIONS(223),
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
    [sym_list_item_mark] = ACTIONS(225),
    [aux_sym_code_token1] = ACTIONS(223),
    [aux_sym_code_language_token1] = ACTIONS(225),
    [anon_sym_SLASH_SLASH] = ACTIONS(223),
    [aux_sym_line_breaks_token1] = ACTIONS(223),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(223),
    [anon_sym_image_COLON_COLON] = ACTIONS(223),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(223),
    [anon_sym_audio_COLON_COLON] = ACTIONS(223),
    [anon_sym_video_COLON_COLON] = ACTIONS(223),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(223),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(223),
    [aux_sym_url_token1] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_xref_COLON] = ACTIONS(225),
    [sym_emphasis] = ACTIONS(225),
    [sym_strong] = ACTIONS(225),
    [sym_monospace] = ACTIONS(225),
    [sym_highlight] = ACTIONS(223),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(223),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(223),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [sym_title1] = ACTIONS(227),
    [sym_title2] = ACTIONS(227),
    [sym_title3] = ACTIONS(227),
    [sym_title4] = ACTIONS(227),
    [sym_title5] = ACTIONS(227),
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
    [sym_list_item_mark] = ACTIONS(229),
    [aux_sym_code_token1] = ACTIONS(227),
    [aux_sym_code_language_token1] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [aux_sym_line_breaks_token1] = ACTIONS(227),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(227),
    [anon_sym_image_COLON_COLON] = ACTIONS(227),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(227),
    [anon_sym_audio_COLON_COLON] = ACTIONS(227),
    [anon_sym_video_COLON_COLON] = ACTIONS(227),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(227),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(227),
    [aux_sym_url_token1] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_xref_COLON] = ACTIONS(229),
    [sym_emphasis] = ACTIONS(229),
    [sym_strong] = ACTIONS(229),
    [sym_monospace] = ACTIONS(229),
    [sym_highlight] = ACTIONS(227),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(227),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(227),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
    [sym_title1] = ACTIONS(231),
    [sym_title2] = ACTIONS(231),
    [sym_title3] = ACTIONS(231),
    [sym_title4] = ACTIONS(231),
    [sym_title5] = ACTIONS(231),
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
    [sym_list_item_mark] = ACTIONS(233),
    [aux_sym_code_token1] = ACTIONS(231),
    [aux_sym_code_language_token1] = ACTIONS(233),
    [anon_sym_SLASH_SLASH] = ACTIONS(231),
    [aux_sym_line_breaks_token1] = ACTIONS(231),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(231),
    [anon_sym_image_COLON_COLON] = ACTIONS(231),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(231),
    [anon_sym_audio_COLON_COLON] = ACTIONS(231),
    [anon_sym_video_COLON_COLON] = ACTIONS(231),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(231),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(231),
    [aux_sym_url_token1] = ACTIONS(233),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_xref_COLON] = ACTIONS(233),
    [sym_emphasis] = ACTIONS(233),
    [sym_strong] = ACTIONS(233),
    [sym_monospace] = ACTIONS(233),
    [sym_highlight] = ACTIONS(231),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(231),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(231),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(235),
    [sym_title1] = ACTIONS(235),
    [sym_title2] = ACTIONS(235),
    [sym_title3] = ACTIONS(235),
    [sym_title4] = ACTIONS(235),
    [sym_title5] = ACTIONS(235),
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
    [sym_list_item_mark] = ACTIONS(237),
    [aux_sym_code_token1] = ACTIONS(235),
    [aux_sym_code_language_token1] = ACTIONS(237),
    [anon_sym_SLASH_SLASH] = ACTIONS(235),
    [aux_sym_line_breaks_token1] = ACTIONS(235),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(235),
    [anon_sym_image_COLON_COLON] = ACTIONS(235),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(235),
    [anon_sym_audio_COLON_COLON] = ACTIONS(235),
    [anon_sym_video_COLON_COLON] = ACTIONS(235),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(235),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(235),
    [aux_sym_url_token1] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_xref_COLON] = ACTIONS(237),
    [sym_emphasis] = ACTIONS(237),
    [sym_strong] = ACTIONS(237),
    [sym_monospace] = ACTIONS(237),
    [sym_highlight] = ACTIONS(235),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(235),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(235),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [sym_title1] = ACTIONS(239),
    [sym_title2] = ACTIONS(239),
    [sym_title3] = ACTIONS(239),
    [sym_title4] = ACTIONS(239),
    [sym_title5] = ACTIONS(239),
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
    [sym_list_item_mark] = ACTIONS(241),
    [aux_sym_code_token1] = ACTIONS(239),
    [aux_sym_code_language_token1] = ACTIONS(241),
    [anon_sym_SLASH_SLASH] = ACTIONS(239),
    [aux_sym_line_breaks_token1] = ACTIONS(239),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(239),
    [anon_sym_image_COLON_COLON] = ACTIONS(239),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(239),
    [anon_sym_audio_COLON_COLON] = ACTIONS(239),
    [anon_sym_video_COLON_COLON] = ACTIONS(239),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(239),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(239),
    [aux_sym_url_token1] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_xref_COLON] = ACTIONS(241),
    [sym_emphasis] = ACTIONS(241),
    [sym_strong] = ACTIONS(241),
    [sym_monospace] = ACTIONS(241),
    [sym_highlight] = ACTIONS(239),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(239),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(239),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(243),
    [sym_title1] = ACTIONS(243),
    [sym_title2] = ACTIONS(243),
    [sym_title3] = ACTIONS(243),
    [sym_title4] = ACTIONS(243),
    [sym_title5] = ACTIONS(243),
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
    [sym_list_item_mark] = ACTIONS(245),
    [aux_sym_code_token1] = ACTIONS(243),
    [aux_sym_code_language_token1] = ACTIONS(245),
    [anon_sym_SLASH_SLASH] = ACTIONS(243),
    [aux_sym_line_breaks_token1] = ACTIONS(243),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(243),
    [anon_sym_image_COLON_COLON] = ACTIONS(243),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(243),
    [anon_sym_audio_COLON_COLON] = ACTIONS(243),
    [anon_sym_video_COLON_COLON] = ACTIONS(243),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(243),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(243),
    [aux_sym_url_token1] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_xref_COLON] = ACTIONS(245),
    [sym_emphasis] = ACTIONS(245),
    [sym_strong] = ACTIONS(245),
    [sym_monospace] = ACTIONS(245),
    [sym_highlight] = ACTIONS(243),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(243),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(243),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_DOT] = ACTIONS(247),
    [sym_title1] = ACTIONS(247),
    [sym_title2] = ACTIONS(247),
    [sym_title3] = ACTIONS(247),
    [sym_title4] = ACTIONS(247),
    [sym_title5] = ACTIONS(247),
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
    [sym_list_item_mark] = ACTIONS(249),
    [aux_sym_code_token1] = ACTIONS(247),
    [aux_sym_code_language_token1] = ACTIONS(249),
    [anon_sym_SLASH_SLASH] = ACTIONS(247),
    [aux_sym_line_breaks_token1] = ACTIONS(247),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(247),
    [anon_sym_image_COLON_COLON] = ACTIONS(247),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(247),
    [anon_sym_audio_COLON_COLON] = ACTIONS(247),
    [anon_sym_video_COLON_COLON] = ACTIONS(247),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(247),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(247),
    [aux_sym_url_token1] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_xref_COLON] = ACTIONS(249),
    [sym_emphasis] = ACTIONS(249),
    [sym_strong] = ACTIONS(249),
    [sym_monospace] = ACTIONS(249),
    [sym_highlight] = ACTIONS(247),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(247),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(247),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(251),
    [sym_title1] = ACTIONS(251),
    [sym_title2] = ACTIONS(251),
    [sym_title3] = ACTIONS(251),
    [sym_title4] = ACTIONS(251),
    [sym_title5] = ACTIONS(251),
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
    [sym_list_item_mark] = ACTIONS(253),
    [aux_sym_code_token1] = ACTIONS(251),
    [aux_sym_code_language_token1] = ACTIONS(253),
    [anon_sym_SLASH_SLASH] = ACTIONS(251),
    [aux_sym_line_breaks_token1] = ACTIONS(251),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(251),
    [anon_sym_image_COLON_COLON] = ACTIONS(251),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(251),
    [anon_sym_audio_COLON_COLON] = ACTIONS(251),
    [anon_sym_video_COLON_COLON] = ACTIONS(251),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(251),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(251),
    [aux_sym_url_token1] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_xref_COLON] = ACTIONS(253),
    [sym_emphasis] = ACTIONS(253),
    [sym_strong] = ACTIONS(253),
    [sym_monospace] = ACTIONS(253),
    [sym_highlight] = ACTIONS(251),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(251),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(251),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(255),
    [sym_title1] = ACTIONS(255),
    [sym_title2] = ACTIONS(255),
    [sym_title3] = ACTIONS(255),
    [sym_title4] = ACTIONS(255),
    [sym_title5] = ACTIONS(255),
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
    [sym_list_item_mark] = ACTIONS(257),
    [aux_sym_code_token1] = ACTIONS(255),
    [aux_sym_code_language_token1] = ACTIONS(257),
    [anon_sym_SLASH_SLASH] = ACTIONS(255),
    [aux_sym_line_breaks_token1] = ACTIONS(255),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(255),
    [anon_sym_image_COLON_COLON] = ACTIONS(255),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(255),
    [anon_sym_audio_COLON_COLON] = ACTIONS(255),
    [anon_sym_video_COLON_COLON] = ACTIONS(255),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(255),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(255),
    [aux_sym_url_token1] = ACTIONS(257),
    [anon_sym_LT_LT] = ACTIONS(257),
    [anon_sym_xref_COLON] = ACTIONS(257),
    [sym_emphasis] = ACTIONS(257),
    [sym_strong] = ACTIONS(257),
    [sym_monospace] = ACTIONS(257),
    [sym_highlight] = ACTIONS(255),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(255),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(255),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(259),
    [sym_title1] = ACTIONS(259),
    [sym_title2] = ACTIONS(259),
    [sym_title3] = ACTIONS(259),
    [sym_title4] = ACTIONS(259),
    [sym_title5] = ACTIONS(259),
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
    [sym_list_item_mark] = ACTIONS(261),
    [aux_sym_code_token1] = ACTIONS(259),
    [aux_sym_code_language_token1] = ACTIONS(261),
    [anon_sym_SLASH_SLASH] = ACTIONS(259),
    [aux_sym_line_breaks_token1] = ACTIONS(259),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(259),
    [anon_sym_image_COLON_COLON] = ACTIONS(259),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(259),
    [anon_sym_audio_COLON_COLON] = ACTIONS(259),
    [anon_sym_video_COLON_COLON] = ACTIONS(259),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(259),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(259),
    [aux_sym_url_token1] = ACTIONS(261),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_xref_COLON] = ACTIONS(261),
    [sym_emphasis] = ACTIONS(261),
    [sym_strong] = ACTIONS(261),
    [sym_monospace] = ACTIONS(261),
    [sym_highlight] = ACTIONS(259),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(259),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(259),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(263),
    [sym_title1] = ACTIONS(263),
    [sym_title2] = ACTIONS(263),
    [sym_title3] = ACTIONS(263),
    [sym_title4] = ACTIONS(263),
    [sym_title5] = ACTIONS(263),
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
    [sym_list_item_mark] = ACTIONS(265),
    [aux_sym_code_token1] = ACTIONS(263),
    [aux_sym_code_language_token1] = ACTIONS(265),
    [anon_sym_SLASH_SLASH] = ACTIONS(263),
    [aux_sym_line_breaks_token1] = ACTIONS(263),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(263),
    [anon_sym_image_COLON_COLON] = ACTIONS(263),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(263),
    [anon_sym_audio_COLON_COLON] = ACTIONS(263),
    [anon_sym_video_COLON_COLON] = ACTIONS(263),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(263),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(263),
    [aux_sym_url_token1] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_xref_COLON] = ACTIONS(265),
    [sym_emphasis] = ACTIONS(265),
    [sym_strong] = ACTIONS(265),
    [sym_monospace] = ACTIONS(265),
    [sym_highlight] = ACTIONS(263),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(263),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(263),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_DOT] = ACTIONS(267),
    [sym_title1] = ACTIONS(267),
    [sym_title2] = ACTIONS(267),
    [sym_title3] = ACTIONS(267),
    [sym_title4] = ACTIONS(267),
    [sym_title5] = ACTIONS(267),
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
    [sym_list_item_mark] = ACTIONS(269),
    [aux_sym_code_token1] = ACTIONS(267),
    [aux_sym_code_language_token1] = ACTIONS(269),
    [anon_sym_SLASH_SLASH] = ACTIONS(267),
    [aux_sym_line_breaks_token1] = ACTIONS(267),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(267),
    [anon_sym_image_COLON_COLON] = ACTIONS(267),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(267),
    [anon_sym_audio_COLON_COLON] = ACTIONS(267),
    [anon_sym_video_COLON_COLON] = ACTIONS(267),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(267),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(267),
    [aux_sym_url_token1] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(269),
    [anon_sym_xref_COLON] = ACTIONS(269),
    [sym_emphasis] = ACTIONS(269),
    [sym_strong] = ACTIONS(269),
    [sym_monospace] = ACTIONS(269),
    [sym_highlight] = ACTIONS(267),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(267),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(267),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(271),
    [sym_title1] = ACTIONS(271),
    [sym_title2] = ACTIONS(271),
    [sym_title3] = ACTIONS(271),
    [sym_title4] = ACTIONS(271),
    [sym_title5] = ACTIONS(271),
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
    [sym_list_item_mark] = ACTIONS(273),
    [aux_sym_code_token1] = ACTIONS(271),
    [aux_sym_code_language_token1] = ACTIONS(273),
    [anon_sym_SLASH_SLASH] = ACTIONS(271),
    [aux_sym_line_breaks_token1] = ACTIONS(271),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(271),
    [anon_sym_image_COLON_COLON] = ACTIONS(271),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(271),
    [anon_sym_audio_COLON_COLON] = ACTIONS(271),
    [anon_sym_video_COLON_COLON] = ACTIONS(271),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(271),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(271),
    [aux_sym_url_token1] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_xref_COLON] = ACTIONS(273),
    [sym_emphasis] = ACTIONS(273),
    [sym_strong] = ACTIONS(273),
    [sym_monospace] = ACTIONS(273),
    [sym_highlight] = ACTIONS(271),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(271),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(271),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(275),
    [sym_title1] = ACTIONS(275),
    [sym_title2] = ACTIONS(275),
    [sym_title3] = ACTIONS(275),
    [sym_title4] = ACTIONS(275),
    [sym_title5] = ACTIONS(275),
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
    [sym_list_item_mark] = ACTIONS(277),
    [aux_sym_code_token1] = ACTIONS(275),
    [aux_sym_code_language_token1] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(275),
    [aux_sym_line_breaks_token1] = ACTIONS(275),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(275),
    [anon_sym_image_COLON_COLON] = ACTIONS(275),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(275),
    [anon_sym_audio_COLON_COLON] = ACTIONS(275),
    [anon_sym_video_COLON_COLON] = ACTIONS(275),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(275),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(275),
    [aux_sym_url_token1] = ACTIONS(277),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_xref_COLON] = ACTIONS(277),
    [sym_emphasis] = ACTIONS(277),
    [sym_strong] = ACTIONS(277),
    [sym_monospace] = ACTIONS(277),
    [sym_highlight] = ACTIONS(275),
    [sym_superscript] = ACTIONS(277),
    [sym_subscript] = ACTIONS(275),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(275),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(279),
    [sym_title1] = ACTIONS(279),
    [sym_title2] = ACTIONS(279),
    [sym_title3] = ACTIONS(279),
    [sym_title4] = ACTIONS(279),
    [sym_title5] = ACTIONS(279),
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
    [sym_list_item_mark] = ACTIONS(281),
    [aux_sym_code_token1] = ACTIONS(279),
    [aux_sym_code_language_token1] = ACTIONS(281),
    [anon_sym_SLASH_SLASH] = ACTIONS(279),
    [aux_sym_line_breaks_token1] = ACTIONS(279),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(279),
    [anon_sym_image_COLON_COLON] = ACTIONS(279),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(279),
    [anon_sym_audio_COLON_COLON] = ACTIONS(279),
    [anon_sym_video_COLON_COLON] = ACTIONS(279),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(279),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(279),
    [aux_sym_url_token1] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_xref_COLON] = ACTIONS(281),
    [sym_emphasis] = ACTIONS(281),
    [sym_strong] = ACTIONS(281),
    [sym_monospace] = ACTIONS(281),
    [sym_highlight] = ACTIONS(279),
    [sym_superscript] = ACTIONS(281),
    [sym_subscript] = ACTIONS(279),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(279),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(283),
    [sym_title1] = ACTIONS(283),
    [sym_title2] = ACTIONS(283),
    [sym_title3] = ACTIONS(283),
    [sym_title4] = ACTIONS(283),
    [sym_title5] = ACTIONS(283),
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
    [sym_list_item_mark] = ACTIONS(285),
    [aux_sym_code_token1] = ACTIONS(283),
    [aux_sym_code_language_token1] = ACTIONS(285),
    [anon_sym_SLASH_SLASH] = ACTIONS(283),
    [aux_sym_line_breaks_token1] = ACTIONS(283),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(283),
    [anon_sym_image_COLON_COLON] = ACTIONS(283),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(283),
    [anon_sym_audio_COLON_COLON] = ACTIONS(283),
    [anon_sym_video_COLON_COLON] = ACTIONS(283),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(283),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(283),
    [aux_sym_url_token1] = ACTIONS(285),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_xref_COLON] = ACTIONS(285),
    [sym_emphasis] = ACTIONS(285),
    [sym_strong] = ACTIONS(285),
    [sym_monospace] = ACTIONS(285),
    [sym_highlight] = ACTIONS(283),
    [sym_superscript] = ACTIONS(285),
    [sym_subscript] = ACTIONS(283),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(283),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(287),
    [sym_title1] = ACTIONS(287),
    [sym_title2] = ACTIONS(287),
    [sym_title3] = ACTIONS(287),
    [sym_title4] = ACTIONS(287),
    [sym_title5] = ACTIONS(287),
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
    [sym_list_item_mark] = ACTIONS(289),
    [aux_sym_code_token1] = ACTIONS(287),
    [aux_sym_code_language_token1] = ACTIONS(289),
    [anon_sym_SLASH_SLASH] = ACTIONS(287),
    [aux_sym_line_breaks_token1] = ACTIONS(287),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(287),
    [anon_sym_image_COLON_COLON] = ACTIONS(287),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(287),
    [anon_sym_audio_COLON_COLON] = ACTIONS(287),
    [anon_sym_video_COLON_COLON] = ACTIONS(287),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(287),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(287),
    [aux_sym_url_token1] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(289),
    [anon_sym_xref_COLON] = ACTIONS(289),
    [sym_emphasis] = ACTIONS(289),
    [sym_strong] = ACTIONS(289),
    [sym_monospace] = ACTIONS(289),
    [sym_highlight] = ACTIONS(287),
    [sym_superscript] = ACTIONS(289),
    [sym_subscript] = ACTIONS(287),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(287),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_title1] = ACTIONS(291),
    [sym_title2] = ACTIONS(291),
    [sym_title3] = ACTIONS(291),
    [sym_title4] = ACTIONS(291),
    [sym_title5] = ACTIONS(291),
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
    [sym_list_item_mark] = ACTIONS(293),
    [aux_sym_code_token1] = ACTIONS(291),
    [aux_sym_code_language_token1] = ACTIONS(293),
    [anon_sym_SLASH_SLASH] = ACTIONS(291),
    [aux_sym_line_breaks_token1] = ACTIONS(291),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(291),
    [anon_sym_image_COLON_COLON] = ACTIONS(291),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(291),
    [anon_sym_audio_COLON_COLON] = ACTIONS(291),
    [anon_sym_video_COLON_COLON] = ACTIONS(291),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(291),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(291),
    [aux_sym_url_token1] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(293),
    [anon_sym_xref_COLON] = ACTIONS(293),
    [sym_emphasis] = ACTIONS(293),
    [sym_strong] = ACTIONS(293),
    [sym_monospace] = ACTIONS(293),
    [sym_highlight] = ACTIONS(291),
    [sym_superscript] = ACTIONS(293),
    [sym_subscript] = ACTIONS(291),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(291),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [sym_title1] = ACTIONS(295),
    [sym_title2] = ACTIONS(295),
    [sym_title3] = ACTIONS(295),
    [sym_title4] = ACTIONS(295),
    [sym_title5] = ACTIONS(295),
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
    [sym_list_item_mark] = ACTIONS(297),
    [aux_sym_code_token1] = ACTIONS(295),
    [aux_sym_code_language_token1] = ACTIONS(297),
    [anon_sym_SLASH_SLASH] = ACTIONS(295),
    [aux_sym_line_breaks_token1] = ACTIONS(295),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(295),
    [anon_sym_image_COLON_COLON] = ACTIONS(295),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(295),
    [anon_sym_audio_COLON_COLON] = ACTIONS(295),
    [anon_sym_video_COLON_COLON] = ACTIONS(295),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(295),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(295),
    [aux_sym_url_token1] = ACTIONS(297),
    [anon_sym_LT_LT] = ACTIONS(297),
    [anon_sym_xref_COLON] = ACTIONS(297),
    [sym_emphasis] = ACTIONS(297),
    [sym_strong] = ACTIONS(297),
    [sym_monospace] = ACTIONS(297),
    [sym_highlight] = ACTIONS(295),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(295),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(295),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(299),
    [sym_title1] = ACTIONS(299),
    [sym_title2] = ACTIONS(299),
    [sym_title3] = ACTIONS(299),
    [sym_title4] = ACTIONS(299),
    [sym_title5] = ACTIONS(299),
    [anon_sym_NOTE_COLON] = ACTIONS(299),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(299),
    [anon_sym_TIP_COLON] = ACTIONS(299),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(299),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(299),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(299),
    [anon_sym_CAUTION_COLON] = ACTIONS(299),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(299),
    [anon_sym_WARNING_COLON] = ACTIONS(299),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(299),
    [sym_list_item_mark] = ACTIONS(301),
    [aux_sym_code_token1] = ACTIONS(299),
    [aux_sym_code_language_token1] = ACTIONS(301),
    [anon_sym_SLASH_SLASH] = ACTIONS(299),
    [aux_sym_line_breaks_token1] = ACTIONS(299),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(299),
    [anon_sym_image_COLON_COLON] = ACTIONS(299),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(299),
    [anon_sym_audio_COLON_COLON] = ACTIONS(299),
    [anon_sym_video_COLON_COLON] = ACTIONS(299),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(299),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(299),
    [aux_sym_url_token1] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(301),
    [anon_sym_xref_COLON] = ACTIONS(301),
    [sym_emphasis] = ACTIONS(301),
    [sym_strong] = ACTIONS(301),
    [sym_monospace] = ACTIONS(301),
    [sym_highlight] = ACTIONS(299),
    [sym_superscript] = ACTIONS(301),
    [sym_subscript] = ACTIONS(299),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(299),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(299),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(299),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [sym_title1] = ACTIONS(303),
    [sym_title2] = ACTIONS(303),
    [sym_title3] = ACTIONS(303),
    [sym_title4] = ACTIONS(303),
    [sym_title5] = ACTIONS(303),
    [anon_sym_NOTE_COLON] = ACTIONS(303),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(303),
    [anon_sym_TIP_COLON] = ACTIONS(303),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(303),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(303),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(303),
    [anon_sym_CAUTION_COLON] = ACTIONS(303),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(303),
    [anon_sym_WARNING_COLON] = ACTIONS(303),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(303),
    [sym_list_item_mark] = ACTIONS(305),
    [aux_sym_code_token1] = ACTIONS(303),
    [aux_sym_code_language_token1] = ACTIONS(305),
    [anon_sym_SLASH_SLASH] = ACTIONS(303),
    [aux_sym_line_breaks_token1] = ACTIONS(303),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(303),
    [anon_sym_image_COLON_COLON] = ACTIONS(303),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(303),
    [anon_sym_audio_COLON_COLON] = ACTIONS(303),
    [anon_sym_video_COLON_COLON] = ACTIONS(303),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(303),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(303),
    [aux_sym_url_token1] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(305),
    [anon_sym_xref_COLON] = ACTIONS(305),
    [sym_emphasis] = ACTIONS(305),
    [sym_strong] = ACTIONS(305),
    [sym_monospace] = ACTIONS(305),
    [sym_highlight] = ACTIONS(303),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(303),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(303),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(303),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(303),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(303),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(307),
    [sym_title1] = ACTIONS(307),
    [sym_title2] = ACTIONS(307),
    [sym_title3] = ACTIONS(307),
    [sym_title4] = ACTIONS(307),
    [sym_title5] = ACTIONS(307),
    [anon_sym_NOTE_COLON] = ACTIONS(307),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(307),
    [anon_sym_TIP_COLON] = ACTIONS(307),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(307),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(307),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(307),
    [anon_sym_CAUTION_COLON] = ACTIONS(307),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(307),
    [anon_sym_WARNING_COLON] = ACTIONS(307),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(307),
    [sym_list_item_mark] = ACTIONS(309),
    [aux_sym_code_token1] = ACTIONS(307),
    [aux_sym_code_language_token1] = ACTIONS(309),
    [anon_sym_SLASH_SLASH] = ACTIONS(307),
    [aux_sym_line_breaks_token1] = ACTIONS(307),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(307),
    [anon_sym_image_COLON_COLON] = ACTIONS(307),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(307),
    [anon_sym_audio_COLON_COLON] = ACTIONS(307),
    [anon_sym_video_COLON_COLON] = ACTIONS(307),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(307),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(307),
    [aux_sym_url_token1] = ACTIONS(309),
    [anon_sym_LT_LT] = ACTIONS(309),
    [anon_sym_xref_COLON] = ACTIONS(309),
    [sym_emphasis] = ACTIONS(309),
    [sym_strong] = ACTIONS(309),
    [sym_monospace] = ACTIONS(309),
    [sym_highlight] = ACTIONS(307),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(307),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(307),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(307),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(307),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [sym_title1] = ACTIONS(311),
    [sym_title2] = ACTIONS(311),
    [sym_title3] = ACTIONS(311),
    [sym_title4] = ACTIONS(311),
    [sym_title5] = ACTIONS(311),
    [anon_sym_NOTE_COLON] = ACTIONS(311),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(311),
    [anon_sym_TIP_COLON] = ACTIONS(311),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(311),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(311),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(311),
    [anon_sym_CAUTION_COLON] = ACTIONS(311),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(311),
    [anon_sym_WARNING_COLON] = ACTIONS(311),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(311),
    [sym_list_item_mark] = ACTIONS(313),
    [aux_sym_code_token1] = ACTIONS(311),
    [aux_sym_code_language_token1] = ACTIONS(313),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [aux_sym_line_breaks_token1] = ACTIONS(311),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(311),
    [anon_sym_image_COLON_COLON] = ACTIONS(311),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(311),
    [anon_sym_audio_COLON_COLON] = ACTIONS(311),
    [anon_sym_video_COLON_COLON] = ACTIONS(311),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(311),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(311),
    [aux_sym_url_token1] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_xref_COLON] = ACTIONS(313),
    [sym_emphasis] = ACTIONS(313),
    [sym_strong] = ACTIONS(313),
    [sym_monospace] = ACTIONS(313),
    [sym_highlight] = ACTIONS(311),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(311),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(311),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(311),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(311),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_title1] = ACTIONS(315),
    [sym_title2] = ACTIONS(315),
    [sym_title3] = ACTIONS(315),
    [sym_title4] = ACTIONS(315),
    [sym_title5] = ACTIONS(315),
    [anon_sym_NOTE_COLON] = ACTIONS(315),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(315),
    [anon_sym_TIP_COLON] = ACTIONS(315),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(315),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(315),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(315),
    [anon_sym_CAUTION_COLON] = ACTIONS(315),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(315),
    [anon_sym_WARNING_COLON] = ACTIONS(315),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(315),
    [sym_list_item_mark] = ACTIONS(317),
    [aux_sym_code_token1] = ACTIONS(315),
    [aux_sym_code_language_token1] = ACTIONS(317),
    [anon_sym_SLASH_SLASH] = ACTIONS(315),
    [aux_sym_line_breaks_token1] = ACTIONS(315),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(315),
    [anon_sym_image_COLON_COLON] = ACTIONS(315),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(315),
    [anon_sym_audio_COLON_COLON] = ACTIONS(315),
    [anon_sym_video_COLON_COLON] = ACTIONS(315),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(315),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(315),
    [aux_sym_url_token1] = ACTIONS(317),
    [anon_sym_LT_LT] = ACTIONS(317),
    [anon_sym_xref_COLON] = ACTIONS(317),
    [sym_emphasis] = ACTIONS(317),
    [sym_strong] = ACTIONS(317),
    [sym_monospace] = ACTIONS(317),
    [sym_highlight] = ACTIONS(315),
    [sym_superscript] = ACTIONS(317),
    [sym_subscript] = ACTIONS(315),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(315),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(315),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(315),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(319),
    [sym_title1] = ACTIONS(319),
    [sym_title2] = ACTIONS(319),
    [sym_title3] = ACTIONS(319),
    [sym_title4] = ACTIONS(319),
    [sym_title5] = ACTIONS(319),
    [anon_sym_NOTE_COLON] = ACTIONS(319),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(319),
    [anon_sym_TIP_COLON] = ACTIONS(319),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(319),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(319),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(319),
    [anon_sym_CAUTION_COLON] = ACTIONS(319),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(319),
    [anon_sym_WARNING_COLON] = ACTIONS(319),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(319),
    [sym_list_item_mark] = ACTIONS(321),
    [aux_sym_code_token1] = ACTIONS(319),
    [aux_sym_code_language_token1] = ACTIONS(321),
    [anon_sym_SLASH_SLASH] = ACTIONS(319),
    [aux_sym_line_breaks_token1] = ACTIONS(319),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(319),
    [anon_sym_image_COLON_COLON] = ACTIONS(319),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(319),
    [anon_sym_audio_COLON_COLON] = ACTIONS(319),
    [anon_sym_video_COLON_COLON] = ACTIONS(319),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(319),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(319),
    [aux_sym_url_token1] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_xref_COLON] = ACTIONS(321),
    [sym_emphasis] = ACTIONS(321),
    [sym_strong] = ACTIONS(321),
    [sym_monospace] = ACTIONS(321),
    [sym_highlight] = ACTIONS(319),
    [sym_superscript] = ACTIONS(321),
    [sym_subscript] = ACTIONS(319),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(319),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(319),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(319),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(323),
    [sym_title1] = ACTIONS(323),
    [sym_title2] = ACTIONS(323),
    [sym_title3] = ACTIONS(323),
    [sym_title4] = ACTIONS(323),
    [sym_title5] = ACTIONS(323),
    [anon_sym_NOTE_COLON] = ACTIONS(323),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(323),
    [anon_sym_TIP_COLON] = ACTIONS(323),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(323),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(323),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(323),
    [anon_sym_CAUTION_COLON] = ACTIONS(323),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(323),
    [anon_sym_WARNING_COLON] = ACTIONS(323),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(323),
    [sym_list_item_mark] = ACTIONS(325),
    [aux_sym_code_token1] = ACTIONS(323),
    [aux_sym_code_language_token1] = ACTIONS(325),
    [anon_sym_SLASH_SLASH] = ACTIONS(323),
    [aux_sym_line_breaks_token1] = ACTIONS(323),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(323),
    [anon_sym_image_COLON_COLON] = ACTIONS(323),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(323),
    [anon_sym_audio_COLON_COLON] = ACTIONS(323),
    [anon_sym_video_COLON_COLON] = ACTIONS(323),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(323),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(323),
    [aux_sym_url_token1] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_xref_COLON] = ACTIONS(325),
    [sym_emphasis] = ACTIONS(325),
    [sym_strong] = ACTIONS(325),
    [sym_monospace] = ACTIONS(325),
    [sym_highlight] = ACTIONS(323),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(323),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(323),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(323),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(323),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(327),
    [sym_title1] = ACTIONS(327),
    [sym_title2] = ACTIONS(327),
    [sym_title3] = ACTIONS(327),
    [sym_title4] = ACTIONS(327),
    [sym_title5] = ACTIONS(327),
    [anon_sym_NOTE_COLON] = ACTIONS(327),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(327),
    [anon_sym_TIP_COLON] = ACTIONS(327),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(327),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(327),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(327),
    [anon_sym_CAUTION_COLON] = ACTIONS(327),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(327),
    [anon_sym_WARNING_COLON] = ACTIONS(327),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(327),
    [sym_list_item_mark] = ACTIONS(329),
    [aux_sym_code_token1] = ACTIONS(327),
    [aux_sym_code_language_token1] = ACTIONS(329),
    [anon_sym_SLASH_SLASH] = ACTIONS(327),
    [aux_sym_line_breaks_token1] = ACTIONS(327),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(327),
    [anon_sym_image_COLON_COLON] = ACTIONS(327),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(327),
    [anon_sym_audio_COLON_COLON] = ACTIONS(327),
    [anon_sym_video_COLON_COLON] = ACTIONS(327),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(327),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(327),
    [aux_sym_url_token1] = ACTIONS(329),
    [anon_sym_LT_LT] = ACTIONS(329),
    [anon_sym_xref_COLON] = ACTIONS(329),
    [sym_emphasis] = ACTIONS(329),
    [sym_strong] = ACTIONS(329),
    [sym_monospace] = ACTIONS(329),
    [sym_highlight] = ACTIONS(327),
    [sym_superscript] = ACTIONS(329),
    [sym_subscript] = ACTIONS(327),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(327),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(327),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(327),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(331),
    [sym_title1] = ACTIONS(331),
    [sym_title2] = ACTIONS(331),
    [sym_title3] = ACTIONS(331),
    [sym_title4] = ACTIONS(331),
    [sym_title5] = ACTIONS(331),
    [anon_sym_NOTE_COLON] = ACTIONS(331),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(331),
    [anon_sym_TIP_COLON] = ACTIONS(331),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(331),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(331),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(331),
    [anon_sym_CAUTION_COLON] = ACTIONS(331),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(331),
    [anon_sym_WARNING_COLON] = ACTIONS(331),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(331),
    [sym_list_item_mark] = ACTIONS(333),
    [aux_sym_code_token1] = ACTIONS(331),
    [aux_sym_code_language_token1] = ACTIONS(333),
    [anon_sym_SLASH_SLASH] = ACTIONS(331),
    [aux_sym_line_breaks_token1] = ACTIONS(331),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(331),
    [anon_sym_image_COLON_COLON] = ACTIONS(331),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(331),
    [anon_sym_audio_COLON_COLON] = ACTIONS(331),
    [anon_sym_video_COLON_COLON] = ACTIONS(331),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(331),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(331),
    [aux_sym_url_token1] = ACTIONS(333),
    [anon_sym_LT_LT] = ACTIONS(333),
    [anon_sym_xref_COLON] = ACTIONS(333),
    [sym_emphasis] = ACTIONS(333),
    [sym_strong] = ACTIONS(333),
    [sym_monospace] = ACTIONS(333),
    [sym_highlight] = ACTIONS(331),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(331),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(331),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(331),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(331),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(53), 1,
      aux_sym_url_token1,
    ACTIONS(55), 1,
      anon_sym_LT_LT,
    ACTIONS(57), 1,
      anon_sym_xref_COLON,
    ACTIONS(337), 1,
      anon_sym_LF_LF,
    ACTIONS(339), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(341), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(343), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(345), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(52), 1,
      sym__inline_xref,
    STATE(53), 1,
      sym__xref,
    STATE(54), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(335), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(46), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(347), 30,
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
  [86] = 14,
    ACTIONS(352), 1,
      anon_sym_LF_LF,
    ACTIONS(354), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(357), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(360), 1,
      aux_sym_url_token1,
    ACTIONS(363), 1,
      anon_sym_LT_LT,
    ACTIONS(366), 1,
      anon_sym_xref_COLON,
    ACTIONS(369), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(372), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(52), 1,
      sym__inline_xref,
    STATE(53), 1,
      sym__xref,
    STATE(54), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(349), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(46), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(375), 30,
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
  [172] = 3,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      anon_sym_LF_LF,
    ACTIONS(378), 44,
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
  [225] = 3,
    ACTIONS(386), 1,
      anon_sym_COLON_COLON,
    ACTIONS(388), 1,
      anon_sym_LF_LF,
    ACTIONS(384), 44,
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
  [278] = 2,
    ACTIONS(392), 1,
      anon_sym_LF_LF,
    ACTIONS(390), 44,
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
  [328] = 2,
    ACTIONS(396), 1,
      anon_sym_LF_LF,
    ACTIONS(394), 44,
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
  [378] = 2,
    ACTIONS(400), 1,
      anon_sym_LF_LF,
    ACTIONS(398), 44,
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
  [428] = 2,
    ACTIONS(404), 1,
      anon_sym_LF_LF,
    ACTIONS(402), 44,
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
  [478] = 2,
    ACTIONS(404), 1,
      anon_sym_LF_LF,
    ACTIONS(402), 44,
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
  [528] = 2,
    ACTIONS(408), 1,
      anon_sym_LF_LF,
    ACTIONS(406), 44,
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
  [578] = 2,
    ACTIONS(412), 1,
      anon_sym_LF_LF,
    ACTIONS(410), 44,
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
  [628] = 2,
    ACTIONS(416), 1,
      anon_sym_LF_LF,
    ACTIONS(414), 44,
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
  [678] = 2,
    ACTIONS(420), 1,
      anon_sym_LF_LF,
    ACTIONS(418), 44,
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
  [728] = 2,
    ACTIONS(424), 1,
      anon_sym_LF_LF,
    ACTIONS(422), 44,
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
  [778] = 2,
    ACTIONS(428), 1,
      anon_sym_LF_LF,
    ACTIONS(426), 44,
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
  [828] = 2,
    ACTIONS(432), 1,
      anon_sym_LF_LF,
    ACTIONS(430), 44,
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
  [878] = 2,
    ACTIONS(436), 1,
      anon_sym_LF_LF,
    ACTIONS(434), 44,
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
  [928] = 2,
    ACTIONS(440), 1,
      anon_sym_LF_LF,
    ACTIONS(438), 44,
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
  [978] = 25,
    ACTIONS(9), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(11), 1,
      anon_sym_LBRACKNOTE_RBRACK_LF,
    ACTIONS(13), 1,
      anon_sym_TIP_COLON,
    ACTIONS(15), 1,
      anon_sym_LBRACKTIP_RBRACK_LF,
    ACTIONS(17), 1,
      anon_sym_IMPORTANT_COLON,
    ACTIONS(19), 1,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
    ACTIONS(21), 1,
      anon_sym_CAUTION_COLON,
    ACTIONS(23), 1,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
    ACTIONS(25), 1,
      anon_sym_WARNING_COLON,
    ACTIONS(27), 1,
      anon_sym_LBRACKWARNING_RBRACK_LF,
    ACTIONS(31), 1,
      aux_sym_code_token1,
    ACTIONS(41), 1,
      anon_sym_image_COLON_COLON,
    ACTIONS(43), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    ACTIONS(45), 1,
      anon_sym_audio_COLON_COLON,
    ACTIONS(47), 1,
      anon_sym_video_COLON_COLON,
    ACTIONS(442), 1,
      sym_list_item_mark,
    ACTIONS(444), 1,
      aux_sym_code_language_token1,
    STATE(65), 1,
      sym_table_start,
    STATE(33), 2,
      sym__note_line,
      sym__note_block,
    STATE(34), 2,
      sym__tip,
      sym__tip_block,
    STATE(35), 2,
      sym__important,
      sym__important_block,
    STATE(36), 2,
      sym__caution,
      sym__caution_block,
    STATE(37), 2,
      sym__warning,
      sym__warning_block,
    STATE(66), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(41), 13,
      sym__admonitions,
      sym_note,
      sym_tip,
      sym_important,
      sym_caution,
      sym_warning,
      sym_list,
      sym_code,
      sym_image,
      sym_table,
      sym_description_list,
      sym_audio,
      sym_video,
  [1072] = 2,
    ACTIONS(448), 1,
      aux_sym_code_language_token1,
    ACTIONS(446), 16,
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
      sym_list_item_mark,
      aux_sym_code_token1,
      anon_sym_image_COLON_COLON,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [1094] = 5,
    ACTIONS(450), 1,
      aux_sym_block_title_token1,
    ACTIONS(452), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(39), 1,
      sym_table_end,
    STATE(83), 1,
      aux_sym_table_content_repeat1,
    STATE(94), 1,
      sym_table_content,
  [1110] = 3,
    ACTIONS(29), 1,
      sym_list_item_mark,
    ACTIONS(454), 1,
      anon_sym_LF,
    STATE(67), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1121] = 3,
    ACTIONS(456), 1,
      anon_sym_LF,
    ACTIONS(458), 1,
      sym_list_item_mark,
    STATE(67), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1132] = 4,
    ACTIONS(461), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(463), 1,
      aux_sym__note_block_token1,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
    STATE(139), 1,
      sym_code_content,
  [1145] = 3,
    ACTIONS(465), 1,
      anon_sym_LBRACK,
    ACTIONS(467), 1,
      aux_sym_audio_url_token1,
    STATE(120), 1,
      sym_audio_url,
  [1155] = 3,
    ACTIONS(469), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(471), 1,
      aux_sym__note_block_token1,
    STATE(87), 1,
      aux_sym__note_block_repeat1,
  [1165] = 3,
    ACTIONS(467), 1,
      aux_sym_audio_url_token1,
    ACTIONS(473), 1,
      anon_sym_LBRACK,
    STATE(122), 1,
      sym_audio_url,
  [1175] = 1,
    ACTIONS(475), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1181] = 3,
    ACTIONS(477), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(479), 1,
      aux_sym__note_block_token1,
    STATE(77), 1,
      aux_sym__note_block_repeat1,
  [1191] = 3,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    ACTIONS(483), 1,
      aux_sym_audio_url_token1,
    STATE(134), 1,
      sym_audio_title,
  [1201] = 3,
    ACTIONS(483), 1,
      aux_sym_audio_url_token1,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym_audio_title,
  [1211] = 3,
    ACTIONS(483), 1,
      aux_sym_audio_url_token1,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      sym_audio_title,
  [1221] = 3,
    ACTIONS(471), 1,
      aux_sym__note_block_token1,
    ACTIONS(489), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(87), 1,
      aux_sym__note_block_repeat1,
  [1231] = 3,
    ACTIONS(471), 1,
      aux_sym__note_block_token1,
    ACTIONS(491), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(87), 1,
      aux_sym__note_block_repeat1,
  [1241] = 3,
    ACTIONS(493), 1,
      aux_sym_block_title_token1,
    ACTIONS(496), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(79), 1,
      aux_sym_table_content_repeat1,
  [1251] = 3,
    ACTIONS(498), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(500), 1,
      aux_sym__note_block_token1,
    STATE(81), 1,
      aux_sym__note_block_repeat1,
  [1261] = 3,
    ACTIONS(471), 1,
      aux_sym__note_block_token1,
    ACTIONS(502), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(87), 1,
      aux_sym__note_block_repeat1,
  [1271] = 3,
    ACTIONS(504), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(506), 1,
      aux_sym__note_block_token1,
    STATE(78), 1,
      aux_sym__note_block_repeat1,
  [1281] = 3,
    ACTIONS(508), 1,
      aux_sym_block_title_token1,
    ACTIONS(510), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(79), 1,
      aux_sym_table_content_repeat1,
  [1291] = 3,
    ACTIONS(512), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(514), 1,
      aux_sym__note_block_token1,
    STATE(70), 1,
      aux_sym__note_block_repeat1,
  [1301] = 3,
    ACTIONS(516), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(518), 1,
      aux_sym__note_block_token1,
    STATE(88), 1,
      aux_sym__note_block_repeat1,
  [1311] = 3,
    ACTIONS(471), 1,
      aux_sym__note_block_token1,
    ACTIONS(520), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(87), 1,
      aux_sym__note_block_repeat1,
  [1321] = 3,
    ACTIONS(522), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(524), 1,
      aux_sym__note_block_token1,
    STATE(87), 1,
      aux_sym__note_block_repeat1,
  [1331] = 3,
    ACTIONS(471), 1,
      aux_sym__note_block_token1,
    ACTIONS(527), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(87), 1,
      aux_sym__note_block_repeat1,
  [1341] = 3,
    ACTIONS(483), 1,
      aux_sym_audio_url_token1,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym_audio_title,
  [1351] = 2,
    ACTIONS(531), 1,
      aux_sym_code_language_token1,
    STATE(91), 1,
      sym_xref_url,
  [1358] = 2,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_GT_GT,
  [1365] = 2,
    ACTIONS(537), 1,
      aux_sym_code_language_token1,
    STATE(144), 1,
      sym_code_language,
  [1372] = 2,
    ACTIONS(467), 1,
      aux_sym_audio_url_token1,
    STATE(127), 1,
      sym_audio_url,
  [1379] = 2,
    ACTIONS(539), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(20), 1,
      sym_table_end,
  [1386] = 1,
    ACTIONS(541), 2,
      aux_sym_block_title_token1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1391] = 2,
    ACTIONS(543), 1,
      aux_sym_code_language_token1,
    STATE(118), 1,
      sym_passthrough_content,
  [1398] = 2,
    ACTIONS(543), 1,
      aux_sym_code_language_token1,
    STATE(128), 1,
      sym_passthrough_content,
  [1405] = 2,
    ACTIONS(531), 1,
      aux_sym_code_language_token1,
    STATE(111), 1,
      sym_xref_url,
  [1412] = 2,
    ACTIONS(545), 1,
      anon_sym_LF,
    ACTIONS(547), 1,
      sym_list_item_mark,
  [1419] = 2,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(551), 1,
      sym_list_item_mark,
  [1426] = 2,
    ACTIONS(483), 1,
      aux_sym_audio_url_token1,
    STATE(137), 1,
      sym_audio_title,
  [1433] = 2,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    ACTIONS(555), 1,
      sym_footnote_content,
  [1440] = 2,
    ACTIONS(557), 1,
      aux_sym_audio_url_token1,
    STATE(110), 1,
      sym_audio_title,
  [1447] = 2,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    ACTIONS(561), 1,
      sym_kbd_content,
  [1454] = 1,
    ACTIONS(563), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1459] = 2,
    ACTIONS(483), 1,
      aux_sym_audio_url_token1,
    STATE(136), 1,
      sym_audio_title,
  [1466] = 2,
    ACTIONS(565), 1,
      aux_sym_block_title_token1,
    STATE(100), 1,
      sym_list_item_content,
  [1473] = 1,
    ACTIONS(567), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [1478] = 1,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
  [1482] = 1,
    ACTIONS(571), 1,
      anon_sym_RBRACK_LF,
  [1486] = 1,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
  [1490] = 1,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
  [1494] = 1,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
  [1498] = 1,
    ACTIONS(579), 1,
      anon_sym_COLON_COLON,
  [1502] = 1,
    ACTIONS(581), 1,
      aux_sym_url_token2,
  [1506] = 1,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
  [1510] = 1,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
  [1514] = 1,
    ACTIONS(587), 1,
      anon_sym_RBRACK,
  [1518] = 1,
    ACTIONS(589), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1522] = 1,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
  [1526] = 1,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
  [1530] = 1,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
  [1534] = 1,
    ACTIONS(597), 1,
      aux_sym_comment_token1,
  [1538] = 1,
    ACTIONS(599), 1,
      aux_sym_block_title_token1,
  [1542] = 1,
    ACTIONS(601), 1,
      anon_sym_,
  [1546] = 1,
    ACTIONS(603), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1550] = 1,
    ACTIONS(605), 1,
      anon_sym_LBRACK,
  [1554] = 1,
    ACTIONS(607), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1558] = 1,
    ACTIONS(609), 1,
      aux_sym__note_line_token1,
  [1562] = 1,
    ACTIONS(611), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1566] = 1,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
  [1570] = 1,
    ACTIONS(615), 1,
      aux_sym__note_line_token1,
  [1574] = 1,
    ACTIONS(617), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1578] = 1,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
  [1582] = 1,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
  [1586] = 1,
    ACTIONS(623), 1,
      anon_sym_GT_GT,
  [1590] = 1,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
  [1594] = 1,
    ACTIONS(627), 1,
      aux_sym__note_line_token1,
  [1598] = 1,
    ACTIONS(629), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1602] = 1,
    ACTIONS(631), 1,
      aux_sym__note_line_token1,
  [1606] = 1,
    ACTIONS(633), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1610] = 1,
    ACTIONS(635), 1,
      aux_sym__note_line_token1,
  [1614] = 1,
    ACTIONS(637), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1618] = 1,
    ACTIONS(639), 1,
      anon_sym_RBRACK_LF,
  [1622] = 1,
    ACTIONS(641), 1,
      anon_sym_RBRACK_LF,
  [1626] = 1,
    ACTIONS(643), 1,
      aux_sym__note_line_token1,
  [1630] = 1,
    ACTIONS(563), 1,
      anon_sym_RBRACK_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(45)] = 0,
  [SMALL_STATE(46)] = 86,
  [SMALL_STATE(47)] = 172,
  [SMALL_STATE(48)] = 225,
  [SMALL_STATE(49)] = 278,
  [SMALL_STATE(50)] = 328,
  [SMALL_STATE(51)] = 378,
  [SMALL_STATE(52)] = 428,
  [SMALL_STATE(53)] = 478,
  [SMALL_STATE(54)] = 528,
  [SMALL_STATE(55)] = 578,
  [SMALL_STATE(56)] = 628,
  [SMALL_STATE(57)] = 678,
  [SMALL_STATE(58)] = 728,
  [SMALL_STATE(59)] = 778,
  [SMALL_STATE(60)] = 828,
  [SMALL_STATE(61)] = 878,
  [SMALL_STATE(62)] = 928,
  [SMALL_STATE(63)] = 978,
  [SMALL_STATE(64)] = 1072,
  [SMALL_STATE(65)] = 1094,
  [SMALL_STATE(66)] = 1110,
  [SMALL_STATE(67)] = 1121,
  [SMALL_STATE(68)] = 1132,
  [SMALL_STATE(69)] = 1145,
  [SMALL_STATE(70)] = 1155,
  [SMALL_STATE(71)] = 1165,
  [SMALL_STATE(72)] = 1175,
  [SMALL_STATE(73)] = 1181,
  [SMALL_STATE(74)] = 1191,
  [SMALL_STATE(75)] = 1201,
  [SMALL_STATE(76)] = 1211,
  [SMALL_STATE(77)] = 1221,
  [SMALL_STATE(78)] = 1231,
  [SMALL_STATE(79)] = 1241,
  [SMALL_STATE(80)] = 1251,
  [SMALL_STATE(81)] = 1261,
  [SMALL_STATE(82)] = 1271,
  [SMALL_STATE(83)] = 1281,
  [SMALL_STATE(84)] = 1291,
  [SMALL_STATE(85)] = 1301,
  [SMALL_STATE(86)] = 1311,
  [SMALL_STATE(87)] = 1321,
  [SMALL_STATE(88)] = 1331,
  [SMALL_STATE(89)] = 1341,
  [SMALL_STATE(90)] = 1351,
  [SMALL_STATE(91)] = 1358,
  [SMALL_STATE(92)] = 1365,
  [SMALL_STATE(93)] = 1372,
  [SMALL_STATE(94)] = 1379,
  [SMALL_STATE(95)] = 1386,
  [SMALL_STATE(96)] = 1391,
  [SMALL_STATE(97)] = 1398,
  [SMALL_STATE(98)] = 1405,
  [SMALL_STATE(99)] = 1412,
  [SMALL_STATE(100)] = 1419,
  [SMALL_STATE(101)] = 1426,
  [SMALL_STATE(102)] = 1433,
  [SMALL_STATE(103)] = 1440,
  [SMALL_STATE(104)] = 1447,
  [SMALL_STATE(105)] = 1454,
  [SMALL_STATE(106)] = 1459,
  [SMALL_STATE(107)] = 1466,
  [SMALL_STATE(108)] = 1473,
  [SMALL_STATE(109)] = 1478,
  [SMALL_STATE(110)] = 1482,
  [SMALL_STATE(111)] = 1486,
  [SMALL_STATE(112)] = 1490,
  [SMALL_STATE(113)] = 1494,
  [SMALL_STATE(114)] = 1498,
  [SMALL_STATE(115)] = 1502,
  [SMALL_STATE(116)] = 1506,
  [SMALL_STATE(117)] = 1510,
  [SMALL_STATE(118)] = 1514,
  [SMALL_STATE(119)] = 1518,
  [SMALL_STATE(120)] = 1522,
  [SMALL_STATE(121)] = 1526,
  [SMALL_STATE(122)] = 1530,
  [SMALL_STATE(123)] = 1534,
  [SMALL_STATE(124)] = 1538,
  [SMALL_STATE(125)] = 1542,
  [SMALL_STATE(126)] = 1546,
  [SMALL_STATE(127)] = 1550,
  [SMALL_STATE(128)] = 1554,
  [SMALL_STATE(129)] = 1558,
  [SMALL_STATE(130)] = 1562,
  [SMALL_STATE(131)] = 1566,
  [SMALL_STATE(132)] = 1570,
  [SMALL_STATE(133)] = 1574,
  [SMALL_STATE(134)] = 1578,
  [SMALL_STATE(135)] = 1582,
  [SMALL_STATE(136)] = 1586,
  [SMALL_STATE(137)] = 1590,
  [SMALL_STATE(138)] = 1594,
  [SMALL_STATE(139)] = 1598,
  [SMALL_STATE(140)] = 1602,
  [SMALL_STATE(141)] = 1606,
  [SMALL_STATE(142)] = 1610,
  [SMALL_STATE(143)] = 1614,
  [SMALL_STATE(144)] = 1618,
  [SMALL_STATE(145)] = 1622,
  [SMALL_STATE(146)] = 1626,
  [SMALL_STATE(147)] = 1630,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(143),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(141),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(138),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(133),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(132),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(130),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(46),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(104),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(102),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(47),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(90),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(98),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(97),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(96),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(51),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 5),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 5),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 5),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(125),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(79),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_content, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(87),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [593] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
