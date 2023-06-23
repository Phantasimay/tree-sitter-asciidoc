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
#define STATE_COUNT 204
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 0
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_description = 19,
  aux_sym__doc_description_token1 = 20,
  anon_sym_url_DASHrepo = 21,
  anon_sym_hide_DASHuri_DASHscheme = 22,
  anon_sym_sectanchors = 23,
  sym_attr_mark = 24,
  aux_sym_attr_name_token1 = 25,
  anon_sym_NOTE_COLON = 26,
  anon_sym_LBRACKNOTE_RBRACK_LF = 27,
  anon_sym_DASH_DASH_DASH_DASH_LF = 28,
  aux_sym__note_block_token1 = 29,
  anon_sym_TIP_COLON = 30,
  anon_sym_LBRACKTIP_RBRACK_LF = 31,
  anon_sym_IMPORTANT_COLON = 32,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 33,
  anon_sym_CAUTION_COLON = 34,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 35,
  anon_sym_WARNING_COLON = 36,
  anon_sym_LBRACKWARNING_RBRACK_LF = 37,
  anon_sym_ = 38,
  sym__unordered_list_mark = 39,
  aux_sym__ordered_list_mark_token1 = 40,
  aux_sym__ordered_list_mark_token2 = 41,
  aux_sym__ordered_list_mark_token3 = 42,
  sym__checklist_mark = 43,
  aux_sym_code_token1 = 44,
  anon_sym_RBRACK_LF = 45,
  aux_sym_code_language_token1 = 46,
  anon_sym_SLASH_SLASH = 47,
  aux_sym_comment_token1 = 48,
  aux_sym_line_breaks_token1 = 49,
  anon_sym_LT_LT_LT_LF_LF = 50,
  anon_sym_image_COLON_COLON = 51,
  anon_sym_LBRACK = 52,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 53,
  anon_sym_COLON_COLON = 54,
  anon_sym_audio_COLON_COLON = 55,
  anon_sym_RBRACK = 56,
  aux_sym_audio_url_token1 = 57,
  anon_sym_video_COLON_COLON = 58,
  anon_sym_LF_LF = 59,
  anon_sym_kbd_COLON_LBRACK = 60,
  sym_kbd_content = 61,
  anon_sym_footnote_COLON_LBRACK = 62,
  sym_footnote_content = 63,
  aux_sym_url_token1 = 64,
  aux_sym_url_token2 = 65,
  anon_sym_LT_LT = 66,
  anon_sym_COMMA = 67,
  anon_sym_GT_GT = 68,
  anon_sym_xref_COLON = 69,
  sym_emphasis = 70,
  sym_strong = 71,
  sym_monospace = 72,
  sym_highlight = 73,
  sym_superscript = 74,
  sym_subscript = 75,
  anon_sym_PLUS_PLUS_PLUS = 76,
  anon_sym_pass_COLON_LBRACK = 77,
  anon_sym_LBRACEblank_RBRACE = 78,
  anon_sym_LBRACEempty_RBRACE = 79,
  anon_sym_LBRACEsp_RBRACE = 80,
  anon_sym_LBRACEnbsp_RBRACE = 81,
  anon_sym_LBRACEzwsp_RBRACE = 82,
  anon_sym_LBRACEwj_RBRACE = 83,
  anon_sym_LBRACEapos_RBRACE = 84,
  anon_sym_LBRACEquot_RBRACE = 85,
  anon_sym_LBRACElsquo_RBRACE = 86,
  anon_sym_LBRACErsquo_RBRACE = 87,
  anon_sym_LBRACEldquo_RBRACE = 88,
  anon_sym_LBRACErdquo_RBRACE = 89,
  anon_sym_LBRACEdeg_RBRACE = 90,
  anon_sym_LBRACEplus_RBRACE = 91,
  anon_sym_LBRACEbrvbar_RBRACE = 92,
  anon_sym_LBRACEvbar_RBRACE = 93,
  anon_sym_LBRACEamp_RBRACE = 94,
  anon_sym_LBRACElt_RBRACE = 95,
  anon_sym_LBRACEgt_RBRACE = 96,
  anon_sym_LBRACEstartsb_RBRACE = 97,
  anon_sym_LBRACEendsb_RBRACE = 98,
  anon_sym_LBRACEcaret_RBRACE = 99,
  anon_sym_LBRACEasterisk_RBRACE = 100,
  anon_sym_LBRACEtilde_RBRACE = 101,
  anon_sym_LBRACEbackslash_RBRACE = 102,
  anon_sym_LBRACEbacktick_RBRACE = 103,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 104,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 105,
  anon_sym_LBRACEcpp_RBRACE = 106,
  anon_sym_LBRACEpp_RBRACE = 107,
  sym_document = 108,
  sym__block = 109,
  sym__titled_block = 110,
  sym_block_title = 111,
  sym_title0 = 112,
  sym_author_info = 113,
  sym__doctype = 114,
  sym__doc_description = 115,
  sym__url_repo = 116,
  sym_urlrepo_value = 117,
  sym__hide_uri_scheme = 118,
  sym__sectanchors = 119,
  sym_doc_attr = 120,
  sym__admonitions = 121,
  sym_note = 122,
  sym__note_line = 123,
  sym__note_block = 124,
  sym_tip = 125,
  sym__tip = 126,
  sym__tip_block = 127,
  sym_important = 128,
  sym__important = 129,
  sym__important_block = 130,
  sym_caution = 131,
  sym__caution = 132,
  sym__caution_block = 133,
  sym_warning = 134,
  sym__warning = 135,
  sym__warning_block = 136,
  sym_list = 137,
  sym_list_item = 138,
  sym_list_item_mark = 139,
  sym_list_item_content = 140,
  sym__ordered_list_mark = 141,
  sym_code = 142,
  sym_code_language = 143,
  sym_code_content = 144,
  sym_comment = 145,
  sym_line_breaks = 146,
  sym_page_breaks = 147,
  sym_image = 148,
  sym_table = 149,
  sym_table_start = 150,
  sym_table_content = 151,
  sym_table_end = 152,
  sym_description_list = 153,
  sym_audio = 154,
  sym_audio_url = 155,
  sym_audio_title = 156,
  sym_video = 157,
  sym_paragraph = 158,
  sym__inline_element = 159,
  sym_kbd = 160,
  sym_footnote = 161,
  sym_url = 162,
  sym_xref = 163,
  sym__inline_xref = 164,
  sym__xref = 165,
  sym_xref_url = 166,
  sym_passthrough = 167,
  sym__passthrough_plus = 168,
  sym__passthrough_cmd = 169,
  sym_passthrough_content = 170,
  sym_replacement = 171,
  aux_sym_document_repeat1 = 172,
  aux_sym_title0_repeat1 = 173,
  aux_sym__note_block_repeat1 = 174,
  aux_sym_list_repeat1 = 175,
  aux_sym_table_content_repeat1 = 176,
  aux_sym_paragraph_repeat1 = 177,
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
  [anon_sym_description] = "attr_name",
  [aux_sym__doc_description_token1] = "_doc_description_token1",
  [anon_sym_url_DASHrepo] = "attr_name",
  [anon_sym_hide_DASHuri_DASHscheme] = "attr_name",
  [anon_sym_sectanchors] = "attr_name",
  [sym_attr_mark] = "attr_mark",
  [aux_sym_attr_name_token1] = "attr_name_token1",
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
  [sym_title0] = "title0",
  [sym_author_info] = "author_info",
  [sym__doctype] = "_doctype",
  [sym__doc_description] = "_doc_description",
  [sym__url_repo] = "_url_repo",
  [sym_urlrepo_value] = "urlrepo_value",
  [sym__hide_uri_scheme] = "_hide_uri_scheme",
  [sym__sectanchors] = "_sectanchors",
  [sym_doc_attr] = "doc_attr",
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
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_article] = anon_sym_article,
  [anon_sym_book] = anon_sym_article,
  [anon_sym_manpage] = anon_sym_article,
  [anon_sym_inline] = anon_sym_article,
  [anon_sym_description] = anon_sym_doctype,
  [aux_sym__doc_description_token1] = aux_sym__doc_description_token1,
  [anon_sym_url_DASHrepo] = anon_sym_doctype,
  [anon_sym_hide_DASHuri_DASHscheme] = anon_sym_doctype,
  [anon_sym_sectanchors] = anon_sym_doctype,
  [sym_attr_mark] = sym_attr_mark,
  [aux_sym_attr_name_token1] = aux_sym_attr_name_token1,
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
  [sym_title0] = sym_title0,
  [sym_author_info] = sym_author_info,
  [sym__doctype] = sym__doctype,
  [sym__doc_description] = sym__doc_description,
  [sym__url_repo] = sym__url_repo,
  [sym_urlrepo_value] = sym_urlrepo_value,
  [sym__hide_uri_scheme] = sym__hide_uri_scheme,
  [sym__sectanchors] = sym__sectanchors,
  [sym_doc_attr] = sym_doc_attr,
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
  [anon_sym_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__doc_description_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_url_DASHrepo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hide_DASHuri_DASHscheme] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sectanchors] = {
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
  [sym__doc_description] = {
    .visible = false,
    .named = true,
  },
  [sym__url_repo] = {
    .visible = false,
    .named = true,
  },
  [sym_urlrepo_value] = {
    .visible = true,
    .named = true,
  },
  [sym__hide_uri_scheme] = {
    .visible = false,
    .named = true,
  },
  [sym__sectanchors] = {
    .visible = false,
    .named = true,
  },
  [sym_doc_attr] = {
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
  [7] = {.index = 7, .length = 2},
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
  [6] = {
    [3] = anon_sym_article,
  },
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
  [112] = 64,
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
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 114,
  [201] = 65,
  [202] = 134,
  [203] = 179,
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
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '*') ADVANCE(677);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(850);
      if (lookahead == '-') ADVANCE(641);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '0') ADVANCE(540);
      if (lookahead == ':') ADVANCE(638);
      if (lookahead == '<') ADVANCE(422);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(424);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'I') ADVANCE(448);
      if (lookahead == 'N') ADVANCE(453);
      if (lookahead == 'T') ADVANCE(445);
      if (lookahead == 'W') ADVANCE(441);
      if (lookahead == '[') ADVANCE(829);
      if (lookahead == ']') ADVANCE(834);
      if (lookahead == '^') ADVANCE(392);
      if (lookahead == '_') ADVANCE(543);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == 'b') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead == 'f') ADVANCE(514);
      if (lookahead == 'h') ADVANCE(495);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead == 'k') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(465);
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(526);
      if (lookahead == 'v') ADVANCE(501);
      if (lookahead == 'x') ADVANCE(525);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '|') ADVANCE(145);
      if (lookahead == '~') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(825);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(826);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(831);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(698);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(666);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == ':') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(661);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(661);
      if (lookahead == ':') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(670);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == ':') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(672);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == ':') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(668);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(668);
      if (lookahead == ':') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(837);
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '[') ADVANCE(830);
      if (lookahead == '^') ADVANCE(105);
      if (lookahead == '_') ADVANCE(725);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(764);
      if (lookahead == 'k') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(750);
      if (lookahead == 'x') ADVANCE(769);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '~') ADVANCE(394);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '*') ADVANCE(678);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == '.') ADVANCE(685);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(662);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(662);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '|') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(405);
      if (lookahead != 0) ADVANCE(404);
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
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '<') ADVANCE(421);
      if (lookahead == '[') ADVANCE(828);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(390);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '[') ADVANCE(830);
      if (lookahead == '^') ADVANCE(105);
      if (lookahead == '_') ADVANCE(725);
      if (lookahead == '`') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(764);
      if (lookahead == 'k') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(750);
      if (lookahead == 'x') ADVANCE(769);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '~') ADVANCE(394);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(29)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead != 0) ADVANCE(631);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(2);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(821);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(665);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(665);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(660);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(660);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(420);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(669);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(669);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(671);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(671);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(667);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(667);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(832);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(673);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(721);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(699);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'N') ADVANCE(703);
      if (lookahead == 'T') ADVANCE(701);
      if (lookahead == 'W') ADVANCE(700);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '_') ADVANCE(722);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead == 'f') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead == 'k') ADVANCE(705);
      if (lookahead == 'p') ADVANCE(704);
      if (lookahead == 'v') ADVANCE(706);
      if (lookahead == 'x') ADVANCE(709);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '~') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(611);
      if (lookahead == ':') ADVANCE(639);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(550);
      if (lookahead == 'I') ADVANCE(558);
      if (lookahead == 'N') ADVANCE(563);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == 'W') ADVANCE(551);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '_') ADVANCE(614);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'k') ADVANCE(577);
      if (lookahead == 'p') ADVANCE(575);
      if (lookahead == 'v') ADVANCE(588);
      if (lookahead == 'x') ADVANCE(596);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '~') ADVANCE(85);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(857);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(857);
      if (lookahead == ']') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(856);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(678);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == '.') ADVANCE(685);
      if (lookahead == '0') ADVANCE(721);
      if (lookahead == 'C') ADVANCE(712);
      if (lookahead == 'I') ADVANCE(715);
      if (lookahead == 'N') ADVANCE(716);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == 'W') ADVANCE(713);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(718);
      if (lookahead == 'v') ADVANCE(717);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == '+') ADVANCE(864);
      END_STATE();
    case 60:
      if (lookahead == '+') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '.') ADVANCE(687);
      END_STATE();
    case 62:
      if (lookahead == ',') ADVANCE(850);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead == '[') ADVANCE(828);
      if (lookahead == ']') ADVANCE(834);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(284);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 'h') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      END_STATE();
    case 63:
      if (lookahead == ',') ADVANCE(697);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 'W') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 64:
      if (lookahead == ',') ADVANCE(697);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(157);
      if (lookahead == 'N') ADVANCE(162);
      if (lookahead == 'T') ADVANCE(154);
      if (lookahead == 'W') ADVANCE(150);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == '.') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(322);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(687);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '<') ADVANCE(849);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '=') ADVANCE(143);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '>') ADVANCE(851);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'q') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(203);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == 'z') ADVANCE(349);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 84:
      if (lookahead == '.') ADVANCE(692);
      if (lookahead == ':') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 85:
      if (lookahead == '.') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(382);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(846);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(843);
      if (lookahead == '^') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(844);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(845);
      if (lookahead == '`') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '^') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 92:
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 93:
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '`') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 94:
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(833);
      END_STATE();
    case 96:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(827);
      END_STATE();
    case 97:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(836);
      END_STATE();
    case 98:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '[') ADVANCE(838);
      END_STATE();
    case 99:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '[') ADVANCE(865);
      END_STATE();
    case 100:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '[') ADVANCE(841);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(833);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(827);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(836);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '^') ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(854);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '`') ADVANCE(858);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '@') ADVANCE(387);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(134);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(128);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(121);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'G') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'M') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'U') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ']') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ']') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ']') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ']') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == ':') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 142:
      if (lookahead == '<') ADVANCE(848);
      END_STATE();
    case 143:
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 145:
      if (lookahead == '=') ADVANCE(143);
      END_STATE();
    case 146:
      if (lookahead == '>') ADVANCE(851);
      END_STATE();
    case 147:
      if (lookahead == '>') ADVANCE(423);
      if (lookahead == '[') ADVANCE(828);
      if (lookahead == ']') ADVANCE(834);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(835);
      END_STATE();
    case 148:
      if (lookahead == '@') ADVANCE(387);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      if (lookahead == 'A') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'A') ADVANCE(167);
      END_STATE();
    case 151:
      if (lookahead == 'A') ADVANCE(160);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 153:
      if (lookahead == 'G') ADVANCE(184);
      END_STATE();
    case 154:
      if (lookahead == 'I') ADVANCE(166);
      END_STATE();
    case 155:
      if (lookahead == 'I') ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == 'I') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 'M') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 159:
      if (lookahead == 'N') ADVANCE(155);
      END_STATE();
    case 160:
      if (lookahead == 'N') ADVANCE(172);
      END_STATE();
    case 161:
      if (lookahead == 'N') ADVANCE(183);
      END_STATE();
    case 162:
      if (lookahead == 'O') ADVANCE(169);
      END_STATE();
    case 163:
      if (lookahead == 'O') ADVANCE(168);
      END_STATE();
    case 164:
      if (lookahead == 'O') ADVANCE(161);
      END_STATE();
    case 165:
      if (lookahead == 'P') ADVANCE(163);
      END_STATE();
    case 166:
      if (lookahead == 'P') ADVANCE(181);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(159);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 172:
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 173:
      if (lookahead == 'U') ADVANCE(170);
      END_STATE();
    case 174:
      if (lookahead == '[') ADVANCE(838);
      END_STATE();
    case 175:
      if (lookahead == '[') ADVANCE(865);
      END_STATE();
    case 176:
      if (lookahead == '[') ADVANCE(841);
      END_STATE();
    case 177:
      if (lookahead == '[') ADVANCE(383);
      END_STATE();
    case 178:
      if (lookahead == ']') ADVANCE(834);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(178)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(839);
      END_STATE();
    case 179:
      if (lookahead == ']') ADVANCE(834);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(179)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      END_STATE();
    case 180:
      if (lookahead == ']') ADVANCE(694);
      END_STATE();
    case 181:
      if (lookahead == ']') ADVANCE(5);
      END_STATE();
    case 182:
      if (lookahead == ']') ADVANCE(7);
      END_STATE();
    case 183:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 184:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 185:
      if (lookahead == ']') ADVANCE(13);
      END_STATE();
    case 186:
      if (lookahead == '^') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 187:
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 188:
      if (lookahead == '`') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'b') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'q') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(203);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == 'z') ADVANCE(349);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 200:
      if (lookahead == 'b') ADVANCE(329);
      END_STATE();
    case 201:
      if (lookahead == 'b') ADVANCE(369);
      END_STATE();
    case 202:
      if (lookahead == 'b') ADVANCE(376);
      END_STATE();
    case 203:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 204:
      if (lookahead == 'b') ADVANCE(199);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(359);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(282);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(379);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'w') ADVANCE(276);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 250:
      if (lookahead == 'j') ADVANCE(356);
      END_STATE();
    case 251:
      if (lookahead == 'k') ADVANCE(319);
      END_STATE();
    case 252:
      if (lookahead == 'k') ADVANCE(622);
      END_STATE();
    case 253:
      if (lookahead == 'k') ADVANCE(366);
      END_STATE();
    case 254:
      if (lookahead == 'k') ADVANCE(377);
      END_STATE();
    case 255:
      if (lookahead == 'k') ADVANCE(378);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 264:
      if (lookahead == 'm') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(278);
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 265:
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 266:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 267:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 292:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 293:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 294:
      if (lookahead == 'p') ADVANCE(355);
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 295:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 296:
      if (lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 297:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 298:
      if (lookahead == 'p') ADVANCE(361);
      END_STATE();
    case 299:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 300:
      if (lookahead == 'p') ADVANCE(365);
      END_STATE();
    case 301:
      if (lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 302:
      if (lookahead == 'q') ADVANCE(342);
      END_STATE();
    case 303:
      if (lookahead == 'q') ADVANCE(344);
      END_STATE();
    case 304:
      if (lookahead == 'q') ADVANCE(346);
      END_STATE();
    case 305:
      if (lookahead == 'q') ADVANCE(347);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(258);
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 323:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 324:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 325:
      if (lookahead == 's') ADVANCE(380);
      END_STATE();
    case 326:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 327:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 328:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 329:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 330:
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 341:
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 342:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 344:
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 345:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 346:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 347:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 348:
      if (lookahead == 'v') ADVANCE(204);
      END_STATE();
    case 349:
      if (lookahead == 'w') ADVANCE(330);
      END_STATE();
    case 350:
      if (lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 351:
      if (lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 352:
      if (lookahead == '}') ADVANCE(884);
      END_STATE();
    case 353:
      if (lookahead == '}') ADVANCE(883);
      END_STATE();
    case 354:
      if (lookahead == '}') ADVANCE(895);
      END_STATE();
    case 355:
      if (lookahead == '}') ADVANCE(868);
      END_STATE();
    case 356:
      if (lookahead == '}') ADVANCE(871);
      END_STATE();
    case 357:
      if (lookahead == '}') ADVANCE(882);
      END_STATE();
    case 358:
      if (lookahead == '}') ADVANCE(894);
      END_STATE();
    case 359:
      if (lookahead == '}') ADVANCE(878);
      END_STATE();
    case 360:
      if (lookahead == '}') ADVANCE(872);
      END_STATE();
    case 361:
      if (lookahead == '}') ADVANCE(869);
      END_STATE();
    case 362:
      if (lookahead == '}') ADVANCE(879);
      END_STATE();
    case 363:
      if (lookahead == '}') ADVANCE(873);
      END_STATE();
    case 364:
      if (lookahead == '}') ADVANCE(881);
      END_STATE();
    case 365:
      if (lookahead == '}') ADVANCE(870);
      END_STATE();
    case 366:
      if (lookahead == '}') ADVANCE(866);
      END_STATE();
    case 367:
      if (lookahead == '}') ADVANCE(887);
      END_STATE();
    case 368:
      if (lookahead == '}') ADVANCE(867);
      END_STATE();
    case 369:
      if (lookahead == '}') ADVANCE(886);
      END_STATE();
    case 370:
      if (lookahead == '}') ADVANCE(876);
      END_STATE();
    case 371:
      if (lookahead == '}') ADVANCE(874);
      END_STATE();
    case 372:
      if (lookahead == '}') ADVANCE(877);
      END_STATE();
    case 373:
      if (lookahead == '}') ADVANCE(875);
      END_STATE();
    case 374:
      if (lookahead == '}') ADVANCE(889);
      END_STATE();
    case 375:
      if (lookahead == '}') ADVANCE(880);
      END_STATE();
    case 376:
      if (lookahead == '}') ADVANCE(885);
      END_STATE();
    case 377:
      if (lookahead == '}') ADVANCE(888);
      END_STATE();
    case 378:
      if (lookahead == '}') ADVANCE(891);
      END_STATE();
    case 379:
      if (lookahead == '}') ADVANCE(890);
      END_STATE();
    case 380:
      if (lookahead == '}') ADVANCE(892);
      END_STATE();
    case 381:
      if (lookahead == '}') ADVANCE(893);
      END_STATE();
    case 382:
      if (lookahead == '~') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(382);
      END_STATE();
    case 383:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(180);
      END_STATE();
    case 384:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 385:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 386:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 387:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 388:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      END_STATE();
    case 389:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(840);
      END_STATE();
    case 390:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 391:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 392:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 393:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 394:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(382);
      END_STATE();
    case 395:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(721);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'C') ADVANCE(699);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'N') ADVANCE(703);
      if (lookahead == 'T') ADVANCE(701);
      if (lookahead == 'W') ADVANCE(700);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '_') ADVANCE(722);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead == 'f') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead == 'k') ADVANCE(705);
      if (lookahead == 'p') ADVANCE(704);
      if (lookahead == 'v') ADVANCE(706);
      if (lookahead == 'x') ADVANCE(709);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '~') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 396:
      if (eof) ADVANCE(397);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(611);
      if (lookahead == ':') ADVANCE(639);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(550);
      if (lookahead == 'I') ADVANCE(558);
      if (lookahead == 'N') ADVANCE(563);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == 'W') ADVANCE(551);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '_') ADVANCE(614);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'k') ADVANCE(577);
      if (lookahead == 'p') ADVANCE(575);
      if (lookahead == 'v') ADVANCE(588);
      if (lookahead == 'x') ADVANCE(596);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '~') ADVANCE(85);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(685);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(831);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '=') ADVANCE(400);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '=') ADVANCE(401);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '|') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(405);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '|') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(404);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_title1);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_title1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_title5);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(849);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(851);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'A') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'A') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'A') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'E') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'G') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'M') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'N') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'N') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'N') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'N') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'O') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'O') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'O') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'P') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'R') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'R') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'U') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'a') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'b') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'c') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'c') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'c') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'c') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'c') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'd') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'd') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'd') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'd') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == 'o') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'f') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'g') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'g') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'h') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'i') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'k') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'l') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'l') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'l') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'm') ADVANCE(466);
      if (lookahead == 'n') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 's') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 's') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 's') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 's') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 't') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 't') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 't') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 't') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 't') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == 'y') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(645);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '_') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(645);
      if (lookahead == '.') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(655);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(658);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(38);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(853);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(574);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(568);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(561);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(603);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'G') ADVANCE(609);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(567);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(559);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(565);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'M') ADVANCE(566);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(554);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(556);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(573);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(606);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(570);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(569);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(562);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(564);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(546);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(560);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(572);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(553);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(557);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(552);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(610);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'U') ADVANCE(571);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(597);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(586);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(580);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(587);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(584);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(547);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(585);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(605);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(607);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(595);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(548);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'g') ADVANCE(582);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(594);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(579);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(576);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(593);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(599);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(591);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(600);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(549);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(608);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(581);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 's') ADVANCE(598);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 's') ADVANCE(604);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 't') ADVANCE(590);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 't') ADVANCE(583);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(578);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(41);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(99);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(96);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(44);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(100);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(46);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == ':') ADVANCE(48);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(613);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == ':') ADVANCE(92);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '_') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead == '.') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_article);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_article);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_book);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_book);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_manpage);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_manpage);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(541);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_attr_mark);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_attr_mark);
      if (lookahead == '.') ADVANCE(687);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(684);
      if (lookahead == '-') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(683);
      if (lookahead == '-') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(675);
      if (lookahead == '-') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(684);
      if (lookahead == '-') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'h') ADVANCE(648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'm') ADVANCE(649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'p') ADVANCE(653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'u') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(680);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(684);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(177);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(684);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(674);
      if (lookahead == '-') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(680);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(683);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(684);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(675);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(382);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(696);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(749);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(743);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(742);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'M') ADVANCE(741);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(745);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(770);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(755);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(754);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(751);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(765);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(756);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(753);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'A') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'A') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'I') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'M') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'O') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'i') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'm') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'u') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(691);
      if (lookahead == ':') ADVANCE(92);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(724);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(92);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(38);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(853);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(737);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(777);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'G') ADVANCE(785);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(740);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(735);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(732);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(734);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(748);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(782);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(744);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(738);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(739);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(726);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(736);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(747);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(731);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(733);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(730);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(787);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'U') ADVANCE(746);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(770);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(761);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(755);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(762);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(759);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(727);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(760);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(779);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(783);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(768);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(728);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'g') ADVANCE(757);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(767);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(766);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(765);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(772);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(773);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(729);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(784);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(756);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 's') ADVANCE(771);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 's') ADVANCE(778);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 't') ADVANCE(763);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 't') ADVANCE(758);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(41);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(99);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(96);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(44);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(100);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(46);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(48);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'g') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(820);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(823);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(823);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead != 0) ADVANCE(824);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(697);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(835);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(839);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(840);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(843);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(843);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(844);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(845);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(847);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(30);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(854);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(857);
      if (lookahead == ']') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '`') ADVANCE(858);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '^') ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(186);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(382);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 395},
  [2] = {.lex_state = 395},
  [3] = {.lex_state = 395},
  [4] = {.lex_state = 396},
  [5] = {.lex_state = 396},
  [6] = {.lex_state = 396},
  [7] = {.lex_state = 396},
  [8] = {.lex_state = 396},
  [9] = {.lex_state = 396},
  [10] = {.lex_state = 396},
  [11] = {.lex_state = 396},
  [12] = {.lex_state = 396},
  [13] = {.lex_state = 396},
  [14] = {.lex_state = 396},
  [15] = {.lex_state = 396},
  [16] = {.lex_state = 396},
  [17] = {.lex_state = 396},
  [18] = {.lex_state = 396},
  [19] = {.lex_state = 395},
  [20] = {.lex_state = 395},
  [21] = {.lex_state = 395},
  [22] = {.lex_state = 395},
  [23] = {.lex_state = 395},
  [24] = {.lex_state = 395},
  [25] = {.lex_state = 395},
  [26] = {.lex_state = 395},
  [27] = {.lex_state = 395},
  [28] = {.lex_state = 395},
  [29] = {.lex_state = 395},
  [30] = {.lex_state = 395},
  [31] = {.lex_state = 395},
  [32] = {.lex_state = 395},
  [33] = {.lex_state = 395},
  [34] = {.lex_state = 395},
  [35] = {.lex_state = 395},
  [36] = {.lex_state = 395},
  [37] = {.lex_state = 395},
  [38] = {.lex_state = 395},
  [39] = {.lex_state = 395},
  [40] = {.lex_state = 395},
  [41] = {.lex_state = 395},
  [42] = {.lex_state = 395},
  [43] = {.lex_state = 395},
  [44] = {.lex_state = 395},
  [45] = {.lex_state = 395},
  [46] = {.lex_state = 395},
  [47] = {.lex_state = 395},
  [48] = {.lex_state = 395},
  [49] = {.lex_state = 395},
  [50] = {.lex_state = 395},
  [51] = {.lex_state = 395},
  [52] = {.lex_state = 395},
  [53] = {.lex_state = 395},
  [54] = {.lex_state = 395},
  [55] = {.lex_state = 395},
  [56] = {.lex_state = 395},
  [57] = {.lex_state = 395},
  [58] = {.lex_state = 395},
  [59] = {.lex_state = 395},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 58},
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
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 58},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 147},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 384},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 147},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 147},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 147},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 147},
  [109] = {.lex_state = 147},
  [110] = {.lex_state = 62},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 147},
  [114] = {.lex_state = 62},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 147},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 385},
  [119] = {.lex_state = 147},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 147},
  [122] = {.lex_state = 178},
  [123] = {.lex_state = 179},
  [124] = {.lex_state = 385},
  [125] = {.lex_state = 385},
  [126] = {.lex_state = 385},
  [127] = {.lex_state = 385},
  [128] = {.lex_state = 26},
  [129] = {.lex_state = 62},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 395},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 62},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 147},
  [137] = {.lex_state = 384},
  [138] = {.lex_state = 50},
  [139] = {.lex_state = 16},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 29},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 823},
  [147] = {.lex_state = 27},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 395},
  [154] = {.lex_state = 62},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 384},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 395},
  [163] = {.lex_state = 395},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 147},
  [167] = {.lex_state = 384},
  [168] = {.lex_state = 27},
  [169] = {.lex_state = 16},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 16},
  [173] = {.lex_state = 62},
  [174] = {.lex_state = 27},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 62},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 62},
  [179] = {.lex_state = 847},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 16},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 62},
  [184] = {.lex_state = 62},
  [185] = {.lex_state = 62},
  [186] = {.lex_state = 62},
  [187] = {.lex_state = 62},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 147},
  [190] = {.lex_state = 27},
  [191] = {.lex_state = 62},
  [192] = {.lex_state = 27},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 395},
  [195] = {.lex_state = 50},
  [196] = {.lex_state = 62},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 27},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 395},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 847},
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
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_url_DASHrepo] = ACTIONS(1),
    [anon_sym_hide_DASHuri_DASHscheme] = ACTIONS(1),
    [anon_sym_sectanchors] = ACTIONS(1),
    [sym_attr_mark] = ACTIONS(1),
    [aux_sym_attr_name_token1] = ACTIONS(1),
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
    [aux_sym_code_language_token1] = ACTIONS(1),
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
    [sym_document] = STATE(199),
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(62),
    [sym_title0] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(39),
    [sym__note_block] = STATE(39),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(40),
    [sym__tip_block] = STATE(40),
    [sym_important] = STATE(2),
    [sym__important] = STATE(41),
    [sym__important_block] = STATE(41),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(42),
    [sym__caution_block] = STATE(42),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(43),
    [sym__warning_block] = STATE(43),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(81),
    [sym_list_item_mark] = STATE(195),
    [sym__ordered_list_mark] = STATE(138),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(85),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(61),
    [sym_kbd] = STATE(61),
    [sym_footnote] = STATE(61),
    [sym_url] = STATE(61),
    [sym_xref] = STATE(61),
    [sym__inline_xref] = STATE(78),
    [sym__xref] = STATE(77),
    [sym_passthrough] = STATE(61),
    [sym__passthrough_plus] = STATE(76),
    [sym__passthrough_cmd] = STATE(76),
    [sym_replacement] = STATE(61),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(81),
    [aux_sym_paragraph_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(5),
    [aux_sym_title0_token1] = ACTIONS(7),
    [sym_title1] = ACTIONS(9),
    [sym_title2] = ACTIONS(9),
    [sym_title3] = ACTIONS(9),
    [sym_title4] = ACTIONS(9),
    [sym_title5] = ACTIONS(9),
    [anon_sym_NOTE_COLON] = ACTIONS(11),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(13),
    [anon_sym_TIP_COLON] = ACTIONS(15),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(17),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(19),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(21),
    [anon_sym_CAUTION_COLON] = ACTIONS(23),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(25),
    [anon_sym_WARNING_COLON] = ACTIONS(27),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(29),
    [sym__unordered_list_mark] = ACTIONS(31),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(31),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(33),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(31),
    [sym__checklist_mark] = ACTIONS(31),
    [aux_sym_code_token1] = ACTIONS(35),
    [aux_sym_code_language_token1] = ACTIONS(37),
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
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(62),
    [sym_title0] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(39),
    [sym__note_block] = STATE(39),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(40),
    [sym__tip_block] = STATE(40),
    [sym_important] = STATE(3),
    [sym__important] = STATE(41),
    [sym__important_block] = STATE(41),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(42),
    [sym__caution_block] = STATE(42),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(43),
    [sym__warning_block] = STATE(43),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(81),
    [sym_list_item_mark] = STATE(195),
    [sym__ordered_list_mark] = STATE(138),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(85),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(61),
    [sym_kbd] = STATE(61),
    [sym_footnote] = STATE(61),
    [sym_url] = STATE(61),
    [sym_xref] = STATE(61),
    [sym__inline_xref] = STATE(78),
    [sym__xref] = STATE(77),
    [sym_passthrough] = STATE(61),
    [sym__passthrough_plus] = STATE(76),
    [sym__passthrough_cmd] = STATE(76),
    [sym_replacement] = STATE(61),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(81),
    [aux_sym_paragraph_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(5),
    [aux_sym_title0_token1] = ACTIONS(7),
    [sym_title1] = ACTIONS(75),
    [sym_title2] = ACTIONS(75),
    [sym_title3] = ACTIONS(75),
    [sym_title4] = ACTIONS(75),
    [sym_title5] = ACTIONS(75),
    [anon_sym_NOTE_COLON] = ACTIONS(11),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(13),
    [anon_sym_TIP_COLON] = ACTIONS(15),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(17),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(19),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(21),
    [anon_sym_CAUTION_COLON] = ACTIONS(23),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(25),
    [anon_sym_WARNING_COLON] = ACTIONS(27),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(29),
    [sym__unordered_list_mark] = ACTIONS(31),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(31),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(33),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(31),
    [sym__checklist_mark] = ACTIONS(31),
    [aux_sym_code_token1] = ACTIONS(35),
    [aux_sym_code_language_token1] = ACTIONS(37),
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
  [3] = {
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(62),
    [sym_title0] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(39),
    [sym__note_block] = STATE(39),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(40),
    [sym__tip_block] = STATE(40),
    [sym_important] = STATE(3),
    [sym__important] = STATE(41),
    [sym__important_block] = STATE(41),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(42),
    [sym__caution_block] = STATE(42),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(43),
    [sym__warning_block] = STATE(43),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(81),
    [sym_list_item_mark] = STATE(195),
    [sym__ordered_list_mark] = STATE(138),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(85),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(61),
    [sym_kbd] = STATE(61),
    [sym_footnote] = STATE(61),
    [sym_url] = STATE(61),
    [sym_xref] = STATE(61),
    [sym__inline_xref] = STATE(78),
    [sym__xref] = STATE(77),
    [sym_passthrough] = STATE(61),
    [sym__passthrough_plus] = STATE(76),
    [sym__passthrough_cmd] = STATE(76),
    [sym_replacement] = STATE(61),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(81),
    [aux_sym_paragraph_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [aux_sym_title0_token1] = ACTIONS(82),
    [sym_title1] = ACTIONS(85),
    [sym_title2] = ACTIONS(85),
    [sym_title3] = ACTIONS(85),
    [sym_title4] = ACTIONS(85),
    [sym_title5] = ACTIONS(85),
    [anon_sym_NOTE_COLON] = ACTIONS(88),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(91),
    [anon_sym_TIP_COLON] = ACTIONS(94),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(97),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(100),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(103),
    [anon_sym_CAUTION_COLON] = ACTIONS(106),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(109),
    [anon_sym_WARNING_COLON] = ACTIONS(112),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(115),
    [sym__unordered_list_mark] = ACTIONS(118),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(118),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(121),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(118),
    [sym__checklist_mark] = ACTIONS(118),
    [aux_sym_code_token1] = ACTIONS(124),
    [aux_sym_code_language_token1] = ACTIONS(127),
    [anon_sym_SLASH_SLASH] = ACTIONS(130),
    [aux_sym_line_breaks_token1] = ACTIONS(133),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(136),
    [anon_sym_image_COLON_COLON] = ACTIONS(139),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(142),
    [anon_sym_audio_COLON_COLON] = ACTIONS(145),
    [anon_sym_video_COLON_COLON] = ACTIONS(148),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(151),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(154),
    [aux_sym_url_token1] = ACTIONS(157),
    [anon_sym_LT_LT] = ACTIONS(160),
    [anon_sym_xref_COLON] = ACTIONS(163),
    [sym_emphasis] = ACTIONS(166),
    [sym_strong] = ACTIONS(166),
    [sym_monospace] = ACTIONS(166),
    [sym_highlight] = ACTIONS(169),
    [sym_superscript] = ACTIONS(166),
    [sym_subscript] = ACTIONS(169),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(172),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(175),
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
  [4] = {
    [sym_author_info] = STATE(18),
    [sym__doctype] = STATE(18),
    [sym__doc_description] = STATE(18),
    [sym__url_repo] = STATE(18),
    [sym__hide_uri_scheme] = STATE(18),
    [sym__sectanchors] = STATE(18),
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
    [sym_author_info] = STATE(18),
    [sym__doctype] = STATE(18),
    [sym__doc_description] = STATE(18),
    [sym__url_repo] = STATE(18),
    [sym__hide_uri_scheme] = STATE(18),
    [sym__sectanchors] = STATE(18),
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
    [sym_author_info] = STATE(18),
    [sym__doctype] = STATE(18),
    [sym__doc_description] = STATE(18),
    [sym__url_repo] = STATE(18),
    [sym__hide_uri_scheme] = STATE(18),
    [sym__sectanchors] = STATE(18),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(245),
    [aux_sym_title0_token1] = ACTIONS(243),
    [sym_title1] = ACTIONS(243),
    [sym_title2] = ACTIONS(243),
    [sym_title3] = ACTIONS(243),
    [sym_title4] = ACTIONS(243),
    [sym_title5] = ACTIONS(243),
    [sym_name] = ACTIONS(245),
    [sym_attr_mark] = ACTIONS(245),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(245),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(245),
    [sym__checklist_mark] = ACTIONS(245),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_DOT] = ACTIONS(249),
    [aux_sym_title0_token1] = ACTIONS(247),
    [sym_title1] = ACTIONS(247),
    [sym_title2] = ACTIONS(247),
    [sym_title3] = ACTIONS(247),
    [sym_title4] = ACTIONS(247),
    [sym_title5] = ACTIONS(247),
    [sym_name] = ACTIONS(249),
    [sym_attr_mark] = ACTIONS(249),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(249),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(249),
    [sym__checklist_mark] = ACTIONS(249),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [aux_sym_title0_token1] = ACTIONS(251),
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
    [sym__unordered_list_mark] = ACTIONS(253),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(253),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(251),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(253),
    [sym__checklist_mark] = ACTIONS(253),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [aux_sym_title0_token1] = ACTIONS(255),
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
    [sym__unordered_list_mark] = ACTIONS(257),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(257),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(255),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(257),
    [sym__checklist_mark] = ACTIONS(257),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(261),
    [aux_sym_title0_token1] = ACTIONS(259),
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
    [sym__unordered_list_mark] = ACTIONS(261),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(261),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(259),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(261),
    [sym__checklist_mark] = ACTIONS(261),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(265),
    [aux_sym_title0_token1] = ACTIONS(263),
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
    [sym__unordered_list_mark] = ACTIONS(265),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(265),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(263),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(265),
    [sym__checklist_mark] = ACTIONS(265),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_DOT] = ACTIONS(269),
    [aux_sym_title0_token1] = ACTIONS(267),
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
    [sym__unordered_list_mark] = ACTIONS(269),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(269),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(267),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(269),
    [sym__checklist_mark] = ACTIONS(269),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(273),
    [aux_sym_title0_token1] = ACTIONS(271),
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
    [sym__unordered_list_mark] = ACTIONS(273),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(273),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(271),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(273),
    [sym__checklist_mark] = ACTIONS(273),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(277),
    [aux_sym_title0_token1] = ACTIONS(275),
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
    [sym__unordered_list_mark] = ACTIONS(277),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(277),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(275),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(277),
    [sym__checklist_mark] = ACTIONS(277),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(281),
    [aux_sym_title0_token1] = ACTIONS(279),
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
    [sym__unordered_list_mark] = ACTIONS(281),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(281),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(279),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(281),
    [sym__checklist_mark] = ACTIONS(281),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(285),
    [aux_sym_title0_token1] = ACTIONS(283),
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
    [sym__unordered_list_mark] = ACTIONS(285),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(285),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(283),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(285),
    [sym__checklist_mark] = ACTIONS(285),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(289),
    [aux_sym_title0_token1] = ACTIONS(287),
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
    [sym__unordered_list_mark] = ACTIONS(289),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(289),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(287),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(289),
    [sym__checklist_mark] = ACTIONS(289),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(293),
    [aux_sym_title0_token1] = ACTIONS(291),
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
    [sym__unordered_list_mark] = ACTIONS(293),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(293),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(291),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(293),
    [sym__checklist_mark] = ACTIONS(293),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(297),
    [aux_sym_title0_token1] = ACTIONS(295),
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
    [sym__unordered_list_mark] = ACTIONS(297),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(297),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(295),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(297),
    [sym__checklist_mark] = ACTIONS(297),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(301),
    [aux_sym_title0_token1] = ACTIONS(299),
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
    [sym__unordered_list_mark] = ACTIONS(301),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(301),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(299),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(301),
    [sym__checklist_mark] = ACTIONS(301),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(305),
    [aux_sym_title0_token1] = ACTIONS(303),
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
    [sym__unordered_list_mark] = ACTIONS(305),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(305),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(303),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(305),
    [sym__checklist_mark] = ACTIONS(305),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(309),
    [aux_sym_title0_token1] = ACTIONS(307),
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
    [sym__unordered_list_mark] = ACTIONS(309),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(309),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(307),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(309),
    [sym__checklist_mark] = ACTIONS(309),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(313),
    [aux_sym_title0_token1] = ACTIONS(311),
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
    [sym__unordered_list_mark] = ACTIONS(313),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(313),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(311),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(313),
    [sym__checklist_mark] = ACTIONS(313),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(317),
    [aux_sym_title0_token1] = ACTIONS(315),
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
    [sym__unordered_list_mark] = ACTIONS(317),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(317),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(315),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(317),
    [sym__checklist_mark] = ACTIONS(317),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(321),
    [aux_sym_title0_token1] = ACTIONS(319),
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
    [sym__unordered_list_mark] = ACTIONS(321),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(321),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(319),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(321),
    [sym__checklist_mark] = ACTIONS(321),
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
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(325),
    [aux_sym_title0_token1] = ACTIONS(323),
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
    [sym__unordered_list_mark] = ACTIONS(325),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(325),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(323),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(325),
    [sym__checklist_mark] = ACTIONS(325),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(329),
    [aux_sym_title0_token1] = ACTIONS(327),
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
    [sym__unordered_list_mark] = ACTIONS(329),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(329),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(327),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(329),
    [sym__checklist_mark] = ACTIONS(329),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(333),
    [aux_sym_title0_token1] = ACTIONS(331),
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
    [sym__unordered_list_mark] = ACTIONS(333),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(333),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(331),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(333),
    [sym__checklist_mark] = ACTIONS(333),
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
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(337),
    [aux_sym_title0_token1] = ACTIONS(335),
    [sym_title1] = ACTIONS(335),
    [sym_title2] = ACTIONS(335),
    [sym_title3] = ACTIONS(335),
    [sym_title4] = ACTIONS(335),
    [sym_title5] = ACTIONS(335),
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
    [aux_sym_code_language_token1] = ACTIONS(337),
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
    [aux_sym_code_language_token1] = ACTIONS(341),
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
    [aux_sym_code_language_token1] = ACTIONS(345),
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
    [aux_sym_code_language_token1] = ACTIONS(349),
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
    [aux_sym_code_language_token1] = ACTIONS(353),
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
    [aux_sym_code_language_token1] = ACTIONS(357),
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
    [aux_sym_code_language_token1] = ACTIONS(361),
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
    [aux_sym_code_language_token1] = ACTIONS(365),
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
    [aux_sym_code_language_token1] = ACTIONS(369),
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
    [aux_sym_code_language_token1] = ACTIONS(373),
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
    [aux_sym_code_language_token1] = ACTIONS(377),
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
    [aux_sym_code_language_token1] = ACTIONS(381),
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
    [aux_sym_code_language_token1] = ACTIONS(385),
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
    [aux_sym_code_language_token1] = ACTIONS(389),
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
    [aux_sym_code_language_token1] = ACTIONS(393),
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
    [aux_sym_code_language_token1] = ACTIONS(397),
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
    [aux_sym_code_language_token1] = ACTIONS(401),
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
    [aux_sym_code_language_token1] = ACTIONS(405),
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
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_DOT] = ACTIONS(409),
    [aux_sym_title0_token1] = ACTIONS(407),
    [sym_title1] = ACTIONS(407),
    [sym_title2] = ACTIONS(407),
    [sym_title3] = ACTIONS(407),
    [sym_title4] = ACTIONS(407),
    [sym_title5] = ACTIONS(407),
    [anon_sym_NOTE_COLON] = ACTIONS(407),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(407),
    [anon_sym_TIP_COLON] = ACTIONS(407),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(407),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(407),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(407),
    [anon_sym_CAUTION_COLON] = ACTIONS(407),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(407),
    [anon_sym_WARNING_COLON] = ACTIONS(407),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(407),
    [sym__unordered_list_mark] = ACTIONS(409),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(409),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(407),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(409),
    [sym__checklist_mark] = ACTIONS(409),
    [aux_sym_code_token1] = ACTIONS(407),
    [aux_sym_code_language_token1] = ACTIONS(409),
    [anon_sym_SLASH_SLASH] = ACTIONS(407),
    [aux_sym_line_breaks_token1] = ACTIONS(407),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(407),
    [anon_sym_image_COLON_COLON] = ACTIONS(407),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(407),
    [anon_sym_audio_COLON_COLON] = ACTIONS(407),
    [anon_sym_video_COLON_COLON] = ACTIONS(407),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(407),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(407),
    [aux_sym_url_token1] = ACTIONS(409),
    [anon_sym_LT_LT] = ACTIONS(409),
    [anon_sym_xref_COLON] = ACTIONS(409),
    [sym_emphasis] = ACTIONS(409),
    [sym_strong] = ACTIONS(409),
    [sym_monospace] = ACTIONS(409),
    [sym_highlight] = ACTIONS(407),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(407),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(407),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(407),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(407),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_DOT] = ACTIONS(413),
    [aux_sym_title0_token1] = ACTIONS(411),
    [sym_title1] = ACTIONS(411),
    [sym_title2] = ACTIONS(411),
    [sym_title3] = ACTIONS(411),
    [sym_title4] = ACTIONS(411),
    [sym_title5] = ACTIONS(411),
    [anon_sym_NOTE_COLON] = ACTIONS(411),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(411),
    [anon_sym_TIP_COLON] = ACTIONS(411),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(411),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(411),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(411),
    [anon_sym_CAUTION_COLON] = ACTIONS(411),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(411),
    [anon_sym_WARNING_COLON] = ACTIONS(411),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(411),
    [sym__unordered_list_mark] = ACTIONS(413),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(413),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(411),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(413),
    [sym__checklist_mark] = ACTIONS(413),
    [aux_sym_code_token1] = ACTIONS(411),
    [aux_sym_code_language_token1] = ACTIONS(413),
    [anon_sym_SLASH_SLASH] = ACTIONS(411),
    [aux_sym_line_breaks_token1] = ACTIONS(411),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(411),
    [anon_sym_image_COLON_COLON] = ACTIONS(411),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(411),
    [anon_sym_audio_COLON_COLON] = ACTIONS(411),
    [anon_sym_video_COLON_COLON] = ACTIONS(411),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(411),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(411),
    [aux_sym_url_token1] = ACTIONS(413),
    [anon_sym_LT_LT] = ACTIONS(413),
    [anon_sym_xref_COLON] = ACTIONS(413),
    [sym_emphasis] = ACTIONS(413),
    [sym_strong] = ACTIONS(413),
    [sym_monospace] = ACTIONS(413),
    [sym_highlight] = ACTIONS(411),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(411),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(411),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(411),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(411),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(418), 1,
      anon_sym_LF_LF,
    ACTIONS(420), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(423), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(426), 1,
      aux_sym_url_token1,
    ACTIONS(429), 1,
      anon_sym_LT_LT,
    ACTIONS(432), 1,
      anon_sym_xref_COLON,
    ACTIONS(435), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(438), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(77), 1,
      sym__xref,
    STATE(78), 1,
      sym__inline_xref,
    STATE(76), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(415), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(60), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(441), 30,
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
    ACTIONS(57), 1,
      aux_sym_url_token1,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_xref_COLON,
    ACTIONS(446), 1,
      anon_sym_LF_LF,
    ACTIONS(448), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(450), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(452), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(454), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(77), 1,
      sym__xref,
    STATE(78), 1,
      sym__inline_xref,
    STATE(76), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(444), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(60), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(456), 30,
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
    ACTIONS(11), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACKNOTE_RBRACK_LF,
    ACTIONS(15), 1,
      anon_sym_TIP_COLON,
    ACTIONS(17), 1,
      anon_sym_LBRACKTIP_RBRACK_LF,
    ACTIONS(19), 1,
      anon_sym_IMPORTANT_COLON,
    ACTIONS(21), 1,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
    ACTIONS(23), 1,
      anon_sym_CAUTION_COLON,
    ACTIONS(25), 1,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
    ACTIONS(27), 1,
      anon_sym_WARNING_COLON,
    ACTIONS(29), 1,
      anon_sym_LBRACKWARNING_RBRACK_LF,
    ACTIONS(35), 1,
      aux_sym_code_token1,
    ACTIONS(45), 1,
      anon_sym_image_COLON_COLON,
    ACTIONS(47), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    ACTIONS(49), 1,
      anon_sym_audio_COLON_COLON,
    ACTIONS(51), 1,
      anon_sym_video_COLON_COLON,
    ACTIONS(458), 1,
      aux_sym_code_language_token1,
    STATE(85), 1,
      sym_table_start,
    STATE(138), 1,
      sym__ordered_list_mark,
    STATE(195), 1,
      sym_list_item_mark,
    ACTIONS(31), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(39), 2,
      sym__note_line,
      sym__note_block,
    STATE(40), 2,
      sym__tip,
      sym__tip_block,
    STATE(41), 2,
      sym__important,
      sym__important_block,
    STATE(42), 2,
      sym__caution,
      sym__caution_block,
    STATE(43), 2,
      sym__warning,
      sym__warning_block,
    STATE(81), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(33), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
    STATE(38), 13,
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
    ACTIONS(462), 1,
      anon_sym_COLON_COLON,
    ACTIONS(464), 1,
      anon_sym_LF_LF,
    ACTIONS(460), 44,
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
  [331] = 3,
    ACTIONS(468), 1,
      anon_sym_LBRACK,
    ACTIONS(470), 1,
      anon_sym_LF_LF,
    ACTIONS(466), 44,
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
  [384] = 2,
    ACTIONS(474), 1,
      anon_sym_LF_LF,
    ACTIONS(472), 44,
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
  [434] = 2,
    ACTIONS(478), 1,
      anon_sym_LF_LF,
    ACTIONS(476), 44,
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
  [484] = 2,
    ACTIONS(482), 1,
      anon_sym_LF_LF,
    ACTIONS(480), 44,
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
  [534] = 2,
    ACTIONS(486), 1,
      anon_sym_LF_LF,
    ACTIONS(484), 44,
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
  [584] = 2,
    ACTIONS(490), 1,
      anon_sym_LF_LF,
    ACTIONS(488), 44,
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
  [634] = 2,
    ACTIONS(494), 1,
      anon_sym_LF_LF,
    ACTIONS(492), 44,
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
  [684] = 2,
    ACTIONS(498), 1,
      anon_sym_LF_LF,
    ACTIONS(496), 44,
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
  [734] = 2,
    ACTIONS(502), 1,
      anon_sym_LF_LF,
    ACTIONS(500), 44,
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
  [784] = 2,
    ACTIONS(506), 1,
      anon_sym_LF_LF,
    ACTIONS(504), 44,
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
  [834] = 2,
    ACTIONS(510), 1,
      anon_sym_LF_LF,
    ACTIONS(508), 44,
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
  [884] = 2,
    ACTIONS(514), 1,
      anon_sym_LF_LF,
    ACTIONS(512), 44,
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
  [934] = 2,
    ACTIONS(518), 1,
      anon_sym_LF_LF,
    ACTIONS(516), 44,
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
  [984] = 2,
    ACTIONS(522), 1,
      anon_sym_LF_LF,
    ACTIONS(520), 44,
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
  [1034] = 2,
    ACTIONS(522), 1,
      anon_sym_LF_LF,
    ACTIONS(520), 44,
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
  [1084] = 2,
    ACTIONS(526), 3,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
      aux_sym_code_language_token1,
    ACTIONS(524), 18,
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
    ACTIONS(528), 1,
      anon_sym_LF,
    STATE(138), 1,
      sym__ordered_list_mark,
    STATE(195), 1,
      sym_list_item_mark,
    STATE(80), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(530), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1131] = 5,
    ACTIONS(533), 1,
      anon_sym_LF,
    STATE(138), 1,
      sym__ordered_list_mark,
    STATE(195), 1,
      sym_list_item_mark,
    STATE(80), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(31), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1152] = 2,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1163] = 2,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1174] = 5,
    ACTIONS(543), 1,
      anon_sym_doctype,
    ACTIONS(545), 1,
      anon_sym_description,
    ACTIONS(547), 1,
      anon_sym_url_DASHrepo,
    ACTIONS(549), 1,
      anon_sym_hide_DASHuri_DASHscheme,
    ACTIONS(551), 1,
      anon_sym_sectanchors,
  [1190] = 5,
    ACTIONS(553), 1,
      aux_sym_block_title_token1,
    ACTIONS(555), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(35), 1,
      sym_table_end,
    STATE(92), 1,
      aux_sym_table_content_repeat1,
    STATE(130), 1,
      sym_table_content,
  [1206] = 4,
    ACTIONS(557), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(559), 1,
      aux_sym__note_block_token1,
    STATE(97), 1,
      aux_sym__note_block_repeat1,
    STATE(176), 1,
      sym_code_content,
  [1219] = 1,
    ACTIONS(561), 4,
      anon_sym_article,
      anon_sym_book,
      anon_sym_manpage,
      anon_sym_inline,
  [1226] = 3,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    ACTIONS(565), 1,
      aux_sym_audio_url_token1,
    STATE(161), 1,
      sym_audio_title,
  [1236] = 3,
    ACTIONS(567), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(569), 1,
      aux_sym__note_block_token1,
    STATE(103), 1,
      aux_sym__note_block_repeat1,
  [1246] = 3,
    ACTIONS(571), 1,
      aux_sym_url_token1,
    STATE(171), 1,
      sym_urlrepo_value,
    STATE(172), 1,
      sym_url,
  [1256] = 3,
    ACTIONS(573), 1,
      aux_sym_block_title_token1,
    ACTIONS(576), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(91), 1,
      aux_sym_table_content_repeat1,
  [1266] = 3,
    ACTIONS(578), 1,
      aux_sym_block_title_token1,
    ACTIONS(580), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(91), 1,
      aux_sym_table_content_repeat1,
  [1276] = 3,
    ACTIONS(569), 1,
      aux_sym__note_block_token1,
    ACTIONS(582), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(103), 1,
      aux_sym__note_block_repeat1,
  [1286] = 3,
    ACTIONS(584), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(586), 1,
      aux_sym__note_block_token1,
    STATE(89), 1,
      aux_sym__note_block_repeat1,
  [1296] = 3,
    ACTIONS(569), 1,
      aux_sym__note_block_token1,
    ACTIONS(588), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(103), 1,
      aux_sym__note_block_repeat1,
  [1306] = 3,
    ACTIONS(590), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(592), 1,
      aux_sym__note_block_token1,
    STATE(93), 1,
      aux_sym__note_block_repeat1,
  [1316] = 3,
    ACTIONS(569), 1,
      aux_sym__note_block_token1,
    ACTIONS(594), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(103), 1,
      aux_sym__note_block_repeat1,
  [1326] = 3,
    ACTIONS(596), 1,
      anon_sym_LT,
    ACTIONS(598), 1,
      anon_sym_LF,
    ACTIONS(600), 1,
      sym_name,
  [1336] = 3,
    ACTIONS(565), 1,
      aux_sym_audio_url_token1,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      sym_audio_title,
  [1346] = 3,
    ACTIONS(604), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(606), 1,
      aux_sym__note_block_token1,
    STATE(107), 1,
      aux_sym__note_block_repeat1,
  [1356] = 3,
    ACTIONS(608), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(610), 1,
      aux_sym__note_block_token1,
    STATE(95), 1,
      aux_sym__note_block_repeat1,
  [1366] = 3,
    ACTIONS(612), 1,
      anon_sym_LBRACK,
    ACTIONS(614), 1,
      aux_sym_audio_url_token1,
    STATE(183), 1,
      sym_audio_url,
  [1376] = 3,
    ACTIONS(616), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(618), 1,
      aux_sym__note_block_token1,
    STATE(103), 1,
      aux_sym__note_block_repeat1,
  [1386] = 3,
    ACTIONS(614), 1,
      aux_sym_audio_url_token1,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_audio_url,
  [1396] = 3,
    ACTIONS(569), 1,
      aux_sym__note_block_token1,
    ACTIONS(623), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(103), 1,
      aux_sym__note_block_repeat1,
  [1406] = 3,
    ACTIONS(625), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(627), 1,
      aux_sym__note_block_token1,
    STATE(105), 1,
      aux_sym__note_block_repeat1,
  [1416] = 3,
    ACTIONS(569), 1,
      aux_sym__note_block_token1,
    ACTIONS(629), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(103), 1,
      aux_sym__note_block_repeat1,
  [1426] = 3,
    ACTIONS(565), 1,
      aux_sym_audio_url_token1,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(142), 1,
      sym_audio_title,
  [1436] = 3,
    ACTIONS(565), 1,
      aux_sym_audio_url_token1,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_audio_title,
  [1446] = 1,
    ACTIONS(635), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1452] = 3,
    ACTIONS(637), 1,
      anon_sym_LT,
    ACTIONS(639), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      sym_name,
  [1462] = 2,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(643), 1,
      anon_sym_LBRACK,
  [1469] = 2,
    ACTIONS(645), 1,
      aux_sym_audio_url_token1,
    STATE(153), 1,
      sym_audio_title,
  [1476] = 1,
    ACTIONS(647), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1481] = 2,
    ACTIONS(649), 1,
      aux_sym_block_title_token1,
    STATE(83), 1,
      sym_list_item_content,
  [1488] = 2,
    ACTIONS(614), 1,
      aux_sym_audio_url_token1,
    STATE(185), 1,
      sym_audio_url,
  [1495] = 1,
    ACTIONS(651), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [1500] = 2,
    ACTIONS(653), 1,
      aux_sym_code_language_token1,
    STATE(131), 1,
      sym_code_language,
  [1507] = 2,
    ACTIONS(565), 1,
      aux_sym_audio_url_token1,
    STATE(163), 1,
      sym_audio_title,
  [1514] = 1,
    ACTIONS(655), 2,
      aux_sym_block_title_token1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1519] = 2,
    ACTIONS(565), 1,
      aux_sym_audio_url_token1,
    STATE(164), 1,
      sym_audio_title,
  [1526] = 2,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
    ACTIONS(659), 1,
      sym_kbd_content,
  [1533] = 2,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    ACTIONS(663), 1,
      sym_footnote_content,
  [1540] = 2,
    ACTIONS(665), 1,
      aux_sym_code_language_token1,
    STATE(129), 1,
      sym_xref_url,
  [1547] = 2,
    ACTIONS(665), 1,
      aux_sym_code_language_token1,
    STATE(178), 1,
      sym_xref_url,
  [1554] = 2,
    ACTIONS(667), 1,
      aux_sym_code_language_token1,
    STATE(177), 1,
      sym_passthrough_content,
  [1561] = 2,
    ACTIONS(667), 1,
      aux_sym_code_language_token1,
    STATE(175), 1,
      sym_passthrough_content,
  [1568] = 2,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(671), 1,
      anon_sym_LF,
  [1575] = 2,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_GT_GT,
  [1582] = 2,
    ACTIONS(677), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(21), 1,
      sym_table_end,
  [1589] = 1,
    ACTIONS(679), 1,
      anon_sym_RBRACK_LF,
  [1593] = 1,
    ACTIONS(681), 1,
      anon_sym_LF,
  [1597] = 1,
    ACTIONS(683), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1601] = 1,
    ACTIONS(685), 1,
      anon_sym_RBRACK,
  [1605] = 1,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
  [1609] = 1,
    ACTIONS(689), 1,
      anon_sym_GT,
  [1613] = 1,
    ACTIONS(691), 1,
      sym_email,
  [1617] = 1,
    ACTIONS(693), 1,
      anon_sym_,
  [1621] = 1,
    ACTIONS(695), 1,
      anon_sym_LF,
  [1625] = 1,
    ACTIONS(697), 1,
      anon_sym_LF,
  [1629] = 1,
    ACTIONS(699), 1,
      aux_sym__doc_description_token1,
  [1633] = 1,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
  [1637] = 1,
    ACTIONS(703), 1,
      anon_sym_LF,
  [1641] = 1,
    ACTIONS(705), 1,
      anon_sym_LF,
  [1645] = 1,
    ACTIONS(707), 1,
      anon_sym_LF,
  [1649] = 1,
    ACTIONS(709), 1,
      aux_sym_comment_token1,
  [1653] = 1,
    ACTIONS(711), 1,
      aux_sym_block_title_token1,
  [1657] = 1,
    ACTIONS(713), 1,
      sym_attr_mark,
  [1661] = 1,
    ACTIONS(715), 1,
      sym_attr_mark,
  [1665] = 1,
    ACTIONS(717), 1,
      sym_attr_mark,
  [1669] = 1,
    ACTIONS(719), 1,
      sym_attr_mark,
  [1673] = 1,
    ACTIONS(721), 1,
      sym_attr_mark,
  [1677] = 1,
    ACTIONS(723), 1,
      anon_sym_RBRACK_LF,
  [1681] = 1,
    ACTIONS(725), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1685] = 1,
    ACTIONS(727), 1,
      anon_sym_LF,
  [1689] = 1,
    ACTIONS(729), 1,
      anon_sym_LF,
  [1693] = 1,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
  [1697] = 1,
    ACTIONS(733), 1,
      sym_email,
  [1701] = 1,
    ACTIONS(735), 1,
      anon_sym_LF,
  [1705] = 1,
    ACTIONS(737), 1,
      anon_sym_LF,
  [1709] = 1,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
  [1713] = 1,
    ACTIONS(741), 1,
      anon_sym_COLON_COLON,
  [1717] = 1,
    ACTIONS(743), 1,
      anon_sym_GT_GT,
  [1721] = 1,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
  [1725] = 1,
    ACTIONS(747), 1,
      anon_sym_LF,
  [1729] = 1,
    ACTIONS(749), 1,
      anon_sym_GT,
  [1733] = 1,
    ACTIONS(751), 1,
      sym_email,
  [1737] = 1,
    ACTIONS(753), 1,
      aux_sym_block_title_token1,
  [1741] = 1,
    ACTIONS(755), 1,
      anon_sym_LF,
  [1745] = 1,
    ACTIONS(757), 1,
      anon_sym_LF,
  [1749] = 1,
    ACTIONS(759), 1,
      anon_sym_LF,
  [1753] = 1,
    ACTIONS(761), 1,
      anon_sym_LF,
  [1757] = 1,
    ACTIONS(763), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1761] = 1,
    ACTIONS(765), 1,
      aux_sym_block_title_token1,
  [1765] = 1,
    ACTIONS(767), 1,
      anon_sym_RBRACK,
  [1769] = 1,
    ACTIONS(769), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1773] = 1,
    ACTIONS(771), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1777] = 1,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
  [1781] = 1,
    ACTIONS(775), 1,
      aux_sym_url_token2,
  [1785] = 1,
    ACTIONS(777), 1,
      anon_sym_RBRACK,
  [1789] = 1,
    ACTIONS(779), 1,
      anon_sym_LF,
  [1793] = 1,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
  [1797] = 1,
    ACTIONS(783), 1,
      anon_sym_LBRACK,
  [1801] = 1,
    ACTIONS(785), 1,
      anon_sym_LBRACK,
  [1805] = 1,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
  [1809] = 1,
    ACTIONS(789), 1,
      anon_sym_LBRACK,
  [1813] = 1,
    ACTIONS(791), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1817] = 1,
    ACTIONS(793), 1,
      anon_sym_LF,
  [1821] = 1,
    ACTIONS(795), 1,
      anon_sym_GT,
  [1825] = 1,
    ACTIONS(797), 1,
      aux_sym_block_title_token1,
  [1829] = 1,
    ACTIONS(799), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1833] = 1,
    ACTIONS(801), 1,
      aux_sym_block_title_token1,
  [1837] = 1,
    ACTIONS(803), 1,
      aux_sym__doc_description_token1,
  [1841] = 1,
    ACTIONS(805), 1,
      anon_sym_RBRACK_LF,
  [1845] = 1,
    ACTIONS(807), 1,
      anon_sym_,
  [1849] = 1,
    ACTIONS(809), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1853] = 1,
    ACTIONS(811), 1,
      anon_sym_LF,
  [1857] = 1,
    ACTIONS(813), 1,
      aux_sym_block_title_token1,
  [1861] = 1,
    ACTIONS(815), 1,
      ts_builtin_sym_end,
  [1865] = 1,
    ACTIONS(647), 1,
      anon_sym_RBRACK_LF,
  [1869] = 1,
    ACTIONS(474), 1,
      anon_sym_LF,
  [1873] = 1,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
  [1877] = 1,
    ACTIONS(819), 1,
      aux_sym_url_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(60)] = 0,
  [SMALL_STATE(61)] = 86,
  [SMALL_STATE(62)] = 172,
  [SMALL_STATE(63)] = 278,
  [SMALL_STATE(64)] = 331,
  [SMALL_STATE(65)] = 384,
  [SMALL_STATE(66)] = 434,
  [SMALL_STATE(67)] = 484,
  [SMALL_STATE(68)] = 534,
  [SMALL_STATE(69)] = 584,
  [SMALL_STATE(70)] = 634,
  [SMALL_STATE(71)] = 684,
  [SMALL_STATE(72)] = 734,
  [SMALL_STATE(73)] = 784,
  [SMALL_STATE(74)] = 834,
  [SMALL_STATE(75)] = 884,
  [SMALL_STATE(76)] = 934,
  [SMALL_STATE(77)] = 984,
  [SMALL_STATE(78)] = 1034,
  [SMALL_STATE(79)] = 1084,
  [SMALL_STATE(80)] = 1110,
  [SMALL_STATE(81)] = 1131,
  [SMALL_STATE(82)] = 1152,
  [SMALL_STATE(83)] = 1163,
  [SMALL_STATE(84)] = 1174,
  [SMALL_STATE(85)] = 1190,
  [SMALL_STATE(86)] = 1206,
  [SMALL_STATE(87)] = 1219,
  [SMALL_STATE(88)] = 1226,
  [SMALL_STATE(89)] = 1236,
  [SMALL_STATE(90)] = 1246,
  [SMALL_STATE(91)] = 1256,
  [SMALL_STATE(92)] = 1266,
  [SMALL_STATE(93)] = 1276,
  [SMALL_STATE(94)] = 1286,
  [SMALL_STATE(95)] = 1296,
  [SMALL_STATE(96)] = 1306,
  [SMALL_STATE(97)] = 1316,
  [SMALL_STATE(98)] = 1326,
  [SMALL_STATE(99)] = 1336,
  [SMALL_STATE(100)] = 1346,
  [SMALL_STATE(101)] = 1356,
  [SMALL_STATE(102)] = 1366,
  [SMALL_STATE(103)] = 1376,
  [SMALL_STATE(104)] = 1386,
  [SMALL_STATE(105)] = 1396,
  [SMALL_STATE(106)] = 1406,
  [SMALL_STATE(107)] = 1416,
  [SMALL_STATE(108)] = 1426,
  [SMALL_STATE(109)] = 1436,
  [SMALL_STATE(110)] = 1446,
  [SMALL_STATE(111)] = 1452,
  [SMALL_STATE(112)] = 1462,
  [SMALL_STATE(113)] = 1469,
  [SMALL_STATE(114)] = 1476,
  [SMALL_STATE(115)] = 1481,
  [SMALL_STATE(116)] = 1488,
  [SMALL_STATE(117)] = 1495,
  [SMALL_STATE(118)] = 1500,
  [SMALL_STATE(119)] = 1507,
  [SMALL_STATE(120)] = 1514,
  [SMALL_STATE(121)] = 1519,
  [SMALL_STATE(122)] = 1526,
  [SMALL_STATE(123)] = 1533,
  [SMALL_STATE(124)] = 1540,
  [SMALL_STATE(125)] = 1547,
  [SMALL_STATE(126)] = 1554,
  [SMALL_STATE(127)] = 1561,
  [SMALL_STATE(128)] = 1568,
  [SMALL_STATE(129)] = 1575,
  [SMALL_STATE(130)] = 1582,
  [SMALL_STATE(131)] = 1589,
  [SMALL_STATE(132)] = 1593,
  [SMALL_STATE(133)] = 1597,
  [SMALL_STATE(134)] = 1601,
  [SMALL_STATE(135)] = 1605,
  [SMALL_STATE(136)] = 1609,
  [SMALL_STATE(137)] = 1613,
  [SMALL_STATE(138)] = 1617,
  [SMALL_STATE(139)] = 1621,
  [SMALL_STATE(140)] = 1625,
  [SMALL_STATE(141)] = 1629,
  [SMALL_STATE(142)] = 1633,
  [SMALL_STATE(143)] = 1637,
  [SMALL_STATE(144)] = 1641,
  [SMALL_STATE(145)] = 1645,
  [SMALL_STATE(146)] = 1649,
  [SMALL_STATE(147)] = 1653,
  [SMALL_STATE(148)] = 1657,
  [SMALL_STATE(149)] = 1661,
  [SMALL_STATE(150)] = 1665,
  [SMALL_STATE(151)] = 1669,
  [SMALL_STATE(152)] = 1673,
  [SMALL_STATE(153)] = 1677,
  [SMALL_STATE(154)] = 1681,
  [SMALL_STATE(155)] = 1685,
  [SMALL_STATE(156)] = 1689,
  [SMALL_STATE(157)] = 1693,
  [SMALL_STATE(158)] = 1697,
  [SMALL_STATE(159)] = 1701,
  [SMALL_STATE(160)] = 1705,
  [SMALL_STATE(161)] = 1709,
  [SMALL_STATE(162)] = 1713,
  [SMALL_STATE(163)] = 1717,
  [SMALL_STATE(164)] = 1721,
  [SMALL_STATE(165)] = 1725,
  [SMALL_STATE(166)] = 1729,
  [SMALL_STATE(167)] = 1733,
  [SMALL_STATE(168)] = 1737,
  [SMALL_STATE(169)] = 1741,
  [SMALL_STATE(170)] = 1745,
  [SMALL_STATE(171)] = 1749,
  [SMALL_STATE(172)] = 1753,
  [SMALL_STATE(173)] = 1757,
  [SMALL_STATE(174)] = 1761,
  [SMALL_STATE(175)] = 1765,
  [SMALL_STATE(176)] = 1769,
  [SMALL_STATE(177)] = 1773,
  [SMALL_STATE(178)] = 1777,
  [SMALL_STATE(179)] = 1781,
  [SMALL_STATE(180)] = 1785,
  [SMALL_STATE(181)] = 1789,
  [SMALL_STATE(182)] = 1793,
  [SMALL_STATE(183)] = 1797,
  [SMALL_STATE(184)] = 1801,
  [SMALL_STATE(185)] = 1805,
  [SMALL_STATE(186)] = 1809,
  [SMALL_STATE(187)] = 1813,
  [SMALL_STATE(188)] = 1817,
  [SMALL_STATE(189)] = 1821,
  [SMALL_STATE(190)] = 1825,
  [SMALL_STATE(191)] = 1829,
  [SMALL_STATE(192)] = 1833,
  [SMALL_STATE(193)] = 1837,
  [SMALL_STATE(194)] = 1841,
  [SMALL_STATE(195)] = 1845,
  [SMALL_STATE(196)] = 1849,
  [SMALL_STATE(197)] = 1853,
  [SMALL_STATE(198)] = 1857,
  [SMALL_STATE(199)] = 1861,
  [SMALL_STATE(200)] = 1865,
  [SMALL_STATE(201)] = 1869,
  [SMALL_STATE(202)] = 1873,
  [SMALL_STATE(203)] = 1877,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(198),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(196),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(192),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(191),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(190),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(187),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(174),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(173),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(168),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(154),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(138),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(138),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(111),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(84),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 7),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 6),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_repo, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_repo, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doc_description, 5, .production_id = 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doc_description, 5, .production_id = 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype, 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doctype, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sectanchors, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sectanchors, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hide_uri_scheme, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hide_uri_scheme, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_attr, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 7),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(60),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(122),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(123),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(64),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(124),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(125),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(126),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(127),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(73),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 4),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(138),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(91),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_content, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(103),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_mark, 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urlrepo_value, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [815] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
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
