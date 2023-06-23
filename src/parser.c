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
#define STATE_COUNT 208
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 181
#define ALIAS_COUNT 0
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 10

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
  aux_sym_autolinks_token1 = 64,
  anon_sym_link_COLON = 65,
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
  sym_links = 162,
  sym_autolinks = 163,
  sym_url_macro = 164,
  sym_link_macro = 165,
  sym_xref = 166,
  sym__inline_xref = 167,
  sym__xref = 168,
  sym_xref_url = 169,
  sym_passthrough = 170,
  sym__passthrough_plus = 171,
  sym__passthrough_cmd = 172,
  sym_passthrough_content = 173,
  sym_replacement = 174,
  aux_sym_document_repeat1 = 175,
  aux_sym_title0_repeat1 = 176,
  aux_sym__note_block_repeat1 = 177,
  aux_sym_list_repeat1 = 178,
  aux_sym_table_content_repeat1 = 179,
  aux_sym_paragraph_repeat1 = 180,
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
  [aux_sym_autolinks_token1] = "url",
  [anon_sym_link_COLON] = "link:",
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
  [sym_links] = "links",
  [sym_autolinks] = "autolinks",
  [sym_url_macro] = "url_macro",
  [sym_link_macro] = "link_macro",
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
  [aux_sym_autolinks_token1] = aux_sym_autolinks_token1,
  [anon_sym_link_COLON] = anon_sym_link_COLON,
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
  [sym_links] = sym_links,
  [sym_autolinks] = sym_autolinks,
  [sym_url_macro] = sym_url_macro,
  [sym_link_macro] = sym_link_macro,
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
  [aux_sym_autolinks_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_link_COLON] = {
    .visible = true,
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
  [sym_links] = {
    .visible = true,
    .named = true,
  },
  [sym_autolinks] = {
    .visible = true,
    .named = true,
  },
  [sym_url_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_link_macro] = {
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
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [9] = {.index = 7, .length = 2},
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
  [1] = {
    [0] = aux_sym_autolinks_token1,
  },
  [7] = {
    [1] = aux_sym_autolinks_token1,
  },
  [8] = {
    [3] = anon_sym_article,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_autolinks, 2,
    sym_autolinks,
    aux_sym_autolinks_token1,
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
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 64,
  [207] = 122,
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
      if (eof) ADVANCE(351);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '*') ADVANCE(638);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(813);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '0') ADVANCE(498);
      if (lookahead == ':') ADVANCE(599);
      if (lookahead == '<') ADVANCE(376);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(378);
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == 'I') ADVANCE(403);
      if (lookahead == 'N') ADVANCE(408);
      if (lookahead == 'T') ADVANCE(400);
      if (lookahead == 'W') ADVANCE(396);
      if (lookahead == '[') ADVANCE(794);
      if (lookahead == ']') ADVANCE(798);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == '`') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == 'f') ADVANCE(472);
      if (lookahead == 'h') ADVANCE(451);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 'k') ADVANCE(425);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(421);
      if (lookahead == 's') ADVANCE(444);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead == 'v') ADVANCE(457);
      if (lookahead == 'x') ADVANCE(483);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '|') ADVANCE(97);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(791);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(792);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(795);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(659);
      if (lookahead == '.') ADVANCE(648);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(627);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(622);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(631);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(633);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(629);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '[') ADVANCE(794);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == '_') ADVANCE(688);
      if (lookahead == '`') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(731);
      if (lookahead == 'k') ADVANCE(716);
      if (lookahead == 'l') ADVANCE(726);
      if (lookahead == 'p') ADVANCE(714);
      if (lookahead == 'x') ADVANCE(736);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '*') ADVANCE(639);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '.') ADVANCE(646);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(623);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '|') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(359);
      if (lookahead != 0) ADVANCE(358);
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
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(625);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '[') ADVANCE(794);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == '_') ADVANCE(688);
      if (lookahead == '`') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(731);
      if (lookahead == 'k') ADVANCE(716);
      if (lookahead == 'l') ADVANCE(726);
      if (lookahead == 'p') ADVANCE(714);
      if (lookahead == 'x') ADVANCE(736);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(591);
      if (lookahead != 0) ADVANCE(592);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(2);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(787);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(368);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(626);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(626);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(621);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(621);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(374);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(630);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(630);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(632);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(628);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(796);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*') ADVANCE(637);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(642);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(683);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(660);
      if (lookahead == 'I') ADVANCE(663);
      if (lookahead == 'N') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(661);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead == 'f') ADVANCE(670);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead == 'k') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead == 'p') ADVANCE(665);
      if (lookahead == 'v') ADVANCE(668);
      if (lookahead == 'x') ADVANCE(671);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*') ADVANCE(637);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(642);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(564);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(509);
      if (lookahead == 'I') ADVANCE(517);
      if (lookahead == 'N') ADVANCE(522);
      if (lookahead == 'T') ADVANCE(514);
      if (lookahead == 'W') ADVANCE(510);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == '_') ADVANCE(576);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(534);
      if (lookahead == 'v') ADVANCE(548);
      if (lookahead == 'x') ADVANCE(558);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(819);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(819);
      if (lookahead == ']') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(818);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(639);
      if (lookahead == '-') ADVANCE(643);
      if (lookahead == '.') ADVANCE(646);
      if (lookahead == '0') ADVANCE(684);
      if (lookahead == 'C') ADVANCE(674);
      if (lookahead == 'I') ADVANCE(677);
      if (lookahead == 'N') ADVANCE(678);
      if (lookahead == 'T') ADVANCE(676);
      if (lookahead == 'W') ADVANCE(675);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'i') ADVANCE(680);
      if (lookahead == 'v') ADVANCE(679);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == '+') ADVANCE(824);
      END_STATE();
    case 55:
      if (lookahead == '+') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == '.') ADVANCE(648);
      END_STATE();
    case 57:
      if (lookahead == ',') ADVANCE(813);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '[') ADVANCE(794);
      if (lookahead == ']') ADVANCE(798);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(149);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == ',') ADVANCE(658);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == 'W') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '.') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(298);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(275);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(267);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(648);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '<') ADVANCE(812);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '>') ADVANCE(814);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'q') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == 'w') ADVANCE(203);
      if (lookahead == 'z') ADVANCE(302);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(140);
      if (lookahead == '_') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '_') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ':') ADVANCE(797);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ':') ADVANCE(793);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ':') ADVANCE(800);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '[') ADVANCE(802);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '[') ADVANCE(825);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '[') ADVANCE(805);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(348);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(797);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(793);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(800);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 94:
      if (lookahead == '<') ADVANCE(811);
      END_STATE();
    case 95:
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 97:
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == '>') ADVANCE(814);
      END_STATE();
    case 99:
      if (lookahead == '>') ADVANCE(377);
      if (lookahead == '[') ADVANCE(794);
      if (lookahead == ']') ADVANCE(798);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 100:
      if (lookahead == '@') ADVANCE(341);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 102:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 103:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 'G') ADVANCE(136);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 'M') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(135);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 'P') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(111);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'U') ADVANCE(122);
      END_STATE();
    case 126:
      if (lookahead == '[') ADVANCE(802);
      END_STATE();
    case 127:
      if (lookahead == '[') ADVANCE(825);
      END_STATE();
    case 128:
      if (lookahead == '[') ADVANCE(805);
      END_STATE();
    case 129:
      if (lookahead == '[') ADVANCE(336);
      END_STATE();
    case 130:
      if (lookahead == ']') ADVANCE(798);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(798);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(655);
      END_STATE();
    case 133:
      if (lookahead == ']') ADVANCE(5);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(6);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(7);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 138:
      if (lookahead == '^') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(807);
      END_STATE();
    case 141:
      if (lookahead == '`') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == 'q') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(156);
      if (lookahead == 'w') ADVANCE(203);
      if (lookahead == 'z') ADVANCE(302);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(329);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 190:
      if (lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 192:
      if (lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'w') ADVANCE(229);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 203:
      if (lookahead == 'j') ADVANCE(309);
      END_STATE();
    case 204:
      if (lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 205:
      if (lookahead == 'k') ADVANCE(583);
      END_STATE();
    case 206:
      if (lookahead == 'k') ADVANCE(319);
      END_STATE();
    case 207:
      if (lookahead == 'k') ADVANCE(330);
      END_STATE();
    case 208:
      if (lookahead == 'k') ADVANCE(331);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 219:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 255:
      if (lookahead == 'q') ADVANCE(295);
      END_STATE();
    case 256:
      if (lookahead == 'q') ADVANCE(297);
      END_STATE();
    case 257:
      if (lookahead == 'q') ADVANCE(299);
      END_STATE();
    case 258:
      if (lookahead == 'q') ADVANCE(300);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 301:
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 302:
      if (lookahead == 'w') ADVANCE(283);
      END_STATE();
    case 303:
      if (lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 304:
      if (lookahead == 'y') ADVANCE(321);
      END_STATE();
    case 305:
      if (lookahead == '}') ADVANCE(844);
      END_STATE();
    case 306:
      if (lookahead == '}') ADVANCE(843);
      END_STATE();
    case 307:
      if (lookahead == '}') ADVANCE(855);
      END_STATE();
    case 308:
      if (lookahead == '}') ADVANCE(828);
      END_STATE();
    case 309:
      if (lookahead == '}') ADVANCE(831);
      END_STATE();
    case 310:
      if (lookahead == '}') ADVANCE(842);
      END_STATE();
    case 311:
      if (lookahead == '}') ADVANCE(854);
      END_STATE();
    case 312:
      if (lookahead == '}') ADVANCE(838);
      END_STATE();
    case 313:
      if (lookahead == '}') ADVANCE(832);
      END_STATE();
    case 314:
      if (lookahead == '}') ADVANCE(829);
      END_STATE();
    case 315:
      if (lookahead == '}') ADVANCE(839);
      END_STATE();
    case 316:
      if (lookahead == '}') ADVANCE(833);
      END_STATE();
    case 317:
      if (lookahead == '}') ADVANCE(841);
      END_STATE();
    case 318:
      if (lookahead == '}') ADVANCE(830);
      END_STATE();
    case 319:
      if (lookahead == '}') ADVANCE(826);
      END_STATE();
    case 320:
      if (lookahead == '}') ADVANCE(847);
      END_STATE();
    case 321:
      if (lookahead == '}') ADVANCE(827);
      END_STATE();
    case 322:
      if (lookahead == '}') ADVANCE(846);
      END_STATE();
    case 323:
      if (lookahead == '}') ADVANCE(836);
      END_STATE();
    case 324:
      if (lookahead == '}') ADVANCE(834);
      END_STATE();
    case 325:
      if (lookahead == '}') ADVANCE(837);
      END_STATE();
    case 326:
      if (lookahead == '}') ADVANCE(835);
      END_STATE();
    case 327:
      if (lookahead == '}') ADVANCE(849);
      END_STATE();
    case 328:
      if (lookahead == '}') ADVANCE(840);
      END_STATE();
    case 329:
      if (lookahead == '}') ADVANCE(845);
      END_STATE();
    case 330:
      if (lookahead == '}') ADVANCE(848);
      END_STATE();
    case 331:
      if (lookahead == '}') ADVANCE(851);
      END_STATE();
    case 332:
      if (lookahead == '}') ADVANCE(850);
      END_STATE();
    case 333:
      if (lookahead == '}') ADVANCE(852);
      END_STATE();
    case 334:
      if (lookahead == '}') ADVANCE(853);
      END_STATE();
    case 335:
      if (lookahead == '~') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 336:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 337:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(337)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 338:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(338)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 339:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 340:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 341:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 342:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(578);
      END_STATE();
    case 343:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 344:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 345:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 346:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 347:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 348:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(808);
      END_STATE();
    case 349:
      if (eof) ADVANCE(351);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*') ADVANCE(637);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(642);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(683);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(660);
      if (lookahead == 'I') ADVANCE(663);
      if (lookahead == 'N') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(661);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead == 'f') ADVANCE(670);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead == 'k') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead == 'p') ADVANCE(665);
      if (lookahead == 'v') ADVANCE(668);
      if (lookahead == 'x') ADVANCE(671);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 350:
      if (eof) ADVANCE(351);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*') ADVANCE(637);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(642);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(564);
      if (lookahead == ':') ADVANCE(600);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(509);
      if (lookahead == 'I') ADVANCE(517);
      if (lookahead == 'N') ADVANCE(522);
      if (lookahead == 'T') ADVANCE(514);
      if (lookahead == 'W') ADVANCE(510);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == '_') ADVANCE(576);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(534);
      if (lookahead == 'v') ADVANCE(548);
      if (lookahead == 'x') ADVANCE(558);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(646);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(795);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead == '=') ADVANCE(354);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(361);
      if (lookahead == '|') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(359);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '|') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(358);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(358);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      if (lookahead == '\n') ADVANCE(363);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_title1);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_title1);
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(367);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(369);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(371);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_title5);
      if (lookahead == '\n') ADVANCE(373);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(812);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(814);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'A') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'A') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'A') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'E') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'G') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'I') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'I') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'I') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'M') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'N') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'N') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'N') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'N') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'O') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'O') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'O') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'P') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'P') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'R') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'R') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'T') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'U') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'a') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'a') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'a') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'a') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'a') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'b') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'd') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'd') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'd') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'd') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'f') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'g') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'g') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'h') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'k') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'k') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == 'n') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'n') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead == 'u') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 's') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 's') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 's') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 's') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 't') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 't') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 't') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == 'y') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(606);
      if (lookahead == '.') ADVANCE(577);
      if (lookahead == '_') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(606);
      if (lookahead == '.') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(619);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'A') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'A') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'A') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'M') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'U') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'g') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 's') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 's') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 't') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 't') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(577);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '_') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(577);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == '.') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_article);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_article);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_book);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_book);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_manpage);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_manpage);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      if (lookahead == '-') ADVANCE(620);
      if (lookahead == '.') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_attr_mark);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_attr_mark);
      if (lookahead == '.') ADVANCE(648);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(645);
      if (lookahead == '-') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(644);
      if (lookahead == '-') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(636);
      if (lookahead == '-') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(645);
      if (lookahead == '-') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '_') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'h') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'm') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'u') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(641);
      if (lookahead == '-') ADVANCE(641);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(645);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(645);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(635);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(641);
      if (lookahead == '-') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(644);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(645);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(636);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(657);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'A') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'A') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'M') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'A') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'A') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'I') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'O') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'm') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == 'u') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(647);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(684);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '_') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'A') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'P') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'U') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'g') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 's') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 's') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 't') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 't') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(741);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'g') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(789);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(789);
      if (lookahead != 0) ADVANCE(790);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(788);
      if (lookahead != 0) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead == '_') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(807);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(25);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(819);
      if (lookahead == ']') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 349},
  [2] = {.lex_state = 349},
  [3] = {.lex_state = 349},
  [4] = {.lex_state = 350},
  [5] = {.lex_state = 350},
  [6] = {.lex_state = 350},
  [7] = {.lex_state = 350},
  [8] = {.lex_state = 350},
  [9] = {.lex_state = 350},
  [10] = {.lex_state = 350},
  [11] = {.lex_state = 350},
  [12] = {.lex_state = 350},
  [13] = {.lex_state = 350},
  [14] = {.lex_state = 350},
  [15] = {.lex_state = 350},
  [16] = {.lex_state = 350},
  [17] = {.lex_state = 350},
  [18] = {.lex_state = 350},
  [19] = {.lex_state = 349},
  [20] = {.lex_state = 349},
  [21] = {.lex_state = 349},
  [22] = {.lex_state = 349},
  [23] = {.lex_state = 349},
  [24] = {.lex_state = 349},
  [25] = {.lex_state = 349},
  [26] = {.lex_state = 349},
  [27] = {.lex_state = 349},
  [28] = {.lex_state = 349},
  [29] = {.lex_state = 349},
  [30] = {.lex_state = 349},
  [31] = {.lex_state = 349},
  [32] = {.lex_state = 349},
  [33] = {.lex_state = 349},
  [34] = {.lex_state = 349},
  [35] = {.lex_state = 349},
  [36] = {.lex_state = 349},
  [37] = {.lex_state = 349},
  [38] = {.lex_state = 349},
  [39] = {.lex_state = 349},
  [40] = {.lex_state = 349},
  [41] = {.lex_state = 349},
  [42] = {.lex_state = 349},
  [43] = {.lex_state = 349},
  [44] = {.lex_state = 349},
  [45] = {.lex_state = 349},
  [46] = {.lex_state = 349},
  [47] = {.lex_state = 349},
  [48] = {.lex_state = 349},
  [49] = {.lex_state = 349},
  [50] = {.lex_state = 349},
  [51] = {.lex_state = 349},
  [52] = {.lex_state = 349},
  [53] = {.lex_state = 349},
  [54] = {.lex_state = 349},
  [55] = {.lex_state = 349},
  [56] = {.lex_state = 349},
  [57] = {.lex_state = 349},
  [58] = {.lex_state = 349},
  [59] = {.lex_state = 349},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 53},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 57},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 57},
  [91] = {.lex_state = 99},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 15},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 99},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 99},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 99},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 99},
  [106] = {.lex_state = 349},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 57},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 99},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 130},
  [116] = {.lex_state = 99},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 337},
  [120] = {.lex_state = 99},
  [121] = {.lex_state = 337},
  [122] = {.lex_state = 57},
  [123] = {.lex_state = 57},
  [124] = {.lex_state = 337},
  [125] = {.lex_state = 21},
  [126] = {.lex_state = 337},
  [127] = {.lex_state = 337},
  [128] = {.lex_state = 131},
  [129] = {.lex_state = 99},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 99},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 337},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 349},
  [139] = {.lex_state = 349},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 99},
  [142] = {.lex_state = 338},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 57},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 45},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 349},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 22},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 349},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 99},
  [173] = {.lex_state = 338},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 337},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 57},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 338},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 349},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 789},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 45},
  [193] = {.lex_state = 57},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 99},
  [197] = {.lex_state = 57},
  [198] = {.lex_state = 22},
  [199] = {.lex_state = 57},
  [200] = {.lex_state = 22},
  [201] = {.lex_state = 57},
  [202] = {.lex_state = 22},
  [203] = {.lex_state = 57},
  [204] = {.lex_state = 11},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 11},
  [207] = {.lex_state = 349},
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
    [anon_sym_link_COLON] = ACTIONS(1),
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
    [sym_document] = STATE(157),
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(62),
    [sym_title0] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(35),
    [sym__note_block] = STATE(35),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(36),
    [sym__tip_block] = STATE(36),
    [sym_important] = STATE(3),
    [sym__important] = STATE(37),
    [sym__important_block] = STATE(37),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(38),
    [sym__caution_block] = STATE(38),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(39),
    [sym__warning_block] = STATE(39),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(83),
    [sym_list_item_mark] = STATE(155),
    [sym__ordered_list_mark] = STATE(192),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(88),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(60),
    [sym_kbd] = STATE(60),
    [sym_footnote] = STATE(60),
    [sym_links] = STATE(60),
    [sym_autolinks] = STATE(63),
    [sym_url_macro] = STATE(75),
    [sym_link_macro] = STATE(75),
    [sym_xref] = STATE(60),
    [sym__inline_xref] = STATE(74),
    [sym__xref] = STATE(72),
    [sym_passthrough] = STATE(60),
    [sym__passthrough_plus] = STATE(66),
    [sym__passthrough_cmd] = STATE(66),
    [sym_replacement] = STATE(60),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(83),
    [aux_sym_paragraph_repeat1] = STATE(60),
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
    [aux_sym_autolinks_token1] = ACTIONS(57),
    [anon_sym_link_COLON] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_xref_COLON] = ACTIONS(63),
    [sym_emphasis] = ACTIONS(65),
    [sym_strong] = ACTIONS(65),
    [sym_monospace] = ACTIONS(67),
    [sym_highlight] = ACTIONS(67),
    [sym_superscript] = ACTIONS(67),
    [sym_subscript] = ACTIONS(67),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(73),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(62),
    [sym_title0] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(35),
    [sym__note_block] = STATE(35),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(36),
    [sym__tip_block] = STATE(36),
    [sym_important] = STATE(2),
    [sym__important] = STATE(37),
    [sym__important_block] = STATE(37),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(38),
    [sym__caution_block] = STATE(38),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(39),
    [sym__warning_block] = STATE(39),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(83),
    [sym_list_item_mark] = STATE(155),
    [sym__ordered_list_mark] = STATE(192),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(88),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(60),
    [sym_kbd] = STATE(60),
    [sym_footnote] = STATE(60),
    [sym_links] = STATE(60),
    [sym_autolinks] = STATE(63),
    [sym_url_macro] = STATE(75),
    [sym_link_macro] = STATE(75),
    [sym_xref] = STATE(60),
    [sym__inline_xref] = STATE(74),
    [sym__xref] = STATE(72),
    [sym_passthrough] = STATE(60),
    [sym__passthrough_plus] = STATE(66),
    [sym__passthrough_cmd] = STATE(66),
    [sym_replacement] = STATE(60),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(83),
    [aux_sym_paragraph_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(77),
    [aux_sym_title0_token1] = ACTIONS(80),
    [sym_title1] = ACTIONS(83),
    [sym_title2] = ACTIONS(83),
    [sym_title3] = ACTIONS(83),
    [sym_title4] = ACTIONS(83),
    [sym_title5] = ACTIONS(83),
    [anon_sym_NOTE_COLON] = ACTIONS(86),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(89),
    [anon_sym_TIP_COLON] = ACTIONS(92),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(95),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(98),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(101),
    [anon_sym_CAUTION_COLON] = ACTIONS(104),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(107),
    [anon_sym_WARNING_COLON] = ACTIONS(110),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(113),
    [sym__unordered_list_mark] = ACTIONS(116),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(116),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(119),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(116),
    [sym__checklist_mark] = ACTIONS(116),
    [aux_sym_code_token1] = ACTIONS(122),
    [aux_sym_code_language_token1] = ACTIONS(125),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [aux_sym_line_breaks_token1] = ACTIONS(131),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(134),
    [anon_sym_image_COLON_COLON] = ACTIONS(137),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(140),
    [anon_sym_audio_COLON_COLON] = ACTIONS(143),
    [anon_sym_video_COLON_COLON] = ACTIONS(146),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(149),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(152),
    [aux_sym_autolinks_token1] = ACTIONS(155),
    [anon_sym_link_COLON] = ACTIONS(158),
    [anon_sym_LT_LT] = ACTIONS(161),
    [anon_sym_xref_COLON] = ACTIONS(164),
    [sym_emphasis] = ACTIONS(167),
    [sym_strong] = ACTIONS(167),
    [sym_monospace] = ACTIONS(170),
    [sym_highlight] = ACTIONS(170),
    [sym_superscript] = ACTIONS(170),
    [sym_subscript] = ACTIONS(170),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(176),
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
  [3] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(62),
    [sym_title0] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(35),
    [sym__note_block] = STATE(35),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(36),
    [sym__tip_block] = STATE(36),
    [sym_important] = STATE(2),
    [sym__important] = STATE(37),
    [sym__important_block] = STATE(37),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(38),
    [sym__caution_block] = STATE(38),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(39),
    [sym__warning_block] = STATE(39),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(83),
    [sym_list_item_mark] = STATE(155),
    [sym__ordered_list_mark] = STATE(192),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(88),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(60),
    [sym_kbd] = STATE(60),
    [sym_footnote] = STATE(60),
    [sym_links] = STATE(60),
    [sym_autolinks] = STATE(63),
    [sym_url_macro] = STATE(75),
    [sym_link_macro] = STATE(75),
    [sym_xref] = STATE(60),
    [sym__inline_xref] = STATE(74),
    [sym__xref] = STATE(72),
    [sym_passthrough] = STATE(60),
    [sym__passthrough_plus] = STATE(66),
    [sym__passthrough_cmd] = STATE(66),
    [sym_replacement] = STATE(60),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(83),
    [aux_sym_paragraph_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_DOT] = ACTIONS(5),
    [aux_sym_title0_token1] = ACTIONS(7),
    [sym_title1] = ACTIONS(184),
    [sym_title2] = ACTIONS(184),
    [sym_title3] = ACTIONS(184),
    [sym_title4] = ACTIONS(184),
    [sym_title5] = ACTIONS(184),
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
    [aux_sym_autolinks_token1] = ACTIONS(57),
    [anon_sym_link_COLON] = ACTIONS(59),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_xref_COLON] = ACTIONS(63),
    [sym_emphasis] = ACTIONS(65),
    [sym_strong] = ACTIONS(65),
    [sym_monospace] = ACTIONS(67),
    [sym_highlight] = ACTIONS(67),
    [sym_superscript] = ACTIONS(67),
    [sym_subscript] = ACTIONS(67),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(71),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(73),
  },
  [4] = {
    [sym_author_info] = STATE(11),
    [sym__doctype] = STATE(11),
    [sym__doc_description] = STATE(11),
    [sym__url_repo] = STATE(11),
    [sym__hide_uri_scheme] = STATE(11),
    [sym__sectanchors] = STATE(11),
    [sym_doc_attr] = STATE(5),
    [aux_sym_title0_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_DOT] = ACTIONS(188),
    [aux_sym_title0_token1] = ACTIONS(186),
    [sym_title1] = ACTIONS(186),
    [sym_title2] = ACTIONS(186),
    [sym_title3] = ACTIONS(186),
    [sym_title4] = ACTIONS(186),
    [sym_title5] = ACTIONS(186),
    [sym_name] = ACTIONS(190),
    [sym_attr_mark] = ACTIONS(192),
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
    [sym__unordered_list_mark] = ACTIONS(188),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(188),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(188),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(188),
    [sym__checklist_mark] = ACTIONS(188),
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
    [aux_sym_autolinks_token1] = ACTIONS(186),
    [anon_sym_link_COLON] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_xref_COLON] = ACTIONS(188),
    [sym_emphasis] = ACTIONS(188),
    [sym_strong] = ACTIONS(188),
    [sym_monospace] = ACTIONS(186),
    [sym_highlight] = ACTIONS(186),
    [sym_superscript] = ACTIONS(186),
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
  [5] = {
    [sym_author_info] = STATE(11),
    [sym__doctype] = STATE(11),
    [sym__doc_description] = STATE(11),
    [sym__url_repo] = STATE(11),
    [sym__hide_uri_scheme] = STATE(11),
    [sym__sectanchors] = STATE(11),
    [sym_doc_attr] = STATE(6),
    [aux_sym_title0_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(196),
    [aux_sym_title0_token1] = ACTIONS(194),
    [sym_title1] = ACTIONS(194),
    [sym_title2] = ACTIONS(194),
    [sym_title3] = ACTIONS(194),
    [sym_title4] = ACTIONS(194),
    [sym_title5] = ACTIONS(194),
    [sym_name] = ACTIONS(190),
    [sym_attr_mark] = ACTIONS(192),
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
    [sym__unordered_list_mark] = ACTIONS(196),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(196),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(196),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(196),
    [sym__checklist_mark] = ACTIONS(196),
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
    [aux_sym_autolinks_token1] = ACTIONS(194),
    [anon_sym_link_COLON] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(196),
    [anon_sym_xref_COLON] = ACTIONS(196),
    [sym_emphasis] = ACTIONS(196),
    [sym_strong] = ACTIONS(196),
    [sym_monospace] = ACTIONS(194),
    [sym_highlight] = ACTIONS(194),
    [sym_superscript] = ACTIONS(194),
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
  [6] = {
    [sym_author_info] = STATE(11),
    [sym__doctype] = STATE(11),
    [sym__doc_description] = STATE(11),
    [sym__url_repo] = STATE(11),
    [sym__hide_uri_scheme] = STATE(11),
    [sym__sectanchors] = STATE(11),
    [sym_doc_attr] = STATE(6),
    [aux_sym_title0_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_DOT] = ACTIONS(200),
    [aux_sym_title0_token1] = ACTIONS(198),
    [sym_title1] = ACTIONS(198),
    [sym_title2] = ACTIONS(198),
    [sym_title3] = ACTIONS(198),
    [sym_title4] = ACTIONS(198),
    [sym_title5] = ACTIONS(198),
    [sym_name] = ACTIONS(202),
    [sym_attr_mark] = ACTIONS(205),
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
    [sym__unordered_list_mark] = ACTIONS(200),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(200),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(200),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(200),
    [sym__checklist_mark] = ACTIONS(200),
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
    [aux_sym_autolinks_token1] = ACTIONS(198),
    [anon_sym_link_COLON] = ACTIONS(200),
    [anon_sym_LT_LT] = ACTIONS(200),
    [anon_sym_xref_COLON] = ACTIONS(200),
    [sym_emphasis] = ACTIONS(200),
    [sym_strong] = ACTIONS(200),
    [sym_monospace] = ACTIONS(198),
    [sym_highlight] = ACTIONS(198),
    [sym_superscript] = ACTIONS(198),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(210),
    [aux_sym_title0_token1] = ACTIONS(208),
    [sym_title1] = ACTIONS(208),
    [sym_title2] = ACTIONS(208),
    [sym_title3] = ACTIONS(208),
    [sym_title4] = ACTIONS(208),
    [sym_title5] = ACTIONS(208),
    [sym_name] = ACTIONS(210),
    [sym_attr_mark] = ACTIONS(210),
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
    [sym__unordered_list_mark] = ACTIONS(210),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(210),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(210),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(210),
    [sym__checklist_mark] = ACTIONS(210),
    [aux_sym_code_token1] = ACTIONS(208),
    [aux_sym_code_language_token1] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(208),
    [aux_sym_line_breaks_token1] = ACTIONS(208),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(208),
    [anon_sym_image_COLON_COLON] = ACTIONS(208),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(208),
    [anon_sym_audio_COLON_COLON] = ACTIONS(208),
    [anon_sym_video_COLON_COLON] = ACTIONS(208),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(208),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(208),
    [aux_sym_autolinks_token1] = ACTIONS(208),
    [anon_sym_link_COLON] = ACTIONS(210),
    [anon_sym_LT_LT] = ACTIONS(210),
    [anon_sym_xref_COLON] = ACTIONS(210),
    [sym_emphasis] = ACTIONS(210),
    [sym_strong] = ACTIONS(210),
    [sym_monospace] = ACTIONS(208),
    [sym_highlight] = ACTIONS(208),
    [sym_superscript] = ACTIONS(208),
    [sym_subscript] = ACTIONS(208),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(208),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(214),
    [aux_sym_title0_token1] = ACTIONS(212),
    [sym_title1] = ACTIONS(212),
    [sym_title2] = ACTIONS(212),
    [sym_title3] = ACTIONS(212),
    [sym_title4] = ACTIONS(212),
    [sym_title5] = ACTIONS(212),
    [sym_name] = ACTIONS(214),
    [sym_attr_mark] = ACTIONS(214),
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
    [sym__unordered_list_mark] = ACTIONS(214),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(214),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(214),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(214),
    [sym__checklist_mark] = ACTIONS(214),
    [aux_sym_code_token1] = ACTIONS(212),
    [aux_sym_code_language_token1] = ACTIONS(214),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [aux_sym_line_breaks_token1] = ACTIONS(212),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(212),
    [anon_sym_image_COLON_COLON] = ACTIONS(212),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(212),
    [anon_sym_audio_COLON_COLON] = ACTIONS(212),
    [anon_sym_video_COLON_COLON] = ACTIONS(212),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(212),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(212),
    [aux_sym_autolinks_token1] = ACTIONS(212),
    [anon_sym_link_COLON] = ACTIONS(214),
    [anon_sym_LT_LT] = ACTIONS(214),
    [anon_sym_xref_COLON] = ACTIONS(214),
    [sym_emphasis] = ACTIONS(214),
    [sym_strong] = ACTIONS(214),
    [sym_monospace] = ACTIONS(212),
    [sym_highlight] = ACTIONS(212),
    [sym_superscript] = ACTIONS(212),
    [sym_subscript] = ACTIONS(212),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(212),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(218),
    [aux_sym_title0_token1] = ACTIONS(216),
    [sym_title1] = ACTIONS(216),
    [sym_title2] = ACTIONS(216),
    [sym_title3] = ACTIONS(216),
    [sym_title4] = ACTIONS(216),
    [sym_title5] = ACTIONS(216),
    [sym_name] = ACTIONS(218),
    [sym_attr_mark] = ACTIONS(218),
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
    [sym__unordered_list_mark] = ACTIONS(218),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(218),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(218),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(218),
    [sym__checklist_mark] = ACTIONS(218),
    [aux_sym_code_token1] = ACTIONS(216),
    [aux_sym_code_language_token1] = ACTIONS(218),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [aux_sym_line_breaks_token1] = ACTIONS(216),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(216),
    [anon_sym_image_COLON_COLON] = ACTIONS(216),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(216),
    [anon_sym_audio_COLON_COLON] = ACTIONS(216),
    [anon_sym_video_COLON_COLON] = ACTIONS(216),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(216),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(216),
    [aux_sym_autolinks_token1] = ACTIONS(216),
    [anon_sym_link_COLON] = ACTIONS(218),
    [anon_sym_LT_LT] = ACTIONS(218),
    [anon_sym_xref_COLON] = ACTIONS(218),
    [sym_emphasis] = ACTIONS(218),
    [sym_strong] = ACTIONS(218),
    [sym_monospace] = ACTIONS(216),
    [sym_highlight] = ACTIONS(216),
    [sym_superscript] = ACTIONS(216),
    [sym_subscript] = ACTIONS(216),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(216),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(222),
    [aux_sym_title0_token1] = ACTIONS(220),
    [sym_title1] = ACTIONS(220),
    [sym_title2] = ACTIONS(220),
    [sym_title3] = ACTIONS(220),
    [sym_title4] = ACTIONS(220),
    [sym_title5] = ACTIONS(220),
    [sym_name] = ACTIONS(222),
    [sym_attr_mark] = ACTIONS(222),
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
    [sym__unordered_list_mark] = ACTIONS(222),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(222),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(222),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(222),
    [sym__checklist_mark] = ACTIONS(222),
    [aux_sym_code_token1] = ACTIONS(220),
    [aux_sym_code_language_token1] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [aux_sym_line_breaks_token1] = ACTIONS(220),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(220),
    [anon_sym_image_COLON_COLON] = ACTIONS(220),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(220),
    [anon_sym_audio_COLON_COLON] = ACTIONS(220),
    [anon_sym_video_COLON_COLON] = ACTIONS(220),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(220),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(220),
    [aux_sym_autolinks_token1] = ACTIONS(220),
    [anon_sym_link_COLON] = ACTIONS(222),
    [anon_sym_LT_LT] = ACTIONS(222),
    [anon_sym_xref_COLON] = ACTIONS(222),
    [sym_emphasis] = ACTIONS(222),
    [sym_strong] = ACTIONS(222),
    [sym_monospace] = ACTIONS(220),
    [sym_highlight] = ACTIONS(220),
    [sym_superscript] = ACTIONS(220),
    [sym_subscript] = ACTIONS(220),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(220),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(226),
    [aux_sym_title0_token1] = ACTIONS(224),
    [sym_title1] = ACTIONS(224),
    [sym_title2] = ACTIONS(224),
    [sym_title3] = ACTIONS(224),
    [sym_title4] = ACTIONS(224),
    [sym_title5] = ACTIONS(224),
    [sym_name] = ACTIONS(226),
    [sym_attr_mark] = ACTIONS(226),
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
    [sym__unordered_list_mark] = ACTIONS(226),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(226),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(226),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(226),
    [sym__checklist_mark] = ACTIONS(226),
    [aux_sym_code_token1] = ACTIONS(224),
    [aux_sym_code_language_token1] = ACTIONS(226),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [aux_sym_line_breaks_token1] = ACTIONS(224),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(224),
    [anon_sym_image_COLON_COLON] = ACTIONS(224),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(224),
    [anon_sym_audio_COLON_COLON] = ACTIONS(224),
    [anon_sym_video_COLON_COLON] = ACTIONS(224),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(224),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(224),
    [aux_sym_autolinks_token1] = ACTIONS(224),
    [anon_sym_link_COLON] = ACTIONS(226),
    [anon_sym_LT_LT] = ACTIONS(226),
    [anon_sym_xref_COLON] = ACTIONS(226),
    [sym_emphasis] = ACTIONS(226),
    [sym_strong] = ACTIONS(226),
    [sym_monospace] = ACTIONS(224),
    [sym_highlight] = ACTIONS(224),
    [sym_superscript] = ACTIONS(224),
    [sym_subscript] = ACTIONS(224),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(224),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(230),
    [aux_sym_title0_token1] = ACTIONS(228),
    [sym_title1] = ACTIONS(228),
    [sym_title2] = ACTIONS(228),
    [sym_title3] = ACTIONS(228),
    [sym_title4] = ACTIONS(228),
    [sym_title5] = ACTIONS(228),
    [sym_name] = ACTIONS(230),
    [sym_attr_mark] = ACTIONS(230),
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
    [sym__unordered_list_mark] = ACTIONS(230),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(230),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(230),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(230),
    [sym__checklist_mark] = ACTIONS(230),
    [aux_sym_code_token1] = ACTIONS(228),
    [aux_sym_code_language_token1] = ACTIONS(230),
    [anon_sym_SLASH_SLASH] = ACTIONS(228),
    [aux_sym_line_breaks_token1] = ACTIONS(228),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(228),
    [anon_sym_image_COLON_COLON] = ACTIONS(228),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(228),
    [anon_sym_audio_COLON_COLON] = ACTIONS(228),
    [anon_sym_video_COLON_COLON] = ACTIONS(228),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(228),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(228),
    [aux_sym_autolinks_token1] = ACTIONS(228),
    [anon_sym_link_COLON] = ACTIONS(230),
    [anon_sym_LT_LT] = ACTIONS(230),
    [anon_sym_xref_COLON] = ACTIONS(230),
    [sym_emphasis] = ACTIONS(230),
    [sym_strong] = ACTIONS(230),
    [sym_monospace] = ACTIONS(228),
    [sym_highlight] = ACTIONS(228),
    [sym_superscript] = ACTIONS(228),
    [sym_subscript] = ACTIONS(228),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(228),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(234),
    [aux_sym_title0_token1] = ACTIONS(232),
    [sym_title1] = ACTIONS(232),
    [sym_title2] = ACTIONS(232),
    [sym_title3] = ACTIONS(232),
    [sym_title4] = ACTIONS(232),
    [sym_title5] = ACTIONS(232),
    [sym_name] = ACTIONS(234),
    [sym_attr_mark] = ACTIONS(234),
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
    [sym__unordered_list_mark] = ACTIONS(234),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(234),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(234),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(234),
    [sym__checklist_mark] = ACTIONS(234),
    [aux_sym_code_token1] = ACTIONS(232),
    [aux_sym_code_language_token1] = ACTIONS(234),
    [anon_sym_SLASH_SLASH] = ACTIONS(232),
    [aux_sym_line_breaks_token1] = ACTIONS(232),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(232),
    [anon_sym_image_COLON_COLON] = ACTIONS(232),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(232),
    [anon_sym_audio_COLON_COLON] = ACTIONS(232),
    [anon_sym_video_COLON_COLON] = ACTIONS(232),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(232),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(232),
    [aux_sym_autolinks_token1] = ACTIONS(232),
    [anon_sym_link_COLON] = ACTIONS(234),
    [anon_sym_LT_LT] = ACTIONS(234),
    [anon_sym_xref_COLON] = ACTIONS(234),
    [sym_emphasis] = ACTIONS(234),
    [sym_strong] = ACTIONS(234),
    [sym_monospace] = ACTIONS(232),
    [sym_highlight] = ACTIONS(232),
    [sym_superscript] = ACTIONS(232),
    [sym_subscript] = ACTIONS(232),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(232),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(238),
    [aux_sym_title0_token1] = ACTIONS(236),
    [sym_title1] = ACTIONS(236),
    [sym_title2] = ACTIONS(236),
    [sym_title3] = ACTIONS(236),
    [sym_title4] = ACTIONS(236),
    [sym_title5] = ACTIONS(236),
    [sym_name] = ACTIONS(238),
    [sym_attr_mark] = ACTIONS(238),
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
    [sym__unordered_list_mark] = ACTIONS(238),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(238),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(238),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(238),
    [sym__checklist_mark] = ACTIONS(238),
    [aux_sym_code_token1] = ACTIONS(236),
    [aux_sym_code_language_token1] = ACTIONS(238),
    [anon_sym_SLASH_SLASH] = ACTIONS(236),
    [aux_sym_line_breaks_token1] = ACTIONS(236),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(236),
    [anon_sym_image_COLON_COLON] = ACTIONS(236),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(236),
    [anon_sym_audio_COLON_COLON] = ACTIONS(236),
    [anon_sym_video_COLON_COLON] = ACTIONS(236),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(236),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(236),
    [aux_sym_autolinks_token1] = ACTIONS(236),
    [anon_sym_link_COLON] = ACTIONS(238),
    [anon_sym_LT_LT] = ACTIONS(238),
    [anon_sym_xref_COLON] = ACTIONS(238),
    [sym_emphasis] = ACTIONS(238),
    [sym_strong] = ACTIONS(238),
    [sym_monospace] = ACTIONS(236),
    [sym_highlight] = ACTIONS(236),
    [sym_superscript] = ACTIONS(236),
    [sym_subscript] = ACTIONS(236),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(236),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(242),
    [aux_sym_title0_token1] = ACTIONS(240),
    [sym_title1] = ACTIONS(240),
    [sym_title2] = ACTIONS(240),
    [sym_title3] = ACTIONS(240),
    [sym_title4] = ACTIONS(240),
    [sym_title5] = ACTIONS(240),
    [sym_name] = ACTIONS(242),
    [sym_attr_mark] = ACTIONS(242),
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
    [sym__unordered_list_mark] = ACTIONS(242),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(242),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(242),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(242),
    [sym__checklist_mark] = ACTIONS(242),
    [aux_sym_code_token1] = ACTIONS(240),
    [aux_sym_code_language_token1] = ACTIONS(242),
    [anon_sym_SLASH_SLASH] = ACTIONS(240),
    [aux_sym_line_breaks_token1] = ACTIONS(240),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(240),
    [anon_sym_image_COLON_COLON] = ACTIONS(240),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(240),
    [anon_sym_audio_COLON_COLON] = ACTIONS(240),
    [anon_sym_video_COLON_COLON] = ACTIONS(240),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(240),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(240),
    [aux_sym_autolinks_token1] = ACTIONS(240),
    [anon_sym_link_COLON] = ACTIONS(242),
    [anon_sym_LT_LT] = ACTIONS(242),
    [anon_sym_xref_COLON] = ACTIONS(242),
    [sym_emphasis] = ACTIONS(242),
    [sym_strong] = ACTIONS(242),
    [sym_monospace] = ACTIONS(240),
    [sym_highlight] = ACTIONS(240),
    [sym_superscript] = ACTIONS(240),
    [sym_subscript] = ACTIONS(240),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(240),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(246),
    [aux_sym_title0_token1] = ACTIONS(244),
    [sym_title1] = ACTIONS(244),
    [sym_title2] = ACTIONS(244),
    [sym_title3] = ACTIONS(244),
    [sym_title4] = ACTIONS(244),
    [sym_title5] = ACTIONS(244),
    [sym_name] = ACTIONS(246),
    [sym_attr_mark] = ACTIONS(246),
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
    [sym__unordered_list_mark] = ACTIONS(246),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(246),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(246),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(246),
    [sym__checklist_mark] = ACTIONS(246),
    [aux_sym_code_token1] = ACTIONS(244),
    [aux_sym_code_language_token1] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(244),
    [aux_sym_line_breaks_token1] = ACTIONS(244),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(244),
    [anon_sym_image_COLON_COLON] = ACTIONS(244),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(244),
    [anon_sym_audio_COLON_COLON] = ACTIONS(244),
    [anon_sym_video_COLON_COLON] = ACTIONS(244),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(244),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(244),
    [aux_sym_autolinks_token1] = ACTIONS(244),
    [anon_sym_link_COLON] = ACTIONS(246),
    [anon_sym_LT_LT] = ACTIONS(246),
    [anon_sym_xref_COLON] = ACTIONS(246),
    [sym_emphasis] = ACTIONS(246),
    [sym_strong] = ACTIONS(246),
    [sym_monospace] = ACTIONS(244),
    [sym_highlight] = ACTIONS(244),
    [sym_superscript] = ACTIONS(244),
    [sym_subscript] = ACTIONS(244),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(244),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_DOT] = ACTIONS(250),
    [aux_sym_title0_token1] = ACTIONS(248),
    [sym_title1] = ACTIONS(248),
    [sym_title2] = ACTIONS(248),
    [sym_title3] = ACTIONS(248),
    [sym_title4] = ACTIONS(248),
    [sym_title5] = ACTIONS(248),
    [sym_name] = ACTIONS(250),
    [sym_attr_mark] = ACTIONS(250),
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
    [sym__unordered_list_mark] = ACTIONS(250),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(250),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(250),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(250),
    [sym__checklist_mark] = ACTIONS(250),
    [aux_sym_code_token1] = ACTIONS(248),
    [aux_sym_code_language_token1] = ACTIONS(250),
    [anon_sym_SLASH_SLASH] = ACTIONS(248),
    [aux_sym_line_breaks_token1] = ACTIONS(248),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(248),
    [anon_sym_image_COLON_COLON] = ACTIONS(248),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(248),
    [anon_sym_audio_COLON_COLON] = ACTIONS(248),
    [anon_sym_video_COLON_COLON] = ACTIONS(248),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(248),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(248),
    [aux_sym_autolinks_token1] = ACTIONS(248),
    [anon_sym_link_COLON] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_xref_COLON] = ACTIONS(250),
    [sym_emphasis] = ACTIONS(250),
    [sym_strong] = ACTIONS(250),
    [sym_monospace] = ACTIONS(248),
    [sym_highlight] = ACTIONS(248),
    [sym_superscript] = ACTIONS(248),
    [sym_subscript] = ACTIONS(248),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(248),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_DOT] = ACTIONS(254),
    [aux_sym_title0_token1] = ACTIONS(252),
    [sym_title1] = ACTIONS(252),
    [sym_title2] = ACTIONS(252),
    [sym_title3] = ACTIONS(252),
    [sym_title4] = ACTIONS(252),
    [sym_title5] = ACTIONS(252),
    [sym_name] = ACTIONS(254),
    [sym_attr_mark] = ACTIONS(254),
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
    [sym__unordered_list_mark] = ACTIONS(254),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(254),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(254),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(254),
    [sym__checklist_mark] = ACTIONS(254),
    [aux_sym_code_token1] = ACTIONS(252),
    [aux_sym_code_language_token1] = ACTIONS(254),
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [aux_sym_line_breaks_token1] = ACTIONS(252),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(252),
    [anon_sym_image_COLON_COLON] = ACTIONS(252),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(252),
    [anon_sym_audio_COLON_COLON] = ACTIONS(252),
    [anon_sym_video_COLON_COLON] = ACTIONS(252),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(252),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(252),
    [aux_sym_autolinks_token1] = ACTIONS(252),
    [anon_sym_link_COLON] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_xref_COLON] = ACTIONS(254),
    [sym_emphasis] = ACTIONS(254),
    [sym_strong] = ACTIONS(254),
    [sym_monospace] = ACTIONS(252),
    [sym_highlight] = ACTIONS(252),
    [sym_superscript] = ACTIONS(252),
    [sym_subscript] = ACTIONS(252),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(252),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(258),
    [aux_sym_title0_token1] = ACTIONS(256),
    [sym_title1] = ACTIONS(256),
    [sym_title2] = ACTIONS(256),
    [sym_title3] = ACTIONS(256),
    [sym_title4] = ACTIONS(256),
    [sym_title5] = ACTIONS(256),
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
    [sym__unordered_list_mark] = ACTIONS(258),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(258),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(256),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(258),
    [sym__checklist_mark] = ACTIONS(258),
    [aux_sym_code_token1] = ACTIONS(256),
    [aux_sym_code_language_token1] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(256),
    [aux_sym_line_breaks_token1] = ACTIONS(256),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(256),
    [anon_sym_image_COLON_COLON] = ACTIONS(256),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(256),
    [anon_sym_audio_COLON_COLON] = ACTIONS(256),
    [anon_sym_video_COLON_COLON] = ACTIONS(256),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(256),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(256),
    [aux_sym_autolinks_token1] = ACTIONS(256),
    [anon_sym_link_COLON] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_xref_COLON] = ACTIONS(258),
    [sym_emphasis] = ACTIONS(258),
    [sym_strong] = ACTIONS(258),
    [sym_monospace] = ACTIONS(256),
    [sym_highlight] = ACTIONS(256),
    [sym_superscript] = ACTIONS(256),
    [sym_subscript] = ACTIONS(256),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(256),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [aux_sym_title0_token1] = ACTIONS(260),
    [sym_title1] = ACTIONS(260),
    [sym_title2] = ACTIONS(260),
    [sym_title3] = ACTIONS(260),
    [sym_title4] = ACTIONS(260),
    [sym_title5] = ACTIONS(260),
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
    [sym__unordered_list_mark] = ACTIONS(262),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(262),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(260),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(262),
    [sym__checklist_mark] = ACTIONS(262),
    [aux_sym_code_token1] = ACTIONS(260),
    [aux_sym_code_language_token1] = ACTIONS(262),
    [anon_sym_SLASH_SLASH] = ACTIONS(260),
    [aux_sym_line_breaks_token1] = ACTIONS(260),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(260),
    [anon_sym_image_COLON_COLON] = ACTIONS(260),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(260),
    [anon_sym_audio_COLON_COLON] = ACTIONS(260),
    [anon_sym_video_COLON_COLON] = ACTIONS(260),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(260),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(260),
    [aux_sym_autolinks_token1] = ACTIONS(260),
    [anon_sym_link_COLON] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(262),
    [anon_sym_xref_COLON] = ACTIONS(262),
    [sym_emphasis] = ACTIONS(262),
    [sym_strong] = ACTIONS(262),
    [sym_monospace] = ACTIONS(260),
    [sym_highlight] = ACTIONS(260),
    [sym_superscript] = ACTIONS(260),
    [sym_subscript] = ACTIONS(260),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(260),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_DOT] = ACTIONS(266),
    [aux_sym_title0_token1] = ACTIONS(264),
    [sym_title1] = ACTIONS(264),
    [sym_title2] = ACTIONS(264),
    [sym_title3] = ACTIONS(264),
    [sym_title4] = ACTIONS(264),
    [sym_title5] = ACTIONS(264),
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
    [sym__unordered_list_mark] = ACTIONS(266),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(266),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(264),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(266),
    [sym__checklist_mark] = ACTIONS(266),
    [aux_sym_code_token1] = ACTIONS(264),
    [aux_sym_code_language_token1] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(264),
    [aux_sym_line_breaks_token1] = ACTIONS(264),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(264),
    [anon_sym_image_COLON_COLON] = ACTIONS(264),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(264),
    [anon_sym_audio_COLON_COLON] = ACTIONS(264),
    [anon_sym_video_COLON_COLON] = ACTIONS(264),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(264),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(264),
    [aux_sym_autolinks_token1] = ACTIONS(264),
    [anon_sym_link_COLON] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_xref_COLON] = ACTIONS(266),
    [sym_emphasis] = ACTIONS(266),
    [sym_strong] = ACTIONS(266),
    [sym_monospace] = ACTIONS(264),
    [sym_highlight] = ACTIONS(264),
    [sym_superscript] = ACTIONS(264),
    [sym_subscript] = ACTIONS(264),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(264),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_DOT] = ACTIONS(270),
    [aux_sym_title0_token1] = ACTIONS(268),
    [sym_title1] = ACTIONS(268),
    [sym_title2] = ACTIONS(268),
    [sym_title3] = ACTIONS(268),
    [sym_title4] = ACTIONS(268),
    [sym_title5] = ACTIONS(268),
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
    [sym__unordered_list_mark] = ACTIONS(270),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(270),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(268),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(270),
    [sym__checklist_mark] = ACTIONS(270),
    [aux_sym_code_token1] = ACTIONS(268),
    [aux_sym_code_language_token1] = ACTIONS(270),
    [anon_sym_SLASH_SLASH] = ACTIONS(268),
    [aux_sym_line_breaks_token1] = ACTIONS(268),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(268),
    [anon_sym_image_COLON_COLON] = ACTIONS(268),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(268),
    [anon_sym_audio_COLON_COLON] = ACTIONS(268),
    [anon_sym_video_COLON_COLON] = ACTIONS(268),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(268),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(268),
    [aux_sym_autolinks_token1] = ACTIONS(268),
    [anon_sym_link_COLON] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(270),
    [anon_sym_xref_COLON] = ACTIONS(270),
    [sym_emphasis] = ACTIONS(270),
    [sym_strong] = ACTIONS(270),
    [sym_monospace] = ACTIONS(268),
    [sym_highlight] = ACTIONS(268),
    [sym_superscript] = ACTIONS(268),
    [sym_subscript] = ACTIONS(268),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(268),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(274),
    [aux_sym_title0_token1] = ACTIONS(272),
    [sym_title1] = ACTIONS(272),
    [sym_title2] = ACTIONS(272),
    [sym_title3] = ACTIONS(272),
    [sym_title4] = ACTIONS(272),
    [sym_title5] = ACTIONS(272),
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
    [sym__unordered_list_mark] = ACTIONS(274),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(274),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(272),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(274),
    [sym__checklist_mark] = ACTIONS(274),
    [aux_sym_code_token1] = ACTIONS(272),
    [aux_sym_code_language_token1] = ACTIONS(274),
    [anon_sym_SLASH_SLASH] = ACTIONS(272),
    [aux_sym_line_breaks_token1] = ACTIONS(272),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(272),
    [anon_sym_image_COLON_COLON] = ACTIONS(272),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(272),
    [anon_sym_audio_COLON_COLON] = ACTIONS(272),
    [anon_sym_video_COLON_COLON] = ACTIONS(272),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(272),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(272),
    [aux_sym_autolinks_token1] = ACTIONS(272),
    [anon_sym_link_COLON] = ACTIONS(274),
    [anon_sym_LT_LT] = ACTIONS(274),
    [anon_sym_xref_COLON] = ACTIONS(274),
    [sym_emphasis] = ACTIONS(274),
    [sym_strong] = ACTIONS(274),
    [sym_monospace] = ACTIONS(272),
    [sym_highlight] = ACTIONS(272),
    [sym_superscript] = ACTIONS(272),
    [sym_subscript] = ACTIONS(272),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(272),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(278),
    [aux_sym_title0_token1] = ACTIONS(276),
    [sym_title1] = ACTIONS(276),
    [sym_title2] = ACTIONS(276),
    [sym_title3] = ACTIONS(276),
    [sym_title4] = ACTIONS(276),
    [sym_title5] = ACTIONS(276),
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
    [sym__unordered_list_mark] = ACTIONS(278),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(278),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(276),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(278),
    [sym__checklist_mark] = ACTIONS(278),
    [aux_sym_code_token1] = ACTIONS(276),
    [aux_sym_code_language_token1] = ACTIONS(278),
    [anon_sym_SLASH_SLASH] = ACTIONS(276),
    [aux_sym_line_breaks_token1] = ACTIONS(276),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(276),
    [anon_sym_image_COLON_COLON] = ACTIONS(276),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(276),
    [anon_sym_audio_COLON_COLON] = ACTIONS(276),
    [anon_sym_video_COLON_COLON] = ACTIONS(276),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(276),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(276),
    [aux_sym_autolinks_token1] = ACTIONS(276),
    [anon_sym_link_COLON] = ACTIONS(278),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_xref_COLON] = ACTIONS(278),
    [sym_emphasis] = ACTIONS(278),
    [sym_strong] = ACTIONS(278),
    [sym_monospace] = ACTIONS(276),
    [sym_highlight] = ACTIONS(276),
    [sym_superscript] = ACTIONS(276),
    [sym_subscript] = ACTIONS(276),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(276),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(282),
    [aux_sym_title0_token1] = ACTIONS(280),
    [sym_title1] = ACTIONS(280),
    [sym_title2] = ACTIONS(280),
    [sym_title3] = ACTIONS(280),
    [sym_title4] = ACTIONS(280),
    [sym_title5] = ACTIONS(280),
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
    [sym__unordered_list_mark] = ACTIONS(282),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(282),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(280),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(282),
    [sym__checklist_mark] = ACTIONS(282),
    [aux_sym_code_token1] = ACTIONS(280),
    [aux_sym_code_language_token1] = ACTIONS(282),
    [anon_sym_SLASH_SLASH] = ACTIONS(280),
    [aux_sym_line_breaks_token1] = ACTIONS(280),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(280),
    [anon_sym_image_COLON_COLON] = ACTIONS(280),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(280),
    [anon_sym_audio_COLON_COLON] = ACTIONS(280),
    [anon_sym_video_COLON_COLON] = ACTIONS(280),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(280),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(280),
    [aux_sym_autolinks_token1] = ACTIONS(280),
    [anon_sym_link_COLON] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_xref_COLON] = ACTIONS(282),
    [sym_emphasis] = ACTIONS(282),
    [sym_strong] = ACTIONS(282),
    [sym_monospace] = ACTIONS(280),
    [sym_highlight] = ACTIONS(280),
    [sym_superscript] = ACTIONS(280),
    [sym_subscript] = ACTIONS(280),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(280),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(286),
    [aux_sym_title0_token1] = ACTIONS(284),
    [sym_title1] = ACTIONS(284),
    [sym_title2] = ACTIONS(284),
    [sym_title3] = ACTIONS(284),
    [sym_title4] = ACTIONS(284),
    [sym_title5] = ACTIONS(284),
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
    [sym__unordered_list_mark] = ACTIONS(286),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(286),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(284),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(286),
    [sym__checklist_mark] = ACTIONS(286),
    [aux_sym_code_token1] = ACTIONS(284),
    [aux_sym_code_language_token1] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [aux_sym_line_breaks_token1] = ACTIONS(284),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(284),
    [anon_sym_image_COLON_COLON] = ACTIONS(284),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(284),
    [anon_sym_audio_COLON_COLON] = ACTIONS(284),
    [anon_sym_video_COLON_COLON] = ACTIONS(284),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(284),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(284),
    [aux_sym_autolinks_token1] = ACTIONS(284),
    [anon_sym_link_COLON] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(286),
    [anon_sym_xref_COLON] = ACTIONS(286),
    [sym_emphasis] = ACTIONS(286),
    [sym_strong] = ACTIONS(286),
    [sym_monospace] = ACTIONS(284),
    [sym_highlight] = ACTIONS(284),
    [sym_superscript] = ACTIONS(284),
    [sym_subscript] = ACTIONS(284),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(284),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(290),
    [aux_sym_title0_token1] = ACTIONS(288),
    [sym_title1] = ACTIONS(288),
    [sym_title2] = ACTIONS(288),
    [sym_title3] = ACTIONS(288),
    [sym_title4] = ACTIONS(288),
    [sym_title5] = ACTIONS(288),
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
    [sym__unordered_list_mark] = ACTIONS(290),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(290),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(288),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(290),
    [sym__checklist_mark] = ACTIONS(290),
    [aux_sym_code_token1] = ACTIONS(288),
    [aux_sym_code_language_token1] = ACTIONS(290),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [aux_sym_line_breaks_token1] = ACTIONS(288),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(288),
    [anon_sym_image_COLON_COLON] = ACTIONS(288),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(288),
    [anon_sym_audio_COLON_COLON] = ACTIONS(288),
    [anon_sym_video_COLON_COLON] = ACTIONS(288),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(288),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(288),
    [aux_sym_autolinks_token1] = ACTIONS(288),
    [anon_sym_link_COLON] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(290),
    [anon_sym_xref_COLON] = ACTIONS(290),
    [sym_emphasis] = ACTIONS(290),
    [sym_strong] = ACTIONS(290),
    [sym_monospace] = ACTIONS(288),
    [sym_highlight] = ACTIONS(288),
    [sym_superscript] = ACTIONS(288),
    [sym_subscript] = ACTIONS(288),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(288),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_DOT] = ACTIONS(294),
    [aux_sym_title0_token1] = ACTIONS(292),
    [sym_title1] = ACTIONS(292),
    [sym_title2] = ACTIONS(292),
    [sym_title3] = ACTIONS(292),
    [sym_title4] = ACTIONS(292),
    [sym_title5] = ACTIONS(292),
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
    [sym__unordered_list_mark] = ACTIONS(294),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(294),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(292),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(294),
    [sym__checklist_mark] = ACTIONS(294),
    [aux_sym_code_token1] = ACTIONS(292),
    [aux_sym_code_language_token1] = ACTIONS(294),
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [aux_sym_line_breaks_token1] = ACTIONS(292),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(292),
    [anon_sym_image_COLON_COLON] = ACTIONS(292),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(292),
    [anon_sym_audio_COLON_COLON] = ACTIONS(292),
    [anon_sym_video_COLON_COLON] = ACTIONS(292),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(292),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(292),
    [aux_sym_autolinks_token1] = ACTIONS(292),
    [anon_sym_link_COLON] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_xref_COLON] = ACTIONS(294),
    [sym_emphasis] = ACTIONS(294),
    [sym_strong] = ACTIONS(294),
    [sym_monospace] = ACTIONS(292),
    [sym_highlight] = ACTIONS(292),
    [sym_superscript] = ACTIONS(292),
    [sym_subscript] = ACTIONS(292),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(292),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(298),
    [aux_sym_title0_token1] = ACTIONS(296),
    [sym_title1] = ACTIONS(296),
    [sym_title2] = ACTIONS(296),
    [sym_title3] = ACTIONS(296),
    [sym_title4] = ACTIONS(296),
    [sym_title5] = ACTIONS(296),
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
    [sym__unordered_list_mark] = ACTIONS(298),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(298),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(296),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(298),
    [sym__checklist_mark] = ACTIONS(298),
    [aux_sym_code_token1] = ACTIONS(296),
    [aux_sym_code_language_token1] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(296),
    [aux_sym_line_breaks_token1] = ACTIONS(296),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(296),
    [anon_sym_image_COLON_COLON] = ACTIONS(296),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(296),
    [anon_sym_audio_COLON_COLON] = ACTIONS(296),
    [anon_sym_video_COLON_COLON] = ACTIONS(296),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(296),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(296),
    [aux_sym_autolinks_token1] = ACTIONS(296),
    [anon_sym_link_COLON] = ACTIONS(298),
    [anon_sym_LT_LT] = ACTIONS(298),
    [anon_sym_xref_COLON] = ACTIONS(298),
    [sym_emphasis] = ACTIONS(298),
    [sym_strong] = ACTIONS(298),
    [sym_monospace] = ACTIONS(296),
    [sym_highlight] = ACTIONS(296),
    [sym_superscript] = ACTIONS(296),
    [sym_subscript] = ACTIONS(296),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(296),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(302),
    [aux_sym_title0_token1] = ACTIONS(300),
    [sym_title1] = ACTIONS(300),
    [sym_title2] = ACTIONS(300),
    [sym_title3] = ACTIONS(300),
    [sym_title4] = ACTIONS(300),
    [sym_title5] = ACTIONS(300),
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
    [sym__unordered_list_mark] = ACTIONS(302),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(302),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(300),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(302),
    [sym__checklist_mark] = ACTIONS(302),
    [aux_sym_code_token1] = ACTIONS(300),
    [aux_sym_code_language_token1] = ACTIONS(302),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [aux_sym_line_breaks_token1] = ACTIONS(300),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(300),
    [anon_sym_image_COLON_COLON] = ACTIONS(300),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(300),
    [anon_sym_audio_COLON_COLON] = ACTIONS(300),
    [anon_sym_video_COLON_COLON] = ACTIONS(300),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(300),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(300),
    [aux_sym_autolinks_token1] = ACTIONS(300),
    [anon_sym_link_COLON] = ACTIONS(302),
    [anon_sym_LT_LT] = ACTIONS(302),
    [anon_sym_xref_COLON] = ACTIONS(302),
    [sym_emphasis] = ACTIONS(302),
    [sym_strong] = ACTIONS(302),
    [sym_monospace] = ACTIONS(300),
    [sym_highlight] = ACTIONS(300),
    [sym_superscript] = ACTIONS(300),
    [sym_subscript] = ACTIONS(300),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(300),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(306),
    [aux_sym_title0_token1] = ACTIONS(304),
    [sym_title1] = ACTIONS(304),
    [sym_title2] = ACTIONS(304),
    [sym_title3] = ACTIONS(304),
    [sym_title4] = ACTIONS(304),
    [sym_title5] = ACTIONS(304),
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
    [sym__unordered_list_mark] = ACTIONS(306),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(306),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(304),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(306),
    [sym__checklist_mark] = ACTIONS(306),
    [aux_sym_code_token1] = ACTIONS(304),
    [aux_sym_code_language_token1] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(304),
    [aux_sym_line_breaks_token1] = ACTIONS(304),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(304),
    [anon_sym_image_COLON_COLON] = ACTIONS(304),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(304),
    [anon_sym_audio_COLON_COLON] = ACTIONS(304),
    [anon_sym_video_COLON_COLON] = ACTIONS(304),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(304),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(304),
    [aux_sym_autolinks_token1] = ACTIONS(304),
    [anon_sym_link_COLON] = ACTIONS(306),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_xref_COLON] = ACTIONS(306),
    [sym_emphasis] = ACTIONS(306),
    [sym_strong] = ACTIONS(306),
    [sym_monospace] = ACTIONS(304),
    [sym_highlight] = ACTIONS(304),
    [sym_superscript] = ACTIONS(304),
    [sym_subscript] = ACTIONS(304),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(304),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(310),
    [aux_sym_title0_token1] = ACTIONS(308),
    [sym_title1] = ACTIONS(308),
    [sym_title2] = ACTIONS(308),
    [sym_title3] = ACTIONS(308),
    [sym_title4] = ACTIONS(308),
    [sym_title5] = ACTIONS(308),
    [anon_sym_NOTE_COLON] = ACTIONS(308),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(308),
    [anon_sym_TIP_COLON] = ACTIONS(308),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(308),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(308),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(308),
    [anon_sym_CAUTION_COLON] = ACTIONS(308),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(308),
    [anon_sym_WARNING_COLON] = ACTIONS(308),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(308),
    [sym__unordered_list_mark] = ACTIONS(310),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(310),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(308),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(310),
    [sym__checklist_mark] = ACTIONS(310),
    [aux_sym_code_token1] = ACTIONS(308),
    [aux_sym_code_language_token1] = ACTIONS(310),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [aux_sym_line_breaks_token1] = ACTIONS(308),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(308),
    [anon_sym_image_COLON_COLON] = ACTIONS(308),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(308),
    [anon_sym_audio_COLON_COLON] = ACTIONS(308),
    [anon_sym_video_COLON_COLON] = ACTIONS(308),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(308),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(308),
    [aux_sym_autolinks_token1] = ACTIONS(308),
    [anon_sym_link_COLON] = ACTIONS(310),
    [anon_sym_LT_LT] = ACTIONS(310),
    [anon_sym_xref_COLON] = ACTIONS(310),
    [sym_emphasis] = ACTIONS(310),
    [sym_strong] = ACTIONS(310),
    [sym_monospace] = ACTIONS(308),
    [sym_highlight] = ACTIONS(308),
    [sym_superscript] = ACTIONS(308),
    [sym_subscript] = ACTIONS(308),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(308),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(308),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(308),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(308),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(314),
    [aux_sym_title0_token1] = ACTIONS(312),
    [sym_title1] = ACTIONS(312),
    [sym_title2] = ACTIONS(312),
    [sym_title3] = ACTIONS(312),
    [sym_title4] = ACTIONS(312),
    [sym_title5] = ACTIONS(312),
    [anon_sym_NOTE_COLON] = ACTIONS(312),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(312),
    [anon_sym_TIP_COLON] = ACTIONS(312),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(312),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(312),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(312),
    [anon_sym_CAUTION_COLON] = ACTIONS(312),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(312),
    [anon_sym_WARNING_COLON] = ACTIONS(312),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(312),
    [sym__unordered_list_mark] = ACTIONS(314),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(314),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(312),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(314),
    [sym__checklist_mark] = ACTIONS(314),
    [aux_sym_code_token1] = ACTIONS(312),
    [aux_sym_code_language_token1] = ACTIONS(314),
    [anon_sym_SLASH_SLASH] = ACTIONS(312),
    [aux_sym_line_breaks_token1] = ACTIONS(312),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(312),
    [anon_sym_image_COLON_COLON] = ACTIONS(312),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(312),
    [anon_sym_audio_COLON_COLON] = ACTIONS(312),
    [anon_sym_video_COLON_COLON] = ACTIONS(312),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(312),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(312),
    [aux_sym_autolinks_token1] = ACTIONS(312),
    [anon_sym_link_COLON] = ACTIONS(314),
    [anon_sym_LT_LT] = ACTIONS(314),
    [anon_sym_xref_COLON] = ACTIONS(314),
    [sym_emphasis] = ACTIONS(314),
    [sym_strong] = ACTIONS(314),
    [sym_monospace] = ACTIONS(312),
    [sym_highlight] = ACTIONS(312),
    [sym_superscript] = ACTIONS(312),
    [sym_subscript] = ACTIONS(312),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(312),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(312),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(312),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(312),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(318),
    [aux_sym_title0_token1] = ACTIONS(316),
    [sym_title1] = ACTIONS(316),
    [sym_title2] = ACTIONS(316),
    [sym_title3] = ACTIONS(316),
    [sym_title4] = ACTIONS(316),
    [sym_title5] = ACTIONS(316),
    [anon_sym_NOTE_COLON] = ACTIONS(316),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(316),
    [anon_sym_TIP_COLON] = ACTIONS(316),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(316),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(316),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(316),
    [anon_sym_CAUTION_COLON] = ACTIONS(316),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(316),
    [anon_sym_WARNING_COLON] = ACTIONS(316),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(316),
    [sym__unordered_list_mark] = ACTIONS(318),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(318),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(316),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(318),
    [sym__checklist_mark] = ACTIONS(318),
    [aux_sym_code_token1] = ACTIONS(316),
    [aux_sym_code_language_token1] = ACTIONS(318),
    [anon_sym_SLASH_SLASH] = ACTIONS(316),
    [aux_sym_line_breaks_token1] = ACTIONS(316),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(316),
    [anon_sym_image_COLON_COLON] = ACTIONS(316),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(316),
    [anon_sym_audio_COLON_COLON] = ACTIONS(316),
    [anon_sym_video_COLON_COLON] = ACTIONS(316),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(316),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(316),
    [aux_sym_autolinks_token1] = ACTIONS(316),
    [anon_sym_link_COLON] = ACTIONS(318),
    [anon_sym_LT_LT] = ACTIONS(318),
    [anon_sym_xref_COLON] = ACTIONS(318),
    [sym_emphasis] = ACTIONS(318),
    [sym_strong] = ACTIONS(318),
    [sym_monospace] = ACTIONS(316),
    [sym_highlight] = ACTIONS(316),
    [sym_superscript] = ACTIONS(316),
    [sym_subscript] = ACTIONS(316),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(316),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(316),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(316),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(316),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(322),
    [aux_sym_title0_token1] = ACTIONS(320),
    [sym_title1] = ACTIONS(320),
    [sym_title2] = ACTIONS(320),
    [sym_title3] = ACTIONS(320),
    [sym_title4] = ACTIONS(320),
    [sym_title5] = ACTIONS(320),
    [anon_sym_NOTE_COLON] = ACTIONS(320),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(320),
    [anon_sym_TIP_COLON] = ACTIONS(320),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(320),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(320),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(320),
    [anon_sym_CAUTION_COLON] = ACTIONS(320),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(320),
    [anon_sym_WARNING_COLON] = ACTIONS(320),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(320),
    [sym__unordered_list_mark] = ACTIONS(322),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(322),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(320),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(322),
    [sym__checklist_mark] = ACTIONS(322),
    [aux_sym_code_token1] = ACTIONS(320),
    [aux_sym_code_language_token1] = ACTIONS(322),
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [aux_sym_line_breaks_token1] = ACTIONS(320),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(320),
    [anon_sym_image_COLON_COLON] = ACTIONS(320),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(320),
    [anon_sym_audio_COLON_COLON] = ACTIONS(320),
    [anon_sym_video_COLON_COLON] = ACTIONS(320),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(320),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(320),
    [aux_sym_autolinks_token1] = ACTIONS(320),
    [anon_sym_link_COLON] = ACTIONS(322),
    [anon_sym_LT_LT] = ACTIONS(322),
    [anon_sym_xref_COLON] = ACTIONS(322),
    [sym_emphasis] = ACTIONS(322),
    [sym_strong] = ACTIONS(322),
    [sym_monospace] = ACTIONS(320),
    [sym_highlight] = ACTIONS(320),
    [sym_superscript] = ACTIONS(320),
    [sym_subscript] = ACTIONS(320),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(320),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(320),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(320),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(326),
    [aux_sym_title0_token1] = ACTIONS(324),
    [sym_title1] = ACTIONS(324),
    [sym_title2] = ACTIONS(324),
    [sym_title3] = ACTIONS(324),
    [sym_title4] = ACTIONS(324),
    [sym_title5] = ACTIONS(324),
    [anon_sym_NOTE_COLON] = ACTIONS(324),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(324),
    [anon_sym_TIP_COLON] = ACTIONS(324),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(324),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(324),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(324),
    [anon_sym_CAUTION_COLON] = ACTIONS(324),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(324),
    [anon_sym_WARNING_COLON] = ACTIONS(324),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(324),
    [sym__unordered_list_mark] = ACTIONS(326),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(326),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(324),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(326),
    [sym__checklist_mark] = ACTIONS(326),
    [aux_sym_code_token1] = ACTIONS(324),
    [aux_sym_code_language_token1] = ACTIONS(326),
    [anon_sym_SLASH_SLASH] = ACTIONS(324),
    [aux_sym_line_breaks_token1] = ACTIONS(324),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(324),
    [anon_sym_image_COLON_COLON] = ACTIONS(324),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(324),
    [anon_sym_audio_COLON_COLON] = ACTIONS(324),
    [anon_sym_video_COLON_COLON] = ACTIONS(324),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(324),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(324),
    [aux_sym_autolinks_token1] = ACTIONS(324),
    [anon_sym_link_COLON] = ACTIONS(326),
    [anon_sym_LT_LT] = ACTIONS(326),
    [anon_sym_xref_COLON] = ACTIONS(326),
    [sym_emphasis] = ACTIONS(326),
    [sym_strong] = ACTIONS(326),
    [sym_monospace] = ACTIONS(324),
    [sym_highlight] = ACTIONS(324),
    [sym_superscript] = ACTIONS(324),
    [sym_subscript] = ACTIONS(324),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(324),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(324),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(324),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(330),
    [aux_sym_title0_token1] = ACTIONS(328),
    [sym_title1] = ACTIONS(328),
    [sym_title2] = ACTIONS(328),
    [sym_title3] = ACTIONS(328),
    [sym_title4] = ACTIONS(328),
    [sym_title5] = ACTIONS(328),
    [anon_sym_NOTE_COLON] = ACTIONS(328),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(328),
    [anon_sym_TIP_COLON] = ACTIONS(328),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(328),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(328),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(328),
    [anon_sym_CAUTION_COLON] = ACTIONS(328),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(328),
    [anon_sym_WARNING_COLON] = ACTIONS(328),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(328),
    [sym__unordered_list_mark] = ACTIONS(330),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(330),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(328),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(330),
    [sym__checklist_mark] = ACTIONS(330),
    [aux_sym_code_token1] = ACTIONS(328),
    [aux_sym_code_language_token1] = ACTIONS(330),
    [anon_sym_SLASH_SLASH] = ACTIONS(328),
    [aux_sym_line_breaks_token1] = ACTIONS(328),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(328),
    [anon_sym_image_COLON_COLON] = ACTIONS(328),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(328),
    [anon_sym_audio_COLON_COLON] = ACTIONS(328),
    [anon_sym_video_COLON_COLON] = ACTIONS(328),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(328),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(328),
    [aux_sym_autolinks_token1] = ACTIONS(328),
    [anon_sym_link_COLON] = ACTIONS(330),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_xref_COLON] = ACTIONS(330),
    [sym_emphasis] = ACTIONS(330),
    [sym_strong] = ACTIONS(330),
    [sym_monospace] = ACTIONS(328),
    [sym_highlight] = ACTIONS(328),
    [sym_superscript] = ACTIONS(328),
    [sym_subscript] = ACTIONS(328),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(328),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(328),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(328),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(328),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(334),
    [aux_sym_title0_token1] = ACTIONS(332),
    [sym_title1] = ACTIONS(332),
    [sym_title2] = ACTIONS(332),
    [sym_title3] = ACTIONS(332),
    [sym_title4] = ACTIONS(332),
    [sym_title5] = ACTIONS(332),
    [anon_sym_NOTE_COLON] = ACTIONS(332),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(332),
    [anon_sym_TIP_COLON] = ACTIONS(332),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(332),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(332),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(332),
    [anon_sym_CAUTION_COLON] = ACTIONS(332),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(332),
    [anon_sym_WARNING_COLON] = ACTIONS(332),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(332),
    [sym__unordered_list_mark] = ACTIONS(334),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(334),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(332),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(334),
    [sym__checklist_mark] = ACTIONS(334),
    [aux_sym_code_token1] = ACTIONS(332),
    [aux_sym_code_language_token1] = ACTIONS(334),
    [anon_sym_SLASH_SLASH] = ACTIONS(332),
    [aux_sym_line_breaks_token1] = ACTIONS(332),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(332),
    [anon_sym_image_COLON_COLON] = ACTIONS(332),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(332),
    [anon_sym_audio_COLON_COLON] = ACTIONS(332),
    [anon_sym_video_COLON_COLON] = ACTIONS(332),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(332),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(332),
    [aux_sym_autolinks_token1] = ACTIONS(332),
    [anon_sym_link_COLON] = ACTIONS(334),
    [anon_sym_LT_LT] = ACTIONS(334),
    [anon_sym_xref_COLON] = ACTIONS(334),
    [sym_emphasis] = ACTIONS(334),
    [sym_strong] = ACTIONS(334),
    [sym_monospace] = ACTIONS(332),
    [sym_highlight] = ACTIONS(332),
    [sym_superscript] = ACTIONS(332),
    [sym_subscript] = ACTIONS(332),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(332),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(332),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(332),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(332),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(338),
    [aux_sym_title0_token1] = ACTIONS(336),
    [sym_title1] = ACTIONS(336),
    [sym_title2] = ACTIONS(336),
    [sym_title3] = ACTIONS(336),
    [sym_title4] = ACTIONS(336),
    [sym_title5] = ACTIONS(336),
    [anon_sym_NOTE_COLON] = ACTIONS(336),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(336),
    [anon_sym_TIP_COLON] = ACTIONS(336),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(336),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(336),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(336),
    [anon_sym_CAUTION_COLON] = ACTIONS(336),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(336),
    [anon_sym_WARNING_COLON] = ACTIONS(336),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(336),
    [sym__unordered_list_mark] = ACTIONS(338),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(338),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(336),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(338),
    [sym__checklist_mark] = ACTIONS(338),
    [aux_sym_code_token1] = ACTIONS(336),
    [aux_sym_code_language_token1] = ACTIONS(338),
    [anon_sym_SLASH_SLASH] = ACTIONS(336),
    [aux_sym_line_breaks_token1] = ACTIONS(336),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(336),
    [anon_sym_image_COLON_COLON] = ACTIONS(336),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(336),
    [anon_sym_audio_COLON_COLON] = ACTIONS(336),
    [anon_sym_video_COLON_COLON] = ACTIONS(336),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(336),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(336),
    [aux_sym_autolinks_token1] = ACTIONS(336),
    [anon_sym_link_COLON] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(338),
    [anon_sym_xref_COLON] = ACTIONS(338),
    [sym_emphasis] = ACTIONS(338),
    [sym_strong] = ACTIONS(338),
    [sym_monospace] = ACTIONS(336),
    [sym_highlight] = ACTIONS(336),
    [sym_superscript] = ACTIONS(336),
    [sym_subscript] = ACTIONS(336),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(336),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(336),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(336),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_DOT] = ACTIONS(342),
    [aux_sym_title0_token1] = ACTIONS(340),
    [sym_title1] = ACTIONS(340),
    [sym_title2] = ACTIONS(340),
    [sym_title3] = ACTIONS(340),
    [sym_title4] = ACTIONS(340),
    [sym_title5] = ACTIONS(340),
    [anon_sym_NOTE_COLON] = ACTIONS(340),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(340),
    [anon_sym_TIP_COLON] = ACTIONS(340),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(340),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(340),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(340),
    [anon_sym_CAUTION_COLON] = ACTIONS(340),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(340),
    [anon_sym_WARNING_COLON] = ACTIONS(340),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(340),
    [sym__unordered_list_mark] = ACTIONS(342),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(342),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(340),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(342),
    [sym__checklist_mark] = ACTIONS(342),
    [aux_sym_code_token1] = ACTIONS(340),
    [aux_sym_code_language_token1] = ACTIONS(342),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [aux_sym_line_breaks_token1] = ACTIONS(340),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(340),
    [anon_sym_image_COLON_COLON] = ACTIONS(340),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(340),
    [anon_sym_audio_COLON_COLON] = ACTIONS(340),
    [anon_sym_video_COLON_COLON] = ACTIONS(340),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(340),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(340),
    [aux_sym_autolinks_token1] = ACTIONS(340),
    [anon_sym_link_COLON] = ACTIONS(342),
    [anon_sym_LT_LT] = ACTIONS(342),
    [anon_sym_xref_COLON] = ACTIONS(342),
    [sym_emphasis] = ACTIONS(342),
    [sym_strong] = ACTIONS(342),
    [sym_monospace] = ACTIONS(340),
    [sym_highlight] = ACTIONS(340),
    [sym_superscript] = ACTIONS(340),
    [sym_subscript] = ACTIONS(340),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(340),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(340),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(340),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(340),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_DOT] = ACTIONS(346),
    [aux_sym_title0_token1] = ACTIONS(344),
    [sym_title1] = ACTIONS(344),
    [sym_title2] = ACTIONS(344),
    [sym_title3] = ACTIONS(344),
    [sym_title4] = ACTIONS(344),
    [sym_title5] = ACTIONS(344),
    [anon_sym_NOTE_COLON] = ACTIONS(344),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(344),
    [anon_sym_TIP_COLON] = ACTIONS(344),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(344),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(344),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(344),
    [anon_sym_CAUTION_COLON] = ACTIONS(344),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(344),
    [anon_sym_WARNING_COLON] = ACTIONS(344),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(344),
    [sym__unordered_list_mark] = ACTIONS(346),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(346),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(344),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(346),
    [sym__checklist_mark] = ACTIONS(346),
    [aux_sym_code_token1] = ACTIONS(344),
    [aux_sym_code_language_token1] = ACTIONS(346),
    [anon_sym_SLASH_SLASH] = ACTIONS(344),
    [aux_sym_line_breaks_token1] = ACTIONS(344),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(344),
    [anon_sym_image_COLON_COLON] = ACTIONS(344),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(344),
    [anon_sym_audio_COLON_COLON] = ACTIONS(344),
    [anon_sym_video_COLON_COLON] = ACTIONS(344),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(344),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(344),
    [aux_sym_autolinks_token1] = ACTIONS(344),
    [anon_sym_link_COLON] = ACTIONS(346),
    [anon_sym_LT_LT] = ACTIONS(346),
    [anon_sym_xref_COLON] = ACTIONS(346),
    [sym_emphasis] = ACTIONS(346),
    [sym_strong] = ACTIONS(346),
    [sym_monospace] = ACTIONS(344),
    [sym_highlight] = ACTIONS(344),
    [sym_superscript] = ACTIONS(344),
    [sym_subscript] = ACTIONS(344),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(344),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(344),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(344),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(344),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(350),
    [aux_sym_title0_token1] = ACTIONS(348),
    [sym_title1] = ACTIONS(348),
    [sym_title2] = ACTIONS(348),
    [sym_title3] = ACTIONS(348),
    [sym_title4] = ACTIONS(348),
    [sym_title5] = ACTIONS(348),
    [anon_sym_NOTE_COLON] = ACTIONS(348),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(348),
    [anon_sym_TIP_COLON] = ACTIONS(348),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(348),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(348),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(348),
    [anon_sym_CAUTION_COLON] = ACTIONS(348),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(348),
    [anon_sym_WARNING_COLON] = ACTIONS(348),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(348),
    [sym__unordered_list_mark] = ACTIONS(350),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(350),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(348),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(350),
    [sym__checklist_mark] = ACTIONS(350),
    [aux_sym_code_token1] = ACTIONS(348),
    [aux_sym_code_language_token1] = ACTIONS(350),
    [anon_sym_SLASH_SLASH] = ACTIONS(348),
    [aux_sym_line_breaks_token1] = ACTIONS(348),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(348),
    [anon_sym_image_COLON_COLON] = ACTIONS(348),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(348),
    [anon_sym_audio_COLON_COLON] = ACTIONS(348),
    [anon_sym_video_COLON_COLON] = ACTIONS(348),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(348),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(348),
    [aux_sym_autolinks_token1] = ACTIONS(348),
    [anon_sym_link_COLON] = ACTIONS(350),
    [anon_sym_LT_LT] = ACTIONS(350),
    [anon_sym_xref_COLON] = ACTIONS(350),
    [sym_emphasis] = ACTIONS(350),
    [sym_strong] = ACTIONS(350),
    [sym_monospace] = ACTIONS(348),
    [sym_highlight] = ACTIONS(348),
    [sym_superscript] = ACTIONS(348),
    [sym_subscript] = ACTIONS(348),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(348),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(348),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(348),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_DOT] = ACTIONS(354),
    [aux_sym_title0_token1] = ACTIONS(352),
    [sym_title1] = ACTIONS(352),
    [sym_title2] = ACTIONS(352),
    [sym_title3] = ACTIONS(352),
    [sym_title4] = ACTIONS(352),
    [sym_title5] = ACTIONS(352),
    [anon_sym_NOTE_COLON] = ACTIONS(352),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(352),
    [anon_sym_TIP_COLON] = ACTIONS(352),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(352),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(352),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(352),
    [anon_sym_CAUTION_COLON] = ACTIONS(352),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(352),
    [anon_sym_WARNING_COLON] = ACTIONS(352),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(352),
    [sym__unordered_list_mark] = ACTIONS(354),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(354),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(352),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(354),
    [sym__checklist_mark] = ACTIONS(354),
    [aux_sym_code_token1] = ACTIONS(352),
    [aux_sym_code_language_token1] = ACTIONS(354),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [aux_sym_line_breaks_token1] = ACTIONS(352),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(352),
    [anon_sym_image_COLON_COLON] = ACTIONS(352),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(352),
    [anon_sym_audio_COLON_COLON] = ACTIONS(352),
    [anon_sym_video_COLON_COLON] = ACTIONS(352),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(352),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(352),
    [aux_sym_autolinks_token1] = ACTIONS(352),
    [anon_sym_link_COLON] = ACTIONS(354),
    [anon_sym_LT_LT] = ACTIONS(354),
    [anon_sym_xref_COLON] = ACTIONS(354),
    [sym_emphasis] = ACTIONS(354),
    [sym_strong] = ACTIONS(354),
    [sym_monospace] = ACTIONS(352),
    [sym_highlight] = ACTIONS(352),
    [sym_superscript] = ACTIONS(352),
    [sym_subscript] = ACTIONS(352),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(352),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(352),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(358),
    [aux_sym_title0_token1] = ACTIONS(356),
    [sym_title1] = ACTIONS(356),
    [sym_title2] = ACTIONS(356),
    [sym_title3] = ACTIONS(356),
    [sym_title4] = ACTIONS(356),
    [sym_title5] = ACTIONS(356),
    [anon_sym_NOTE_COLON] = ACTIONS(356),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(356),
    [anon_sym_TIP_COLON] = ACTIONS(356),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(356),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(356),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(356),
    [anon_sym_CAUTION_COLON] = ACTIONS(356),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(356),
    [anon_sym_WARNING_COLON] = ACTIONS(356),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(356),
    [sym__unordered_list_mark] = ACTIONS(358),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(358),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(356),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(358),
    [sym__checklist_mark] = ACTIONS(358),
    [aux_sym_code_token1] = ACTIONS(356),
    [aux_sym_code_language_token1] = ACTIONS(358),
    [anon_sym_SLASH_SLASH] = ACTIONS(356),
    [aux_sym_line_breaks_token1] = ACTIONS(356),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(356),
    [anon_sym_image_COLON_COLON] = ACTIONS(356),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(356),
    [anon_sym_audio_COLON_COLON] = ACTIONS(356),
    [anon_sym_video_COLON_COLON] = ACTIONS(356),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(356),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(356),
    [aux_sym_autolinks_token1] = ACTIONS(356),
    [anon_sym_link_COLON] = ACTIONS(358),
    [anon_sym_LT_LT] = ACTIONS(358),
    [anon_sym_xref_COLON] = ACTIONS(358),
    [sym_emphasis] = ACTIONS(358),
    [sym_strong] = ACTIONS(358),
    [sym_monospace] = ACTIONS(356),
    [sym_highlight] = ACTIONS(356),
    [sym_superscript] = ACTIONS(356),
    [sym_subscript] = ACTIONS(356),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(356),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(356),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(356),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(356),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_DOT] = ACTIONS(362),
    [aux_sym_title0_token1] = ACTIONS(360),
    [sym_title1] = ACTIONS(360),
    [sym_title2] = ACTIONS(360),
    [sym_title3] = ACTIONS(360),
    [sym_title4] = ACTIONS(360),
    [sym_title5] = ACTIONS(360),
    [anon_sym_NOTE_COLON] = ACTIONS(360),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(360),
    [anon_sym_TIP_COLON] = ACTIONS(360),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(360),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(360),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(360),
    [anon_sym_CAUTION_COLON] = ACTIONS(360),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(360),
    [anon_sym_WARNING_COLON] = ACTIONS(360),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(360),
    [sym__unordered_list_mark] = ACTIONS(362),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(362),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(360),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(362),
    [sym__checklist_mark] = ACTIONS(362),
    [aux_sym_code_token1] = ACTIONS(360),
    [aux_sym_code_language_token1] = ACTIONS(362),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [aux_sym_line_breaks_token1] = ACTIONS(360),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(360),
    [anon_sym_image_COLON_COLON] = ACTIONS(360),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(360),
    [anon_sym_audio_COLON_COLON] = ACTIONS(360),
    [anon_sym_video_COLON_COLON] = ACTIONS(360),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(360),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(360),
    [aux_sym_autolinks_token1] = ACTIONS(360),
    [anon_sym_link_COLON] = ACTIONS(362),
    [anon_sym_LT_LT] = ACTIONS(362),
    [anon_sym_xref_COLON] = ACTIONS(362),
    [sym_emphasis] = ACTIONS(362),
    [sym_strong] = ACTIONS(362),
    [sym_monospace] = ACTIONS(360),
    [sym_highlight] = ACTIONS(360),
    [sym_superscript] = ACTIONS(360),
    [sym_subscript] = ACTIONS(360),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(360),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(360),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(360),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(366),
    [aux_sym_title0_token1] = ACTIONS(364),
    [sym_title1] = ACTIONS(364),
    [sym_title2] = ACTIONS(364),
    [sym_title3] = ACTIONS(364),
    [sym_title4] = ACTIONS(364),
    [sym_title5] = ACTIONS(364),
    [anon_sym_NOTE_COLON] = ACTIONS(364),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(364),
    [anon_sym_TIP_COLON] = ACTIONS(364),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(364),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(364),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(364),
    [anon_sym_CAUTION_COLON] = ACTIONS(364),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(364),
    [anon_sym_WARNING_COLON] = ACTIONS(364),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(364),
    [sym__unordered_list_mark] = ACTIONS(366),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(366),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(364),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(366),
    [sym__checklist_mark] = ACTIONS(366),
    [aux_sym_code_token1] = ACTIONS(364),
    [aux_sym_code_language_token1] = ACTIONS(366),
    [anon_sym_SLASH_SLASH] = ACTIONS(364),
    [aux_sym_line_breaks_token1] = ACTIONS(364),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(364),
    [anon_sym_image_COLON_COLON] = ACTIONS(364),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(364),
    [anon_sym_audio_COLON_COLON] = ACTIONS(364),
    [anon_sym_video_COLON_COLON] = ACTIONS(364),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(364),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(364),
    [aux_sym_autolinks_token1] = ACTIONS(364),
    [anon_sym_link_COLON] = ACTIONS(366),
    [anon_sym_LT_LT] = ACTIONS(366),
    [anon_sym_xref_COLON] = ACTIONS(366),
    [sym_emphasis] = ACTIONS(366),
    [sym_strong] = ACTIONS(366),
    [sym_monospace] = ACTIONS(364),
    [sym_highlight] = ACTIONS(364),
    [sym_superscript] = ACTIONS(364),
    [sym_subscript] = ACTIONS(364),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(364),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(364),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(364),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(370),
    [aux_sym_title0_token1] = ACTIONS(368),
    [sym_title1] = ACTIONS(368),
    [sym_title2] = ACTIONS(368),
    [sym_title3] = ACTIONS(368),
    [sym_title4] = ACTIONS(368),
    [sym_title5] = ACTIONS(368),
    [anon_sym_NOTE_COLON] = ACTIONS(368),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(368),
    [anon_sym_TIP_COLON] = ACTIONS(368),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(368),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(368),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(368),
    [anon_sym_CAUTION_COLON] = ACTIONS(368),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(368),
    [anon_sym_WARNING_COLON] = ACTIONS(368),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(368),
    [sym__unordered_list_mark] = ACTIONS(370),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(370),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(368),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(370),
    [sym__checklist_mark] = ACTIONS(370),
    [aux_sym_code_token1] = ACTIONS(368),
    [aux_sym_code_language_token1] = ACTIONS(370),
    [anon_sym_SLASH_SLASH] = ACTIONS(368),
    [aux_sym_line_breaks_token1] = ACTIONS(368),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(368),
    [anon_sym_image_COLON_COLON] = ACTIONS(368),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(368),
    [anon_sym_audio_COLON_COLON] = ACTIONS(368),
    [anon_sym_video_COLON_COLON] = ACTIONS(368),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(368),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(368),
    [aux_sym_autolinks_token1] = ACTIONS(368),
    [anon_sym_link_COLON] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_xref_COLON] = ACTIONS(370),
    [sym_emphasis] = ACTIONS(370),
    [sym_strong] = ACTIONS(370),
    [sym_monospace] = ACTIONS(368),
    [sym_highlight] = ACTIONS(368),
    [sym_superscript] = ACTIONS(368),
    [sym_subscript] = ACTIONS(368),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(368),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(368),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(368),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(368),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(374),
    [aux_sym_title0_token1] = ACTIONS(372),
    [sym_title1] = ACTIONS(372),
    [sym_title2] = ACTIONS(372),
    [sym_title3] = ACTIONS(372),
    [sym_title4] = ACTIONS(372),
    [sym_title5] = ACTIONS(372),
    [anon_sym_NOTE_COLON] = ACTIONS(372),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(372),
    [anon_sym_TIP_COLON] = ACTIONS(372),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(372),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(372),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(372),
    [anon_sym_CAUTION_COLON] = ACTIONS(372),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(372),
    [anon_sym_WARNING_COLON] = ACTIONS(372),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(372),
    [sym__unordered_list_mark] = ACTIONS(374),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(374),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(372),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(374),
    [sym__checklist_mark] = ACTIONS(374),
    [aux_sym_code_token1] = ACTIONS(372),
    [aux_sym_code_language_token1] = ACTIONS(374),
    [anon_sym_SLASH_SLASH] = ACTIONS(372),
    [aux_sym_line_breaks_token1] = ACTIONS(372),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(372),
    [anon_sym_image_COLON_COLON] = ACTIONS(372),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(372),
    [anon_sym_audio_COLON_COLON] = ACTIONS(372),
    [anon_sym_video_COLON_COLON] = ACTIONS(372),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(372),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(372),
    [aux_sym_autolinks_token1] = ACTIONS(372),
    [anon_sym_link_COLON] = ACTIONS(374),
    [anon_sym_LT_LT] = ACTIONS(374),
    [anon_sym_xref_COLON] = ACTIONS(374),
    [sym_emphasis] = ACTIONS(374),
    [sym_strong] = ACTIONS(374),
    [sym_monospace] = ACTIONS(372),
    [sym_highlight] = ACTIONS(372),
    [sym_superscript] = ACTIONS(372),
    [sym_subscript] = ACTIONS(372),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(372),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(372),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(372),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [anon_sym_DOT] = ACTIONS(378),
    [aux_sym_title0_token1] = ACTIONS(376),
    [sym_title1] = ACTIONS(376),
    [sym_title2] = ACTIONS(376),
    [sym_title3] = ACTIONS(376),
    [sym_title4] = ACTIONS(376),
    [sym_title5] = ACTIONS(376),
    [anon_sym_NOTE_COLON] = ACTIONS(376),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(376),
    [anon_sym_TIP_COLON] = ACTIONS(376),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(376),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(376),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(376),
    [anon_sym_CAUTION_COLON] = ACTIONS(376),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(376),
    [anon_sym_WARNING_COLON] = ACTIONS(376),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(376),
    [sym__unordered_list_mark] = ACTIONS(378),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(378),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(376),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(378),
    [sym__checklist_mark] = ACTIONS(378),
    [aux_sym_code_token1] = ACTIONS(376),
    [aux_sym_code_language_token1] = ACTIONS(378),
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [aux_sym_line_breaks_token1] = ACTIONS(376),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(376),
    [anon_sym_image_COLON_COLON] = ACTIONS(376),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(376),
    [anon_sym_audio_COLON_COLON] = ACTIONS(376),
    [anon_sym_video_COLON_COLON] = ACTIONS(376),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(376),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(376),
    [aux_sym_autolinks_token1] = ACTIONS(376),
    [anon_sym_link_COLON] = ACTIONS(378),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_xref_COLON] = ACTIONS(378),
    [sym_emphasis] = ACTIONS(378),
    [sym_strong] = ACTIONS(378),
    [sym_monospace] = ACTIONS(376),
    [sym_highlight] = ACTIONS(376),
    [sym_superscript] = ACTIONS(376),
    [sym_subscript] = ACTIONS(376),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(376),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(376),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(376),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(376),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_DOT] = ACTIONS(382),
    [aux_sym_title0_token1] = ACTIONS(380),
    [sym_title1] = ACTIONS(380),
    [sym_title2] = ACTIONS(380),
    [sym_title3] = ACTIONS(380),
    [sym_title4] = ACTIONS(380),
    [sym_title5] = ACTIONS(380),
    [anon_sym_NOTE_COLON] = ACTIONS(380),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(380),
    [anon_sym_TIP_COLON] = ACTIONS(380),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(380),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(380),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(380),
    [anon_sym_CAUTION_COLON] = ACTIONS(380),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(380),
    [anon_sym_WARNING_COLON] = ACTIONS(380),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(380),
    [sym__unordered_list_mark] = ACTIONS(382),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(382),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(380),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(382),
    [sym__checklist_mark] = ACTIONS(382),
    [aux_sym_code_token1] = ACTIONS(380),
    [aux_sym_code_language_token1] = ACTIONS(382),
    [anon_sym_SLASH_SLASH] = ACTIONS(380),
    [aux_sym_line_breaks_token1] = ACTIONS(380),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(380),
    [anon_sym_image_COLON_COLON] = ACTIONS(380),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(380),
    [anon_sym_audio_COLON_COLON] = ACTIONS(380),
    [anon_sym_video_COLON_COLON] = ACTIONS(380),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(380),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(380),
    [aux_sym_autolinks_token1] = ACTIONS(380),
    [anon_sym_link_COLON] = ACTIONS(382),
    [anon_sym_LT_LT] = ACTIONS(382),
    [anon_sym_xref_COLON] = ACTIONS(382),
    [sym_emphasis] = ACTIONS(382),
    [sym_strong] = ACTIONS(382),
    [sym_monospace] = ACTIONS(380),
    [sym_highlight] = ACTIONS(380),
    [sym_superscript] = ACTIONS(380),
    [sym_subscript] = ACTIONS(380),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(380),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(380),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(380),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(386),
    [aux_sym_title0_token1] = ACTIONS(384),
    [sym_title1] = ACTIONS(384),
    [sym_title2] = ACTIONS(384),
    [sym_title3] = ACTIONS(384),
    [sym_title4] = ACTIONS(384),
    [sym_title5] = ACTIONS(384),
    [anon_sym_NOTE_COLON] = ACTIONS(384),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(384),
    [anon_sym_TIP_COLON] = ACTIONS(384),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(384),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(384),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(384),
    [anon_sym_CAUTION_COLON] = ACTIONS(384),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(384),
    [anon_sym_WARNING_COLON] = ACTIONS(384),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(384),
    [sym__unordered_list_mark] = ACTIONS(386),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(386),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(384),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(386),
    [sym__checklist_mark] = ACTIONS(386),
    [aux_sym_code_token1] = ACTIONS(384),
    [aux_sym_code_language_token1] = ACTIONS(386),
    [anon_sym_SLASH_SLASH] = ACTIONS(384),
    [aux_sym_line_breaks_token1] = ACTIONS(384),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(384),
    [anon_sym_image_COLON_COLON] = ACTIONS(384),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(384),
    [anon_sym_audio_COLON_COLON] = ACTIONS(384),
    [anon_sym_video_COLON_COLON] = ACTIONS(384),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(384),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(384),
    [aux_sym_autolinks_token1] = ACTIONS(384),
    [anon_sym_link_COLON] = ACTIONS(386),
    [anon_sym_LT_LT] = ACTIONS(386),
    [anon_sym_xref_COLON] = ACTIONS(386),
    [sym_emphasis] = ACTIONS(386),
    [sym_strong] = ACTIONS(386),
    [sym_monospace] = ACTIONS(384),
    [sym_highlight] = ACTIONS(384),
    [sym_superscript] = ACTIONS(384),
    [sym_subscript] = ACTIONS(384),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(384),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(384),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(384),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(390),
    [aux_sym_title0_token1] = ACTIONS(388),
    [sym_title1] = ACTIONS(388),
    [sym_title2] = ACTIONS(388),
    [sym_title3] = ACTIONS(388),
    [sym_title4] = ACTIONS(388),
    [sym_title5] = ACTIONS(388),
    [anon_sym_NOTE_COLON] = ACTIONS(388),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(388),
    [anon_sym_TIP_COLON] = ACTIONS(388),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(388),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(388),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(388),
    [anon_sym_CAUTION_COLON] = ACTIONS(388),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(388),
    [anon_sym_WARNING_COLON] = ACTIONS(388),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(388),
    [sym__unordered_list_mark] = ACTIONS(390),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(390),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(388),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(390),
    [sym__checklist_mark] = ACTIONS(390),
    [aux_sym_code_token1] = ACTIONS(388),
    [aux_sym_code_language_token1] = ACTIONS(390),
    [anon_sym_SLASH_SLASH] = ACTIONS(388),
    [aux_sym_line_breaks_token1] = ACTIONS(388),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(388),
    [anon_sym_image_COLON_COLON] = ACTIONS(388),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(388),
    [anon_sym_audio_COLON_COLON] = ACTIONS(388),
    [anon_sym_video_COLON_COLON] = ACTIONS(388),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(388),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(388),
    [aux_sym_autolinks_token1] = ACTIONS(388),
    [anon_sym_link_COLON] = ACTIONS(390),
    [anon_sym_LT_LT] = ACTIONS(390),
    [anon_sym_xref_COLON] = ACTIONS(390),
    [sym_emphasis] = ACTIONS(390),
    [sym_strong] = ACTIONS(390),
    [sym_monospace] = ACTIONS(388),
    [sym_highlight] = ACTIONS(388),
    [sym_superscript] = ACTIONS(388),
    [sym_subscript] = ACTIONS(388),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(388),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(388),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(388),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(388),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [anon_sym_DOT] = ACTIONS(394),
    [aux_sym_title0_token1] = ACTIONS(392),
    [sym_title1] = ACTIONS(392),
    [sym_title2] = ACTIONS(392),
    [sym_title3] = ACTIONS(392),
    [sym_title4] = ACTIONS(392),
    [sym_title5] = ACTIONS(392),
    [anon_sym_NOTE_COLON] = ACTIONS(392),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(392),
    [anon_sym_TIP_COLON] = ACTIONS(392),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(392),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(392),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(392),
    [anon_sym_CAUTION_COLON] = ACTIONS(392),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(392),
    [anon_sym_WARNING_COLON] = ACTIONS(392),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(392),
    [sym__unordered_list_mark] = ACTIONS(394),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(394),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(392),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(394),
    [sym__checklist_mark] = ACTIONS(394),
    [aux_sym_code_token1] = ACTIONS(392),
    [aux_sym_code_language_token1] = ACTIONS(394),
    [anon_sym_SLASH_SLASH] = ACTIONS(392),
    [aux_sym_line_breaks_token1] = ACTIONS(392),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(392),
    [anon_sym_image_COLON_COLON] = ACTIONS(392),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(392),
    [anon_sym_audio_COLON_COLON] = ACTIONS(392),
    [anon_sym_video_COLON_COLON] = ACTIONS(392),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(392),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(392),
    [aux_sym_autolinks_token1] = ACTIONS(392),
    [anon_sym_link_COLON] = ACTIONS(394),
    [anon_sym_LT_LT] = ACTIONS(394),
    [anon_sym_xref_COLON] = ACTIONS(394),
    [sym_emphasis] = ACTIONS(394),
    [sym_strong] = ACTIONS(394),
    [sym_monospace] = ACTIONS(392),
    [sym_highlight] = ACTIONS(392),
    [sym_superscript] = ACTIONS(392),
    [sym_subscript] = ACTIONS(392),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(392),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(392),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(392),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(392),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(398),
    [aux_sym_title0_token1] = ACTIONS(396),
    [sym_title1] = ACTIONS(396),
    [sym_title2] = ACTIONS(396),
    [sym_title3] = ACTIONS(396),
    [sym_title4] = ACTIONS(396),
    [sym_title5] = ACTIONS(396),
    [anon_sym_NOTE_COLON] = ACTIONS(396),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(396),
    [anon_sym_TIP_COLON] = ACTIONS(396),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(396),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(396),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(396),
    [anon_sym_CAUTION_COLON] = ACTIONS(396),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(396),
    [anon_sym_WARNING_COLON] = ACTIONS(396),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(396),
    [sym__unordered_list_mark] = ACTIONS(398),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(398),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(396),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(398),
    [sym__checklist_mark] = ACTIONS(398),
    [aux_sym_code_token1] = ACTIONS(396),
    [aux_sym_code_language_token1] = ACTIONS(398),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [aux_sym_line_breaks_token1] = ACTIONS(396),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(396),
    [anon_sym_image_COLON_COLON] = ACTIONS(396),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(396),
    [anon_sym_audio_COLON_COLON] = ACTIONS(396),
    [anon_sym_video_COLON_COLON] = ACTIONS(396),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(396),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(396),
    [aux_sym_autolinks_token1] = ACTIONS(396),
    [anon_sym_link_COLON] = ACTIONS(398),
    [anon_sym_LT_LT] = ACTIONS(398),
    [anon_sym_xref_COLON] = ACTIONS(398),
    [sym_emphasis] = ACTIONS(398),
    [sym_strong] = ACTIONS(398),
    [sym_monospace] = ACTIONS(396),
    [sym_highlight] = ACTIONS(396),
    [sym_superscript] = ACTIONS(396),
    [sym_subscript] = ACTIONS(396),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(396),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(396),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(396),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_DOT] = ACTIONS(402),
    [aux_sym_title0_token1] = ACTIONS(400),
    [sym_title1] = ACTIONS(400),
    [sym_title2] = ACTIONS(400),
    [sym_title3] = ACTIONS(400),
    [sym_title4] = ACTIONS(400),
    [sym_title5] = ACTIONS(400),
    [anon_sym_NOTE_COLON] = ACTIONS(400),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(400),
    [anon_sym_TIP_COLON] = ACTIONS(400),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(400),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(400),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(400),
    [anon_sym_CAUTION_COLON] = ACTIONS(400),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(400),
    [anon_sym_WARNING_COLON] = ACTIONS(400),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(400),
    [sym__unordered_list_mark] = ACTIONS(402),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(402),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(400),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(402),
    [sym__checklist_mark] = ACTIONS(402),
    [aux_sym_code_token1] = ACTIONS(400),
    [aux_sym_code_language_token1] = ACTIONS(402),
    [anon_sym_SLASH_SLASH] = ACTIONS(400),
    [aux_sym_line_breaks_token1] = ACTIONS(400),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(400),
    [anon_sym_image_COLON_COLON] = ACTIONS(400),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(400),
    [anon_sym_audio_COLON_COLON] = ACTIONS(400),
    [anon_sym_video_COLON_COLON] = ACTIONS(400),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(400),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(400),
    [aux_sym_autolinks_token1] = ACTIONS(400),
    [anon_sym_link_COLON] = ACTIONS(402),
    [anon_sym_LT_LT] = ACTIONS(402),
    [anon_sym_xref_COLON] = ACTIONS(402),
    [sym_emphasis] = ACTIONS(402),
    [sym_strong] = ACTIONS(402),
    [sym_monospace] = ACTIONS(400),
    [sym_highlight] = ACTIONS(400),
    [sym_superscript] = ACTIONS(400),
    [sym_subscript] = ACTIONS(400),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(400),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(400),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(400),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_DOT] = ACTIONS(406),
    [aux_sym_title0_token1] = ACTIONS(404),
    [sym_title1] = ACTIONS(404),
    [sym_title2] = ACTIONS(404),
    [sym_title3] = ACTIONS(404),
    [sym_title4] = ACTIONS(404),
    [sym_title5] = ACTIONS(404),
    [anon_sym_NOTE_COLON] = ACTIONS(404),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(404),
    [anon_sym_TIP_COLON] = ACTIONS(404),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(404),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(404),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(404),
    [anon_sym_CAUTION_COLON] = ACTIONS(404),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(404),
    [anon_sym_WARNING_COLON] = ACTIONS(404),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(404),
    [sym__unordered_list_mark] = ACTIONS(406),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(406),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(404),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(406),
    [sym__checklist_mark] = ACTIONS(406),
    [aux_sym_code_token1] = ACTIONS(404),
    [aux_sym_code_language_token1] = ACTIONS(406),
    [anon_sym_SLASH_SLASH] = ACTIONS(404),
    [aux_sym_line_breaks_token1] = ACTIONS(404),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(404),
    [anon_sym_image_COLON_COLON] = ACTIONS(404),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(404),
    [anon_sym_audio_COLON_COLON] = ACTIONS(404),
    [anon_sym_video_COLON_COLON] = ACTIONS(404),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(404),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(404),
    [aux_sym_autolinks_token1] = ACTIONS(404),
    [anon_sym_link_COLON] = ACTIONS(406),
    [anon_sym_LT_LT] = ACTIONS(406),
    [anon_sym_xref_COLON] = ACTIONS(406),
    [sym_emphasis] = ACTIONS(406),
    [sym_strong] = ACTIONS(406),
    [sym_monospace] = ACTIONS(404),
    [sym_highlight] = ACTIONS(404),
    [sym_superscript] = ACTIONS(404),
    [sym_subscript] = ACTIONS(404),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(404),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(404),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(404),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(404),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(410),
    [aux_sym_title0_token1] = ACTIONS(408),
    [sym_title1] = ACTIONS(408),
    [sym_title2] = ACTIONS(408),
    [sym_title3] = ACTIONS(408),
    [sym_title4] = ACTIONS(408),
    [sym_title5] = ACTIONS(408),
    [anon_sym_NOTE_COLON] = ACTIONS(408),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(408),
    [anon_sym_TIP_COLON] = ACTIONS(408),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(408),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(408),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(408),
    [anon_sym_CAUTION_COLON] = ACTIONS(408),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(408),
    [anon_sym_WARNING_COLON] = ACTIONS(408),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(408),
    [sym__unordered_list_mark] = ACTIONS(410),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(410),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(408),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(410),
    [sym__checklist_mark] = ACTIONS(410),
    [aux_sym_code_token1] = ACTIONS(408),
    [aux_sym_code_language_token1] = ACTIONS(410),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [aux_sym_line_breaks_token1] = ACTIONS(408),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(408),
    [anon_sym_image_COLON_COLON] = ACTIONS(408),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(408),
    [anon_sym_audio_COLON_COLON] = ACTIONS(408),
    [anon_sym_video_COLON_COLON] = ACTIONS(408),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(408),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(408),
    [aux_sym_autolinks_token1] = ACTIONS(408),
    [anon_sym_link_COLON] = ACTIONS(410),
    [anon_sym_LT_LT] = ACTIONS(410),
    [anon_sym_xref_COLON] = ACTIONS(410),
    [sym_emphasis] = ACTIONS(410),
    [sym_strong] = ACTIONS(410),
    [sym_monospace] = ACTIONS(408),
    [sym_highlight] = ACTIONS(408),
    [sym_superscript] = ACTIONS(408),
    [sym_subscript] = ACTIONS(408),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(408),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(408),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(408),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(408),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_DOT] = ACTIONS(414),
    [aux_sym_title0_token1] = ACTIONS(412),
    [sym_title1] = ACTIONS(412),
    [sym_title2] = ACTIONS(412),
    [sym_title3] = ACTIONS(412),
    [sym_title4] = ACTIONS(412),
    [sym_title5] = ACTIONS(412),
    [anon_sym_NOTE_COLON] = ACTIONS(412),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(412),
    [anon_sym_TIP_COLON] = ACTIONS(412),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(412),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(412),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(412),
    [anon_sym_CAUTION_COLON] = ACTIONS(412),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(412),
    [anon_sym_WARNING_COLON] = ACTIONS(412),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(412),
    [sym__unordered_list_mark] = ACTIONS(414),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(414),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(412),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(414),
    [sym__checklist_mark] = ACTIONS(414),
    [aux_sym_code_token1] = ACTIONS(412),
    [aux_sym_code_language_token1] = ACTIONS(414),
    [anon_sym_SLASH_SLASH] = ACTIONS(412),
    [aux_sym_line_breaks_token1] = ACTIONS(412),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(412),
    [anon_sym_image_COLON_COLON] = ACTIONS(412),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(412),
    [anon_sym_audio_COLON_COLON] = ACTIONS(412),
    [anon_sym_video_COLON_COLON] = ACTIONS(412),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(412),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(412),
    [aux_sym_autolinks_token1] = ACTIONS(412),
    [anon_sym_link_COLON] = ACTIONS(414),
    [anon_sym_LT_LT] = ACTIONS(414),
    [anon_sym_xref_COLON] = ACTIONS(414),
    [sym_emphasis] = ACTIONS(414),
    [sym_strong] = ACTIONS(414),
    [sym_monospace] = ACTIONS(412),
    [sym_highlight] = ACTIONS(412),
    [sym_superscript] = ACTIONS(412),
    [sym_subscript] = ACTIONS(412),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(412),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(412),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(412),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(412),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(418),
    [aux_sym_title0_token1] = ACTIONS(416),
    [sym_title1] = ACTIONS(416),
    [sym_title2] = ACTIONS(416),
    [sym_title3] = ACTIONS(416),
    [sym_title4] = ACTIONS(416),
    [sym_title5] = ACTIONS(416),
    [anon_sym_NOTE_COLON] = ACTIONS(416),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(416),
    [anon_sym_TIP_COLON] = ACTIONS(416),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(416),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(416),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(416),
    [anon_sym_CAUTION_COLON] = ACTIONS(416),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(416),
    [anon_sym_WARNING_COLON] = ACTIONS(416),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(416),
    [sym__unordered_list_mark] = ACTIONS(418),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(418),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(416),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(418),
    [sym__checklist_mark] = ACTIONS(418),
    [aux_sym_code_token1] = ACTIONS(416),
    [aux_sym_code_language_token1] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(416),
    [aux_sym_line_breaks_token1] = ACTIONS(416),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(416),
    [anon_sym_image_COLON_COLON] = ACTIONS(416),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(416),
    [anon_sym_audio_COLON_COLON] = ACTIONS(416),
    [anon_sym_video_COLON_COLON] = ACTIONS(416),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(416),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(416),
    [aux_sym_autolinks_token1] = ACTIONS(416),
    [anon_sym_link_COLON] = ACTIONS(418),
    [anon_sym_LT_LT] = ACTIONS(418),
    [anon_sym_xref_COLON] = ACTIONS(418),
    [sym_emphasis] = ACTIONS(418),
    [sym_strong] = ACTIONS(418),
    [sym_monospace] = ACTIONS(416),
    [sym_highlight] = ACTIONS(416),
    [sym_superscript] = ACTIONS(416),
    [sym_subscript] = ACTIONS(416),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(416),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(416),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(416),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(416),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(59), 1,
      anon_sym_link_COLON,
    ACTIONS(61), 1,
      anon_sym_LT_LT,
    ACTIONS(63), 1,
      anon_sym_xref_COLON,
    ACTIONS(422), 1,
      anon_sym_LF_LF,
    ACTIONS(424), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(426), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(428), 1,
      aux_sym_autolinks_token1,
    ACTIONS(430), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(432), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(63), 1,
      sym_autolinks,
    STATE(72), 1,
      sym__xref,
    STATE(74), 1,
      sym__inline_xref,
    STATE(66), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    STATE(75), 2,
      sym_url_macro,
      sym_link_macro,
    ACTIONS(420), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(61), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_links,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(434), 30,
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
  [96] = 17,
    ACTIONS(439), 1,
      anon_sym_LF_LF,
    ACTIONS(441), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(444), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(447), 1,
      aux_sym_autolinks_token1,
    ACTIONS(450), 1,
      anon_sym_link_COLON,
    ACTIONS(453), 1,
      anon_sym_LT_LT,
    ACTIONS(456), 1,
      anon_sym_xref_COLON,
    ACTIONS(459), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(462), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(63), 1,
      sym_autolinks,
    STATE(72), 1,
      sym__xref,
    STATE(74), 1,
      sym__inline_xref,
    STATE(66), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    STATE(75), 2,
      sym_url_macro,
      sym_link_macro,
    ACTIONS(436), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(61), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_links,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(465), 30,
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
  [192] = 28,
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
    ACTIONS(468), 1,
      aux_sym_code_language_token1,
    STATE(88), 1,
      sym_table_start,
    STATE(155), 1,
      sym_list_item_mark,
    STATE(192), 1,
      sym__ordered_list_mark,
    ACTIONS(31), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(35), 2,
      sym__note_line,
      sym__note_block,
    STATE(36), 2,
      sym__tip,
      sym__tip_block,
    STATE(37), 2,
      sym__important,
      sym__important_block,
    STATE(38), 2,
      sym__caution,
      sym__caution_block,
    STATE(39), 2,
      sym__warning,
      sym__warning_block,
    STATE(83), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(33), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
    STATE(42), 13,
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
  [298] = 3,
    ACTIONS(472), 1,
      anon_sym_LBRACK,
    ACTIONS(474), 1,
      anon_sym_LF_LF,
    ACTIONS(470), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [352] = 2,
    ACTIONS(478), 1,
      anon_sym_LF_LF,
    ACTIONS(476), 46,
      aux_sym_code_language_token1,
      anon_sym_LBRACK,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [404] = 3,
    ACTIONS(482), 1,
      anon_sym_COLON_COLON,
    ACTIONS(484), 1,
      anon_sym_LF_LF,
    ACTIONS(480), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [458] = 2,
    ACTIONS(488), 1,
      anon_sym_LF_LF,
    ACTIONS(486), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [509] = 2,
    ACTIONS(492), 1,
      anon_sym_LF_LF,
    ACTIONS(490), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [560] = 2,
    ACTIONS(496), 1,
      anon_sym_LF_LF,
    ACTIONS(494), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [611] = 2,
    ACTIONS(500), 1,
      anon_sym_LF_LF,
    ACTIONS(498), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [662] = 2,
    ACTIONS(504), 1,
      anon_sym_LF_LF,
    ACTIONS(502), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [713] = 2,
    ACTIONS(508), 1,
      anon_sym_LF_LF,
    ACTIONS(506), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [764] = 2,
    ACTIONS(512), 1,
      anon_sym_LF_LF,
    ACTIONS(510), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [815] = 2,
    ACTIONS(516), 1,
      anon_sym_LF_LF,
    ACTIONS(514), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [866] = 2,
    ACTIONS(512), 1,
      anon_sym_LF_LF,
    ACTIONS(510), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [917] = 2,
    ACTIONS(520), 1,
      anon_sym_LF_LF,
    ACTIONS(518), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [968] = 2,
    ACTIONS(524), 1,
      anon_sym_LF_LF,
    ACTIONS(522), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [1019] = 2,
    ACTIONS(528), 1,
      anon_sym_LF_LF,
    ACTIONS(526), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [1070] = 2,
    ACTIONS(532), 1,
      anon_sym_LF_LF,
    ACTIONS(530), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [1121] = 2,
    ACTIONS(536), 1,
      anon_sym_LF_LF,
    ACTIONS(534), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [1172] = 2,
    ACTIONS(540), 1,
      anon_sym_LF_LF,
    ACTIONS(538), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [1223] = 2,
    ACTIONS(544), 1,
      anon_sym_LF_LF,
    ACTIONS(542), 45,
      aux_sym_code_language_token1,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
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
  [1274] = 2,
    ACTIONS(548), 3,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
      aux_sym_code_language_token1,
    ACTIONS(546), 18,
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
  [1300] = 5,
    ACTIONS(550), 1,
      anon_sym_LF,
    STATE(155), 1,
      sym_list_item_mark,
    STATE(192), 1,
      sym__ordered_list_mark,
    STATE(84), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(31), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1321] = 5,
    ACTIONS(552), 1,
      anon_sym_LF,
    STATE(155), 1,
      sym_list_item_mark,
    STATE(192), 1,
      sym__ordered_list_mark,
    STATE(84), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(554), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1342] = 2,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(559), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1353] = 2,
    ACTIONS(561), 1,
      anon_sym_LF,
    ACTIONS(563), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1364] = 5,
    ACTIONS(565), 1,
      anon_sym_doctype,
    ACTIONS(567), 1,
      anon_sym_description,
    ACTIONS(569), 1,
      anon_sym_url_DASHrepo,
    ACTIONS(571), 1,
      anon_sym_hide_DASHuri_DASHscheme,
    ACTIONS(573), 1,
      anon_sym_sectanchors,
  [1380] = 5,
    ACTIONS(575), 1,
      aux_sym_block_title_token1,
    ACTIONS(577), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(27), 1,
      sym_table_end,
    STATE(98), 1,
      aux_sym_table_content_repeat1,
    STATE(130), 1,
      sym_table_content,
  [1396] = 4,
    ACTIONS(579), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(581), 1,
      aux_sym__note_block_token1,
    STATE(100), 1,
      aux_sym__note_block_repeat1,
    STATE(182), 1,
      sym_code_content,
  [1409] = 1,
    ACTIONS(583), 4,
      anon_sym_article,
      anon_sym_book,
      anon_sym_manpage,
      anon_sym_inline,
  [1416] = 3,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    ACTIONS(587), 1,
      aux_sym_audio_url_token1,
    STATE(154), 1,
      sym_audio_url,
  [1426] = 3,
    ACTIONS(589), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(591), 1,
      aux_sym__note_block_token1,
    STATE(110), 1,
      aux_sym__note_block_repeat1,
  [1436] = 3,
    ACTIONS(591), 1,
      aux_sym__note_block_token1,
    ACTIONS(593), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(110), 1,
      aux_sym__note_block_repeat1,
  [1446] = 3,
    ACTIONS(595), 1,
      aux_sym_block_title_token1,
    ACTIONS(598), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(94), 1,
      aux_sym_table_content_repeat1,
  [1456] = 3,
    ACTIONS(587), 1,
      aux_sym_audio_url_token1,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    STATE(153), 1,
      sym_audio_url,
  [1466] = 3,
    ACTIONS(602), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(604), 1,
      aux_sym__note_block_token1,
    STATE(114), 1,
      aux_sym__note_block_repeat1,
  [1476] = 3,
    ACTIONS(606), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(608), 1,
      aux_sym__note_block_token1,
    STATE(111), 1,
      aux_sym__note_block_repeat1,
  [1486] = 3,
    ACTIONS(610), 1,
      aux_sym_block_title_token1,
    ACTIONS(612), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(94), 1,
      aux_sym_table_content_repeat1,
  [1496] = 3,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
    ACTIONS(616), 1,
      aux_sym_audio_url_token1,
    STATE(147), 1,
      sym_audio_title,
  [1506] = 3,
    ACTIONS(591), 1,
      aux_sym__note_block_token1,
    ACTIONS(618), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(110), 1,
      aux_sym__note_block_repeat1,
  [1516] = 3,
    ACTIONS(620), 1,
      anon_sym_LT,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(624), 1,
      sym_name,
  [1526] = 3,
    ACTIONS(626), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(628), 1,
      aux_sym__note_block_token1,
    STATE(109), 1,
      aux_sym__note_block_repeat1,
  [1536] = 3,
    ACTIONS(616), 1,
      aux_sym_audio_url_token1,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      sym_audio_title,
  [1546] = 3,
    ACTIONS(632), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(634), 1,
      aux_sym__note_block_token1,
    STATE(93), 1,
      aux_sym__note_block_repeat1,
  [1556] = 3,
    ACTIONS(616), 1,
      aux_sym_audio_url_token1,
    ACTIONS(636), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_audio_title,
  [1566] = 3,
    ACTIONS(638), 1,
      aux_sym_autolinks_token1,
    STATE(177), 1,
      sym_urlrepo_value,
    STATE(178), 1,
      sym_autolinks,
  [1576] = 3,
    ACTIONS(640), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(642), 1,
      aux_sym__note_block_token1,
    STATE(92), 1,
      aux_sym__note_block_repeat1,
  [1586] = 1,
    ACTIONS(644), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1592] = 3,
    ACTIONS(591), 1,
      aux_sym__note_block_token1,
    ACTIONS(646), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(110), 1,
      aux_sym__note_block_repeat1,
  [1602] = 3,
    ACTIONS(648), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(650), 1,
      aux_sym__note_block_token1,
    STATE(110), 1,
      aux_sym__note_block_repeat1,
  [1612] = 3,
    ACTIONS(591), 1,
      aux_sym__note_block_token1,
    ACTIONS(653), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(110), 1,
      aux_sym__note_block_repeat1,
  [1622] = 3,
    ACTIONS(655), 1,
      anon_sym_LT,
    ACTIONS(657), 1,
      anon_sym_LF,
    ACTIONS(659), 1,
      sym_name,
  [1632] = 3,
    ACTIONS(616), 1,
      aux_sym_audio_url_token1,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym_audio_title,
  [1642] = 3,
    ACTIONS(591), 1,
      aux_sym__note_block_token1,
    ACTIONS(663), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(110), 1,
      aux_sym__note_block_repeat1,
  [1652] = 2,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
    ACTIONS(667), 1,
      sym_kbd_content,
  [1659] = 2,
    ACTIONS(587), 1,
      aux_sym_audio_url_token1,
    STATE(170), 1,
      sym_audio_url,
  [1666] = 1,
    ACTIONS(669), 2,
      aux_sym_block_title_token1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1671] = 1,
    ACTIONS(671), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [1676] = 2,
    ACTIONS(673), 1,
      aux_sym_code_language_token1,
    STATE(138), 1,
      sym_code_language,
  [1683] = 2,
    ACTIONS(675), 1,
      aux_sym_audio_url_token1,
    STATE(158), 1,
      sym_audio_title,
  [1690] = 2,
    ACTIONS(677), 1,
      aux_sym_code_language_token1,
    STATE(188), 1,
      sym_passthrough_content,
  [1697] = 1,
    ACTIONS(679), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1702] = 2,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_GT_GT,
  [1709] = 2,
    ACTIONS(677), 1,
      aux_sym_code_language_token1,
    STATE(191), 1,
      sym_passthrough_content,
  [1716] = 2,
    ACTIONS(685), 1,
      anon_sym_LT,
    ACTIONS(687), 1,
      anon_sym_LF,
  [1723] = 2,
    ACTIONS(689), 1,
      aux_sym_code_language_token1,
    STATE(143), 1,
      sym_xref_url,
  [1730] = 2,
    ACTIONS(689), 1,
      aux_sym_code_language_token1,
    STATE(123), 1,
      sym_xref_url,
  [1737] = 2,
    ACTIONS(691), 1,
      anon_sym_RBRACK,
    ACTIONS(693), 1,
      sym_footnote_content,
  [1744] = 2,
    ACTIONS(616), 1,
      aux_sym_audio_url_token1,
    STATE(169), 1,
      sym_audio_title,
  [1751] = 2,
    ACTIONS(695), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(59), 1,
      sym_table_end,
  [1758] = 2,
    ACTIONS(616), 1,
      aux_sym_audio_url_token1,
    STATE(168), 1,
      sym_audio_title,
  [1765] = 2,
    ACTIONS(697), 1,
      aux_sym_block_title_token1,
    STATE(85), 1,
      sym_list_item_content,
  [1772] = 1,
    ACTIONS(699), 1,
      anon_sym_LF,
  [1776] = 1,
    ACTIONS(701), 1,
      sym_attr_mark,
  [1780] = 1,
    ACTIONS(703), 1,
      aux_sym_code_language_token1,
  [1784] = 1,
    ACTIONS(705), 1,
      anon_sym_LBRACK,
  [1788] = 1,
    ACTIONS(707), 1,
      aux_sym__doc_description_token1,
  [1792] = 1,
    ACTIONS(709), 1,
      anon_sym_RBRACK_LF,
  [1796] = 1,
    ACTIONS(711), 1,
      anon_sym_RBRACK_LF,
  [1800] = 1,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
  [1804] = 1,
    ACTIONS(715), 1,
      anon_sym_GT,
  [1808] = 1,
    ACTIONS(717), 1,
      sym_email,
  [1812] = 1,
    ACTIONS(719), 1,
      anon_sym_LBRACK,
  [1816] = 1,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
  [1820] = 1,
    ACTIONS(723), 1,
      anon_sym_LF,
  [1824] = 1,
    ACTIONS(725), 1,
      aux_sym__doc_description_token1,
  [1828] = 1,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
  [1832] = 1,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
  [1836] = 1,
    ACTIONS(731), 1,
      anon_sym_LF,
  [1840] = 1,
    ACTIONS(733), 1,
      anon_sym_LF,
  [1844] = 1,
    ACTIONS(735), 1,
      anon_sym_LF,
  [1848] = 1,
    ACTIONS(737), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1852] = 1,
    ACTIONS(739), 1,
      anon_sym_LBRACK,
  [1856] = 1,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
  [1860] = 1,
    ACTIONS(743), 1,
      anon_sym_,
  [1864] = 1,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
  [1868] = 1,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
  [1872] = 1,
    ACTIONS(749), 1,
      anon_sym_RBRACK_LF,
  [1876] = 1,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
  [1880] = 1,
    ACTIONS(753), 1,
      anon_sym_LF,
  [1884] = 1,
    ACTIONS(755), 1,
      anon_sym_LF,
  [1888] = 1,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
  [1892] = 1,
    ACTIONS(759), 1,
      aux_sym_block_title_token1,
  [1896] = 1,
    ACTIONS(761), 1,
      anon_sym_LF,
  [1900] = 1,
    ACTIONS(763), 1,
      anon_sym_LF,
  [1904] = 1,
    ACTIONS(765), 1,
      anon_sym_RBRACK,
  [1908] = 1,
    ACTIONS(767), 1,
      anon_sym_RBRACK,
  [1912] = 1,
    ACTIONS(769), 1,
      anon_sym_GT_GT,
  [1916] = 1,
    ACTIONS(771), 1,
      anon_sym_RBRACK,
  [1920] = 1,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
  [1924] = 1,
    ACTIONS(775), 1,
      anon_sym_LF,
  [1928] = 1,
    ACTIONS(777), 1,
      anon_sym_GT,
  [1932] = 1,
    ACTIONS(779), 1,
      sym_email,
  [1936] = 1,
    ACTIONS(781), 1,
      sym_attr_mark,
  [1940] = 1,
    ACTIONS(783), 1,
      anon_sym_LF,
  [1944] = 1,
    ACTIONS(785), 1,
      anon_sym_LF,
  [1948] = 1,
    ACTIONS(787), 1,
      anon_sym_LF,
  [1952] = 1,
    ACTIONS(789), 1,
      anon_sym_LF,
  [1956] = 1,
    ACTIONS(791), 1,
      aux_sym_code_language_token1,
  [1960] = 1,
    ACTIONS(793), 1,
      sym_attr_mark,
  [1964] = 1,
    ACTIONS(795), 1,
      sym_attr_mark,
  [1968] = 1,
    ACTIONS(797), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1972] = 1,
    ACTIONS(799), 1,
      sym_attr_mark,
  [1976] = 1,
    ACTIONS(801), 1,
      sym_email,
  [1980] = 1,
    ACTIONS(803), 1,
      aux_sym__doc_description_token1,
  [1984] = 1,
    ACTIONS(805), 1,
      anon_sym_COLON_COLON,
  [1988] = 1,
    ACTIONS(807), 1,
      anon_sym_LF,
  [1992] = 1,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
  [1996] = 1,
    ACTIONS(811), 1,
      aux_sym_comment_token1,
  [2000] = 1,
    ACTIONS(813), 1,
      anon_sym_LF,
  [2004] = 1,
    ACTIONS(815), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2008] = 1,
    ACTIONS(817), 1,
      anon_sym_,
  [2012] = 1,
    ACTIONS(819), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2016] = 1,
    ACTIONS(821), 1,
      aux_sym_block_title_token1,
  [2020] = 1,
    ACTIONS(823), 1,
      anon_sym_LF,
  [2024] = 1,
    ACTIONS(825), 1,
      anon_sym_GT,
  [2028] = 1,
    ACTIONS(827), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2032] = 1,
    ACTIONS(829), 1,
      aux_sym_block_title_token1,
  [2036] = 1,
    ACTIONS(831), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2040] = 1,
    ACTIONS(833), 1,
      aux_sym_block_title_token1,
  [2044] = 1,
    ACTIONS(835), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2048] = 1,
    ACTIONS(837), 1,
      aux_sym_block_title_token1,
  [2052] = 1,
    ACTIONS(839), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2056] = 1,
    ACTIONS(841), 1,
      anon_sym_LF,
  [2060] = 1,
    ACTIONS(843), 1,
      aux_sym_block_title_token1,
  [2064] = 1,
    ACTIONS(478), 1,
      anon_sym_LF,
  [2068] = 1,
    ACTIONS(679), 1,
      anon_sym_RBRACK_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(60)] = 0,
  [SMALL_STATE(61)] = 96,
  [SMALL_STATE(62)] = 192,
  [SMALL_STATE(63)] = 298,
  [SMALL_STATE(64)] = 352,
  [SMALL_STATE(65)] = 404,
  [SMALL_STATE(66)] = 458,
  [SMALL_STATE(67)] = 509,
  [SMALL_STATE(68)] = 560,
  [SMALL_STATE(69)] = 611,
  [SMALL_STATE(70)] = 662,
  [SMALL_STATE(71)] = 713,
  [SMALL_STATE(72)] = 764,
  [SMALL_STATE(73)] = 815,
  [SMALL_STATE(74)] = 866,
  [SMALL_STATE(75)] = 917,
  [SMALL_STATE(76)] = 968,
  [SMALL_STATE(77)] = 1019,
  [SMALL_STATE(78)] = 1070,
  [SMALL_STATE(79)] = 1121,
  [SMALL_STATE(80)] = 1172,
  [SMALL_STATE(81)] = 1223,
  [SMALL_STATE(82)] = 1274,
  [SMALL_STATE(83)] = 1300,
  [SMALL_STATE(84)] = 1321,
  [SMALL_STATE(85)] = 1342,
  [SMALL_STATE(86)] = 1353,
  [SMALL_STATE(87)] = 1364,
  [SMALL_STATE(88)] = 1380,
  [SMALL_STATE(89)] = 1396,
  [SMALL_STATE(90)] = 1409,
  [SMALL_STATE(91)] = 1416,
  [SMALL_STATE(92)] = 1426,
  [SMALL_STATE(93)] = 1436,
  [SMALL_STATE(94)] = 1446,
  [SMALL_STATE(95)] = 1456,
  [SMALL_STATE(96)] = 1466,
  [SMALL_STATE(97)] = 1476,
  [SMALL_STATE(98)] = 1486,
  [SMALL_STATE(99)] = 1496,
  [SMALL_STATE(100)] = 1506,
  [SMALL_STATE(101)] = 1516,
  [SMALL_STATE(102)] = 1526,
  [SMALL_STATE(103)] = 1536,
  [SMALL_STATE(104)] = 1546,
  [SMALL_STATE(105)] = 1556,
  [SMALL_STATE(106)] = 1566,
  [SMALL_STATE(107)] = 1576,
  [SMALL_STATE(108)] = 1586,
  [SMALL_STATE(109)] = 1592,
  [SMALL_STATE(110)] = 1602,
  [SMALL_STATE(111)] = 1612,
  [SMALL_STATE(112)] = 1622,
  [SMALL_STATE(113)] = 1632,
  [SMALL_STATE(114)] = 1642,
  [SMALL_STATE(115)] = 1652,
  [SMALL_STATE(116)] = 1659,
  [SMALL_STATE(117)] = 1666,
  [SMALL_STATE(118)] = 1671,
  [SMALL_STATE(119)] = 1676,
  [SMALL_STATE(120)] = 1683,
  [SMALL_STATE(121)] = 1690,
  [SMALL_STATE(122)] = 1697,
  [SMALL_STATE(123)] = 1702,
  [SMALL_STATE(124)] = 1709,
  [SMALL_STATE(125)] = 1716,
  [SMALL_STATE(126)] = 1723,
  [SMALL_STATE(127)] = 1730,
  [SMALL_STATE(128)] = 1737,
  [SMALL_STATE(129)] = 1744,
  [SMALL_STATE(130)] = 1751,
  [SMALL_STATE(131)] = 1758,
  [SMALL_STATE(132)] = 1765,
  [SMALL_STATE(133)] = 1772,
  [SMALL_STATE(134)] = 1776,
  [SMALL_STATE(135)] = 1780,
  [SMALL_STATE(136)] = 1784,
  [SMALL_STATE(137)] = 1788,
  [SMALL_STATE(138)] = 1792,
  [SMALL_STATE(139)] = 1796,
  [SMALL_STATE(140)] = 1800,
  [SMALL_STATE(141)] = 1804,
  [SMALL_STATE(142)] = 1808,
  [SMALL_STATE(143)] = 1812,
  [SMALL_STATE(144)] = 1816,
  [SMALL_STATE(145)] = 1820,
  [SMALL_STATE(146)] = 1824,
  [SMALL_STATE(147)] = 1828,
  [SMALL_STATE(148)] = 1832,
  [SMALL_STATE(149)] = 1836,
  [SMALL_STATE(150)] = 1840,
  [SMALL_STATE(151)] = 1844,
  [SMALL_STATE(152)] = 1848,
  [SMALL_STATE(153)] = 1852,
  [SMALL_STATE(154)] = 1856,
  [SMALL_STATE(155)] = 1860,
  [SMALL_STATE(156)] = 1864,
  [SMALL_STATE(157)] = 1868,
  [SMALL_STATE(158)] = 1872,
  [SMALL_STATE(159)] = 1876,
  [SMALL_STATE(160)] = 1880,
  [SMALL_STATE(161)] = 1884,
  [SMALL_STATE(162)] = 1888,
  [SMALL_STATE(163)] = 1892,
  [SMALL_STATE(164)] = 1896,
  [SMALL_STATE(165)] = 1900,
  [SMALL_STATE(166)] = 1904,
  [SMALL_STATE(167)] = 1908,
  [SMALL_STATE(168)] = 1912,
  [SMALL_STATE(169)] = 1916,
  [SMALL_STATE(170)] = 1920,
  [SMALL_STATE(171)] = 1924,
  [SMALL_STATE(172)] = 1928,
  [SMALL_STATE(173)] = 1932,
  [SMALL_STATE(174)] = 1936,
  [SMALL_STATE(175)] = 1940,
  [SMALL_STATE(176)] = 1944,
  [SMALL_STATE(177)] = 1948,
  [SMALL_STATE(178)] = 1952,
  [SMALL_STATE(179)] = 1956,
  [SMALL_STATE(180)] = 1960,
  [SMALL_STATE(181)] = 1964,
  [SMALL_STATE(182)] = 1968,
  [SMALL_STATE(183)] = 1972,
  [SMALL_STATE(184)] = 1976,
  [SMALL_STATE(185)] = 1980,
  [SMALL_STATE(186)] = 1984,
  [SMALL_STATE(187)] = 1988,
  [SMALL_STATE(188)] = 1992,
  [SMALL_STATE(189)] = 1996,
  [SMALL_STATE(190)] = 2000,
  [SMALL_STATE(191)] = 2004,
  [SMALL_STATE(192)] = 2008,
  [SMALL_STATE(193)] = 2012,
  [SMALL_STATE(194)] = 2016,
  [SMALL_STATE(195)] = 2020,
  [SMALL_STATE(196)] = 2024,
  [SMALL_STATE(197)] = 2028,
  [SMALL_STATE(198)] = 2032,
  [SMALL_STATE(199)] = 2036,
  [SMALL_STATE(200)] = 2040,
  [SMALL_STATE(201)] = 2044,
  [SMALL_STATE(202)] = 2048,
  [SMALL_STATE(203)] = 2052,
  [SMALL_STATE(204)] = 2056,
  [SMALL_STATE(205)] = 2060,
  [SMALL_STATE(206)] = 2064,
  [SMALL_STATE(207)] = 2068,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(163),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(205),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(203),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(202),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(201),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(200),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(199),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(198),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(197),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(194),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(193),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(192),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(192),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(189),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(128),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(112),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(87),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hide_uri_scheme, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hide_uri_scheme, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 7),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 7),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 6),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 6),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_attr, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_repo, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_repo, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doc_description, 5, .production_id = 8),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doc_description, 5, .production_id = 8),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype, 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doctype, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sectanchors, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sectanchors, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 6),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 6),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 6),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 5),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 5),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 9),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 9),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 5),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(61),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(115),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(128),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(64),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(179),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(127),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(126),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(124),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(121),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(76),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_macro, 1, .production_id = 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_macro, 1, .production_id = 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolinks, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolinks, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 5),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_links, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_links, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_macro, 4, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_macro, 4, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_macro, 5, .production_id = 7),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_macro, 5, .production_id = 7),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(192),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(94),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_content, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(110),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [747] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_urlrepo_value, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_mark, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
