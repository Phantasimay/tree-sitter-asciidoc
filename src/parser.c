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
#define STATE_COUNT 253
#define LARGE_STATE_COUNT 51
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 3
#define TOKEN_COUNT 121
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 12

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
  anon_sym_page_DASHlayout = 22,
  anon_sym_docs = 23,
  anon_sym_landscape = 24,
  anon_sym_portrait = 25,
  anon_sym_description = 26,
  aux_sym__doc_description_token1 = 27,
  anon_sym_url_DASHrepo = 28,
  anon_sym_link_DASHwith_DASHunderscores = 29,
  anon_sym_hide_DASHuri_DASHscheme = 30,
  anon_sym_sectanchors = 31,
  sym_attr_mark = 32,
  aux_sym_attr_name_token1 = 33,
  anon_sym_NOTE_COLON = 34,
  anon_sym_LBRACKNOTE_RBRACK_LF = 35,
  anon_sym_DASH_DASH_DASH_DASH_LF = 36,
  aux_sym__note_block_token1 = 37,
  anon_sym_TIP_COLON = 38,
  anon_sym_LBRACKTIP_RBRACK_LF = 39,
  anon_sym_IMPORTANT_COLON = 40,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 41,
  anon_sym_CAUTION_COLON = 42,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 43,
  anon_sym_WARNING_COLON = 44,
  anon_sym_LBRACKWARNING_RBRACK_LF = 45,
  sym__unordered_list_mark = 46,
  aux_sym__ordered_list_mark_token1 = 47,
  aux_sym__ordered_list_mark_token2 = 48,
  aux_sym__ordered_list_mark_token3 = 49,
  sym__checklist_mark = 50,
  aux_sym_code_token1 = 51,
  anon_sym_RBRACK_LF = 52,
  aux_sym_code_language_token1 = 53,
  anon_sym_SLASH_SLASH = 54,
  aux_sym_line_breaks_token1 = 55,
  anon_sym_LT_LT_LT_LF_LF = 56,
  anon_sym_image_COLON_COLON = 57,
  anon_sym_LBRACK = 58,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 59,
  anon_sym_COLON_COLON = 60,
  anon_sym_audio_COLON_COLON = 61,
  anon_sym_RBRACK = 62,
  aux_sym_audio_url_token1 = 63,
  anon_sym_video_COLON_COLON = 64,
  anon_sym_LF_LF = 65,
  aux_sym__inline_element_token1 = 66,
  anon_sym_kbd_COLON_LBRACK = 67,
  sym_kbd_content = 68,
  anon_sym_footnote_COLON_LBRACK = 69,
  sym_footnote_content = 70,
  aux_sym_autolinks_token1 = 71,
  aux_sym_url_macro_token1 = 72,
  anon_sym_link_COLON = 73,
  aux_sym_link_macro_token1 = 74,
  aux_sym_link_macro_token2 = 75,
  anon_sym_mailto_COLON = 76,
  aux_sym_mailto_token1 = 77,
  anon_sym_LT_LT = 78,
  anon_sym_COMMA = 79,
  anon_sym_GT_GT = 80,
  anon_sym_xref_COLON = 81,
  sym_emphasis = 82,
  sym_strong = 83,
  sym_monospace = 84,
  sym_highlight = 85,
  sym_superscript = 86,
  sym_subscript = 87,
  anon_sym_PLUS_PLUS_PLUS = 88,
  anon_sym_pass_COLON_LBRACK = 89,
  sym__word = 90,
  anon_sym_LBRACEblank_RBRACE = 91,
  anon_sym_LBRACEempty_RBRACE = 92,
  anon_sym_LBRACEsp_RBRACE = 93,
  anon_sym_LBRACEnbsp_RBRACE = 94,
  anon_sym_LBRACEzwsp_RBRACE = 95,
  anon_sym_LBRACEwj_RBRACE = 96,
  anon_sym_LBRACEapos_RBRACE = 97,
  anon_sym_LBRACEquot_RBRACE = 98,
  anon_sym_LBRACElsquo_RBRACE = 99,
  anon_sym_LBRACErsquo_RBRACE = 100,
  anon_sym_LBRACEldquo_RBRACE = 101,
  anon_sym_LBRACErdquo_RBRACE = 102,
  anon_sym_LBRACEdeg_RBRACE = 103,
  anon_sym_LBRACEplus_RBRACE = 104,
  anon_sym_LBRACEbrvbar_RBRACE = 105,
  anon_sym_LBRACEvbar_RBRACE = 106,
  anon_sym_LBRACEamp_RBRACE = 107,
  anon_sym_LBRACElt_RBRACE = 108,
  anon_sym_LBRACEgt_RBRACE = 109,
  anon_sym_LBRACEstartsb_RBRACE = 110,
  anon_sym_LBRACEendsb_RBRACE = 111,
  anon_sym_LBRACEcaret_RBRACE = 112,
  anon_sym_LBRACEasterisk_RBRACE = 113,
  anon_sym_LBRACEtilde_RBRACE = 114,
  anon_sym_LBRACEbackslash_RBRACE = 115,
  anon_sym_LBRACEbacktick_RBRACE = 116,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 117,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 118,
  anon_sym_LBRACEcpp_RBRACE = 119,
  anon_sym_LBRACEpp_RBRACE = 120,
  sym_document = 121,
  sym__block = 122,
  sym__titled_block = 123,
  sym_block_title = 124,
  sym_title0 = 125,
  sym_title1 = 126,
  sym_title2 = 127,
  sym_title3 = 128,
  sym_title4 = 129,
  sym_title5 = 130,
  sym_author_info = 131,
  sym__doctype = 132,
  sym__page_layout = 133,
  sym__doc_description = 134,
  sym__url_repo = 135,
  sym__link_with_underscores = 136,
  sym__hide_uri_scheme = 137,
  sym__sectanchors = 138,
  sym_doc_attr = 139,
  sym__admonitions = 140,
  sym_note = 141,
  sym__note_line = 142,
  sym__note_block = 143,
  sym_tip = 144,
  sym__tip = 145,
  sym__tip_block = 146,
  sym_important = 147,
  sym__important = 148,
  sym__important_block = 149,
  sym_caution = 150,
  sym__caution = 151,
  sym__caution_block = 152,
  sym_warning = 153,
  sym__warning = 154,
  sym__warning_block = 155,
  sym_list = 156,
  sym_list_item = 157,
  sym__ordered_list_mark = 158,
  sym_code = 159,
  sym_code_language = 160,
  sym_code_content = 161,
  sym_comment = 162,
  sym_line_breaks = 163,
  sym_page_breaks = 164,
  sym_image = 165,
  sym_table = 166,
  sym_table_start = 167,
  sym_table_content = 168,
  sym_table_end = 169,
  sym_description_list = 170,
  sym_description_list_item = 171,
  sym_audio = 172,
  sym_audio_url = 173,
  sym_audio_title = 174,
  sym_video = 175,
  sym_paragraph = 176,
  sym__inline_element = 177,
  sym_kbd = 178,
  sym_footnote = 179,
  sym_links = 180,
  sym_autolinks = 181,
  sym_url_macro = 182,
  sym_link_macro = 183,
  sym_mailto = 184,
  sym_xref = 185,
  sym__inline_xref = 186,
  sym__xref = 187,
  sym_xref_url = 188,
  sym_passthrough = 189,
  sym__passthrough_plus = 190,
  sym__passthrough_cmd = 191,
  sym_passthrough_content = 192,
  sym_replacement = 193,
  aux_sym_document_repeat1 = 194,
  aux_sym_title0_repeat1 = 195,
  aux_sym__note_block_repeat1 = 196,
  aux_sym_list_repeat1 = 197,
  aux_sym_table_content_repeat1 = 198,
  aux_sym_description_list_repeat1 = 199,
  aux_sym_paragraph_repeat1 = 200,
  alias_sym_list_item_content = 201,
  alias_sym_list_item_name = 202,
  alias_sym_title_content = 203,
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
  [anon_sym_page_DASHlayout] = "attr_name",
  [anon_sym_docs] = "attr_value",
  [anon_sym_landscape] = "attr_value",
  [anon_sym_portrait] = "attr_value",
  [anon_sym_description] = "attr_name",
  [aux_sym__doc_description_token1] = "_doc_description_token1",
  [anon_sym_url_DASHrepo] = "attr_name",
  [anon_sym_link_DASHwith_DASHunderscores] = "attr_name",
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
  [sym__unordered_list_mark] = "list_item_mark",
  [aux_sym__ordered_list_mark_token1] = "_ordered_list_mark_token1",
  [aux_sym__ordered_list_mark_token2] = "_ordered_list_mark_token2",
  [aux_sym__ordered_list_mark_token3] = "_ordered_list_mark_token3",
  [sym__checklist_mark] = "list_item_mark",
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
  [sym__word] = "_word",
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
  [sym__page_layout] = "_page_layout",
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
  [sym__ordered_list_mark] = "list_item_mark",
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
  [alias_sym_list_item_content] = "list_item_content",
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
  [anon_sym_page_DASHlayout] = anon_sym_doctype,
  [anon_sym_docs] = anon_sym_article,
  [anon_sym_landscape] = anon_sym_article,
  [anon_sym_portrait] = anon_sym_article,
  [anon_sym_description] = anon_sym_doctype,
  [aux_sym__doc_description_token1] = aux_sym__doc_description_token1,
  [anon_sym_url_DASHrepo] = anon_sym_doctype,
  [anon_sym_link_DASHwith_DASHunderscores] = anon_sym_doctype,
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
  [sym__unordered_list_mark] = sym__unordered_list_mark,
  [aux_sym__ordered_list_mark_token1] = aux_sym__ordered_list_mark_token1,
  [aux_sym__ordered_list_mark_token2] = aux_sym__ordered_list_mark_token2,
  [aux_sym__ordered_list_mark_token3] = aux_sym__ordered_list_mark_token3,
  [sym__checklist_mark] = sym__unordered_list_mark,
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
  [sym__word] = sym__word,
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
  [sym__page_layout] = sym__page_layout,
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
  [sym__ordered_list_mark] = sym__unordered_list_mark,
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
  [alias_sym_list_item_content] = alias_sym_list_item_content,
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
  [anon_sym_page_DASHlayout] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_docs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_landscape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_portrait] = {
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
  [sym__unordered_list_mark] = {
    .visible = true,
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
  [sym__word] = {
    .visible = false,
    .named = true,
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
  [sym__page_layout] = {
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
  [sym__ordered_list_mark] = {
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
  [alias_sym_list_item_content] = {
    .visible = true,
    .named = true,
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
  [6] = {.index = 3, .length = 1},
  [7] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 1},
  [10] = {.index = 7, .length = 2},
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
    [2] = alias_sym_list_item_content,
  },
  [5] = {
    [0] = alias_sym_list_item_name,
    [2] = alias_sym_list_item_content,
  },
  [9] = {
    [3] = aux_sym_url_macro_token1,
  },
  [11] = {
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
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 128,
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

static inline bool sym__word_character_set_1(int32_t c) {
  return (c < 3761
    ? (c < 2748
      ? (c < 2200
        ? (c < 1767
          ? (c < 1479
            ? (c < 1471
              ? (c < 1155
                ? (c >= 768 && c <= 879)
                : (c <= 1161 || (c >= 1425 && c <= 1469)))
              : (c <= 1471 || (c < 1476
                ? (c >= 1473 && c <= 1474)
                : c <= 1477)))
            : (c <= 1479 || (c < 1648
              ? (c < 1611
                ? (c >= 1552 && c <= 1562)
                : c <= 1631)
              : (c <= 1648 || (c < 1759
                ? (c >= 1750 && c <= 1756)
                : c <= 1764)))))
          : (c <= 1768 || (c < 2045
            ? (c < 1840
              ? (c < 1809
                ? (c >= 1770 && c <= 1773)
                : c <= 1809)
              : (c <= 1866 || (c < 2027
                ? (c >= 1958 && c <= 1968)
                : c <= 2035)))
            : (c <= 2045 || (c < 2085
              ? (c < 2075
                ? (c >= 2070 && c <= 2073)
                : c <= 2083)
              : (c <= 2087 || (c < 2137
                ? (c >= 2089 && c <= 2093)
                : c <= 2139)))))))
        : (c <= 2207 || (c < 2519
          ? (c < 2402
            ? (c < 2362
              ? (c < 2275
                ? (c >= 2250 && c <= 2273)
                : c <= 2307)
              : (c <= 2364 || (c < 2385
                ? (c >= 2366 && c <= 2383)
                : c <= 2391)))
            : (c <= 2403 || (c < 2494
              ? (c < 2492
                ? (c >= 2433 && c <= 2435)
                : c <= 2492)
              : (c <= 2500 || (c < 2507
                ? (c >= 2503 && c <= 2504)
                : c <= 2509)))))
          : (c <= 2519 || (c < 2631
            ? (c < 2561
              ? (c < 2558
                ? (c >= 2530 && c <= 2531)
                : c <= 2558)
              : (c <= 2563 || (c < 2622
                ? c == 2620
                : c <= 2626)))
            : (c <= 2632 || (c < 2672
              ? (c < 2641
                ? (c >= 2635 && c <= 2637)
                : c <= 2641)
              : (c <= 2673 || (c < 2689
                ? c == 2677
                : c <= 2691)))))))))
      : (c <= 2748 || (c < 3170
        ? (c < 2914
          ? (c < 2817
            ? (c < 2763
              ? (c < 2759
                ? (c >= 2750 && c <= 2757)
                : c <= 2761)
              : (c <= 2765 || (c < 2810
                ? (c >= 2786 && c <= 2787)
                : c <= 2815)))
            : (c <= 2819 || (c < 2887
              ? (c < 2878
                ? c == 2876
                : c <= 2884)
              : (c <= 2888 || (c < 2901
                ? (c >= 2891 && c <= 2893)
                : c <= 2903)))))
          : (c <= 2915 || (c < 3072
            ? (c < 3014
              ? (c < 3006
                ? c == 2946
                : c <= 3010)
              : (c <= 3016 || (c < 3031
                ? (c >= 3018 && c <= 3021)
                : c <= 3031)))
            : (c <= 3076 || (c < 3142
              ? (c < 3134
                ? c == 3132
                : c <= 3140)
              : (c <= 3144 || (c < 3157
                ? (c >= 3146 && c <= 3149)
                : c <= 3158)))))))
        : (c <= 3171 || (c < 3402
          ? (c < 3285
            ? (c < 3262
              ? (c < 3260
                ? (c >= 3201 && c <= 3203)
                : c <= 3260)
              : (c <= 3268 || (c < 3274
                ? (c >= 3270 && c <= 3272)
                : c <= 3277)))
            : (c <= 3286 || (c < 3387
              ? (c < 3328
                ? (c >= 3298 && c <= 3299)
                : c <= 3331)
              : (c <= 3388 || (c < 3398
                ? (c >= 3390 && c <= 3396)
                : c <= 3400)))))
          : (c <= 3405 || (c < 3542
            ? (c < 3457
              ? (c < 3426
                ? c == 3415
                : c <= 3427)
              : (c <= 3459 || (c < 3535
                ? c == 3530
                : c <= 3540)))
            : (c <= 3542 || (c < 3633
              ? (c < 3570
                ? (c >= 3544 && c <= 3551)
                : c <= 3571)
              : (c <= 3633 || (c < 3655
                ? (c >= 3636 && c <= 3642)
                : c <= 3662)))))))))))
    : (c <= 3761 || (c < 7380
      ? (c < 5938
        ? (c < 4038
          ? (c < 3897
            ? (c < 3864
              ? (c < 3784
                ? (c >= 3764 && c <= 3772)
                : c <= 3789)
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
      if (eof) ADVANCE(387);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '#') ADVANCE(378);
      if (lookahead == '*') ADVANCE(642);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(824);
      if (lookahead == '-') ADVANCE(587);
      if (lookahead == '.') ADVANCE(388);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '0') ADVANCE(546);
      if (lookahead == ':') ADVANCE(584);
      if (lookahead == '<') ADVANCE(407);
      if (lookahead == '=') ADVANCE(396);
      if (lookahead == '>') ADVANCE(409);
      if (lookahead == 'C') ADVANCE(426);
      if (lookahead == 'I') ADVANCE(434);
      if (lookahead == 'N') ADVANCE(439);
      if (lookahead == 'T') ADVANCE(431);
      if (lookahead == 'W') ADVANCE(427);
      if (lookahead == '[') ADVANCE(796);
      if (lookahead == ']') ADVANCE(800);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(512);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead == 'f') ADVANCE(514);
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead == 'k') ADVANCE(459);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == 'm') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(453);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(527);
      if (lookahead == 'v') ADVANCE(497);
      if (lookahead == 'x') ADVANCE(526);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '~') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(804);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '!' || '}' < lookahead)) ADVANCE(869);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '[') ADVANCE(796);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'b') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(793);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(629);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(629);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(794);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(797);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '.') ADVANCE(652);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(632);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(628);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(636);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(638);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(634);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(805);
      if (lookahead == '#') ADVANCE(378);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(824);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '[') ADVANCE(796);
      if (lookahead == ']') ADVANCE(800);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead == 'f') ADVANCE(857);
      if (lookahead == 'k') ADVANCE(845);
      if (lookahead == 'l') ADVANCE(850);
      if (lookahead == 'm') ADVANCE(844);
      if (lookahead == 'p') ADVANCE(843);
      if (lookahead == 'x') ADVANCE(860);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '~') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          (lookahead < '!' || '}' < lookahead)) ADVANCE(869);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == '*') ADVANCE(643);
      if (lookahead == '-') ADVANCE(647);
      if (lookahead == '.') ADVANCE(650);
      if (lookahead == '0') ADVANCE(689);
      if (lookahead == 'C') ADVANCE(679);
      if (lookahead == 'I') ADVANCE(682);
      if (lookahead == 'N') ADVANCE(683);
      if (lookahead == 'T') ADVANCE(681);
      if (lookahead == 'W') ADVANCE(680);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(685);
      if (lookahead == 'v') ADVANCE(684);
      if (lookahead == '|') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == ':') ADVANCE(584);
      if (lookahead == '>') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(630);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(6);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(792);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(631);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(627);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(627);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(635);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(635);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(637);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(637);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(633);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(633);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(798);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(831);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(831);
      if (lookahead == ']') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(830);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '+') ADVANCE(836);
      END_STATE();
    case 40:
      if (lookahead == '+') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '+') ADVANCE(39);
      if (lookahead == '.') ADVANCE(652);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(662);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'C') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == 'W') ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(333);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(329);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(300);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(226);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(652);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == '<') ADVANCE(823);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == '>') ADVANCE(825);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 'q') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(213);
      if (lookahead == 'z') ADVANCE(334);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '@') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(377);
      END_STATE();
    case 70:
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '_') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '_') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == ':') ADVANCE(799);
      END_STATE();
    case 74:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == ':') ADVANCE(795);
      END_STATE();
    case 75:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == ':') ADVANCE(802);
      END_STATE();
    case 76:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '[') ADVANCE(807);
      END_STATE();
    case 77:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '[') ADVANCE(837);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '[') ADVANCE(810);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(799);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(795);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(802);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '_') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '<') ADVANCE(822);
      END_STATE();
    case 86:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 88:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 89:
      if (lookahead == '>') ADVANCE(825);
      END_STATE();
    case 90:
      if (lookahead == '@') ADVANCE(376);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 96:
      if (lookahead == 'G') ADVANCE(130);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(98);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(129);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'P') ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == 'P') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(94);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 117:
      if (lookahead == '[') ADVANCE(796);
      if (lookahead == ']') ADVANCE(800);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 118:
      if (lookahead == '[') ADVANCE(807);
      END_STATE();
    case 119:
      if (lookahead == '[') ADVANCE(837);
      END_STATE();
    case 120:
      if (lookahead == '[') ADVANCE(810);
      END_STATE();
    case 121:
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '_') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(812);
      END_STATE();
    case 122:
      if (lookahead == '[') ADVANCE(370);
      END_STATE();
    case 123:
      if (lookahead == ']') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 124:
      if (lookahead == ']') ADVANCE(800);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(811);
      END_STATE();
    case 125:
      if (lookahead == ']') ADVANCE(800);
      if (lookahead != 0) ADVANCE(818);
      END_STATE();
    case 126:
      if (lookahead == ']') ADVANCE(659);
      END_STATE();
    case 127:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 128:
      if (lookahead == ']') ADVANCE(10);
      END_STATE();
    case 129:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 130:
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(13);
      END_STATE();
    case 132:
      if (lookahead == '^') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == '`') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 'q') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(213);
      if (lookahead == 'z') ADVANCE(334);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(308);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(356);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(363);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(346);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(252);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'w') ADVANCE(244);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 213:
      if (lookahead == 'j') ADVANCE(343);
      END_STATE();
    case 214:
      if (lookahead == 'k') ADVANCE(296);
      END_STATE();
    case 215:
      if (lookahead == 'k') ADVANCE(559);
      END_STATE();
    case 216:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 217:
      if (lookahead == 'k') ADVANCE(353);
      END_STATE();
    case 218:
      if (lookahead == 'k') ADVANCE(364);
      END_STATE();
    case 219:
      if (lookahead == 'k') ADVANCE(365);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(246);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 231:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 232:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 262:
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 263:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 264:
      if (lookahead == 'p') ADVANCE(342);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 265:
      if (lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 267:
      if (lookahead == 'p') ADVANCE(245);
      END_STATE();
    case 268:
      if (lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 269:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 270:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 271:
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 272:
      if (lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 273:
      if (lookahead == 'q') ADVANCE(324);
      END_STATE();
    case 274:
      if (lookahead == 'q') ADVANCE(328);
      END_STATE();
    case 275:
      if (lookahead == 'q') ADVANCE(330);
      END_STATE();
    case 276:
      if (lookahead == 'q') ADVANCE(331);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 289:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 290:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 291:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(567);
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 301:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 302:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 303:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 304:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 306:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 307:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 308:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 323:
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 324:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 325:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 326:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 327:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 328:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 329:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 330:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 331:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 332:
      if (lookahead == 'v') ADVANCE(155);
      END_STATE();
    case 333:
      if (lookahead == 'w') ADVANCE(206);
      END_STATE();
    case 334:
      if (lookahead == 'w') ADVANCE(309);
      END_STATE();
    case 335:
      if (lookahead == 'y') ADVANCE(269);
      END_STATE();
    case 336:
      if (lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 337:
      if (lookahead == 'y') ADVANCE(355);
      END_STATE();
    case 338:
      if (lookahead == '|') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(394);
      END_STATE();
    case 339:
      if (lookahead == '}') ADVANCE(888);
      END_STATE();
    case 340:
      if (lookahead == '}') ADVANCE(887);
      END_STATE();
    case 341:
      if (lookahead == '}') ADVANCE(899);
      END_STATE();
    case 342:
      if (lookahead == '}') ADVANCE(872);
      END_STATE();
    case 343:
      if (lookahead == '}') ADVANCE(875);
      END_STATE();
    case 344:
      if (lookahead == '}') ADVANCE(886);
      END_STATE();
    case 345:
      if (lookahead == '}') ADVANCE(898);
      END_STATE();
    case 346:
      if (lookahead == '}') ADVANCE(882);
      END_STATE();
    case 347:
      if (lookahead == '}') ADVANCE(876);
      END_STATE();
    case 348:
      if (lookahead == '}') ADVANCE(873);
      END_STATE();
    case 349:
      if (lookahead == '}') ADVANCE(883);
      END_STATE();
    case 350:
      if (lookahead == '}') ADVANCE(877);
      END_STATE();
    case 351:
      if (lookahead == '}') ADVANCE(885);
      END_STATE();
    case 352:
      if (lookahead == '}') ADVANCE(874);
      END_STATE();
    case 353:
      if (lookahead == '}') ADVANCE(870);
      END_STATE();
    case 354:
      if (lookahead == '}') ADVANCE(891);
      END_STATE();
    case 355:
      if (lookahead == '}') ADVANCE(871);
      END_STATE();
    case 356:
      if (lookahead == '}') ADVANCE(890);
      END_STATE();
    case 357:
      if (lookahead == '}') ADVANCE(880);
      END_STATE();
    case 358:
      if (lookahead == '}') ADVANCE(878);
      END_STATE();
    case 359:
      if (lookahead == '}') ADVANCE(881);
      END_STATE();
    case 360:
      if (lookahead == '}') ADVANCE(879);
      END_STATE();
    case 361:
      if (lookahead == '}') ADVANCE(893);
      END_STATE();
    case 362:
      if (lookahead == '}') ADVANCE(884);
      END_STATE();
    case 363:
      if (lookahead == '}') ADVANCE(889);
      END_STATE();
    case 364:
      if (lookahead == '}') ADVANCE(892);
      END_STATE();
    case 365:
      if (lookahead == '}') ADVANCE(895);
      END_STATE();
    case 366:
      if (lookahead == '}') ADVANCE(894);
      END_STATE();
    case 367:
      if (lookahead == '}') ADVANCE(896);
      END_STATE();
    case 368:
      if (lookahead == '}') ADVANCE(897);
      END_STATE();
    case 369:
      if (lookahead == '~') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 371:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 372:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 375:
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 376:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 377:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[') ADVANCE(813);
      END_STATE();
    case 378:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 379:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 380:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 381:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 382:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 383:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(394);
      END_STATE();
    case 384:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(575);
      END_STATE();
    case 385:
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(817);
      END_STATE();
    case 386:
      if (eof) ADVANCE(387);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '*') ADVANCE(641);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(646);
      if (lookahead == '.') ADVANCE(388);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '0') ADVANCE(688);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(395);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(664);
      if (lookahead == 'I') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(668);
      if (lookahead == 'T') ADVANCE(666);
      if (lookahead == 'W') ADVANCE(665);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(8);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == '_') ADVANCE(690);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'f') ADVANCE(675);
      if (lookahead == 'i') ADVANCE(674);
      if (lookahead == 'k') ADVANCE(671);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'm') ADVANCE(669);
      if (lookahead == 'p') ADVANCE(670);
      if (lookahead == 'v') ADVANCE(673);
      if (lookahead == 'x') ADVANCE(676);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(806);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (('!' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '}') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(678);
      if (sym__word_character_set_1(lookahead)) ADVANCE(869);
      if (lookahead != 0) ADVANCE(838);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(650);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(797);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '=') ADVANCE(392);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '=') ADVANCE(390);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '=') ADVANCE(391);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == '=') ADVANCE(401);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(401);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_title0_token2);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ_EQ);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(823);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(825);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '.') ADVANCE(652);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(826);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(819);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'A') ADVANCE(450);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'A') ADVANCE(444);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'E') ADVANCE(420);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'G') ADVANCE(424);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(435);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'M') ADVANCE(443);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'N') ADVANCE(430);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'N') ADVANCE(432);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'N') ADVANCE(449);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'O') ADVANCE(446);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'O') ADVANCE(438);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(417);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'P') ADVANCE(440);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'R') ADVANCE(436);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'R') ADVANCE(448);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'T') ADVANCE(429);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'T') ADVANCE(433);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'T') ADVANCE(425);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'U') ADVANCE(447);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'b') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'c') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'd') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'd') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'd') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'd') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'd') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'f') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(480);
      if (lookahead == 's') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'n') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'k') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'k') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'm') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == 't') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 's') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 's') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 's') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 's') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 't') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 't') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (lookahead == 'y') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(612);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == ':') ADVANCE(815);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(605);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_article);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_article);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_book);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_book);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_manpage);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_manpage);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_page_DASHlayout);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_page_DASHlayout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_docs);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_landscape);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_landscape);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_portrait);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_portrait);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_link_DASHwith_DASHunderscores);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_link_DASHwith_DASHunderscores);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '_') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_attr_mark);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '\n') ADVANCE(629);
      if (lookahead == '*') ADVANCE(649);
      if (lookahead == '-') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '*') ADVANCE(649);
      if (lookahead == '-') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(648);
      if (lookahead == '-') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(640);
      if (lookahead == '-') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(649);
      if (lookahead == '-') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'c') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'd') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'h') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'm') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 't') ADVANCE(602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 't') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'u') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'u') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'u') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'w') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'y') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '*') ADVANCE(645);
      if (lookahead == '-') ADVANCE(645);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(649);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '.') ADVANCE(654);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(649);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(639);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(645);
      if (lookahead == '-') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(648);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(649);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(640);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(661);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(718);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(712);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(711);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'M') ADVANCE(710);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(714);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'a') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'a') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'b') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'i') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'i') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'm') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'o') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'r') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'u') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'A') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'A') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'I') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'M') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'O') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'i') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'm') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(651);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '_') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(827);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(820);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(706);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(749);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(758);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(709);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(704);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(701);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(703);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(717);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(754);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(713);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(707);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(708);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(693);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(705);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(716);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(700);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(702);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(699);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(760);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(715);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'a') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'd') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'd') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'd') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'e') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'e') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'e') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'e') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'f') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'g') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'i') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'i') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'k') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'l') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'n') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'n') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'o') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'o') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'o') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'o') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 'o') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 's') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 's') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 't') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 't') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (lookahead == 't') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(746);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '_') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'g') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__inline_element_token1);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__inline_element_token1);
      if (lookahead == '\n') ADVANCE(803);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__inline_element_token1);
      if (lookahead == '.') ADVANCE(652);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(811);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead == '[') ADVANCE(133);
      if (lookahead == '_') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(812);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[') ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_url_macro_token1);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_link_macro_token1);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_link_macro_token2);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(818);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_mailto_COLON);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_mailto_COLON);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_mailto_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(821);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(21);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '_') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(831);
      if (lookahead == ']') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(816);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(827);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(820);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 's') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 's') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 't') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 't') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 't') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(869);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 386},
  [2] = {.lex_state = 386},
  [3] = {.lex_state = 386},
  [4] = {.lex_state = 386},
  [5] = {.lex_state = 386},
  [6] = {.lex_state = 386},
  [7] = {.lex_state = 386},
  [8] = {.lex_state = 386},
  [9] = {.lex_state = 386},
  [10] = {.lex_state = 386},
  [11] = {.lex_state = 386},
  [12] = {.lex_state = 386},
  [13] = {.lex_state = 386},
  [14] = {.lex_state = 386},
  [15] = {.lex_state = 386},
  [16] = {.lex_state = 386},
  [17] = {.lex_state = 386},
  [18] = {.lex_state = 386},
  [19] = {.lex_state = 386},
  [20] = {.lex_state = 386},
  [21] = {.lex_state = 386},
  [22] = {.lex_state = 386},
  [23] = {.lex_state = 386},
  [24] = {.lex_state = 386},
  [25] = {.lex_state = 386},
  [26] = {.lex_state = 386},
  [27] = {.lex_state = 386},
  [28] = {.lex_state = 386},
  [29] = {.lex_state = 386},
  [30] = {.lex_state = 386},
  [31] = {.lex_state = 386},
  [32] = {.lex_state = 386},
  [33] = {.lex_state = 386},
  [34] = {.lex_state = 386},
  [35] = {.lex_state = 386},
  [36] = {.lex_state = 386},
  [37] = {.lex_state = 386},
  [38] = {.lex_state = 386},
  [39] = {.lex_state = 386},
  [40] = {.lex_state = 386},
  [41] = {.lex_state = 386},
  [42] = {.lex_state = 386},
  [43] = {.lex_state = 386},
  [44] = {.lex_state = 386},
  [45] = {.lex_state = 386},
  [46] = {.lex_state = 386},
  [47] = {.lex_state = 386},
  [48] = {.lex_state = 386},
  [49] = {.lex_state = 386},
  [50] = {.lex_state = 386},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 338},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 44},
  [85] = {.lex_state = 338},
  [86] = {.lex_state = 44},
  [87] = {.lex_state = 117},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 44},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 338},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 44},
  [98] = {.lex_state = 117},
  [99] = {.lex_state = 44},
  [100] = {.lex_state = 44},
  [101] = {.lex_state = 44},
  [102] = {.lex_state = 117},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 44},
  [105] = {.lex_state = 117},
  [106] = {.lex_state = 117},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 117},
  [111] = {.lex_state = 44},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 44},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 44},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 44},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 44},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 125},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 67},
  [124] = {.lex_state = 16},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 117},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 117},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 338},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 67},
  [136] = {.lex_state = 117},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 123},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 124},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 117},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 399},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 125},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 383},
  [160] = {.lex_state = 16},
  [161] = {.lex_state = 375},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 386},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 386},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 384},
  [195] = {.lex_state = 386},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 386},
  [198] = {.lex_state = 384},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 399},
  [201] = {.lex_state = 399},
  [202] = {.lex_state = 399},
  [203] = {.lex_state = 399},
  [204] = {.lex_state = 399},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 16},
  [208] = {.lex_state = 384},
  [209] = {.lex_state = 16},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 67},
  [215] = {.lex_state = 385},
  [216] = {.lex_state = 399},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 386},
  [219] = {.lex_state = 16},
  [220] = {.lex_state = 16},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 383},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 372},
  [227] = {.lex_state = 383},
  [228] = {.lex_state = 14},
  [229] = {.lex_state = 16},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 383},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 372},
  [237] = {.lex_state = 383},
  [238] = {.lex_state = 14},
  [239] = {.lex_state = 383},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 16},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 372},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 16},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 386},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [aux_sym_title0_token2] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_article] = ACTIONS(1),
    [anon_sym_book] = ACTIONS(1),
    [anon_sym_manpage] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_page_DASHlayout] = ACTIONS(1),
    [anon_sym_docs] = ACTIONS(1),
    [anon_sym_landscape] = ACTIONS(1),
    [anon_sym_portrait] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_url_DASHrepo] = ACTIONS(1),
    [anon_sym_link_DASHwith_DASHunderscores] = ACTIONS(1),
    [anon_sym_hide_DASHuri_DASHscheme] = ACTIONS(1),
    [anon_sym_sectanchors] = ACTIONS(1),
    [sym_attr_mark] = ACTIONS(1),
    [aux_sym_attr_name_token1] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH_LF] = ACTIONS(1),
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
    [aux_sym__inline_element_token1] = ACTIONS(1),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_link_COLON] = ACTIONS(1),
    [anon_sym_mailto_COLON] = ACTIONS(1),
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
    [sym__word] = ACTIONS(1),
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
    [sym_document] = STATE(213),
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
    [sym__note_line] = STATE(42),
    [sym__note_block] = STATE(42),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(43),
    [sym__tip_block] = STATE(43),
    [sym_important] = STATE(2),
    [sym__important] = STATE(44),
    [sym__important_block] = STATE(44),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(45),
    [sym__caution_block] = STATE(45),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(46),
    [sym__warning_block] = STATE(46),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(76),
    [sym__ordered_list_mark] = STATE(220),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(80),
    [sym_description_list] = STATE(2),
    [sym_description_list_item] = STATE(83),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(52),
    [sym_kbd] = STATE(52),
    [sym_footnote] = STATE(52),
    [sym_links] = STATE(52),
    [sym_autolinks] = STATE(210),
    [sym_url_macro] = STATE(57),
    [sym_link_macro] = STATE(57),
    [sym_mailto] = STATE(57),
    [sym_xref] = STATE(52),
    [sym__inline_xref] = STATE(58),
    [sym__xref] = STATE(59),
    [sym_passthrough] = STATE(52),
    [sym__passthrough_plus] = STATE(60),
    [sym__passthrough_cmd] = STATE(60),
    [sym_replacement] = STATE(52),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(76),
    [aux_sym_description_list_repeat1] = STATE(83),
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
    [aux_sym__ordered_list_mark_token1] = ACTIONS(41),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(43),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(41),
    [sym__checklist_mark] = ACTIONS(39),
    [aux_sym_code_token1] = ACTIONS(45),
    [aux_sym_code_language_token1] = ACTIONS(47),
    [anon_sym_SLASH_SLASH] = ACTIONS(49),
    [aux_sym_line_breaks_token1] = ACTIONS(51),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(53),
    [anon_sym_image_COLON_COLON] = ACTIONS(55),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(57),
    [anon_sym_audio_COLON_COLON] = ACTIONS(59),
    [anon_sym_video_COLON_COLON] = ACTIONS(61),
    [aux_sym__inline_element_token1] = ACTIONS(63),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(65),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(67),
    [aux_sym_autolinks_token1] = ACTIONS(69),
    [anon_sym_link_COLON] = ACTIONS(71),
    [anon_sym_mailto_COLON] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_xref_COLON] = ACTIONS(77),
    [sym_emphasis] = ACTIONS(63),
    [sym_strong] = ACTIONS(63),
    [sym_monospace] = ACTIONS(79),
    [sym_highlight] = ACTIONS(79),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(81),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(83),
    [sym__word] = ACTIONS(63),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(85),
  },
  [2] = {
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
    [sym__note_line] = STATE(42),
    [sym__note_block] = STATE(42),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(43),
    [sym__tip_block] = STATE(43),
    [sym_important] = STATE(3),
    [sym__important] = STATE(44),
    [sym__important_block] = STATE(44),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(45),
    [sym__caution_block] = STATE(45),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(46),
    [sym__warning_block] = STATE(46),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(76),
    [sym__ordered_list_mark] = STATE(220),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(80),
    [sym_description_list] = STATE(3),
    [sym_description_list_item] = STATE(83),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(52),
    [sym_kbd] = STATE(52),
    [sym_footnote] = STATE(52),
    [sym_links] = STATE(52),
    [sym_autolinks] = STATE(210),
    [sym_url_macro] = STATE(57),
    [sym_link_macro] = STATE(57),
    [sym_mailto] = STATE(57),
    [sym_xref] = STATE(52),
    [sym__inline_xref] = STATE(58),
    [sym__xref] = STATE(59),
    [sym_passthrough] = STATE(52),
    [sym__passthrough_plus] = STATE(60),
    [sym__passthrough_cmd] = STATE(60),
    [sym_replacement] = STATE(52),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(76),
    [aux_sym_description_list_repeat1] = STATE(83),
    [aux_sym_paragraph_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(87),
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
    [aux_sym__ordered_list_mark_token1] = ACTIONS(41),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(43),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(41),
    [sym__checklist_mark] = ACTIONS(39),
    [aux_sym_code_token1] = ACTIONS(45),
    [aux_sym_code_language_token1] = ACTIONS(47),
    [anon_sym_SLASH_SLASH] = ACTIONS(49),
    [aux_sym_line_breaks_token1] = ACTIONS(51),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(53),
    [anon_sym_image_COLON_COLON] = ACTIONS(55),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(57),
    [anon_sym_audio_COLON_COLON] = ACTIONS(59),
    [anon_sym_video_COLON_COLON] = ACTIONS(61),
    [aux_sym__inline_element_token1] = ACTIONS(63),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(65),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(67),
    [aux_sym_autolinks_token1] = ACTIONS(69),
    [anon_sym_link_COLON] = ACTIONS(71),
    [anon_sym_mailto_COLON] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(75),
    [anon_sym_xref_COLON] = ACTIONS(77),
    [sym_emphasis] = ACTIONS(63),
    [sym_strong] = ACTIONS(63),
    [sym_monospace] = ACTIONS(79),
    [sym_highlight] = ACTIONS(79),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(81),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(83),
    [sym__word] = ACTIONS(63),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(85),
  },
  [3] = {
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
    [sym__note_line] = STATE(42),
    [sym__note_block] = STATE(42),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(43),
    [sym__tip_block] = STATE(43),
    [sym_important] = STATE(3),
    [sym__important] = STATE(44),
    [sym__important_block] = STATE(44),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(45),
    [sym__caution_block] = STATE(45),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(46),
    [sym__warning_block] = STATE(46),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(76),
    [sym__ordered_list_mark] = STATE(220),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(80),
    [sym_description_list] = STATE(3),
    [sym_description_list_item] = STATE(83),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(52),
    [sym_kbd] = STATE(52),
    [sym_footnote] = STATE(52),
    [sym_links] = STATE(52),
    [sym_autolinks] = STATE(210),
    [sym_url_macro] = STATE(57),
    [sym_link_macro] = STATE(57),
    [sym_mailto] = STATE(57),
    [sym_xref] = STATE(52),
    [sym__inline_xref] = STATE(58),
    [sym__xref] = STATE(59),
    [sym_passthrough] = STATE(52),
    [sym__passthrough_plus] = STATE(60),
    [sym__passthrough_cmd] = STATE(60),
    [sym_replacement] = STATE(52),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(76),
    [aux_sym_description_list_repeat1] = STATE(83),
    [aux_sym_paragraph_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(100),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(103),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(106),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(109),
    [anon_sym_NOTE_COLON] = ACTIONS(112),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(115),
    [anon_sym_TIP_COLON] = ACTIONS(118),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(121),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(124),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(127),
    [anon_sym_CAUTION_COLON] = ACTIONS(130),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(133),
    [anon_sym_WARNING_COLON] = ACTIONS(136),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(139),
    [sym__unordered_list_mark] = ACTIONS(142),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(145),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(148),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(145),
    [sym__checklist_mark] = ACTIONS(142),
    [aux_sym_code_token1] = ACTIONS(151),
    [aux_sym_code_language_token1] = ACTIONS(154),
    [anon_sym_SLASH_SLASH] = ACTIONS(157),
    [aux_sym_line_breaks_token1] = ACTIONS(160),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(163),
    [anon_sym_image_COLON_COLON] = ACTIONS(166),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(169),
    [anon_sym_audio_COLON_COLON] = ACTIONS(172),
    [anon_sym_video_COLON_COLON] = ACTIONS(175),
    [aux_sym__inline_element_token1] = ACTIONS(178),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(181),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(184),
    [aux_sym_autolinks_token1] = ACTIONS(187),
    [anon_sym_link_COLON] = ACTIONS(190),
    [anon_sym_mailto_COLON] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(196),
    [anon_sym_xref_COLON] = ACTIONS(199),
    [sym_emphasis] = ACTIONS(178),
    [sym_strong] = ACTIONS(178),
    [sym_monospace] = ACTIONS(202),
    [sym_highlight] = ACTIONS(202),
    [sym_superscript] = ACTIONS(202),
    [sym_subscript] = ACTIONS(202),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(205),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(208),
    [sym__word] = ACTIONS(178),
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
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_EQ_EQ] = ACTIONS(216),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(216),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(216),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(216),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(214),
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
    [sym__unordered_list_mark] = ACTIONS(216),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(216),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(214),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(216),
    [sym__checklist_mark] = ACTIONS(216),
    [aux_sym_code_token1] = ACTIONS(214),
    [aux_sym_code_language_token1] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(214),
    [aux_sym_line_breaks_token1] = ACTIONS(214),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(214),
    [anon_sym_image_COLON_COLON] = ACTIONS(214),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(214),
    [anon_sym_audio_COLON_COLON] = ACTIONS(214),
    [anon_sym_video_COLON_COLON] = ACTIONS(214),
    [aux_sym__inline_element_token1] = ACTIONS(216),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(214),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(214),
    [aux_sym_autolinks_token1] = ACTIONS(216),
    [anon_sym_link_COLON] = ACTIONS(216),
    [anon_sym_mailto_COLON] = ACTIONS(216),
    [anon_sym_LT_LT] = ACTIONS(216),
    [anon_sym_xref_COLON] = ACTIONS(216),
    [sym_emphasis] = ACTIONS(216),
    [sym_strong] = ACTIONS(216),
    [sym_monospace] = ACTIONS(214),
    [sym_highlight] = ACTIONS(214),
    [sym_superscript] = ACTIONS(214),
    [sym_subscript] = ACTIONS(214),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(214),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(214),
    [sym__word] = ACTIONS(216),
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
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(220),
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_EQ_EQ] = ACTIONS(220),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(220),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(220),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(220),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(218),
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
    [sym__unordered_list_mark] = ACTIONS(220),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(220),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(218),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(220),
    [sym__checklist_mark] = ACTIONS(220),
    [aux_sym_code_token1] = ACTIONS(218),
    [aux_sym_code_language_token1] = ACTIONS(220),
    [anon_sym_SLASH_SLASH] = ACTIONS(218),
    [aux_sym_line_breaks_token1] = ACTIONS(218),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(218),
    [anon_sym_image_COLON_COLON] = ACTIONS(218),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(218),
    [anon_sym_audio_COLON_COLON] = ACTIONS(218),
    [anon_sym_video_COLON_COLON] = ACTIONS(218),
    [aux_sym__inline_element_token1] = ACTIONS(220),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(218),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(218),
    [aux_sym_autolinks_token1] = ACTIONS(220),
    [anon_sym_link_COLON] = ACTIONS(220),
    [anon_sym_mailto_COLON] = ACTIONS(220),
    [anon_sym_LT_LT] = ACTIONS(220),
    [anon_sym_xref_COLON] = ACTIONS(220),
    [sym_emphasis] = ACTIONS(220),
    [sym_strong] = ACTIONS(220),
    [sym_monospace] = ACTIONS(218),
    [sym_highlight] = ACTIONS(218),
    [sym_superscript] = ACTIONS(218),
    [sym_subscript] = ACTIONS(218),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(218),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(218),
    [sym__word] = ACTIONS(220),
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
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(224),
    [anon_sym_EQ_EQ] = ACTIONS(224),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(224),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(224),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(224),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(222),
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
    [sym__unordered_list_mark] = ACTIONS(224),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(224),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(222),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(224),
    [sym__checklist_mark] = ACTIONS(224),
    [aux_sym_code_token1] = ACTIONS(222),
    [aux_sym_code_language_token1] = ACTIONS(224),
    [anon_sym_SLASH_SLASH] = ACTIONS(222),
    [aux_sym_line_breaks_token1] = ACTIONS(222),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(222),
    [anon_sym_image_COLON_COLON] = ACTIONS(222),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(222),
    [anon_sym_audio_COLON_COLON] = ACTIONS(222),
    [anon_sym_video_COLON_COLON] = ACTIONS(222),
    [aux_sym__inline_element_token1] = ACTIONS(224),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(222),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(222),
    [aux_sym_autolinks_token1] = ACTIONS(224),
    [anon_sym_link_COLON] = ACTIONS(224),
    [anon_sym_mailto_COLON] = ACTIONS(224),
    [anon_sym_LT_LT] = ACTIONS(224),
    [anon_sym_xref_COLON] = ACTIONS(224),
    [sym_emphasis] = ACTIONS(224),
    [sym_strong] = ACTIONS(224),
    [sym_monospace] = ACTIONS(222),
    [sym_highlight] = ACTIONS(222),
    [sym_superscript] = ACTIONS(222),
    [sym_subscript] = ACTIONS(222),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(222),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(222),
    [sym__word] = ACTIONS(224),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(228),
    [anon_sym_EQ_EQ] = ACTIONS(228),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(228),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(228),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(228),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(226),
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
    [sym__unordered_list_mark] = ACTIONS(228),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(228),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(226),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(228),
    [sym__checklist_mark] = ACTIONS(228),
    [aux_sym_code_token1] = ACTIONS(226),
    [aux_sym_code_language_token1] = ACTIONS(228),
    [anon_sym_SLASH_SLASH] = ACTIONS(226),
    [aux_sym_line_breaks_token1] = ACTIONS(226),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(226),
    [anon_sym_image_COLON_COLON] = ACTIONS(226),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(226),
    [anon_sym_audio_COLON_COLON] = ACTIONS(226),
    [anon_sym_video_COLON_COLON] = ACTIONS(226),
    [aux_sym__inline_element_token1] = ACTIONS(228),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(226),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(226),
    [aux_sym_autolinks_token1] = ACTIONS(228),
    [anon_sym_link_COLON] = ACTIONS(228),
    [anon_sym_mailto_COLON] = ACTIONS(228),
    [anon_sym_LT_LT] = ACTIONS(228),
    [anon_sym_xref_COLON] = ACTIONS(228),
    [sym_emphasis] = ACTIONS(228),
    [sym_strong] = ACTIONS(228),
    [sym_monospace] = ACTIONS(226),
    [sym_highlight] = ACTIONS(226),
    [sym_superscript] = ACTIONS(226),
    [sym_subscript] = ACTIONS(226),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(226),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(226),
    [sym__word] = ACTIONS(228),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(232),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_EQ_EQ] = ACTIONS(232),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(232),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(232),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(232),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(230),
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
    [sym__unordered_list_mark] = ACTIONS(232),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(232),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(230),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(232),
    [sym__checklist_mark] = ACTIONS(232),
    [aux_sym_code_token1] = ACTIONS(230),
    [aux_sym_code_language_token1] = ACTIONS(232),
    [anon_sym_SLASH_SLASH] = ACTIONS(230),
    [aux_sym_line_breaks_token1] = ACTIONS(230),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(230),
    [anon_sym_image_COLON_COLON] = ACTIONS(230),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(230),
    [anon_sym_audio_COLON_COLON] = ACTIONS(230),
    [anon_sym_video_COLON_COLON] = ACTIONS(230),
    [aux_sym__inline_element_token1] = ACTIONS(232),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(230),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(230),
    [aux_sym_autolinks_token1] = ACTIONS(232),
    [anon_sym_link_COLON] = ACTIONS(232),
    [anon_sym_mailto_COLON] = ACTIONS(232),
    [anon_sym_LT_LT] = ACTIONS(232),
    [anon_sym_xref_COLON] = ACTIONS(232),
    [sym_emphasis] = ACTIONS(232),
    [sym_strong] = ACTIONS(232),
    [sym_monospace] = ACTIONS(230),
    [sym_highlight] = ACTIONS(230),
    [sym_superscript] = ACTIONS(230),
    [sym_subscript] = ACTIONS(230),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(230),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(230),
    [sym__word] = ACTIONS(232),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_DOT] = ACTIONS(236),
    [anon_sym_EQ] = ACTIONS(236),
    [anon_sym_EQ_EQ] = ACTIONS(236),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(236),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(236),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(236),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(234),
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
    [sym__unordered_list_mark] = ACTIONS(236),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(236),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(234),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(236),
    [sym__checklist_mark] = ACTIONS(236),
    [aux_sym_code_token1] = ACTIONS(234),
    [aux_sym_code_language_token1] = ACTIONS(236),
    [anon_sym_SLASH_SLASH] = ACTIONS(234),
    [aux_sym_line_breaks_token1] = ACTIONS(234),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(234),
    [anon_sym_image_COLON_COLON] = ACTIONS(234),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(234),
    [anon_sym_audio_COLON_COLON] = ACTIONS(234),
    [anon_sym_video_COLON_COLON] = ACTIONS(234),
    [aux_sym__inline_element_token1] = ACTIONS(236),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(234),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(234),
    [aux_sym_autolinks_token1] = ACTIONS(236),
    [anon_sym_link_COLON] = ACTIONS(236),
    [anon_sym_mailto_COLON] = ACTIONS(236),
    [anon_sym_LT_LT] = ACTIONS(236),
    [anon_sym_xref_COLON] = ACTIONS(236),
    [sym_emphasis] = ACTIONS(236),
    [sym_strong] = ACTIONS(236),
    [sym_monospace] = ACTIONS(234),
    [sym_highlight] = ACTIONS(234),
    [sym_superscript] = ACTIONS(234),
    [sym_subscript] = ACTIONS(234),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(234),
    [sym__word] = ACTIONS(236),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_DOT] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(240),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(240),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(240),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(240),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(238),
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
    [sym__unordered_list_mark] = ACTIONS(240),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(240),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(238),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(240),
    [sym__checklist_mark] = ACTIONS(240),
    [aux_sym_code_token1] = ACTIONS(238),
    [aux_sym_code_language_token1] = ACTIONS(240),
    [anon_sym_SLASH_SLASH] = ACTIONS(238),
    [aux_sym_line_breaks_token1] = ACTIONS(238),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(238),
    [anon_sym_image_COLON_COLON] = ACTIONS(238),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(238),
    [anon_sym_audio_COLON_COLON] = ACTIONS(238),
    [anon_sym_video_COLON_COLON] = ACTIONS(238),
    [aux_sym__inline_element_token1] = ACTIONS(240),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(238),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(238),
    [aux_sym_autolinks_token1] = ACTIONS(240),
    [anon_sym_link_COLON] = ACTIONS(240),
    [anon_sym_mailto_COLON] = ACTIONS(240),
    [anon_sym_LT_LT] = ACTIONS(240),
    [anon_sym_xref_COLON] = ACTIONS(240),
    [sym_emphasis] = ACTIONS(240),
    [sym_strong] = ACTIONS(240),
    [sym_monospace] = ACTIONS(238),
    [sym_highlight] = ACTIONS(238),
    [sym_superscript] = ACTIONS(238),
    [sym_subscript] = ACTIONS(238),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(238),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(238),
    [sym__word] = ACTIONS(240),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(244),
    [anon_sym_EQ] = ACTIONS(244),
    [anon_sym_EQ_EQ] = ACTIONS(244),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(244),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(244),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(244),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(242),
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
    [sym__unordered_list_mark] = ACTIONS(244),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(244),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(242),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(244),
    [sym__checklist_mark] = ACTIONS(244),
    [aux_sym_code_token1] = ACTIONS(242),
    [aux_sym_code_language_token1] = ACTIONS(244),
    [anon_sym_SLASH_SLASH] = ACTIONS(242),
    [aux_sym_line_breaks_token1] = ACTIONS(242),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(242),
    [anon_sym_image_COLON_COLON] = ACTIONS(242),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(242),
    [anon_sym_audio_COLON_COLON] = ACTIONS(242),
    [anon_sym_video_COLON_COLON] = ACTIONS(242),
    [aux_sym__inline_element_token1] = ACTIONS(244),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(242),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(242),
    [aux_sym_autolinks_token1] = ACTIONS(244),
    [anon_sym_link_COLON] = ACTIONS(244),
    [anon_sym_mailto_COLON] = ACTIONS(244),
    [anon_sym_LT_LT] = ACTIONS(244),
    [anon_sym_xref_COLON] = ACTIONS(244),
    [sym_emphasis] = ACTIONS(244),
    [sym_strong] = ACTIONS(244),
    [sym_monospace] = ACTIONS(242),
    [sym_highlight] = ACTIONS(242),
    [sym_superscript] = ACTIONS(242),
    [sym_subscript] = ACTIONS(242),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(242),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(242),
    [sym__word] = ACTIONS(244),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_DOT] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(248),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(248),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(248),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(246),
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
    [sym__unordered_list_mark] = ACTIONS(248),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(248),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(246),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(248),
    [sym__checklist_mark] = ACTIONS(248),
    [aux_sym_code_token1] = ACTIONS(246),
    [aux_sym_code_language_token1] = ACTIONS(248),
    [anon_sym_SLASH_SLASH] = ACTIONS(246),
    [aux_sym_line_breaks_token1] = ACTIONS(246),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(246),
    [anon_sym_image_COLON_COLON] = ACTIONS(246),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(246),
    [anon_sym_audio_COLON_COLON] = ACTIONS(246),
    [anon_sym_video_COLON_COLON] = ACTIONS(246),
    [aux_sym__inline_element_token1] = ACTIONS(248),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(246),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(246),
    [aux_sym_autolinks_token1] = ACTIONS(248),
    [anon_sym_link_COLON] = ACTIONS(248),
    [anon_sym_mailto_COLON] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_xref_COLON] = ACTIONS(248),
    [sym_emphasis] = ACTIONS(248),
    [sym_strong] = ACTIONS(248),
    [sym_monospace] = ACTIONS(246),
    [sym_highlight] = ACTIONS(246),
    [sym_superscript] = ACTIONS(246),
    [sym_subscript] = ACTIONS(246),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(246),
    [sym__word] = ACTIONS(248),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_DOT] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(250),
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
    [sym__unordered_list_mark] = ACTIONS(252),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(252),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(250),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(252),
    [sym__checklist_mark] = ACTIONS(252),
    [aux_sym_code_token1] = ACTIONS(250),
    [aux_sym_code_language_token1] = ACTIONS(252),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [aux_sym_line_breaks_token1] = ACTIONS(250),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(250),
    [anon_sym_image_COLON_COLON] = ACTIONS(250),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(250),
    [anon_sym_audio_COLON_COLON] = ACTIONS(250),
    [anon_sym_video_COLON_COLON] = ACTIONS(250),
    [aux_sym__inline_element_token1] = ACTIONS(252),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(250),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(250),
    [aux_sym_autolinks_token1] = ACTIONS(252),
    [anon_sym_link_COLON] = ACTIONS(252),
    [anon_sym_mailto_COLON] = ACTIONS(252),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_xref_COLON] = ACTIONS(252),
    [sym_emphasis] = ACTIONS(252),
    [sym_strong] = ACTIONS(252),
    [sym_monospace] = ACTIONS(250),
    [sym_highlight] = ACTIONS(250),
    [sym_superscript] = ACTIONS(250),
    [sym_subscript] = ACTIONS(250),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(250),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(250),
    [sym__word] = ACTIONS(252),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_DOT] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(254),
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
    [sym__unordered_list_mark] = ACTIONS(256),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(256),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(254),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(256),
    [sym__checklist_mark] = ACTIONS(256),
    [aux_sym_code_token1] = ACTIONS(254),
    [aux_sym_code_language_token1] = ACTIONS(256),
    [anon_sym_SLASH_SLASH] = ACTIONS(254),
    [aux_sym_line_breaks_token1] = ACTIONS(254),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(254),
    [anon_sym_image_COLON_COLON] = ACTIONS(254),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(254),
    [anon_sym_audio_COLON_COLON] = ACTIONS(254),
    [anon_sym_video_COLON_COLON] = ACTIONS(254),
    [aux_sym__inline_element_token1] = ACTIONS(256),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(254),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(254),
    [aux_sym_autolinks_token1] = ACTIONS(256),
    [anon_sym_link_COLON] = ACTIONS(256),
    [anon_sym_mailto_COLON] = ACTIONS(256),
    [anon_sym_LT_LT] = ACTIONS(256),
    [anon_sym_xref_COLON] = ACTIONS(256),
    [sym_emphasis] = ACTIONS(256),
    [sym_strong] = ACTIONS(256),
    [sym_monospace] = ACTIONS(254),
    [sym_highlight] = ACTIONS(254),
    [sym_superscript] = ACTIONS(254),
    [sym_subscript] = ACTIONS(254),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(254),
    [sym__word] = ACTIONS(256),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_DOT] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(260),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(260),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(260),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(258),
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
    [sym__unordered_list_mark] = ACTIONS(260),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(260),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(258),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(260),
    [sym__checklist_mark] = ACTIONS(260),
    [aux_sym_code_token1] = ACTIONS(258),
    [aux_sym_code_language_token1] = ACTIONS(260),
    [anon_sym_SLASH_SLASH] = ACTIONS(258),
    [aux_sym_line_breaks_token1] = ACTIONS(258),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(258),
    [anon_sym_image_COLON_COLON] = ACTIONS(258),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(258),
    [anon_sym_audio_COLON_COLON] = ACTIONS(258),
    [anon_sym_video_COLON_COLON] = ACTIONS(258),
    [aux_sym__inline_element_token1] = ACTIONS(260),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(258),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(258),
    [aux_sym_autolinks_token1] = ACTIONS(260),
    [anon_sym_link_COLON] = ACTIONS(260),
    [anon_sym_mailto_COLON] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(260),
    [anon_sym_xref_COLON] = ACTIONS(260),
    [sym_emphasis] = ACTIONS(260),
    [sym_strong] = ACTIONS(260),
    [sym_monospace] = ACTIONS(258),
    [sym_highlight] = ACTIONS(258),
    [sym_superscript] = ACTIONS(258),
    [sym_subscript] = ACTIONS(258),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(258),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(258),
    [sym__word] = ACTIONS(260),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_DOT] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(262),
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
    [sym__unordered_list_mark] = ACTIONS(264),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(264),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(262),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(264),
    [sym__checklist_mark] = ACTIONS(264),
    [aux_sym_code_token1] = ACTIONS(262),
    [aux_sym_code_language_token1] = ACTIONS(264),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [aux_sym_line_breaks_token1] = ACTIONS(262),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(262),
    [anon_sym_image_COLON_COLON] = ACTIONS(262),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(262),
    [anon_sym_audio_COLON_COLON] = ACTIONS(262),
    [anon_sym_video_COLON_COLON] = ACTIONS(262),
    [aux_sym__inline_element_token1] = ACTIONS(264),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(262),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(262),
    [aux_sym_autolinks_token1] = ACTIONS(264),
    [anon_sym_link_COLON] = ACTIONS(264),
    [anon_sym_mailto_COLON] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_xref_COLON] = ACTIONS(264),
    [sym_emphasis] = ACTIONS(264),
    [sym_strong] = ACTIONS(264),
    [sym_monospace] = ACTIONS(262),
    [sym_highlight] = ACTIONS(262),
    [sym_superscript] = ACTIONS(262),
    [sym_subscript] = ACTIONS(262),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(262),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(262),
    [sym__word] = ACTIONS(264),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(268),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(268),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(268),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(268),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(266),
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
    [sym__unordered_list_mark] = ACTIONS(268),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(268),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(266),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(268),
    [sym__checklist_mark] = ACTIONS(268),
    [aux_sym_code_token1] = ACTIONS(266),
    [aux_sym_code_language_token1] = ACTIONS(268),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [aux_sym_line_breaks_token1] = ACTIONS(266),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(266),
    [anon_sym_image_COLON_COLON] = ACTIONS(266),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(266),
    [anon_sym_audio_COLON_COLON] = ACTIONS(266),
    [anon_sym_video_COLON_COLON] = ACTIONS(266),
    [aux_sym__inline_element_token1] = ACTIONS(268),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(266),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(266),
    [aux_sym_autolinks_token1] = ACTIONS(268),
    [anon_sym_link_COLON] = ACTIONS(268),
    [anon_sym_mailto_COLON] = ACTIONS(268),
    [anon_sym_LT_LT] = ACTIONS(268),
    [anon_sym_xref_COLON] = ACTIONS(268),
    [sym_emphasis] = ACTIONS(268),
    [sym_strong] = ACTIONS(268),
    [sym_monospace] = ACTIONS(266),
    [sym_highlight] = ACTIONS(266),
    [sym_superscript] = ACTIONS(266),
    [sym_subscript] = ACTIONS(266),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(266),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(266),
    [sym__word] = ACTIONS(268),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(272),
    [anon_sym_EQ_EQ] = ACTIONS(272),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(272),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(272),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(272),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(270),
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
    [sym__unordered_list_mark] = ACTIONS(272),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(272),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(270),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(272),
    [sym__checklist_mark] = ACTIONS(272),
    [aux_sym_code_token1] = ACTIONS(270),
    [aux_sym_code_language_token1] = ACTIONS(272),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [aux_sym_line_breaks_token1] = ACTIONS(270),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(270),
    [anon_sym_image_COLON_COLON] = ACTIONS(270),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(270),
    [anon_sym_audio_COLON_COLON] = ACTIONS(270),
    [anon_sym_video_COLON_COLON] = ACTIONS(270),
    [aux_sym__inline_element_token1] = ACTIONS(272),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(270),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(270),
    [aux_sym_autolinks_token1] = ACTIONS(272),
    [anon_sym_link_COLON] = ACTIONS(272),
    [anon_sym_mailto_COLON] = ACTIONS(272),
    [anon_sym_LT_LT] = ACTIONS(272),
    [anon_sym_xref_COLON] = ACTIONS(272),
    [sym_emphasis] = ACTIONS(272),
    [sym_strong] = ACTIONS(272),
    [sym_monospace] = ACTIONS(270),
    [sym_highlight] = ACTIONS(270),
    [sym_superscript] = ACTIONS(270),
    [sym_subscript] = ACTIONS(270),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(270),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(270),
    [sym__word] = ACTIONS(272),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_DOT] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(276),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(274),
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
    [sym__unordered_list_mark] = ACTIONS(276),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(276),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(274),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(276),
    [sym__checklist_mark] = ACTIONS(276),
    [aux_sym_code_token1] = ACTIONS(274),
    [aux_sym_code_language_token1] = ACTIONS(276),
    [anon_sym_SLASH_SLASH] = ACTIONS(274),
    [aux_sym_line_breaks_token1] = ACTIONS(274),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(274),
    [anon_sym_image_COLON_COLON] = ACTIONS(274),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(274),
    [anon_sym_audio_COLON_COLON] = ACTIONS(274),
    [anon_sym_video_COLON_COLON] = ACTIONS(274),
    [aux_sym__inline_element_token1] = ACTIONS(276),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(274),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(274),
    [aux_sym_autolinks_token1] = ACTIONS(276),
    [anon_sym_link_COLON] = ACTIONS(276),
    [anon_sym_mailto_COLON] = ACTIONS(276),
    [anon_sym_LT_LT] = ACTIONS(276),
    [anon_sym_xref_COLON] = ACTIONS(276),
    [sym_emphasis] = ACTIONS(276),
    [sym_strong] = ACTIONS(276),
    [sym_monospace] = ACTIONS(274),
    [sym_highlight] = ACTIONS(274),
    [sym_superscript] = ACTIONS(274),
    [sym_subscript] = ACTIONS(274),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(274),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(274),
    [sym__word] = ACTIONS(276),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(280),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(280),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(280),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(280),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(278),
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
    [sym__unordered_list_mark] = ACTIONS(280),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(280),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(278),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(280),
    [sym__checklist_mark] = ACTIONS(280),
    [aux_sym_code_token1] = ACTIONS(278),
    [aux_sym_code_language_token1] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(278),
    [aux_sym_line_breaks_token1] = ACTIONS(278),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(278),
    [anon_sym_image_COLON_COLON] = ACTIONS(278),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(278),
    [anon_sym_audio_COLON_COLON] = ACTIONS(278),
    [anon_sym_video_COLON_COLON] = ACTIONS(278),
    [aux_sym__inline_element_token1] = ACTIONS(280),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(278),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(278),
    [aux_sym_autolinks_token1] = ACTIONS(280),
    [anon_sym_link_COLON] = ACTIONS(280),
    [anon_sym_mailto_COLON] = ACTIONS(280),
    [anon_sym_LT_LT] = ACTIONS(280),
    [anon_sym_xref_COLON] = ACTIONS(280),
    [sym_emphasis] = ACTIONS(280),
    [sym_strong] = ACTIONS(280),
    [sym_monospace] = ACTIONS(278),
    [sym_highlight] = ACTIONS(278),
    [sym_superscript] = ACTIONS(278),
    [sym_subscript] = ACTIONS(278),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(278),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(278),
    [sym__word] = ACTIONS(280),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_DOT] = ACTIONS(284),
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_EQ_EQ] = ACTIONS(284),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(284),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(284),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(284),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(282),
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
    [sym__unordered_list_mark] = ACTIONS(284),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(284),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(282),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(284),
    [sym__checklist_mark] = ACTIONS(284),
    [aux_sym_code_token1] = ACTIONS(282),
    [aux_sym_code_language_token1] = ACTIONS(284),
    [anon_sym_SLASH_SLASH] = ACTIONS(282),
    [aux_sym_line_breaks_token1] = ACTIONS(282),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(282),
    [anon_sym_image_COLON_COLON] = ACTIONS(282),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(282),
    [anon_sym_audio_COLON_COLON] = ACTIONS(282),
    [anon_sym_video_COLON_COLON] = ACTIONS(282),
    [aux_sym__inline_element_token1] = ACTIONS(284),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(282),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(282),
    [aux_sym_autolinks_token1] = ACTIONS(284),
    [anon_sym_link_COLON] = ACTIONS(284),
    [anon_sym_mailto_COLON] = ACTIONS(284),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_xref_COLON] = ACTIONS(284),
    [sym_emphasis] = ACTIONS(284),
    [sym_strong] = ACTIONS(284),
    [sym_monospace] = ACTIONS(282),
    [sym_highlight] = ACTIONS(282),
    [sym_superscript] = ACTIONS(282),
    [sym_subscript] = ACTIONS(282),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(282),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(282),
    [sym__word] = ACTIONS(284),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(288),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(286),
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
    [sym__unordered_list_mark] = ACTIONS(288),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(288),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(286),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(288),
    [sym__checklist_mark] = ACTIONS(288),
    [aux_sym_code_token1] = ACTIONS(286),
    [aux_sym_code_language_token1] = ACTIONS(288),
    [anon_sym_SLASH_SLASH] = ACTIONS(286),
    [aux_sym_line_breaks_token1] = ACTIONS(286),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(286),
    [anon_sym_image_COLON_COLON] = ACTIONS(286),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(286),
    [anon_sym_audio_COLON_COLON] = ACTIONS(286),
    [anon_sym_video_COLON_COLON] = ACTIONS(286),
    [aux_sym__inline_element_token1] = ACTIONS(288),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(286),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(286),
    [aux_sym_autolinks_token1] = ACTIONS(288),
    [anon_sym_link_COLON] = ACTIONS(288),
    [anon_sym_mailto_COLON] = ACTIONS(288),
    [anon_sym_LT_LT] = ACTIONS(288),
    [anon_sym_xref_COLON] = ACTIONS(288),
    [sym_emphasis] = ACTIONS(288),
    [sym_strong] = ACTIONS(288),
    [sym_monospace] = ACTIONS(286),
    [sym_highlight] = ACTIONS(286),
    [sym_superscript] = ACTIONS(286),
    [sym_subscript] = ACTIONS(286),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(286),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(286),
    [sym__word] = ACTIONS(288),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(292),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(292),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(292),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(290),
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
    [sym__unordered_list_mark] = ACTIONS(292),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(292),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(290),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(292),
    [sym__checklist_mark] = ACTIONS(292),
    [aux_sym_code_token1] = ACTIONS(290),
    [aux_sym_code_language_token1] = ACTIONS(292),
    [anon_sym_SLASH_SLASH] = ACTIONS(290),
    [aux_sym_line_breaks_token1] = ACTIONS(290),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(290),
    [anon_sym_image_COLON_COLON] = ACTIONS(290),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(290),
    [anon_sym_audio_COLON_COLON] = ACTIONS(290),
    [anon_sym_video_COLON_COLON] = ACTIONS(290),
    [aux_sym__inline_element_token1] = ACTIONS(292),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(290),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(290),
    [aux_sym_autolinks_token1] = ACTIONS(292),
    [anon_sym_link_COLON] = ACTIONS(292),
    [anon_sym_mailto_COLON] = ACTIONS(292),
    [anon_sym_LT_LT] = ACTIONS(292),
    [anon_sym_xref_COLON] = ACTIONS(292),
    [sym_emphasis] = ACTIONS(292),
    [sym_strong] = ACTIONS(292),
    [sym_monospace] = ACTIONS(290),
    [sym_highlight] = ACTIONS(290),
    [sym_superscript] = ACTIONS(290),
    [sym_subscript] = ACTIONS(290),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(290),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(290),
    [sym__word] = ACTIONS(292),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(296),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(296),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(296),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(296),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(294),
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
    [sym__unordered_list_mark] = ACTIONS(296),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(296),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(294),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(296),
    [sym__checklist_mark] = ACTIONS(296),
    [aux_sym_code_token1] = ACTIONS(294),
    [aux_sym_code_language_token1] = ACTIONS(296),
    [anon_sym_SLASH_SLASH] = ACTIONS(294),
    [aux_sym_line_breaks_token1] = ACTIONS(294),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(294),
    [anon_sym_image_COLON_COLON] = ACTIONS(294),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(294),
    [anon_sym_audio_COLON_COLON] = ACTIONS(294),
    [anon_sym_video_COLON_COLON] = ACTIONS(294),
    [aux_sym__inline_element_token1] = ACTIONS(296),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(294),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(294),
    [aux_sym_autolinks_token1] = ACTIONS(296),
    [anon_sym_link_COLON] = ACTIONS(296),
    [anon_sym_mailto_COLON] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_xref_COLON] = ACTIONS(296),
    [sym_emphasis] = ACTIONS(296),
    [sym_strong] = ACTIONS(296),
    [sym_monospace] = ACTIONS(294),
    [sym_highlight] = ACTIONS(294),
    [sym_superscript] = ACTIONS(294),
    [sym_subscript] = ACTIONS(294),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(294),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(294),
    [sym__word] = ACTIONS(296),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_EQ_EQ] = ACTIONS(300),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(300),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(300),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(300),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(298),
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
    [sym__unordered_list_mark] = ACTIONS(300),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(300),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(298),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(300),
    [sym__checklist_mark] = ACTIONS(300),
    [aux_sym_code_token1] = ACTIONS(298),
    [aux_sym_code_language_token1] = ACTIONS(300),
    [anon_sym_SLASH_SLASH] = ACTIONS(298),
    [aux_sym_line_breaks_token1] = ACTIONS(298),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(298),
    [anon_sym_image_COLON_COLON] = ACTIONS(298),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(298),
    [anon_sym_audio_COLON_COLON] = ACTIONS(298),
    [anon_sym_video_COLON_COLON] = ACTIONS(298),
    [aux_sym__inline_element_token1] = ACTIONS(300),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(298),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(298),
    [aux_sym_autolinks_token1] = ACTIONS(300),
    [anon_sym_link_COLON] = ACTIONS(300),
    [anon_sym_mailto_COLON] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_xref_COLON] = ACTIONS(300),
    [sym_emphasis] = ACTIONS(300),
    [sym_strong] = ACTIONS(300),
    [sym_monospace] = ACTIONS(298),
    [sym_highlight] = ACTIONS(298),
    [sym_superscript] = ACTIONS(298),
    [sym_subscript] = ACTIONS(298),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(298),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(298),
    [sym__word] = ACTIONS(300),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_EQ] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(304),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(304),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(304),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(302),
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
    [sym__unordered_list_mark] = ACTIONS(304),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(304),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(302),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(304),
    [sym__checklist_mark] = ACTIONS(304),
    [aux_sym_code_token1] = ACTIONS(302),
    [aux_sym_code_language_token1] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(302),
    [aux_sym_line_breaks_token1] = ACTIONS(302),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(302),
    [anon_sym_image_COLON_COLON] = ACTIONS(302),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(302),
    [anon_sym_audio_COLON_COLON] = ACTIONS(302),
    [anon_sym_video_COLON_COLON] = ACTIONS(302),
    [aux_sym__inline_element_token1] = ACTIONS(304),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(302),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(302),
    [aux_sym_autolinks_token1] = ACTIONS(304),
    [anon_sym_link_COLON] = ACTIONS(304),
    [anon_sym_mailto_COLON] = ACTIONS(304),
    [anon_sym_LT_LT] = ACTIONS(304),
    [anon_sym_xref_COLON] = ACTIONS(304),
    [sym_emphasis] = ACTIONS(304),
    [sym_strong] = ACTIONS(304),
    [sym_monospace] = ACTIONS(302),
    [sym_highlight] = ACTIONS(302),
    [sym_superscript] = ACTIONS(302),
    [sym_subscript] = ACTIONS(302),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(302),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(302),
    [sym__word] = ACTIONS(304),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(308),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(308),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(308),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(306),
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
    [sym__unordered_list_mark] = ACTIONS(308),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(308),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(306),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(308),
    [sym__checklist_mark] = ACTIONS(308),
    [aux_sym_code_token1] = ACTIONS(306),
    [aux_sym_code_language_token1] = ACTIONS(308),
    [anon_sym_SLASH_SLASH] = ACTIONS(306),
    [aux_sym_line_breaks_token1] = ACTIONS(306),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(306),
    [anon_sym_image_COLON_COLON] = ACTIONS(306),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(306),
    [anon_sym_audio_COLON_COLON] = ACTIONS(306),
    [anon_sym_video_COLON_COLON] = ACTIONS(306),
    [aux_sym__inline_element_token1] = ACTIONS(308),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(306),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(306),
    [aux_sym_autolinks_token1] = ACTIONS(308),
    [anon_sym_link_COLON] = ACTIONS(308),
    [anon_sym_mailto_COLON] = ACTIONS(308),
    [anon_sym_LT_LT] = ACTIONS(308),
    [anon_sym_xref_COLON] = ACTIONS(308),
    [sym_emphasis] = ACTIONS(308),
    [sym_strong] = ACTIONS(308),
    [sym_monospace] = ACTIONS(306),
    [sym_highlight] = ACTIONS(306),
    [sym_superscript] = ACTIONS(306),
    [sym_subscript] = ACTIONS(306),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(306),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(306),
    [sym__word] = ACTIONS(308),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_EQ] = ACTIONS(312),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(312),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(312),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(312),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(310),
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
    [sym__unordered_list_mark] = ACTIONS(312),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(312),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(310),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(312),
    [sym__checklist_mark] = ACTIONS(312),
    [aux_sym_code_token1] = ACTIONS(310),
    [aux_sym_code_language_token1] = ACTIONS(312),
    [anon_sym_SLASH_SLASH] = ACTIONS(310),
    [aux_sym_line_breaks_token1] = ACTIONS(310),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(310),
    [anon_sym_image_COLON_COLON] = ACTIONS(310),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(310),
    [anon_sym_audio_COLON_COLON] = ACTIONS(310),
    [anon_sym_video_COLON_COLON] = ACTIONS(310),
    [aux_sym__inline_element_token1] = ACTIONS(312),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(310),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(310),
    [aux_sym_autolinks_token1] = ACTIONS(312),
    [anon_sym_link_COLON] = ACTIONS(312),
    [anon_sym_mailto_COLON] = ACTIONS(312),
    [anon_sym_LT_LT] = ACTIONS(312),
    [anon_sym_xref_COLON] = ACTIONS(312),
    [sym_emphasis] = ACTIONS(312),
    [sym_strong] = ACTIONS(312),
    [sym_monospace] = ACTIONS(310),
    [sym_highlight] = ACTIONS(310),
    [sym_superscript] = ACTIONS(310),
    [sym_subscript] = ACTIONS(310),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(310),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(310),
    [sym__word] = ACTIONS(312),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_EQ_EQ] = ACTIONS(316),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(316),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(316),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(316),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(314),
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
    [sym__unordered_list_mark] = ACTIONS(316),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(316),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(314),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(316),
    [sym__checklist_mark] = ACTIONS(316),
    [aux_sym_code_token1] = ACTIONS(314),
    [aux_sym_code_language_token1] = ACTIONS(316),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [aux_sym_line_breaks_token1] = ACTIONS(314),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(314),
    [anon_sym_image_COLON_COLON] = ACTIONS(314),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(314),
    [anon_sym_audio_COLON_COLON] = ACTIONS(314),
    [anon_sym_video_COLON_COLON] = ACTIONS(314),
    [aux_sym__inline_element_token1] = ACTIONS(316),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(314),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(314),
    [aux_sym_autolinks_token1] = ACTIONS(316),
    [anon_sym_link_COLON] = ACTIONS(316),
    [anon_sym_mailto_COLON] = ACTIONS(316),
    [anon_sym_LT_LT] = ACTIONS(316),
    [anon_sym_xref_COLON] = ACTIONS(316),
    [sym_emphasis] = ACTIONS(316),
    [sym_strong] = ACTIONS(316),
    [sym_monospace] = ACTIONS(314),
    [sym_highlight] = ACTIONS(314),
    [sym_superscript] = ACTIONS(314),
    [sym_subscript] = ACTIONS(314),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(314),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(314),
    [sym__word] = ACTIONS(316),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(320),
    [anon_sym_EQ] = ACTIONS(320),
    [anon_sym_EQ_EQ] = ACTIONS(320),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(320),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(320),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(320),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(318),
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
    [sym__unordered_list_mark] = ACTIONS(320),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(320),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(318),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(320),
    [sym__checklist_mark] = ACTIONS(320),
    [aux_sym_code_token1] = ACTIONS(318),
    [aux_sym_code_language_token1] = ACTIONS(320),
    [anon_sym_SLASH_SLASH] = ACTIONS(318),
    [aux_sym_line_breaks_token1] = ACTIONS(318),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(318),
    [anon_sym_image_COLON_COLON] = ACTIONS(318),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(318),
    [anon_sym_audio_COLON_COLON] = ACTIONS(318),
    [anon_sym_video_COLON_COLON] = ACTIONS(318),
    [aux_sym__inline_element_token1] = ACTIONS(320),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(318),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(318),
    [aux_sym_autolinks_token1] = ACTIONS(320),
    [anon_sym_link_COLON] = ACTIONS(320),
    [anon_sym_mailto_COLON] = ACTIONS(320),
    [anon_sym_LT_LT] = ACTIONS(320),
    [anon_sym_xref_COLON] = ACTIONS(320),
    [sym_emphasis] = ACTIONS(320),
    [sym_strong] = ACTIONS(320),
    [sym_monospace] = ACTIONS(318),
    [sym_highlight] = ACTIONS(318),
    [sym_superscript] = ACTIONS(318),
    [sym_subscript] = ACTIONS(318),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(318),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(318),
    [sym__word] = ACTIONS(320),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(324),
    [anon_sym_EQ_EQ] = ACTIONS(324),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(324),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(324),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(324),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(322),
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
    [sym__unordered_list_mark] = ACTIONS(324),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(324),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(322),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(324),
    [sym__checklist_mark] = ACTIONS(324),
    [aux_sym_code_token1] = ACTIONS(322),
    [aux_sym_code_language_token1] = ACTIONS(324),
    [anon_sym_SLASH_SLASH] = ACTIONS(322),
    [aux_sym_line_breaks_token1] = ACTIONS(322),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(322),
    [anon_sym_image_COLON_COLON] = ACTIONS(322),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(322),
    [anon_sym_audio_COLON_COLON] = ACTIONS(322),
    [anon_sym_video_COLON_COLON] = ACTIONS(322),
    [aux_sym__inline_element_token1] = ACTIONS(324),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(322),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(322),
    [aux_sym_autolinks_token1] = ACTIONS(324),
    [anon_sym_link_COLON] = ACTIONS(324),
    [anon_sym_mailto_COLON] = ACTIONS(324),
    [anon_sym_LT_LT] = ACTIONS(324),
    [anon_sym_xref_COLON] = ACTIONS(324),
    [sym_emphasis] = ACTIONS(324),
    [sym_strong] = ACTIONS(324),
    [sym_monospace] = ACTIONS(322),
    [sym_highlight] = ACTIONS(322),
    [sym_superscript] = ACTIONS(322),
    [sym_subscript] = ACTIONS(322),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(322),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(322),
    [sym__word] = ACTIONS(324),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(328),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(326),
    [anon_sym_NOTE_COLON] = ACTIONS(326),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(326),
    [anon_sym_TIP_COLON] = ACTIONS(326),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(326),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(326),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(326),
    [anon_sym_CAUTION_COLON] = ACTIONS(326),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(326),
    [anon_sym_WARNING_COLON] = ACTIONS(326),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(326),
    [sym__unordered_list_mark] = ACTIONS(328),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(328),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(326),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(328),
    [sym__checklist_mark] = ACTIONS(328),
    [aux_sym_code_token1] = ACTIONS(326),
    [aux_sym_code_language_token1] = ACTIONS(328),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [aux_sym_line_breaks_token1] = ACTIONS(326),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(326),
    [anon_sym_image_COLON_COLON] = ACTIONS(326),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(326),
    [anon_sym_audio_COLON_COLON] = ACTIONS(326),
    [anon_sym_video_COLON_COLON] = ACTIONS(326),
    [aux_sym__inline_element_token1] = ACTIONS(328),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(326),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(326),
    [aux_sym_autolinks_token1] = ACTIONS(328),
    [anon_sym_link_COLON] = ACTIONS(328),
    [anon_sym_mailto_COLON] = ACTIONS(328),
    [anon_sym_LT_LT] = ACTIONS(328),
    [anon_sym_xref_COLON] = ACTIONS(328),
    [sym_emphasis] = ACTIONS(328),
    [sym_strong] = ACTIONS(328),
    [sym_monospace] = ACTIONS(326),
    [sym_highlight] = ACTIONS(326),
    [sym_superscript] = ACTIONS(326),
    [sym_subscript] = ACTIONS(326),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(326),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(326),
    [sym__word] = ACTIONS(328),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(326),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_EQ] = ACTIONS(332),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(332),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(332),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(332),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(330),
    [anon_sym_NOTE_COLON] = ACTIONS(330),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(330),
    [anon_sym_TIP_COLON] = ACTIONS(330),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(330),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(330),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(330),
    [anon_sym_CAUTION_COLON] = ACTIONS(330),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(330),
    [anon_sym_WARNING_COLON] = ACTIONS(330),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(330),
    [sym__unordered_list_mark] = ACTIONS(332),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(332),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(330),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(332),
    [sym__checklist_mark] = ACTIONS(332),
    [aux_sym_code_token1] = ACTIONS(330),
    [aux_sym_code_language_token1] = ACTIONS(332),
    [anon_sym_SLASH_SLASH] = ACTIONS(330),
    [aux_sym_line_breaks_token1] = ACTIONS(330),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(330),
    [anon_sym_image_COLON_COLON] = ACTIONS(330),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(330),
    [anon_sym_audio_COLON_COLON] = ACTIONS(330),
    [anon_sym_video_COLON_COLON] = ACTIONS(330),
    [aux_sym__inline_element_token1] = ACTIONS(332),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(330),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(330),
    [aux_sym_autolinks_token1] = ACTIONS(332),
    [anon_sym_link_COLON] = ACTIONS(332),
    [anon_sym_mailto_COLON] = ACTIONS(332),
    [anon_sym_LT_LT] = ACTIONS(332),
    [anon_sym_xref_COLON] = ACTIONS(332),
    [sym_emphasis] = ACTIONS(332),
    [sym_strong] = ACTIONS(332),
    [sym_monospace] = ACTIONS(330),
    [sym_highlight] = ACTIONS(330),
    [sym_superscript] = ACTIONS(330),
    [sym_subscript] = ACTIONS(330),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(330),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(330),
    [sym__word] = ACTIONS(332),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(330),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(330),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(336),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(334),
    [anon_sym_NOTE_COLON] = ACTIONS(334),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(334),
    [anon_sym_TIP_COLON] = ACTIONS(334),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(334),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(334),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(334),
    [anon_sym_CAUTION_COLON] = ACTIONS(334),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(334),
    [anon_sym_WARNING_COLON] = ACTIONS(334),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(334),
    [sym__unordered_list_mark] = ACTIONS(336),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(336),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(334),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(336),
    [sym__checklist_mark] = ACTIONS(336),
    [aux_sym_code_token1] = ACTIONS(334),
    [aux_sym_code_language_token1] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(334),
    [aux_sym_line_breaks_token1] = ACTIONS(334),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(334),
    [anon_sym_image_COLON_COLON] = ACTIONS(334),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(334),
    [anon_sym_audio_COLON_COLON] = ACTIONS(334),
    [anon_sym_video_COLON_COLON] = ACTIONS(334),
    [aux_sym__inline_element_token1] = ACTIONS(336),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(334),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(334),
    [aux_sym_autolinks_token1] = ACTIONS(336),
    [anon_sym_link_COLON] = ACTIONS(336),
    [anon_sym_mailto_COLON] = ACTIONS(336),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_xref_COLON] = ACTIONS(336),
    [sym_emphasis] = ACTIONS(336),
    [sym_strong] = ACTIONS(336),
    [sym_monospace] = ACTIONS(334),
    [sym_highlight] = ACTIONS(334),
    [sym_superscript] = ACTIONS(334),
    [sym_subscript] = ACTIONS(334),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(334),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(334),
    [sym__word] = ACTIONS(336),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(334),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(334),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(340),
    [anon_sym_EQ] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(340),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(340),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(340),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_NOTE_COLON] = ACTIONS(338),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(338),
    [anon_sym_TIP_COLON] = ACTIONS(338),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(338),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(338),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(338),
    [anon_sym_CAUTION_COLON] = ACTIONS(338),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(338),
    [anon_sym_WARNING_COLON] = ACTIONS(338),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(338),
    [sym__unordered_list_mark] = ACTIONS(340),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(340),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(338),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(340),
    [sym__checklist_mark] = ACTIONS(340),
    [aux_sym_code_token1] = ACTIONS(338),
    [aux_sym_code_language_token1] = ACTIONS(340),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [aux_sym_line_breaks_token1] = ACTIONS(338),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(338),
    [anon_sym_image_COLON_COLON] = ACTIONS(338),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(338),
    [anon_sym_audio_COLON_COLON] = ACTIONS(338),
    [anon_sym_video_COLON_COLON] = ACTIONS(338),
    [aux_sym__inline_element_token1] = ACTIONS(340),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(338),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(338),
    [aux_sym_autolinks_token1] = ACTIONS(340),
    [anon_sym_link_COLON] = ACTIONS(340),
    [anon_sym_mailto_COLON] = ACTIONS(340),
    [anon_sym_LT_LT] = ACTIONS(340),
    [anon_sym_xref_COLON] = ACTIONS(340),
    [sym_emphasis] = ACTIONS(340),
    [sym_strong] = ACTIONS(340),
    [sym_monospace] = ACTIONS(338),
    [sym_highlight] = ACTIONS(338),
    [sym_superscript] = ACTIONS(338),
    [sym_subscript] = ACTIONS(338),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(338),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(338),
    [sym__word] = ACTIONS(340),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(338),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(344),
    [anon_sym_EQ] = ACTIONS(344),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(344),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(344),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(344),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(342),
    [anon_sym_NOTE_COLON] = ACTIONS(342),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(342),
    [anon_sym_TIP_COLON] = ACTIONS(342),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(342),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(342),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(342),
    [anon_sym_CAUTION_COLON] = ACTIONS(342),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(342),
    [anon_sym_WARNING_COLON] = ACTIONS(342),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(342),
    [sym__unordered_list_mark] = ACTIONS(344),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(344),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(342),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(344),
    [sym__checklist_mark] = ACTIONS(344),
    [aux_sym_code_token1] = ACTIONS(342),
    [aux_sym_code_language_token1] = ACTIONS(344),
    [anon_sym_SLASH_SLASH] = ACTIONS(342),
    [aux_sym_line_breaks_token1] = ACTIONS(342),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(342),
    [anon_sym_image_COLON_COLON] = ACTIONS(342),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(342),
    [anon_sym_audio_COLON_COLON] = ACTIONS(342),
    [anon_sym_video_COLON_COLON] = ACTIONS(342),
    [aux_sym__inline_element_token1] = ACTIONS(344),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(342),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(342),
    [aux_sym_autolinks_token1] = ACTIONS(344),
    [anon_sym_link_COLON] = ACTIONS(344),
    [anon_sym_mailto_COLON] = ACTIONS(344),
    [anon_sym_LT_LT] = ACTIONS(344),
    [anon_sym_xref_COLON] = ACTIONS(344),
    [sym_emphasis] = ACTIONS(344),
    [sym_strong] = ACTIONS(344),
    [sym_monospace] = ACTIONS(342),
    [sym_highlight] = ACTIONS(342),
    [sym_superscript] = ACTIONS(342),
    [sym_subscript] = ACTIONS(342),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(342),
    [sym__word] = ACTIONS(344),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(342),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(342),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_EQ_EQ] = ACTIONS(348),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(348),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(348),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(348),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(346),
    [anon_sym_NOTE_COLON] = ACTIONS(346),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(346),
    [anon_sym_TIP_COLON] = ACTIONS(346),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(346),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(346),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(346),
    [anon_sym_CAUTION_COLON] = ACTIONS(346),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(346),
    [anon_sym_WARNING_COLON] = ACTIONS(346),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(346),
    [sym__unordered_list_mark] = ACTIONS(348),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(348),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(346),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(348),
    [sym__checklist_mark] = ACTIONS(348),
    [aux_sym_code_token1] = ACTIONS(346),
    [aux_sym_code_language_token1] = ACTIONS(348),
    [anon_sym_SLASH_SLASH] = ACTIONS(346),
    [aux_sym_line_breaks_token1] = ACTIONS(346),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(346),
    [anon_sym_image_COLON_COLON] = ACTIONS(346),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(346),
    [anon_sym_audio_COLON_COLON] = ACTIONS(346),
    [anon_sym_video_COLON_COLON] = ACTIONS(346),
    [aux_sym__inline_element_token1] = ACTIONS(348),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(346),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(346),
    [aux_sym_autolinks_token1] = ACTIONS(348),
    [anon_sym_link_COLON] = ACTIONS(348),
    [anon_sym_mailto_COLON] = ACTIONS(348),
    [anon_sym_LT_LT] = ACTIONS(348),
    [anon_sym_xref_COLON] = ACTIONS(348),
    [sym_emphasis] = ACTIONS(348),
    [sym_strong] = ACTIONS(348),
    [sym_monospace] = ACTIONS(346),
    [sym_highlight] = ACTIONS(346),
    [sym_superscript] = ACTIONS(346),
    [sym_subscript] = ACTIONS(346),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(346),
    [sym__word] = ACTIONS(348),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(346),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_EQ_EQ] = ACTIONS(352),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(352),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(352),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(352),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(350),
    [anon_sym_NOTE_COLON] = ACTIONS(350),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(350),
    [anon_sym_TIP_COLON] = ACTIONS(350),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(350),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(350),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(350),
    [anon_sym_CAUTION_COLON] = ACTIONS(350),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(350),
    [anon_sym_WARNING_COLON] = ACTIONS(350),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(350),
    [sym__unordered_list_mark] = ACTIONS(352),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(352),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(350),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(352),
    [sym__checklist_mark] = ACTIONS(352),
    [aux_sym_code_token1] = ACTIONS(350),
    [aux_sym_code_language_token1] = ACTIONS(352),
    [anon_sym_SLASH_SLASH] = ACTIONS(350),
    [aux_sym_line_breaks_token1] = ACTIONS(350),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(350),
    [anon_sym_image_COLON_COLON] = ACTIONS(350),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(350),
    [anon_sym_audio_COLON_COLON] = ACTIONS(350),
    [anon_sym_video_COLON_COLON] = ACTIONS(350),
    [aux_sym__inline_element_token1] = ACTIONS(352),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(350),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(350),
    [aux_sym_autolinks_token1] = ACTIONS(352),
    [anon_sym_link_COLON] = ACTIONS(352),
    [anon_sym_mailto_COLON] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_xref_COLON] = ACTIONS(352),
    [sym_emphasis] = ACTIONS(352),
    [sym_strong] = ACTIONS(352),
    [sym_monospace] = ACTIONS(350),
    [sym_highlight] = ACTIONS(350),
    [sym_superscript] = ACTIONS(350),
    [sym_subscript] = ACTIONS(350),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(350),
    [sym__word] = ACTIONS(352),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(350),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(356),
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(356),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(356),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(356),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(356),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(354),
    [anon_sym_NOTE_COLON] = ACTIONS(354),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(354),
    [anon_sym_TIP_COLON] = ACTIONS(354),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(354),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(354),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(354),
    [anon_sym_CAUTION_COLON] = ACTIONS(354),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(354),
    [anon_sym_WARNING_COLON] = ACTIONS(354),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(354),
    [sym__unordered_list_mark] = ACTIONS(356),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(356),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(354),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(356),
    [sym__checklist_mark] = ACTIONS(356),
    [aux_sym_code_token1] = ACTIONS(354),
    [aux_sym_code_language_token1] = ACTIONS(356),
    [anon_sym_SLASH_SLASH] = ACTIONS(354),
    [aux_sym_line_breaks_token1] = ACTIONS(354),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(354),
    [anon_sym_image_COLON_COLON] = ACTIONS(354),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(354),
    [anon_sym_audio_COLON_COLON] = ACTIONS(354),
    [anon_sym_video_COLON_COLON] = ACTIONS(354),
    [aux_sym__inline_element_token1] = ACTIONS(356),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(354),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(354),
    [aux_sym_autolinks_token1] = ACTIONS(356),
    [anon_sym_link_COLON] = ACTIONS(356),
    [anon_sym_mailto_COLON] = ACTIONS(356),
    [anon_sym_LT_LT] = ACTIONS(356),
    [anon_sym_xref_COLON] = ACTIONS(356),
    [sym_emphasis] = ACTIONS(356),
    [sym_strong] = ACTIONS(356),
    [sym_monospace] = ACTIONS(354),
    [sym_highlight] = ACTIONS(354),
    [sym_superscript] = ACTIONS(354),
    [sym_subscript] = ACTIONS(354),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(354),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(354),
    [sym__word] = ACTIONS(356),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(354),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_EQ] = ACTIONS(360),
    [anon_sym_EQ_EQ] = ACTIONS(360),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(360),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(360),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(360),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(358),
    [anon_sym_NOTE_COLON] = ACTIONS(358),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(358),
    [anon_sym_TIP_COLON] = ACTIONS(358),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(358),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(358),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(358),
    [anon_sym_CAUTION_COLON] = ACTIONS(358),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(358),
    [anon_sym_WARNING_COLON] = ACTIONS(358),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(358),
    [sym__unordered_list_mark] = ACTIONS(360),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(360),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(358),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(360),
    [sym__checklist_mark] = ACTIONS(360),
    [aux_sym_code_token1] = ACTIONS(358),
    [aux_sym_code_language_token1] = ACTIONS(360),
    [anon_sym_SLASH_SLASH] = ACTIONS(358),
    [aux_sym_line_breaks_token1] = ACTIONS(358),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(358),
    [anon_sym_image_COLON_COLON] = ACTIONS(358),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(358),
    [anon_sym_audio_COLON_COLON] = ACTIONS(358),
    [anon_sym_video_COLON_COLON] = ACTIONS(358),
    [aux_sym__inline_element_token1] = ACTIONS(360),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(358),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(358),
    [aux_sym_autolinks_token1] = ACTIONS(360),
    [anon_sym_link_COLON] = ACTIONS(360),
    [anon_sym_mailto_COLON] = ACTIONS(360),
    [anon_sym_LT_LT] = ACTIONS(360),
    [anon_sym_xref_COLON] = ACTIONS(360),
    [sym_emphasis] = ACTIONS(360),
    [sym_strong] = ACTIONS(360),
    [sym_monospace] = ACTIONS(358),
    [sym_highlight] = ACTIONS(358),
    [sym_superscript] = ACTIONS(358),
    [sym_subscript] = ACTIONS(358),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(358),
    [sym__word] = ACTIONS(360),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(358),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(364),
    [anon_sym_EQ] = ACTIONS(364),
    [anon_sym_EQ_EQ] = ACTIONS(364),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(364),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(364),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(364),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(362),
    [anon_sym_NOTE_COLON] = ACTIONS(362),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(362),
    [anon_sym_TIP_COLON] = ACTIONS(362),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(362),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(362),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(362),
    [anon_sym_CAUTION_COLON] = ACTIONS(362),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(362),
    [anon_sym_WARNING_COLON] = ACTIONS(362),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(362),
    [sym__unordered_list_mark] = ACTIONS(364),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(364),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(362),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(364),
    [sym__checklist_mark] = ACTIONS(364),
    [aux_sym_code_token1] = ACTIONS(362),
    [aux_sym_code_language_token1] = ACTIONS(364),
    [anon_sym_SLASH_SLASH] = ACTIONS(362),
    [aux_sym_line_breaks_token1] = ACTIONS(362),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(362),
    [anon_sym_image_COLON_COLON] = ACTIONS(362),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(362),
    [anon_sym_audio_COLON_COLON] = ACTIONS(362),
    [anon_sym_video_COLON_COLON] = ACTIONS(362),
    [aux_sym__inline_element_token1] = ACTIONS(364),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(362),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(362),
    [aux_sym_autolinks_token1] = ACTIONS(364),
    [anon_sym_link_COLON] = ACTIONS(364),
    [anon_sym_mailto_COLON] = ACTIONS(364),
    [anon_sym_LT_LT] = ACTIONS(364),
    [anon_sym_xref_COLON] = ACTIONS(364),
    [sym_emphasis] = ACTIONS(364),
    [sym_strong] = ACTIONS(364),
    [sym_monospace] = ACTIONS(362),
    [sym_highlight] = ACTIONS(362),
    [sym_superscript] = ACTIONS(362),
    [sym_subscript] = ACTIONS(362),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(362),
    [sym__word] = ACTIONS(364),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(362),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(362),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_EQ_EQ] = ACTIONS(368),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(368),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(368),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(368),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(366),
    [anon_sym_NOTE_COLON] = ACTIONS(366),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(366),
    [anon_sym_TIP_COLON] = ACTIONS(366),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(366),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(366),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(366),
    [anon_sym_CAUTION_COLON] = ACTIONS(366),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(366),
    [anon_sym_WARNING_COLON] = ACTIONS(366),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(366),
    [sym__unordered_list_mark] = ACTIONS(368),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(368),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(366),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(368),
    [sym__checklist_mark] = ACTIONS(368),
    [aux_sym_code_token1] = ACTIONS(366),
    [aux_sym_code_language_token1] = ACTIONS(368),
    [anon_sym_SLASH_SLASH] = ACTIONS(366),
    [aux_sym_line_breaks_token1] = ACTIONS(366),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(366),
    [anon_sym_image_COLON_COLON] = ACTIONS(366),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(366),
    [anon_sym_audio_COLON_COLON] = ACTIONS(366),
    [anon_sym_video_COLON_COLON] = ACTIONS(366),
    [aux_sym__inline_element_token1] = ACTIONS(368),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(366),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(366),
    [aux_sym_autolinks_token1] = ACTIONS(368),
    [anon_sym_link_COLON] = ACTIONS(368),
    [anon_sym_mailto_COLON] = ACTIONS(368),
    [anon_sym_LT_LT] = ACTIONS(368),
    [anon_sym_xref_COLON] = ACTIONS(368),
    [sym_emphasis] = ACTIONS(368),
    [sym_strong] = ACTIONS(368),
    [sym_monospace] = ACTIONS(366),
    [sym_highlight] = ACTIONS(366),
    [sym_superscript] = ACTIONS(366),
    [sym_subscript] = ACTIONS(366),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(366),
    [sym__word] = ACTIONS(368),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(366),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(366),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym_EQ_EQ] = ACTIONS(372),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(372),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(372),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(372),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(370),
    [anon_sym_NOTE_COLON] = ACTIONS(370),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(370),
    [anon_sym_TIP_COLON] = ACTIONS(370),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(370),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(370),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(370),
    [anon_sym_CAUTION_COLON] = ACTIONS(370),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(370),
    [anon_sym_WARNING_COLON] = ACTIONS(370),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(370),
    [sym__unordered_list_mark] = ACTIONS(372),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(372),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(370),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(372),
    [sym__checklist_mark] = ACTIONS(372),
    [aux_sym_code_token1] = ACTIONS(370),
    [aux_sym_code_language_token1] = ACTIONS(372),
    [anon_sym_SLASH_SLASH] = ACTIONS(370),
    [aux_sym_line_breaks_token1] = ACTIONS(370),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(370),
    [anon_sym_image_COLON_COLON] = ACTIONS(370),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(370),
    [anon_sym_audio_COLON_COLON] = ACTIONS(370),
    [anon_sym_video_COLON_COLON] = ACTIONS(370),
    [aux_sym__inline_element_token1] = ACTIONS(372),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(370),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(370),
    [aux_sym_autolinks_token1] = ACTIONS(372),
    [anon_sym_link_COLON] = ACTIONS(372),
    [anon_sym_mailto_COLON] = ACTIONS(372),
    [anon_sym_LT_LT] = ACTIONS(372),
    [anon_sym_xref_COLON] = ACTIONS(372),
    [sym_emphasis] = ACTIONS(372),
    [sym_strong] = ACTIONS(372),
    [sym_monospace] = ACTIONS(370),
    [sym_highlight] = ACTIONS(370),
    [sym_superscript] = ACTIONS(370),
    [sym_subscript] = ACTIONS(370),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(370),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(370),
    [sym__word] = ACTIONS(372),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(370),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(376),
    [anon_sym_EQ] = ACTIONS(376),
    [anon_sym_EQ_EQ] = ACTIONS(376),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(376),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(376),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(376),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(374),
    [anon_sym_NOTE_COLON] = ACTIONS(374),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(374),
    [anon_sym_TIP_COLON] = ACTIONS(374),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(374),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(374),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(374),
    [anon_sym_CAUTION_COLON] = ACTIONS(374),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(374),
    [anon_sym_WARNING_COLON] = ACTIONS(374),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(374),
    [sym__unordered_list_mark] = ACTIONS(376),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(376),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(374),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(376),
    [sym__checklist_mark] = ACTIONS(376),
    [aux_sym_code_token1] = ACTIONS(374),
    [aux_sym_code_language_token1] = ACTIONS(376),
    [anon_sym_SLASH_SLASH] = ACTIONS(374),
    [aux_sym_line_breaks_token1] = ACTIONS(374),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(374),
    [anon_sym_image_COLON_COLON] = ACTIONS(374),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(374),
    [anon_sym_audio_COLON_COLON] = ACTIONS(374),
    [anon_sym_video_COLON_COLON] = ACTIONS(374),
    [aux_sym__inline_element_token1] = ACTIONS(376),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(374),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(374),
    [aux_sym_autolinks_token1] = ACTIONS(376),
    [anon_sym_link_COLON] = ACTIONS(376),
    [anon_sym_mailto_COLON] = ACTIONS(376),
    [anon_sym_LT_LT] = ACTIONS(376),
    [anon_sym_xref_COLON] = ACTIONS(376),
    [sym_emphasis] = ACTIONS(376),
    [sym_strong] = ACTIONS(376),
    [sym_monospace] = ACTIONS(374),
    [sym_highlight] = ACTIONS(374),
    [sym_superscript] = ACTIONS(374),
    [sym_subscript] = ACTIONS(374),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(374),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(374),
    [sym__word] = ACTIONS(376),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(374),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(374),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(380),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_EQ_EQ] = ACTIONS(380),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(380),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(380),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(380),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(378),
    [anon_sym_NOTE_COLON] = ACTIONS(378),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(378),
    [anon_sym_TIP_COLON] = ACTIONS(378),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(378),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(378),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(378),
    [anon_sym_CAUTION_COLON] = ACTIONS(378),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(378),
    [anon_sym_WARNING_COLON] = ACTIONS(378),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(378),
    [sym__unordered_list_mark] = ACTIONS(380),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(380),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(378),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(380),
    [sym__checklist_mark] = ACTIONS(380),
    [aux_sym_code_token1] = ACTIONS(378),
    [aux_sym_code_language_token1] = ACTIONS(380),
    [anon_sym_SLASH_SLASH] = ACTIONS(378),
    [aux_sym_line_breaks_token1] = ACTIONS(378),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(378),
    [anon_sym_image_COLON_COLON] = ACTIONS(378),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(378),
    [anon_sym_audio_COLON_COLON] = ACTIONS(378),
    [anon_sym_video_COLON_COLON] = ACTIONS(378),
    [aux_sym__inline_element_token1] = ACTIONS(380),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(378),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(378),
    [aux_sym_autolinks_token1] = ACTIONS(380),
    [anon_sym_link_COLON] = ACTIONS(380),
    [anon_sym_mailto_COLON] = ACTIONS(380),
    [anon_sym_LT_LT] = ACTIONS(380),
    [anon_sym_xref_COLON] = ACTIONS(380),
    [sym_emphasis] = ACTIONS(380),
    [sym_strong] = ACTIONS(380),
    [sym_monospace] = ACTIONS(378),
    [sym_highlight] = ACTIONS(378),
    [sym_superscript] = ACTIONS(378),
    [sym_subscript] = ACTIONS(378),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(378),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(378),
    [sym__word] = ACTIONS(380),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(378),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_EQ_EQ] = ACTIONS(384),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(384),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(384),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(384),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(382),
    [anon_sym_NOTE_COLON] = ACTIONS(382),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(382),
    [anon_sym_TIP_COLON] = ACTIONS(382),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(382),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(382),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(382),
    [anon_sym_CAUTION_COLON] = ACTIONS(382),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(382),
    [anon_sym_WARNING_COLON] = ACTIONS(382),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(382),
    [sym__unordered_list_mark] = ACTIONS(384),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(384),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(382),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(384),
    [sym__checklist_mark] = ACTIONS(384),
    [aux_sym_code_token1] = ACTIONS(382),
    [aux_sym_code_language_token1] = ACTIONS(384),
    [anon_sym_SLASH_SLASH] = ACTIONS(382),
    [aux_sym_line_breaks_token1] = ACTIONS(382),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(382),
    [anon_sym_image_COLON_COLON] = ACTIONS(382),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(382),
    [anon_sym_audio_COLON_COLON] = ACTIONS(382),
    [anon_sym_video_COLON_COLON] = ACTIONS(382),
    [aux_sym__inline_element_token1] = ACTIONS(384),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(382),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(382),
    [aux_sym_autolinks_token1] = ACTIONS(384),
    [anon_sym_link_COLON] = ACTIONS(384),
    [anon_sym_mailto_COLON] = ACTIONS(384),
    [anon_sym_LT_LT] = ACTIONS(384),
    [anon_sym_xref_COLON] = ACTIONS(384),
    [sym_emphasis] = ACTIONS(384),
    [sym_strong] = ACTIONS(384),
    [sym_monospace] = ACTIONS(382),
    [sym_highlight] = ACTIONS(382),
    [sym_superscript] = ACTIONS(382),
    [sym_subscript] = ACTIONS(382),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(382),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(382),
    [sym__word] = ACTIONS(384),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(382),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(382),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(388),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(388),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(388),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(386),
    [anon_sym_NOTE_COLON] = ACTIONS(386),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(386),
    [anon_sym_TIP_COLON] = ACTIONS(386),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(386),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(386),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(386),
    [anon_sym_CAUTION_COLON] = ACTIONS(386),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(386),
    [anon_sym_WARNING_COLON] = ACTIONS(386),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(386),
    [sym__unordered_list_mark] = ACTIONS(388),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(388),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(386),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(388),
    [sym__checklist_mark] = ACTIONS(388),
    [aux_sym_code_token1] = ACTIONS(386),
    [aux_sym_code_language_token1] = ACTIONS(388),
    [anon_sym_SLASH_SLASH] = ACTIONS(386),
    [aux_sym_line_breaks_token1] = ACTIONS(386),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(386),
    [anon_sym_image_COLON_COLON] = ACTIONS(386),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(386),
    [anon_sym_audio_COLON_COLON] = ACTIONS(386),
    [anon_sym_video_COLON_COLON] = ACTIONS(386),
    [aux_sym__inline_element_token1] = ACTIONS(388),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(386),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(386),
    [aux_sym_autolinks_token1] = ACTIONS(388),
    [anon_sym_link_COLON] = ACTIONS(388),
    [anon_sym_mailto_COLON] = ACTIONS(388),
    [anon_sym_LT_LT] = ACTIONS(388),
    [anon_sym_xref_COLON] = ACTIONS(388),
    [sym_emphasis] = ACTIONS(388),
    [sym_strong] = ACTIONS(388),
    [sym_monospace] = ACTIONS(386),
    [sym_highlight] = ACTIONS(386),
    [sym_superscript] = ACTIONS(386),
    [sym_subscript] = ACTIONS(386),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(386),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(386),
    [sym__word] = ACTIONS(388),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(386),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_EQ_EQ] = ACTIONS(392),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(392),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(392),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(392),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(390),
    [anon_sym_NOTE_COLON] = ACTIONS(390),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(390),
    [anon_sym_TIP_COLON] = ACTIONS(390),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(390),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(390),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(390),
    [anon_sym_CAUTION_COLON] = ACTIONS(390),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(390),
    [anon_sym_WARNING_COLON] = ACTIONS(390),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(390),
    [sym__unordered_list_mark] = ACTIONS(392),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(392),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(390),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(392),
    [sym__checklist_mark] = ACTIONS(392),
    [aux_sym_code_token1] = ACTIONS(390),
    [aux_sym_code_language_token1] = ACTIONS(392),
    [anon_sym_SLASH_SLASH] = ACTIONS(390),
    [aux_sym_line_breaks_token1] = ACTIONS(390),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(390),
    [anon_sym_image_COLON_COLON] = ACTIONS(390),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(390),
    [anon_sym_audio_COLON_COLON] = ACTIONS(390),
    [anon_sym_video_COLON_COLON] = ACTIONS(390),
    [aux_sym__inline_element_token1] = ACTIONS(392),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(390),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(390),
    [aux_sym_autolinks_token1] = ACTIONS(392),
    [anon_sym_link_COLON] = ACTIONS(392),
    [anon_sym_mailto_COLON] = ACTIONS(392),
    [anon_sym_LT_LT] = ACTIONS(392),
    [anon_sym_xref_COLON] = ACTIONS(392),
    [sym_emphasis] = ACTIONS(392),
    [sym_strong] = ACTIONS(392),
    [sym_monospace] = ACTIONS(390),
    [sym_highlight] = ACTIONS(390),
    [sym_superscript] = ACTIONS(390),
    [sym_subscript] = ACTIONS(390),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(390),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(390),
    [sym__word] = ACTIONS(392),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(390),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_DOT] = ACTIONS(396),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(396),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(396),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(396),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(396),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(394),
    [anon_sym_NOTE_COLON] = ACTIONS(394),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(394),
    [anon_sym_TIP_COLON] = ACTIONS(394),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(394),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(394),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(394),
    [anon_sym_CAUTION_COLON] = ACTIONS(394),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(394),
    [anon_sym_WARNING_COLON] = ACTIONS(394),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(394),
    [sym__unordered_list_mark] = ACTIONS(396),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(396),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(394),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(396),
    [sym__checklist_mark] = ACTIONS(396),
    [aux_sym_code_token1] = ACTIONS(394),
    [aux_sym_code_language_token1] = ACTIONS(396),
    [anon_sym_SLASH_SLASH] = ACTIONS(394),
    [aux_sym_line_breaks_token1] = ACTIONS(394),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(394),
    [anon_sym_image_COLON_COLON] = ACTIONS(394),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(394),
    [anon_sym_audio_COLON_COLON] = ACTIONS(394),
    [anon_sym_video_COLON_COLON] = ACTIONS(394),
    [aux_sym__inline_element_token1] = ACTIONS(396),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(394),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(394),
    [aux_sym_autolinks_token1] = ACTIONS(396),
    [anon_sym_link_COLON] = ACTIONS(396),
    [anon_sym_mailto_COLON] = ACTIONS(396),
    [anon_sym_LT_LT] = ACTIONS(396),
    [anon_sym_xref_COLON] = ACTIONS(396),
    [sym_emphasis] = ACTIONS(396),
    [sym_strong] = ACTIONS(396),
    [sym_monospace] = ACTIONS(394),
    [sym_highlight] = ACTIONS(394),
    [sym_superscript] = ACTIONS(394),
    [sym_subscript] = ACTIONS(394),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(394),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(394),
    [sym__word] = ACTIONS(396),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(394),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(400),
    [anon_sym_EQ] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(400),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(400),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(400),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(400),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(398),
    [anon_sym_NOTE_COLON] = ACTIONS(398),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(398),
    [anon_sym_TIP_COLON] = ACTIONS(398),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(398),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(398),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(398),
    [anon_sym_CAUTION_COLON] = ACTIONS(398),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(398),
    [anon_sym_WARNING_COLON] = ACTIONS(398),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(398),
    [sym__unordered_list_mark] = ACTIONS(400),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(400),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(398),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(400),
    [sym__checklist_mark] = ACTIONS(400),
    [aux_sym_code_token1] = ACTIONS(398),
    [aux_sym_code_language_token1] = ACTIONS(400),
    [anon_sym_SLASH_SLASH] = ACTIONS(398),
    [aux_sym_line_breaks_token1] = ACTIONS(398),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(398),
    [anon_sym_image_COLON_COLON] = ACTIONS(398),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(398),
    [anon_sym_audio_COLON_COLON] = ACTIONS(398),
    [anon_sym_video_COLON_COLON] = ACTIONS(398),
    [aux_sym__inline_element_token1] = ACTIONS(400),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(398),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(398),
    [aux_sym_autolinks_token1] = ACTIONS(400),
    [anon_sym_link_COLON] = ACTIONS(400),
    [anon_sym_mailto_COLON] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(400),
    [anon_sym_xref_COLON] = ACTIONS(400),
    [sym_emphasis] = ACTIONS(400),
    [sym_strong] = ACTIONS(400),
    [sym_monospace] = ACTIONS(398),
    [sym_highlight] = ACTIONS(398),
    [sym_superscript] = ACTIONS(398),
    [sym_subscript] = ACTIONS(398),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(398),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(398),
    [sym__word] = ACTIONS(400),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(398),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(402), 1,
      anon_sym_LF_LF,
    ACTIONS(407), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(410), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(413), 1,
      aux_sym_autolinks_token1,
    ACTIONS(416), 1,
      anon_sym_link_COLON,
    ACTIONS(419), 1,
      anon_sym_mailto_COLON,
    ACTIONS(422), 1,
      anon_sym_LT_LT,
    ACTIONS(425), 1,
      anon_sym_xref_COLON,
    ACTIONS(431), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(434), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(58), 1,
      sym__inline_xref,
    STATE(59), 1,
      sym__xref,
    STATE(210), 1,
      sym_autolinks,
    STATE(60), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(404), 3,
      aux_sym__inline_element_token1,
      sym_emphasis,
      sym__word,
    STATE(57), 3,
      sym_url_macro,
      sym_link_macro,
      sym_mailto,
    ACTIONS(428), 5,
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
    ACTIONS(437), 30,
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
    ACTIONS(65), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(67), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(69), 1,
      aux_sym_autolinks_token1,
    ACTIONS(71), 1,
      anon_sym_link_COLON,
    ACTIONS(73), 1,
      anon_sym_mailto_COLON,
    ACTIONS(77), 1,
      anon_sym_xref_COLON,
    ACTIONS(81), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(83), 1,
      anon_sym_pass_COLON_LBRACK,
    ACTIONS(440), 1,
      anon_sym_LF_LF,
    ACTIONS(444), 1,
      anon_sym_LT_LT,
    STATE(58), 1,
      sym__inline_xref,
    STATE(59), 1,
      sym__xref,
    STATE(210), 1,
      sym_autolinks,
    STATE(60), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(442), 3,
      aux_sym__inline_element_token1,
      sym_emphasis,
      sym__word,
    STATE(57), 3,
      sym_url_macro,
      sym_link_macro,
      sym_mailto,
    ACTIONS(446), 5,
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
    ACTIONS(85), 30,
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
  [206] = 30,
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
    ACTIONS(39), 1,
      sym__unordered_list_mark,
    ACTIONS(41), 1,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(45), 1,
      aux_sym_code_token1,
    ACTIONS(47), 1,
      aux_sym_code_language_token1,
    ACTIONS(55), 1,
      anon_sym_image_COLON_COLON,
    ACTIONS(57), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    ACTIONS(59), 1,
      anon_sym_audio_COLON_COLON,
    ACTIONS(61), 1,
      anon_sym_video_COLON_COLON,
    ACTIONS(448), 1,
      sym__checklist_mark,
    STATE(80), 1,
      sym_table_start,
    STATE(220), 1,
      sym__ordered_list_mark,
    ACTIONS(43), 2,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
    STATE(42), 2,
      sym__note_line,
      sym__note_block,
    STATE(43), 2,
      sym__tip,
      sym__tip_block,
    STATE(44), 2,
      sym__important,
      sym__important_block,
    STATE(45), 2,
      sym__caution,
      sym__caution_block,
    STATE(46), 2,
      sym__warning,
      sym__warning_block,
    STATE(76), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(83), 2,
      sym_description_list_item,
      aux_sym_description_list_repeat1,
    STATE(28), 13,
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
  [317] = 2,
    ACTIONS(452), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(450), 41,
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
  [370] = 2,
    ACTIONS(456), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(454), 41,
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
  [423] = 2,
    ACTIONS(460), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(458), 41,
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
  [476] = 2,
    ACTIONS(464), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(462), 41,
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
  [529] = 2,
    ACTIONS(468), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(466), 41,
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
  [582] = 2,
    ACTIONS(468), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(466), 41,
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
  [635] = 2,
    ACTIONS(472), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(470), 41,
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
  [688] = 2,
    ACTIONS(476), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(474), 41,
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
  [741] = 2,
    ACTIONS(480), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(478), 41,
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
  [794] = 2,
    ACTIONS(484), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(482), 41,
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
  [847] = 2,
    ACTIONS(488), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(486), 41,
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
  [900] = 2,
    ACTIONS(492), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(490), 41,
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
  [953] = 2,
    ACTIONS(496), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(494), 41,
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
  [1006] = 2,
    ACTIONS(500), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(498), 41,
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
  [1059] = 2,
    ACTIONS(504), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(502), 41,
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
  [1112] = 2,
    ACTIONS(508), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(506), 41,
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
  [1165] = 2,
    ACTIONS(512), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(510), 41,
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
  [1218] = 2,
    ACTIONS(516), 7,
      aux_sym__inline_element_token1,
      aux_sym_autolinks_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
      sym__word,
    ACTIONS(514), 41,
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
  [1271] = 2,
    ACTIONS(520), 3,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
      aux_sym_code_language_token1,
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
  [1297] = 5,
    ACTIONS(522), 1,
      aux_sym_title0_token2,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(526), 1,
      sym_attr_mark,
    STATE(75), 2,
      sym_doc_attr,
      aux_sym_title0_repeat1,
    STATE(91), 8,
      sym_author_info,
      sym__doctype,
      sym__page_layout,
      sym__doc_description,
      sym__url_repo,
      sym__link_with_underscores,
      sym__hide_uri_scheme,
      sym__sectanchors,
  [1321] = 5,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(526), 1,
      sym_attr_mark,
    ACTIONS(528), 1,
      aux_sym_title0_token2,
    STATE(73), 2,
      sym_doc_attr,
      aux_sym_title0_repeat1,
    STATE(91), 8,
      sym_author_info,
      sym__doctype,
      sym__page_layout,
      sym__doc_description,
      sym__url_repo,
      sym__link_with_underscores,
      sym__hide_uri_scheme,
      sym__sectanchors,
  [1345] = 5,
    ACTIONS(530), 1,
      aux_sym_title0_token2,
    ACTIONS(532), 1,
      sym_name,
    ACTIONS(535), 1,
      sym_attr_mark,
    STATE(75), 2,
      sym_doc_attr,
      aux_sym_title0_repeat1,
    STATE(91), 8,
      sym_author_info,
      sym__doctype,
      sym__page_layout,
      sym__doc_description,
      sym__url_repo,
      sym__link_with_underscores,
      sym__hide_uri_scheme,
      sym__sectanchors,
  [1369] = 7,
    ACTIONS(39), 1,
      sym__unordered_list_mark,
    ACTIONS(41), 1,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(448), 1,
      sym__checklist_mark,
    ACTIONS(538), 1,
      anon_sym_LF,
    STATE(220), 1,
      sym__ordered_list_mark,
    ACTIONS(43), 2,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
    STATE(77), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1393] = 7,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(542), 1,
      sym__unordered_list_mark,
    ACTIONS(548), 1,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(551), 1,
      sym__checklist_mark,
    STATE(220), 1,
      sym__ordered_list_mark,
    ACTIONS(545), 2,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
    STATE(77), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [1417] = 7,
    ACTIONS(554), 1,
      anon_sym_doctype,
    ACTIONS(556), 1,
      anon_sym_page_DASHlayout,
    ACTIONS(558), 1,
      anon_sym_description,
    ACTIONS(560), 1,
      anon_sym_url_DASHrepo,
    ACTIONS(562), 1,
      anon_sym_link_DASHwith_DASHunderscores,
    ACTIONS(564), 1,
      anon_sym_hide_DASHuri_DASHscheme,
    ACTIONS(566), 1,
      anon_sym_sectanchors,
  [1439] = 2,
    ACTIONS(568), 3,
      anon_sym_LF,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(570), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [1450] = 5,
    ACTIONS(572), 1,
      aux_sym_block_title_token1,
    ACTIONS(574), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(85), 1,
      aux_sym_table_content_repeat1,
    STATE(132), 1,
      sym_table_content,
    STATE(162), 1,
      sym_table_end,
  [1466] = 1,
    ACTIONS(576), 4,
      anon_sym_article,
      anon_sym_book,
      anon_sym_manpage,
      anon_sym_inline,
  [1473] = 3,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      aux_sym_code_language_token1,
    STATE(82), 2,
      sym_description_list_item,
      aux_sym_description_list_repeat1,
  [1484] = 3,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 1,
      aux_sym_code_language_token1,
    STATE(82), 2,
      sym_description_list_item,
      aux_sym_description_list_repeat1,
  [1495] = 4,
    ACTIONS(587), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(589), 1,
      aux_sym__note_block_token1,
    STATE(101), 1,
      aux_sym__note_block_repeat1,
    STATE(191), 1,
      sym_code_content,
  [1508] = 3,
    ACTIONS(591), 1,
      aux_sym_block_title_token1,
    ACTIONS(593), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(94), 1,
      aux_sym_table_content_repeat1,
  [1518] = 3,
    ACTIONS(595), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(597), 1,
      aux_sym__note_block_token1,
    STATE(89), 1,
      aux_sym__note_block_repeat1,
  [1528] = 3,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    ACTIONS(601), 1,
      aux_sym_audio_url_token1,
    STATE(155), 1,
      sym_audio_title,
  [1538] = 1,
    ACTIONS(603), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1544] = 3,
    ACTIONS(605), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    STATE(89), 1,
      aux_sym__note_block_repeat1,
  [1554] = 1,
    ACTIONS(610), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1560] = 1,
    ACTIONS(612), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1566] = 1,
    ACTIONS(614), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1572] = 1,
    ACTIONS(616), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1578] = 3,
    ACTIONS(618), 1,
      aux_sym_block_title_token1,
    ACTIONS(621), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(94), 1,
      aux_sym_table_content_repeat1,
  [1588] = 1,
    ACTIONS(623), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1594] = 1,
    ACTIONS(625), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1600] = 3,
    ACTIONS(627), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(629), 1,
      aux_sym__note_block_token1,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
  [1610] = 3,
    ACTIONS(631), 1,
      anon_sym_LBRACK,
    ACTIONS(633), 1,
      aux_sym_audio_url_token1,
    STATE(189), 1,
      sym_audio_url,
  [1620] = 3,
    ACTIONS(635), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(637), 1,
      aux_sym__note_block_token1,
    STATE(119), 1,
      aux_sym__note_block_repeat1,
  [1630] = 3,
    ACTIONS(639), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(641), 1,
      aux_sym__note_block_token1,
    STATE(117), 1,
      aux_sym__note_block_repeat1,
  [1640] = 3,
    ACTIONS(597), 1,
      aux_sym__note_block_token1,
    ACTIONS(643), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(89), 1,
      aux_sym__note_block_repeat1,
  [1650] = 3,
    ACTIONS(633), 1,
      aux_sym_audio_url_token1,
    ACTIONS(645), 1,
      anon_sym_LBRACK,
    STATE(190), 1,
      sym_audio_url,
  [1660] = 1,
    ACTIONS(647), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1666] = 3,
    ACTIONS(649), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(651), 1,
      aux_sym__note_block_token1,
    STATE(115), 1,
      aux_sym__note_block_repeat1,
  [1676] = 3,
    ACTIONS(601), 1,
      aux_sym_audio_url_token1,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_audio_title,
  [1686] = 3,
    ACTIONS(601), 1,
      aux_sym_audio_url_token1,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_audio_title,
  [1696] = 1,
    ACTIONS(657), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1702] = 1,
    ACTIONS(659), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1708] = 1,
    ACTIONS(661), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1714] = 3,
    ACTIONS(601), 1,
      aux_sym_audio_url_token1,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_audio_title,
  [1724] = 3,
    ACTIONS(597), 1,
      aux_sym__note_block_token1,
    ACTIONS(665), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(89), 1,
      aux_sym__note_block_repeat1,
  [1734] = 1,
    ACTIONS(667), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1740] = 3,
    ACTIONS(669), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(671), 1,
      aux_sym__note_block_token1,
    STATE(111), 1,
      aux_sym__note_block_repeat1,
  [1750] = 1,
    ACTIONS(673), 3,
      anon_sym_docs,
      anon_sym_landscape,
      anon_sym_portrait,
  [1756] = 3,
    ACTIONS(597), 1,
      aux_sym__note_block_token1,
    ACTIONS(675), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(89), 1,
      aux_sym__note_block_repeat1,
  [1766] = 1,
    ACTIONS(677), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1772] = 3,
    ACTIONS(597), 1,
      aux_sym__note_block_token1,
    ACTIONS(679), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(89), 1,
      aux_sym__note_block_repeat1,
  [1782] = 1,
    ACTIONS(681), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1788] = 3,
    ACTIONS(597), 1,
      aux_sym__note_block_token1,
    ACTIONS(683), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(89), 1,
      aux_sym__note_block_repeat1,
  [1798] = 1,
    ACTIONS(685), 3,
      aux_sym_title0_token2,
      sym_name,
      sym_attr_mark,
  [1804] = 2,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    ACTIONS(689), 1,
      aux_sym_link_macro_token2,
  [1811] = 2,
    ACTIONS(691), 1,
      anon_sym_,
    ACTIONS(693), 1,
      sym_name,
  [1818] = 2,
    ACTIONS(695), 1,
      aux_sym_autolinks_token1,
    STATE(233), 1,
      sym_autolinks,
  [1825] = 2,
    ACTIONS(697), 1,
      anon_sym_,
    ACTIONS(699), 1,
      sym_name,
  [1832] = 2,
    ACTIONS(701), 1,
      aux_sym_code_language_token1,
    STATE(195), 1,
      sym_code_language,
  [1839] = 2,
    ACTIONS(703), 1,
      anon_sym_LT,
    ACTIONS(705), 1,
      anon_sym_LF,
  [1846] = 2,
    ACTIONS(707), 1,
      aux_sym_audio_url_token1,
    STATE(164), 1,
      sym_audio_title,
  [1853] = 1,
    ACTIONS(709), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1858] = 2,
    ACTIONS(633), 1,
      aux_sym_audio_url_token1,
    STATE(192), 1,
      sym_audio_url,
  [1865] = 2,
    ACTIONS(711), 1,
      aux_sym_code_language_token1,
    STATE(165), 1,
      sym_passthrough_content,
  [1872] = 2,
    ACTIONS(713), 1,
      aux_sym_block_title_token1,
    ACTIONS(715), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1879] = 2,
    ACTIONS(574), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(156), 1,
      sym_table_end,
  [1886] = 2,
    ACTIONS(717), 1,
      anon_sym_LT,
    ACTIONS(719), 1,
      anon_sym_LF,
  [1893] = 2,
    ACTIONS(711), 1,
      aux_sym_code_language_token1,
    STATE(169), 1,
      sym_passthrough_content,
  [1900] = 2,
    ACTIONS(695), 1,
      aux_sym_autolinks_token1,
    STATE(223), 1,
      sym_autolinks,
  [1907] = 2,
    ACTIONS(601), 1,
      aux_sym_audio_url_token1,
    STATE(177), 1,
      sym_audio_title,
  [1914] = 1,
    ACTIONS(721), 2,
      anon_sym_LF,
      aux_sym_code_language_token1,
  [1919] = 2,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
    ACTIONS(725), 1,
      sym_kbd_content,
  [1926] = 1,
    ACTIONS(727), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [1931] = 2,
    ACTIONS(729), 1,
      anon_sym_RBRACK,
    ACTIONS(731), 1,
      sym_footnote_content,
  [1938] = 2,
    ACTIONS(733), 1,
      anon_sym_LT,
    ACTIONS(735), 1,
      anon_sym_LF,
  [1945] = 2,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    ACTIONS(739), 1,
      anon_sym_GT_GT,
  [1952] = 1,
    ACTIONS(741), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [1957] = 2,
    ACTIONS(743), 1,
      anon_sym_,
    ACTIONS(745), 1,
      sym_name,
  [1964] = 2,
    ACTIONS(601), 1,
      aux_sym_audio_url_token1,
    STATE(176), 1,
      sym_audio_title,
  [1971] = 2,
    ACTIONS(747), 1,
      aux_sym_code_language_token1,
    STATE(142), 1,
      sym_xref_url,
  [1978] = 2,
    ACTIONS(747), 1,
      aux_sym_code_language_token1,
    STATE(174), 1,
      sym_xref_url,
  [1985] = 1,
    ACTIONS(749), 1,
      aux_sym_title0_token1,
  [1989] = 1,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
  [1993] = 1,
    ACTIONS(753), 1,
      anon_sym_LF,
  [1997] = 1,
    ACTIONS(755), 1,
      anon_sym_,
  [2001] = 1,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
  [2005] = 1,
    ACTIONS(759), 1,
      anon_sym_LF,
  [2009] = 1,
    ACTIONS(761), 1,
      anon_sym_LF,
  [2013] = 1,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
  [2017] = 1,
    ACTIONS(765), 1,
      anon_sym_LF,
  [2021] = 1,
    ACTIONS(767), 1,
      aux_sym_link_macro_token2,
  [2025] = 1,
    ACTIONS(769), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2029] = 1,
    ACTIONS(771), 1,
      aux_sym_block_title_token1,
  [2033] = 1,
    ACTIONS(773), 1,
      aux_sym_title0_token2,
  [2037] = 1,
    ACTIONS(775), 1,
      aux_sym_url_macro_token1,
  [2041] = 1,
    ACTIONS(777), 1,
      anon_sym_LF,
  [2045] = 1,
    ACTIONS(779), 1,
      anon_sym_LF,
  [2049] = 1,
    ACTIONS(781), 1,
      anon_sym_RBRACK_LF,
  [2053] = 1,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
  [2057] = 1,
    ACTIONS(785), 1,
      anon_sym_LF,
  [2061] = 1,
    ACTIONS(787), 1,
      anon_sym_LF,
  [2065] = 1,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
  [2069] = 1,
    ACTIONS(791), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2073] = 1,
    ACTIONS(793), 1,
      anon_sym_LF,
  [2077] = 1,
    ACTIONS(795), 1,
      anon_sym_LF,
  [2081] = 1,
    ACTIONS(797), 1,
      anon_sym_RBRACK,
  [2085] = 1,
    ACTIONS(799), 1,
      anon_sym_RBRACK,
  [2089] = 1,
    ACTIONS(801), 1,
      anon_sym_LBRACK,
  [2093] = 1,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
  [2097] = 1,
    ACTIONS(805), 1,
      anon_sym_GT_GT,
  [2101] = 1,
    ACTIONS(807), 1,
      anon_sym_RBRACK,
  [2105] = 1,
    ACTIONS(809), 1,
      anon_sym_LBRACK,
  [2109] = 1,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
  [2113] = 1,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
  [2117] = 1,
    ACTIONS(815), 1,
      sym_attr_mark,
  [2121] = 1,
    ACTIONS(817), 1,
      sym_attr_mark,
  [2125] = 1,
    ACTIONS(819), 1,
      sym_attr_mark,
  [2129] = 1,
    ACTIONS(821), 1,
      sym_attr_mark,
  [2133] = 1,
    ACTIONS(823), 1,
      sym_attr_mark,
  [2137] = 1,
    ACTIONS(825), 1,
      sym_attr_mark,
  [2141] = 1,
    ACTIONS(827), 1,
      sym_attr_mark,
  [2145] = 1,
    ACTIONS(829), 1,
      anon_sym_RBRACK,
  [2149] = 1,
    ACTIONS(831), 1,
      anon_sym_LBRACK,
  [2153] = 1,
    ACTIONS(833), 1,
      anon_sym_LBRACK,
  [2157] = 1,
    ACTIONS(835), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2161] = 1,
    ACTIONS(837), 1,
      anon_sym_LBRACK,
  [2165] = 1,
    ACTIONS(839), 1,
      anon_sym_LBRACK,
  [2169] = 1,
    ACTIONS(841), 1,
      aux_sym__doc_description_token1,
  [2173] = 1,
    ACTIONS(843), 1,
      anon_sym_RBRACK_LF,
  [2177] = 1,
    ACTIONS(845), 1,
      anon_sym_LF,
  [2181] = 1,
    ACTIONS(847), 1,
      anon_sym_RBRACK_LF,
  [2185] = 1,
    ACTIONS(849), 1,
      aux_sym__doc_description_token1,
  [2189] = 1,
    ACTIONS(851), 1,
      anon_sym_LF,
  [2193] = 1,
    ACTIONS(853), 1,
      aux_sym_title0_token1,
  [2197] = 1,
    ACTIONS(855), 1,
      aux_sym_title0_token1,
  [2201] = 1,
    ACTIONS(857), 1,
      aux_sym_title0_token1,
  [2205] = 1,
    ACTIONS(859), 1,
      aux_sym_title0_token1,
  [2209] = 1,
    ACTIONS(861), 1,
      aux_sym_title0_token1,
  [2213] = 1,
    ACTIONS(863), 1,
      anon_sym_,
  [2217] = 1,
    ACTIONS(865), 1,
      anon_sym_,
  [2221] = 1,
    ACTIONS(867), 1,
      anon_sym_,
  [2225] = 1,
    ACTIONS(869), 1,
      aux_sym__doc_description_token1,
  [2229] = 1,
    ACTIONS(871), 1,
      anon_sym_,
  [2233] = 1,
    ACTIONS(873), 1,
      anon_sym_LBRACK,
  [2237] = 1,
    ACTIONS(875), 1,
      anon_sym_LF,
  [2241] = 1,
    ACTIONS(877), 1,
      anon_sym_LF,
  [2245] = 1,
    ACTIONS(879), 1,
      ts_builtin_sym_end,
  [2249] = 1,
    ACTIONS(881), 1,
      aux_sym_mailto_token1,
  [2253] = 1,
    ACTIONS(883), 1,
      aux_sym_link_macro_token1,
  [2257] = 1,
    ACTIONS(885), 1,
      aux_sym_title0_token1,
  [2261] = 1,
    ACTIONS(697), 1,
      anon_sym_,
  [2265] = 1,
    ACTIONS(887), 1,
      anon_sym_COLON_COLON,
  [2269] = 1,
    ACTIONS(889), 1,
      anon_sym_,
  [2273] = 1,
    ACTIONS(891), 1,
      anon_sym_,
  [2277] = 1,
    ACTIONS(893), 1,
      anon_sym_LF,
  [2281] = 1,
    ACTIONS(895), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2285] = 1,
    ACTIONS(897), 1,
      anon_sym_LF,
  [2289] = 1,
    ACTIONS(899), 1,
      aux_sym_block_title_token1,
  [2293] = 1,
    ACTIONS(901), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2297] = 1,
    ACTIONS(903), 1,
      sym_email,
  [2301] = 1,
    ACTIONS(905), 1,
      aux_sym_block_title_token1,
  [2305] = 1,
    ACTIONS(907), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2309] = 1,
    ACTIONS(909), 1,
      anon_sym_,
  [2313] = 1,
    ACTIONS(911), 1,
      anon_sym_LF,
  [2317] = 1,
    ACTIONS(913), 1,
      anon_sym_LF,
  [2321] = 1,
    ACTIONS(915), 1,
      aux_sym_block_title_token1,
  [2325] = 1,
    ACTIONS(917), 1,
      anon_sym_LF,
  [2329] = 1,
    ACTIONS(919), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2333] = 1,
    ACTIONS(921), 1,
      anon_sym_GT,
  [2337] = 1,
    ACTIONS(923), 1,
      sym_email,
  [2341] = 1,
    ACTIONS(925), 1,
      aux_sym_block_title_token1,
  [2345] = 1,
    ACTIONS(927), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2349] = 1,
    ACTIONS(929), 1,
      aux_sym_block_title_token1,
  [2353] = 1,
    ACTIONS(931), 1,
      anon_sym_,
  [2357] = 1,
    ACTIONS(933), 1,
      anon_sym_,
  [2361] = 1,
    ACTIONS(935), 1,
      anon_sym_LF,
  [2365] = 1,
    ACTIONS(937), 1,
      anon_sym_GT,
  [2369] = 1,
    ACTIONS(939), 1,
      sym_email,
  [2373] = 1,
    ACTIONS(941), 1,
      anon_sym_,
  [2377] = 1,
    ACTIONS(943), 1,
      anon_sym_,
  [2381] = 1,
    ACTIONS(945), 1,
      anon_sym_LF,
  [2385] = 1,
    ACTIONS(947), 1,
      anon_sym_GT,
  [2389] = 1,
    ACTIONS(949), 1,
      anon_sym_,
  [2393] = 1,
    ACTIONS(951), 1,
      anon_sym_LF,
  [2397] = 1,
    ACTIONS(953), 1,
      anon_sym_,
  [2401] = 1,
    ACTIONS(709), 1,
      anon_sym_RBRACK_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(51)] = 0,
  [SMALL_STATE(52)] = 103,
  [SMALL_STATE(53)] = 206,
  [SMALL_STATE(54)] = 317,
  [SMALL_STATE(55)] = 370,
  [SMALL_STATE(56)] = 423,
  [SMALL_STATE(57)] = 476,
  [SMALL_STATE(58)] = 529,
  [SMALL_STATE(59)] = 582,
  [SMALL_STATE(60)] = 635,
  [SMALL_STATE(61)] = 688,
  [SMALL_STATE(62)] = 741,
  [SMALL_STATE(63)] = 794,
  [SMALL_STATE(64)] = 847,
  [SMALL_STATE(65)] = 900,
  [SMALL_STATE(66)] = 953,
  [SMALL_STATE(67)] = 1006,
  [SMALL_STATE(68)] = 1059,
  [SMALL_STATE(69)] = 1112,
  [SMALL_STATE(70)] = 1165,
  [SMALL_STATE(71)] = 1218,
  [SMALL_STATE(72)] = 1271,
  [SMALL_STATE(73)] = 1297,
  [SMALL_STATE(74)] = 1321,
  [SMALL_STATE(75)] = 1345,
  [SMALL_STATE(76)] = 1369,
  [SMALL_STATE(77)] = 1393,
  [SMALL_STATE(78)] = 1417,
  [SMALL_STATE(79)] = 1439,
  [SMALL_STATE(80)] = 1450,
  [SMALL_STATE(81)] = 1466,
  [SMALL_STATE(82)] = 1473,
  [SMALL_STATE(83)] = 1484,
  [SMALL_STATE(84)] = 1495,
  [SMALL_STATE(85)] = 1508,
  [SMALL_STATE(86)] = 1518,
  [SMALL_STATE(87)] = 1528,
  [SMALL_STATE(88)] = 1538,
  [SMALL_STATE(89)] = 1544,
  [SMALL_STATE(90)] = 1554,
  [SMALL_STATE(91)] = 1560,
  [SMALL_STATE(92)] = 1566,
  [SMALL_STATE(93)] = 1572,
  [SMALL_STATE(94)] = 1578,
  [SMALL_STATE(95)] = 1588,
  [SMALL_STATE(96)] = 1594,
  [SMALL_STATE(97)] = 1600,
  [SMALL_STATE(98)] = 1610,
  [SMALL_STATE(99)] = 1620,
  [SMALL_STATE(100)] = 1630,
  [SMALL_STATE(101)] = 1640,
  [SMALL_STATE(102)] = 1650,
  [SMALL_STATE(103)] = 1660,
  [SMALL_STATE(104)] = 1666,
  [SMALL_STATE(105)] = 1676,
  [SMALL_STATE(106)] = 1686,
  [SMALL_STATE(107)] = 1696,
  [SMALL_STATE(108)] = 1702,
  [SMALL_STATE(109)] = 1708,
  [SMALL_STATE(110)] = 1714,
  [SMALL_STATE(111)] = 1724,
  [SMALL_STATE(112)] = 1734,
  [SMALL_STATE(113)] = 1740,
  [SMALL_STATE(114)] = 1750,
  [SMALL_STATE(115)] = 1756,
  [SMALL_STATE(116)] = 1766,
  [SMALL_STATE(117)] = 1772,
  [SMALL_STATE(118)] = 1782,
  [SMALL_STATE(119)] = 1788,
  [SMALL_STATE(120)] = 1798,
  [SMALL_STATE(121)] = 1804,
  [SMALL_STATE(122)] = 1811,
  [SMALL_STATE(123)] = 1818,
  [SMALL_STATE(124)] = 1825,
  [SMALL_STATE(125)] = 1832,
  [SMALL_STATE(126)] = 1839,
  [SMALL_STATE(127)] = 1846,
  [SMALL_STATE(128)] = 1853,
  [SMALL_STATE(129)] = 1858,
  [SMALL_STATE(130)] = 1865,
  [SMALL_STATE(131)] = 1872,
  [SMALL_STATE(132)] = 1879,
  [SMALL_STATE(133)] = 1886,
  [SMALL_STATE(134)] = 1893,
  [SMALL_STATE(135)] = 1900,
  [SMALL_STATE(136)] = 1907,
  [SMALL_STATE(137)] = 1914,
  [SMALL_STATE(138)] = 1919,
  [SMALL_STATE(139)] = 1926,
  [SMALL_STATE(140)] = 1931,
  [SMALL_STATE(141)] = 1938,
  [SMALL_STATE(142)] = 1945,
  [SMALL_STATE(143)] = 1952,
  [SMALL_STATE(144)] = 1957,
  [SMALL_STATE(145)] = 1964,
  [SMALL_STATE(146)] = 1971,
  [SMALL_STATE(147)] = 1978,
  [SMALL_STATE(148)] = 1985,
  [SMALL_STATE(149)] = 1989,
  [SMALL_STATE(150)] = 1993,
  [SMALL_STATE(151)] = 1997,
  [SMALL_STATE(152)] = 2001,
  [SMALL_STATE(153)] = 2005,
  [SMALL_STATE(154)] = 2009,
  [SMALL_STATE(155)] = 2013,
  [SMALL_STATE(156)] = 2017,
  [SMALL_STATE(157)] = 2021,
  [SMALL_STATE(158)] = 2025,
  [SMALL_STATE(159)] = 2029,
  [SMALL_STATE(160)] = 2033,
  [SMALL_STATE(161)] = 2037,
  [SMALL_STATE(162)] = 2041,
  [SMALL_STATE(163)] = 2045,
  [SMALL_STATE(164)] = 2049,
  [SMALL_STATE(165)] = 2053,
  [SMALL_STATE(166)] = 2057,
  [SMALL_STATE(167)] = 2061,
  [SMALL_STATE(168)] = 2065,
  [SMALL_STATE(169)] = 2069,
  [SMALL_STATE(170)] = 2073,
  [SMALL_STATE(171)] = 2077,
  [SMALL_STATE(172)] = 2081,
  [SMALL_STATE(173)] = 2085,
  [SMALL_STATE(174)] = 2089,
  [SMALL_STATE(175)] = 2093,
  [SMALL_STATE(176)] = 2097,
  [SMALL_STATE(177)] = 2101,
  [SMALL_STATE(178)] = 2105,
  [SMALL_STATE(179)] = 2109,
  [SMALL_STATE(180)] = 2113,
  [SMALL_STATE(181)] = 2117,
  [SMALL_STATE(182)] = 2121,
  [SMALL_STATE(183)] = 2125,
  [SMALL_STATE(184)] = 2129,
  [SMALL_STATE(185)] = 2133,
  [SMALL_STATE(186)] = 2137,
  [SMALL_STATE(187)] = 2141,
  [SMALL_STATE(188)] = 2145,
  [SMALL_STATE(189)] = 2149,
  [SMALL_STATE(190)] = 2153,
  [SMALL_STATE(191)] = 2157,
  [SMALL_STATE(192)] = 2161,
  [SMALL_STATE(193)] = 2165,
  [SMALL_STATE(194)] = 2169,
  [SMALL_STATE(195)] = 2173,
  [SMALL_STATE(196)] = 2177,
  [SMALL_STATE(197)] = 2181,
  [SMALL_STATE(198)] = 2185,
  [SMALL_STATE(199)] = 2189,
  [SMALL_STATE(200)] = 2193,
  [SMALL_STATE(201)] = 2197,
  [SMALL_STATE(202)] = 2201,
  [SMALL_STATE(203)] = 2205,
  [SMALL_STATE(204)] = 2209,
  [SMALL_STATE(205)] = 2213,
  [SMALL_STATE(206)] = 2217,
  [SMALL_STATE(207)] = 2221,
  [SMALL_STATE(208)] = 2225,
  [SMALL_STATE(209)] = 2229,
  [SMALL_STATE(210)] = 2233,
  [SMALL_STATE(211)] = 2237,
  [SMALL_STATE(212)] = 2241,
  [SMALL_STATE(213)] = 2245,
  [SMALL_STATE(214)] = 2249,
  [SMALL_STATE(215)] = 2253,
  [SMALL_STATE(216)] = 2257,
  [SMALL_STATE(217)] = 2261,
  [SMALL_STATE(218)] = 2265,
  [SMALL_STATE(219)] = 2269,
  [SMALL_STATE(220)] = 2273,
  [SMALL_STATE(221)] = 2277,
  [SMALL_STATE(222)] = 2281,
  [SMALL_STATE(223)] = 2285,
  [SMALL_STATE(224)] = 2289,
  [SMALL_STATE(225)] = 2293,
  [SMALL_STATE(226)] = 2297,
  [SMALL_STATE(227)] = 2301,
  [SMALL_STATE(228)] = 2305,
  [SMALL_STATE(229)] = 2309,
  [SMALL_STATE(230)] = 2313,
  [SMALL_STATE(231)] = 2317,
  [SMALL_STATE(232)] = 2321,
  [SMALL_STATE(233)] = 2325,
  [SMALL_STATE(234)] = 2329,
  [SMALL_STATE(235)] = 2333,
  [SMALL_STATE(236)] = 2337,
  [SMALL_STATE(237)] = 2341,
  [SMALL_STATE(238)] = 2345,
  [SMALL_STATE(239)] = 2349,
  [SMALL_STATE(240)] = 2353,
  [SMALL_STATE(241)] = 2357,
  [SMALL_STATE(242)] = 2361,
  [SMALL_STATE(243)] = 2365,
  [SMALL_STATE(244)] = 2369,
  [SMALL_STATE(245)] = 2373,
  [SMALL_STATE(246)] = 2377,
  [SMALL_STATE(247)] = 2381,
  [SMALL_STATE(248)] = 2385,
  [SMALL_STATE(249)] = 2389,
  [SMALL_STATE(250)] = 2393,
  [SMALL_STATE(251)] = 2397,
  [SMALL_STATE(252)] = 2401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(159),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(251),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(249),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(246),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(245),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(241),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(240),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(239),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(238),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(237),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(234),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(232),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(228),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(227),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(225),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(224),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(222),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(220),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(219),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(219),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(218),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(216),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(131),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(138),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(143),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(215),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(214),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(130),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title2, 3, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title2, 3, .production_id = 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 4, .production_id = 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 4, .production_id = 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title5, 3, .production_id = 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title5, 3, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title4, 3, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title4, 3, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title3, 3, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title3, 3, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 3, .production_id = 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title1, 3, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 7),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 7),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 8),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 8),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 7),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 10),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 10),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 8),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 8),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 6),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 6),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 7),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 7),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 5, .production_id = 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 5, .production_id = 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(51),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(138),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(140),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(143),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(215),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(214),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(146),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(147),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(51),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(134),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(130),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(63),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailto, 5),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_macro, 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_macro, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_links, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_links, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_macro, 5, .production_id = 9),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_macro, 5, .production_id = 9),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 7),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 7),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 7),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 7),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailto, 4),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(151),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(78),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(220),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(219),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(219),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(220),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 4, .production_id = 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 4, .production_id = 4),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_list_repeat1, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_list_repeat1, 2), SHIFT_REPEAT(218),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_content, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__page_layout, 6),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(89),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype, 6),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 10),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(94),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 6),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 8),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_content, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 9),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_repo, 6),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_with_underscores, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 7),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doc_description, 5, .production_id = 11),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hide_uri_scheme, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sectanchors, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_start, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list_item, 4, .production_id = 5),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolinks, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [879] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordered_list_mark, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
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
