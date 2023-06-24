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
#define STATE_COUNT 249
#define LARGE_STATE_COUNT 51
#define SYMBOL_COUNT 196
#define ALIAS_COUNT 2
#define TOKEN_COUNT 115
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_DOT = 1,
  aux_sym_block_title_token1 = 2,
  anon_sym_EQ = 3,
  anon_sym_ = 4,
  aux_sym_title0_token1 = 5,
  aux_sym_title0_token2 = 6,
  anon_sym_EQ_EQ = 7,
  anon_sym_EQ_EQ_EQ = 8,
  anon_sym_EQ_EQ_EQ_EQ = 9,
  anon_sym_EQ_EQ_EQ_EQ_EQ = 10,
  anon_sym_EQ_EQ_EQ_EQ_EQ_EQ = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_LF = 14,
  sym_name = 15,
  sym_email = 16,
  anon_sym_doctype = 17,
  anon_sym_article = 18,
  anon_sym_book = 19,
  anon_sym_manpage = 20,
  anon_sym_inline = 21,
  anon_sym_description = 22,
  aux_sym__doc_description_token1 = 23,
  anon_sym_url_DASHrepo = 24,
  anon_sym_link_DASHwith_DASHunderscores = 25,
  anon_sym_hide_DASHuri_DASHscheme = 26,
  anon_sym_sectanchors = 27,
  sym_attr_mark = 28,
  anon_sym_NOTE_COLON = 29,
  anon_sym_LBRACKNOTE_RBRACK_LF = 30,
  anon_sym_DASH_DASH_DASH_DASH_LF = 31,
  aux_sym__note_block_token1 = 32,
  anon_sym_TIP_COLON = 33,
  anon_sym_LBRACKTIP_RBRACK_LF = 34,
  anon_sym_IMPORTANT_COLON = 35,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 36,
  anon_sym_CAUTION_COLON = 37,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 38,
  anon_sym_WARNING_COLON = 39,
  anon_sym_LBRACKWARNING_RBRACK_LF = 40,
  sym__unordered_list_mark = 41,
  aux_sym__ordered_list_mark_token1 = 42,
  aux_sym__ordered_list_mark_token2 = 43,
  aux_sym__ordered_list_mark_token3 = 44,
  sym__checklist_mark = 45,
  aux_sym_code_token1 = 46,
  anon_sym_RBRACK_LF = 47,
  aux_sym_code_language_token1 = 48,
  anon_sym_SLASH_SLASH = 49,
  aux_sym_line_breaks_token1 = 50,
  anon_sym_LT_LT_LT_LF_LF = 51,
  anon_sym_image_COLON_COLON = 52,
  anon_sym_LBRACK = 53,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 54,
  anon_sym_COLON_COLON = 55,
  anon_sym_audio_COLON_COLON = 56,
  anon_sym_RBRACK = 57,
  aux_sym_audio_url_token1 = 58,
  anon_sym_video_COLON_COLON = 59,
  anon_sym_LF_LF = 60,
  aux_sym__inline_element_token1 = 61,
  anon_sym_kbd_COLON_LBRACK = 62,
  sym_kbd_content = 63,
  anon_sym_footnote_COLON_LBRACK = 64,
  sym_footnote_content = 65,
  aux_sym_autolinks_token1 = 66,
  aux_sym_url_macro_token1 = 67,
  anon_sym_link_COLON = 68,
  aux_sym_link_macro_token1 = 69,
  aux_sym_link_macro_token2 = 70,
  anon_sym_mailto_COLON = 71,
  aux_sym_mailto_token1 = 72,
  anon_sym_LT_LT = 73,
  anon_sym_COMMA = 74,
  anon_sym_GT_GT = 75,
  anon_sym_xref_COLON = 76,
  sym_emphasis = 77,
  sym_strong = 78,
  sym_monospace = 79,
  sym_highlight = 80,
  sym_superscript = 81,
  sym_subscript = 82,
  anon_sym_PLUS_PLUS_PLUS = 83,
  anon_sym_pass_COLON_LBRACK = 84,
  anon_sym_LBRACEblank_RBRACE = 85,
  anon_sym_LBRACEempty_RBRACE = 86,
  anon_sym_LBRACEsp_RBRACE = 87,
  anon_sym_LBRACEnbsp_RBRACE = 88,
  anon_sym_LBRACEzwsp_RBRACE = 89,
  anon_sym_LBRACEwj_RBRACE = 90,
  anon_sym_LBRACEapos_RBRACE = 91,
  anon_sym_LBRACEquot_RBRACE = 92,
  anon_sym_LBRACElsquo_RBRACE = 93,
  anon_sym_LBRACErsquo_RBRACE = 94,
  anon_sym_LBRACEldquo_RBRACE = 95,
  anon_sym_LBRACErdquo_RBRACE = 96,
  anon_sym_LBRACEdeg_RBRACE = 97,
  anon_sym_LBRACEplus_RBRACE = 98,
  anon_sym_LBRACEbrvbar_RBRACE = 99,
  anon_sym_LBRACEvbar_RBRACE = 100,
  anon_sym_LBRACEamp_RBRACE = 101,
  anon_sym_LBRACElt_RBRACE = 102,
  anon_sym_LBRACEgt_RBRACE = 103,
  anon_sym_LBRACEstartsb_RBRACE = 104,
  anon_sym_LBRACEendsb_RBRACE = 105,
  anon_sym_LBRACEcaret_RBRACE = 106,
  anon_sym_LBRACEasterisk_RBRACE = 107,
  anon_sym_LBRACEtilde_RBRACE = 108,
  anon_sym_LBRACEbackslash_RBRACE = 109,
  anon_sym_LBRACEbacktick_RBRACE = 110,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 111,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 112,
  anon_sym_LBRACEcpp_RBRACE = 113,
  anon_sym_LBRACEpp_RBRACE = 114,
  sym_document = 115,
  sym__block = 116,
  sym__titled_block = 117,
  sym_block_title = 118,
  sym_title0 = 119,
  sym_title1 = 120,
  sym_title2 = 121,
  sym_title3 = 122,
  sym_title4 = 123,
  sym_title5 = 124,
  sym_author_info = 125,
  sym__doctype = 126,
  sym__doc_description = 127,
  sym__url_repo = 128,
  sym__link_with_underscores = 129,
  sym__hide_uri_scheme = 130,
  sym__sectanchors = 131,
  sym_doc_attr = 132,
  sym__admonitions = 133,
  sym_note = 134,
  sym__note_line = 135,
  sym__note_block = 136,
  sym_tip = 137,
  sym__tip = 138,
  sym__tip_block = 139,
  sym_important = 140,
  sym__important = 141,
  sym__important_block = 142,
  sym_caution = 143,
  sym__caution = 144,
  sym__caution_block = 145,
  sym_warning = 146,
  sym__warning = 147,
  sym__warning_block = 148,
  sym_list = 149,
  sym_list_item = 150,
  sym_list_item_mark = 151,
  sym_list_item_content = 152,
  sym__ordered_list_mark = 153,
  sym_code = 154,
  sym_code_language = 155,
  sym_code_content = 156,
  sym_comment = 157,
  sym_line_breaks = 158,
  sym_page_breaks = 159,
  sym_image = 160,
  sym_table = 161,
  sym_table_start = 162,
  sym_table_content = 163,
  sym_table_end = 164,
  sym_description_list = 165,
  sym_description_list_item = 166,
  sym_audio = 167,
  sym_audio_url = 168,
  sym_audio_title = 169,
  sym_video = 170,
  sym_paragraph = 171,
  sym__inline_element = 172,
  sym_kbd = 173,
  sym_footnote = 174,
  sym_links = 175,
  sym_autolinks = 176,
  sym_url_macro = 177,
  sym_link_macro = 178,
  sym_mailto = 179,
  sym_xref = 180,
  sym__inline_xref = 181,
  sym__xref = 182,
  sym_xref_url = 183,
  sym_passthrough = 184,
  sym__passthrough_plus = 185,
  sym__passthrough_cmd = 186,
  sym_passthrough_content = 187,
  sym_replacement = 188,
  aux_sym_document_repeat1 = 189,
  aux_sym_title0_repeat1 = 190,
  aux_sym__note_block_repeat1 = 191,
  aux_sym_list_repeat1 = 192,
  aux_sym_table_content_repeat1 = 193,
  aux_sym_description_list_repeat1 = 194,
  aux_sym_paragraph_repeat1 = 195,
  alias_sym_list_item_name = 196,
  alias_sym_title_content = 197,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [aux_sym_block_title_token1] = "block_title_token1",
  [anon_sym_EQ] = "title_marker",
  [anon_sym_] = " ",
  [aux_sym_title0_token1] = "title0_token1",
  [aux_sym_title0_token2] = "title0_token2",
  [anon_sym_EQ_EQ] = "title_marker",
  [anon_sym_EQ_EQ_EQ] = "title_marker",
  [anon_sym_EQ_EQ_EQ_EQ] = "title_marker",
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = "title_marker",
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = "title_marker",
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
  [anon_sym_link_DASHwith_DASHunderscores] = "attr_name",
  [anon_sym_hide_DASHuri_DASHscheme] = "attr_name",
  [anon_sym_sectanchors] = "attr_name",
  [sym_attr_mark] = "attr_mark",
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
  [sym__unordered_list_mark] = "_unordered_list_mark",
  [aux_sym__ordered_list_mark_token1] = "_ordered_list_mark_token1",
  [aux_sym__ordered_list_mark_token2] = "_ordered_list_mark_token2",
  [aux_sym__ordered_list_mark_token3] = "_ordered_list_mark_token3",
  [sym__checklist_mark] = "_checklist_mark",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RBRACK_LF] = "]\n",
  [aux_sym_code_language_token1] = "code_language_token1",
  [anon_sym_SLASH_SLASH] = "// ",
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
  [aux_sym__inline_element_token1] = "_inline_element_token1",
  [anon_sym_kbd_COLON_LBRACK] = "kbd:[",
  [sym_kbd_content] = "kbd_content",
  [anon_sym_footnote_COLON_LBRACK] = "footnote:[",
  [sym_footnote_content] = "footnote_content",
  [aux_sym_autolinks_token1] = "url",
  [aux_sym_url_macro_token1] = "url_title",
  [anon_sym_link_COLON] = "link:",
  [aux_sym_link_macro_token1] = "url",
  [aux_sym_link_macro_token2] = "link_macro_token2",
  [anon_sym_mailto_COLON] = "mailto:",
  [aux_sym_mailto_token1] = "url",
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
  [sym_title1] = "title1",
  [sym_title2] = "title2",
  [sym_title3] = "title3",
  [sym_title4] = "title4",
  [sym_title5] = "title5",
  [sym_author_info] = "author_info",
  [sym__doctype] = "_doctype",
  [sym__doc_description] = "_doc_description",
  [sym__url_repo] = "_url_repo",
  [sym__link_with_underscores] = "_link_with_underscores",
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
  [sym_description_list_item] = "description_list_item",
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
  [sym_mailto] = "mailto",
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
  [aux_sym_description_list_repeat1] = "description_list_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [alias_sym_list_item_name] = "list_item_name",
  [alias_sym_title_content] = "title_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_block_title_token1] = aux_sym_block_title_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_] = anon_sym_,
  [aux_sym_title0_token1] = aux_sym_title0_token1,
  [aux_sym_title0_token2] = aux_sym_title0_token2,
  [anon_sym_EQ_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ,
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
  [anon_sym_link_DASHwith_DASHunderscores] = anon_sym_doctype,
  [anon_sym_hide_DASHuri_DASHscheme] = anon_sym_doctype,
  [anon_sym_sectanchors] = anon_sym_doctype,
  [sym_attr_mark] = sym_attr_mark,
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
  [sym__unordered_list_mark] = sym__unordered_list_mark,
  [aux_sym__ordered_list_mark_token1] = aux_sym__ordered_list_mark_token1,
  [aux_sym__ordered_list_mark_token2] = aux_sym__ordered_list_mark_token2,
  [aux_sym__ordered_list_mark_token3] = aux_sym__ordered_list_mark_token3,
  [sym__checklist_mark] = sym__checklist_mark,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RBRACK_LF] = anon_sym_RBRACK_LF,
  [aux_sym_code_language_token1] = aux_sym_code_language_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
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
  [aux_sym__inline_element_token1] = aux_sym__inline_element_token1,
  [anon_sym_kbd_COLON_LBRACK] = anon_sym_kbd_COLON_LBRACK,
  [sym_kbd_content] = sym_kbd_content,
  [anon_sym_footnote_COLON_LBRACK] = anon_sym_footnote_COLON_LBRACK,
  [sym_footnote_content] = sym_footnote_content,
  [aux_sym_autolinks_token1] = aux_sym_autolinks_token1,
  [aux_sym_url_macro_token1] = aux_sym_url_macro_token1,
  [anon_sym_link_COLON] = anon_sym_link_COLON,
  [aux_sym_link_macro_token1] = aux_sym_autolinks_token1,
  [aux_sym_link_macro_token2] = aux_sym_link_macro_token2,
  [anon_sym_mailto_COLON] = anon_sym_mailto_COLON,
  [aux_sym_mailto_token1] = aux_sym_autolinks_token1,
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
  [sym_title1] = sym_title1,
  [sym_title2] = sym_title2,
  [sym_title3] = sym_title3,
  [sym_title4] = sym_title4,
  [sym_title5] = sym_title5,
  [sym_author_info] = sym_author_info,
  [sym__doctype] = sym__doctype,
  [sym__doc_description] = sym__doc_description,
  [sym__url_repo] = sym__url_repo,
  [sym__link_with_underscores] = sym__link_with_underscores,
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
  [sym_description_list_item] = sym_description_list_item,
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
  [sym_mailto] = sym_mailto,
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
  [aux_sym_description_list_repeat1] = aux_sym_description_list_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [alias_sym_list_item_name] = alias_sym_list_item_name,
  [alias_sym_title_content] = alias_sym_title_content,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_title0_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title0_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = {
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
  [anon_sym_link_DASHwith_DASHunderscores] = {
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
  [aux_sym__inline_element_token1] = {
    .visible = false,
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
  [aux_sym_url_macro_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_link_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_macro_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_link_macro_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_mailto_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mailto_token1] = {
    .visible = true,
    .named = true,
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
  [sym__link_with_underscores] = {
    .visible = false,
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
  [sym_description_list_item] = {
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
  [sym_mailto] = {
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
  [aux_sym_description_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_list_item_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title_content] = {
    .visible = true,
    .named = true,
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
  [3] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 1},
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
  [2] = {
    [2] = alias_sym_title_content,
  },
  [4] = {
    [0] = alias_sym_list_item_name,
    [2] = sym_list_item_content,
  },
  [8] = {
    [3] = aux_sym_url_macro_token1,
  },
  [10] = {
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
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 128,
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
      ACCEPT_TOKEN(aux_sym_title0_token2);
      if (eof) ADVANCE(357);
      if (lookahead == '\n') ADVANCE(378);
      if (lookahead == ':') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(378);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '<') ADVANCE(376);
      if (lookahead == '>') ADVANCE(377);
      if (lookahead == '[') ADVANCE(569);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'b') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == '.') ADVANCE(419);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(566);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(567);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(570);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(400);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(396);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(404);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(406);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(402);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == ',') ADVANCE(595);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '[') ADVANCE(569);
      if (lookahead == ']') ADVANCE(573);
      if (lookahead == '^') ADVANCE(350);
      if (lookahead == '_') ADVANCE(512);
      if (lookahead == '`') ADVANCE(351);
      if (lookahead == 'f') ADVANCE(498);
      if (lookahead == 'k') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'm') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(479);
      if (lookahead == 'x') ADVANCE(504);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '~') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(397);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '-') ADVANCE(414);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '0') ADVANCE(456);
      if (lookahead == 'C') ADVANCE(446);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead == 'N') ADVANCE(450);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(447);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'v') ADVANCE(451);
      if (lookahead == '|') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(565);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(571);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(399);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(395);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(405);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(401);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(600);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(600);
      if (lookahead == ']') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(599);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '+') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(419);
      END_STATE();
    case 41:
      if (lookahead == '+') ADVANCE(605);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(429);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(92);
      if (lookahead == 'W') ADVANCE(88);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(304);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(300);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(343);
      if (lookahead == '.') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(297);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(274);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(262);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(419);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(22);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '<') ADVANCE(594);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '>') ADVANCE(596);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(202);
      if (lookahead == 'q') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(195);
      if (lookahead == 'z') ADVANCE(305);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '@') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(347);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '_') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(572);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(568);
      END_STATE();
    case 72:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(575);
      END_STATE();
    case 73:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '[') ADVANCE(580);
      END_STATE();
    case 74:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '[') ADVANCE(606);
      END_STATE();
    case 75:
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '[') ADVANCE(583);
      END_STATE();
    case 76:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '_') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(572);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(568);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(575);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(22);
      END_STATE();
    case 81:
      if (lookahead == '<') ADVANCE(593);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 84:
      if (lookahead == '>') ADVANCE(596);
      END_STATE();
    case 85:
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '@') ADVANCE(343);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 91:
      if (lookahead == 'G') ADVANCE(122);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == 'P') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'P') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(109);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(94);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(123);
      END_STATE();
    case 111:
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(585);
      END_STATE();
    case 113:
      if (lookahead == '[') ADVANCE(569);
      if (lookahead == ']') ADVANCE(573);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 114:
      if (lookahead == '[') ADVANCE(340);
      END_STATE();
    case 115:
      if (lookahead == ']') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 116:
      if (lookahead == ']') ADVANCE(573);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 117:
      if (lookahead == ']') ADVANCE(573);
      if (lookahead != 0) ADVANCE(590);
      END_STATE();
    case 118:
      if (lookahead == ']') ADVANCE(426);
      END_STATE();
    case 119:
      if (lookahead == ']') ADVANCE(7);
      END_STATE();
    case 120:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 121:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 122:
      if (lookahead == ']') ADVANCE(10);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 124:
      if (lookahead == '^') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == '`') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(202);
      if (lookahead == 'q') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(195);
      if (lookahead == 'z') ADVANCE(305);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(326);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(333);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(133);
      END_STATE();
    case 142:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 179:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 180:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 181:
      if (lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(336);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'w') ADVANCE(224);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 195:
      if (lookahead == 'j') ADVANCE(313);
      END_STATE();
    case 196:
      if (lookahead == 'k') ADVANCE(271);
      END_STATE();
    case 197:
      if (lookahead == 'k') ADVANCE(385);
      END_STATE();
    case 198:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 199:
      if (lookahead == 'k') ADVANCE(323);
      END_STATE();
    case 200:
      if (lookahead == 'k') ADVANCE(334);
      END_STATE();
    case 201:
      if (lookahead == 'k') ADVANCE(335);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(290);
      END_STATE();
    case 251:
      if (lookahead == 'q') ADVANCE(296);
      END_STATE();
    case 252:
      if (lookahead == 'q') ADVANCE(299);
      END_STATE();
    case 253:
      if (lookahead == 'q') ADVANCE(301);
      END_STATE();
    case 254:
      if (lookahead == 'q') ADVANCE(302);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 303:
      if (lookahead == 'v') ADVANCE(142);
      END_STATE();
    case 304:
      if (lookahead == 'w') ADVANCE(189);
      END_STATE();
    case 305:
      if (lookahead == 'w') ADVANCE(283);
      END_STATE();
    case 306:
      if (lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 307:
      if (lookahead == 'y') ADVANCE(325);
      END_STATE();
    case 308:
      if (lookahead == '|') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 309:
      if (lookahead == '}') ADVANCE(625);
      END_STATE();
    case 310:
      if (lookahead == '}') ADVANCE(624);
      END_STATE();
    case 311:
      if (lookahead == '}') ADVANCE(636);
      END_STATE();
    case 312:
      if (lookahead == '}') ADVANCE(609);
      END_STATE();
    case 313:
      if (lookahead == '}') ADVANCE(612);
      END_STATE();
    case 314:
      if (lookahead == '}') ADVANCE(623);
      END_STATE();
    case 315:
      if (lookahead == '}') ADVANCE(635);
      END_STATE();
    case 316:
      if (lookahead == '}') ADVANCE(619);
      END_STATE();
    case 317:
      if (lookahead == '}') ADVANCE(613);
      END_STATE();
    case 318:
      if (lookahead == '}') ADVANCE(610);
      END_STATE();
    case 319:
      if (lookahead == '}') ADVANCE(620);
      END_STATE();
    case 320:
      if (lookahead == '}') ADVANCE(614);
      END_STATE();
    case 321:
      if (lookahead == '}') ADVANCE(622);
      END_STATE();
    case 322:
      if (lookahead == '}') ADVANCE(611);
      END_STATE();
    case 323:
      if (lookahead == '}') ADVANCE(607);
      END_STATE();
    case 324:
      if (lookahead == '}') ADVANCE(628);
      END_STATE();
    case 325:
      if (lookahead == '}') ADVANCE(608);
      END_STATE();
    case 326:
      if (lookahead == '}') ADVANCE(627);
      END_STATE();
    case 327:
      if (lookahead == '}') ADVANCE(617);
      END_STATE();
    case 328:
      if (lookahead == '}') ADVANCE(615);
      END_STATE();
    case 329:
      if (lookahead == '}') ADVANCE(618);
      END_STATE();
    case 330:
      if (lookahead == '}') ADVANCE(616);
      END_STATE();
    case 331:
      if (lookahead == '}') ADVANCE(630);
      END_STATE();
    case 332:
      if (lookahead == '}') ADVANCE(621);
      END_STATE();
    case 333:
      if (lookahead == '}') ADVANCE(626);
      END_STATE();
    case 334:
      if (lookahead == '}') ADVANCE(629);
      END_STATE();
    case 335:
      if (lookahead == '}') ADVANCE(632);
      END_STATE();
    case 336:
      if (lookahead == '}') ADVANCE(631);
      END_STATE();
    case 337:
      if (lookahead == '}') ADVANCE(633);
      END_STATE();
    case 338:
      if (lookahead == '}') ADVANCE(634);
      END_STATE();
    case 339:
      if (lookahead == '~') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 340:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 341:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(582);
      END_STATE();
    case 342:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 343:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 344:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 345:
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 346:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 347:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[') ADVANCE(586);
      END_STATE();
    case 348:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 349:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 350:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 351:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 352:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 353:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(364);
      END_STATE();
    case 354:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
      END_STATE();
    case 355:
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(589);
      END_STATE();
    case 356:
      if (eof) ADVANCE(357);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(413);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '0') ADVANCE(455);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(365);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(431);
      if (lookahead == 'I') ADVANCE(434);
      if (lookahead == 'N') ADVANCE(435);
      if (lookahead == 'T') ADVANCE(433);
      if (lookahead == 'W') ADVANCE(432);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(3);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == '_') ADVANCE(457);
      if (lookahead == '`') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'k') ADVANCE(438);
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead == 'm') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 'v') ADVANCE(440);
      if (lookahead == 'x') ADVANCE(443);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(579);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(417);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(570);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(359);
      if (lookahead == '=') ADVANCE(362);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(359);
      if (lookahead == '=') ADVANCE(360);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(359);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(359);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '=') ADVANCE(371);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      if (lookahead == '\n') ADVANCE(367);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_title0_token2);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_title0_token2);
      if (lookahead == '\n') ADVANCE(369);
      if (lookahead == ':') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ_EQ);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '.') ADVANCE(419);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_article);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_book);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_manpage);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_link_DASHwith_DASHunderscores);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_attr_mark);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '-') ADVANCE(412);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(416);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(416);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '-') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '-') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(416);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(408);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(428);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'A') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'A') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'I') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'M') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'A') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'A') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'I') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'M') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'O') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'm') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead == 'u') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(423);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'A') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'G') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'I') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'I') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'N') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'R') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'U') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'g') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'k') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 's') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 's') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '_') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'g') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__inline_element_token1);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__inline_element_token1);
      if (lookahead == '\n') ADVANCE(576);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__inline_element_token1);
      if (lookahead == '.') ADVANCE(419);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead == '[') ADVANCE(125);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[') ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_url_macro_token1);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_link_macro_token1);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_link_macro_token2);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_mailto_COLON);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_mailto_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(20);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(600);
      if (lookahead == ']') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 356},
  [2] = {.lex_state = 356},
  [3] = {.lex_state = 356},
  [4] = {.lex_state = 356},
  [5] = {.lex_state = 356},
  [6] = {.lex_state = 356},
  [7] = {.lex_state = 356},
  [8] = {.lex_state = 356},
  [9] = {.lex_state = 356},
  [10] = {.lex_state = 356},
  [11] = {.lex_state = 356},
  [12] = {.lex_state = 356},
  [13] = {.lex_state = 356},
  [14] = {.lex_state = 356},
  [15] = {.lex_state = 356},
  [16] = {.lex_state = 356},
  [17] = {.lex_state = 356},
  [18] = {.lex_state = 356},
  [19] = {.lex_state = 356},
  [20] = {.lex_state = 356},
  [21] = {.lex_state = 356},
  [22] = {.lex_state = 356},
  [23] = {.lex_state = 356},
  [24] = {.lex_state = 356},
  [25] = {.lex_state = 356},
  [26] = {.lex_state = 356},
  [27] = {.lex_state = 356},
  [28] = {.lex_state = 356},
  [29] = {.lex_state = 356},
  [30] = {.lex_state = 356},
  [31] = {.lex_state = 356},
  [32] = {.lex_state = 356},
  [33] = {.lex_state = 356},
  [34] = {.lex_state = 356},
  [35] = {.lex_state = 356},
  [36] = {.lex_state = 356},
  [37] = {.lex_state = 356},
  [38] = {.lex_state = 356},
  [39] = {.lex_state = 356},
  [40] = {.lex_state = 356},
  [41] = {.lex_state = 356},
  [42] = {.lex_state = 356},
  [43] = {.lex_state = 356},
  [44] = {.lex_state = 356},
  [45] = {.lex_state = 356},
  [46] = {.lex_state = 356},
  [47] = {.lex_state = 356},
  [48] = {.lex_state = 356},
  [49] = {.lex_state = 356},
  [50] = {.lex_state = 356},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 370},
  [75] = {.lex_state = 370},
  [76] = {.lex_state = 370},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 308},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 44},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 44},
  [88] = {.lex_state = 44},
  [89] = {.lex_state = 113},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 113},
  [92] = {.lex_state = 44},
  [93] = {.lex_state = 370},
  [94] = {.lex_state = 113},
  [95] = {.lex_state = 370},
  [96] = {.lex_state = 370},
  [97] = {.lex_state = 308},
  [98] = {.lex_state = 44},
  [99] = {.lex_state = 44},
  [100] = {.lex_state = 44},
  [101] = {.lex_state = 308},
  [102] = {.lex_state = 113},
  [103] = {.lex_state = 370},
  [104] = {.lex_state = 44},
  [105] = {.lex_state = 113},
  [106] = {.lex_state = 370},
  [107] = {.lex_state = 370},
  [108] = {.lex_state = 370},
  [109] = {.lex_state = 370},
  [110] = {.lex_state = 370},
  [111] = {.lex_state = 370},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 370},
  [114] = {.lex_state = 44},
  [115] = {.lex_state = 44},
  [116] = {.lex_state = 370},
  [117] = {.lex_state = 44},
  [118] = {.lex_state = 370},
  [119] = {.lex_state = 44},
  [120] = {.lex_state = 113},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 66},
  [124] = {.lex_state = 113},
  [125] = {.lex_state = 33},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 113},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 66},
  [132] = {.lex_state = 356},
  [133] = {.lex_state = 117},
  [134] = {.lex_state = 113},
  [135] = {.lex_state = 308},
  [136] = {.lex_state = 113},
  [137] = {.lex_state = 353},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 115},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 116},
  [143] = {.lex_state = 33},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 33},
  [149] = {.lex_state = 368},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 117},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 353},
  [161] = {.lex_state = 345},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 356},
  [165] = {.lex_state = 356},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 356},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 356},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 354},
  [195] = {.lex_state = 356},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 356},
  [198] = {.lex_state = 368},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 368},
  [201] = {.lex_state = 368},
  [202] = {.lex_state = 368},
  [203] = {.lex_state = 368},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 354},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 66},
  [214] = {.lex_state = 355},
  [215] = {.lex_state = 368},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 353},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 353},
  [224] = {.lex_state = 342},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 353},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 353},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 342},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 353},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 342},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 356},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_title0_token2] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_attr_mark] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(212),
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(53),
    [sym_title0] = STATE(3),
    [sym_title1] = STATE(3),
    [sym_title2] = STATE(3),
    [sym_title3] = STATE(3),
    [sym_title4] = STATE(3),
    [sym_title5] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(41),
    [sym__note_block] = STATE(41),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(42),
    [sym__tip_block] = STATE(42),
    [sym_important] = STATE(3),
    [sym__important] = STATE(43),
    [sym__important_block] = STATE(43),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(44),
    [sym__caution_block] = STATE(44),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(45),
    [sym__warning_block] = STATE(45),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(78),
    [sym_list_item_mark] = STATE(209),
    [sym__ordered_list_mark] = STATE(217),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(82),
    [sym_description_list] = STATE(3),
    [sym_description_list_item] = STATE(85),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(52),
    [sym_kbd] = STATE(52),
    [sym_footnote] = STATE(52),
    [sym_links] = STATE(52),
    [sym_autolinks] = STATE(204),
    [sym_url_macro] = STATE(60),
    [sym_link_macro] = STATE(60),
    [sym_mailto] = STATE(60),
    [sym_xref] = STATE(52),
    [sym__inline_xref] = STATE(61),
    [sym__xref] = STATE(62),
    [sym_passthrough] = STATE(52),
    [sym__passthrough_plus] = STATE(63),
    [sym__passthrough_cmd] = STATE(63),
    [sym_replacement] = STATE(52),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(78),
    [aux_sym_description_list_repeat1] = STATE(85),
    [aux_sym_paragraph_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(15),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(17),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(21),
    [anon_sym_TIP_COLON] = ACTIONS(23),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(25),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(27),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(29),
    [anon_sym_CAUTION_COLON] = ACTIONS(31),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(33),
    [anon_sym_WARNING_COLON] = ACTIONS(35),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(37),
    [sym__unordered_list_mark] = ACTIONS(39),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(39),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(41),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(39),
    [sym__checklist_mark] = ACTIONS(39),
    [aux_sym_code_token1] = ACTIONS(43),
    [aux_sym_code_language_token1] = ACTIONS(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(47),
    [aux_sym_line_breaks_token1] = ACTIONS(49),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(51),
    [anon_sym_image_COLON_COLON] = ACTIONS(53),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(55),
    [anon_sym_audio_COLON_COLON] = ACTIONS(57),
    [anon_sym_video_COLON_COLON] = ACTIONS(59),
    [aux_sym__inline_element_token1] = ACTIONS(61),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(63),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(65),
    [aux_sym_autolinks_token1] = ACTIONS(67),
    [anon_sym_link_COLON] = ACTIONS(69),
    [anon_sym_mailto_COLON] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_xref_COLON] = ACTIONS(75),
    [sym_emphasis] = ACTIONS(61),
    [sym_strong] = ACTIONS(61),
    [sym_monospace] = ACTIONS(77),
    [sym_highlight] = ACTIONS(77),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(79),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(83),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(53),
    [sym_title0] = STATE(2),
    [sym_title1] = STATE(2),
    [sym_title2] = STATE(2),
    [sym_title3] = STATE(2),
    [sym_title4] = STATE(2),
    [sym_title5] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(41),
    [sym__note_block] = STATE(41),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(42),
    [sym__tip_block] = STATE(42),
    [sym_important] = STATE(2),
    [sym__important] = STATE(43),
    [sym__important_block] = STATE(43),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(44),
    [sym__caution_block] = STATE(44),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(45),
    [sym__warning_block] = STATE(45),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(78),
    [sym_list_item_mark] = STATE(209),
    [sym__ordered_list_mark] = STATE(217),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(82),
    [sym_description_list] = STATE(2),
    [sym_description_list_item] = STATE(85),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(52),
    [sym_kbd] = STATE(52),
    [sym_footnote] = STATE(52),
    [sym_links] = STATE(52),
    [sym_autolinks] = STATE(204),
    [sym_url_macro] = STATE(60),
    [sym_link_macro] = STATE(60),
    [sym_mailto] = STATE(60),
    [sym_xref] = STATE(52),
    [sym__inline_xref] = STATE(61),
    [sym__xref] = STATE(62),
    [sym_passthrough] = STATE(52),
    [sym__passthrough_plus] = STATE(63),
    [sym__passthrough_cmd] = STATE(63),
    [sym_replacement] = STATE(52),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(78),
    [aux_sym_description_list_repeat1] = STATE(85),
    [aux_sym_paragraph_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(93),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(96),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(99),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(102),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(105),
    [anon_sym_NOTE_COLON] = ACTIONS(108),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(111),
    [anon_sym_TIP_COLON] = ACTIONS(114),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(117),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(120),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(123),
    [anon_sym_CAUTION_COLON] = ACTIONS(126),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(129),
    [anon_sym_WARNING_COLON] = ACTIONS(132),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(135),
    [sym__unordered_list_mark] = ACTIONS(138),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(138),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(141),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(138),
    [sym__checklist_mark] = ACTIONS(138),
    [aux_sym_code_token1] = ACTIONS(144),
    [aux_sym_code_language_token1] = ACTIONS(147),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [aux_sym_line_breaks_token1] = ACTIONS(153),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(156),
    [anon_sym_image_COLON_COLON] = ACTIONS(159),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(162),
    [anon_sym_audio_COLON_COLON] = ACTIONS(165),
    [anon_sym_video_COLON_COLON] = ACTIONS(168),
    [aux_sym__inline_element_token1] = ACTIONS(171),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(174),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(177),
    [aux_sym_autolinks_token1] = ACTIONS(180),
    [anon_sym_link_COLON] = ACTIONS(183),
    [anon_sym_mailto_COLON] = ACTIONS(186),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_xref_COLON] = ACTIONS(192),
    [sym_emphasis] = ACTIONS(171),
    [sym_strong] = ACTIONS(171),
    [sym_monospace] = ACTIONS(195),
    [sym_highlight] = ACTIONS(195),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(195),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(198),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(201),
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
  [3] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(53),
    [sym_title0] = STATE(2),
    [sym_title1] = STATE(2),
    [sym_title2] = STATE(2),
    [sym_title3] = STATE(2),
    [sym_title4] = STATE(2),
    [sym_title5] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(41),
    [sym__note_block] = STATE(41),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(42),
    [sym__tip_block] = STATE(42),
    [sym_important] = STATE(2),
    [sym__important] = STATE(43),
    [sym__important_block] = STATE(43),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(44),
    [sym__caution_block] = STATE(44),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(45),
    [sym__warning_block] = STATE(45),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(78),
    [sym_list_item_mark] = STATE(209),
    [sym__ordered_list_mark] = STATE(217),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(82),
    [sym_description_list] = STATE(2),
    [sym_description_list_item] = STATE(85),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(52),
    [sym_kbd] = STATE(52),
    [sym_footnote] = STATE(52),
    [sym_links] = STATE(52),
    [sym_autolinks] = STATE(204),
    [sym_url_macro] = STATE(60),
    [sym_link_macro] = STATE(60),
    [sym_mailto] = STATE(60),
    [sym_xref] = STATE(52),
    [sym__inline_xref] = STATE(61),
    [sym__xref] = STATE(62),
    [sym_passthrough] = STATE(52),
    [sym__passthrough_plus] = STATE(63),
    [sym__passthrough_cmd] = STATE(63),
    [sym_replacement] = STATE(52),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(78),
    [aux_sym_description_list_repeat1] = STATE(85),
    [aux_sym_paragraph_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(15),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(17),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(21),
    [anon_sym_TIP_COLON] = ACTIONS(23),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(25),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(27),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(29),
    [anon_sym_CAUTION_COLON] = ACTIONS(31),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(33),
    [anon_sym_WARNING_COLON] = ACTIONS(35),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(37),
    [sym__unordered_list_mark] = ACTIONS(39),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(39),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(41),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(39),
    [sym__checklist_mark] = ACTIONS(39),
    [aux_sym_code_token1] = ACTIONS(43),
    [aux_sym_code_language_token1] = ACTIONS(45),
    [anon_sym_SLASH_SLASH] = ACTIONS(47),
    [aux_sym_line_breaks_token1] = ACTIONS(49),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(51),
    [anon_sym_image_COLON_COLON] = ACTIONS(53),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(55),
    [anon_sym_audio_COLON_COLON] = ACTIONS(57),
    [anon_sym_video_COLON_COLON] = ACTIONS(59),
    [aux_sym__inline_element_token1] = ACTIONS(61),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(63),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(65),
    [aux_sym_autolinks_token1] = ACTIONS(67),
    [anon_sym_link_COLON] = ACTIONS(69),
    [anon_sym_mailto_COLON] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_xref_COLON] = ACTIONS(75),
    [sym_emphasis] = ACTIONS(61),
    [sym_strong] = ACTIONS(61),
    [sym_monospace] = ACTIONS(77),
    [sym_highlight] = ACTIONS(77),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(79),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(83),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(211),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(209),
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
    [sym__unordered_list_mark] = ACTIONS(211),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(211),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(209),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(211),
    [sym__checklist_mark] = ACTIONS(211),
    [aux_sym_code_token1] = ACTIONS(209),
    [aux_sym_code_language_token1] = ACTIONS(211),
    [anon_sym_SLASH_SLASH] = ACTIONS(209),
    [aux_sym_line_breaks_token1] = ACTIONS(209),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(209),
    [anon_sym_image_COLON_COLON] = ACTIONS(209),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(209),
    [anon_sym_audio_COLON_COLON] = ACTIONS(209),
    [anon_sym_video_COLON_COLON] = ACTIONS(209),
    [aux_sym__inline_element_token1] = ACTIONS(211),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(209),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(209),
    [aux_sym_autolinks_token1] = ACTIONS(211),
    [anon_sym_link_COLON] = ACTIONS(211),
    [anon_sym_mailto_COLON] = ACTIONS(211),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_xref_COLON] = ACTIONS(211),
    [sym_emphasis] = ACTIONS(211),
    [sym_strong] = ACTIONS(211),
    [sym_monospace] = ACTIONS(209),
    [sym_highlight] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(209),
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
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(215),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(213),
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
    [sym__unordered_list_mark] = ACTIONS(215),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(215),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(213),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(215),
    [sym__checklist_mark] = ACTIONS(215),
    [aux_sym_code_token1] = ACTIONS(213),
    [aux_sym_code_language_token1] = ACTIONS(215),
    [anon_sym_SLASH_SLASH] = ACTIONS(213),
    [aux_sym_line_breaks_token1] = ACTIONS(213),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(213),
    [anon_sym_image_COLON_COLON] = ACTIONS(213),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(213),
    [anon_sym_audio_COLON_COLON] = ACTIONS(213),
    [anon_sym_video_COLON_COLON] = ACTIONS(213),
    [aux_sym__inline_element_token1] = ACTIONS(215),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(213),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(213),
    [aux_sym_autolinks_token1] = ACTIONS(215),
    [anon_sym_link_COLON] = ACTIONS(215),
    [anon_sym_mailto_COLON] = ACTIONS(215),
    [anon_sym_LT_LT] = ACTIONS(215),
    [anon_sym_xref_COLON] = ACTIONS(215),
    [sym_emphasis] = ACTIONS(215),
    [sym_strong] = ACTIONS(215),
    [sym_monospace] = ACTIONS(213),
    [sym_highlight] = ACTIONS(213),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(213),
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
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(219),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(219),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(219),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(217),
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
    [sym__unordered_list_mark] = ACTIONS(219),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(219),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(217),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(219),
    [sym__checklist_mark] = ACTIONS(219),
    [aux_sym_code_token1] = ACTIONS(217),
    [aux_sym_code_language_token1] = ACTIONS(219),
    [anon_sym_SLASH_SLASH] = ACTIONS(217),
    [aux_sym_line_breaks_token1] = ACTIONS(217),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(217),
    [anon_sym_image_COLON_COLON] = ACTIONS(217),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(217),
    [anon_sym_audio_COLON_COLON] = ACTIONS(217),
    [anon_sym_video_COLON_COLON] = ACTIONS(217),
    [aux_sym__inline_element_token1] = ACTIONS(219),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(217),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(217),
    [aux_sym_autolinks_token1] = ACTIONS(219),
    [anon_sym_link_COLON] = ACTIONS(219),
    [anon_sym_mailto_COLON] = ACTIONS(219),
    [anon_sym_LT_LT] = ACTIONS(219),
    [anon_sym_xref_COLON] = ACTIONS(219),
    [sym_emphasis] = ACTIONS(219),
    [sym_strong] = ACTIONS(219),
    [sym_monospace] = ACTIONS(217),
    [sym_highlight] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(217),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(223),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(223),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(223),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(223),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(221),
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
    [sym__unordered_list_mark] = ACTIONS(223),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(223),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(221),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(223),
    [sym__checklist_mark] = ACTIONS(223),
    [aux_sym_code_token1] = ACTIONS(221),
    [aux_sym_code_language_token1] = ACTIONS(223),
    [anon_sym_SLASH_SLASH] = ACTIONS(221),
    [aux_sym_line_breaks_token1] = ACTIONS(221),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(221),
    [anon_sym_image_COLON_COLON] = ACTIONS(221),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(221),
    [anon_sym_audio_COLON_COLON] = ACTIONS(221),
    [anon_sym_video_COLON_COLON] = ACTIONS(221),
    [aux_sym__inline_element_token1] = ACTIONS(223),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(221),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(221),
    [aux_sym_autolinks_token1] = ACTIONS(223),
    [anon_sym_link_COLON] = ACTIONS(223),
    [anon_sym_mailto_COLON] = ACTIONS(223),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_xref_COLON] = ACTIONS(223),
    [sym_emphasis] = ACTIONS(223),
    [sym_strong] = ACTIONS(223),
    [sym_monospace] = ACTIONS(221),
    [sym_highlight] = ACTIONS(221),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(221),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(221),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(227),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(227),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(227),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(225),
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
    [sym__unordered_list_mark] = ACTIONS(227),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(227),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(225),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(227),
    [sym__checklist_mark] = ACTIONS(227),
    [aux_sym_code_token1] = ACTIONS(225),
    [aux_sym_code_language_token1] = ACTIONS(227),
    [anon_sym_SLASH_SLASH] = ACTIONS(225),
    [aux_sym_line_breaks_token1] = ACTIONS(225),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(225),
    [anon_sym_image_COLON_COLON] = ACTIONS(225),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(225),
    [anon_sym_audio_COLON_COLON] = ACTIONS(225),
    [anon_sym_video_COLON_COLON] = ACTIONS(225),
    [aux_sym__inline_element_token1] = ACTIONS(227),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(225),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(225),
    [aux_sym_autolinks_token1] = ACTIONS(227),
    [anon_sym_link_COLON] = ACTIONS(227),
    [anon_sym_mailto_COLON] = ACTIONS(227),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_xref_COLON] = ACTIONS(227),
    [sym_emphasis] = ACTIONS(227),
    [sym_strong] = ACTIONS(227),
    [sym_monospace] = ACTIONS(225),
    [sym_highlight] = ACTIONS(225),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(225),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(231),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(231),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(231),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(229),
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
    [sym__unordered_list_mark] = ACTIONS(231),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(231),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(229),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(231),
    [sym__checklist_mark] = ACTIONS(231),
    [aux_sym_code_token1] = ACTIONS(229),
    [aux_sym_code_language_token1] = ACTIONS(231),
    [anon_sym_SLASH_SLASH] = ACTIONS(229),
    [aux_sym_line_breaks_token1] = ACTIONS(229),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(229),
    [anon_sym_image_COLON_COLON] = ACTIONS(229),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(229),
    [anon_sym_audio_COLON_COLON] = ACTIONS(229),
    [anon_sym_video_COLON_COLON] = ACTIONS(229),
    [aux_sym__inline_element_token1] = ACTIONS(231),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(229),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(229),
    [aux_sym_autolinks_token1] = ACTIONS(231),
    [anon_sym_link_COLON] = ACTIONS(231),
    [anon_sym_mailto_COLON] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_xref_COLON] = ACTIONS(231),
    [sym_emphasis] = ACTIONS(231),
    [sym_strong] = ACTIONS(231),
    [sym_monospace] = ACTIONS(229),
    [sym_highlight] = ACTIONS(229),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(229),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(229),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(235),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(235),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(235),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(235),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(235),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(233),
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
    [sym__unordered_list_mark] = ACTIONS(235),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(235),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(233),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(235),
    [sym__checklist_mark] = ACTIONS(235),
    [aux_sym_code_token1] = ACTIONS(233),
    [aux_sym_code_language_token1] = ACTIONS(235),
    [anon_sym_SLASH_SLASH] = ACTIONS(233),
    [aux_sym_line_breaks_token1] = ACTIONS(233),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(233),
    [anon_sym_image_COLON_COLON] = ACTIONS(233),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(233),
    [anon_sym_audio_COLON_COLON] = ACTIONS(233),
    [anon_sym_video_COLON_COLON] = ACTIONS(233),
    [aux_sym__inline_element_token1] = ACTIONS(235),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(233),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(233),
    [aux_sym_autolinks_token1] = ACTIONS(235),
    [anon_sym_link_COLON] = ACTIONS(235),
    [anon_sym_mailto_COLON] = ACTIONS(235),
    [anon_sym_LT_LT] = ACTIONS(235),
    [anon_sym_xref_COLON] = ACTIONS(235),
    [sym_emphasis] = ACTIONS(235),
    [sym_strong] = ACTIONS(235),
    [sym_monospace] = ACTIONS(233),
    [sym_highlight] = ACTIONS(233),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(233),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(233),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(239),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(239),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(239),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(239),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(237),
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
    [sym__unordered_list_mark] = ACTIONS(239),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(239),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(237),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(239),
    [sym__checklist_mark] = ACTIONS(239),
    [aux_sym_code_token1] = ACTIONS(237),
    [aux_sym_code_language_token1] = ACTIONS(239),
    [anon_sym_SLASH_SLASH] = ACTIONS(237),
    [aux_sym_line_breaks_token1] = ACTIONS(237),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(237),
    [anon_sym_image_COLON_COLON] = ACTIONS(237),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(237),
    [anon_sym_audio_COLON_COLON] = ACTIONS(237),
    [anon_sym_video_COLON_COLON] = ACTIONS(237),
    [aux_sym__inline_element_token1] = ACTIONS(239),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(237),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(237),
    [aux_sym_autolinks_token1] = ACTIONS(239),
    [anon_sym_link_COLON] = ACTIONS(239),
    [anon_sym_mailto_COLON] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_xref_COLON] = ACTIONS(239),
    [sym_emphasis] = ACTIONS(239),
    [sym_strong] = ACTIONS(239),
    [sym_monospace] = ACTIONS(237),
    [sym_highlight] = ACTIONS(237),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(237),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(237),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(243),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(243),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(243),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(243),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(241),
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
    [sym__unordered_list_mark] = ACTIONS(243),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(243),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(241),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(243),
    [sym__checklist_mark] = ACTIONS(243),
    [aux_sym_code_token1] = ACTIONS(241),
    [aux_sym_code_language_token1] = ACTIONS(243),
    [anon_sym_SLASH_SLASH] = ACTIONS(241),
    [aux_sym_line_breaks_token1] = ACTIONS(241),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(241),
    [anon_sym_image_COLON_COLON] = ACTIONS(241),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(241),
    [anon_sym_audio_COLON_COLON] = ACTIONS(241),
    [anon_sym_video_COLON_COLON] = ACTIONS(241),
    [aux_sym__inline_element_token1] = ACTIONS(243),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(241),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(241),
    [aux_sym_autolinks_token1] = ACTIONS(243),
    [anon_sym_link_COLON] = ACTIONS(243),
    [anon_sym_mailto_COLON] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_xref_COLON] = ACTIONS(243),
    [sym_emphasis] = ACTIONS(243),
    [sym_strong] = ACTIONS(243),
    [sym_monospace] = ACTIONS(241),
    [sym_highlight] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(241),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(247),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(247),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(247),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(245),
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
    [sym__unordered_list_mark] = ACTIONS(247),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(247),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(245),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(247),
    [sym__checklist_mark] = ACTIONS(247),
    [aux_sym_code_token1] = ACTIONS(245),
    [aux_sym_code_language_token1] = ACTIONS(247),
    [anon_sym_SLASH_SLASH] = ACTIONS(245),
    [aux_sym_line_breaks_token1] = ACTIONS(245),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(245),
    [anon_sym_image_COLON_COLON] = ACTIONS(245),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(245),
    [anon_sym_audio_COLON_COLON] = ACTIONS(245),
    [anon_sym_video_COLON_COLON] = ACTIONS(245),
    [aux_sym__inline_element_token1] = ACTIONS(247),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(245),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(245),
    [aux_sym_autolinks_token1] = ACTIONS(247),
    [anon_sym_link_COLON] = ACTIONS(247),
    [anon_sym_mailto_COLON] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_xref_COLON] = ACTIONS(247),
    [sym_emphasis] = ACTIONS(247),
    [sym_strong] = ACTIONS(247),
    [sym_monospace] = ACTIONS(245),
    [sym_highlight] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(245),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(251),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(251),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(251),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(251),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(249),
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
    [sym__unordered_list_mark] = ACTIONS(251),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(251),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(249),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(251),
    [sym__checklist_mark] = ACTIONS(251),
    [aux_sym_code_token1] = ACTIONS(249),
    [aux_sym_code_language_token1] = ACTIONS(251),
    [anon_sym_SLASH_SLASH] = ACTIONS(249),
    [aux_sym_line_breaks_token1] = ACTIONS(249),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(249),
    [anon_sym_image_COLON_COLON] = ACTIONS(249),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(249),
    [anon_sym_audio_COLON_COLON] = ACTIONS(249),
    [anon_sym_video_COLON_COLON] = ACTIONS(249),
    [aux_sym__inline_element_token1] = ACTIONS(251),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(249),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(249),
    [aux_sym_autolinks_token1] = ACTIONS(251),
    [anon_sym_link_COLON] = ACTIONS(251),
    [anon_sym_mailto_COLON] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_xref_COLON] = ACTIONS(251),
    [sym_emphasis] = ACTIONS(251),
    [sym_strong] = ACTIONS(251),
    [sym_monospace] = ACTIONS(249),
    [sym_highlight] = ACTIONS(249),
    [sym_superscript] = ACTIONS(249),
    [sym_subscript] = ACTIONS(249),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(249),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(255),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(255),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(255),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(253),
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
    [sym__unordered_list_mark] = ACTIONS(255),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(255),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(253),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(255),
    [sym__checklist_mark] = ACTIONS(255),
    [aux_sym_code_token1] = ACTIONS(253),
    [aux_sym_code_language_token1] = ACTIONS(255),
    [anon_sym_SLASH_SLASH] = ACTIONS(253),
    [aux_sym_line_breaks_token1] = ACTIONS(253),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(253),
    [anon_sym_image_COLON_COLON] = ACTIONS(253),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(253),
    [anon_sym_audio_COLON_COLON] = ACTIONS(253),
    [anon_sym_video_COLON_COLON] = ACTIONS(253),
    [aux_sym__inline_element_token1] = ACTIONS(255),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(253),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(253),
    [aux_sym_autolinks_token1] = ACTIONS(255),
    [anon_sym_link_COLON] = ACTIONS(255),
    [anon_sym_mailto_COLON] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(255),
    [anon_sym_xref_COLON] = ACTIONS(255),
    [sym_emphasis] = ACTIONS(255),
    [sym_strong] = ACTIONS(255),
    [sym_monospace] = ACTIONS(253),
    [sym_highlight] = ACTIONS(253),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(253),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(253),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_DOT] = ACTIONS(259),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(259),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(259),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(259),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(257),
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
    [sym__unordered_list_mark] = ACTIONS(259),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(259),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(257),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(259),
    [sym__checklist_mark] = ACTIONS(259),
    [aux_sym_code_token1] = ACTIONS(257),
    [aux_sym_code_language_token1] = ACTIONS(259),
    [anon_sym_SLASH_SLASH] = ACTIONS(257),
    [aux_sym_line_breaks_token1] = ACTIONS(257),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(257),
    [anon_sym_image_COLON_COLON] = ACTIONS(257),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(257),
    [anon_sym_audio_COLON_COLON] = ACTIONS(257),
    [anon_sym_video_COLON_COLON] = ACTIONS(257),
    [aux_sym__inline_element_token1] = ACTIONS(259),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(257),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(257),
    [aux_sym_autolinks_token1] = ACTIONS(259),
    [anon_sym_link_COLON] = ACTIONS(259),
    [anon_sym_mailto_COLON] = ACTIONS(259),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_xref_COLON] = ACTIONS(259),
    [sym_emphasis] = ACTIONS(259),
    [sym_strong] = ACTIONS(259),
    [sym_monospace] = ACTIONS(257),
    [sym_highlight] = ACTIONS(257),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(257),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(257),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(263),
    [anon_sym_EQ_EQ] = ACTIONS(263),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(263),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(263),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(263),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(261),
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
    [sym__unordered_list_mark] = ACTIONS(263),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(263),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(261),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(263),
    [sym__checklist_mark] = ACTIONS(263),
    [aux_sym_code_token1] = ACTIONS(261),
    [aux_sym_code_language_token1] = ACTIONS(263),
    [anon_sym_SLASH_SLASH] = ACTIONS(261),
    [aux_sym_line_breaks_token1] = ACTIONS(261),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(261),
    [anon_sym_image_COLON_COLON] = ACTIONS(261),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(261),
    [anon_sym_audio_COLON_COLON] = ACTIONS(261),
    [anon_sym_video_COLON_COLON] = ACTIONS(261),
    [aux_sym__inline_element_token1] = ACTIONS(263),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(261),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(261),
    [aux_sym_autolinks_token1] = ACTIONS(263),
    [anon_sym_link_COLON] = ACTIONS(263),
    [anon_sym_mailto_COLON] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_xref_COLON] = ACTIONS(263),
    [sym_emphasis] = ACTIONS(263),
    [sym_strong] = ACTIONS(263),
    [sym_monospace] = ACTIONS(261),
    [sym_highlight] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(261),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_EQ_EQ] = ACTIONS(267),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(267),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(267),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(267),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(265),
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
    [sym__unordered_list_mark] = ACTIONS(267),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(267),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(265),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(267),
    [sym__checklist_mark] = ACTIONS(267),
    [aux_sym_code_token1] = ACTIONS(265),
    [aux_sym_code_language_token1] = ACTIONS(267),
    [anon_sym_SLASH_SLASH] = ACTIONS(265),
    [aux_sym_line_breaks_token1] = ACTIONS(265),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(265),
    [anon_sym_image_COLON_COLON] = ACTIONS(265),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(265),
    [anon_sym_audio_COLON_COLON] = ACTIONS(265),
    [anon_sym_video_COLON_COLON] = ACTIONS(265),
    [aux_sym__inline_element_token1] = ACTIONS(267),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(265),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(265),
    [aux_sym_autolinks_token1] = ACTIONS(267),
    [anon_sym_link_COLON] = ACTIONS(267),
    [anon_sym_mailto_COLON] = ACTIONS(267),
    [anon_sym_LT_LT] = ACTIONS(267),
    [anon_sym_xref_COLON] = ACTIONS(267),
    [sym_emphasis] = ACTIONS(267),
    [sym_strong] = ACTIONS(267),
    [sym_monospace] = ACTIONS(265),
    [sym_highlight] = ACTIONS(265),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(265),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(265),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(271),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_EQ_EQ] = ACTIONS(271),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(271),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(271),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(271),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(269),
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
    [sym__unordered_list_mark] = ACTIONS(271),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(271),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(269),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(271),
    [sym__checklist_mark] = ACTIONS(271),
    [aux_sym_code_token1] = ACTIONS(269),
    [aux_sym_code_language_token1] = ACTIONS(271),
    [anon_sym_SLASH_SLASH] = ACTIONS(269),
    [aux_sym_line_breaks_token1] = ACTIONS(269),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(269),
    [anon_sym_image_COLON_COLON] = ACTIONS(269),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(269),
    [anon_sym_audio_COLON_COLON] = ACTIONS(269),
    [anon_sym_video_COLON_COLON] = ACTIONS(269),
    [aux_sym__inline_element_token1] = ACTIONS(271),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(269),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(269),
    [aux_sym_autolinks_token1] = ACTIONS(271),
    [anon_sym_link_COLON] = ACTIONS(271),
    [anon_sym_mailto_COLON] = ACTIONS(271),
    [anon_sym_LT_LT] = ACTIONS(271),
    [anon_sym_xref_COLON] = ACTIONS(271),
    [sym_emphasis] = ACTIONS(271),
    [sym_strong] = ACTIONS(271),
    [sym_monospace] = ACTIONS(269),
    [sym_highlight] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(269),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(275),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(273),
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
    [sym__unordered_list_mark] = ACTIONS(275),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(275),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(273),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(275),
    [sym__checklist_mark] = ACTIONS(275),
    [aux_sym_code_token1] = ACTIONS(273),
    [aux_sym_code_language_token1] = ACTIONS(275),
    [anon_sym_SLASH_SLASH] = ACTIONS(273),
    [aux_sym_line_breaks_token1] = ACTIONS(273),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(273),
    [anon_sym_image_COLON_COLON] = ACTIONS(273),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(273),
    [anon_sym_audio_COLON_COLON] = ACTIONS(273),
    [anon_sym_video_COLON_COLON] = ACTIONS(273),
    [aux_sym__inline_element_token1] = ACTIONS(275),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(273),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(273),
    [aux_sym_autolinks_token1] = ACTIONS(275),
    [anon_sym_link_COLON] = ACTIONS(275),
    [anon_sym_mailto_COLON] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(275),
    [anon_sym_xref_COLON] = ACTIONS(275),
    [sym_emphasis] = ACTIONS(275),
    [sym_strong] = ACTIONS(275),
    [sym_monospace] = ACTIONS(273),
    [sym_highlight] = ACTIONS(273),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(273),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(279),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(279),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(279),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(277),
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
    [sym__unordered_list_mark] = ACTIONS(279),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(279),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(277),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(279),
    [sym__checklist_mark] = ACTIONS(279),
    [aux_sym_code_token1] = ACTIONS(277),
    [aux_sym_code_language_token1] = ACTIONS(279),
    [anon_sym_SLASH_SLASH] = ACTIONS(277),
    [aux_sym_line_breaks_token1] = ACTIONS(277),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(277),
    [anon_sym_image_COLON_COLON] = ACTIONS(277),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(277),
    [anon_sym_audio_COLON_COLON] = ACTIONS(277),
    [anon_sym_video_COLON_COLON] = ACTIONS(277),
    [aux_sym__inline_element_token1] = ACTIONS(279),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(277),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(277),
    [aux_sym_autolinks_token1] = ACTIONS(279),
    [anon_sym_link_COLON] = ACTIONS(279),
    [anon_sym_mailto_COLON] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(279),
    [anon_sym_xref_COLON] = ACTIONS(279),
    [sym_emphasis] = ACTIONS(279),
    [sym_strong] = ACTIONS(279),
    [sym_monospace] = ACTIONS(277),
    [sym_highlight] = ACTIONS(277),
    [sym_superscript] = ACTIONS(277),
    [sym_subscript] = ACTIONS(277),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(277),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_EQ_EQ] = ACTIONS(283),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(283),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(283),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(283),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(281),
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
    [sym__unordered_list_mark] = ACTIONS(283),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(283),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(281),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(283),
    [sym__checklist_mark] = ACTIONS(283),
    [aux_sym_code_token1] = ACTIONS(281),
    [aux_sym_code_language_token1] = ACTIONS(283),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [aux_sym_line_breaks_token1] = ACTIONS(281),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(281),
    [anon_sym_image_COLON_COLON] = ACTIONS(281),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(281),
    [anon_sym_audio_COLON_COLON] = ACTIONS(281),
    [anon_sym_video_COLON_COLON] = ACTIONS(281),
    [aux_sym__inline_element_token1] = ACTIONS(283),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(281),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(281),
    [aux_sym_autolinks_token1] = ACTIONS(283),
    [anon_sym_link_COLON] = ACTIONS(283),
    [anon_sym_mailto_COLON] = ACTIONS(283),
    [anon_sym_LT_LT] = ACTIONS(283),
    [anon_sym_xref_COLON] = ACTIONS(283),
    [sym_emphasis] = ACTIONS(283),
    [sym_strong] = ACTIONS(283),
    [sym_monospace] = ACTIONS(281),
    [sym_highlight] = ACTIONS(281),
    [sym_superscript] = ACTIONS(281),
    [sym_subscript] = ACTIONS(281),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(281),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(287),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(287),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(287),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(285),
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
    [sym__unordered_list_mark] = ACTIONS(287),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(287),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(285),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(287),
    [sym__checklist_mark] = ACTIONS(287),
    [aux_sym_code_token1] = ACTIONS(285),
    [aux_sym_code_language_token1] = ACTIONS(287),
    [anon_sym_SLASH_SLASH] = ACTIONS(285),
    [aux_sym_line_breaks_token1] = ACTIONS(285),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(285),
    [anon_sym_image_COLON_COLON] = ACTIONS(285),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(285),
    [anon_sym_audio_COLON_COLON] = ACTIONS(285),
    [anon_sym_video_COLON_COLON] = ACTIONS(285),
    [aux_sym__inline_element_token1] = ACTIONS(287),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(285),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(285),
    [aux_sym_autolinks_token1] = ACTIONS(287),
    [anon_sym_link_COLON] = ACTIONS(287),
    [anon_sym_mailto_COLON] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(287),
    [anon_sym_xref_COLON] = ACTIONS(287),
    [sym_emphasis] = ACTIONS(287),
    [sym_strong] = ACTIONS(287),
    [sym_monospace] = ACTIONS(285),
    [sym_highlight] = ACTIONS(285),
    [sym_superscript] = ACTIONS(285),
    [sym_subscript] = ACTIONS(285),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(285),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(291),
    [anon_sym_EQ_EQ] = ACTIONS(291),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(291),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(291),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(291),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(289),
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
    [sym__unordered_list_mark] = ACTIONS(291),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(291),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(289),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(291),
    [sym__checklist_mark] = ACTIONS(291),
    [aux_sym_code_token1] = ACTIONS(289),
    [aux_sym_code_language_token1] = ACTIONS(291),
    [anon_sym_SLASH_SLASH] = ACTIONS(289),
    [aux_sym_line_breaks_token1] = ACTIONS(289),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(289),
    [anon_sym_image_COLON_COLON] = ACTIONS(289),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(289),
    [anon_sym_audio_COLON_COLON] = ACTIONS(289),
    [anon_sym_video_COLON_COLON] = ACTIONS(289),
    [aux_sym__inline_element_token1] = ACTIONS(291),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(289),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(289),
    [aux_sym_autolinks_token1] = ACTIONS(291),
    [anon_sym_link_COLON] = ACTIONS(291),
    [anon_sym_mailto_COLON] = ACTIONS(291),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_xref_COLON] = ACTIONS(291),
    [sym_emphasis] = ACTIONS(291),
    [sym_strong] = ACTIONS(291),
    [sym_monospace] = ACTIONS(289),
    [sym_highlight] = ACTIONS(289),
    [sym_superscript] = ACTIONS(289),
    [sym_subscript] = ACTIONS(289),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(289),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(295),
    [anon_sym_EQ_EQ] = ACTIONS(295),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(295),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(295),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(295),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(293),
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
    [sym__unordered_list_mark] = ACTIONS(295),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(295),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(293),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(295),
    [sym__checklist_mark] = ACTIONS(295),
    [aux_sym_code_token1] = ACTIONS(293),
    [aux_sym_code_language_token1] = ACTIONS(295),
    [anon_sym_SLASH_SLASH] = ACTIONS(293),
    [aux_sym_line_breaks_token1] = ACTIONS(293),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(293),
    [anon_sym_image_COLON_COLON] = ACTIONS(293),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(293),
    [anon_sym_audio_COLON_COLON] = ACTIONS(293),
    [anon_sym_video_COLON_COLON] = ACTIONS(293),
    [aux_sym__inline_element_token1] = ACTIONS(295),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(293),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(293),
    [aux_sym_autolinks_token1] = ACTIONS(295),
    [anon_sym_link_COLON] = ACTIONS(295),
    [anon_sym_mailto_COLON] = ACTIONS(295),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_xref_COLON] = ACTIONS(295),
    [sym_emphasis] = ACTIONS(295),
    [sym_strong] = ACTIONS(295),
    [sym_monospace] = ACTIONS(293),
    [sym_highlight] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [sym_subscript] = ACTIONS(293),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(293),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(299),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(297),
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
    [sym__unordered_list_mark] = ACTIONS(299),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(299),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(297),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(299),
    [sym__checklist_mark] = ACTIONS(299),
    [aux_sym_code_token1] = ACTIONS(297),
    [aux_sym_code_language_token1] = ACTIONS(299),
    [anon_sym_SLASH_SLASH] = ACTIONS(297),
    [aux_sym_line_breaks_token1] = ACTIONS(297),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(297),
    [anon_sym_image_COLON_COLON] = ACTIONS(297),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(297),
    [anon_sym_audio_COLON_COLON] = ACTIONS(297),
    [anon_sym_video_COLON_COLON] = ACTIONS(297),
    [aux_sym__inline_element_token1] = ACTIONS(299),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(297),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(297),
    [aux_sym_autolinks_token1] = ACTIONS(299),
    [anon_sym_link_COLON] = ACTIONS(299),
    [anon_sym_mailto_COLON] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_xref_COLON] = ACTIONS(299),
    [sym_emphasis] = ACTIONS(299),
    [sym_strong] = ACTIONS(299),
    [sym_monospace] = ACTIONS(297),
    [sym_highlight] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(297),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(303),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(303),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(303),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(303),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(301),
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
    [sym__unordered_list_mark] = ACTIONS(303),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(303),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(301),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(303),
    [sym__checklist_mark] = ACTIONS(303),
    [aux_sym_code_token1] = ACTIONS(301),
    [aux_sym_code_language_token1] = ACTIONS(303),
    [anon_sym_SLASH_SLASH] = ACTIONS(301),
    [aux_sym_line_breaks_token1] = ACTIONS(301),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(301),
    [anon_sym_image_COLON_COLON] = ACTIONS(301),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(301),
    [anon_sym_audio_COLON_COLON] = ACTIONS(301),
    [anon_sym_video_COLON_COLON] = ACTIONS(301),
    [aux_sym__inline_element_token1] = ACTIONS(303),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(301),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(301),
    [aux_sym_autolinks_token1] = ACTIONS(303),
    [anon_sym_link_COLON] = ACTIONS(303),
    [anon_sym_mailto_COLON] = ACTIONS(303),
    [anon_sym_LT_LT] = ACTIONS(303),
    [anon_sym_xref_COLON] = ACTIONS(303),
    [sym_emphasis] = ACTIONS(303),
    [sym_strong] = ACTIONS(303),
    [sym_monospace] = ACTIONS(301),
    [sym_highlight] = ACTIONS(301),
    [sym_superscript] = ACTIONS(301),
    [sym_subscript] = ACTIONS(301),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(301),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(307),
    [anon_sym_EQ_EQ] = ACTIONS(307),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(307),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(307),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(307),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(305),
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
    [sym__unordered_list_mark] = ACTIONS(307),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(307),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(305),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(307),
    [sym__checklist_mark] = ACTIONS(307),
    [aux_sym_code_token1] = ACTIONS(305),
    [aux_sym_code_language_token1] = ACTIONS(307),
    [anon_sym_SLASH_SLASH] = ACTIONS(305),
    [aux_sym_line_breaks_token1] = ACTIONS(305),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(305),
    [anon_sym_image_COLON_COLON] = ACTIONS(305),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(305),
    [anon_sym_audio_COLON_COLON] = ACTIONS(305),
    [anon_sym_video_COLON_COLON] = ACTIONS(305),
    [aux_sym__inline_element_token1] = ACTIONS(307),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(305),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(305),
    [aux_sym_autolinks_token1] = ACTIONS(307),
    [anon_sym_link_COLON] = ACTIONS(307),
    [anon_sym_mailto_COLON] = ACTIONS(307),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_xref_COLON] = ACTIONS(307),
    [sym_emphasis] = ACTIONS(307),
    [sym_strong] = ACTIONS(307),
    [sym_monospace] = ACTIONS(305),
    [sym_highlight] = ACTIONS(305),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(305),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_DOT] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_EQ_EQ] = ACTIONS(311),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(311),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(311),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(311),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(309),
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
    [sym__unordered_list_mark] = ACTIONS(311),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(311),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(309),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(311),
    [sym__checklist_mark] = ACTIONS(311),
    [aux_sym_code_token1] = ACTIONS(309),
    [aux_sym_code_language_token1] = ACTIONS(311),
    [anon_sym_SLASH_SLASH] = ACTIONS(309),
    [aux_sym_line_breaks_token1] = ACTIONS(309),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(309),
    [anon_sym_image_COLON_COLON] = ACTIONS(309),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(309),
    [anon_sym_audio_COLON_COLON] = ACTIONS(309),
    [anon_sym_video_COLON_COLON] = ACTIONS(309),
    [aux_sym__inline_element_token1] = ACTIONS(311),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(309),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(309),
    [aux_sym_autolinks_token1] = ACTIONS(311),
    [anon_sym_link_COLON] = ACTIONS(311),
    [anon_sym_mailto_COLON] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_xref_COLON] = ACTIONS(311),
    [sym_emphasis] = ACTIONS(311),
    [sym_strong] = ACTIONS(311),
    [sym_monospace] = ACTIONS(309),
    [sym_highlight] = ACTIONS(309),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(309),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(309),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(315),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(315),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(315),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(315),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(313),
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
    [sym__unordered_list_mark] = ACTIONS(315),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(315),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(313),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(315),
    [sym__checklist_mark] = ACTIONS(315),
    [aux_sym_code_token1] = ACTIONS(313),
    [aux_sym_code_language_token1] = ACTIONS(315),
    [anon_sym_SLASH_SLASH] = ACTIONS(313),
    [aux_sym_line_breaks_token1] = ACTIONS(313),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(313),
    [anon_sym_image_COLON_COLON] = ACTIONS(313),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(313),
    [anon_sym_audio_COLON_COLON] = ACTIONS(313),
    [anon_sym_video_COLON_COLON] = ACTIONS(313),
    [aux_sym__inline_element_token1] = ACTIONS(315),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(313),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(313),
    [aux_sym_autolinks_token1] = ACTIONS(315),
    [anon_sym_link_COLON] = ACTIONS(315),
    [anon_sym_mailto_COLON] = ACTIONS(315),
    [anon_sym_LT_LT] = ACTIONS(315),
    [anon_sym_xref_COLON] = ACTIONS(315),
    [sym_emphasis] = ACTIONS(315),
    [sym_strong] = ACTIONS(315),
    [sym_monospace] = ACTIONS(313),
    [sym_highlight] = ACTIONS(313),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(313),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_EQ_EQ] = ACTIONS(319),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(319),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(319),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(319),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(317),
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
    [sym__unordered_list_mark] = ACTIONS(319),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(319),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(317),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(319),
    [sym__checklist_mark] = ACTIONS(319),
    [aux_sym_code_token1] = ACTIONS(317),
    [aux_sym_code_language_token1] = ACTIONS(319),
    [anon_sym_SLASH_SLASH] = ACTIONS(317),
    [aux_sym_line_breaks_token1] = ACTIONS(317),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(317),
    [anon_sym_image_COLON_COLON] = ACTIONS(317),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(317),
    [anon_sym_audio_COLON_COLON] = ACTIONS(317),
    [anon_sym_video_COLON_COLON] = ACTIONS(317),
    [aux_sym__inline_element_token1] = ACTIONS(319),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(317),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(317),
    [aux_sym_autolinks_token1] = ACTIONS(319),
    [anon_sym_link_COLON] = ACTIONS(319),
    [anon_sym_mailto_COLON] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_xref_COLON] = ACTIONS(319),
    [sym_emphasis] = ACTIONS(319),
    [sym_strong] = ACTIONS(319),
    [sym_monospace] = ACTIONS(317),
    [sym_highlight] = ACTIONS(317),
    [sym_superscript] = ACTIONS(317),
    [sym_subscript] = ACTIONS(317),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(317),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(323),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(323),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(323),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(321),
    [anon_sym_NOTE_COLON] = ACTIONS(321),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(321),
    [anon_sym_TIP_COLON] = ACTIONS(321),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(321),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(321),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(321),
    [anon_sym_CAUTION_COLON] = ACTIONS(321),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(321),
    [anon_sym_WARNING_COLON] = ACTIONS(321),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(321),
    [sym__unordered_list_mark] = ACTIONS(323),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(323),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(321),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(323),
    [sym__checklist_mark] = ACTIONS(323),
    [aux_sym_code_token1] = ACTIONS(321),
    [aux_sym_code_language_token1] = ACTIONS(323),
    [anon_sym_SLASH_SLASH] = ACTIONS(321),
    [aux_sym_line_breaks_token1] = ACTIONS(321),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(321),
    [anon_sym_image_COLON_COLON] = ACTIONS(321),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(321),
    [anon_sym_audio_COLON_COLON] = ACTIONS(321),
    [anon_sym_video_COLON_COLON] = ACTIONS(321),
    [aux_sym__inline_element_token1] = ACTIONS(323),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(321),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(321),
    [aux_sym_autolinks_token1] = ACTIONS(323),
    [anon_sym_link_COLON] = ACTIONS(323),
    [anon_sym_mailto_COLON] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_xref_COLON] = ACTIONS(323),
    [sym_emphasis] = ACTIONS(323),
    [sym_strong] = ACTIONS(323),
    [sym_monospace] = ACTIONS(321),
    [sym_highlight] = ACTIONS(321),
    [sym_superscript] = ACTIONS(321),
    [sym_subscript] = ACTIONS(321),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(321),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(321),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(321),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(327),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(327),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(327),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(325),
    [anon_sym_NOTE_COLON] = ACTIONS(325),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(325),
    [anon_sym_TIP_COLON] = ACTIONS(325),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(325),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(325),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(325),
    [anon_sym_CAUTION_COLON] = ACTIONS(325),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(325),
    [anon_sym_WARNING_COLON] = ACTIONS(325),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(325),
    [sym__unordered_list_mark] = ACTIONS(327),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(327),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(325),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(327),
    [sym__checklist_mark] = ACTIONS(327),
    [aux_sym_code_token1] = ACTIONS(325),
    [aux_sym_code_language_token1] = ACTIONS(327),
    [anon_sym_SLASH_SLASH] = ACTIONS(325),
    [aux_sym_line_breaks_token1] = ACTIONS(325),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(325),
    [anon_sym_image_COLON_COLON] = ACTIONS(325),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(325),
    [anon_sym_audio_COLON_COLON] = ACTIONS(325),
    [anon_sym_video_COLON_COLON] = ACTIONS(325),
    [aux_sym__inline_element_token1] = ACTIONS(327),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(325),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(325),
    [aux_sym_autolinks_token1] = ACTIONS(327),
    [anon_sym_link_COLON] = ACTIONS(327),
    [anon_sym_mailto_COLON] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(327),
    [anon_sym_xref_COLON] = ACTIONS(327),
    [sym_emphasis] = ACTIONS(327),
    [sym_strong] = ACTIONS(327),
    [sym_monospace] = ACTIONS(325),
    [sym_highlight] = ACTIONS(325),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(325),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(325),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(325),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(325),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_DOT] = ACTIONS(331),
    [anon_sym_EQ] = ACTIONS(331),
    [anon_sym_EQ_EQ] = ACTIONS(331),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(331),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(331),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(331),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(329),
    [anon_sym_NOTE_COLON] = ACTIONS(329),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(329),
    [anon_sym_TIP_COLON] = ACTIONS(329),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(329),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(329),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(329),
    [anon_sym_CAUTION_COLON] = ACTIONS(329),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(329),
    [anon_sym_WARNING_COLON] = ACTIONS(329),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(329),
    [sym__unordered_list_mark] = ACTIONS(331),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(331),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(329),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(331),
    [sym__checklist_mark] = ACTIONS(331),
    [aux_sym_code_token1] = ACTIONS(329),
    [aux_sym_code_language_token1] = ACTIONS(331),
    [anon_sym_SLASH_SLASH] = ACTIONS(329),
    [aux_sym_line_breaks_token1] = ACTIONS(329),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(329),
    [anon_sym_image_COLON_COLON] = ACTIONS(329),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(329),
    [anon_sym_audio_COLON_COLON] = ACTIONS(329),
    [anon_sym_video_COLON_COLON] = ACTIONS(329),
    [aux_sym__inline_element_token1] = ACTIONS(331),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(329),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(329),
    [aux_sym_autolinks_token1] = ACTIONS(331),
    [anon_sym_link_COLON] = ACTIONS(331),
    [anon_sym_mailto_COLON] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_xref_COLON] = ACTIONS(331),
    [sym_emphasis] = ACTIONS(331),
    [sym_strong] = ACTIONS(331),
    [sym_monospace] = ACTIONS(329),
    [sym_highlight] = ACTIONS(329),
    [sym_superscript] = ACTIONS(329),
    [sym_subscript] = ACTIONS(329),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(329),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(329),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(329),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_EQ] = ACTIONS(335),
    [anon_sym_EQ_EQ] = ACTIONS(335),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(335),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(335),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(335),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(333),
    [anon_sym_NOTE_COLON] = ACTIONS(333),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(333),
    [anon_sym_TIP_COLON] = ACTIONS(333),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(333),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(333),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(333),
    [anon_sym_CAUTION_COLON] = ACTIONS(333),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(333),
    [anon_sym_WARNING_COLON] = ACTIONS(333),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(333),
    [sym__unordered_list_mark] = ACTIONS(335),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(335),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(333),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(335),
    [sym__checklist_mark] = ACTIONS(335),
    [aux_sym_code_token1] = ACTIONS(333),
    [aux_sym_code_language_token1] = ACTIONS(335),
    [anon_sym_SLASH_SLASH] = ACTIONS(333),
    [aux_sym_line_breaks_token1] = ACTIONS(333),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(333),
    [anon_sym_image_COLON_COLON] = ACTIONS(333),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(333),
    [anon_sym_audio_COLON_COLON] = ACTIONS(333),
    [anon_sym_video_COLON_COLON] = ACTIONS(333),
    [aux_sym__inline_element_token1] = ACTIONS(335),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(333),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(333),
    [aux_sym_autolinks_token1] = ACTIONS(335),
    [anon_sym_link_COLON] = ACTIONS(335),
    [anon_sym_mailto_COLON] = ACTIONS(335),
    [anon_sym_LT_LT] = ACTIONS(335),
    [anon_sym_xref_COLON] = ACTIONS(335),
    [sym_emphasis] = ACTIONS(335),
    [sym_strong] = ACTIONS(335),
    [sym_monospace] = ACTIONS(333),
    [sym_highlight] = ACTIONS(333),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(333),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(333),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(333),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(333),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [anon_sym_DOT] = ACTIONS(339),
    [anon_sym_EQ] = ACTIONS(339),
    [anon_sym_EQ_EQ] = ACTIONS(339),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(339),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(339),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(339),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(337),
    [anon_sym_NOTE_COLON] = ACTIONS(337),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(337),
    [anon_sym_TIP_COLON] = ACTIONS(337),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(337),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(337),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(337),
    [anon_sym_CAUTION_COLON] = ACTIONS(337),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(337),
    [anon_sym_WARNING_COLON] = ACTIONS(337),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(337),
    [sym__unordered_list_mark] = ACTIONS(339),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(339),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(337),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(339),
    [sym__checklist_mark] = ACTIONS(339),
    [aux_sym_code_token1] = ACTIONS(337),
    [aux_sym_code_language_token1] = ACTIONS(339),
    [anon_sym_SLASH_SLASH] = ACTIONS(337),
    [aux_sym_line_breaks_token1] = ACTIONS(337),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(337),
    [anon_sym_image_COLON_COLON] = ACTIONS(337),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(337),
    [anon_sym_audio_COLON_COLON] = ACTIONS(337),
    [anon_sym_video_COLON_COLON] = ACTIONS(337),
    [aux_sym__inline_element_token1] = ACTIONS(339),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(337),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(337),
    [aux_sym_autolinks_token1] = ACTIONS(339),
    [anon_sym_link_COLON] = ACTIONS(339),
    [anon_sym_mailto_COLON] = ACTIONS(339),
    [anon_sym_LT_LT] = ACTIONS(339),
    [anon_sym_xref_COLON] = ACTIONS(339),
    [sym_emphasis] = ACTIONS(339),
    [sym_strong] = ACTIONS(339),
    [sym_monospace] = ACTIONS(337),
    [sym_highlight] = ACTIONS(337),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(337),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(337),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(337),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(337),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(337),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_EQ_EQ] = ACTIONS(343),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(343),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(343),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(343),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(341),
    [anon_sym_NOTE_COLON] = ACTIONS(341),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(341),
    [anon_sym_TIP_COLON] = ACTIONS(341),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(341),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(341),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(341),
    [anon_sym_CAUTION_COLON] = ACTIONS(341),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(341),
    [anon_sym_WARNING_COLON] = ACTIONS(341),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(341),
    [sym__unordered_list_mark] = ACTIONS(343),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(343),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(341),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(343),
    [sym__checklist_mark] = ACTIONS(343),
    [aux_sym_code_token1] = ACTIONS(341),
    [aux_sym_code_language_token1] = ACTIONS(343),
    [anon_sym_SLASH_SLASH] = ACTIONS(341),
    [aux_sym_line_breaks_token1] = ACTIONS(341),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(341),
    [anon_sym_image_COLON_COLON] = ACTIONS(341),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(341),
    [anon_sym_audio_COLON_COLON] = ACTIONS(341),
    [anon_sym_video_COLON_COLON] = ACTIONS(341),
    [aux_sym__inline_element_token1] = ACTIONS(343),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(341),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(341),
    [aux_sym_autolinks_token1] = ACTIONS(343),
    [anon_sym_link_COLON] = ACTIONS(343),
    [anon_sym_mailto_COLON] = ACTIONS(343),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_xref_COLON] = ACTIONS(343),
    [sym_emphasis] = ACTIONS(343),
    [sym_strong] = ACTIONS(343),
    [sym_monospace] = ACTIONS(341),
    [sym_highlight] = ACTIONS(341),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(341),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(341),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(341),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(341),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_DOT] = ACTIONS(347),
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(347),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(347),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(347),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(347),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(345),
    [anon_sym_NOTE_COLON] = ACTIONS(345),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(345),
    [anon_sym_TIP_COLON] = ACTIONS(345),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(345),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(345),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(345),
    [anon_sym_CAUTION_COLON] = ACTIONS(345),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(345),
    [anon_sym_WARNING_COLON] = ACTIONS(345),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(345),
    [sym__unordered_list_mark] = ACTIONS(347),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(347),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(345),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(347),
    [sym__checklist_mark] = ACTIONS(347),
    [aux_sym_code_token1] = ACTIONS(345),
    [aux_sym_code_language_token1] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(345),
    [aux_sym_line_breaks_token1] = ACTIONS(345),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(345),
    [anon_sym_image_COLON_COLON] = ACTIONS(345),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(345),
    [anon_sym_audio_COLON_COLON] = ACTIONS(345),
    [anon_sym_video_COLON_COLON] = ACTIONS(345),
    [aux_sym__inline_element_token1] = ACTIONS(347),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(345),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(345),
    [aux_sym_autolinks_token1] = ACTIONS(347),
    [anon_sym_link_COLON] = ACTIONS(347),
    [anon_sym_mailto_COLON] = ACTIONS(347),
    [anon_sym_LT_LT] = ACTIONS(347),
    [anon_sym_xref_COLON] = ACTIONS(347),
    [sym_emphasis] = ACTIONS(347),
    [sym_strong] = ACTIONS(347),
    [sym_monospace] = ACTIONS(345),
    [sym_highlight] = ACTIONS(345),
    [sym_superscript] = ACTIONS(345),
    [sym_subscript] = ACTIONS(345),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(345),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(345),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(345),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(345),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_DOT] = ACTIONS(351),
    [anon_sym_EQ] = ACTIONS(351),
    [anon_sym_EQ_EQ] = ACTIONS(351),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(351),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(351),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(351),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(349),
    [anon_sym_NOTE_COLON] = ACTIONS(349),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(349),
    [anon_sym_TIP_COLON] = ACTIONS(349),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(349),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(349),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(349),
    [anon_sym_CAUTION_COLON] = ACTIONS(349),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(349),
    [anon_sym_WARNING_COLON] = ACTIONS(349),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(349),
    [sym__unordered_list_mark] = ACTIONS(351),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(351),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(349),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(351),
    [sym__checklist_mark] = ACTIONS(351),
    [aux_sym_code_token1] = ACTIONS(349),
    [aux_sym_code_language_token1] = ACTIONS(351),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [aux_sym_line_breaks_token1] = ACTIONS(349),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(349),
    [anon_sym_image_COLON_COLON] = ACTIONS(349),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(349),
    [anon_sym_audio_COLON_COLON] = ACTIONS(349),
    [anon_sym_video_COLON_COLON] = ACTIONS(349),
    [aux_sym__inline_element_token1] = ACTIONS(351),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(349),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(349),
    [aux_sym_autolinks_token1] = ACTIONS(351),
    [anon_sym_link_COLON] = ACTIONS(351),
    [anon_sym_mailto_COLON] = ACTIONS(351),
    [anon_sym_LT_LT] = ACTIONS(351),
    [anon_sym_xref_COLON] = ACTIONS(351),
    [sym_emphasis] = ACTIONS(351),
    [sym_strong] = ACTIONS(351),
    [sym_monospace] = ACTIONS(349),
    [sym_highlight] = ACTIONS(349),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(349),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(349),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(349),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(349),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(355),
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(355),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(355),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(355),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(353),
    [anon_sym_NOTE_COLON] = ACTIONS(353),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(353),
    [anon_sym_TIP_COLON] = ACTIONS(353),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(353),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(353),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(353),
    [anon_sym_CAUTION_COLON] = ACTIONS(353),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(353),
    [anon_sym_WARNING_COLON] = ACTIONS(353),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(353),
    [sym__unordered_list_mark] = ACTIONS(355),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(355),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(353),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(355),
    [sym__checklist_mark] = ACTIONS(355),
    [aux_sym_code_token1] = ACTIONS(353),
    [aux_sym_code_language_token1] = ACTIONS(355),
    [anon_sym_SLASH_SLASH] = ACTIONS(353),
    [aux_sym_line_breaks_token1] = ACTIONS(353),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(353),
    [anon_sym_image_COLON_COLON] = ACTIONS(353),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(353),
    [anon_sym_audio_COLON_COLON] = ACTIONS(353),
    [anon_sym_video_COLON_COLON] = ACTIONS(353),
    [aux_sym__inline_element_token1] = ACTIONS(355),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(353),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(353),
    [aux_sym_autolinks_token1] = ACTIONS(355),
    [anon_sym_link_COLON] = ACTIONS(355),
    [anon_sym_mailto_COLON] = ACTIONS(355),
    [anon_sym_LT_LT] = ACTIONS(355),
    [anon_sym_xref_COLON] = ACTIONS(355),
    [sym_emphasis] = ACTIONS(355),
    [sym_strong] = ACTIONS(355),
    [sym_monospace] = ACTIONS(353),
    [sym_highlight] = ACTIONS(353),
    [sym_superscript] = ACTIONS(353),
    [sym_subscript] = ACTIONS(353),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(353),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(353),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(353),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(359),
    [anon_sym_EQ] = ACTIONS(359),
    [anon_sym_EQ_EQ] = ACTIONS(359),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(359),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(359),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(359),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(357),
    [anon_sym_NOTE_COLON] = ACTIONS(357),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(357),
    [anon_sym_TIP_COLON] = ACTIONS(357),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(357),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(357),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(357),
    [anon_sym_CAUTION_COLON] = ACTIONS(357),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(357),
    [anon_sym_WARNING_COLON] = ACTIONS(357),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(357),
    [sym__unordered_list_mark] = ACTIONS(359),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(359),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(357),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(359),
    [sym__checklist_mark] = ACTIONS(359),
    [aux_sym_code_token1] = ACTIONS(357),
    [aux_sym_code_language_token1] = ACTIONS(359),
    [anon_sym_SLASH_SLASH] = ACTIONS(357),
    [aux_sym_line_breaks_token1] = ACTIONS(357),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(357),
    [anon_sym_image_COLON_COLON] = ACTIONS(357),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(357),
    [anon_sym_audio_COLON_COLON] = ACTIONS(357),
    [anon_sym_video_COLON_COLON] = ACTIONS(357),
    [aux_sym__inline_element_token1] = ACTIONS(359),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(357),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(357),
    [aux_sym_autolinks_token1] = ACTIONS(359),
    [anon_sym_link_COLON] = ACTIONS(359),
    [anon_sym_mailto_COLON] = ACTIONS(359),
    [anon_sym_LT_LT] = ACTIONS(359),
    [anon_sym_xref_COLON] = ACTIONS(359),
    [sym_emphasis] = ACTIONS(359),
    [sym_strong] = ACTIONS(359),
    [sym_monospace] = ACTIONS(357),
    [sym_highlight] = ACTIONS(357),
    [sym_superscript] = ACTIONS(357),
    [sym_subscript] = ACTIONS(357),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(357),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(357),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(357),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(357),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(363),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(363),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(363),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(363),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(361),
    [anon_sym_NOTE_COLON] = ACTIONS(361),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(361),
    [anon_sym_TIP_COLON] = ACTIONS(361),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(361),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(361),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(361),
    [anon_sym_CAUTION_COLON] = ACTIONS(361),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(361),
    [anon_sym_WARNING_COLON] = ACTIONS(361),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(361),
    [sym__unordered_list_mark] = ACTIONS(363),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(363),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(361),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(363),
    [sym__checklist_mark] = ACTIONS(363),
    [aux_sym_code_token1] = ACTIONS(361),
    [aux_sym_code_language_token1] = ACTIONS(363),
    [anon_sym_SLASH_SLASH] = ACTIONS(361),
    [aux_sym_line_breaks_token1] = ACTIONS(361),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(361),
    [anon_sym_image_COLON_COLON] = ACTIONS(361),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(361),
    [anon_sym_audio_COLON_COLON] = ACTIONS(361),
    [anon_sym_video_COLON_COLON] = ACTIONS(361),
    [aux_sym__inline_element_token1] = ACTIONS(363),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(361),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(361),
    [aux_sym_autolinks_token1] = ACTIONS(363),
    [anon_sym_link_COLON] = ACTIONS(363),
    [anon_sym_mailto_COLON] = ACTIONS(363),
    [anon_sym_LT_LT] = ACTIONS(363),
    [anon_sym_xref_COLON] = ACTIONS(363),
    [sym_emphasis] = ACTIONS(363),
    [sym_strong] = ACTIONS(363),
    [sym_monospace] = ACTIONS(361),
    [sym_highlight] = ACTIONS(361),
    [sym_superscript] = ACTIONS(361),
    [sym_subscript] = ACTIONS(361),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(361),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(361),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(361),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(367),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(367),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(367),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(367),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(367),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(365),
    [anon_sym_NOTE_COLON] = ACTIONS(365),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(365),
    [anon_sym_TIP_COLON] = ACTIONS(365),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(365),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(365),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(365),
    [anon_sym_CAUTION_COLON] = ACTIONS(365),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(365),
    [anon_sym_WARNING_COLON] = ACTIONS(365),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(365),
    [sym__unordered_list_mark] = ACTIONS(367),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(367),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(365),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(367),
    [sym__checklist_mark] = ACTIONS(367),
    [aux_sym_code_token1] = ACTIONS(365),
    [aux_sym_code_language_token1] = ACTIONS(367),
    [anon_sym_SLASH_SLASH] = ACTIONS(365),
    [aux_sym_line_breaks_token1] = ACTIONS(365),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(365),
    [anon_sym_image_COLON_COLON] = ACTIONS(365),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(365),
    [anon_sym_audio_COLON_COLON] = ACTIONS(365),
    [anon_sym_video_COLON_COLON] = ACTIONS(365),
    [aux_sym__inline_element_token1] = ACTIONS(367),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(365),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(365),
    [aux_sym_autolinks_token1] = ACTIONS(367),
    [anon_sym_link_COLON] = ACTIONS(367),
    [anon_sym_mailto_COLON] = ACTIONS(367),
    [anon_sym_LT_LT] = ACTIONS(367),
    [anon_sym_xref_COLON] = ACTIONS(367),
    [sym_emphasis] = ACTIONS(367),
    [sym_strong] = ACTIONS(367),
    [sym_monospace] = ACTIONS(365),
    [sym_highlight] = ACTIONS(365),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(365),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(365),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(365),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(371),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(371),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(371),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(371),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(369),
    [anon_sym_NOTE_COLON] = ACTIONS(369),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(369),
    [anon_sym_TIP_COLON] = ACTIONS(369),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(369),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(369),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(369),
    [anon_sym_CAUTION_COLON] = ACTIONS(369),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(369),
    [anon_sym_WARNING_COLON] = ACTIONS(369),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(369),
    [sym__unordered_list_mark] = ACTIONS(371),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(371),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(369),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(371),
    [sym__checklist_mark] = ACTIONS(371),
    [aux_sym_code_token1] = ACTIONS(369),
    [aux_sym_code_language_token1] = ACTIONS(371),
    [anon_sym_SLASH_SLASH] = ACTIONS(369),
    [aux_sym_line_breaks_token1] = ACTIONS(369),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(369),
    [anon_sym_image_COLON_COLON] = ACTIONS(369),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(369),
    [anon_sym_audio_COLON_COLON] = ACTIONS(369),
    [anon_sym_video_COLON_COLON] = ACTIONS(369),
    [aux_sym__inline_element_token1] = ACTIONS(371),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(369),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(369),
    [aux_sym_autolinks_token1] = ACTIONS(371),
    [anon_sym_link_COLON] = ACTIONS(371),
    [anon_sym_mailto_COLON] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_xref_COLON] = ACTIONS(371),
    [sym_emphasis] = ACTIONS(371),
    [sym_strong] = ACTIONS(371),
    [sym_monospace] = ACTIONS(369),
    [sym_highlight] = ACTIONS(369),
    [sym_superscript] = ACTIONS(369),
    [sym_subscript] = ACTIONS(369),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(369),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(369),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(369),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(375),
    [anon_sym_EQ] = ACTIONS(375),
    [anon_sym_EQ_EQ] = ACTIONS(375),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(375),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(375),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(375),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(373),
    [anon_sym_NOTE_COLON] = ACTIONS(373),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(373),
    [anon_sym_TIP_COLON] = ACTIONS(373),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(373),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(373),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(373),
    [anon_sym_CAUTION_COLON] = ACTIONS(373),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(373),
    [anon_sym_WARNING_COLON] = ACTIONS(373),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(373),
    [sym__unordered_list_mark] = ACTIONS(375),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(375),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(373),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(375),
    [sym__checklist_mark] = ACTIONS(375),
    [aux_sym_code_token1] = ACTIONS(373),
    [aux_sym_code_language_token1] = ACTIONS(375),
    [anon_sym_SLASH_SLASH] = ACTIONS(373),
    [aux_sym_line_breaks_token1] = ACTIONS(373),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(373),
    [anon_sym_image_COLON_COLON] = ACTIONS(373),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(373),
    [anon_sym_audio_COLON_COLON] = ACTIONS(373),
    [anon_sym_video_COLON_COLON] = ACTIONS(373),
    [aux_sym__inline_element_token1] = ACTIONS(375),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(373),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(373),
    [aux_sym_autolinks_token1] = ACTIONS(375),
    [anon_sym_link_COLON] = ACTIONS(375),
    [anon_sym_mailto_COLON] = ACTIONS(375),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_xref_COLON] = ACTIONS(375),
    [sym_emphasis] = ACTIONS(375),
    [sym_strong] = ACTIONS(375),
    [sym_monospace] = ACTIONS(373),
    [sym_highlight] = ACTIONS(373),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(373),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(373),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(373),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(379),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(379),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(379),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(379),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(377),
    [anon_sym_NOTE_COLON] = ACTIONS(377),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(377),
    [anon_sym_TIP_COLON] = ACTIONS(377),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(377),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(377),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(377),
    [anon_sym_CAUTION_COLON] = ACTIONS(377),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(377),
    [anon_sym_WARNING_COLON] = ACTIONS(377),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(377),
    [sym__unordered_list_mark] = ACTIONS(379),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(379),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(377),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(379),
    [sym__checklist_mark] = ACTIONS(379),
    [aux_sym_code_token1] = ACTIONS(377),
    [aux_sym_code_language_token1] = ACTIONS(379),
    [anon_sym_SLASH_SLASH] = ACTIONS(377),
    [aux_sym_line_breaks_token1] = ACTIONS(377),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(377),
    [anon_sym_image_COLON_COLON] = ACTIONS(377),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(377),
    [anon_sym_audio_COLON_COLON] = ACTIONS(377),
    [anon_sym_video_COLON_COLON] = ACTIONS(377),
    [aux_sym__inline_element_token1] = ACTIONS(379),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(377),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(377),
    [aux_sym_autolinks_token1] = ACTIONS(379),
    [anon_sym_link_COLON] = ACTIONS(379),
    [anon_sym_mailto_COLON] = ACTIONS(379),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_xref_COLON] = ACTIONS(379),
    [sym_emphasis] = ACTIONS(379),
    [sym_strong] = ACTIONS(379),
    [sym_monospace] = ACTIONS(377),
    [sym_highlight] = ACTIONS(377),
    [sym_superscript] = ACTIONS(377),
    [sym_subscript] = ACTIONS(377),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(377),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(377),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(377),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(383),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(383),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(383),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(383),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(381),
    [anon_sym_NOTE_COLON] = ACTIONS(381),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(381),
    [anon_sym_TIP_COLON] = ACTIONS(381),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(381),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(381),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(381),
    [anon_sym_CAUTION_COLON] = ACTIONS(381),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(381),
    [anon_sym_WARNING_COLON] = ACTIONS(381),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(381),
    [sym__unordered_list_mark] = ACTIONS(383),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(383),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(381),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(383),
    [sym__checklist_mark] = ACTIONS(383),
    [aux_sym_code_token1] = ACTIONS(381),
    [aux_sym_code_language_token1] = ACTIONS(383),
    [anon_sym_SLASH_SLASH] = ACTIONS(381),
    [aux_sym_line_breaks_token1] = ACTIONS(381),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(381),
    [anon_sym_image_COLON_COLON] = ACTIONS(381),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(381),
    [anon_sym_audio_COLON_COLON] = ACTIONS(381),
    [anon_sym_video_COLON_COLON] = ACTIONS(381),
    [aux_sym__inline_element_token1] = ACTIONS(383),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(381),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(381),
    [aux_sym_autolinks_token1] = ACTIONS(383),
    [anon_sym_link_COLON] = ACTIONS(383),
    [anon_sym_mailto_COLON] = ACTIONS(383),
    [anon_sym_LT_LT] = ACTIONS(383),
    [anon_sym_xref_COLON] = ACTIONS(383),
    [sym_emphasis] = ACTIONS(383),
    [sym_strong] = ACTIONS(383),
    [sym_monospace] = ACTIONS(381),
    [sym_highlight] = ACTIONS(381),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(381),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(381),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(381),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(387),
    [anon_sym_EQ_EQ] = ACTIONS(387),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(387),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(387),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(387),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(385),
    [anon_sym_NOTE_COLON] = ACTIONS(385),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(385),
    [anon_sym_TIP_COLON] = ACTIONS(385),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(385),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(385),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(385),
    [anon_sym_CAUTION_COLON] = ACTIONS(385),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(385),
    [anon_sym_WARNING_COLON] = ACTIONS(385),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(385),
    [sym__unordered_list_mark] = ACTIONS(387),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(387),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(385),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(387),
    [sym__checklist_mark] = ACTIONS(387),
    [aux_sym_code_token1] = ACTIONS(385),
    [aux_sym_code_language_token1] = ACTIONS(387),
    [anon_sym_SLASH_SLASH] = ACTIONS(385),
    [aux_sym_line_breaks_token1] = ACTIONS(385),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(385),
    [anon_sym_image_COLON_COLON] = ACTIONS(385),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(385),
    [anon_sym_audio_COLON_COLON] = ACTIONS(385),
    [anon_sym_video_COLON_COLON] = ACTIONS(385),
    [aux_sym__inline_element_token1] = ACTIONS(387),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(385),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(385),
    [aux_sym_autolinks_token1] = ACTIONS(387),
    [anon_sym_link_COLON] = ACTIONS(387),
    [anon_sym_mailto_COLON] = ACTIONS(387),
    [anon_sym_LT_LT] = ACTIONS(387),
    [anon_sym_xref_COLON] = ACTIONS(387),
    [sym_emphasis] = ACTIONS(387),
    [sym_strong] = ACTIONS(387),
    [sym_monospace] = ACTIONS(385),
    [sym_highlight] = ACTIONS(385),
    [sym_superscript] = ACTIONS(385),
    [sym_subscript] = ACTIONS(385),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(385),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(385),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(385),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [anon_sym_DOT] = ACTIONS(391),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_EQ_EQ] = ACTIONS(391),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(391),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(391),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(391),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(389),
    [anon_sym_NOTE_COLON] = ACTIONS(389),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(389),
    [anon_sym_TIP_COLON] = ACTIONS(389),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(389),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(389),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(389),
    [anon_sym_CAUTION_COLON] = ACTIONS(389),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(389),
    [anon_sym_WARNING_COLON] = ACTIONS(389),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(389),
    [sym__unordered_list_mark] = ACTIONS(391),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(391),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(389),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(391),
    [sym__checklist_mark] = ACTIONS(391),
    [aux_sym_code_token1] = ACTIONS(389),
    [aux_sym_code_language_token1] = ACTIONS(391),
    [anon_sym_SLASH_SLASH] = ACTIONS(389),
    [aux_sym_line_breaks_token1] = ACTIONS(389),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(389),
    [anon_sym_image_COLON_COLON] = ACTIONS(389),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(389),
    [anon_sym_audio_COLON_COLON] = ACTIONS(389),
    [anon_sym_video_COLON_COLON] = ACTIONS(389),
    [aux_sym__inline_element_token1] = ACTIONS(391),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(389),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(389),
    [aux_sym_autolinks_token1] = ACTIONS(391),
    [anon_sym_link_COLON] = ACTIONS(391),
    [anon_sym_mailto_COLON] = ACTIONS(391),
    [anon_sym_LT_LT] = ACTIONS(391),
    [anon_sym_xref_COLON] = ACTIONS(391),
    [sym_emphasis] = ACTIONS(391),
    [sym_strong] = ACTIONS(391),
    [sym_monospace] = ACTIONS(389),
    [sym_highlight] = ACTIONS(389),
    [sym_superscript] = ACTIONS(389),
    [sym_subscript] = ACTIONS(389),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(389),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(389),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(389),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_DOT] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(395),
    [anon_sym_EQ_EQ] = ACTIONS(395),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(395),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(395),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(395),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(393),
    [anon_sym_NOTE_COLON] = ACTIONS(393),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(393),
    [anon_sym_TIP_COLON] = ACTIONS(393),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(393),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(393),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(393),
    [anon_sym_CAUTION_COLON] = ACTIONS(393),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(393),
    [anon_sym_WARNING_COLON] = ACTIONS(393),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(393),
    [sym__unordered_list_mark] = ACTIONS(395),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(395),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(393),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(395),
    [sym__checklist_mark] = ACTIONS(395),
    [aux_sym_code_token1] = ACTIONS(393),
    [aux_sym_code_language_token1] = ACTIONS(395),
    [anon_sym_SLASH_SLASH] = ACTIONS(393),
    [aux_sym_line_breaks_token1] = ACTIONS(393),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(393),
    [anon_sym_image_COLON_COLON] = ACTIONS(393),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(393),
    [anon_sym_audio_COLON_COLON] = ACTIONS(393),
    [anon_sym_video_COLON_COLON] = ACTIONS(393),
    [aux_sym__inline_element_token1] = ACTIONS(395),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(393),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(393),
    [aux_sym_autolinks_token1] = ACTIONS(395),
    [anon_sym_link_COLON] = ACTIONS(395),
    [anon_sym_mailto_COLON] = ACTIONS(395),
    [anon_sym_LT_LT] = ACTIONS(395),
    [anon_sym_xref_COLON] = ACTIONS(395),
    [sym_emphasis] = ACTIONS(395),
    [sym_strong] = ACTIONS(395),
    [sym_monospace] = ACTIONS(393),
    [sym_highlight] = ACTIONS(393),
    [sym_superscript] = ACTIONS(393),
    [sym_subscript] = ACTIONS(393),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(393),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(393),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(393),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(400), 1,
      anon_sym_LF_LF,
    ACTIONS(402), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(405), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(408), 1,
      aux_sym_autolinks_token1,
    ACTIONS(411), 1,
      anon_sym_link_COLON,
    ACTIONS(414), 1,
      anon_sym_mailto_COLON,
    ACTIONS(417), 1,
      anon_sym_LT_LT,
    ACTIONS(420), 1,
      anon_sym_xref_COLON,
    ACTIONS(426), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(429), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(61), 1,
      sym__inline_xref,
    STATE(62), 1,
      sym__xref,
    STATE(204), 1,
      sym_autolinks,
    STATE(63), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(397), 3,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      sym_emphasis,
    STATE(60), 3,
      sym_url_macro,
      sym_link_macro,
      sym_mailto,
    ACTIONS(423), 5,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(51), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_links,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(432), 30,
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
  [103] = 19,
    ACTIONS(63), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(65), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(67), 1,
      aux_sym_autolinks_token1,
    ACTIONS(69), 1,
      anon_sym_link_COLON,
    ACTIONS(71), 1,
      anon_sym_mailto_COLON,
    ACTIONS(75), 1,
      anon_sym_xref_COLON,
    ACTIONS(79), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(81), 1,
      anon_sym_pass_COLON_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LF_LF,
    ACTIONS(439), 1,
      anon_sym_LT_LT,
    STATE(61), 1,
      sym__inline_xref,
    STATE(62), 1,
      sym__xref,
    STATE(204), 1,
      sym_autolinks,
    STATE(63), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(435), 3,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      sym_emphasis,
    STATE(60), 3,
      sym_url_macro,
      sym_link_macro,
      sym_mailto,
    ACTIONS(441), 5,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(51), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_links,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(83), 30,
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
  [206] = 29,
    ACTIONS(19), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(21), 1,
      anon_sym_LBRACKNOTE_RBRACK_LF,
    ACTIONS(23), 1,
      anon_sym_TIP_COLON,
    ACTIONS(25), 1,
      anon_sym_LBRACKTIP_RBRACK_LF,
    ACTIONS(27), 1,
      anon_sym_IMPORTANT_COLON,
    ACTIONS(29), 1,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
    ACTIONS(31), 1,
      anon_sym_CAUTION_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
    ACTIONS(35), 1,
      anon_sym_WARNING_COLON,
    ACTIONS(37), 1,
      anon_sym_LBRACKWARNING_RBRACK_LF,
    ACTIONS(43), 1,
      aux_sym_code_token1,
    ACTIONS(53), 1,
      anon_sym_image_COLON_COLON,
    ACTIONS(55), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    ACTIONS(57), 1,
      anon_sym_audio_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_video_COLON_COLON,
    ACTIONS(443), 1,
      aux_sym_code_language_token1,
    STATE(82), 1,
      sym_table_start,
    STATE(209), 1,
      sym_list_item_mark,
    STATE(217), 1,
      sym__ordered_list_mark,
    ACTIONS(39), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(41), 2,
      sym__note_line,
      sym__note_block,
    STATE(42), 2,
      sym__tip,
      sym__tip_block,
    STATE(43), 2,
      sym__important,
      sym__important_block,
    STATE(44), 2,
      sym__caution,
      sym__caution_block,
    STATE(45), 2,
      sym__warning,
      sym__warning_block,
    STATE(78), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(85), 2,
      sym_description_list_item,
      aux_sym_description_list_repeat1,
    ACTIONS(41), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
    STATE(27), 13,
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
  [316] = 3,
    ACTIONS(447), 1,
      anon_sym_COLON_COLON,
    ACTIONS(445), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(449), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [372] = 2,
    ACTIONS(451), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(453), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [425] = 2,
    ACTIONS(455), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(457), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
    ACTIONS(459), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(461), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [531] = 2,
    ACTIONS(463), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(465), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
    ACTIONS(467), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(469), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [637] = 2,
    ACTIONS(471), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(473), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [690] = 2,
    ACTIONS(475), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(477), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [743] = 2,
    ACTIONS(475), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(477), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [796] = 2,
    ACTIONS(479), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(481), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [849] = 2,
    ACTIONS(483), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(485), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [902] = 2,
    ACTIONS(487), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(489), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [955] = 2,
    ACTIONS(491), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(493), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [1008] = 2,
    ACTIONS(495), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(497), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [1061] = 2,
    ACTIONS(499), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(501), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [1114] = 2,
    ACTIONS(503), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(505), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [1167] = 2,
    ACTIONS(507), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(509), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [1220] = 2,
    ACTIONS(511), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(513), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [1273] = 2,
    ACTIONS(515), 7,
      aux_sym_code_language_token1,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(517), 41,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      anon_sym_LT_LT,
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
  [1326] = 2,
    ACTIONS(521), 3,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
      aux_sym_code_language_token1,
    ACTIONS(519), 18,
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
  [1352] = 5,
    ACTIONS(523), 1,
      aux_sym_title0_token2,
    ACTIONS(525), 1,
      sym_name,
    ACTIONS(527), 1,
      sym_attr_mark,
    STATE(75), 2,
      sym_doc_attr,
      aux_sym_title0_repeat1,
    STATE(93), 7,
      sym_author_info,
      sym__doctype,
      sym__doc_description,
      sym__url_repo,
      sym__link_with_underscores,
      sym__hide_uri_scheme,
      sym__sectanchors,
  [1375] = 5,
    ACTIONS(529), 1,
      aux_sym_title0_token2,
    ACTIONS(531), 1,
      sym_name,
    ACTIONS(534), 1,
      sym_attr_mark,
    STATE(75), 2,
      sym_doc_attr,
      aux_sym_title0_repeat1,
    STATE(93), 7,
      sym_author_info,
      sym__doctype,
      sym__doc_description,
      sym__url_repo,
      sym__link_with_underscores,
      sym__hide_uri_scheme,
      sym__sectanchors,
  [1398] = 5,
    ACTIONS(525), 1,
      sym_name,
    ACTIONS(527), 1,
      sym_attr_mark,
    ACTIONS(537), 1,
      aux_sym_title0_token2,
    STATE(74), 2,
      sym_doc_attr,
      aux_sym_title0_repeat1,
    STATE(93), 7,
      sym_author_info,
      sym__doctype,
      sym__doc_description,
      sym__url_repo,
      sym__link_with_underscores,
      sym__hide_uri_scheme,
      sym__sectanchors,
  [1421] = 6,
    ACTIONS(539), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_list_item_mark,
    STATE(217), 1,
      sym__ordered_list_mark,
    ACTIONS(541), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(77), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(544), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [1444] = 6,
    ACTIONS(547), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_list_item_mark,
    STATE(217), 1,
      sym__ordered_list_mark,
    ACTIONS(39), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(77), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(41), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [1467] = 2,
    ACTIONS(549), 3,
      anon_sym_LF,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(551), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [1478] = 2,
    ACTIONS(553), 3,
      anon_sym_LF,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(555), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [1489] = 6,
    ACTIONS(557), 1,
      anon_sym_doctype,
    ACTIONS(559), 1,
      anon_sym_description,
    ACTIONS(561), 1,
      anon_sym_url_DASHrepo,
    ACTIONS(563), 1,
      anon_sym_link_DASHwith_DASHunderscores,
    ACTIONS(565), 1,
      anon_sym_hide_DASHuri_DASHscheme,
    ACTIONS(567), 1,
      anon_sym_sectanchors,
  [1508] = 5,
    ACTIONS(569), 1,
      aux_sym_block_title_token1,
    ACTIONS(571), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(101), 1,
      aux_sym_table_content_repeat1,
    STATE(132), 1,
      sym_table_content,
    STATE(162), 1,
      sym_table_end,
  [1524] = 3,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 1,
      aux_sym_code_language_token1,
    STATE(83), 2,
      sym_description_list_item,
      aux_sym_description_list_repeat1,
  [1535] = 4,
    ACTIONS(578), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(580), 1,
      aux_sym__note_block_token1,
    STATE(92), 1,
      aux_sym__note_block_repeat1,
    STATE(191), 1,
      sym_code_content,
  [1548] = 3,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 1,
      aux_sym_code_language_token1,
    STATE(83), 2,
      sym_description_list_item,
      aux_sym_description_list_repeat1,
  [1559] = 1,
    ACTIONS(586), 4,
      anon_sym_article,
      anon_sym_book,
      anon_sym_manpage,
      anon_sym_inline,
  [1566] = 3,
    ACTIONS(588), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(590), 1,
      aux_sym__note_block_token1,
    STATE(114), 1,
      aux_sym__note_block_repeat1,
  [1576] = 3,
    ACTIONS(592), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(594), 1,
      aux_sym__note_block_token1,
    STATE(88), 1,
      aux_sym__note_block_repeat1,
  [1586] = 3,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    ACTIONS(599), 1,
      aux_sym_audio_url_token1,
    STATE(173), 1,
      sym_audio_title,
  [1596] = 1,
    ACTIONS(601), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1602] = 3,
    ACTIONS(599), 1,
      aux_sym_audio_url_token1,
    ACTIONS(603), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym_audio_title,
  [1612] = 3,
    ACTIONS(605), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    STATE(88), 1,
      aux_sym__note_block_repeat1,
  [1622] = 2,
    ACTIONS(609), 1,
      aux_sym_title0_token2,
    ACTIONS(611), 2,
      sym_name,
      sym_attr_mark,
  [1630] = 3,
    ACTIONS(613), 1,
      anon_sym_LBRACK,
    ACTIONS(615), 1,
      aux_sym_audio_url_token1,
    STATE(189), 1,
      sym_audio_url,
  [1640] = 2,
    ACTIONS(617), 1,
      aux_sym_title0_token2,
    ACTIONS(619), 2,
      sym_name,
      sym_attr_mark,
  [1648] = 2,
    ACTIONS(621), 1,
      aux_sym_title0_token2,
    ACTIONS(623), 2,
      sym_name,
      sym_attr_mark,
  [1656] = 3,
    ACTIONS(625), 1,
      aux_sym_block_title_token1,
    ACTIONS(628), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(97), 1,
      aux_sym_table_content_repeat1,
  [1666] = 3,
    ACTIONS(630), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(632), 1,
      aux_sym__note_block_token1,
    STATE(119), 1,
      aux_sym__note_block_repeat1,
  [1676] = 3,
    ACTIONS(634), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(636), 1,
      aux_sym__note_block_token1,
    STATE(117), 1,
      aux_sym__note_block_repeat1,
  [1686] = 3,
    ACTIONS(638), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(640), 1,
      aux_sym__note_block_token1,
    STATE(115), 1,
      aux_sym__note_block_repeat1,
  [1696] = 3,
    ACTIONS(642), 1,
      aux_sym_block_title_token1,
    ACTIONS(644), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(97), 1,
      aux_sym_table_content_repeat1,
  [1706] = 3,
    ACTIONS(599), 1,
      aux_sym_audio_url_token1,
    ACTIONS(646), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_audio_title,
  [1716] = 2,
    ACTIONS(648), 1,
      aux_sym_title0_token2,
    ACTIONS(650), 2,
      sym_name,
      sym_attr_mark,
  [1724] = 3,
    ACTIONS(652), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(654), 1,
      aux_sym__note_block_token1,
    STATE(112), 1,
      aux_sym__note_block_repeat1,
  [1734] = 3,
    ACTIONS(615), 1,
      aux_sym_audio_url_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    STATE(190), 1,
      sym_audio_url,
  [1744] = 2,
    ACTIONS(658), 1,
      aux_sym_title0_token2,
    ACTIONS(660), 2,
      sym_name,
      sym_attr_mark,
  [1752] = 2,
    ACTIONS(662), 1,
      aux_sym_title0_token2,
    ACTIONS(664), 2,
      sym_name,
      sym_attr_mark,
  [1760] = 2,
    ACTIONS(666), 1,
      aux_sym_title0_token2,
    ACTIONS(668), 2,
      sym_name,
      sym_attr_mark,
  [1768] = 2,
    ACTIONS(670), 1,
      aux_sym_title0_token2,
    ACTIONS(672), 2,
      sym_name,
      sym_attr_mark,
  [1776] = 2,
    ACTIONS(674), 1,
      aux_sym_title0_token2,
    ACTIONS(676), 2,
      sym_name,
      sym_attr_mark,
  [1784] = 2,
    ACTIONS(678), 1,
      aux_sym_title0_token2,
    ACTIONS(680), 2,
      sym_name,
      sym_attr_mark,
  [1792] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(682), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(88), 1,
      aux_sym__note_block_repeat1,
  [1802] = 2,
    ACTIONS(684), 1,
      aux_sym_title0_token2,
    ACTIONS(686), 2,
      sym_name,
      sym_attr_mark,
  [1810] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(688), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(88), 1,
      aux_sym__note_block_repeat1,
  [1820] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(690), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(88), 1,
      aux_sym__note_block_repeat1,
  [1830] = 2,
    ACTIONS(692), 1,
      aux_sym_title0_token2,
    ACTIONS(694), 2,
      sym_name,
      sym_attr_mark,
  [1838] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(696), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(88), 1,
      aux_sym__note_block_repeat1,
  [1848] = 2,
    ACTIONS(698), 1,
      aux_sym_title0_token2,
    ACTIONS(700), 2,
      sym_name,
      sym_attr_mark,
  [1856] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(702), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(88), 1,
      aux_sym__note_block_repeat1,
  [1866] = 3,
    ACTIONS(599), 1,
      aux_sym_audio_url_token1,
    ACTIONS(704), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_audio_title,
  [1876] = 2,
    ACTIONS(706), 1,
      aux_sym_code_language_token1,
    STATE(170), 1,
      sym_passthrough_content,
  [1883] = 2,
    ACTIONS(708), 1,
      anon_sym_LT,
    ACTIONS(710), 1,
      anon_sym_LF,
  [1890] = 2,
    ACTIONS(712), 1,
      aux_sym_autolinks_token1,
    STATE(230), 1,
      sym_autolinks,
  [1897] = 2,
    ACTIONS(615), 1,
      aux_sym_audio_url_token1,
    STATE(192), 1,
      sym_audio_url,
  [1904] = 2,
    ACTIONS(714), 1,
      anon_sym_,
    ACTIONS(716), 1,
      sym_name,
  [1911] = 2,
    ACTIONS(718), 1,
      aux_sym_code_language_token1,
    STATE(195), 1,
      sym_code_language,
  [1918] = 2,
    ACTIONS(720), 1,
      aux_sym_audio_url_token1,
    STATE(165), 1,
      sym_audio_title,
  [1925] = 1,
    ACTIONS(722), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1930] = 2,
    ACTIONS(724), 1,
      anon_sym_LT,
    ACTIONS(726), 1,
      anon_sym_LF,
  [1937] = 2,
    ACTIONS(728), 1,
      anon_sym_LT,
    ACTIONS(730), 1,
      anon_sym_LF,
  [1944] = 2,
    ACTIONS(712), 1,
      aux_sym_autolinks_token1,
    STATE(221), 1,
      sym_autolinks,
  [1951] = 2,
    ACTIONS(571), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(158), 1,
      sym_table_end,
  [1958] = 2,
    ACTIONS(732), 1,
      anon_sym_RBRACK,
    ACTIONS(734), 1,
      aux_sym_link_macro_token2,
  [1965] = 2,
    ACTIONS(599), 1,
      aux_sym_audio_url_token1,
    STATE(177), 1,
      sym_audio_title,
  [1972] = 2,
    ACTIONS(736), 1,
      aux_sym_block_title_token1,
    ACTIONS(738), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1979] = 2,
    ACTIONS(599), 1,
      aux_sym_audio_url_token1,
    STATE(178), 1,
      sym_audio_title,
  [1986] = 2,
    ACTIONS(740), 1,
      aux_sym_block_title_token1,
    STATE(80), 1,
      sym_list_item_content,
  [1993] = 1,
    ACTIONS(742), 2,
      anon_sym_LF,
      aux_sym_code_language_token1,
  [1998] = 1,
    ACTIONS(744), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [2003] = 2,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
    ACTIONS(748), 1,
      sym_kbd_content,
  [2010] = 2,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_GT_GT,
  [2017] = 2,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    ACTIONS(756), 1,
      sym_footnote_content,
  [2024] = 2,
    ACTIONS(758), 1,
      anon_sym_,
    ACTIONS(760), 1,
      sym_name,
  [2031] = 1,
    ACTIONS(762), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [2036] = 2,
    ACTIONS(764), 1,
      aux_sym_code_language_token1,
    STATE(141), 1,
      sym_xref_url,
  [2043] = 2,
    ACTIONS(764), 1,
      aux_sym_code_language_token1,
    STATE(175), 1,
      sym_xref_url,
  [2050] = 2,
    ACTIONS(706), 1,
      aux_sym_code_language_token1,
    STATE(166), 1,
      sym_passthrough_content,
  [2057] = 2,
    ACTIONS(766), 1,
      anon_sym_,
    ACTIONS(768), 1,
      sym_name,
  [2064] = 1,
    ACTIONS(770), 1,
      aux_sym_title0_token1,
  [2068] = 1,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
  [2072] = 1,
    ACTIONS(774), 1,
      anon_sym_RBRACK,
  [2076] = 1,
    ACTIONS(776), 1,
      anon_sym_LF,
  [2080] = 1,
    ACTIONS(778), 1,
      anon_sym_,
  [2084] = 1,
    ACTIONS(780), 1,
      anon_sym_LF,
  [2088] = 1,
    ACTIONS(782), 1,
      anon_sym_RBRACK,
  [2092] = 1,
    ACTIONS(784), 1,
      aux_sym_link_macro_token2,
  [2096] = 1,
    ACTIONS(786), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2100] = 1,
    ACTIONS(788), 1,
      anon_sym_LF,
  [2104] = 1,
    ACTIONS(790), 1,
      anon_sym_LF,
  [2108] = 1,
    ACTIONS(792), 1,
      aux_sym_block_title_token1,
  [2112] = 1,
    ACTIONS(794), 1,
      aux_sym_url_macro_token1,
  [2116] = 1,
    ACTIONS(796), 1,
      anon_sym_LF,
  [2120] = 1,
    ACTIONS(798), 1,
      anon_sym_LF,
  [2124] = 1,
    ACTIONS(447), 1,
      anon_sym_COLON_COLON,
  [2128] = 1,
    ACTIONS(800), 1,
      anon_sym_RBRACK_LF,
  [2132] = 1,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
  [2136] = 1,
    ACTIONS(804), 1,
      anon_sym_LF,
  [2140] = 1,
    ACTIONS(806), 1,
      anon_sym_LF,
  [2144] = 1,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
  [2148] = 1,
    ACTIONS(810), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2152] = 1,
    ACTIONS(812), 1,
      anon_sym_LF,
  [2156] = 1,
    ACTIONS(814), 1,
      anon_sym_LF,
  [2160] = 1,
    ACTIONS(816), 1,
      anon_sym_RBRACK,
  [2164] = 1,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
  [2168] = 1,
    ACTIONS(820), 1,
      anon_sym_LBRACK,
  [2172] = 1,
    ACTIONS(822), 1,
      anon_sym_RBRACK,
  [2176] = 1,
    ACTIONS(824), 1,
      anon_sym_GT_GT,
  [2180] = 1,
    ACTIONS(826), 1,
      anon_sym_RBRACK,
  [2184] = 1,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
  [2188] = 1,
    ACTIONS(830), 1,
      anon_sym_LBRACK,
  [2192] = 1,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
  [2196] = 1,
    ACTIONS(834), 1,
      sym_attr_mark,
  [2200] = 1,
    ACTIONS(836), 1,
      sym_attr_mark,
  [2204] = 1,
    ACTIONS(838), 1,
      sym_attr_mark,
  [2208] = 1,
    ACTIONS(840), 1,
      sym_attr_mark,
  [2212] = 1,
    ACTIONS(842), 1,
      sym_attr_mark,
  [2216] = 1,
    ACTIONS(844), 1,
      sym_attr_mark,
  [2220] = 1,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
  [2224] = 1,
    ACTIONS(848), 1,
      anon_sym_LBRACK,
  [2228] = 1,
    ACTIONS(850), 1,
      anon_sym_LBRACK,
  [2232] = 1,
    ACTIONS(852), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2236] = 1,
    ACTIONS(854), 1,
      anon_sym_LBRACK,
  [2240] = 1,
    ACTIONS(856), 1,
      anon_sym_LBRACK,
  [2244] = 1,
    ACTIONS(858), 1,
      aux_sym__doc_description_token1,
  [2248] = 1,
    ACTIONS(860), 1,
      anon_sym_RBRACK_LF,
  [2252] = 1,
    ACTIONS(862), 1,
      anon_sym_LF,
  [2256] = 1,
    ACTIONS(864), 1,
      anon_sym_RBRACK_LF,
  [2260] = 1,
    ACTIONS(866), 1,
      aux_sym_title0_token1,
  [2264] = 1,
    ACTIONS(868), 1,
      anon_sym_LF,
  [2268] = 1,
    ACTIONS(870), 1,
      aux_sym_title0_token1,
  [2272] = 1,
    ACTIONS(872), 1,
      aux_sym_title0_token1,
  [2276] = 1,
    ACTIONS(874), 1,
      aux_sym_title0_token1,
  [2280] = 1,
    ACTIONS(876), 1,
      aux_sym_title0_token1,
  [2284] = 1,
    ACTIONS(878), 1,
      anon_sym_LBRACK,
  [2288] = 1,
    ACTIONS(880), 1,
      anon_sym_,
  [2292] = 1,
    ACTIONS(882), 1,
      anon_sym_,
  [2296] = 1,
    ACTIONS(884), 1,
      aux_sym__doc_description_token1,
  [2300] = 1,
    ACTIONS(886), 1,
      anon_sym_,
  [2304] = 1,
    ACTIONS(888), 1,
      anon_sym_,
  [2308] = 1,
    ACTIONS(890), 1,
      anon_sym_LF,
  [2312] = 1,
    ACTIONS(892), 1,
      anon_sym_LF,
  [2316] = 1,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
  [2320] = 1,
    ACTIONS(896), 1,
      aux_sym_mailto_token1,
  [2324] = 1,
    ACTIONS(898), 1,
      aux_sym_link_macro_token1,
  [2328] = 1,
    ACTIONS(900), 1,
      aux_sym_title0_token1,
  [2332] = 1,
    ACTIONS(714), 1,
      anon_sym_,
  [2336] = 1,
    ACTIONS(902), 1,
      anon_sym_,
  [2340] = 1,
    ACTIONS(904), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2344] = 1,
    ACTIONS(906), 1,
      anon_sym_LF,
  [2348] = 1,
    ACTIONS(908), 1,
      aux_sym_block_title_token1,
  [2352] = 1,
    ACTIONS(910), 1,
      anon_sym_LF,
  [2356] = 1,
    ACTIONS(912), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2360] = 1,
    ACTIONS(914), 1,
      aux_sym_block_title_token1,
  [2364] = 1,
    ACTIONS(916), 1,
      sym_email,
  [2368] = 1,
    ACTIONS(918), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2372] = 1,
    ACTIONS(920), 1,
      aux_sym_block_title_token1,
  [2376] = 1,
    ACTIONS(922), 1,
      anon_sym_,
  [2380] = 1,
    ACTIONS(924), 1,
      anon_sym_LF,
  [2384] = 1,
    ACTIONS(926), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2388] = 1,
    ACTIONS(928), 1,
      anon_sym_LF,
  [2392] = 1,
    ACTIONS(930), 1,
      aux_sym_block_title_token1,
  [2396] = 1,
    ACTIONS(932), 1,
      anon_sym_GT,
  [2400] = 1,
    ACTIONS(934), 1,
      sym_email,
  [2404] = 1,
    ACTIONS(936), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2408] = 1,
    ACTIONS(938), 1,
      aux_sym_block_title_token1,
  [2412] = 1,
    ACTIONS(940), 1,
      anon_sym_,
  [2416] = 1,
    ACTIONS(942), 1,
      anon_sym_,
  [2420] = 1,
    ACTIONS(944), 1,
      anon_sym_LF,
  [2424] = 1,
    ACTIONS(946), 1,
      anon_sym_GT,
  [2428] = 1,
    ACTIONS(948), 1,
      sym_email,
  [2432] = 1,
    ACTIONS(950), 1,
      anon_sym_,
  [2436] = 1,
    ACTIONS(952), 1,
      anon_sym_,
  [2440] = 1,
    ACTIONS(954), 1,
      anon_sym_LF,
  [2444] = 1,
    ACTIONS(956), 1,
      anon_sym_GT,
  [2448] = 1,
    ACTIONS(958), 1,
      anon_sym_,
  [2452] = 1,
    ACTIONS(960), 1,
      anon_sym_LF,
  [2456] = 1,
    ACTIONS(962), 1,
      anon_sym_,
  [2460] = 1,
    ACTIONS(722), 1,
      anon_sym_RBRACK_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(51)] = 0,
  [SMALL_STATE(52)] = 103,
  [SMALL_STATE(53)] = 206,
  [SMALL_STATE(54)] = 316,
  [SMALL_STATE(55)] = 372,
  [SMALL_STATE(56)] = 425,
  [SMALL_STATE(57)] = 478,
  [SMALL_STATE(58)] = 531,
  [SMALL_STATE(59)] = 584,
  [SMALL_STATE(60)] = 637,
  [SMALL_STATE(61)] = 690,
  [SMALL_STATE(62)] = 743,
  [SMALL_STATE(63)] = 796,
  [SMALL_STATE(64)] = 849,
  [SMALL_STATE(65)] = 902,
  [SMALL_STATE(66)] = 955,
  [SMALL_STATE(67)] = 1008,
  [SMALL_STATE(68)] = 1061,
  [SMALL_STATE(69)] = 1114,
  [SMALL_STATE(70)] = 1167,
  [SMALL_STATE(71)] = 1220,
  [SMALL_STATE(72)] = 1273,
  [SMALL_STATE(73)] = 1326,
  [SMALL_STATE(74)] = 1352,
  [SMALL_STATE(75)] = 1375,
  [SMALL_STATE(76)] = 1398,
  [SMALL_STATE(77)] = 1421,
  [SMALL_STATE(78)] = 1444,
  [SMALL_STATE(79)] = 1467,
  [SMALL_STATE(80)] = 1478,
  [SMALL_STATE(81)] = 1489,
  [SMALL_STATE(82)] = 1508,
  [SMALL_STATE(83)] = 1524,
  [SMALL_STATE(84)] = 1535,
  [SMALL_STATE(85)] = 1548,
  [SMALL_STATE(86)] = 1559,
  [SMALL_STATE(87)] = 1566,
  [SMALL_STATE(88)] = 1576,
  [SMALL_STATE(89)] = 1586,
  [SMALL_STATE(90)] = 1596,
  [SMALL_STATE(91)] = 1602,
  [SMALL_STATE(92)] = 1612,
  [SMALL_STATE(93)] = 1622,
  [SMALL_STATE(94)] = 1630,
  [SMALL_STATE(95)] = 1640,
  [SMALL_STATE(96)] = 1648,
  [SMALL_STATE(97)] = 1656,
  [SMALL_STATE(98)] = 1666,
  [SMALL_STATE(99)] = 1676,
  [SMALL_STATE(100)] = 1686,
  [SMALL_STATE(101)] = 1696,
  [SMALL_STATE(102)] = 1706,
  [SMALL_STATE(103)] = 1716,
  [SMALL_STATE(104)] = 1724,
  [SMALL_STATE(105)] = 1734,
  [SMALL_STATE(106)] = 1744,
  [SMALL_STATE(107)] = 1752,
  [SMALL_STATE(108)] = 1760,
  [SMALL_STATE(109)] = 1768,
  [SMALL_STATE(110)] = 1776,
  [SMALL_STATE(111)] = 1784,
  [SMALL_STATE(112)] = 1792,
  [SMALL_STATE(113)] = 1802,
  [SMALL_STATE(114)] = 1810,
  [SMALL_STATE(115)] = 1820,
  [SMALL_STATE(116)] = 1830,
  [SMALL_STATE(117)] = 1838,
  [SMALL_STATE(118)] = 1848,
  [SMALL_STATE(119)] = 1856,
  [SMALL_STATE(120)] = 1866,
  [SMALL_STATE(121)] = 1876,
  [SMALL_STATE(122)] = 1883,
  [SMALL_STATE(123)] = 1890,
  [SMALL_STATE(124)] = 1897,
  [SMALL_STATE(125)] = 1904,
  [SMALL_STATE(126)] = 1911,
  [SMALL_STATE(127)] = 1918,
  [SMALL_STATE(128)] = 1925,
  [SMALL_STATE(129)] = 1930,
  [SMALL_STATE(130)] = 1937,
  [SMALL_STATE(131)] = 1944,
  [SMALL_STATE(132)] = 1951,
  [SMALL_STATE(133)] = 1958,
  [SMALL_STATE(134)] = 1965,
  [SMALL_STATE(135)] = 1972,
  [SMALL_STATE(136)] = 1979,
  [SMALL_STATE(137)] = 1986,
  [SMALL_STATE(138)] = 1993,
  [SMALL_STATE(139)] = 1998,
  [SMALL_STATE(140)] = 2003,
  [SMALL_STATE(141)] = 2010,
  [SMALL_STATE(142)] = 2017,
  [SMALL_STATE(143)] = 2024,
  [SMALL_STATE(144)] = 2031,
  [SMALL_STATE(145)] = 2036,
  [SMALL_STATE(146)] = 2043,
  [SMALL_STATE(147)] = 2050,
  [SMALL_STATE(148)] = 2057,
  [SMALL_STATE(149)] = 2064,
  [SMALL_STATE(150)] = 2068,
  [SMALL_STATE(151)] = 2072,
  [SMALL_STATE(152)] = 2076,
  [SMALL_STATE(153)] = 2080,
  [SMALL_STATE(154)] = 2084,
  [SMALL_STATE(155)] = 2088,
  [SMALL_STATE(156)] = 2092,
  [SMALL_STATE(157)] = 2096,
  [SMALL_STATE(158)] = 2100,
  [SMALL_STATE(159)] = 2104,
  [SMALL_STATE(160)] = 2108,
  [SMALL_STATE(161)] = 2112,
  [SMALL_STATE(162)] = 2116,
  [SMALL_STATE(163)] = 2120,
  [SMALL_STATE(164)] = 2124,
  [SMALL_STATE(165)] = 2128,
  [SMALL_STATE(166)] = 2132,
  [SMALL_STATE(167)] = 2136,
  [SMALL_STATE(168)] = 2140,
  [SMALL_STATE(169)] = 2144,
  [SMALL_STATE(170)] = 2148,
  [SMALL_STATE(171)] = 2152,
  [SMALL_STATE(172)] = 2156,
  [SMALL_STATE(173)] = 2160,
  [SMALL_STATE(174)] = 2164,
  [SMALL_STATE(175)] = 2168,
  [SMALL_STATE(176)] = 2172,
  [SMALL_STATE(177)] = 2176,
  [SMALL_STATE(178)] = 2180,
  [SMALL_STATE(179)] = 2184,
  [SMALL_STATE(180)] = 2188,
  [SMALL_STATE(181)] = 2192,
  [SMALL_STATE(182)] = 2196,
  [SMALL_STATE(183)] = 2200,
  [SMALL_STATE(184)] = 2204,
  [SMALL_STATE(185)] = 2208,
  [SMALL_STATE(186)] = 2212,
  [SMALL_STATE(187)] = 2216,
  [SMALL_STATE(188)] = 2220,
  [SMALL_STATE(189)] = 2224,
  [SMALL_STATE(190)] = 2228,
  [SMALL_STATE(191)] = 2232,
  [SMALL_STATE(192)] = 2236,
  [SMALL_STATE(193)] = 2240,
  [SMALL_STATE(194)] = 2244,
  [SMALL_STATE(195)] = 2248,
  [SMALL_STATE(196)] = 2252,
  [SMALL_STATE(197)] = 2256,
  [SMALL_STATE(198)] = 2260,
  [SMALL_STATE(199)] = 2264,
  [SMALL_STATE(200)] = 2268,
  [SMALL_STATE(201)] = 2272,
  [SMALL_STATE(202)] = 2276,
  [SMALL_STATE(203)] = 2280,
  [SMALL_STATE(204)] = 2284,
  [SMALL_STATE(205)] = 2288,
  [SMALL_STATE(206)] = 2292,
  [SMALL_STATE(207)] = 2296,
  [SMALL_STATE(208)] = 2300,
  [SMALL_STATE(209)] = 2304,
  [SMALL_STATE(210)] = 2308,
  [SMALL_STATE(211)] = 2312,
  [SMALL_STATE(212)] = 2316,
  [SMALL_STATE(213)] = 2320,
  [SMALL_STATE(214)] = 2324,
  [SMALL_STATE(215)] = 2328,
  [SMALL_STATE(216)] = 2332,
  [SMALL_STATE(217)] = 2336,
  [SMALL_STATE(218)] = 2340,
  [SMALL_STATE(219)] = 2344,
  [SMALL_STATE(220)] = 2348,
  [SMALL_STATE(221)] = 2352,
  [SMALL_STATE(222)] = 2356,
  [SMALL_STATE(223)] = 2360,
  [SMALL_STATE(224)] = 2364,
  [SMALL_STATE(225)] = 2368,
  [SMALL_STATE(226)] = 2372,
  [SMALL_STATE(227)] = 2376,
  [SMALL_STATE(228)] = 2380,
  [SMALL_STATE(229)] = 2384,
  [SMALL_STATE(230)] = 2388,
  [SMALL_STATE(231)] = 2392,
  [SMALL_STATE(232)] = 2396,
  [SMALL_STATE(233)] = 2400,
  [SMALL_STATE(234)] = 2404,
  [SMALL_STATE(235)] = 2408,
  [SMALL_STATE(236)] = 2412,
  [SMALL_STATE(237)] = 2416,
  [SMALL_STATE(238)] = 2420,
  [SMALL_STATE(239)] = 2424,
  [SMALL_STATE(240)] = 2428,
  [SMALL_STATE(241)] = 2432,
  [SMALL_STATE(242)] = 2436,
  [SMALL_STATE(243)] = 2440,
  [SMALL_STATE(244)] = 2444,
  [SMALL_STATE(245)] = 2448,
  [SMALL_STATE(246)] = 2452,
  [SMALL_STATE(247)] = 2456,
  [SMALL_STATE(248)] = 2460,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(160),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(247),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(245),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(242),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(241),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(237),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(236),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(235),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(234),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(231),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(229),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(226),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(225),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(223),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(222),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(220),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(218),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(217),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(217),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(215),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(135),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(144),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(214),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(213),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(145),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title5, 3, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title5, 3, .production_id = 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title4, 3, .production_id = 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title4, 3, .production_id = 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title3, 3, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title3, 3, .production_id = 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title2, 3, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title2, 3, .production_id = 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 3, .production_id = 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title1, 3, .production_id = 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 6),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 6),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 6),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 5, .production_id = 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 5, .production_id = 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 6),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 6),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 9),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 9),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 7),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 7),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 4, .production_id = 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 4, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 7),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(51),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(140),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(142),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(144),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(214),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(213),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(145),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(146),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(51),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(121),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(147),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(70),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_macro, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_macro, 4),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailto, 5),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailto, 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 6),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 6),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_links, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_links, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 6),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 6),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_macro, 5, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_macro, 5, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(153),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(81),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(217),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(217),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_list_repeat1, 2),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_list_repeat1, 2), SHIFT_REPEAT(164),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(88),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_content, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_attr, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 10),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 10),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 7),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 7),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(97),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_content, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 9),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 9),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 8),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 8),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hide_uri_scheme, 4),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hide_uri_scheme, 4),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sectanchors, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sectanchors, 4),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 5),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 5),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doc_description, 5, .production_id = 10),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doc_description, 5, .production_id = 10),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_with_underscores, 5),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_with_underscores, 5),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 6),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 6),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doctype, 6),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype, 6),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_repo, 6),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_repo, 6),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_start, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list_item, 4, .production_id = 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolinks, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [894] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_mark, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
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
