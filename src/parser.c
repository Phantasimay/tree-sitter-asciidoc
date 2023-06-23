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
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 58
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_DOT = 1,
  aux_sym_block_title_token1 = 2,
  aux_sym_title0_token1 = 3,
  sym_title1 = 4,
  sym_title2 = 5,
  sym_title3 = 6,
  sym_title4 = 7,
  sym_title5 = 8,
  anon_sym_LT = 9,
  anon_sym_GT = 10,
  anon_sym_LF = 11,
  sym_name = 12,
  sym_email = 13,
  anon_sym_doctype = 14,
  anon_sym_article = 15,
  anon_sym_book = 16,
  anon_sym_manpage = 17,
  anon_sym_inline = 18,
  sym_attr_mark = 19,
  aux_sym_attr_name_token1 = 20,
  anon_sym_url_DASHrepo = 21,
  aux_sym_attr_value_token1 = 22,
  anon_sym_NOTE_COLON = 23,
  anon_sym_LBRACKNOTE_RBRACK_LF = 24,
  anon_sym_DASH_DASH_DASH_DASH_LF = 25,
  aux_sym__note_block_token1 = 26,
  anon_sym_TIP_COLON = 27,
  anon_sym_LBRACKTIP_RBRACK_LF = 28,
  anon_sym_IMPORTANT_COLON = 29,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 30,
  anon_sym_CAUTION_COLON = 31,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 32,
  anon_sym_WARNING_COLON = 33,
  anon_sym_LBRACKWARNING_RBRACK_LF = 34,
  anon_sym_ = 35,
  sym__unordered_list_mark = 36,
  aux_sym__ordered_list_mark_token1 = 37,
  aux_sym__ordered_list_mark_token2 = 38,
  aux_sym__ordered_list_mark_token3 = 39,
  sym__checklist_mark = 40,
  aux_sym_code_token1 = 41,
  anon_sym_RBRACK_LF = 42,
  anon_sym_SLASH_SLASH = 43,
  aux_sym_comment_token1 = 44,
  aux_sym_line_breaks_token1 = 45,
  anon_sym_LT_LT_LT_LF_LF = 46,
  anon_sym_image_COLON_COLON = 47,
  anon_sym_LBRACK = 48,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 49,
  anon_sym_COLON_COLON = 50,
  anon_sym_audio_COLON_COLON = 51,
  anon_sym_RBRACK = 52,
  aux_sym_audio_url_token1 = 53,
  anon_sym_video_COLON_COLON = 54,
  anon_sym_LF_LF = 55,
  anon_sym_kbd_COLON_LBRACK = 56,
  sym_kbd_content = 57,
  anon_sym_footnote_COLON_LBRACK = 58,
  sym_footnote_content = 59,
  aux_sym_url_token1 = 60,
  aux_sym_url_token2 = 61,
  anon_sym_LT_LT = 62,
  anon_sym_COMMA = 63,
  anon_sym_GT_GT = 64,
  anon_sym_xref_COLON = 65,
  sym_emphasis = 66,
  sym_strong = 67,
  sym_monospace = 68,
  sym_highlight = 69,
  sym_superscript = 70,
  sym_subscript = 71,
  anon_sym_PLUS_PLUS_PLUS = 72,
  anon_sym_pass_COLON_LBRACK = 73,
  anon_sym_LBRACEblank_RBRACE = 74,
  anon_sym_LBRACEempty_RBRACE = 75,
  anon_sym_LBRACEsp_RBRACE = 76,
  anon_sym_LBRACEnbsp_RBRACE = 77,
  anon_sym_LBRACEzwsp_RBRACE = 78,
  anon_sym_LBRACEwj_RBRACE = 79,
  anon_sym_LBRACEapos_RBRACE = 80,
  anon_sym_LBRACEquot_RBRACE = 81,
  anon_sym_LBRACElsquo_RBRACE = 82,
  anon_sym_LBRACErsquo_RBRACE = 83,
  anon_sym_LBRACEldquo_RBRACE = 84,
  anon_sym_LBRACErdquo_RBRACE = 85,
  anon_sym_LBRACEdeg_RBRACE = 86,
  anon_sym_LBRACEplus_RBRACE = 87,
  anon_sym_LBRACEbrvbar_RBRACE = 88,
  anon_sym_LBRACEvbar_RBRACE = 89,
  anon_sym_LBRACEamp_RBRACE = 90,
  anon_sym_LBRACElt_RBRACE = 91,
  anon_sym_LBRACEgt_RBRACE = 92,
  anon_sym_LBRACEstartsb_RBRACE = 93,
  anon_sym_LBRACEendsb_RBRACE = 94,
  anon_sym_LBRACEcaret_RBRACE = 95,
  anon_sym_LBRACEasterisk_RBRACE = 96,
  anon_sym_LBRACEtilde_RBRACE = 97,
  anon_sym_LBRACEbackslash_RBRACE = 98,
  anon_sym_LBRACEbacktick_RBRACE = 99,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 100,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 101,
  anon_sym_LBRACEcpp_RBRACE = 102,
  anon_sym_LBRACEpp_RBRACE = 103,
  sym_document = 104,
  sym__block = 105,
  sym__titled_block = 106,
  sym_block_title = 107,
  sym_title0 = 108,
  sym_author_info = 109,
  sym__doctype = 110,
  sym__normal_doc_attr = 111,
  sym_doc_attr = 112,
  sym_attr_name = 113,
  sym_attr_value = 114,
  sym__admonitions = 115,
  sym_note = 116,
  sym__note_line = 117,
  sym__note_block = 118,
  sym_tip = 119,
  sym__tip = 120,
  sym__tip_block = 121,
  sym_important = 122,
  sym__important = 123,
  sym__important_block = 124,
  sym_caution = 125,
  sym__caution = 126,
  sym__caution_block = 127,
  sym_warning = 128,
  sym__warning = 129,
  sym__warning_block = 130,
  sym_list = 131,
  sym_list_item = 132,
  sym_list_item_mark = 133,
  sym_list_item_content = 134,
  sym__ordered_list_mark = 135,
  sym_code = 136,
  sym_code_language = 137,
  sym_code_content = 138,
  sym_comment = 139,
  sym_line_breaks = 140,
  sym_page_breaks = 141,
  sym_image = 142,
  sym_table = 143,
  sym_table_start = 144,
  sym_table_content = 145,
  sym_table_end = 146,
  sym_description_list = 147,
  sym_audio = 148,
  sym_audio_url = 149,
  sym_audio_title = 150,
  sym_video = 151,
  sym_paragraph = 152,
  sym__inline_element = 153,
  sym_kbd = 154,
  sym_footnote = 155,
  sym_url = 156,
  sym_xref = 157,
  sym__inline_xref = 158,
  sym__xref = 159,
  sym_xref_url = 160,
  sym_passthrough = 161,
  sym__passthrough_plus = 162,
  sym__passthrough_cmd = 163,
  sym_passthrough_content = 164,
  sym_replacement = 165,
  aux_sym_document_repeat1 = 166,
  aux_sym_title0_repeat1 = 167,
  aux_sym__note_block_repeat1 = 168,
  aux_sym_list_repeat1 = 169,
  aux_sym_table_content_repeat1 = 170,
  aux_sym_paragraph_repeat1 = 171,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [aux_sym_block_title_token1] = "block_title_token1",
  [aux_sym_title0_token1] = "title0_token1",
  [sym_title1] = "title1",
  [sym_title2] = "title2",
  [sym_title3] = "title3",
  [sym_title4] = "title4",
  [sym_title5] = "title5",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LF] = "\n",
  [sym_name] = "name",
  [sym_email] = "email",
  [anon_sym_doctype] = "attr_name",
  [anon_sym_article] = "attr_value",
  [anon_sym_book] = "attr_value",
  [anon_sym_manpage] = "attr_value",
  [anon_sym_inline] = "attr_value",
  [sym_attr_mark] = "attr_mark",
  [aux_sym_attr_name_token1] = "attr_name_token1",
  [anon_sym_url_DASHrepo] = "url-repo",
  [aux_sym_attr_value_token1] = "attr_value_token1",
  [anon_sym_NOTE_COLON] = "NOTE: ",
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
  [anon_sym_] = " ",
  [sym__unordered_list_mark] = "_unordered_list_mark",
  [aux_sym__ordered_list_mark_token1] = "_ordered_list_mark_token1",
  [aux_sym__ordered_list_mark_token2] = "_ordered_list_mark_token2",
  [aux_sym__ordered_list_mark_token3] = "_ordered_list_mark_token3",
  [sym__checklist_mark] = "_checklist_mark",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RBRACK_LF] = "]\n",
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
  [sym_title0] = "title0",
  [sym_author_info] = "author_info",
  [sym__doctype] = "_doctype",
  [sym__normal_doc_attr] = "_normal_doc_attr",
  [sym_doc_attr] = "doc_attr",
  [sym_attr_name] = "attr_name",
  [sym_attr_value] = "attr_value",
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
  [sym_list_item_mark] = "list_item_mark",
  [sym_list_item_content] = "list_item_content",
  [sym__ordered_list_mark] = "_ordered_list_mark",
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
  [aux_sym_title0_repeat1] = "title0_repeat1",
  [aux_sym__note_block_repeat1] = "_note_block_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_table_content_repeat1] = "table_content_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_block_title_token1] = aux_sym_block_title_token1,
  [aux_sym_title0_token1] = aux_sym_title0_token1,
  [sym_title1] = sym_title1,
  [sym_title2] = sym_title2,
  [sym_title3] = sym_title3,
  [sym_title4] = sym_title4,
  [sym_title5] = sym_title5,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LF] = anon_sym_LF,
  [sym_name] = sym_name,
  [sym_email] = sym_email,
  [anon_sym_doctype] = sym_attr_name,
  [anon_sym_article] = sym_attr_value,
  [anon_sym_book] = sym_attr_value,
  [anon_sym_manpage] = sym_attr_value,
  [anon_sym_inline] = sym_attr_value,
  [sym_attr_mark] = sym_attr_mark,
  [aux_sym_attr_name_token1] = aux_sym_attr_name_token1,
  [anon_sym_url_DASHrepo] = anon_sym_url_DASHrepo,
  [aux_sym_attr_value_token1] = aux_sym_attr_value_token1,
  [anon_sym_NOTE_COLON] = anon_sym_NOTE_COLON,
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
  [anon_sym_] = anon_sym_,
  [sym__unordered_list_mark] = sym__unordered_list_mark,
  [aux_sym__ordered_list_mark_token1] = aux_sym__ordered_list_mark_token1,
  [aux_sym__ordered_list_mark_token2] = aux_sym__ordered_list_mark_token2,
  [aux_sym__ordered_list_mark_token3] = aux_sym__ordered_list_mark_token3,
  [sym__checklist_mark] = sym__checklist_mark,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RBRACK_LF] = anon_sym_RBRACK_LF,
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
  [sym_title0] = sym_title0,
  [sym_author_info] = sym_author_info,
  [sym__doctype] = sym__doctype,
  [sym__normal_doc_attr] = sym__normal_doc_attr,
  [sym_doc_attr] = sym_doc_attr,
  [sym_attr_name] = sym_attr_name,
  [sym_attr_value] = sym_attr_value,
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
  [sym_list_item_mark] = sym_list_item_mark,
  [sym_list_item_content] = sym_list_item_content,
  [sym__ordered_list_mark] = sym__ordered_list_mark,
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
  [aux_sym_title0_repeat1] = aux_sym_title0_repeat1,
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
  [aux_sym_title0_token1] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_email] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_article] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_book] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_manpage] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_mark] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attr_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_url_DASHrepo] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attr_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NOTE_COLON] = {
    .visible = true,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__unordered_list_mark] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__ordered_list_mark_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ordered_list_mark_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ordered_list_mark_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__checklist_mark] = {
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
  [sym_title0] = {
    .visible = true,
    .named = true,
  },
  [sym_author_info] = {
    .visible = true,
    .named = true,
  },
  [sym__doctype] = {
    .visible = false,
    .named = true,
  },
  [sym__normal_doc_attr] = {
    .visible = false,
    .named = true,
  },
  [sym_doc_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
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
  [sym_list_item_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item_content] = {
    .visible = true,
    .named = true,
  },
  [sym__ordered_list_mark] = {
    .visible = false,
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
  [aux_sym_title0_repeat1] = {
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
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_title, 0, .inherited = true},
    {field_url, 0, .inherited = true},
  [2] =
    {field_url, 1},
  [3] =
    {field_language, 1},
  [4] =
    {field_title, 3},
    {field_url, 1},
  [6] =
    {field_title, 2},
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
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 125,
};

static inline bool aux_sym__ordered_list_mark_token3_character_set_1(int32_t c) {
  return (c < 3655
    ? (c < 2689
      ? (c < 2137
        ? (c < 1759
          ? (c < 1476
            ? (c < 1425
              ? (c < 768
                ? c == 0
                : (c <= 879 || (c >= 1155 && c <= 1161)))
              : (c <= 1469 || (c < 1473
                ? c == 1471
                : c <= 1474)))
            : (c <= 1477 || (c < 1611
              ? (c < 1552
                ? c == 1479
                : c <= 1562)
              : (c <= 1631 || (c < 1750
                ? c == 1648
                : c <= 1756)))))
          : (c <= 1764 || (c < 2027
            ? (c < 1809
              ? (c < 1770
                ? (c >= 1767 && c <= 1768)
                : c <= 1773)
              : (c <= 1809 || (c < 1958
                ? (c >= 1840 && c <= 1866)
                : c <= 1968)))
            : (c <= 2035 || (c < 2075
              ? (c < 2070
                ? c == 2045
                : c <= 2073)
              : (c <= 2083 || (c < 2089
                ? (c >= 2085 && c <= 2087)
                : c <= 2093)))))))
        : (c <= 2139 || (c < 2507
          ? (c < 2385
            ? (c < 2275
              ? (c < 2250
                ? (c >= 2200 && c <= 2207)
                : c <= 2273)
              : (c <= 2307 || (c < 2366
                ? (c >= 2362 && c <= 2364)
                : c <= 2383)))
            : (c <= 2391 || (c < 2492
              ? (c < 2433
                ? (c >= 2402 && c <= 2403)
                : c <= 2435)
              : (c <= 2492 || (c < 2503
                ? (c >= 2494 && c <= 2500)
                : c <= 2504)))))
          : (c <= 2509 || (c < 2622
            ? (c < 2558
              ? (c < 2530
                ? c == 2519
                : c <= 2531)
              : (c <= 2558 || (c < 2620
                ? (c >= 2561 && c <= 2563)
                : c <= 2620)))
            : (c <= 2626 || (c < 2641
              ? (c < 2635
                ? (c >= 2631 && c <= 2632)
                : c <= 2637)
              : (c <= 2641 || (c < 2677
                ? (c >= 2672 && c <= 2673)
                : c <= 2677)))))))))
      : (c <= 2691 || (c < 3157
        ? (c < 2901
          ? (c < 2810
            ? (c < 2759
              ? (c < 2750
                ? c == 2748
                : c <= 2757)
              : (c <= 2761 || (c < 2786
                ? (c >= 2763 && c <= 2765)
                : c <= 2787)))
            : (c <= 2815 || (c < 2878
              ? (c < 2876
                ? (c >= 2817 && c <= 2819)
                : c <= 2876)
              : (c <= 2884 || (c < 2891
                ? (c >= 2887 && c <= 2888)
                : c <= 2893)))))
          : (c <= 2903 || (c < 3031
            ? (c < 3006
              ? (c < 2946
                ? (c >= 2914 && c <= 2915)
                : c <= 2946)
              : (c <= 3010 || (c < 3018
                ? (c >= 3014 && c <= 3016)
                : c <= 3021)))
            : (c <= 3031 || (c < 3134
              ? (c < 3132
                ? (c >= 3072 && c <= 3076)
                : c <= 3132)
              : (c <= 3140 || (c < 3146
                ? (c >= 3142 && c <= 3144)
                : c <= 3149)))))))
        : (c <= 3158 || (c < 3398
          ? (c < 3274
            ? (c < 3260
              ? (c < 3201
                ? (c >= 3170 && c <= 3171)
                : c <= 3203)
              : (c <= 3260 || (c < 3270
                ? (c >= 3262 && c <= 3268)
                : c <= 3272)))
            : (c <= 3277 || (c < 3328
              ? (c < 3298
                ? (c >= 3285 && c <= 3286)
                : c <= 3299)
              : (c <= 3331 || (c < 3390
                ? (c >= 3387 && c <= 3388)
                : c <= 3396)))))
          : (c <= 3400 || (c < 3535
            ? (c < 3426
              ? (c < 3415
                ? (c >= 3402 && c <= 3405)
                : c <= 3415)
              : (c <= 3427 || (c < 3530
                ? (c >= 3457 && c <= 3459)
                : c <= 3530)))
            : (c <= 3540 || (c < 3570
              ? (c < 3544
                ? c == 3542
                : c <= 3551)
              : (c <= 3571 || (c < 3636
                ? c == 3633
                : c <= 3642)))))))))))
    : (c <= 3662 || (c < 7380
      ? (c < 5938
        ? (c < 4038
          ? (c < 3897
            ? (c < 3864
              ? (c < 3764
                ? c == 3761
                : (c <= 3772 || (c >= 3784 && c <= 3789)))
              : (c <= 3865 || (c < 3895
                ? c == 3893
                : c <= 3895)))
            : (c <= 3897 || (c < 3974
              ? (c < 3953
                ? (c >= 3902 && c <= 3903)
                : c <= 3972)
              : (c <= 3975 || (c < 3993
                ? (c >= 3981 && c <= 3991)
                : c <= 4028)))))
          : (c <= 4038 || (c < 4209
            ? (c < 4190
              ? (c < 4182
                ? (c >= 4139 && c <= 4158)
                : c <= 4185)
              : (c <= 4192 || (c < 4199
                ? (c >= 4194 && c <= 4196)
                : c <= 4205)))
            : (c <= 4212 || (c < 4250
              ? (c < 4239
                ? (c >= 4226 && c <= 4237)
                : c <= 4239)
              : (c <= 4253 || (c < 5906
                ? (c >= 4957 && c <= 4959)
                : c <= 5909)))))))
        : (c <= 5940 || (c < 6741
          ? (c < 6159
            ? (c < 6068
              ? (c < 6002
                ? (c >= 5970 && c <= 5971)
                : c <= 6003)
              : (c <= 6099 || (c < 6155
                ? c == 6109
                : c <= 6157)))
            : (c <= 6159 || (c < 6432
              ? (c < 6313
                ? (c >= 6277 && c <= 6278)
                : c <= 6313)
              : (c <= 6443 || (c < 6679
                ? (c >= 6448 && c <= 6459)
                : c <= 6683)))))
          : (c <= 6750 || (c < 7019
            ? (c < 6832
              ? (c < 6783
                ? (c >= 6752 && c <= 6780)
                : c <= 6783)
              : (c <= 6862 || (c < 6964
                ? (c >= 6912 && c <= 6916)
                : c <= 6980)))
            : (c <= 7027 || (c < 7142
              ? (c < 7073
                ? (c >= 7040 && c <= 7042)
                : c <= 7085)
              : (c <= 7155 || (c < 7376
                ? (c >= 7204 && c <= 7223)
                : c <= 7378)))))))))
      : (c <= 7400 || (c < 43302
        ? (c < 42612
          ? (c < 11503
            ? (c < 7415
              ? (c < 7412
                ? c == 7405
                : c <= 7412)
              : (c <= 7417 || (c < 8400
                ? (c >= 7616 && c <= 7679)
                : c <= 8432)))
            : (c <= 11505 || (c < 12330
              ? (c < 11744
                ? c == 11647
                : c <= 11775)
              : (c <= 12335 || (c < 42607
                ? (c >= 12441 && c <= 12442)
                : c <= 42610)))))
          : (c <= 42621 || (c < 43043
            ? (c < 43010
              ? (c < 42736
                ? (c >= 42654 && c <= 42655)
                : c <= 42737)
              : (c <= 43010 || (c < 43019
                ? c == 43014
                : c <= 43019)))
            : (c <= 43047 || (c < 43188
              ? (c < 43136
                ? c == 43052
                : c <= 43137)
              : (c <= 43205 || (c < 43263
                ? (c >= 43232 && c <= 43249)
                : c <= 43263)))))))
        : (c <= 43309 || (c < 43710
          ? (c < 43587
            ? (c < 43443
              ? (c < 43392
                ? (c >= 43335 && c <= 43347)
                : c <= 43395)
              : (c <= 43456 || (c < 43561
                ? c == 43493
                : c <= 43574)))
            : (c <= 43587 || (c < 43696
              ? (c < 43643
                ? (c >= 43596 && c <= 43597)
                : c <= 43645)
              : (c <= 43696 || (c < 43703
                ? (c >= 43698 && c <= 43700)
                : c <= 43704)))))
          : (c <= 43711 || (c < 64286
            ? (c < 43765
              ? (c < 43755
                ? c == 43713
                : c <= 43759)
              : (c <= 43766 || (c < 44012
                ? (c >= 44003 && c <= 44010)
                : c <= 44013)))
            : (c <= 64286 || (c < 66045
              ? (c < 65056
                ? (c >= 65024 && c <= 65039)
                : c <= 65071)
              : (c <= 66045 || (c < 66422
                ? c == 66272
                : c <= 66426)))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(356);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '*') ADVANCE(716);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(768);
      if (lookahead == '-') ADVANCE(723);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '0') ADVANCE(544);
      if (lookahead == ':') ADVANCE(562);
      if (lookahead == '<') ADVANCE(381);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(383);
      if (lookahead == 'C') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(474);
      if (lookahead == 'N') ADVANCE(479);
      if (lookahead == 'T') ADVANCE(471);
      if (lookahead == 'W') ADVANCE(467);
      if (lookahead == '[') ADVANCE(747);
      if (lookahead == ']') ADVANCE(752);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == '_') ADVANCE(549);
      if (lookahead == '`') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(534);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'd') ADVANCE(524);
      if (lookahead == 'f') ADVANCE(528);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead == 'k') ADVANCE(495);
      if (lookahead == 'm') ADVANCE(491);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == 'u') ADVANCE(536);
      if (lookahead == 'v') ADVANCE(513);
      if (lookahead == 'x') ADVANCE(535);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '|') ADVANCE(142);
      if (lookahead == '~') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(743);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(744);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(749);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(738);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(705);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(705);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(700);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(700);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(709);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(709);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(711);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(711);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(707);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(707);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(755);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '[') ADVANCE(748);
      if (lookahead == '^') ADVANCE(103);
      if (lookahead == '_') ADVANCE(591);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'k') ADVANCE(618);
      if (lookahead == 'p') ADVANCE(616);
      if (lookahead == 'x') ADVANCE(635);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '~') ADVANCE(353);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '*') ADVANCE(717);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead == '.') ADVANCE(725);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '|') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(701);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(701);
      if (lookahead != 0) ADVANCE(24);
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
      if (lookahead == '\n') ADVANCE(702);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(702);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(702);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(702);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(703);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '<') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '[') ADVANCE(748);
      if (lookahead == '^') ADVANCE(103);
      if (lookahead == '_') ADVANCE(591);
      if (lookahead == '`') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'k') ADVANCE(618);
      if (lookahead == 'p') ADVANCE(616);
      if (lookahead == 'x') ADVANCE(635);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '~') ADVANCE(353);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0) ADVANCE(698);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0) ADVANCE(698);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(2);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(369);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(369);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(739);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(371);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(375);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(704);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(704);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(377);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(699);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(699);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(708);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(708);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(710);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(710);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(706);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(706);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(750);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '*') ADVANCE(715);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(544);
      if (lookahead == ':') ADVANCE(563);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'I') ADVANCE(404);
      if (lookahead == 'N') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(401);
      if (lookahead == 'W') ADVANCE(397);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == '_') ADVANCE(547);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 'k') ADVANCE(423);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 'v') ADVANCE(434);
      if (lookahead == 'x') ADVANCE(442);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '~') ADVANCE(83);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '*') ADVANCE(715);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(587);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'I') ADVANCE(568);
      if (lookahead == 'N') ADVANCE(569);
      if (lookahead == 'T') ADVANCE(567);
      if (lookahead == 'W') ADVANCE(566);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'f') ADVANCE(574);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'k') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(572);
      if (lookahead == 'x') ADVANCE(575);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '~') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(775);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(775);
      if (lookahead == ']') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(774);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(717);
      if (lookahead == '-') ADVANCE(721);
      if (lookahead == '.') ADVANCE(725);
      if (lookahead == '0') ADVANCE(587);
      if (lookahead == 'C') ADVANCE(578);
      if (lookahead == 'I') ADVANCE(581);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'T') ADVANCE(580);
      if (lookahead == 'W') ADVANCE(579);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == 'v') ADVANCE(583);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == '+') ADVANCE(782);
      END_STATE();
    case 61:
      if (lookahead == '+') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '.') ADVANCE(727);
      END_STATE();
    case 63:
      if (lookahead == ',') ADVANCE(768);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '[') ADVANCE(746);
      if (lookahead == ']') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(687);
      if (lookahead == 'u') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 64:
      if (lookahead == ',') ADVANCE(737);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == 'W') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 65:
      if (lookahead == ',') ADVANCE(737);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'C') ADVANCE(146);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == 'W') ADVANCE(147);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(727);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == '<') ADVANCE(767);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == '>') ADVANCE(769);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'q') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == 'v') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead == 'z') ADVANCE(309);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(730);
      if (lookahead == ':') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(732);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(764);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(761);
      if (lookahead == '^') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(762);
      if (lookahead == '_') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(763);
      if (lookahead == '`') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '^') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '_') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '`') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 92:
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(751);
      END_STATE();
    case 94:
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(745);
      END_STATE();
    case 95:
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == ':') ADVANCE(754);
      END_STATE();
    case 96:
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '[') ADVANCE(756);
      END_STATE();
    case 97:
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '[') ADVANCE(783);
      END_STATE();
    case 98:
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '[') ADVANCE(759);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(751);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(745);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(754);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '^') ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '_') ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '`') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(131);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(125);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(118);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'G') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'M') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ']') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ']') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ']') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ']') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 139:
      if (lookahead == '<') ADVANCE(766);
      END_STATE();
    case 140:
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 142:
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 143:
      if (lookahead == '>') ADVANCE(769);
      END_STATE();
    case 144:
      if (lookahead == '>') ADVANCE(382);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'b') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(144)
      END_STATE();
    case 145:
      if (lookahead == '@') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      if (lookahead == 'A') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'A') ADVANCE(164);
      END_STATE();
    case 148:
      if (lookahead == 'A') ADVANCE(157);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(180);
      END_STATE();
    case 150:
      if (lookahead == 'G') ADVANCE(182);
      END_STATE();
    case 151:
      if (lookahead == 'I') ADVANCE(163);
      END_STATE();
    case 152:
      if (lookahead == 'I') ADVANCE(155);
      END_STATE();
    case 153:
      if (lookahead == 'I') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'M') ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'N') ADVANCE(150);
      END_STATE();
    case 156:
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 'N') ADVANCE(169);
      END_STATE();
    case 158:
      if (lookahead == 'N') ADVANCE(181);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(166);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(165);
      END_STATE();
    case 161:
      if (lookahead == 'O') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == 'P') ADVANCE(160);
      END_STATE();
    case 163:
      if (lookahead == 'P') ADVANCE(179);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(156);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(168);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(149);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(153);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'U') ADVANCE(167);
      END_STATE();
    case 171:
      if (lookahead == '[') ADVANCE(756);
      END_STATE();
    case 172:
      if (lookahead == '[') ADVANCE(783);
      END_STATE();
    case 173:
      if (lookahead == '[') ADVANCE(759);
      END_STATE();
    case 174:
      if (lookahead == '[') ADVANCE(342);
      END_STATE();
    case 175:
      if (lookahead == '[') ADVANCE(746);
      if (lookahead == ']') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(753);
      END_STATE();
    case 176:
      if (lookahead == ']') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      END_STATE();
    case 177:
      if (lookahead == ']') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(760);
      END_STATE();
    case 178:
      if (lookahead == ']') ADVANCE(734);
      END_STATE();
    case 179:
      if (lookahead == ']') ADVANCE(5);
      END_STATE();
    case 180:
      if (lookahead == ']') ADVANCE(7);
      END_STATE();
    case 181:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 182:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 183:
      if (lookahead == ']') ADVANCE(13);
      END_STATE();
    case 184:
      if (lookahead == '^') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == '_') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 186:
      if (lookahead == '`') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == 'q') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == 'v') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead == 'z') ADVANCE(309);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(293);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(328);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(335);
      END_STATE();
    case 200:
      if (lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 201:
      if (lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 222:
      if (lookahead == 'h') ADVANCE(338);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'w') ADVANCE(251);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 229:
      if (lookahead == 'j') ADVANCE(315);
      END_STATE();
    case 230:
      if (lookahead == 'k') ADVANCE(285);
      END_STATE();
    case 231:
      if (lookahead == 'k') ADVANCE(556);
      END_STATE();
    case 232:
      if (lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 233:
      if (lookahead == 'k') ADVANCE(336);
      END_STATE();
    case 234:
      if (lookahead == 'k') ADVANCE(337);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 242:
      if (lookahead == 'm') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 243:
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 244:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 265:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 267:
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 268:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 269:
      if (lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 270:
      if (lookahead == 'p') ADVANCE(317);
      END_STATE();
    case 271:
      if (lookahead == 'p') ADVANCE(320);
      END_STATE();
    case 272:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 273:
      if (lookahead == 'q') ADVANCE(303);
      END_STATE();
    case 274:
      if (lookahead == 'q') ADVANCE(305);
      END_STATE();
    case 275:
      if (lookahead == 'q') ADVANCE(306);
      END_STATE();
    case 276:
      if (lookahead == 'q') ADVANCE(307);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 308:
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 309:
      if (lookahead == 'w') ADVANCE(294);
      END_STATE();
    case 310:
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 311:
      if (lookahead == '}') ADVANCE(802);
      END_STATE();
    case 312:
      if (lookahead == '}') ADVANCE(801);
      END_STATE();
    case 313:
      if (lookahead == '}') ADVANCE(813);
      END_STATE();
    case 314:
      if (lookahead == '}') ADVANCE(786);
      END_STATE();
    case 315:
      if (lookahead == '}') ADVANCE(789);
      END_STATE();
    case 316:
      if (lookahead == '}') ADVANCE(800);
      END_STATE();
    case 317:
      if (lookahead == '}') ADVANCE(812);
      END_STATE();
    case 318:
      if (lookahead == '}') ADVANCE(796);
      END_STATE();
    case 319:
      if (lookahead == '}') ADVANCE(790);
      END_STATE();
    case 320:
      if (lookahead == '}') ADVANCE(787);
      END_STATE();
    case 321:
      if (lookahead == '}') ADVANCE(797);
      END_STATE();
    case 322:
      if (lookahead == '}') ADVANCE(791);
      END_STATE();
    case 323:
      if (lookahead == '}') ADVANCE(799);
      END_STATE();
    case 324:
      if (lookahead == '}') ADVANCE(788);
      END_STATE();
    case 325:
      if (lookahead == '}') ADVANCE(784);
      END_STATE();
    case 326:
      if (lookahead == '}') ADVANCE(805);
      END_STATE();
    case 327:
      if (lookahead == '}') ADVANCE(785);
      END_STATE();
    case 328:
      if (lookahead == '}') ADVANCE(804);
      END_STATE();
    case 329:
      if (lookahead == '}') ADVANCE(794);
      END_STATE();
    case 330:
      if (lookahead == '}') ADVANCE(792);
      END_STATE();
    case 331:
      if (lookahead == '}') ADVANCE(795);
      END_STATE();
    case 332:
      if (lookahead == '}') ADVANCE(793);
      END_STATE();
    case 333:
      if (lookahead == '}') ADVANCE(807);
      END_STATE();
    case 334:
      if (lookahead == '}') ADVANCE(798);
      END_STATE();
    case 335:
      if (lookahead == '}') ADVANCE(803);
      END_STATE();
    case 336:
      if (lookahead == '}') ADVANCE(806);
      END_STATE();
    case 337:
      if (lookahead == '}') ADVANCE(809);
      END_STATE();
    case 338:
      if (lookahead == '}') ADVANCE(808);
      END_STATE();
    case 339:
      if (lookahead == '}') ADVANCE(810);
      END_STATE();
    case 340:
      if (lookahead == '}') ADVANCE(811);
      END_STATE();
    case 341:
      if (lookahead == '~') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 342:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(178);
      END_STATE();
    case 343:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(343)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 344:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(344)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 345:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(758);
      END_STATE();
    case 346:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 347:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 348:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 349:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 350:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 351:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 352:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 353:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 354:
      if (eof) ADVANCE(356);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '*') ADVANCE(715);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(544);
      if (lookahead == ':') ADVANCE(563);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'C') ADVANCE(396);
      if (lookahead == 'I') ADVANCE(404);
      if (lookahead == 'N') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(401);
      if (lookahead == 'W') ADVANCE(397);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == '_') ADVANCE(547);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 'k') ADVANCE(423);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 'v') ADVANCE(434);
      if (lookahead == 'x') ADVANCE(442);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '~') ADVANCE(83);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 355:
      if (eof) ADVANCE(356);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '*') ADVANCE(715);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(720);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(587);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'I') ADVANCE(568);
      if (lookahead == 'N') ADVANCE(569);
      if (lookahead == 'T') ADVANCE(567);
      if (lookahead == 'W') ADVANCE(566);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'f') ADVANCE(574);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'k') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(570);
      if (lookahead == 'v') ADVANCE(572);
      if (lookahead == 'x') ADVANCE(575);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '~') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(725);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(749);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(358);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(358);
      if (lookahead == '=') ADVANCE(359);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(358);
      if (lookahead == '=') ADVANCE(360);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(358);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(366);
      if (lookahead == '|') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '|') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(363);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_title1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_title1);
      if (lookahead == '\n') ADVANCE(370);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(374);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_title5);
      if (lookahead == '\n') ADVANCE(378);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(767);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(769);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(696);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(279);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(39);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(96);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(771);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(93);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(452);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'G') ADVANCE(461);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'M') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(458);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(463);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(443);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(433);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(454);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(459);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(441);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(422);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(445);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(446);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(460);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(444);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(453);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 't') ADVANCE(436);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 't') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(92);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(42);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(45);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(47);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(49);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'A') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'E') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'G') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'I') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'I') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'I') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'M') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'O') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'O') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'O') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'P') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'P') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'R') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'T') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'T') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'T') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'T') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'U') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'b') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'k') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(493);
      if (lookahead == 'n') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'r') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 's') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 's') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 't') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 't') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 't') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == 'y') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '_') ADVANCE(546);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == ':') ADVANCE(90);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '.') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_article);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_article);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_book);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_book);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_manpage);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_manpage);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '.') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_attr_mark);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_attr_mark);
      if (lookahead == '.') ADVANCE(727);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(615);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(609);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(608);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'M') ADVANCE(607);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(611);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(636);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(621);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(620);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(617);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(631);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(622);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(619);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(92);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'A') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'A') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'I') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'M') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'O') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'i') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'm') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == 'u') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(731);
      if (lookahead == ':') ADVANCE(90);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '_') ADVANCE(590);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(90);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(39);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(96);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(771);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(93);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(603);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(643);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'G') ADVANCE(651);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(606);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(601);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(598);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(600);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(614);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(648);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(610);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(604);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(605);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(592);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(602);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(613);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(597);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(599);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(596);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(653);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(612);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(636);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(627);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'b') ADVANCE(621);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(628);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(625);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(593);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(626);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(645);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(649);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(634);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(594);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'g') ADVANCE(623);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(633);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(632);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(631);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(638);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(639);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(595);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(650);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(622);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(637);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(644);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 't') ADVANCE(629);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 't') ADVANCE(624);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(45);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(47);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(49);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'A') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'E') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'G') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'I') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'I') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'N') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'N') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'N') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'N') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'O') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'O') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'P') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'P') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'R') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'R') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'T') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'T') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'T') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'T') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'U') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '_') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'a') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'c') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'd') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'd') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'g') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'l') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'p') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 't') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'y') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == '\n') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0) ADVANCE(698);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(719);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(724);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '.') ADVANCE(729);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(724);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(713);
      if (lookahead == '-') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(719);
      if (lookahead == '-') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(722);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(724);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(714);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(722);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(725);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(736);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(741);
      if (lookahead != 0) ADVANCE(742);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(740);
      if (lookahead != 0) ADVANCE(742);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(737);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(753);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(755);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(757);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(758);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(760);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(761);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(764);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(765);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(31);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '_') ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(775);
      if (lookahead == ']') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '`') ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '^') ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 355},
  [2] = {.lex_state = 355},
  [3] = {.lex_state = 355},
  [4] = {.lex_state = 354},
  [5] = {.lex_state = 354},
  [6] = {.lex_state = 354},
  [7] = {.lex_state = 354},
  [8] = {.lex_state = 354},
  [9] = {.lex_state = 354},
  [10] = {.lex_state = 354},
  [11] = {.lex_state = 354},
  [12] = {.lex_state = 354},
  [13] = {.lex_state = 354},
  [14] = {.lex_state = 354},
  [15] = {.lex_state = 354},
  [16] = {.lex_state = 354},
  [17] = {.lex_state = 355},
  [18] = {.lex_state = 355},
  [19] = {.lex_state = 355},
  [20] = {.lex_state = 355},
  [21] = {.lex_state = 355},
  [22] = {.lex_state = 355},
  [23] = {.lex_state = 355},
  [24] = {.lex_state = 355},
  [25] = {.lex_state = 355},
  [26] = {.lex_state = 355},
  [27] = {.lex_state = 355},
  [28] = {.lex_state = 355},
  [29] = {.lex_state = 355},
  [30] = {.lex_state = 355},
  [31] = {.lex_state = 355},
  [32] = {.lex_state = 355},
  [33] = {.lex_state = 355},
  [34] = {.lex_state = 355},
  [35] = {.lex_state = 355},
  [36] = {.lex_state = 355},
  [37] = {.lex_state = 355},
  [38] = {.lex_state = 355},
  [39] = {.lex_state = 355},
  [40] = {.lex_state = 355},
  [41] = {.lex_state = 355},
  [42] = {.lex_state = 355},
  [43] = {.lex_state = 355},
  [44] = {.lex_state = 355},
  [45] = {.lex_state = 355},
  [46] = {.lex_state = 355},
  [47] = {.lex_state = 355},
  [48] = {.lex_state = 355},
  [49] = {.lex_state = 355},
  [50] = {.lex_state = 355},
  [51] = {.lex_state = 355},
  [52] = {.lex_state = 355},
  [53] = {.lex_state = 355},
  [54] = {.lex_state = 355},
  [55] = {.lex_state = 355},
  [56] = {.lex_state = 355},
  [57] = {.lex_state = 355},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 59},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 59},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 63},
  [84] = {.lex_state = 144},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 175},
  [90] = {.lex_state = 175},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 175},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 175},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 63},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 175},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 175},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 175},
  [112] = {.lex_state = 343},
  [113] = {.lex_state = 175},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 176},
  [116] = {.lex_state = 177},
  [117] = {.lex_state = 175},
  [118] = {.lex_state = 343},
  [119] = {.lex_state = 343},
  [120] = {.lex_state = 63},
  [121] = {.lex_state = 343},
  [122] = {.lex_state = 343},
  [123] = {.lex_state = 26},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 63},
  [126] = {.lex_state = 175},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 63},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 355},
  [133] = {.lex_state = 30},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 27},
  [138] = {.lex_state = 144},
  [139] = {.lex_state = 344},
  [140] = {.lex_state = 344},
  [141] = {.lex_state = 355},
  [142] = {.lex_state = 63},
  [143] = {.lex_state = 51},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 16},
  [148] = {.lex_state = 355},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 765},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 16},
  [158] = {.lex_state = 355},
  [159] = {.lex_state = 63},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 144},
  [162] = {.lex_state = 344},
  [163] = {.lex_state = 63},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 355},
  [166] = {.lex_state = 16},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 63},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 63},
  [172] = {.lex_state = 63},
  [173] = {.lex_state = 741},
  [174] = {.lex_state = 16},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 51},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 63},
  [179] = {.lex_state = 27},
  [180] = {.lex_state = 63},
  [181] = {.lex_state = 16},
  [182] = {.lex_state = 144},
  [183] = {.lex_state = 27},
  [184] = {.lex_state = 63},
  [185] = {.lex_state = 27},
  [186] = {.lex_state = 63},
  [187] = {.lex_state = 27},
  [188] = {.lex_state = 63},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 27},
  [191] = {.lex_state = 355},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_title0_token1] = ACTIONS(1),
    [sym_title1] = ACTIONS(1),
    [sym_title2] = ACTIONS(1),
    [sym_title3] = ACTIONS(1),
    [sym_title4] = ACTIONS(1),
    [sym_title5] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_article] = ACTIONS(1),
    [anon_sym_book] = ACTIONS(1),
    [anon_sym_manpage] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [sym_attr_mark] = ACTIONS(1),
    [aux_sym_attr_name_token1] = ACTIONS(1),
    [anon_sym_url_DASHrepo] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_TIP_COLON] = ACTIONS(1),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(1),
    [anon_sym_CAUTION_COLON] = ACTIONS(1),
    [anon_sym_WARNING_COLON] = ACTIONS(1),
    [sym__unordered_list_mark] = ACTIONS(1),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(1),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(1),
    [sym__checklist_mark] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [aux_sym_line_breaks_token1] = ACTIONS(1),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(1),
    [anon_sym_image_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(1),
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
    [sym_document] = STATE(144),
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(60),
    [sym_title0] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(34),
    [sym__note_block] = STATE(34),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(35),
    [sym__tip_block] = STATE(35),
    [sym_important] = STATE(3),
    [sym__important] = STATE(36),
    [sym__important_block] = STATE(36),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(37),
    [sym__caution_block] = STATE(37),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(38),
    [sym__warning_block] = STATE(38),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(78),
    [sym_list_item_mark] = STATE(143),
    [sym__ordered_list_mark] = STATE(176),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(82),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(58),
    [sym_kbd] = STATE(58),
    [sym_footnote] = STATE(58),
    [sym_url] = STATE(58),
    [sym_xref] = STATE(58),
    [sym__inline_xref] = STATE(71),
    [sym__xref] = STATE(69),
    [sym_passthrough] = STATE(58),
    [sym__passthrough_plus] = STATE(67),
    [sym__passthrough_cmd] = STATE(67),
    [sym_replacement] = STATE(58),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(78),
    [aux_sym_paragraph_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(5),
    [aux_sym_title0_token1] = ACTIONS(7),
    [sym_title1] = ACTIONS(9),
    [sym_title2] = ACTIONS(9),
    [sym_title3] = ACTIONS(9),
    [sym_title4] = ACTIONS(9),
    [sym_title5] = ACTIONS(9),
    [aux_sym_attr_name_token1] = ACTIONS(11),
    [anon_sym_NOTE_COLON] = ACTIONS(13),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(15),
    [anon_sym_TIP_COLON] = ACTIONS(17),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(19),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(21),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(23),
    [anon_sym_CAUTION_COLON] = ACTIONS(25),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(27),
    [anon_sym_WARNING_COLON] = ACTIONS(29),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(31),
    [sym__unordered_list_mark] = ACTIONS(33),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(33),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(35),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(33),
    [sym__checklist_mark] = ACTIONS(33),
    [aux_sym_code_token1] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(39),
    [aux_sym_line_breaks_token1] = ACTIONS(41),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(43),
    [anon_sym_image_COLON_COLON] = ACTIONS(45),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(47),
    [anon_sym_audio_COLON_COLON] = ACTIONS(49),
    [anon_sym_video_COLON_COLON] = ACTIONS(51),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(53),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(55),
    [aux_sym_url_token1] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_xref_COLON] = ACTIONS(61),
    [sym_emphasis] = ACTIONS(63),
    [sym_strong] = ACTIONS(63),
    [sym_monospace] = ACTIONS(63),
    [sym_highlight] = ACTIONS(65),
    [sym_superscript] = ACTIONS(63),
    [sym_subscript] = ACTIONS(65),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(67),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(71),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(60),
    [sym_title0] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(34),
    [sym__note_block] = STATE(34),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(35),
    [sym__tip_block] = STATE(35),
    [sym_important] = STATE(2),
    [sym__important] = STATE(36),
    [sym__important_block] = STATE(36),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(37),
    [sym__caution_block] = STATE(37),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(38),
    [sym__warning_block] = STATE(38),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(78),
    [sym_list_item_mark] = STATE(143),
    [sym__ordered_list_mark] = STATE(176),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(82),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(58),
    [sym_kbd] = STATE(58),
    [sym_footnote] = STATE(58),
    [sym_url] = STATE(58),
    [sym_xref] = STATE(58),
    [sym__inline_xref] = STATE(71),
    [sym__xref] = STATE(69),
    [sym_passthrough] = STATE(58),
    [sym__passthrough_plus] = STATE(67),
    [sym__passthrough_cmd] = STATE(67),
    [sym_replacement] = STATE(58),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(78),
    [aux_sym_paragraph_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(75),
    [aux_sym_title0_token1] = ACTIONS(78),
    [sym_title1] = ACTIONS(81),
    [sym_title2] = ACTIONS(81),
    [sym_title3] = ACTIONS(81),
    [sym_title4] = ACTIONS(81),
    [sym_title5] = ACTIONS(81),
    [aux_sym_attr_name_token1] = ACTIONS(84),
    [anon_sym_NOTE_COLON] = ACTIONS(87),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(90),
    [anon_sym_TIP_COLON] = ACTIONS(93),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(96),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(99),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(102),
    [anon_sym_CAUTION_COLON] = ACTIONS(105),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(108),
    [anon_sym_WARNING_COLON] = ACTIONS(111),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(114),
    [sym__unordered_list_mark] = ACTIONS(117),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(117),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(120),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(117),
    [sym__checklist_mark] = ACTIONS(117),
    [aux_sym_code_token1] = ACTIONS(123),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [aux_sym_line_breaks_token1] = ACTIONS(129),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(132),
    [anon_sym_image_COLON_COLON] = ACTIONS(135),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(138),
    [anon_sym_audio_COLON_COLON] = ACTIONS(141),
    [anon_sym_video_COLON_COLON] = ACTIONS(144),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(147),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(150),
    [aux_sym_url_token1] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(156),
    [anon_sym_xref_COLON] = ACTIONS(159),
    [sym_emphasis] = ACTIONS(162),
    [sym_strong] = ACTIONS(162),
    [sym_monospace] = ACTIONS(162),
    [sym_highlight] = ACTIONS(165),
    [sym_superscript] = ACTIONS(162),
    [sym_subscript] = ACTIONS(165),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(171),
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
  [3] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(60),
    [sym_title0] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(34),
    [sym__note_block] = STATE(34),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(35),
    [sym__tip_block] = STATE(35),
    [sym_important] = STATE(2),
    [sym__important] = STATE(36),
    [sym__important_block] = STATE(36),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(37),
    [sym__caution_block] = STATE(37),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(38),
    [sym__warning_block] = STATE(38),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(78),
    [sym_list_item_mark] = STATE(143),
    [sym__ordered_list_mark] = STATE(176),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(82),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(58),
    [sym_kbd] = STATE(58),
    [sym_footnote] = STATE(58),
    [sym_url] = STATE(58),
    [sym_xref] = STATE(58),
    [sym__inline_xref] = STATE(71),
    [sym__xref] = STATE(69),
    [sym_passthrough] = STATE(58),
    [sym__passthrough_plus] = STATE(67),
    [sym__passthrough_cmd] = STATE(67),
    [sym_replacement] = STATE(58),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(78),
    [aux_sym_paragraph_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(5),
    [aux_sym_title0_token1] = ACTIONS(7),
    [sym_title1] = ACTIONS(179),
    [sym_title2] = ACTIONS(179),
    [sym_title3] = ACTIONS(179),
    [sym_title4] = ACTIONS(179),
    [sym_title5] = ACTIONS(179),
    [aux_sym_attr_name_token1] = ACTIONS(11),
    [anon_sym_NOTE_COLON] = ACTIONS(13),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(15),
    [anon_sym_TIP_COLON] = ACTIONS(17),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(19),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(21),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(23),
    [anon_sym_CAUTION_COLON] = ACTIONS(25),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(27),
    [anon_sym_WARNING_COLON] = ACTIONS(29),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(31),
    [sym__unordered_list_mark] = ACTIONS(33),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(33),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(35),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(33),
    [sym__checklist_mark] = ACTIONS(33),
    [aux_sym_code_token1] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(39),
    [aux_sym_line_breaks_token1] = ACTIONS(41),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(43),
    [anon_sym_image_COLON_COLON] = ACTIONS(45),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(47),
    [anon_sym_audio_COLON_COLON] = ACTIONS(49),
    [anon_sym_video_COLON_COLON] = ACTIONS(51),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(53),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(55),
    [aux_sym_url_token1] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(59),
    [anon_sym_xref_COLON] = ACTIONS(61),
    [sym_emphasis] = ACTIONS(63),
    [sym_strong] = ACTIONS(63),
    [sym_monospace] = ACTIONS(63),
    [sym_highlight] = ACTIONS(65),
    [sym_superscript] = ACTIONS(63),
    [sym_subscript] = ACTIONS(65),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(67),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(69),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(71),
  },
  [4] = {
    [sym_author_info] = STATE(15),
    [sym__doctype] = STATE(15),
    [sym__normal_doc_attr] = STATE(15),
    [sym_doc_attr] = STATE(6),
    [aux_sym_title0_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(183),
    [aux_sym_title0_token1] = ACTIONS(181),
    [sym_title1] = ACTIONS(181),
    [sym_title2] = ACTIONS(181),
    [sym_title3] = ACTIONS(181),
    [sym_title4] = ACTIONS(181),
    [sym_title5] = ACTIONS(181),
    [sym_name] = ACTIONS(185),
    [sym_attr_mark] = ACTIONS(187),
    [aux_sym_attr_name_token1] = ACTIONS(183),
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
    [sym__unordered_list_mark] = ACTIONS(183),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(183),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(183),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(183),
    [sym__checklist_mark] = ACTIONS(183),
    [aux_sym_code_token1] = ACTIONS(181),
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
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(181),
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
  [5] = {
    [sym_author_info] = STATE(15),
    [sym__doctype] = STATE(15),
    [sym__normal_doc_attr] = STATE(15),
    [sym_doc_attr] = STATE(5),
    [aux_sym_title0_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [aux_sym_title0_token1] = ACTIONS(189),
    [sym_title1] = ACTIONS(189),
    [sym_title2] = ACTIONS(189),
    [sym_title3] = ACTIONS(189),
    [sym_title4] = ACTIONS(189),
    [sym_title5] = ACTIONS(189),
    [sym_name] = ACTIONS(193),
    [sym_attr_mark] = ACTIONS(196),
    [aux_sym_attr_name_token1] = ACTIONS(191),
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
    [sym__unordered_list_mark] = ACTIONS(191),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(191),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(191),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(191),
    [sym__checklist_mark] = ACTIONS(191),
    [aux_sym_code_token1] = ACTIONS(189),
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
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(189),
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
  [6] = {
    [sym_author_info] = STATE(15),
    [sym__doctype] = STATE(15),
    [sym__normal_doc_attr] = STATE(15),
    [sym_doc_attr] = STATE(5),
    [aux_sym_title0_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [aux_sym_title0_token1] = ACTIONS(199),
    [sym_title1] = ACTIONS(199),
    [sym_title2] = ACTIONS(199),
    [sym_title3] = ACTIONS(199),
    [sym_title4] = ACTIONS(199),
    [sym_title5] = ACTIONS(199),
    [sym_name] = ACTIONS(185),
    [sym_attr_mark] = ACTIONS(187),
    [aux_sym_attr_name_token1] = ACTIONS(201),
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
    [sym__unordered_list_mark] = ACTIONS(201),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(201),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(201),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(201),
    [sym__checklist_mark] = ACTIONS(201),
    [aux_sym_code_token1] = ACTIONS(199),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(205),
    [aux_sym_title0_token1] = ACTIONS(203),
    [sym_title1] = ACTIONS(203),
    [sym_title2] = ACTIONS(203),
    [sym_title3] = ACTIONS(203),
    [sym_title4] = ACTIONS(203),
    [sym_title5] = ACTIONS(203),
    [sym_name] = ACTIONS(205),
    [sym_attr_mark] = ACTIONS(205),
    [aux_sym_attr_name_token1] = ACTIONS(205),
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
    [sym__unordered_list_mark] = ACTIONS(205),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(205),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(205),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(205),
    [sym__checklist_mark] = ACTIONS(205),
    [aux_sym_code_token1] = ACTIONS(203),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(209),
    [aux_sym_title0_token1] = ACTIONS(207),
    [sym_title1] = ACTIONS(207),
    [sym_title2] = ACTIONS(207),
    [sym_title3] = ACTIONS(207),
    [sym_title4] = ACTIONS(207),
    [sym_title5] = ACTIONS(207),
    [sym_name] = ACTIONS(209),
    [sym_attr_mark] = ACTIONS(209),
    [aux_sym_attr_name_token1] = ACTIONS(209),
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
    [sym__unordered_list_mark] = ACTIONS(209),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(209),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(209),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(209),
    [sym__checklist_mark] = ACTIONS(209),
    [aux_sym_code_token1] = ACTIONS(207),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(213),
    [aux_sym_title0_token1] = ACTIONS(211),
    [sym_title1] = ACTIONS(211),
    [sym_title2] = ACTIONS(211),
    [sym_title3] = ACTIONS(211),
    [sym_title4] = ACTIONS(211),
    [sym_title5] = ACTIONS(211),
    [sym_name] = ACTIONS(213),
    [sym_attr_mark] = ACTIONS(213),
    [aux_sym_attr_name_token1] = ACTIONS(213),
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
    [sym__unordered_list_mark] = ACTIONS(213),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(213),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(213),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(213),
    [sym__checklist_mark] = ACTIONS(213),
    [aux_sym_code_token1] = ACTIONS(211),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(217),
    [aux_sym_title0_token1] = ACTIONS(215),
    [sym_title1] = ACTIONS(215),
    [sym_title2] = ACTIONS(215),
    [sym_title3] = ACTIONS(215),
    [sym_title4] = ACTIONS(215),
    [sym_title5] = ACTIONS(215),
    [sym_name] = ACTIONS(217),
    [sym_attr_mark] = ACTIONS(217),
    [aux_sym_attr_name_token1] = ACTIONS(217),
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
    [sym__unordered_list_mark] = ACTIONS(217),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(217),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(217),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(217),
    [sym__checklist_mark] = ACTIONS(217),
    [aux_sym_code_token1] = ACTIONS(215),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(221),
    [aux_sym_title0_token1] = ACTIONS(219),
    [sym_title1] = ACTIONS(219),
    [sym_title2] = ACTIONS(219),
    [sym_title3] = ACTIONS(219),
    [sym_title4] = ACTIONS(219),
    [sym_title5] = ACTIONS(219),
    [sym_name] = ACTIONS(221),
    [sym_attr_mark] = ACTIONS(221),
    [aux_sym_attr_name_token1] = ACTIONS(221),
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
    [sym__unordered_list_mark] = ACTIONS(221),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(221),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(221),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(221),
    [sym__checklist_mark] = ACTIONS(221),
    [aux_sym_code_token1] = ACTIONS(219),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(225),
    [aux_sym_title0_token1] = ACTIONS(223),
    [sym_title1] = ACTIONS(223),
    [sym_title2] = ACTIONS(223),
    [sym_title3] = ACTIONS(223),
    [sym_title4] = ACTIONS(223),
    [sym_title5] = ACTIONS(223),
    [sym_name] = ACTIONS(225),
    [sym_attr_mark] = ACTIONS(225),
    [aux_sym_attr_name_token1] = ACTIONS(225),
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
    [sym__unordered_list_mark] = ACTIONS(225),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(225),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(225),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(225),
    [sym__checklist_mark] = ACTIONS(225),
    [aux_sym_code_token1] = ACTIONS(223),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(229),
    [aux_sym_title0_token1] = ACTIONS(227),
    [sym_title1] = ACTIONS(227),
    [sym_title2] = ACTIONS(227),
    [sym_title3] = ACTIONS(227),
    [sym_title4] = ACTIONS(227),
    [sym_title5] = ACTIONS(227),
    [sym_name] = ACTIONS(229),
    [sym_attr_mark] = ACTIONS(229),
    [aux_sym_attr_name_token1] = ACTIONS(229),
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
    [sym__unordered_list_mark] = ACTIONS(229),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(229),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(229),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(229),
    [sym__checklist_mark] = ACTIONS(229),
    [aux_sym_code_token1] = ACTIONS(227),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(233),
    [aux_sym_title0_token1] = ACTIONS(231),
    [sym_title1] = ACTIONS(231),
    [sym_title2] = ACTIONS(231),
    [sym_title3] = ACTIONS(231),
    [sym_title4] = ACTIONS(231),
    [sym_title5] = ACTIONS(231),
    [sym_name] = ACTIONS(233),
    [sym_attr_mark] = ACTIONS(233),
    [aux_sym_attr_name_token1] = ACTIONS(233),
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
    [sym__unordered_list_mark] = ACTIONS(233),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(233),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(233),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(233),
    [sym__checklist_mark] = ACTIONS(233),
    [aux_sym_code_token1] = ACTIONS(231),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(237),
    [aux_sym_title0_token1] = ACTIONS(235),
    [sym_title1] = ACTIONS(235),
    [sym_title2] = ACTIONS(235),
    [sym_title3] = ACTIONS(235),
    [sym_title4] = ACTIONS(235),
    [sym_title5] = ACTIONS(235),
    [sym_name] = ACTIONS(237),
    [sym_attr_mark] = ACTIONS(237),
    [aux_sym_attr_name_token1] = ACTIONS(237),
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
    [sym__unordered_list_mark] = ACTIONS(237),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(237),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(237),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(237),
    [sym__checklist_mark] = ACTIONS(237),
    [aux_sym_code_token1] = ACTIONS(235),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(241),
    [aux_sym_title0_token1] = ACTIONS(239),
    [sym_title1] = ACTIONS(239),
    [sym_title2] = ACTIONS(239),
    [sym_title3] = ACTIONS(239),
    [sym_title4] = ACTIONS(239),
    [sym_title5] = ACTIONS(239),
    [sym_name] = ACTIONS(241),
    [sym_attr_mark] = ACTIONS(241),
    [aux_sym_attr_name_token1] = ACTIONS(241),
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
    [sym__unordered_list_mark] = ACTIONS(241),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(241),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(241),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(241),
    [sym__checklist_mark] = ACTIONS(241),
    [aux_sym_code_token1] = ACTIONS(239),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(245),
    [aux_sym_title0_token1] = ACTIONS(243),
    [sym_title1] = ACTIONS(243),
    [sym_title2] = ACTIONS(243),
    [sym_title3] = ACTIONS(243),
    [sym_title4] = ACTIONS(243),
    [sym_title5] = ACTIONS(243),
    [aux_sym_attr_name_token1] = ACTIONS(245),
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
    [sym__unordered_list_mark] = ACTIONS(245),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(245),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(243),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(245),
    [sym__checklist_mark] = ACTIONS(245),
    [aux_sym_code_token1] = ACTIONS(243),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_DOT] = ACTIONS(249),
    [aux_sym_title0_token1] = ACTIONS(247),
    [sym_title1] = ACTIONS(247),
    [sym_title2] = ACTIONS(247),
    [sym_title3] = ACTIONS(247),
    [sym_title4] = ACTIONS(247),
    [sym_title5] = ACTIONS(247),
    [aux_sym_attr_name_token1] = ACTIONS(249),
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
    [sym__unordered_list_mark] = ACTIONS(249),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(249),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(247),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(249),
    [sym__checklist_mark] = ACTIONS(249),
    [aux_sym_code_token1] = ACTIONS(247),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [aux_sym_title0_token1] = ACTIONS(251),
    [sym_title1] = ACTIONS(251),
    [sym_title2] = ACTIONS(251),
    [sym_title3] = ACTIONS(251),
    [sym_title4] = ACTIONS(251),
    [sym_title5] = ACTIONS(251),
    [aux_sym_attr_name_token1] = ACTIONS(253),
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
    [sym__unordered_list_mark] = ACTIONS(253),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(253),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(251),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(253),
    [sym__checklist_mark] = ACTIONS(253),
    [aux_sym_code_token1] = ACTIONS(251),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [aux_sym_title0_token1] = ACTIONS(255),
    [sym_title1] = ACTIONS(255),
    [sym_title2] = ACTIONS(255),
    [sym_title3] = ACTIONS(255),
    [sym_title4] = ACTIONS(255),
    [sym_title5] = ACTIONS(255),
    [aux_sym_attr_name_token1] = ACTIONS(257),
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
    [sym__unordered_list_mark] = ACTIONS(257),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(257),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(255),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(257),
    [sym__checklist_mark] = ACTIONS(257),
    [aux_sym_code_token1] = ACTIONS(255),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(261),
    [aux_sym_title0_token1] = ACTIONS(259),
    [sym_title1] = ACTIONS(259),
    [sym_title2] = ACTIONS(259),
    [sym_title3] = ACTIONS(259),
    [sym_title4] = ACTIONS(259),
    [sym_title5] = ACTIONS(259),
    [aux_sym_attr_name_token1] = ACTIONS(261),
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
    [sym__unordered_list_mark] = ACTIONS(261),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(261),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(259),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(261),
    [sym__checklist_mark] = ACTIONS(261),
    [aux_sym_code_token1] = ACTIONS(259),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(265),
    [aux_sym_title0_token1] = ACTIONS(263),
    [sym_title1] = ACTIONS(263),
    [sym_title2] = ACTIONS(263),
    [sym_title3] = ACTIONS(263),
    [sym_title4] = ACTIONS(263),
    [sym_title5] = ACTIONS(263),
    [aux_sym_attr_name_token1] = ACTIONS(265),
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
    [sym__unordered_list_mark] = ACTIONS(265),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(265),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(263),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(265),
    [sym__checklist_mark] = ACTIONS(265),
    [aux_sym_code_token1] = ACTIONS(263),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_DOT] = ACTIONS(269),
    [aux_sym_title0_token1] = ACTIONS(267),
    [sym_title1] = ACTIONS(267),
    [sym_title2] = ACTIONS(267),
    [sym_title3] = ACTIONS(267),
    [sym_title4] = ACTIONS(267),
    [sym_title5] = ACTIONS(267),
    [aux_sym_attr_name_token1] = ACTIONS(269),
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
    [sym__unordered_list_mark] = ACTIONS(269),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(269),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(267),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(269),
    [sym__checklist_mark] = ACTIONS(269),
    [aux_sym_code_token1] = ACTIONS(267),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(273),
    [aux_sym_title0_token1] = ACTIONS(271),
    [sym_title1] = ACTIONS(271),
    [sym_title2] = ACTIONS(271),
    [sym_title3] = ACTIONS(271),
    [sym_title4] = ACTIONS(271),
    [sym_title5] = ACTIONS(271),
    [aux_sym_attr_name_token1] = ACTIONS(273),
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
    [sym__unordered_list_mark] = ACTIONS(273),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(273),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(271),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(273),
    [sym__checklist_mark] = ACTIONS(273),
    [aux_sym_code_token1] = ACTIONS(271),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(277),
    [aux_sym_title0_token1] = ACTIONS(275),
    [sym_title1] = ACTIONS(275),
    [sym_title2] = ACTIONS(275),
    [sym_title3] = ACTIONS(275),
    [sym_title4] = ACTIONS(275),
    [sym_title5] = ACTIONS(275),
    [aux_sym_attr_name_token1] = ACTIONS(277),
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
    [sym__unordered_list_mark] = ACTIONS(277),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(277),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(275),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(277),
    [sym__checklist_mark] = ACTIONS(277),
    [aux_sym_code_token1] = ACTIONS(275),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(281),
    [aux_sym_title0_token1] = ACTIONS(279),
    [sym_title1] = ACTIONS(279),
    [sym_title2] = ACTIONS(279),
    [sym_title3] = ACTIONS(279),
    [sym_title4] = ACTIONS(279),
    [sym_title5] = ACTIONS(279),
    [aux_sym_attr_name_token1] = ACTIONS(281),
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
    [sym__unordered_list_mark] = ACTIONS(281),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(281),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(279),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(281),
    [sym__checklist_mark] = ACTIONS(281),
    [aux_sym_code_token1] = ACTIONS(279),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(285),
    [aux_sym_title0_token1] = ACTIONS(283),
    [sym_title1] = ACTIONS(283),
    [sym_title2] = ACTIONS(283),
    [sym_title3] = ACTIONS(283),
    [sym_title4] = ACTIONS(283),
    [sym_title5] = ACTIONS(283),
    [aux_sym_attr_name_token1] = ACTIONS(285),
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
    [sym__unordered_list_mark] = ACTIONS(285),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(285),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(283),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(285),
    [sym__checklist_mark] = ACTIONS(285),
    [aux_sym_code_token1] = ACTIONS(283),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(289),
    [aux_sym_title0_token1] = ACTIONS(287),
    [sym_title1] = ACTIONS(287),
    [sym_title2] = ACTIONS(287),
    [sym_title3] = ACTIONS(287),
    [sym_title4] = ACTIONS(287),
    [sym_title5] = ACTIONS(287),
    [aux_sym_attr_name_token1] = ACTIONS(289),
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
    [sym__unordered_list_mark] = ACTIONS(289),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(289),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(287),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(289),
    [sym__checklist_mark] = ACTIONS(289),
    [aux_sym_code_token1] = ACTIONS(287),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(293),
    [aux_sym_title0_token1] = ACTIONS(291),
    [sym_title1] = ACTIONS(291),
    [sym_title2] = ACTIONS(291),
    [sym_title3] = ACTIONS(291),
    [sym_title4] = ACTIONS(291),
    [sym_title5] = ACTIONS(291),
    [aux_sym_attr_name_token1] = ACTIONS(293),
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
    [sym__unordered_list_mark] = ACTIONS(293),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(293),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(291),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(293),
    [sym__checklist_mark] = ACTIONS(293),
    [aux_sym_code_token1] = ACTIONS(291),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(297),
    [aux_sym_title0_token1] = ACTIONS(295),
    [sym_title1] = ACTIONS(295),
    [sym_title2] = ACTIONS(295),
    [sym_title3] = ACTIONS(295),
    [sym_title4] = ACTIONS(295),
    [sym_title5] = ACTIONS(295),
    [aux_sym_attr_name_token1] = ACTIONS(297),
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
    [sym__unordered_list_mark] = ACTIONS(297),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(297),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(295),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(297),
    [sym__checklist_mark] = ACTIONS(297),
    [aux_sym_code_token1] = ACTIONS(295),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(301),
    [aux_sym_title0_token1] = ACTIONS(299),
    [sym_title1] = ACTIONS(299),
    [sym_title2] = ACTIONS(299),
    [sym_title3] = ACTIONS(299),
    [sym_title4] = ACTIONS(299),
    [sym_title5] = ACTIONS(299),
    [aux_sym_attr_name_token1] = ACTIONS(301),
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
    [sym__unordered_list_mark] = ACTIONS(301),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(301),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(299),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(301),
    [sym__checklist_mark] = ACTIONS(301),
    [aux_sym_code_token1] = ACTIONS(299),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(305),
    [aux_sym_title0_token1] = ACTIONS(303),
    [sym_title1] = ACTIONS(303),
    [sym_title2] = ACTIONS(303),
    [sym_title3] = ACTIONS(303),
    [sym_title4] = ACTIONS(303),
    [sym_title5] = ACTIONS(303),
    [aux_sym_attr_name_token1] = ACTIONS(305),
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
    [sym__unordered_list_mark] = ACTIONS(305),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(305),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(303),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(305),
    [sym__checklist_mark] = ACTIONS(305),
    [aux_sym_code_token1] = ACTIONS(303),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(309),
    [aux_sym_title0_token1] = ACTIONS(307),
    [sym_title1] = ACTIONS(307),
    [sym_title2] = ACTIONS(307),
    [sym_title3] = ACTIONS(307),
    [sym_title4] = ACTIONS(307),
    [sym_title5] = ACTIONS(307),
    [aux_sym_attr_name_token1] = ACTIONS(309),
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
    [sym__unordered_list_mark] = ACTIONS(309),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(309),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(307),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(309),
    [sym__checklist_mark] = ACTIONS(309),
    [aux_sym_code_token1] = ACTIONS(307),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(313),
    [aux_sym_title0_token1] = ACTIONS(311),
    [sym_title1] = ACTIONS(311),
    [sym_title2] = ACTIONS(311),
    [sym_title3] = ACTIONS(311),
    [sym_title4] = ACTIONS(311),
    [sym_title5] = ACTIONS(311),
    [aux_sym_attr_name_token1] = ACTIONS(313),
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
    [sym__unordered_list_mark] = ACTIONS(313),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(313),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(311),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(313),
    [sym__checklist_mark] = ACTIONS(313),
    [aux_sym_code_token1] = ACTIONS(311),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(317),
    [aux_sym_title0_token1] = ACTIONS(315),
    [sym_title1] = ACTIONS(315),
    [sym_title2] = ACTIONS(315),
    [sym_title3] = ACTIONS(315),
    [sym_title4] = ACTIONS(315),
    [sym_title5] = ACTIONS(315),
    [aux_sym_attr_name_token1] = ACTIONS(317),
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
    [sym__unordered_list_mark] = ACTIONS(317),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(317),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(315),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(317),
    [sym__checklist_mark] = ACTIONS(317),
    [aux_sym_code_token1] = ACTIONS(315),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(321),
    [aux_sym_title0_token1] = ACTIONS(319),
    [sym_title1] = ACTIONS(319),
    [sym_title2] = ACTIONS(319),
    [sym_title3] = ACTIONS(319),
    [sym_title4] = ACTIONS(319),
    [sym_title5] = ACTIONS(319),
    [aux_sym_attr_name_token1] = ACTIONS(321),
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
    [sym__unordered_list_mark] = ACTIONS(321),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(321),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(319),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(321),
    [sym__checklist_mark] = ACTIONS(321),
    [aux_sym_code_token1] = ACTIONS(319),
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
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(325),
    [aux_sym_title0_token1] = ACTIONS(323),
    [sym_title1] = ACTIONS(323),
    [sym_title2] = ACTIONS(323),
    [sym_title3] = ACTIONS(323),
    [sym_title4] = ACTIONS(323),
    [sym_title5] = ACTIONS(323),
    [aux_sym_attr_name_token1] = ACTIONS(325),
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
    [sym__unordered_list_mark] = ACTIONS(325),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(325),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(323),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(325),
    [sym__checklist_mark] = ACTIONS(325),
    [aux_sym_code_token1] = ACTIONS(323),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(329),
    [aux_sym_title0_token1] = ACTIONS(327),
    [sym_title1] = ACTIONS(327),
    [sym_title2] = ACTIONS(327),
    [sym_title3] = ACTIONS(327),
    [sym_title4] = ACTIONS(327),
    [sym_title5] = ACTIONS(327),
    [aux_sym_attr_name_token1] = ACTIONS(329),
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
    [sym__unordered_list_mark] = ACTIONS(329),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(329),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(327),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(329),
    [sym__checklist_mark] = ACTIONS(329),
    [aux_sym_code_token1] = ACTIONS(327),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(333),
    [aux_sym_title0_token1] = ACTIONS(331),
    [sym_title1] = ACTIONS(331),
    [sym_title2] = ACTIONS(331),
    [sym_title3] = ACTIONS(331),
    [sym_title4] = ACTIONS(331),
    [sym_title5] = ACTIONS(331),
    [aux_sym_attr_name_token1] = ACTIONS(333),
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
    [sym__unordered_list_mark] = ACTIONS(333),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(333),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(331),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(333),
    [sym__checklist_mark] = ACTIONS(333),
    [aux_sym_code_token1] = ACTIONS(331),
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
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(337),
    [aux_sym_title0_token1] = ACTIONS(335),
    [sym_title1] = ACTIONS(335),
    [sym_title2] = ACTIONS(335),
    [sym_title3] = ACTIONS(335),
    [sym_title4] = ACTIONS(335),
    [sym_title5] = ACTIONS(335),
    [aux_sym_attr_name_token1] = ACTIONS(337),
    [anon_sym_NOTE_COLON] = ACTIONS(335),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(335),
    [anon_sym_TIP_COLON] = ACTIONS(335),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(335),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(335),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(335),
    [anon_sym_CAUTION_COLON] = ACTIONS(335),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(335),
    [anon_sym_WARNING_COLON] = ACTIONS(335),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(335),
    [sym__unordered_list_mark] = ACTIONS(337),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(337),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(335),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(337),
    [sym__checklist_mark] = ACTIONS(337),
    [aux_sym_code_token1] = ACTIONS(335),
    [anon_sym_SLASH_SLASH] = ACTIONS(335),
    [aux_sym_line_breaks_token1] = ACTIONS(335),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(335),
    [anon_sym_image_COLON_COLON] = ACTIONS(335),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(335),
    [anon_sym_audio_COLON_COLON] = ACTIONS(335),
    [anon_sym_video_COLON_COLON] = ACTIONS(335),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(335),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(335),
    [aux_sym_url_token1] = ACTIONS(337),
    [anon_sym_LT_LT] = ACTIONS(337),
    [anon_sym_xref_COLON] = ACTIONS(337),
    [sym_emphasis] = ACTIONS(337),
    [sym_strong] = ACTIONS(337),
    [sym_monospace] = ACTIONS(337),
    [sym_highlight] = ACTIONS(335),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(335),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(335),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(335),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(335),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_DOT] = ACTIONS(341),
    [aux_sym_title0_token1] = ACTIONS(339),
    [sym_title1] = ACTIONS(339),
    [sym_title2] = ACTIONS(339),
    [sym_title3] = ACTIONS(339),
    [sym_title4] = ACTIONS(339),
    [sym_title5] = ACTIONS(339),
    [aux_sym_attr_name_token1] = ACTIONS(341),
    [anon_sym_NOTE_COLON] = ACTIONS(339),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(339),
    [anon_sym_TIP_COLON] = ACTIONS(339),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(339),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(339),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(339),
    [anon_sym_CAUTION_COLON] = ACTIONS(339),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(339),
    [anon_sym_WARNING_COLON] = ACTIONS(339),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(339),
    [sym__unordered_list_mark] = ACTIONS(341),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(341),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(339),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(341),
    [sym__checklist_mark] = ACTIONS(341),
    [aux_sym_code_token1] = ACTIONS(339),
    [anon_sym_SLASH_SLASH] = ACTIONS(339),
    [aux_sym_line_breaks_token1] = ACTIONS(339),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(339),
    [anon_sym_image_COLON_COLON] = ACTIONS(339),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(339),
    [anon_sym_audio_COLON_COLON] = ACTIONS(339),
    [anon_sym_video_COLON_COLON] = ACTIONS(339),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(339),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(339),
    [aux_sym_url_token1] = ACTIONS(341),
    [anon_sym_LT_LT] = ACTIONS(341),
    [anon_sym_xref_COLON] = ACTIONS(341),
    [sym_emphasis] = ACTIONS(341),
    [sym_strong] = ACTIONS(341),
    [sym_monospace] = ACTIONS(341),
    [sym_highlight] = ACTIONS(339),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(339),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(339),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(339),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(339),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(339),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_DOT] = ACTIONS(345),
    [aux_sym_title0_token1] = ACTIONS(343),
    [sym_title1] = ACTIONS(343),
    [sym_title2] = ACTIONS(343),
    [sym_title3] = ACTIONS(343),
    [sym_title4] = ACTIONS(343),
    [sym_title5] = ACTIONS(343),
    [aux_sym_attr_name_token1] = ACTIONS(345),
    [anon_sym_NOTE_COLON] = ACTIONS(343),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(343),
    [anon_sym_TIP_COLON] = ACTIONS(343),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(343),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(343),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(343),
    [anon_sym_CAUTION_COLON] = ACTIONS(343),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(343),
    [anon_sym_WARNING_COLON] = ACTIONS(343),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(343),
    [sym__unordered_list_mark] = ACTIONS(345),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(345),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(343),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(345),
    [sym__checklist_mark] = ACTIONS(345),
    [aux_sym_code_token1] = ACTIONS(343),
    [anon_sym_SLASH_SLASH] = ACTIONS(343),
    [aux_sym_line_breaks_token1] = ACTIONS(343),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(343),
    [anon_sym_image_COLON_COLON] = ACTIONS(343),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(343),
    [anon_sym_audio_COLON_COLON] = ACTIONS(343),
    [anon_sym_video_COLON_COLON] = ACTIONS(343),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(343),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(343),
    [aux_sym_url_token1] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(345),
    [anon_sym_xref_COLON] = ACTIONS(345),
    [sym_emphasis] = ACTIONS(345),
    [sym_strong] = ACTIONS(345),
    [sym_monospace] = ACTIONS(345),
    [sym_highlight] = ACTIONS(343),
    [sym_superscript] = ACTIONS(345),
    [sym_subscript] = ACTIONS(343),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(343),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(343),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(349),
    [aux_sym_title0_token1] = ACTIONS(347),
    [sym_title1] = ACTIONS(347),
    [sym_title2] = ACTIONS(347),
    [sym_title3] = ACTIONS(347),
    [sym_title4] = ACTIONS(347),
    [sym_title5] = ACTIONS(347),
    [aux_sym_attr_name_token1] = ACTIONS(349),
    [anon_sym_NOTE_COLON] = ACTIONS(347),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(347),
    [anon_sym_TIP_COLON] = ACTIONS(347),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(347),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(347),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(347),
    [anon_sym_CAUTION_COLON] = ACTIONS(347),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(347),
    [anon_sym_WARNING_COLON] = ACTIONS(347),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(347),
    [sym__unordered_list_mark] = ACTIONS(349),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(349),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(347),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(349),
    [sym__checklist_mark] = ACTIONS(349),
    [aux_sym_code_token1] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(347),
    [aux_sym_line_breaks_token1] = ACTIONS(347),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(347),
    [anon_sym_image_COLON_COLON] = ACTIONS(347),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(347),
    [anon_sym_audio_COLON_COLON] = ACTIONS(347),
    [anon_sym_video_COLON_COLON] = ACTIONS(347),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(347),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(347),
    [aux_sym_url_token1] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_xref_COLON] = ACTIONS(349),
    [sym_emphasis] = ACTIONS(349),
    [sym_strong] = ACTIONS(349),
    [sym_monospace] = ACTIONS(349),
    [sym_highlight] = ACTIONS(347),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(347),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(347),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(347),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(347),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(347),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_DOT] = ACTIONS(353),
    [aux_sym_title0_token1] = ACTIONS(351),
    [sym_title1] = ACTIONS(351),
    [sym_title2] = ACTIONS(351),
    [sym_title3] = ACTIONS(351),
    [sym_title4] = ACTIONS(351),
    [sym_title5] = ACTIONS(351),
    [aux_sym_attr_name_token1] = ACTIONS(353),
    [anon_sym_NOTE_COLON] = ACTIONS(351),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(351),
    [anon_sym_TIP_COLON] = ACTIONS(351),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(351),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(351),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(351),
    [anon_sym_CAUTION_COLON] = ACTIONS(351),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(351),
    [anon_sym_WARNING_COLON] = ACTIONS(351),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(351),
    [sym__unordered_list_mark] = ACTIONS(353),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(353),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(351),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(353),
    [sym__checklist_mark] = ACTIONS(353),
    [aux_sym_code_token1] = ACTIONS(351),
    [anon_sym_SLASH_SLASH] = ACTIONS(351),
    [aux_sym_line_breaks_token1] = ACTIONS(351),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(351),
    [anon_sym_image_COLON_COLON] = ACTIONS(351),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(351),
    [anon_sym_audio_COLON_COLON] = ACTIONS(351),
    [anon_sym_video_COLON_COLON] = ACTIONS(351),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(351),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(351),
    [aux_sym_url_token1] = ACTIONS(353),
    [anon_sym_LT_LT] = ACTIONS(353),
    [anon_sym_xref_COLON] = ACTIONS(353),
    [sym_emphasis] = ACTIONS(353),
    [sym_strong] = ACTIONS(353),
    [sym_monospace] = ACTIONS(353),
    [sym_highlight] = ACTIONS(351),
    [sym_superscript] = ACTIONS(353),
    [sym_subscript] = ACTIONS(351),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(351),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(351),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(351),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_DOT] = ACTIONS(357),
    [aux_sym_title0_token1] = ACTIONS(355),
    [sym_title1] = ACTIONS(355),
    [sym_title2] = ACTIONS(355),
    [sym_title3] = ACTIONS(355),
    [sym_title4] = ACTIONS(355),
    [sym_title5] = ACTIONS(355),
    [aux_sym_attr_name_token1] = ACTIONS(357),
    [anon_sym_NOTE_COLON] = ACTIONS(355),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(355),
    [anon_sym_TIP_COLON] = ACTIONS(355),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(355),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(355),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(355),
    [anon_sym_CAUTION_COLON] = ACTIONS(355),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(355),
    [anon_sym_WARNING_COLON] = ACTIONS(355),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(355),
    [sym__unordered_list_mark] = ACTIONS(357),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(357),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(355),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(357),
    [sym__checklist_mark] = ACTIONS(357),
    [aux_sym_code_token1] = ACTIONS(355),
    [anon_sym_SLASH_SLASH] = ACTIONS(355),
    [aux_sym_line_breaks_token1] = ACTIONS(355),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(355),
    [anon_sym_image_COLON_COLON] = ACTIONS(355),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(355),
    [anon_sym_audio_COLON_COLON] = ACTIONS(355),
    [anon_sym_video_COLON_COLON] = ACTIONS(355),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(355),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(355),
    [aux_sym_url_token1] = ACTIONS(357),
    [anon_sym_LT_LT] = ACTIONS(357),
    [anon_sym_xref_COLON] = ACTIONS(357),
    [sym_emphasis] = ACTIONS(357),
    [sym_strong] = ACTIONS(357),
    [sym_monospace] = ACTIONS(357),
    [sym_highlight] = ACTIONS(355),
    [sym_superscript] = ACTIONS(357),
    [sym_subscript] = ACTIONS(355),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(355),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(355),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(355),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(355),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(361),
    [aux_sym_title0_token1] = ACTIONS(359),
    [sym_title1] = ACTIONS(359),
    [sym_title2] = ACTIONS(359),
    [sym_title3] = ACTIONS(359),
    [sym_title4] = ACTIONS(359),
    [sym_title5] = ACTIONS(359),
    [aux_sym_attr_name_token1] = ACTIONS(361),
    [anon_sym_NOTE_COLON] = ACTIONS(359),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(359),
    [anon_sym_TIP_COLON] = ACTIONS(359),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(359),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(359),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(359),
    [anon_sym_CAUTION_COLON] = ACTIONS(359),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(359),
    [anon_sym_WARNING_COLON] = ACTIONS(359),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(359),
    [sym__unordered_list_mark] = ACTIONS(361),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(361),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(359),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(361),
    [sym__checklist_mark] = ACTIONS(361),
    [aux_sym_code_token1] = ACTIONS(359),
    [anon_sym_SLASH_SLASH] = ACTIONS(359),
    [aux_sym_line_breaks_token1] = ACTIONS(359),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(359),
    [anon_sym_image_COLON_COLON] = ACTIONS(359),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(359),
    [anon_sym_audio_COLON_COLON] = ACTIONS(359),
    [anon_sym_video_COLON_COLON] = ACTIONS(359),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(359),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(359),
    [aux_sym_url_token1] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(361),
    [anon_sym_xref_COLON] = ACTIONS(361),
    [sym_emphasis] = ACTIONS(361),
    [sym_strong] = ACTIONS(361),
    [sym_monospace] = ACTIONS(361),
    [sym_highlight] = ACTIONS(359),
    [sym_superscript] = ACTIONS(361),
    [sym_subscript] = ACTIONS(359),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(359),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(359),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(359),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(359),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(365),
    [aux_sym_title0_token1] = ACTIONS(363),
    [sym_title1] = ACTIONS(363),
    [sym_title2] = ACTIONS(363),
    [sym_title3] = ACTIONS(363),
    [sym_title4] = ACTIONS(363),
    [sym_title5] = ACTIONS(363),
    [aux_sym_attr_name_token1] = ACTIONS(365),
    [anon_sym_NOTE_COLON] = ACTIONS(363),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(363),
    [anon_sym_TIP_COLON] = ACTIONS(363),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(363),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(363),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(363),
    [anon_sym_CAUTION_COLON] = ACTIONS(363),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(363),
    [anon_sym_WARNING_COLON] = ACTIONS(363),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(363),
    [sym__unordered_list_mark] = ACTIONS(365),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(365),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(363),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(365),
    [sym__checklist_mark] = ACTIONS(365),
    [aux_sym_code_token1] = ACTIONS(363),
    [anon_sym_SLASH_SLASH] = ACTIONS(363),
    [aux_sym_line_breaks_token1] = ACTIONS(363),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(363),
    [anon_sym_image_COLON_COLON] = ACTIONS(363),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(363),
    [anon_sym_audio_COLON_COLON] = ACTIONS(363),
    [anon_sym_video_COLON_COLON] = ACTIONS(363),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(363),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(363),
    [aux_sym_url_token1] = ACTIONS(365),
    [anon_sym_LT_LT] = ACTIONS(365),
    [anon_sym_xref_COLON] = ACTIONS(365),
    [sym_emphasis] = ACTIONS(365),
    [sym_strong] = ACTIONS(365),
    [sym_monospace] = ACTIONS(365),
    [sym_highlight] = ACTIONS(363),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(363),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(363),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(363),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_DOT] = ACTIONS(369),
    [aux_sym_title0_token1] = ACTIONS(367),
    [sym_title1] = ACTIONS(367),
    [sym_title2] = ACTIONS(367),
    [sym_title3] = ACTIONS(367),
    [sym_title4] = ACTIONS(367),
    [sym_title5] = ACTIONS(367),
    [aux_sym_attr_name_token1] = ACTIONS(369),
    [anon_sym_NOTE_COLON] = ACTIONS(367),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(367),
    [anon_sym_TIP_COLON] = ACTIONS(367),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(367),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(367),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(367),
    [anon_sym_CAUTION_COLON] = ACTIONS(367),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(367),
    [anon_sym_WARNING_COLON] = ACTIONS(367),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(367),
    [sym__unordered_list_mark] = ACTIONS(369),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(369),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(367),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(369),
    [sym__checklist_mark] = ACTIONS(369),
    [aux_sym_code_token1] = ACTIONS(367),
    [anon_sym_SLASH_SLASH] = ACTIONS(367),
    [aux_sym_line_breaks_token1] = ACTIONS(367),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(367),
    [anon_sym_image_COLON_COLON] = ACTIONS(367),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(367),
    [anon_sym_audio_COLON_COLON] = ACTIONS(367),
    [anon_sym_video_COLON_COLON] = ACTIONS(367),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(367),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(367),
    [aux_sym_url_token1] = ACTIONS(369),
    [anon_sym_LT_LT] = ACTIONS(369),
    [anon_sym_xref_COLON] = ACTIONS(369),
    [sym_emphasis] = ACTIONS(369),
    [sym_strong] = ACTIONS(369),
    [sym_monospace] = ACTIONS(369),
    [sym_highlight] = ACTIONS(367),
    [sym_superscript] = ACTIONS(369),
    [sym_subscript] = ACTIONS(367),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(367),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(367),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(367),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(373),
    [aux_sym_title0_token1] = ACTIONS(371),
    [sym_title1] = ACTIONS(371),
    [sym_title2] = ACTIONS(371),
    [sym_title3] = ACTIONS(371),
    [sym_title4] = ACTIONS(371),
    [sym_title5] = ACTIONS(371),
    [aux_sym_attr_name_token1] = ACTIONS(373),
    [anon_sym_NOTE_COLON] = ACTIONS(371),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(371),
    [anon_sym_TIP_COLON] = ACTIONS(371),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(371),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(371),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(371),
    [anon_sym_CAUTION_COLON] = ACTIONS(371),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(371),
    [anon_sym_WARNING_COLON] = ACTIONS(371),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(371),
    [sym__unordered_list_mark] = ACTIONS(373),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(373),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(371),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(373),
    [sym__checklist_mark] = ACTIONS(373),
    [aux_sym_code_token1] = ACTIONS(371),
    [anon_sym_SLASH_SLASH] = ACTIONS(371),
    [aux_sym_line_breaks_token1] = ACTIONS(371),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(371),
    [anon_sym_image_COLON_COLON] = ACTIONS(371),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(371),
    [anon_sym_audio_COLON_COLON] = ACTIONS(371),
    [anon_sym_video_COLON_COLON] = ACTIONS(371),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(371),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(371),
    [aux_sym_url_token1] = ACTIONS(373),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_xref_COLON] = ACTIONS(373),
    [sym_emphasis] = ACTIONS(373),
    [sym_strong] = ACTIONS(373),
    [sym_monospace] = ACTIONS(373),
    [sym_highlight] = ACTIONS(371),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(371),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(371),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(371),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(371),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_DOT] = ACTIONS(377),
    [aux_sym_title0_token1] = ACTIONS(375),
    [sym_title1] = ACTIONS(375),
    [sym_title2] = ACTIONS(375),
    [sym_title3] = ACTIONS(375),
    [sym_title4] = ACTIONS(375),
    [sym_title5] = ACTIONS(375),
    [aux_sym_attr_name_token1] = ACTIONS(377),
    [anon_sym_NOTE_COLON] = ACTIONS(375),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(375),
    [anon_sym_TIP_COLON] = ACTIONS(375),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(375),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(375),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(375),
    [anon_sym_CAUTION_COLON] = ACTIONS(375),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(375),
    [anon_sym_WARNING_COLON] = ACTIONS(375),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(375),
    [sym__unordered_list_mark] = ACTIONS(377),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(377),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(375),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(377),
    [sym__checklist_mark] = ACTIONS(377),
    [aux_sym_code_token1] = ACTIONS(375),
    [anon_sym_SLASH_SLASH] = ACTIONS(375),
    [aux_sym_line_breaks_token1] = ACTIONS(375),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(375),
    [anon_sym_image_COLON_COLON] = ACTIONS(375),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(375),
    [anon_sym_audio_COLON_COLON] = ACTIONS(375),
    [anon_sym_video_COLON_COLON] = ACTIONS(375),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(375),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(375),
    [aux_sym_url_token1] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(377),
    [anon_sym_xref_COLON] = ACTIONS(377),
    [sym_emphasis] = ACTIONS(377),
    [sym_strong] = ACTIONS(377),
    [sym_monospace] = ACTIONS(377),
    [sym_highlight] = ACTIONS(375),
    [sym_superscript] = ACTIONS(377),
    [sym_subscript] = ACTIONS(375),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(375),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(375),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(375),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(381),
    [aux_sym_title0_token1] = ACTIONS(379),
    [sym_title1] = ACTIONS(379),
    [sym_title2] = ACTIONS(379),
    [sym_title3] = ACTIONS(379),
    [sym_title4] = ACTIONS(379),
    [sym_title5] = ACTIONS(379),
    [aux_sym_attr_name_token1] = ACTIONS(381),
    [anon_sym_NOTE_COLON] = ACTIONS(379),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(379),
    [anon_sym_TIP_COLON] = ACTIONS(379),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(379),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(379),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(379),
    [anon_sym_CAUTION_COLON] = ACTIONS(379),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(379),
    [anon_sym_WARNING_COLON] = ACTIONS(379),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(379),
    [sym__unordered_list_mark] = ACTIONS(381),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(381),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(379),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(381),
    [sym__checklist_mark] = ACTIONS(381),
    [aux_sym_code_token1] = ACTIONS(379),
    [anon_sym_SLASH_SLASH] = ACTIONS(379),
    [aux_sym_line_breaks_token1] = ACTIONS(379),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(379),
    [anon_sym_image_COLON_COLON] = ACTIONS(379),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(379),
    [anon_sym_audio_COLON_COLON] = ACTIONS(379),
    [anon_sym_video_COLON_COLON] = ACTIONS(379),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(379),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(379),
    [aux_sym_url_token1] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_xref_COLON] = ACTIONS(381),
    [sym_emphasis] = ACTIONS(381),
    [sym_strong] = ACTIONS(381),
    [sym_monospace] = ACTIONS(381),
    [sym_highlight] = ACTIONS(379),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(379),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(379),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(379),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(379),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(385),
    [aux_sym_title0_token1] = ACTIONS(383),
    [sym_title1] = ACTIONS(383),
    [sym_title2] = ACTIONS(383),
    [sym_title3] = ACTIONS(383),
    [sym_title4] = ACTIONS(383),
    [sym_title5] = ACTIONS(383),
    [aux_sym_attr_name_token1] = ACTIONS(385),
    [anon_sym_NOTE_COLON] = ACTIONS(383),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(383),
    [anon_sym_TIP_COLON] = ACTIONS(383),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(383),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(383),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(383),
    [anon_sym_CAUTION_COLON] = ACTIONS(383),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(383),
    [anon_sym_WARNING_COLON] = ACTIONS(383),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(383),
    [sym__unordered_list_mark] = ACTIONS(385),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(385),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(383),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(385),
    [sym__checklist_mark] = ACTIONS(385),
    [aux_sym_code_token1] = ACTIONS(383),
    [anon_sym_SLASH_SLASH] = ACTIONS(383),
    [aux_sym_line_breaks_token1] = ACTIONS(383),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(383),
    [anon_sym_image_COLON_COLON] = ACTIONS(383),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(383),
    [anon_sym_audio_COLON_COLON] = ACTIONS(383),
    [anon_sym_video_COLON_COLON] = ACTIONS(383),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(383),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(383),
    [aux_sym_url_token1] = ACTIONS(385),
    [anon_sym_LT_LT] = ACTIONS(385),
    [anon_sym_xref_COLON] = ACTIONS(385),
    [sym_emphasis] = ACTIONS(385),
    [sym_strong] = ACTIONS(385),
    [sym_monospace] = ACTIONS(385),
    [sym_highlight] = ACTIONS(383),
    [sym_superscript] = ACTIONS(385),
    [sym_subscript] = ACTIONS(383),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(383),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(383),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(383),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(383),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [anon_sym_DOT] = ACTIONS(389),
    [aux_sym_title0_token1] = ACTIONS(387),
    [sym_title1] = ACTIONS(387),
    [sym_title2] = ACTIONS(387),
    [sym_title3] = ACTIONS(387),
    [sym_title4] = ACTIONS(387),
    [sym_title5] = ACTIONS(387),
    [aux_sym_attr_name_token1] = ACTIONS(389),
    [anon_sym_NOTE_COLON] = ACTIONS(387),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(387),
    [anon_sym_TIP_COLON] = ACTIONS(387),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(387),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(387),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(387),
    [anon_sym_CAUTION_COLON] = ACTIONS(387),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(387),
    [anon_sym_WARNING_COLON] = ACTIONS(387),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(387),
    [sym__unordered_list_mark] = ACTIONS(389),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(389),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(387),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(389),
    [sym__checklist_mark] = ACTIONS(389),
    [aux_sym_code_token1] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(387),
    [aux_sym_line_breaks_token1] = ACTIONS(387),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(387),
    [anon_sym_image_COLON_COLON] = ACTIONS(387),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(387),
    [anon_sym_audio_COLON_COLON] = ACTIONS(387),
    [anon_sym_video_COLON_COLON] = ACTIONS(387),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(387),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(387),
    [aux_sym_url_token1] = ACTIONS(389),
    [anon_sym_LT_LT] = ACTIONS(389),
    [anon_sym_xref_COLON] = ACTIONS(389),
    [sym_emphasis] = ACTIONS(389),
    [sym_strong] = ACTIONS(389),
    [sym_monospace] = ACTIONS(389),
    [sym_highlight] = ACTIONS(387),
    [sym_superscript] = ACTIONS(389),
    [sym_subscript] = ACTIONS(387),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(387),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(387),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(387),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(393),
    [aux_sym_title0_token1] = ACTIONS(391),
    [sym_title1] = ACTIONS(391),
    [sym_title2] = ACTIONS(391),
    [sym_title3] = ACTIONS(391),
    [sym_title4] = ACTIONS(391),
    [sym_title5] = ACTIONS(391),
    [aux_sym_attr_name_token1] = ACTIONS(393),
    [anon_sym_NOTE_COLON] = ACTIONS(391),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(391),
    [anon_sym_TIP_COLON] = ACTIONS(391),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(391),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(391),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(391),
    [anon_sym_CAUTION_COLON] = ACTIONS(391),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(391),
    [anon_sym_WARNING_COLON] = ACTIONS(391),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(391),
    [sym__unordered_list_mark] = ACTIONS(393),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(393),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(391),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(393),
    [sym__checklist_mark] = ACTIONS(393),
    [aux_sym_code_token1] = ACTIONS(391),
    [anon_sym_SLASH_SLASH] = ACTIONS(391),
    [aux_sym_line_breaks_token1] = ACTIONS(391),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(391),
    [anon_sym_image_COLON_COLON] = ACTIONS(391),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(391),
    [anon_sym_audio_COLON_COLON] = ACTIONS(391),
    [anon_sym_video_COLON_COLON] = ACTIONS(391),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(391),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(391),
    [aux_sym_url_token1] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_xref_COLON] = ACTIONS(393),
    [sym_emphasis] = ACTIONS(393),
    [sym_strong] = ACTIONS(393),
    [sym_monospace] = ACTIONS(393),
    [sym_highlight] = ACTIONS(391),
    [sym_superscript] = ACTIONS(393),
    [sym_subscript] = ACTIONS(391),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(391),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(391),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(397),
    [aux_sym_title0_token1] = ACTIONS(395),
    [sym_title1] = ACTIONS(395),
    [sym_title2] = ACTIONS(395),
    [sym_title3] = ACTIONS(395),
    [sym_title4] = ACTIONS(395),
    [sym_title5] = ACTIONS(395),
    [aux_sym_attr_name_token1] = ACTIONS(397),
    [anon_sym_NOTE_COLON] = ACTIONS(395),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(395),
    [anon_sym_TIP_COLON] = ACTIONS(395),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(395),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(395),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(395),
    [anon_sym_CAUTION_COLON] = ACTIONS(395),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(395),
    [anon_sym_WARNING_COLON] = ACTIONS(395),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(395),
    [sym__unordered_list_mark] = ACTIONS(397),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(397),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(395),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(397),
    [sym__checklist_mark] = ACTIONS(397),
    [aux_sym_code_token1] = ACTIONS(395),
    [anon_sym_SLASH_SLASH] = ACTIONS(395),
    [aux_sym_line_breaks_token1] = ACTIONS(395),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(395),
    [anon_sym_image_COLON_COLON] = ACTIONS(395),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(395),
    [anon_sym_audio_COLON_COLON] = ACTIONS(395),
    [anon_sym_video_COLON_COLON] = ACTIONS(395),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(395),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(395),
    [aux_sym_url_token1] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_xref_COLON] = ACTIONS(397),
    [sym_emphasis] = ACTIONS(397),
    [sym_strong] = ACTIONS(397),
    [sym_monospace] = ACTIONS(397),
    [sym_highlight] = ACTIONS(395),
    [sym_superscript] = ACTIONS(397),
    [sym_subscript] = ACTIONS(395),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(395),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(395),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_DOT] = ACTIONS(401),
    [aux_sym_title0_token1] = ACTIONS(399),
    [sym_title1] = ACTIONS(399),
    [sym_title2] = ACTIONS(399),
    [sym_title3] = ACTIONS(399),
    [sym_title4] = ACTIONS(399),
    [sym_title5] = ACTIONS(399),
    [aux_sym_attr_name_token1] = ACTIONS(401),
    [anon_sym_NOTE_COLON] = ACTIONS(399),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(399),
    [anon_sym_TIP_COLON] = ACTIONS(399),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(399),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(399),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(399),
    [anon_sym_CAUTION_COLON] = ACTIONS(399),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(399),
    [anon_sym_WARNING_COLON] = ACTIONS(399),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(399),
    [sym__unordered_list_mark] = ACTIONS(401),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(401),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(399),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(401),
    [sym__checklist_mark] = ACTIONS(401),
    [aux_sym_code_token1] = ACTIONS(399),
    [anon_sym_SLASH_SLASH] = ACTIONS(399),
    [aux_sym_line_breaks_token1] = ACTIONS(399),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(399),
    [anon_sym_image_COLON_COLON] = ACTIONS(399),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(399),
    [anon_sym_audio_COLON_COLON] = ACTIONS(399),
    [anon_sym_video_COLON_COLON] = ACTIONS(399),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(399),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(399),
    [aux_sym_url_token1] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(401),
    [anon_sym_xref_COLON] = ACTIONS(401),
    [sym_emphasis] = ACTIONS(401),
    [sym_strong] = ACTIONS(401),
    [sym_monospace] = ACTIONS(401),
    [sym_highlight] = ACTIONS(399),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(399),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(399),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(399),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(399),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(405),
    [aux_sym_title0_token1] = ACTIONS(403),
    [sym_title1] = ACTIONS(403),
    [sym_title2] = ACTIONS(403),
    [sym_title3] = ACTIONS(403),
    [sym_title4] = ACTIONS(403),
    [sym_title5] = ACTIONS(403),
    [aux_sym_attr_name_token1] = ACTIONS(405),
    [anon_sym_NOTE_COLON] = ACTIONS(403),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(403),
    [anon_sym_TIP_COLON] = ACTIONS(403),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(403),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(403),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(403),
    [anon_sym_CAUTION_COLON] = ACTIONS(403),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(403),
    [anon_sym_WARNING_COLON] = ACTIONS(403),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(403),
    [sym__unordered_list_mark] = ACTIONS(405),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(405),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(403),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(405),
    [sym__checklist_mark] = ACTIONS(405),
    [aux_sym_code_token1] = ACTIONS(403),
    [anon_sym_SLASH_SLASH] = ACTIONS(403),
    [aux_sym_line_breaks_token1] = ACTIONS(403),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(403),
    [anon_sym_image_COLON_COLON] = ACTIONS(403),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(403),
    [anon_sym_audio_COLON_COLON] = ACTIONS(403),
    [anon_sym_video_COLON_COLON] = ACTIONS(403),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(403),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(403),
    [aux_sym_url_token1] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_xref_COLON] = ACTIONS(405),
    [sym_emphasis] = ACTIONS(405),
    [sym_strong] = ACTIONS(405),
    [sym_monospace] = ACTIONS(405),
    [sym_highlight] = ACTIONS(403),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(403),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(403),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(403),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(403),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(403),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(57), 1,
      aux_sym_url_token1,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_xref_COLON,
    ACTIONS(409), 1,
      anon_sym_LF_LF,
    ACTIONS(411), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(413), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(415), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(417), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(69), 1,
      sym__xref,
    STATE(71), 1,
      sym__inline_xref,
    STATE(67), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(407), 7,
      aux_sym_attr_name_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(59), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(419), 30,
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
    ACTIONS(424), 1,
      anon_sym_LF_LF,
    ACTIONS(426), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(429), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(432), 1,
      aux_sym_url_token1,
    ACTIONS(435), 1,
      anon_sym_LT_LT,
    ACTIONS(438), 1,
      anon_sym_xref_COLON,
    ACTIONS(441), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(444), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(69), 1,
      sym__xref,
    STATE(71), 1,
      sym__inline_xref,
    STATE(67), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(421), 7,
      aux_sym_attr_name_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(59), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(447), 30,
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
  [172] = 28,
    ACTIONS(13), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(15), 1,
      anon_sym_LBRACKNOTE_RBRACK_LF,
    ACTIONS(17), 1,
      anon_sym_TIP_COLON,
    ACTIONS(19), 1,
      anon_sym_LBRACKTIP_RBRACK_LF,
    ACTIONS(21), 1,
      anon_sym_IMPORTANT_COLON,
    ACTIONS(23), 1,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
    ACTIONS(25), 1,
      anon_sym_CAUTION_COLON,
    ACTIONS(27), 1,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
    ACTIONS(29), 1,
      anon_sym_WARNING_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACKWARNING_RBRACK_LF,
    ACTIONS(37), 1,
      aux_sym_code_token1,
    ACTIONS(45), 1,
      anon_sym_image_COLON_COLON,
    ACTIONS(47), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    ACTIONS(49), 1,
      anon_sym_audio_COLON_COLON,
    ACTIONS(51), 1,
      anon_sym_video_COLON_COLON,
    ACTIONS(450), 1,
      aux_sym_attr_name_token1,
    STATE(82), 1,
      sym_table_start,
    STATE(143), 1,
      sym_list_item_mark,
    STATE(176), 1,
      sym__ordered_list_mark,
    ACTIONS(33), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(34), 2,
      sym__note_line,
      sym__note_block,
    STATE(35), 2,
      sym__tip,
      sym__tip_block,
    STATE(36), 2,
      sym__important,
      sym__important_block,
    STATE(37), 2,
      sym__caution,
      sym__caution_block,
    STATE(38), 2,
      sym__warning,
      sym__warning_block,
    STATE(78), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(35), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
    STATE(40), 13,
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
  [278] = 3,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LF_LF,
    ACTIONS(452), 44,
      aux_sym_attr_name_token1,
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
  [331] = 3,
    ACTIONS(460), 1,
      anon_sym_COLON_COLON,
    ACTIONS(462), 1,
      anon_sym_LF_LF,
    ACTIONS(458), 44,
      aux_sym_attr_name_token1,
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
  [384] = 2,
    ACTIONS(466), 1,
      anon_sym_LF_LF,
    ACTIONS(464), 44,
      aux_sym_attr_name_token1,
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
  [434] = 2,
    ACTIONS(470), 1,
      anon_sym_LF_LF,
    ACTIONS(468), 44,
      aux_sym_attr_name_token1,
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
  [484] = 2,
    ACTIONS(474), 1,
      anon_sym_LF_LF,
    ACTIONS(472), 44,
      aux_sym_attr_name_token1,
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
  [534] = 2,
    ACTIONS(478), 1,
      anon_sym_LF_LF,
    ACTIONS(476), 44,
      aux_sym_attr_name_token1,
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
  [584] = 2,
    ACTIONS(482), 1,
      anon_sym_LF_LF,
    ACTIONS(480), 44,
      aux_sym_attr_name_token1,
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
  [634] = 2,
    ACTIONS(486), 1,
      anon_sym_LF_LF,
    ACTIONS(484), 44,
      aux_sym_attr_name_token1,
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
  [684] = 2,
    ACTIONS(490), 1,
      anon_sym_LF_LF,
    ACTIONS(488), 44,
      aux_sym_attr_name_token1,
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
  [734] = 2,
    ACTIONS(494), 1,
      anon_sym_LF_LF,
    ACTIONS(492), 44,
      aux_sym_attr_name_token1,
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
  [784] = 2,
    ACTIONS(490), 1,
      anon_sym_LF_LF,
    ACTIONS(488), 44,
      aux_sym_attr_name_token1,
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
  [834] = 2,
    ACTIONS(498), 1,
      anon_sym_LF_LF,
    ACTIONS(496), 44,
      aux_sym_attr_name_token1,
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
  [884] = 2,
    ACTIONS(502), 1,
      anon_sym_LF_LF,
    ACTIONS(500), 44,
      aux_sym_attr_name_token1,
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
  [934] = 2,
    ACTIONS(506), 1,
      anon_sym_LF_LF,
    ACTIONS(504), 44,
      aux_sym_attr_name_token1,
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
  [984] = 2,
    ACTIONS(510), 1,
      anon_sym_LF_LF,
    ACTIONS(508), 44,
      aux_sym_attr_name_token1,
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
  [1034] = 2,
    ACTIONS(514), 1,
      anon_sym_LF_LF,
    ACTIONS(512), 44,
      aux_sym_attr_name_token1,
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
  [1084] = 2,
    ACTIONS(516), 3,
      aux_sym_attr_name_token1,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(518), 18,
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
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
      aux_sym_code_token1,
      anon_sym_image_COLON_COLON,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
      anon_sym_audio_COLON_COLON,
      anon_sym_video_COLON_COLON,
  [1110] = 5,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(143), 1,
      sym_list_item_mark,
    STATE(176), 1,
      sym__ordered_list_mark,
    STATE(79), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(33), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1131] = 5,
    ACTIONS(522), 1,
      anon_sym_LF,
    STATE(143), 1,
      sym_list_item_mark,
    STATE(176), 1,
      sym__ordered_list_mark,
    STATE(79), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(524), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1152] = 2,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1163] = 2,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(533), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1174] = 5,
    ACTIONS(535), 1,
      aux_sym_block_title_token1,
    ACTIONS(537), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(26), 1,
      sym_table_end,
    STATE(94), 1,
      aux_sym_table_content_repeat1,
    STATE(124), 1,
      sym_table_content,
  [1190] = 4,
    ACTIONS(539), 1,
      anon_sym_doctype,
    ACTIONS(541), 1,
      aux_sym_attr_name_token1,
    ACTIONS(543), 1,
      anon_sym_url_DASHrepo,
    STATE(134), 1,
      sym_attr_name,
  [1203] = 1,
    ACTIONS(545), 4,
      anon_sym_article,
      anon_sym_book,
      anon_sym_manpage,
      anon_sym_inline,
  [1210] = 4,
    ACTIONS(547), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(549), 1,
      aux_sym__note_block_token1,
    STATE(88), 1,
      aux_sym__note_block_repeat1,
    STATE(169), 1,
      sym_code_content,
  [1223] = 3,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 1,
      aux_sym_attr_value_token1,
    STATE(167), 1,
      sym_attr_value,
  [1233] = 3,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(557), 1,
      aux_sym__note_block_token1,
    STATE(91), 1,
      aux_sym__note_block_repeat1,
  [1243] = 3,
    ACTIONS(557), 1,
      aux_sym__note_block_token1,
    ACTIONS(559), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(91), 1,
      aux_sym__note_block_repeat1,
  [1253] = 3,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 1,
      aux_sym_audio_url_token1,
    STATE(171), 1,
      sym_audio_url,
  [1263] = 3,
    ACTIONS(563), 1,
      aux_sym_audio_url_token1,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    STATE(172), 1,
      sym_audio_url,
  [1273] = 3,
    ACTIONS(567), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(569), 1,
      aux_sym__note_block_token1,
    STATE(91), 1,
      aux_sym__note_block_repeat1,
  [1283] = 3,
    ACTIONS(572), 1,
      anon_sym_LT,
    ACTIONS(574), 1,
      anon_sym_LF,
    ACTIONS(576), 1,
      sym_name,
  [1293] = 3,
    ACTIONS(578), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(580), 1,
      aux_sym__note_block_token1,
    STATE(104), 1,
      aux_sym__note_block_repeat1,
  [1303] = 3,
    ACTIONS(582), 1,
      aux_sym_block_title_token1,
    ACTIONS(584), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(95), 1,
      aux_sym_table_content_repeat1,
  [1313] = 3,
    ACTIONS(586), 1,
      aux_sym_block_title_token1,
    ACTIONS(589), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(95), 1,
      aux_sym_table_content_repeat1,
  [1323] = 3,
    ACTIONS(591), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(593), 1,
      aux_sym__note_block_token1,
    STATE(106), 1,
      aux_sym__note_block_repeat1,
  [1333] = 3,
    ACTIONS(595), 1,
      anon_sym_LT,
    ACTIONS(597), 1,
      anon_sym_LF,
    ACTIONS(599), 1,
      sym_name,
  [1343] = 3,
    ACTIONS(601), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(603), 1,
      aux_sym__note_block_token1,
    STATE(108), 1,
      aux_sym__note_block_repeat1,
  [1353] = 3,
    ACTIONS(605), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    STATE(87), 1,
      aux_sym__note_block_repeat1,
  [1363] = 3,
    ACTIONS(609), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(611), 1,
      aux_sym__note_block_token1,
    STATE(102), 1,
      aux_sym__note_block_repeat1,
  [1373] = 3,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    ACTIONS(615), 1,
      aux_sym_audio_url_token1,
    STATE(149), 1,
      sym_audio_title,
  [1383] = 3,
    ACTIONS(557), 1,
      aux_sym__note_block_token1,
    ACTIONS(617), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(91), 1,
      aux_sym__note_block_repeat1,
  [1393] = 3,
    ACTIONS(615), 1,
      aux_sym_audio_url_token1,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_audio_title,
  [1403] = 3,
    ACTIONS(557), 1,
      aux_sym__note_block_token1,
    ACTIONS(621), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(91), 1,
      aux_sym__note_block_repeat1,
  [1413] = 1,
    ACTIONS(623), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1419] = 3,
    ACTIONS(557), 1,
      aux_sym__note_block_token1,
    ACTIONS(625), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(91), 1,
      aux_sym__note_block_repeat1,
  [1429] = 3,
    ACTIONS(615), 1,
      aux_sym_audio_url_token1,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      sym_audio_title,
  [1439] = 3,
    ACTIONS(557), 1,
      aux_sym__note_block_token1,
    ACTIONS(629), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(91), 1,
      aux_sym__note_block_repeat1,
  [1449] = 3,
    ACTIONS(615), 1,
      aux_sym_audio_url_token1,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_audio_title,
  [1459] = 1,
    ACTIONS(633), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [1464] = 2,
    ACTIONS(615), 1,
      aux_sym_audio_url_token1,
    STATE(129), 1,
      sym_audio_title,
  [1471] = 2,
    ACTIONS(635), 1,
      aux_sym_attr_name_token1,
    STATE(132), 1,
      sym_code_language,
  [1478] = 2,
    ACTIONS(563), 1,
      aux_sym_audio_url_token1,
    STATE(159), 1,
      sym_audio_url,
  [1485] = 1,
    ACTIONS(637), 2,
      aux_sym_block_title_token1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1490] = 2,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    ACTIONS(641), 1,
      sym_kbd_content,
  [1497] = 2,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    ACTIONS(645), 1,
      sym_footnote_content,
  [1504] = 2,
    ACTIONS(647), 1,
      aux_sym_audio_url_token1,
    STATE(148), 1,
      sym_audio_title,
  [1511] = 2,
    ACTIONS(649), 1,
      aux_sym_attr_name_token1,
    STATE(120), 1,
      sym_xref_url,
  [1518] = 2,
    ACTIONS(649), 1,
      aux_sym_attr_name_token1,
    STATE(142), 1,
      sym_xref_url,
  [1525] = 2,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_GT_GT,
  [1532] = 2,
    ACTIONS(655), 1,
      aux_sym_attr_name_token1,
    STATE(170), 1,
      sym_passthrough_content,
  [1539] = 2,
    ACTIONS(655), 1,
      aux_sym_attr_name_token1,
    STATE(168), 1,
      sym_passthrough_content,
  [1546] = 2,
    ACTIONS(657), 1,
      anon_sym_LT,
    ACTIONS(659), 1,
      anon_sym_LF,
  [1553] = 2,
    ACTIONS(661), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(54), 1,
      sym_table_end,
  [1560] = 1,
    ACTIONS(663), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1565] = 2,
    ACTIONS(615), 1,
      aux_sym_audio_url_token1,
    STATE(158), 1,
      sym_audio_title,
  [1572] = 2,
    ACTIONS(665), 1,
      aux_sym_block_title_token1,
    STATE(81), 1,
      sym_list_item_content,
  [1579] = 1,
    ACTIONS(667), 1,
      sym_attr_mark,
  [1583] = 1,
    ACTIONS(669), 1,
      anon_sym_RBRACK,
  [1587] = 1,
    ACTIONS(671), 1,
      anon_sym_LBRACK,
  [1591] = 1,
    ACTIONS(673), 1,
      anon_sym_RBRACK,
  [1595] = 1,
    ACTIONS(675), 1,
      anon_sym_RBRACK_LF,
  [1599] = 1,
    ACTIONS(677), 1,
      aux_sym_attr_value_token1,
  [1603] = 1,
    ACTIONS(679), 1,
      sym_attr_mark,
  [1607] = 1,
    ACTIONS(681), 1,
      anon_sym_RBRACK,
  [1611] = 1,
    ACTIONS(683), 1,
      sym_attr_mark,
  [1615] = 1,
    ACTIONS(685), 1,
      aux_sym_block_title_token1,
  [1619] = 1,
    ACTIONS(687), 1,
      anon_sym_GT,
  [1623] = 1,
    ACTIONS(689), 1,
      sym_email,
  [1627] = 1,
    ACTIONS(691), 1,
      sym_email,
  [1631] = 1,
    ACTIONS(693), 1,
      anon_sym_RBRACK_LF,
  [1635] = 1,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
  [1639] = 1,
    ACTIONS(697), 1,
      anon_sym_,
  [1643] = 1,
    ACTIONS(699), 1,
      ts_builtin_sym_end,
  [1647] = 1,
    ACTIONS(701), 1,
      anon_sym_LF,
  [1651] = 1,
    ACTIONS(703), 1,
      anon_sym_RBRACK,
  [1655] = 1,
    ACTIONS(705), 1,
      anon_sym_LF,
  [1659] = 1,
    ACTIONS(707), 1,
      anon_sym_RBRACK_LF,
  [1663] = 1,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
  [1667] = 1,
    ACTIONS(711), 1,
      anon_sym_LF,
  [1671] = 1,
    ACTIONS(713), 1,
      anon_sym_LF,
  [1675] = 1,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
  [1679] = 1,
    ACTIONS(717), 1,
      aux_sym_url_token2,
  [1683] = 1,
    ACTIONS(719), 1,
      anon_sym_LF,
  [1687] = 1,
    ACTIONS(721), 1,
      anon_sym_LF,
  [1691] = 1,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
  [1695] = 1,
    ACTIONS(725), 1,
      anon_sym_LF,
  [1699] = 1,
    ACTIONS(727), 1,
      anon_sym_GT_GT,
  [1703] = 1,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
  [1707] = 1,
    ACTIONS(731), 1,
      anon_sym_LF,
  [1711] = 1,
    ACTIONS(733), 1,
      anon_sym_GT,
  [1715] = 1,
    ACTIONS(735), 1,
      sym_email,
  [1719] = 1,
    ACTIONS(737), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1723] = 1,
    ACTIONS(739), 1,
      anon_sym_LF,
  [1727] = 1,
    ACTIONS(741), 1,
      anon_sym_COLON_COLON,
  [1731] = 1,
    ACTIONS(743), 1,
      anon_sym_LF,
  [1735] = 1,
    ACTIONS(745), 1,
      anon_sym_LF,
  [1739] = 1,
    ACTIONS(747), 1,
      anon_sym_RBRACK,
  [1743] = 1,
    ACTIONS(749), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1747] = 1,
    ACTIONS(751), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1751] = 1,
    ACTIONS(753), 1,
      anon_sym_LBRACK,
  [1755] = 1,
    ACTIONS(755), 1,
      anon_sym_LBRACK,
  [1759] = 1,
    ACTIONS(757), 1,
      aux_sym_comment_token1,
  [1763] = 1,
    ACTIONS(759), 1,
      anon_sym_LF,
  [1767] = 1,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
  [1771] = 1,
    ACTIONS(763), 1,
      anon_sym_,
  [1775] = 1,
    ACTIONS(765), 1,
      anon_sym_LF,
  [1779] = 1,
    ACTIONS(767), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1783] = 1,
    ACTIONS(769), 1,
      aux_sym_block_title_token1,
  [1787] = 1,
    ACTIONS(771), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1791] = 1,
    ACTIONS(773), 1,
      anon_sym_LF,
  [1795] = 1,
    ACTIONS(775), 1,
      anon_sym_GT,
  [1799] = 1,
    ACTIONS(777), 1,
      aux_sym_block_title_token1,
  [1803] = 1,
    ACTIONS(779), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1807] = 1,
    ACTIONS(781), 1,
      aux_sym_block_title_token1,
  [1811] = 1,
    ACTIONS(783), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1815] = 1,
    ACTIONS(785), 1,
      aux_sym_block_title_token1,
  [1819] = 1,
    ACTIONS(787), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1823] = 1,
    ACTIONS(789), 1,
      anon_sym_LF,
  [1827] = 1,
    ACTIONS(791), 1,
      aux_sym_block_title_token1,
  [1831] = 1,
    ACTIONS(663), 1,
      anon_sym_RBRACK_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(58)] = 0,
  [SMALL_STATE(59)] = 86,
  [SMALL_STATE(60)] = 172,
  [SMALL_STATE(61)] = 278,
  [SMALL_STATE(62)] = 331,
  [SMALL_STATE(63)] = 384,
  [SMALL_STATE(64)] = 434,
  [SMALL_STATE(65)] = 484,
  [SMALL_STATE(66)] = 534,
  [SMALL_STATE(67)] = 584,
  [SMALL_STATE(68)] = 634,
  [SMALL_STATE(69)] = 684,
  [SMALL_STATE(70)] = 734,
  [SMALL_STATE(71)] = 784,
  [SMALL_STATE(72)] = 834,
  [SMALL_STATE(73)] = 884,
  [SMALL_STATE(74)] = 934,
  [SMALL_STATE(75)] = 984,
  [SMALL_STATE(76)] = 1034,
  [SMALL_STATE(77)] = 1084,
  [SMALL_STATE(78)] = 1110,
  [SMALL_STATE(79)] = 1131,
  [SMALL_STATE(80)] = 1152,
  [SMALL_STATE(81)] = 1163,
  [SMALL_STATE(82)] = 1174,
  [SMALL_STATE(83)] = 1190,
  [SMALL_STATE(84)] = 1203,
  [SMALL_STATE(85)] = 1210,
  [SMALL_STATE(86)] = 1223,
  [SMALL_STATE(87)] = 1233,
  [SMALL_STATE(88)] = 1243,
  [SMALL_STATE(89)] = 1253,
  [SMALL_STATE(90)] = 1263,
  [SMALL_STATE(91)] = 1273,
  [SMALL_STATE(92)] = 1283,
  [SMALL_STATE(93)] = 1293,
  [SMALL_STATE(94)] = 1303,
  [SMALL_STATE(95)] = 1313,
  [SMALL_STATE(96)] = 1323,
  [SMALL_STATE(97)] = 1333,
  [SMALL_STATE(98)] = 1343,
  [SMALL_STATE(99)] = 1353,
  [SMALL_STATE(100)] = 1363,
  [SMALL_STATE(101)] = 1373,
  [SMALL_STATE(102)] = 1383,
  [SMALL_STATE(103)] = 1393,
  [SMALL_STATE(104)] = 1403,
  [SMALL_STATE(105)] = 1413,
  [SMALL_STATE(106)] = 1419,
  [SMALL_STATE(107)] = 1429,
  [SMALL_STATE(108)] = 1439,
  [SMALL_STATE(109)] = 1449,
  [SMALL_STATE(110)] = 1459,
  [SMALL_STATE(111)] = 1464,
  [SMALL_STATE(112)] = 1471,
  [SMALL_STATE(113)] = 1478,
  [SMALL_STATE(114)] = 1485,
  [SMALL_STATE(115)] = 1490,
  [SMALL_STATE(116)] = 1497,
  [SMALL_STATE(117)] = 1504,
  [SMALL_STATE(118)] = 1511,
  [SMALL_STATE(119)] = 1518,
  [SMALL_STATE(120)] = 1525,
  [SMALL_STATE(121)] = 1532,
  [SMALL_STATE(122)] = 1539,
  [SMALL_STATE(123)] = 1546,
  [SMALL_STATE(124)] = 1553,
  [SMALL_STATE(125)] = 1560,
  [SMALL_STATE(126)] = 1565,
  [SMALL_STATE(127)] = 1572,
  [SMALL_STATE(128)] = 1579,
  [SMALL_STATE(129)] = 1583,
  [SMALL_STATE(130)] = 1587,
  [SMALL_STATE(131)] = 1591,
  [SMALL_STATE(132)] = 1595,
  [SMALL_STATE(133)] = 1599,
  [SMALL_STATE(134)] = 1603,
  [SMALL_STATE(135)] = 1607,
  [SMALL_STATE(136)] = 1611,
  [SMALL_STATE(137)] = 1615,
  [SMALL_STATE(138)] = 1619,
  [SMALL_STATE(139)] = 1623,
  [SMALL_STATE(140)] = 1627,
  [SMALL_STATE(141)] = 1631,
  [SMALL_STATE(142)] = 1635,
  [SMALL_STATE(143)] = 1639,
  [SMALL_STATE(144)] = 1643,
  [SMALL_STATE(145)] = 1647,
  [SMALL_STATE(146)] = 1651,
  [SMALL_STATE(147)] = 1655,
  [SMALL_STATE(148)] = 1659,
  [SMALL_STATE(149)] = 1663,
  [SMALL_STATE(150)] = 1667,
  [SMALL_STATE(151)] = 1671,
  [SMALL_STATE(152)] = 1675,
  [SMALL_STATE(153)] = 1679,
  [SMALL_STATE(154)] = 1683,
  [SMALL_STATE(155)] = 1687,
  [SMALL_STATE(156)] = 1691,
  [SMALL_STATE(157)] = 1695,
  [SMALL_STATE(158)] = 1699,
  [SMALL_STATE(159)] = 1703,
  [SMALL_STATE(160)] = 1707,
  [SMALL_STATE(161)] = 1711,
  [SMALL_STATE(162)] = 1715,
  [SMALL_STATE(163)] = 1719,
  [SMALL_STATE(164)] = 1723,
  [SMALL_STATE(165)] = 1727,
  [SMALL_STATE(166)] = 1731,
  [SMALL_STATE(167)] = 1735,
  [SMALL_STATE(168)] = 1739,
  [SMALL_STATE(169)] = 1743,
  [SMALL_STATE(170)] = 1747,
  [SMALL_STATE(171)] = 1751,
  [SMALL_STATE(172)] = 1755,
  [SMALL_STATE(173)] = 1759,
  [SMALL_STATE(174)] = 1763,
  [SMALL_STATE(175)] = 1767,
  [SMALL_STATE(176)] = 1771,
  [SMALL_STATE(177)] = 1775,
  [SMALL_STATE(178)] = 1779,
  [SMALL_STATE(179)] = 1783,
  [SMALL_STATE(180)] = 1787,
  [SMALL_STATE(181)] = 1791,
  [SMALL_STATE(182)] = 1795,
  [SMALL_STATE(183)] = 1799,
  [SMALL_STATE(184)] = 1803,
  [SMALL_STATE(185)] = 1807,
  [SMALL_STATE(186)] = 1811,
  [SMALL_STATE(187)] = 1815,
  [SMALL_STATE(188)] = 1819,
  [SMALL_STATE(189)] = 1823,
  [SMALL_STATE(190)] = 1827,
  [SMALL_STATE(191)] = 1831,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(137),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(190),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(188),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(187),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(186),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(185),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(184),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(183),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(180),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(178),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(173),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(92),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(83),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 6),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_doc_attr, 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_doc_attr, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype, 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doctype, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_attr, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_doc_attr, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_doc_attr, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 6),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 6),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(59),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(115),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(116),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(61),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(118),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(119),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(121),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(122),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(73),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 4),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(176),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(91),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_content, 1),
  [586] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(95),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [699] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_mark, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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
