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
#define STATE_COUNT 235
#define LARGE_STATE_COUNT 75
#define SYMBOL_COUNT 225
#define ALIAS_COUNT 4
#define TOKEN_COUNT 143
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_doctype = 12,
  anon_sym_article = 13,
  anon_sym_book = 14,
  anon_sym_manpage = 15,
  anon_sym_inline = 16,
  anon_sym_LF = 17,
  anon_sym_page_DASHlayout = 18,
  anon_sym_docs = 19,
  anon_sym_landscape = 20,
  anon_sym_portrait = 21,
  anon_sym_description = 22,
  aux_sym__doc_description_token1 = 23,
  anon_sym_url_DASHrepo = 24,
  anon_sym_link_DASHwith_DASHunderscores = 25,
  anon_sym_hide_DASHuri_DASHscheme = 26,
  anon_sym_sectanchors = 27,
  anon_sym_COLON = 28,
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
  anon_sym_BANG = 61,
  anon_sym_DQUOTE = 62,
  anon_sym_POUND = 63,
  anon_sym_DOLLAR = 64,
  anon_sym_PERCENT = 65,
  anon_sym_AMP = 66,
  anon_sym_SQUOTE = 67,
  anon_sym_LPAREN = 68,
  anon_sym_RPAREN = 69,
  anon_sym_STAR = 70,
  anon_sym_PLUS = 71,
  anon_sym_COMMA = 72,
  anon_sym_DASH = 73,
  anon_sym_SLASH = 74,
  anon_sym_SEMI = 75,
  anon_sym_LT = 76,
  anon_sym_GT = 77,
  anon_sym_QMARK = 78,
  anon_sym_AT = 79,
  anon_sym_BSLASH = 80,
  anon_sym_CARET = 81,
  anon_sym__ = 82,
  anon_sym_BQUOTE = 83,
  anon_sym_LBRACE = 84,
  anon_sym_PIPE = 85,
  anon_sym_RBRACE = 86,
  anon_sym_TILDE = 87,
  sym_word = 88,
  sym_whitespace = 89,
  aux_sym__inline_element_token1 = 90,
  anon_sym_kbd_COLON_LBRACK = 91,
  sym_kbd_content = 92,
  anon_sym_footnote_COLON_LBRACK = 93,
  sym_footnote_content = 94,
  aux_sym_autolinks_token1 = 95,
  aux_sym_url_macro_token1 = 96,
  anon_sym_link_COLON = 97,
  aux_sym_link_macro_token1 = 98,
  anon_sym_mailto_COLON = 99,
  aux_sym_mailto_token1 = 100,
  anon_sym_LT_LT = 101,
  anon_sym_GT_GT = 102,
  anon_sym_xref_COLON = 103,
  sym_emphasis = 104,
  sym_strong = 105,
  sym_monospace = 106,
  sym_highlight = 107,
  sym_superscript = 108,
  sym_subscript = 109,
  anon_sym_PLUS_PLUS_PLUS = 110,
  anon_sym_pass_COLON_LBRACK = 111,
  anon_sym_LBRACEblank_RBRACE = 112,
  anon_sym_LBRACEempty_RBRACE = 113,
  anon_sym_LBRACEsp_RBRACE = 114,
  anon_sym_LBRACEnbsp_RBRACE = 115,
  anon_sym_LBRACEzwsp_RBRACE = 116,
  anon_sym_LBRACEwj_RBRACE = 117,
  anon_sym_LBRACEapos_RBRACE = 118,
  anon_sym_LBRACEquot_RBRACE = 119,
  anon_sym_LBRACElsquo_RBRACE = 120,
  anon_sym_LBRACErsquo_RBRACE = 121,
  anon_sym_LBRACEldquo_RBRACE = 122,
  anon_sym_LBRACErdquo_RBRACE = 123,
  anon_sym_LBRACEdeg_RBRACE = 124,
  anon_sym_LBRACEplus_RBRACE = 125,
  anon_sym_LBRACEbrvbar_RBRACE = 126,
  anon_sym_LBRACEvbar_RBRACE = 127,
  anon_sym_LBRACEamp_RBRACE = 128,
  anon_sym_LBRACElt_RBRACE = 129,
  anon_sym_LBRACEgt_RBRACE = 130,
  anon_sym_LBRACEstartsb_RBRACE = 131,
  anon_sym_LBRACEendsb_RBRACE = 132,
  anon_sym_LBRACEcaret_RBRACE = 133,
  anon_sym_LBRACEasterisk_RBRACE = 134,
  anon_sym_LBRACEtilde_RBRACE = 135,
  anon_sym_LBRACEbackslash_RBRACE = 136,
  anon_sym_LBRACEbacktick_RBRACE = 137,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 138,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 139,
  anon_sym_LBRACEcpp_RBRACE = 140,
  anon_sym_LBRACEpp_RBRACE = 141,
  sym_eof = 142,
  sym_document = 143,
  sym__block = 144,
  sym__titled_block = 145,
  sym_block_title = 146,
  sym_title0 = 147,
  sym_title1 = 148,
  sym_title2 = 149,
  sym_title3 = 150,
  sym_title4 = 151,
  sym_title5 = 152,
  sym__doctype = 153,
  sym__page_layout = 154,
  sym__doc_description = 155,
  sym__url_repo = 156,
  sym__link_with_underscores = 157,
  sym__hide_uri_scheme = 158,
  sym__sectanchors = 159,
  sym_doc_attr = 160,
  sym_attr_mark = 161,
  sym__admonitions = 162,
  sym_note = 163,
  sym__note_line = 164,
  sym__note_block = 165,
  sym_tip = 166,
  sym__tip = 167,
  sym__tip_block = 168,
  sym_important = 169,
  sym__important = 170,
  sym__important_block = 171,
  sym_caution = 172,
  sym__caution = 173,
  sym__caution_block = 174,
  sym_warning = 175,
  sym__warning = 176,
  sym__warning_block = 177,
  sym_list = 178,
  sym_list_item = 179,
  sym__ordered_list_mark = 180,
  sym_code = 181,
  sym_code_language = 182,
  sym_code_content = 183,
  sym_comment = 184,
  sym_line_breaks = 185,
  sym_page_breaks = 186,
  sym_image = 187,
  sym_table = 188,
  sym_table_start = 189,
  sym_table_content = 190,
  sym_table_end = 191,
  sym_description_list = 192,
  sym_description_list_item = 193,
  sym_audio = 194,
  sym_audio_url = 195,
  sym_audio_title = 196,
  sym_video = 197,
  sym_paragraph = 198,
  sym_line = 199,
  sym__inline_element = 200,
  sym_kbd = 201,
  sym_footnote = 202,
  sym_links = 203,
  sym_autolinks = 204,
  sym_url_macro = 205,
  sym_link_macro = 206,
  sym_mailto = 207,
  sym_xref = 208,
  sym__inline_xref = 209,
  sym__xref = 210,
  sym_xref_url = 211,
  sym_passthrough = 212,
  sym__passthrough_plus = 213,
  sym__passthrough_cmd = 214,
  sym_passthrough_content = 215,
  sym_replacement = 216,
  aux_sym_document_repeat1 = 217,
  aux_sym_title0_repeat1 = 218,
  aux_sym__note_block_repeat1 = 219,
  aux_sym_list_repeat1 = 220,
  aux_sym_table_content_repeat1 = 221,
  aux_sym_description_list_repeat1 = 222,
  aux_sym_paragraph_repeat1 = 223,
  aux_sym_line_repeat1 = 224,
  alias_sym_list_item_content = 225,
  alias_sym_list_item_name = 226,
  alias_sym_title_content = 227,
  alias_sym_url_title = 228,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [aux_sym_block_title_token1] = "block_title_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_] = " ",
  [aux_sym_title0_token1] = "title0_token1",
  [aux_sym_title0_token2] = "title0_token2",
  [anon_sym_EQ_EQ] = "title_marker",
  [anon_sym_EQ_EQ_EQ] = "title_marker",
  [anon_sym_EQ_EQ_EQ_EQ] = "title_marker",
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = "title_marker",
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = "title_marker",
  [anon_sym_doctype] = "attr_name",
  [anon_sym_article] = "attr_value",
  [anon_sym_book] = "attr_value",
  [anon_sym_manpage] = "attr_value",
  [anon_sym_inline] = "attr_value",
  [anon_sym_LF] = "\n",
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
  [anon_sym_COLON] = ":",
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
  [anon_sym_BANG] = "!",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AT] = "@",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TILDE] = "~",
  [sym_word] = "word",
  [sym_whitespace] = "whitespace",
  [aux_sym__inline_element_token1] = "_inline_element_token1",
  [anon_sym_kbd_COLON_LBRACK] = "kbd:[",
  [sym_kbd_content] = "kbd_content",
  [anon_sym_footnote_COLON_LBRACK] = "footnote:[",
  [sym_footnote_content] = "footnote_content",
  [aux_sym_autolinks_token1] = "url",
  [aux_sym_url_macro_token1] = "url_macro_token1",
  [anon_sym_link_COLON] = "link:",
  [aux_sym_link_macro_token1] = "url",
  [anon_sym_mailto_COLON] = "mailto:",
  [aux_sym_mailto_token1] = "url",
  [anon_sym_LT_LT] = "<<",
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
  [sym_eof] = "eof",
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
  [sym__doctype] = "_doctype",
  [sym__page_layout] = "_page_layout",
  [sym__doc_description] = "_doc_description",
  [sym__url_repo] = "_url_repo",
  [sym__link_with_underscores] = "_link_with_underscores",
  [sym__hide_uri_scheme] = "_hide_uri_scheme",
  [sym__sectanchors] = "_sectanchors",
  [sym_doc_attr] = "doc_attr",
  [sym_attr_mark] = "attr_mark",
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
  [sym_line] = "line",
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
  [aux_sym_line_repeat1] = "line_repeat1",
  [alias_sym_list_item_content] = "list_item_content",
  [alias_sym_list_item_name] = "list_item_name",
  [alias_sym_title_content] = "title_content",
  [alias_sym_url_title] = "url_title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_block_title_token1] = aux_sym_block_title_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_] = anon_sym_,
  [aux_sym_title0_token1] = aux_sym_title0_token1,
  [aux_sym_title0_token2] = aux_sym_title0_token2,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_article] = anon_sym_article,
  [anon_sym_book] = anon_sym_article,
  [anon_sym_manpage] = anon_sym_article,
  [anon_sym_inline] = anon_sym_article,
  [anon_sym_LF] = anon_sym_LF,
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_word] = sym_word,
  [sym_whitespace] = sym_whitespace,
  [aux_sym__inline_element_token1] = aux_sym__inline_element_token1,
  [anon_sym_kbd_COLON_LBRACK] = anon_sym_kbd_COLON_LBRACK,
  [sym_kbd_content] = sym_kbd_content,
  [anon_sym_footnote_COLON_LBRACK] = anon_sym_footnote_COLON_LBRACK,
  [sym_footnote_content] = sym_footnote_content,
  [aux_sym_autolinks_token1] = aux_sym_autolinks_token1,
  [aux_sym_url_macro_token1] = aux_sym_url_macro_token1,
  [anon_sym_link_COLON] = anon_sym_link_COLON,
  [aux_sym_link_macro_token1] = aux_sym_autolinks_token1,
  [anon_sym_mailto_COLON] = anon_sym_mailto_COLON,
  [aux_sym_mailto_token1] = aux_sym_autolinks_token1,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
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
  [sym_eof] = sym_eof,
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
  [sym__doctype] = sym__doctype,
  [sym__page_layout] = sym__page_layout,
  [sym__doc_description] = sym__doc_description,
  [sym__url_repo] = sym__url_repo,
  [sym__link_with_underscores] = sym__link_with_underscores,
  [sym__hide_uri_scheme] = sym__hide_uri_scheme,
  [sym__sectanchors] = sym__sectanchors,
  [sym_doc_attr] = sym_doc_attr,
  [sym_attr_mark] = sym_attr_mark,
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
  [sym_line] = sym_line,
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
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [alias_sym_list_item_content] = alias_sym_list_item_content,
  [alias_sym_list_item_name] = alias_sym_list_item_name,
  [alias_sym_title_content] = alias_sym_title_content,
  [alias_sym_url_title] = alias_sym_url_title,
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
    .named = false,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [anon_sym_COLON] = {
    .visible = true,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
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
    .visible = false,
    .named = false,
  },
  [anon_sym_link_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_macro_token1] = {
    .visible = true,
    .named = true,
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
  [sym_eof] = {
    .visible = true,
    .named = true,
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
  [sym_attr_mark] = {
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
  [sym_line] = {
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
  [aux_sym_line_repeat1] = {
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
  [alias_sym_url_title] = {
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
  [8] = {.index = 3, .length = 1},
  [9] = {.index = 4, .length = 2},
  [10] = {.index = 6, .length = 1},
  [12] = {.index = 7, .length = 2},
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
    [0] = anon_sym_EQ_EQ,
    [2] = alias_sym_title_content,
  },
  [5] = {
    [2] = alias_sym_list_item_content,
  },
  [6] = {
    [0] = alias_sym_list_item_name,
    [2] = alias_sym_list_item_content,
  },
  [7] = {
    [2] = alias_sym_url_title,
  },
  [11] = {
    [3] = alias_sym_url_title,
  },
  [13] = {
    [3] = anon_sym_article,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_line, 2,
    sym_line,
    alias_sym_list_item_content,
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
  [77] = 54,
  [78] = 56,
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
  [232] = 133,
  [233] = 83,
  [234] = 83,
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

static inline bool sym_word_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(364);
      if (lookahead == '\t') ADVANCE(1036);
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\r') ADVANCE(1037);
      if (lookahead == ' ') ADVANCE(559);
      if (lookahead == '!') ADVANCE(907);
      if (lookahead == '"') ADVANCE(910);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '$') ADVANCE(917);
      if (lookahead == '%') ADVANCE(920);
      if (lookahead == '&') ADVANCE(923);
      if (lookahead == '\'') ADVANCE(926);
      if (lookahead == '(') ADVANCE(929);
      if (lookahead == ')') ADVANCE(932);
      if (lookahead == '*') ADVANCE(938);
      if (lookahead == '+') ADVANCE(942);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(954);
      if (lookahead == '0') ADVANCE(633);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == ';') ADVANCE(955);
      if (lookahead == '<') ADVANCE(961);
      if (lookahead == '=') ADVANCE(557);
      if (lookahead == '>') ADVANCE(963);
      if (lookahead == '?') ADVANCE(966);
      if (lookahead == '@') ADVANCE(969);
      if (lookahead == 'C') ADVANCE(744);
      if (lookahead == 'I') ADVANCE(757);
      if (lookahead == 'N') ADVANCE(766);
      if (lookahead == 'T') ADVANCE(752);
      if (lookahead == 'W') ADVANCE(745);
      if (lookahead == '[') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(972);
      if (lookahead == ']') ADVANCE(901);
      if (lookahead == '^') ADVANCE(978);
      if (lookahead == '_') ADVANCE(983);
      if (lookahead == '`') ADVANCE(987);
      if (lookahead == 'a') ADVANCE(857);
      if (lookahead == 'b') ADVANCE(844);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(846);
      if (lookahead == 'i') ADVANCE(836);
      if (lookahead == 'k') ADVANCE(797);
      if (lookahead == 'l') ADVANCE(789);
      if (lookahead == 'm') ADVANCE(790);
      if (lookahead == 'p') ADVANCE(792);
      if (lookahead == 's') ADVANCE(815);
      if (lookahead == 'v') ADVANCE(824);
      if (lookahead == 'x') ADVANCE(858);
      if (lookahead == '{') ADVANCE(991);
      if (lookahead == '|') ADVANCE(995);
      if (lookahead == '}') ADVANCE(996);
      if (lookahead == '~') ADVANCE(1002);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0) ADVANCE(1034);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(1036);
      if (lookahead == '\n') ADVANCE(1038);
      if (lookahead == '\r') ADVANCE(1037);
      if (lookahead == ' ') ADVANCE(559);
      if (lookahead == '!') ADVANCE(907);
      if (lookahead == '"') ADVANCE(910);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '$') ADVANCE(917);
      if (lookahead == '%') ADVANCE(920);
      if (lookahead == '&') ADVANCE(923);
      if (lookahead == '\'') ADVANCE(926);
      if (lookahead == '(') ADVANCE(929);
      if (lookahead == ')') ADVANCE(932);
      if (lookahead == '*') ADVANCE(939);
      if (lookahead == '+') ADVANCE(942);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(947);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == ';') ADVANCE(955);
      if (lookahead == '<') ADVANCE(962);
      if (lookahead == '=') ADVANCE(554);
      if (lookahead == '>') ADVANCE(963);
      if (lookahead == '?') ADVANCE(966);
      if (lookahead == '@') ADVANCE(969);
      if (lookahead == '[') ADVANCE(894);
      if (lookahead == '\\') ADVANCE(972);
      if (lookahead == ']') ADVANCE(901);
      if (lookahead == '^') ADVANCE(978);
      if (lookahead == '_') ADVANCE(982);
      if (lookahead == '`') ADVANCE(987);
      if (lookahead == 'f') ADVANCE(1018);
      if (lookahead == 'k') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(1011);
      if (lookahead == 'm') ADVANCE(1005);
      if (lookahead == 'p') ADVANCE(1004);
      if (lookahead == 'x') ADVANCE(1021);
      if (lookahead == '{') ADVANCE(991);
      if (lookahead == '|') ADVANCE(992);
      if (lookahead == '}') ADVANCE(996);
      if (lookahead == '~') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0) ADVANCE(1034);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == ' ') ADVANCE(558);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '[') ADVANCE(894);
      if (lookahead == ']') ADVANCE(901);
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(891);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(892);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(898);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(603);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(599);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(607);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(609);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(605);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(1038);
      if (lookahead == '\r') ADVANCE(1037);
      if (lookahead == '!') ADVANCE(907);
      if (lookahead == '"') ADVANCE(910);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '$') ADVANCE(917);
      if (lookahead == '%') ADVANCE(920);
      if (lookahead == '&') ADVANCE(923);
      if (lookahead == '\'') ADVANCE(926);
      if (lookahead == '(') ADVANCE(929);
      if (lookahead == ')') ADVANCE(932);
      if (lookahead == '*') ADVANCE(939);
      if (lookahead == '+') ADVANCE(942);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(947);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == ';') ADVANCE(955);
      if (lookahead == '<') ADVANCE(962);
      if (lookahead == '=') ADVANCE(554);
      if (lookahead == '>') ADVANCE(963);
      if (lookahead == '?') ADVANCE(966);
      if (lookahead == '@') ADVANCE(969);
      if (lookahead == '[') ADVANCE(894);
      if (lookahead == '\\') ADVANCE(972);
      if (lookahead == ']') ADVANCE(901);
      if (lookahead == '^') ADVANCE(978);
      if (lookahead == '_') ADVANCE(982);
      if (lookahead == '`') ADVANCE(987);
      if (lookahead == 'f') ADVANCE(1018);
      if (lookahead == 'k') ADVANCE(1006);
      if (lookahead == 'l') ADVANCE(1011);
      if (lookahead == 'm') ADVANCE(1005);
      if (lookahead == 'p') ADVANCE(1004);
      if (lookahead == 'x') ADVANCE(1021);
      if (lookahead == '{') ADVANCE(991);
      if (lookahead == '|') ADVANCE(992);
      if (lookahead == '}') ADVANCE(996);
      if (lookahead == '~') ADVANCE(1002);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0) ADVANCE(1034);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(1038);
      if (lookahead == '\r') ADVANCE(553);
      if (lookahead == '!') ADVANCE(908);
      if (lookahead == '"') ADVANCE(911);
      if (lookahead == '#') ADVANCE(914);
      if (lookahead == '$') ADVANCE(918);
      if (lookahead == '%') ADVANCE(921);
      if (lookahead == '&') ADVANCE(924);
      if (lookahead == '\'') ADVANCE(927);
      if (lookahead == '(') ADVANCE(930);
      if (lookahead == ')') ADVANCE(933);
      if (lookahead == '*') ADVANCE(936);
      if (lookahead == '+') ADVANCE(941);
      if (lookahead == ',') ADVANCE(945);
      if (lookahead == '-') ADVANCE(948);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(952);
      if (lookahead == ':') ADVANCE(596);
      if (lookahead == ';') ADVANCE(956);
      if (lookahead == '<') ADVANCE(959);
      if (lookahead == '=') ADVANCE(555);
      if (lookahead == '>') ADVANCE(964);
      if (lookahead == '?') ADVANCE(967);
      if (lookahead == '@') ADVANCE(970);
      if (lookahead == '[') ADVANCE(895);
      if (lookahead == '\\') ADVANCE(973);
      if (lookahead == ']') ADVANCE(902);
      if (lookahead == '^') ADVANCE(976);
      if (lookahead == '_') ADVANCE(980);
      if (lookahead == '`') ADVANCE(985);
      if (lookahead == 'f') ADVANCE(396);
      if (lookahead == 'k') ADVANCE(384);
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(382);
      if (lookahead == 'x') ADVANCE(399);
      if (lookahead == '{') ADVANCE(989);
      if (lookahead == '|') ADVANCE(993);
      if (lookahead == '}') ADVANCE(997);
      if (lookahead == '~') ADVANCE(1000);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '*') ADVANCE(612);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == '.') ADVANCE(618);
      if (lookahead == '0') ADVANCE(634);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == 'C') ADVANCE(650);
      if (lookahead == 'I') ADVANCE(653);
      if (lookahead == 'N') ADVANCE(654);
      if (lookahead == 'T') ADVANCE(652);
      if (lookahead == 'W') ADVANCE(651);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'i') ADVANCE(656);
      if (lookahead == 'v') ADVANCE(655);
      if (lookahead == '|') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(631);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(562);
      if (lookahead == '!') ADVANCE(907);
      if (lookahead == '"') ADVANCE(910);
      if (lookahead == '#') ADVANCE(913);
      if (lookahead == '$') ADVANCE(917);
      if (lookahead == '%') ADVANCE(920);
      if (lookahead == '&') ADVANCE(923);
      if (lookahead == '\'') ADVANCE(926);
      if (lookahead == '(') ADVANCE(929);
      if (lookahead == ')') ADVANCE(932);
      if (lookahead == '*') ADVANCE(935);
      if (lookahead == '+') ADVANCE(940);
      if (lookahead == ',') ADVANCE(944);
      if (lookahead == '-') ADVANCE(947);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == '/') ADVANCE(951);
      if (lookahead == ':') ADVANCE(595);
      if (lookahead == ';') ADVANCE(955);
      if (lookahead == '<') ADVANCE(958);
      if (lookahead == '=') ADVANCE(554);
      if (lookahead == '>') ADVANCE(963);
      if (lookahead == '?') ADVANCE(966);
      if (lookahead == '@') ADVANCE(969);
      if (lookahead == '[') ADVANCE(894);
      if (lookahead == '\\') ADVANCE(972);
      if (lookahead == ']') ADVANCE(901);
      if (lookahead == '^') ADVANCE(975);
      if (lookahead == '_') ADVANCE(979);
      if (lookahead == '`') ADVANCE(984);
      if (lookahead == '{') ADVANCE(988);
      if (lookahead == '|') ADVANCE(992);
      if (lookahead == '}') ADVANCE(996);
      if (lookahead == '~') ADVANCE(999);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(1034);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(600);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(600);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(601);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(601);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(601);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(601);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(890);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(602);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(598);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(598);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(606);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(606);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(608);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(608);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(604);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(604);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(899);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(1068);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(1068);
      if (lookahead == ']') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(1067);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '+') ADVANCE(1073);
      END_STATE();
    case 42:
      if (lookahead == ',') ADVANCE(630);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(80);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(319);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(315);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(272);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(212);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '>') ADVANCE(1061);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '@') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(359);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '_') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(900);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(893);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(905);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '[') ADVANCE(1040);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '[') ADVANCE(1075);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '[') ADVANCE(1044);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '_') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(900);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(893);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(905);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '_') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 77:
      if (lookahead == '>') ADVANCE(1061);
      END_STATE();
    case 78:
      if (lookahead == '@') ADVANCE(358);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 83:
      if (lookahead == 'G') ADVANCE(117);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 92:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'P') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'P') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '_') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1047);
      END_STATE();
    case 105:
      if (lookahead == '[') ADVANCE(1040);
      END_STATE();
    case 106:
      if (lookahead == '[') ADVANCE(1075);
      END_STATE();
    case 107:
      if (lookahead == '[') ADVANCE(1044);
      END_STATE();
    case 108:
      if (lookahead == '[') ADVANCE(894);
      if (lookahead == ']') ADVANCE(901);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 109:
      if (lookahead == '[') ADVANCE(356);
      END_STATE();
    case 110:
      if (lookahead == ']') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1042);
      END_STATE();
    case 111:
      if (lookahead == ']') ADVANCE(901);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1046);
      END_STATE();
    case 112:
      if (lookahead == ']') ADVANCE(901);
      if (lookahead != 0) ADVANCE(1049);
      END_STATE();
    case 113:
      if (lookahead == ']') ADVANCE(627);
      END_STATE();
    case 114:
      if (lookahead == ']') ADVANCE(7);
      END_STATE();
    case 115:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 116:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 117:
      if (lookahead == ']') ADVANCE(10);
      END_STATE();
    case 118:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 119:
      if (lookahead == '^') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == '`') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(294);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(342);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(349);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 181:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 183:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 184:
      if (lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 185:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 186:
      if (lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 199:
      if (lookahead == 'j') ADVANCE(329);
      END_STATE();
    case 200:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 201:
      if (lookahead == 'k') ADVANCE(572);
      END_STATE();
    case 202:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 203:
      if (lookahead == 'k') ADVANCE(339);
      END_STATE();
    case 204:
      if (lookahead == 'k') ADVANCE(350);
      END_STATE();
    case 205:
      if (lookahead == 'k') ADVANCE(351);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(251);
      if (lookahead == 'p') ADVANCE(232);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 255:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 256:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 257:
      if (lookahead == 'p') ADVANCE(338);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 259:
      if (lookahead == 'q') ADVANCE(310);
      END_STATE();
    case 260:
      if (lookahead == 'q') ADVANCE(314);
      END_STATE();
    case 261:
      if (lookahead == 'q') ADVANCE(316);
      END_STATE();
    case 262:
      if (lookahead == 'q') ADVANCE(317);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(581);
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 312:
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 313:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 318:
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 319:
      if (lookahead == 'w') ADVANCE(192);
      END_STATE();
    case 320:
      if (lookahead == 'w') ADVANCE(295);
      END_STATE();
    case 321:
      if (lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 322:
      if (lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 323:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 324:
      if (lookahead == '|') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(553);
      END_STATE();
    case 325:
      if (lookahead == '}') ADVANCE(1113);
      END_STATE();
    case 326:
      if (lookahead == '}') ADVANCE(1111);
      END_STATE();
    case 327:
      if (lookahead == '}') ADVANCE(1135);
      END_STATE();
    case 328:
      if (lookahead == '}') ADVANCE(1081);
      END_STATE();
    case 329:
      if (lookahead == '}') ADVANCE(1087);
      END_STATE();
    case 330:
      if (lookahead == '}') ADVANCE(1109);
      END_STATE();
    case 331:
      if (lookahead == '}') ADVANCE(1133);
      END_STATE();
    case 332:
      if (lookahead == '}') ADVANCE(1101);
      END_STATE();
    case 333:
      if (lookahead == '}') ADVANCE(1089);
      END_STATE();
    case 334:
      if (lookahead == '}') ADVANCE(1083);
      END_STATE();
    case 335:
      if (lookahead == '}') ADVANCE(1103);
      END_STATE();
    case 336:
      if (lookahead == '}') ADVANCE(1091);
      END_STATE();
    case 337:
      if (lookahead == '}') ADVANCE(1107);
      END_STATE();
    case 338:
      if (lookahead == '}') ADVANCE(1085);
      END_STATE();
    case 339:
      if (lookahead == '}') ADVANCE(1077);
      END_STATE();
    case 340:
      if (lookahead == '}') ADVANCE(1119);
      END_STATE();
    case 341:
      if (lookahead == '}') ADVANCE(1079);
      END_STATE();
    case 342:
      if (lookahead == '}') ADVANCE(1117);
      END_STATE();
    case 343:
      if (lookahead == '}') ADVANCE(1097);
      END_STATE();
    case 344:
      if (lookahead == '}') ADVANCE(1093);
      END_STATE();
    case 345:
      if (lookahead == '}') ADVANCE(1099);
      END_STATE();
    case 346:
      if (lookahead == '}') ADVANCE(1095);
      END_STATE();
    case 347:
      if (lookahead == '}') ADVANCE(1123);
      END_STATE();
    case 348:
      if (lookahead == '}') ADVANCE(1105);
      END_STATE();
    case 349:
      if (lookahead == '}') ADVANCE(1115);
      END_STATE();
    case 350:
      if (lookahead == '}') ADVANCE(1121);
      END_STATE();
    case 351:
      if (lookahead == '}') ADVANCE(1127);
      END_STATE();
    case 352:
      if (lookahead == '}') ADVANCE(1125);
      END_STATE();
    case 353:
      if (lookahead == '}') ADVANCE(1129);
      END_STATE();
    case 354:
      if (lookahead == '}') ADVANCE(1131);
      END_STATE();
    case 355:
      if (lookahead == '~') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 356:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 357:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 358:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1057);
      END_STATE();
    case 359:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[') ADVANCE(1048);
      END_STATE();
    case 360:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(553);
      END_STATE();
    case 361:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 362:
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1053);
      END_STATE();
    case 363:
      if (eof) ADVANCE(364);
      if (lookahead == '!') ADVANCE(909);
      if (lookahead == '"') ADVANCE(912);
      if (lookahead == '#') ADVANCE(915);
      if (lookahead == '$') ADVANCE(919);
      if (lookahead == '%') ADVANCE(922);
      if (lookahead == '&') ADVANCE(925);
      if (lookahead == '\'') ADVANCE(928);
      if (lookahead == '(') ADVANCE(931);
      if (lookahead == ')') ADVANCE(934);
      if (lookahead == '*') ADVANCE(937);
      if (lookahead == '+') ADVANCE(943);
      if (lookahead == ',') ADVANCE(946);
      if (lookahead == '-') ADVANCE(949);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(953);
      if (lookahead == '0') ADVANCE(632);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == ';') ADVANCE(957);
      if (lookahead == '<') ADVANCE(960);
      if (lookahead == '=') ADVANCE(556);
      if (lookahead == '>') ADVANCE(965);
      if (lookahead == '?') ADVANCE(968);
      if (lookahead == '@') ADVANCE(971);
      if (lookahead == 'C') ADVANCE(635);
      if (lookahead == 'I') ADVANCE(638);
      if (lookahead == 'N') ADVANCE(639);
      if (lookahead == 'T') ADVANCE(637);
      if (lookahead == 'W') ADVANCE(636);
      if (lookahead == '[') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(974);
      if (lookahead == ']') ADVANCE(903);
      if (lookahead == '^') ADVANCE(977);
      if (lookahead == '_') ADVANCE(981);
      if (lookahead == '`') ADVANCE(986);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == 'f') ADVANCE(646);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead == 'k') ADVANCE(642);
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == 'm') ADVANCE(640);
      if (lookahead == 'p') ADVANCE(641);
      if (lookahead == 'v') ADVANCE(644);
      if (lookahead == 'x') ADVANCE(647);
      if (lookahead == '{') ADVANCE(990);
      if (lookahead == '|') ADVANCE(994);
      if (lookahead == '}') ADVANCE(998);
      if (lookahead == '~') ADVANCE(1001);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1039);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (sym_word_character_set_1(lookahead)) ADVANCE(1034);
      if (lookahead != 0) ADVANCE(1003);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(618);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(898);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '+') ADVANCE(1074);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(417);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(416);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead == '[') ADVANCE(1041);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead == '[') ADVANCE(1076);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead == '[') ADVANCE(1045);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead == '_') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'k') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 't') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(1051);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(1063);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(1055);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(378);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(379);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (';' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '=') ADVANCE(369);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '=') ADVANCE(413);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '=') ADVANCE(414);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '[') ADVANCE(553);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '[') ADVANCE(419);
      if (lookahead == '_') ADVANCE(417);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '^') ADVANCE(418);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '_') ADVANCE(419);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '`') ADVANCE(420);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(503);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(537);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(544);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(427);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(478);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(485);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(496);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(487);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'g') ADVANCE(527);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == 'w') ADVANCE(468);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'j') ADVANCE(524);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(495);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(534);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(545);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(546);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead == 'p') ADVANCE(522);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(479);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(449);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(454);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(523);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(525);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(526);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(529);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(533);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'q') ADVANCE(512);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'q') ADVANCE(514);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'q') ADVANCE(515);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'q') ADVANCE(516);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(528);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(549);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 's') ADVANCE(484);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 't') ADVANCE(519);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 't') ADVANCE(531);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 't') ADVANCE(535);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(472);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(498);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(473);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'v') ADVANCE(432);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'w') ADVANCE(504);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'y') ADVANCE(536);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1114);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1136);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1082);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1088);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1110);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1134);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1102);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1090);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1084);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1104);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1092);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1108);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1086);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1078);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1120);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1080);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1118);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1098);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1094);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1100);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1096);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1124);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1106);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1116);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1122);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1128);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1126);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1130);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '}') ADVANCE(1132);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '~') ADVANCE(550);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(553);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '=') ADVANCE(563);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(563);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1036);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      if (lookahead == '\n') ADVANCE(560);
      if (lookahead != 0) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_title0_token2);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(564);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ_EQ);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_article);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_article);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_book);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_book);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_manpage);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_manpage);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_page_DASHlayout);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_docs);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_landscape);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_landscape);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_portrait);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_portrait);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_link_DASHwith_DASHunderscores);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '*') ADVANCE(614);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(617);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(617);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(610);
      if (lookahead == '-') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(614);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(617);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(611);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(629);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(619);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(619);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(678);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(677);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(676);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'O') ADVANCE(680);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'a') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'a') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'b') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'm') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'o') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'r') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'A') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'A') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'I') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'M') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'O') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'i') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'm') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'u') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(1050);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(1062);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(1054);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(672);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(725);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'G') ADVANCE(738);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(675);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(670);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(667);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(669);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(683);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(733);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'O') ADVANCE(679);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'O') ADVANCE(673);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'P') ADVANCE(674);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'P') ADVANCE(714);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(671);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(682);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(666);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(668);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(741);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'U') ADVANCE(681);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'a') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'e') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'e') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'e') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'e') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'f') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'g') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'k') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'l') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'n') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'o') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'o') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'o') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'o') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'o') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 's') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 's') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 't') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 't') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 't') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '_') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(1052);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(1064);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(1056);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '_') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(787);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(775);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(762);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(728);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(739);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(771);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(758);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(769);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'M') ADVANCE(773);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(751);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(753);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(786);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(736);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(779);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(777);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(765);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(720);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(767);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(761);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(784);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(749);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(756);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(746);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(742);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(783);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'a') ADVANCE(839);
      if (lookahead == 'i') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'a') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'a') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'a') ADVANCE(865);
      if (lookahead == 'o') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'a') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'a') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'a') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'a') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'b') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'd') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'd') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'd') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'd') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(866);
      if (lookahead == 'o') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'e') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'f') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'g') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'g') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'h') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'i') ADVANCE(834);
      if (lookahead == 'n') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'i') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'i') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'i') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'i') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'i') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'i') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'i') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'k') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'k') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'l') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'l') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'l') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'm') ADVANCE(791);
      if (lookahead == 'n') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'n') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'n') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'n') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'n') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'n') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'n') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'o') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'p') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'p') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'p') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'p') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'r') ADVANCE(870);
      if (lookahead == 'u') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'r') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'r') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'r') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'r') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'r') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 's') ADVANCE(582);
      if (lookahead == 't') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 's') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 's') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 's') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 's') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 's') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 't') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 't') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 't') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 't') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 't') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 't') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 't') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 't') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 'y') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'g') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(630);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(80);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(630);
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(80);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '.') ADVANCE(622);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '+') ADVANCE(372);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(41);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(616);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(616);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '<') ADVANCE(1059);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '<') ADVANCE(1060);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(1060);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(1058);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '.') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == ':') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '.') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'b') ADVANCE(421);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'g') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead == 'q') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == 'v') ADVANCE(431);
      if (lookahead == 'w') ADVANCE(452);
      if (lookahead == 'z') ADVANCE(518);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 'q') ADVANCE(309);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'v') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(199);
      if (lookahead == 'z') ADVANCE(320);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == 'q') ADVANCE(309);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'v') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(199);
      if (lookahead == 'z') ADVANCE(320);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'k') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 's') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 's') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 't') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 't') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 't') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(1052);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(1064);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(1056);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(1034);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1036);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1036);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__inline_element_token1);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__inline_element_token1);
      if (lookahead == '\n') ADVANCE(906);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__inline_element_token1);
      if (lookahead == '.') ADVANCE(620);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1042);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1043);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1046);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '_') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1047);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[') ADVANCE(1048);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_url_macro_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(1049);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_link_macro_token1);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1053);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_mailto_COLON);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_mailto_COLON);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_mailto_COLON);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_mailto_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1057);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(23);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead == '/') ADVANCE(375);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '_') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(1068);
      if (lookahead == ']') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      if (lookahead == '\n') ADVANCE(368);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 363},
  [2] = {.lex_state = 363},
  [3] = {.lex_state = 363},
  [4] = {.lex_state = 363},
  [5] = {.lex_state = 363},
  [6] = {.lex_state = 363},
  [7] = {.lex_state = 363},
  [8] = {.lex_state = 363},
  [9] = {.lex_state = 363},
  [10] = {.lex_state = 363},
  [11] = {.lex_state = 363},
  [12] = {.lex_state = 363},
  [13] = {.lex_state = 363},
  [14] = {.lex_state = 363},
  [15] = {.lex_state = 363},
  [16] = {.lex_state = 363},
  [17] = {.lex_state = 363},
  [18] = {.lex_state = 363},
  [19] = {.lex_state = 363},
  [20] = {.lex_state = 363},
  [21] = {.lex_state = 363},
  [22] = {.lex_state = 363},
  [23] = {.lex_state = 363},
  [24] = {.lex_state = 363},
  [25] = {.lex_state = 363},
  [26] = {.lex_state = 363},
  [27] = {.lex_state = 363},
  [28] = {.lex_state = 363},
  [29] = {.lex_state = 363},
  [30] = {.lex_state = 363},
  [31] = {.lex_state = 363},
  [32] = {.lex_state = 363},
  [33] = {.lex_state = 363},
  [34] = {.lex_state = 363},
  [35] = {.lex_state = 363},
  [36] = {.lex_state = 363},
  [37] = {.lex_state = 363},
  [38] = {.lex_state = 363},
  [39] = {.lex_state = 363},
  [40] = {.lex_state = 363},
  [41] = {.lex_state = 363},
  [42] = {.lex_state = 363},
  [43] = {.lex_state = 363},
  [44] = {.lex_state = 363},
  [45] = {.lex_state = 363},
  [46] = {.lex_state = 363},
  [47] = {.lex_state = 363},
  [48] = {.lex_state = 363},
  [49] = {.lex_state = 363},
  [50] = {.lex_state = 363},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 1},
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
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 324},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 44},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 44},
  [94] = {.lex_state = 108},
  [95] = {.lex_state = 44},
  [96] = {.lex_state = 44},
  [97] = {.lex_state = 324},
  [98] = {.lex_state = 44},
  [99] = {.lex_state = 108},
  [100] = {.lex_state = 44},
  [101] = {.lex_state = 108},
  [102] = {.lex_state = 108},
  [103] = {.lex_state = 108},
  [104] = {.lex_state = 108},
  [105] = {.lex_state = 44},
  [106] = {.lex_state = 44},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 44},
  [109] = {.lex_state = 44},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 44},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 44},
  [114] = {.lex_state = 324},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 108},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 59},
  [128] = {.lex_state = 324},
  [129] = {.lex_state = 59},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 108},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 110},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 111},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 16},
  [139] = {.lex_state = 16},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 16},
  [142] = {.lex_state = 112},
  [143] = {.lex_state = 108},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 108},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 112},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 59},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 362},
  [161] = {.lex_state = 561},
  [162] = {.lex_state = 561},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 561},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 561},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 561},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 112},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 561},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 360},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 360},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 360},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 360},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 361},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 360},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 561},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 361},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 361},
  [234] = {.lex_state = 59},
};

enum {
  ts_external_token_eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_eof] = sym_eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_eof] = true,
  },
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
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_article] = ACTIONS(1),
    [anon_sym_book] = ACTIONS(1),
    [anon_sym_manpage] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_docs] = ACTIONS(1),
    [anon_sym_landscape] = ACTIONS(1),
    [anon_sym_portrait] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_sectanchors] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(1),
    [anon_sym_TIP_COLON] = ACTIONS(1),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(1),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(1),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(1),
    [anon_sym_CAUTION_COLON] = ACTIONS(1),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(1),
    [anon_sym_WARNING_COLON] = ACTIONS(1),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(1),
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
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
    [aux_sym__inline_element_token1] = ACTIONS(1),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_link_COLON] = ACTIONS(1),
    [anon_sym_mailto_COLON] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
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
    [sym_eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(155),
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(75),
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
    [sym_list_item] = STATE(84),
    [sym__ordered_list_mark] = STATE(191),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(88),
    [sym_description_list] = STATE(2),
    [sym_description_list_item] = STATE(91),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym_line] = STATE(51),
    [sym__inline_element] = STATE(51),
    [sym_kbd] = STATE(51),
    [sym_footnote] = STATE(51),
    [sym_links] = STATE(51),
    [sym_autolinks] = STATE(181),
    [sym_url_macro] = STATE(65),
    [sym_link_macro] = STATE(65),
    [sym_mailto] = STATE(65),
    [sym_xref] = STATE(51),
    [sym__inline_xref] = STATE(58),
    [sym__xref] = STATE(64),
    [sym_passthrough] = STATE(51),
    [sym__passthrough_plus] = STATE(68),
    [sym__passthrough_cmd] = STATE(68),
    [sym_replacement] = STATE(51),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(84),
    [aux_sym_description_list_repeat1] = STATE(91),
    [aux_sym_paragraph_repeat1] = STATE(51),
    [aux_sym_line_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(15),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(21),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(23),
    [anon_sym_TIP_COLON] = ACTIONS(25),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(27),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(29),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(31),
    [anon_sym_CAUTION_COLON] = ACTIONS(33),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(35),
    [anon_sym_WARNING_COLON] = ACTIONS(37),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(39),
    [sym__unordered_list_mark] = ACTIONS(41),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(43),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(45),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(43),
    [sym__checklist_mark] = ACTIONS(41),
    [aux_sym_code_token1] = ACTIONS(47),
    [aux_sym_code_language_token1] = ACTIONS(49),
    [anon_sym_SLASH_SLASH] = ACTIONS(51),
    [aux_sym_line_breaks_token1] = ACTIONS(53),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(55),
    [anon_sym_image_COLON_COLON] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(59),
    [anon_sym_audio_COLON_COLON] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_video_COLON_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_TILDE] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
    [sym_whitespace] = ACTIONS(19),
    [aux_sym__inline_element_token1] = ACTIONS(65),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(67),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(69),
    [aux_sym_autolinks_token1] = ACTIONS(71),
    [anon_sym_link_COLON] = ACTIONS(73),
    [anon_sym_mailto_COLON] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_xref_COLON] = ACTIONS(79),
    [sym_emphasis] = ACTIONS(65),
    [sym_strong] = ACTIONS(65),
    [sym_monospace] = ACTIONS(81),
    [sym_highlight] = ACTIONS(81),
    [sym_superscript] = ACTIONS(81),
    [sym_subscript] = ACTIONS(81),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(83),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(87),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(75),
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
    [sym_list_item] = STATE(84),
    [sym__ordered_list_mark] = STATE(191),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(88),
    [sym_description_list] = STATE(3),
    [sym_description_list_item] = STATE(91),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_line] = STATE(51),
    [sym__inline_element] = STATE(51),
    [sym_kbd] = STATE(51),
    [sym_footnote] = STATE(51),
    [sym_links] = STATE(51),
    [sym_autolinks] = STATE(181),
    [sym_url_macro] = STATE(65),
    [sym_link_macro] = STATE(65),
    [sym_mailto] = STATE(65),
    [sym_xref] = STATE(51),
    [sym__inline_xref] = STATE(58),
    [sym__xref] = STATE(64),
    [sym_passthrough] = STATE(51),
    [sym__passthrough_plus] = STATE(68),
    [sym__passthrough_cmd] = STATE(68),
    [sym_replacement] = STATE(51),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(84),
    [aux_sym_description_list_repeat1] = STATE(91),
    [aux_sym_paragraph_repeat1] = STATE(51),
    [aux_sym_line_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(15),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(21),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(23),
    [anon_sym_TIP_COLON] = ACTIONS(25),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(27),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(29),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(31),
    [anon_sym_CAUTION_COLON] = ACTIONS(33),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(35),
    [anon_sym_WARNING_COLON] = ACTIONS(37),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(39),
    [sym__unordered_list_mark] = ACTIONS(41),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(43),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(45),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(43),
    [sym__checklist_mark] = ACTIONS(41),
    [aux_sym_code_token1] = ACTIONS(47),
    [aux_sym_code_language_token1] = ACTIONS(49),
    [anon_sym_SLASH_SLASH] = ACTIONS(51),
    [aux_sym_line_breaks_token1] = ACTIONS(53),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(55),
    [anon_sym_image_COLON_COLON] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(59),
    [anon_sym_audio_COLON_COLON] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_video_COLON_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_BSLASH] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_TILDE] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
    [sym_whitespace] = ACTIONS(19),
    [aux_sym__inline_element_token1] = ACTIONS(65),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(67),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(69),
    [aux_sym_autolinks_token1] = ACTIONS(71),
    [anon_sym_link_COLON] = ACTIONS(73),
    [anon_sym_mailto_COLON] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_xref_COLON] = ACTIONS(79),
    [sym_emphasis] = ACTIONS(65),
    [sym_strong] = ACTIONS(65),
    [sym_monospace] = ACTIONS(81),
    [sym_highlight] = ACTIONS(81),
    [sym_superscript] = ACTIONS(81),
    [sym_subscript] = ACTIONS(81),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(83),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(87),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(75),
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
    [sym_list_item] = STATE(84),
    [sym__ordered_list_mark] = STATE(191),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(88),
    [sym_description_list] = STATE(3),
    [sym_description_list_item] = STATE(91),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym_line] = STATE(51),
    [sym__inline_element] = STATE(51),
    [sym_kbd] = STATE(51),
    [sym_footnote] = STATE(51),
    [sym_links] = STATE(51),
    [sym_autolinks] = STATE(181),
    [sym_url_macro] = STATE(65),
    [sym_link_macro] = STATE(65),
    [sym_mailto] = STATE(65),
    [sym_xref] = STATE(51),
    [sym__inline_xref] = STATE(58),
    [sym__xref] = STATE(64),
    [sym_passthrough] = STATE(51),
    [sym__passthrough_plus] = STATE(68),
    [sym__passthrough_cmd] = STATE(68),
    [sym_replacement] = STATE(51),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(84),
    [aux_sym_description_list_repeat1] = STATE(91),
    [aux_sym_paragraph_repeat1] = STATE(51),
    [aux_sym_line_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(102),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(105),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(108),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_NOTE_COLON] = ACTIONS(117),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(120),
    [anon_sym_TIP_COLON] = ACTIONS(123),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(126),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(129),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(132),
    [anon_sym_CAUTION_COLON] = ACTIONS(135),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(138),
    [anon_sym_WARNING_COLON] = ACTIONS(141),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(144),
    [sym__unordered_list_mark] = ACTIONS(147),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(150),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(153),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(150),
    [sym__checklist_mark] = ACTIONS(147),
    [aux_sym_code_token1] = ACTIONS(156),
    [aux_sym_code_language_token1] = ACTIONS(159),
    [anon_sym_SLASH_SLASH] = ACTIONS(162),
    [aux_sym_line_breaks_token1] = ACTIONS(165),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(168),
    [anon_sym_image_COLON_COLON] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(174),
    [anon_sym_audio_COLON_COLON] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(114),
    [anon_sym_video_COLON_COLON] = ACTIONS(180),
    [anon_sym_BANG] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_SEMI] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym__] = ACTIONS(114),
    [anon_sym_BQUOTE] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_TILDE] = ACTIONS(114),
    [sym_word] = ACTIONS(114),
    [sym_whitespace] = ACTIONS(114),
    [aux_sym__inline_element_token1] = ACTIONS(183),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(186),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(189),
    [aux_sym_autolinks_token1] = ACTIONS(192),
    [anon_sym_link_COLON] = ACTIONS(195),
    [anon_sym_mailto_COLON] = ACTIONS(198),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_xref_COLON] = ACTIONS(204),
    [sym_emphasis] = ACTIONS(183),
    [sym_strong] = ACTIONS(183),
    [sym_monospace] = ACTIONS(207),
    [sym_highlight] = ACTIONS(207),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(207),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(210),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(213),
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
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(221),
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(221),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(221),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(221),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(221),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(219),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(221),
    [sym__checklist_mark] = ACTIONS(221),
    [aux_sym_code_token1] = ACTIONS(219),
    [aux_sym_code_language_token1] = ACTIONS(221),
    [anon_sym_SLASH_SLASH] = ACTIONS(219),
    [aux_sym_line_breaks_token1] = ACTIONS(219),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(219),
    [anon_sym_image_COLON_COLON] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(219),
    [anon_sym_audio_COLON_COLON] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_video_COLON_COLON] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym__] = ACTIONS(221),
    [anon_sym_BQUOTE] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_TILDE] = ACTIONS(221),
    [sym_word] = ACTIONS(221),
    [sym_whitespace] = ACTIONS(221),
    [aux_sym__inline_element_token1] = ACTIONS(221),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(219),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(219),
    [aux_sym_autolinks_token1] = ACTIONS(221),
    [anon_sym_link_COLON] = ACTIONS(221),
    [anon_sym_mailto_COLON] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_xref_COLON] = ACTIONS(221),
    [sym_emphasis] = ACTIONS(221),
    [sym_strong] = ACTIONS(221),
    [sym_monospace] = ACTIONS(219),
    [sym_highlight] = ACTIONS(219),
    [sym_superscript] = ACTIONS(219),
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
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(225),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(225),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(225),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(225),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(225),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(223),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(225),
    [sym__checklist_mark] = ACTIONS(225),
    [aux_sym_code_token1] = ACTIONS(223),
    [aux_sym_code_language_token1] = ACTIONS(225),
    [anon_sym_SLASH_SLASH] = ACTIONS(223),
    [aux_sym_line_breaks_token1] = ACTIONS(223),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(223),
    [anon_sym_image_COLON_COLON] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(223),
    [anon_sym_audio_COLON_COLON] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_video_COLON_COLON] = ACTIONS(223),
    [anon_sym_BANG] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_AMP] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_QMARK] = ACTIONS(225),
    [anon_sym_AT] = ACTIONS(225),
    [anon_sym_BSLASH] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(225),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_TILDE] = ACTIONS(225),
    [sym_word] = ACTIONS(225),
    [sym_whitespace] = ACTIONS(225),
    [aux_sym__inline_element_token1] = ACTIONS(225),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(223),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(223),
    [aux_sym_autolinks_token1] = ACTIONS(225),
    [anon_sym_link_COLON] = ACTIONS(225),
    [anon_sym_mailto_COLON] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(225),
    [anon_sym_xref_COLON] = ACTIONS(225),
    [sym_emphasis] = ACTIONS(225),
    [sym_strong] = ACTIONS(225),
    [sym_monospace] = ACTIONS(223),
    [sym_highlight] = ACTIONS(223),
    [sym_superscript] = ACTIONS(223),
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
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_EQ] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(229),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(229),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(229),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(229),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(227),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(229),
    [sym__checklist_mark] = ACTIONS(229),
    [aux_sym_code_token1] = ACTIONS(227),
    [aux_sym_code_language_token1] = ACTIONS(229),
    [anon_sym_SLASH_SLASH] = ACTIONS(227),
    [aux_sym_line_breaks_token1] = ACTIONS(227),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(227),
    [anon_sym_image_COLON_COLON] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(227),
    [anon_sym_audio_COLON_COLON] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_video_COLON_COLON] = ACTIONS(227),
    [anon_sym_BANG] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(229),
    [anon_sym_BSLASH] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym__] = ACTIONS(229),
    [anon_sym_BQUOTE] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(229),
    [sym_word] = ACTIONS(229),
    [sym_whitespace] = ACTIONS(229),
    [aux_sym__inline_element_token1] = ACTIONS(229),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(227),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(227),
    [aux_sym_autolinks_token1] = ACTIONS(229),
    [anon_sym_link_COLON] = ACTIONS(229),
    [anon_sym_mailto_COLON] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_xref_COLON] = ACTIONS(229),
    [sym_emphasis] = ACTIONS(229),
    [sym_strong] = ACTIONS(229),
    [sym_monospace] = ACTIONS(227),
    [sym_highlight] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(233),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(233),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(233),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(233),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(231),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(233),
    [sym__checklist_mark] = ACTIONS(233),
    [aux_sym_code_token1] = ACTIONS(231),
    [aux_sym_code_language_token1] = ACTIONS(233),
    [anon_sym_SLASH_SLASH] = ACTIONS(231),
    [aux_sym_line_breaks_token1] = ACTIONS(231),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(231),
    [anon_sym_image_COLON_COLON] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(231),
    [anon_sym_audio_COLON_COLON] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_video_COLON_COLON] = ACTIONS(231),
    [anon_sym_BANG] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_BSLASH] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym__] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [sym_word] = ACTIONS(233),
    [sym_whitespace] = ACTIONS(233),
    [aux_sym__inline_element_token1] = ACTIONS(233),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(231),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(231),
    [aux_sym_autolinks_token1] = ACTIONS(233),
    [anon_sym_link_COLON] = ACTIONS(233),
    [anon_sym_mailto_COLON] = ACTIONS(233),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_xref_COLON] = ACTIONS(233),
    [sym_emphasis] = ACTIONS(233),
    [sym_strong] = ACTIONS(233),
    [sym_monospace] = ACTIONS(231),
    [sym_highlight] = ACTIONS(231),
    [sym_superscript] = ACTIONS(231),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(237),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(237),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(235),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(237),
    [sym__checklist_mark] = ACTIONS(237),
    [aux_sym_code_token1] = ACTIONS(235),
    [aux_sym_code_language_token1] = ACTIONS(237),
    [anon_sym_SLASH_SLASH] = ACTIONS(235),
    [aux_sym_line_breaks_token1] = ACTIONS(235),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(235),
    [anon_sym_image_COLON_COLON] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(235),
    [anon_sym_audio_COLON_COLON] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_video_COLON_COLON] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(237),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_QMARK] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_BSLASH] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(237),
    [anon_sym__] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(237),
    [sym_word] = ACTIONS(237),
    [sym_whitespace] = ACTIONS(237),
    [aux_sym__inline_element_token1] = ACTIONS(237),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(235),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(235),
    [aux_sym_autolinks_token1] = ACTIONS(237),
    [anon_sym_link_COLON] = ACTIONS(237),
    [anon_sym_mailto_COLON] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_xref_COLON] = ACTIONS(237),
    [sym_emphasis] = ACTIONS(237),
    [sym_strong] = ACTIONS(237),
    [sym_monospace] = ACTIONS(235),
    [sym_highlight] = ACTIONS(235),
    [sym_superscript] = ACTIONS(235),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(241),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(241),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(241),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(241),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(239),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(241),
    [sym__checklist_mark] = ACTIONS(241),
    [aux_sym_code_token1] = ACTIONS(239),
    [aux_sym_code_language_token1] = ACTIONS(241),
    [anon_sym_SLASH_SLASH] = ACTIONS(239),
    [aux_sym_line_breaks_token1] = ACTIONS(239),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(239),
    [anon_sym_image_COLON_COLON] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(239),
    [anon_sym_audio_COLON_COLON] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_video_COLON_COLON] = ACTIONS(239),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(241),
    [anon_sym_DOLLAR] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_BSLASH] = ACTIONS(241),
    [anon_sym_CARET] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [sym_word] = ACTIONS(241),
    [sym_whitespace] = ACTIONS(241),
    [aux_sym__inline_element_token1] = ACTIONS(241),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(239),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(239),
    [aux_sym_autolinks_token1] = ACTIONS(241),
    [anon_sym_link_COLON] = ACTIONS(241),
    [anon_sym_mailto_COLON] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(241),
    [anon_sym_xref_COLON] = ACTIONS(241),
    [sym_emphasis] = ACTIONS(241),
    [sym_strong] = ACTIONS(241),
    [sym_monospace] = ACTIONS(239),
    [sym_highlight] = ACTIONS(239),
    [sym_superscript] = ACTIONS(239),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(245),
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(245),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(245),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(245),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(245),
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
    [aux_sym_code_language_token1] = ACTIONS(245),
    [anon_sym_SLASH_SLASH] = ACTIONS(243),
    [aux_sym_line_breaks_token1] = ACTIONS(243),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(243),
    [anon_sym_image_COLON_COLON] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(243),
    [anon_sym_audio_COLON_COLON] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_video_COLON_COLON] = ACTIONS(243),
    [anon_sym_BANG] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_POUND] = ACTIONS(245),
    [anon_sym_DOLLAR] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_QMARK] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(245),
    [anon_sym_BSLASH] = ACTIONS(245),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym__] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [sym_word] = ACTIONS(245),
    [sym_whitespace] = ACTIONS(245),
    [aux_sym__inline_element_token1] = ACTIONS(245),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(243),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(243),
    [aux_sym_autolinks_token1] = ACTIONS(245),
    [anon_sym_link_COLON] = ACTIONS(245),
    [anon_sym_mailto_COLON] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_xref_COLON] = ACTIONS(245),
    [sym_emphasis] = ACTIONS(245),
    [sym_strong] = ACTIONS(245),
    [sym_monospace] = ACTIONS(243),
    [sym_highlight] = ACTIONS(243),
    [sym_superscript] = ACTIONS(243),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_DOT] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(249),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(249),
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
    [aux_sym_code_language_token1] = ACTIONS(249),
    [anon_sym_SLASH_SLASH] = ACTIONS(247),
    [aux_sym_line_breaks_token1] = ACTIONS(247),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(247),
    [anon_sym_image_COLON_COLON] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(247),
    [anon_sym_audio_COLON_COLON] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_video_COLON_COLON] = ACTIONS(247),
    [anon_sym_BANG] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_POUND] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_QMARK] = ACTIONS(249),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_BSLASH] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym__] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(249),
    [sym_word] = ACTIONS(249),
    [sym_whitespace] = ACTIONS(249),
    [aux_sym__inline_element_token1] = ACTIONS(249),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(247),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(247),
    [aux_sym_autolinks_token1] = ACTIONS(249),
    [anon_sym_link_COLON] = ACTIONS(249),
    [anon_sym_mailto_COLON] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_xref_COLON] = ACTIONS(249),
    [sym_emphasis] = ACTIONS(249),
    [sym_strong] = ACTIONS(249),
    [sym_monospace] = ACTIONS(247),
    [sym_highlight] = ACTIONS(247),
    [sym_superscript] = ACTIONS(247),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_EQ] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(253),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(253),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(253),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(253),
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
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(251),
    [anon_sym_audio_COLON_COLON] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_video_COLON_COLON] = ACTIONS(251),
    [anon_sym_BANG] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_POUND] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_QMARK] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
    [anon_sym_BSLASH] = ACTIONS(253),
    [anon_sym_CARET] = ACTIONS(253),
    [anon_sym__] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_TILDE] = ACTIONS(253),
    [sym_word] = ACTIONS(253),
    [sym_whitespace] = ACTIONS(253),
    [aux_sym__inline_element_token1] = ACTIONS(253),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(251),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(251),
    [aux_sym_autolinks_token1] = ACTIONS(253),
    [anon_sym_link_COLON] = ACTIONS(253),
    [anon_sym_mailto_COLON] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_xref_COLON] = ACTIONS(253),
    [sym_emphasis] = ACTIONS(253),
    [sym_strong] = ACTIONS(253),
    [sym_monospace] = ACTIONS(251),
    [sym_highlight] = ACTIONS(251),
    [sym_superscript] = ACTIONS(251),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_EQ_EQ] = ACTIONS(257),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(257),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(257),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(257),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(255),
    [anon_sym_COLON] = ACTIONS(257),
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
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(255),
    [anon_sym_audio_COLON_COLON] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(257),
    [anon_sym_video_COLON_COLON] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(257),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(257),
    [anon_sym_AMP] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_QMARK] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(257),
    [anon_sym_BSLASH] = ACTIONS(257),
    [anon_sym_CARET] = ACTIONS(257),
    [anon_sym__] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_TILDE] = ACTIONS(257),
    [sym_word] = ACTIONS(257),
    [sym_whitespace] = ACTIONS(257),
    [aux_sym__inline_element_token1] = ACTIONS(257),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(255),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(255),
    [aux_sym_autolinks_token1] = ACTIONS(257),
    [anon_sym_link_COLON] = ACTIONS(257),
    [anon_sym_mailto_COLON] = ACTIONS(257),
    [anon_sym_LT_LT] = ACTIONS(257),
    [anon_sym_xref_COLON] = ACTIONS(257),
    [sym_emphasis] = ACTIONS(257),
    [sym_strong] = ACTIONS(257),
    [sym_monospace] = ACTIONS(255),
    [sym_highlight] = ACTIONS(255),
    [sym_superscript] = ACTIONS(255),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(261),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(261),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(261),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(261),
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
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(259),
    [anon_sym_audio_COLON_COLON] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_video_COLON_COLON] = ACTIONS(259),
    [anon_sym_BANG] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_POUND] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_PERCENT] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_SLASH] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_BSLASH] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym__] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(261),
    [sym_word] = ACTIONS(261),
    [sym_whitespace] = ACTIONS(261),
    [aux_sym__inline_element_token1] = ACTIONS(261),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(259),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(259),
    [aux_sym_autolinks_token1] = ACTIONS(261),
    [anon_sym_link_COLON] = ACTIONS(261),
    [anon_sym_mailto_COLON] = ACTIONS(261),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_xref_COLON] = ACTIONS(261),
    [sym_emphasis] = ACTIONS(261),
    [sym_strong] = ACTIONS(261),
    [sym_monospace] = ACTIONS(259),
    [sym_highlight] = ACTIONS(259),
    [sym_superscript] = ACTIONS(259),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_EQ_EQ] = ACTIONS(265),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(265),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(265),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(265),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(263),
    [anon_sym_COLON] = ACTIONS(265),
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
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(263),
    [anon_sym_audio_COLON_COLON] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_video_COLON_COLON] = ACTIONS(263),
    [anon_sym_BANG] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_STAR] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_QMARK] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(265),
    [anon_sym_BSLASH] = ACTIONS(265),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym__] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(265),
    [sym_word] = ACTIONS(265),
    [sym_whitespace] = ACTIONS(265),
    [aux_sym__inline_element_token1] = ACTIONS(265),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(263),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(263),
    [aux_sym_autolinks_token1] = ACTIONS(265),
    [anon_sym_link_COLON] = ACTIONS(265),
    [anon_sym_mailto_COLON] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_xref_COLON] = ACTIONS(265),
    [sym_emphasis] = ACTIONS(265),
    [sym_strong] = ACTIONS(265),
    [sym_monospace] = ACTIONS(263),
    [sym_highlight] = ACTIONS(263),
    [sym_superscript] = ACTIONS(263),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_DOT] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(269),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(269),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(269),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(269),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(269),
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
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(267),
    [anon_sym_audio_COLON_COLON] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_video_COLON_COLON] = ACTIONS(267),
    [anon_sym_BANG] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_POUND] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(269),
    [anon_sym_AMP] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(269),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(269),
    [anon_sym_SLASH] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_QMARK] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
    [anon_sym_BSLASH] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym__] = ACTIONS(269),
    [anon_sym_BQUOTE] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(269),
    [sym_word] = ACTIONS(269),
    [sym_whitespace] = ACTIONS(269),
    [aux_sym__inline_element_token1] = ACTIONS(269),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(267),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(267),
    [aux_sym_autolinks_token1] = ACTIONS(269),
    [anon_sym_link_COLON] = ACTIONS(269),
    [anon_sym_mailto_COLON] = ACTIONS(269),
    [anon_sym_LT_LT] = ACTIONS(269),
    [anon_sym_xref_COLON] = ACTIONS(269),
    [sym_emphasis] = ACTIONS(269),
    [sym_strong] = ACTIONS(269),
    [sym_monospace] = ACTIONS(267),
    [sym_highlight] = ACTIONS(267),
    [sym_superscript] = ACTIONS(267),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(273),
    [anon_sym_EQ] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(273),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(273),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(273),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(273),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(273),
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
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(271),
    [anon_sym_audio_COLON_COLON] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_video_COLON_COLON] = ACTIONS(271),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [anon_sym_PERCENT] = ACTIONS(273),
    [anon_sym_AMP] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_BSLASH] = ACTIONS(273),
    [anon_sym_CARET] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(273),
    [sym_word] = ACTIONS(273),
    [sym_whitespace] = ACTIONS(273),
    [aux_sym__inline_element_token1] = ACTIONS(273),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(271),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(271),
    [aux_sym_autolinks_token1] = ACTIONS(273),
    [anon_sym_link_COLON] = ACTIONS(273),
    [anon_sym_mailto_COLON] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_xref_COLON] = ACTIONS(273),
    [sym_emphasis] = ACTIONS(273),
    [sym_strong] = ACTIONS(273),
    [sym_monospace] = ACTIONS(271),
    [sym_highlight] = ACTIONS(271),
    [sym_superscript] = ACTIONS(271),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(277),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(275),
    [anon_sym_COLON] = ACTIONS(277),
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
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(275),
    [anon_sym_audio_COLON_COLON] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_video_COLON_COLON] = ACTIONS(275),
    [anon_sym_BANG] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_POUND] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_QMARK] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(277),
    [anon_sym_BSLASH] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym__] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(277),
    [sym_word] = ACTIONS(277),
    [sym_whitespace] = ACTIONS(277),
    [aux_sym__inline_element_token1] = ACTIONS(277),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(275),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(275),
    [aux_sym_autolinks_token1] = ACTIONS(277),
    [anon_sym_link_COLON] = ACTIONS(277),
    [anon_sym_mailto_COLON] = ACTIONS(277),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_xref_COLON] = ACTIONS(277),
    [sym_emphasis] = ACTIONS(277),
    [sym_strong] = ACTIONS(277),
    [sym_monospace] = ACTIONS(275),
    [sym_highlight] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(281),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(281),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(281),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(281),
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
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(279),
    [anon_sym_audio_COLON_COLON] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_video_COLON_COLON] = ACTIONS(279),
    [anon_sym_BANG] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_PERCENT] = ACTIONS(281),
    [anon_sym_AMP] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
    [anon_sym_BSLASH] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(281),
    [sym_word] = ACTIONS(281),
    [sym_whitespace] = ACTIONS(281),
    [aux_sym__inline_element_token1] = ACTIONS(281),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(279),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(279),
    [aux_sym_autolinks_token1] = ACTIONS(281),
    [anon_sym_link_COLON] = ACTIONS(281),
    [anon_sym_mailto_COLON] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_xref_COLON] = ACTIONS(281),
    [sym_emphasis] = ACTIONS(281),
    [sym_strong] = ACTIONS(281),
    [sym_monospace] = ACTIONS(279),
    [sym_highlight] = ACTIONS(279),
    [sym_superscript] = ACTIONS(279),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(285),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(285),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(285),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(283),
    [anon_sym_COLON] = ACTIONS(285),
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
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(283),
    [anon_sym_audio_COLON_COLON] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_video_COLON_COLON] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(285),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(285),
    [anon_sym_BSLASH] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(285),
    [sym_word] = ACTIONS(285),
    [sym_whitespace] = ACTIONS(285),
    [aux_sym__inline_element_token1] = ACTIONS(285),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(283),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(283),
    [aux_sym_autolinks_token1] = ACTIONS(285),
    [anon_sym_link_COLON] = ACTIONS(285),
    [anon_sym_mailto_COLON] = ACTIONS(285),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_xref_COLON] = ACTIONS(285),
    [sym_emphasis] = ACTIONS(285),
    [sym_strong] = ACTIONS(285),
    [sym_monospace] = ACTIONS(283),
    [sym_highlight] = ACTIONS(283),
    [sym_superscript] = ACTIONS(283),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(289),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(289),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(289),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(289),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(289),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(287),
    [anon_sym_COLON] = ACTIONS(289),
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
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(287),
    [anon_sym_audio_COLON_COLON] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_video_COLON_COLON] = ACTIONS(287),
    [anon_sym_BANG] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_STAR] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_QMARK] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym_BSLASH] = ACTIONS(289),
    [anon_sym_CARET] = ACTIONS(289),
    [anon_sym__] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
    [sym_word] = ACTIONS(289),
    [sym_whitespace] = ACTIONS(289),
    [aux_sym__inline_element_token1] = ACTIONS(289),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(287),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(287),
    [aux_sym_autolinks_token1] = ACTIONS(289),
    [anon_sym_link_COLON] = ACTIONS(289),
    [anon_sym_mailto_COLON] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(289),
    [anon_sym_xref_COLON] = ACTIONS(289),
    [sym_emphasis] = ACTIONS(289),
    [sym_strong] = ACTIONS(289),
    [sym_monospace] = ACTIONS(287),
    [sym_highlight] = ACTIONS(287),
    [sym_superscript] = ACTIONS(287),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(293),
    [anon_sym_EQ] = ACTIONS(293),
    [anon_sym_EQ_EQ] = ACTIONS(293),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(293),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(293),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(293),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(293),
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
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(291),
    [anon_sym_audio_COLON_COLON] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_video_COLON_COLON] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym_BSLASH] = ACTIONS(293),
    [anon_sym_CARET] = ACTIONS(293),
    [anon_sym__] = ACTIONS(293),
    [anon_sym_BQUOTE] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(293),
    [sym_word] = ACTIONS(293),
    [sym_whitespace] = ACTIONS(293),
    [aux_sym__inline_element_token1] = ACTIONS(293),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(291),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(291),
    [aux_sym_autolinks_token1] = ACTIONS(293),
    [anon_sym_link_COLON] = ACTIONS(293),
    [anon_sym_mailto_COLON] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(293),
    [anon_sym_xref_COLON] = ACTIONS(293),
    [sym_emphasis] = ACTIONS(293),
    [sym_strong] = ACTIONS(293),
    [sym_monospace] = ACTIONS(291),
    [sym_highlight] = ACTIONS(291),
    [sym_superscript] = ACTIONS(291),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(297),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(297),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(297),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(297),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(297),
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
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(295),
    [anon_sym_audio_COLON_COLON] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_video_COLON_COLON] = ACTIONS(295),
    [anon_sym_BANG] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_POUND] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_QMARK] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_BSLASH] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym__] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_TILDE] = ACTIONS(297),
    [sym_word] = ACTIONS(297),
    [sym_whitespace] = ACTIONS(297),
    [aux_sym__inline_element_token1] = ACTIONS(297),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(295),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(295),
    [aux_sym_autolinks_token1] = ACTIONS(297),
    [anon_sym_link_COLON] = ACTIONS(297),
    [anon_sym_mailto_COLON] = ACTIONS(297),
    [anon_sym_LT_LT] = ACTIONS(297),
    [anon_sym_xref_COLON] = ACTIONS(297),
    [sym_emphasis] = ACTIONS(297),
    [sym_strong] = ACTIONS(297),
    [sym_monospace] = ACTIONS(295),
    [sym_highlight] = ACTIONS(295),
    [sym_superscript] = ACTIONS(295),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_DOT] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(301),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(301),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(301),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(301),
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
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(299),
    [anon_sym_audio_COLON_COLON] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_video_COLON_COLON] = ACTIONS(299),
    [anon_sym_BANG] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_STAR] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_QMARK] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
    [anon_sym_BSLASH] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [anon_sym__] = ACTIONS(301),
    [anon_sym_BQUOTE] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(301),
    [sym_word] = ACTIONS(301),
    [sym_whitespace] = ACTIONS(301),
    [aux_sym__inline_element_token1] = ACTIONS(301),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(299),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(299),
    [aux_sym_autolinks_token1] = ACTIONS(301),
    [anon_sym_link_COLON] = ACTIONS(301),
    [anon_sym_mailto_COLON] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(301),
    [anon_sym_xref_COLON] = ACTIONS(301),
    [sym_emphasis] = ACTIONS(301),
    [sym_strong] = ACTIONS(301),
    [sym_monospace] = ACTIONS(299),
    [sym_highlight] = ACTIONS(299),
    [sym_superscript] = ACTIONS(299),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(305),
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(305),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(305),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(305),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
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
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(303),
    [anon_sym_audio_COLON_COLON] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_video_COLON_COLON] = ACTIONS(303),
    [anon_sym_BANG] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [anon_sym_POUND] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [anon_sym_PERCENT] = ACTIONS(305),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_QMARK] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(305),
    [anon_sym__] = ACTIONS(305),
    [anon_sym_BQUOTE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(305),
    [sym_word] = ACTIONS(305),
    [sym_whitespace] = ACTIONS(305),
    [aux_sym__inline_element_token1] = ACTIONS(305),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(303),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(303),
    [aux_sym_autolinks_token1] = ACTIONS(305),
    [anon_sym_link_COLON] = ACTIONS(305),
    [anon_sym_mailto_COLON] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(305),
    [anon_sym_xref_COLON] = ACTIONS(305),
    [sym_emphasis] = ACTIONS(305),
    [sym_strong] = ACTIONS(305),
    [sym_monospace] = ACTIONS(303),
    [sym_highlight] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(309),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(309),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(309),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(309),
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
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(307),
    [anon_sym_audio_COLON_COLON] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_video_COLON_COLON] = ACTIONS(307),
    [anon_sym_BANG] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_POUND] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [anon_sym_PERCENT] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_STAR] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(309),
    [anon_sym_SLASH] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_QMARK] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(309),
    [anon_sym_BSLASH] = ACTIONS(309),
    [anon_sym_CARET] = ACTIONS(309),
    [anon_sym__] = ACTIONS(309),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(309),
    [sym_word] = ACTIONS(309),
    [sym_whitespace] = ACTIONS(309),
    [aux_sym__inline_element_token1] = ACTIONS(309),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(307),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(307),
    [aux_sym_autolinks_token1] = ACTIONS(309),
    [anon_sym_link_COLON] = ACTIONS(309),
    [anon_sym_mailto_COLON] = ACTIONS(309),
    [anon_sym_LT_LT] = ACTIONS(309),
    [anon_sym_xref_COLON] = ACTIONS(309),
    [sym_emphasis] = ACTIONS(309),
    [sym_strong] = ACTIONS(309),
    [sym_monospace] = ACTIONS(307),
    [sym_highlight] = ACTIONS(307),
    [sym_superscript] = ACTIONS(307),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(313),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(313),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(313),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(313),
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
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(311),
    [anon_sym_audio_COLON_COLON] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_video_COLON_COLON] = ACTIONS(311),
    [anon_sym_BANG] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [anon_sym_POUND] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_QMARK] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym_BSLASH] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym__] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
    [sym_word] = ACTIONS(313),
    [sym_whitespace] = ACTIONS(313),
    [aux_sym__inline_element_token1] = ACTIONS(313),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(311),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(311),
    [aux_sym_autolinks_token1] = ACTIONS(313),
    [anon_sym_link_COLON] = ACTIONS(313),
    [anon_sym_mailto_COLON] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_xref_COLON] = ACTIONS(313),
    [sym_emphasis] = ACTIONS(313),
    [sym_strong] = ACTIONS(313),
    [sym_monospace] = ACTIONS(311),
    [sym_highlight] = ACTIONS(311),
    [sym_superscript] = ACTIONS(311),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_EQ_EQ] = ACTIONS(317),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(317),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(317),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(317),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(317),
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
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(315),
    [anon_sym_audio_COLON_COLON] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_video_COLON_COLON] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym_BSLASH] = ACTIONS(317),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(317),
    [sym_word] = ACTIONS(317),
    [sym_whitespace] = ACTIONS(317),
    [aux_sym__inline_element_token1] = ACTIONS(317),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(315),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(315),
    [aux_sym_autolinks_token1] = ACTIONS(317),
    [anon_sym_link_COLON] = ACTIONS(317),
    [anon_sym_mailto_COLON] = ACTIONS(317),
    [anon_sym_LT_LT] = ACTIONS(317),
    [anon_sym_xref_COLON] = ACTIONS(317),
    [sym_emphasis] = ACTIONS(317),
    [sym_strong] = ACTIONS(317),
    [sym_monospace] = ACTIONS(315),
    [sym_highlight] = ACTIONS(315),
    [sym_superscript] = ACTIONS(315),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(321),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(321),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(321),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(321),
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
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(319),
    [anon_sym_audio_COLON_COLON] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_video_COLON_COLON] = ACTIONS(319),
    [anon_sym_BANG] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_POUND] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(321),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
    [anon_sym_BSLASH] = ACTIONS(321),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(321),
    [sym_word] = ACTIONS(321),
    [sym_whitespace] = ACTIONS(321),
    [aux_sym__inline_element_token1] = ACTIONS(321),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(319),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(319),
    [aux_sym_autolinks_token1] = ACTIONS(321),
    [anon_sym_link_COLON] = ACTIONS(321),
    [anon_sym_mailto_COLON] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_xref_COLON] = ACTIONS(321),
    [sym_emphasis] = ACTIONS(321),
    [sym_strong] = ACTIONS(321),
    [sym_monospace] = ACTIONS(319),
    [sym_highlight] = ACTIONS(319),
    [sym_superscript] = ACTIONS(319),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(325),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(325),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(325),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(325),
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
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(323),
    [anon_sym_audio_COLON_COLON] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_video_COLON_COLON] = ACTIONS(323),
    [anon_sym_BANG] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_QMARK] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
    [anon_sym_BSLASH] = ACTIONS(325),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym__] = ACTIONS(325),
    [anon_sym_BQUOTE] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(325),
    [sym_word] = ACTIONS(325),
    [sym_whitespace] = ACTIONS(325),
    [aux_sym__inline_element_token1] = ACTIONS(325),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(323),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(323),
    [aux_sym_autolinks_token1] = ACTIONS(325),
    [anon_sym_link_COLON] = ACTIONS(325),
    [anon_sym_mailto_COLON] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_xref_COLON] = ACTIONS(325),
    [sym_emphasis] = ACTIONS(325),
    [sym_strong] = ACTIONS(325),
    [sym_monospace] = ACTIONS(323),
    [sym_highlight] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(329),
    [anon_sym_EQ] = ACTIONS(329),
    [anon_sym_EQ_EQ] = ACTIONS(329),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(329),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(329),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(329),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(329),
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
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(327),
    [anon_sym_audio_COLON_COLON] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_video_COLON_COLON] = ACTIONS(327),
    [anon_sym_BANG] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_POUND] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(329),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_QMARK] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(329),
    [anon_sym_CARET] = ACTIONS(329),
    [anon_sym__] = ACTIONS(329),
    [anon_sym_BQUOTE] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(329),
    [sym_word] = ACTIONS(329),
    [sym_whitespace] = ACTIONS(329),
    [aux_sym__inline_element_token1] = ACTIONS(329),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(327),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(327),
    [aux_sym_autolinks_token1] = ACTIONS(329),
    [anon_sym_link_COLON] = ACTIONS(329),
    [anon_sym_mailto_COLON] = ACTIONS(329),
    [anon_sym_LT_LT] = ACTIONS(329),
    [anon_sym_xref_COLON] = ACTIONS(329),
    [sym_emphasis] = ACTIONS(329),
    [sym_strong] = ACTIONS(329),
    [sym_monospace] = ACTIONS(327),
    [sym_highlight] = ACTIONS(327),
    [sym_superscript] = ACTIONS(327),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(333),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(333),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(333),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(333),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(333),
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
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(331),
    [anon_sym_audio_COLON_COLON] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(333),
    [anon_sym_video_COLON_COLON] = ACTIONS(331),
    [anon_sym_BANG] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(333),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(333),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_STAR] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(333),
    [anon_sym_CARET] = ACTIONS(333),
    [anon_sym__] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(333),
    [sym_word] = ACTIONS(333),
    [sym_whitespace] = ACTIONS(333),
    [aux_sym__inline_element_token1] = ACTIONS(333),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(331),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(331),
    [aux_sym_autolinks_token1] = ACTIONS(333),
    [anon_sym_link_COLON] = ACTIONS(333),
    [anon_sym_mailto_COLON] = ACTIONS(333),
    [anon_sym_LT_LT] = ACTIONS(333),
    [anon_sym_xref_COLON] = ACTIONS(333),
    [sym_emphasis] = ACTIONS(333),
    [sym_strong] = ACTIONS(333),
    [sym_monospace] = ACTIONS(331),
    [sym_highlight] = ACTIONS(331),
    [sym_superscript] = ACTIONS(331),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(337),
    [anon_sym_EQ] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(337),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(337),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(337),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
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
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(335),
    [anon_sym_audio_COLON_COLON] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_video_COLON_COLON] = ACTIONS(335),
    [anon_sym_BANG] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [anon_sym_POUND] = ACTIONS(337),
    [anon_sym_DOLLAR] = ACTIONS(337),
    [anon_sym_PERCENT] = ACTIONS(337),
    [anon_sym_AMP] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [anon_sym_SLASH] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(337),
    [anon_sym_QMARK] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(337),
    [anon_sym_BSLASH] = ACTIONS(337),
    [anon_sym_CARET] = ACTIONS(337),
    [anon_sym__] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_PIPE] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(337),
    [sym_word] = ACTIONS(337),
    [sym_whitespace] = ACTIONS(337),
    [aux_sym__inline_element_token1] = ACTIONS(337),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(335),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(335),
    [aux_sym_autolinks_token1] = ACTIONS(337),
    [anon_sym_link_COLON] = ACTIONS(337),
    [anon_sym_mailto_COLON] = ACTIONS(337),
    [anon_sym_LT_LT] = ACTIONS(337),
    [anon_sym_xref_COLON] = ACTIONS(337),
    [sym_emphasis] = ACTIONS(337),
    [sym_strong] = ACTIONS(337),
    [sym_monospace] = ACTIONS(335),
    [sym_highlight] = ACTIONS(335),
    [sym_superscript] = ACTIONS(335),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_DOT] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_EQ_EQ] = ACTIONS(341),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(341),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(341),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(341),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
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
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(339),
    [anon_sym_audio_COLON_COLON] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_video_COLON_COLON] = ACTIONS(339),
    [anon_sym_BANG] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(341),
    [anon_sym_DOLLAR] = ACTIONS(341),
    [anon_sym_PERCENT] = ACTIONS(341),
    [anon_sym_AMP] = ACTIONS(341),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_STAR] = ACTIONS(341),
    [anon_sym_PLUS] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(341),
    [anon_sym_SLASH] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_QMARK] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym_BSLASH] = ACTIONS(341),
    [anon_sym_CARET] = ACTIONS(341),
    [anon_sym__] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [sym_word] = ACTIONS(341),
    [sym_whitespace] = ACTIONS(341),
    [aux_sym__inline_element_token1] = ACTIONS(341),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(339),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(339),
    [aux_sym_autolinks_token1] = ACTIONS(341),
    [anon_sym_link_COLON] = ACTIONS(341),
    [anon_sym_mailto_COLON] = ACTIONS(341),
    [anon_sym_LT_LT] = ACTIONS(341),
    [anon_sym_xref_COLON] = ACTIONS(341),
    [sym_emphasis] = ACTIONS(341),
    [sym_strong] = ACTIONS(341),
    [sym_monospace] = ACTIONS(339),
    [sym_highlight] = ACTIONS(339),
    [sym_superscript] = ACTIONS(339),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_DOT] = ACTIONS(345),
    [anon_sym_EQ] = ACTIONS(345),
    [anon_sym_EQ_EQ] = ACTIONS(345),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(345),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(345),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(345),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(343),
    [anon_sym_COLON] = ACTIONS(345),
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
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(343),
    [anon_sym_audio_COLON_COLON] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_video_COLON_COLON] = ACTIONS(343),
    [anon_sym_BANG] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_POUND] = ACTIONS(345),
    [anon_sym_DOLLAR] = ACTIONS(345),
    [anon_sym_PERCENT] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_STAR] = ACTIONS(345),
    [anon_sym_PLUS] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_DASH] = ACTIONS(345),
    [anon_sym_SLASH] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_QMARK] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
    [anon_sym_BSLASH] = ACTIONS(345),
    [anon_sym_CARET] = ACTIONS(345),
    [anon_sym__] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [sym_word] = ACTIONS(345),
    [sym_whitespace] = ACTIONS(345),
    [aux_sym__inline_element_token1] = ACTIONS(345),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(343),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(343),
    [aux_sym_autolinks_token1] = ACTIONS(345),
    [anon_sym_link_COLON] = ACTIONS(345),
    [anon_sym_mailto_COLON] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(345),
    [anon_sym_xref_COLON] = ACTIONS(345),
    [sym_emphasis] = ACTIONS(345),
    [sym_strong] = ACTIONS(345),
    [sym_monospace] = ACTIONS(343),
    [sym_highlight] = ACTIONS(343),
    [sym_superscript] = ACTIONS(343),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(349),
    [anon_sym_EQ] = ACTIONS(349),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(349),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(349),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(349),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(349),
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
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(347),
    [anon_sym_audio_COLON_COLON] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_video_COLON_COLON] = ACTIONS(347),
    [anon_sym_BANG] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(349),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [anon_sym_PERCENT] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_QMARK] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(349),
    [anon_sym_BSLASH] = ACTIONS(349),
    [anon_sym_CARET] = ACTIONS(349),
    [anon_sym__] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_TILDE] = ACTIONS(349),
    [sym_word] = ACTIONS(349),
    [sym_whitespace] = ACTIONS(349),
    [aux_sym__inline_element_token1] = ACTIONS(349),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(347),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(347),
    [aux_sym_autolinks_token1] = ACTIONS(349),
    [anon_sym_link_COLON] = ACTIONS(349),
    [anon_sym_mailto_COLON] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_xref_COLON] = ACTIONS(349),
    [sym_emphasis] = ACTIONS(349),
    [sym_strong] = ACTIONS(349),
    [sym_monospace] = ACTIONS(347),
    [sym_highlight] = ACTIONS(347),
    [sym_superscript] = ACTIONS(347),
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
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_EQ_EQ] = ACTIONS(353),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(353),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(353),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(353),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(353),
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
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(351),
    [anon_sym_audio_COLON_COLON] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_video_COLON_COLON] = ACTIONS(351),
    [anon_sym_BANG] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_QMARK] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_BSLASH] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(353),
    [anon_sym__] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [sym_word] = ACTIONS(353),
    [sym_whitespace] = ACTIONS(353),
    [aux_sym__inline_element_token1] = ACTIONS(353),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(351),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(351),
    [aux_sym_autolinks_token1] = ACTIONS(353),
    [anon_sym_link_COLON] = ACTIONS(353),
    [anon_sym_mailto_COLON] = ACTIONS(353),
    [anon_sym_LT_LT] = ACTIONS(353),
    [anon_sym_xref_COLON] = ACTIONS(353),
    [sym_emphasis] = ACTIONS(353),
    [sym_strong] = ACTIONS(353),
    [sym_monospace] = ACTIONS(351),
    [sym_highlight] = ACTIONS(351),
    [sym_superscript] = ACTIONS(351),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_DOT] = ACTIONS(357),
    [anon_sym_EQ] = ACTIONS(357),
    [anon_sym_EQ_EQ] = ACTIONS(357),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(357),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(357),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(357),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(357),
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
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(355),
    [anon_sym_audio_COLON_COLON] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_video_COLON_COLON] = ACTIONS(355),
    [anon_sym_BANG] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_POUND] = ACTIONS(357),
    [anon_sym_DOLLAR] = ACTIONS(357),
    [anon_sym_PERCENT] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_STAR] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_QMARK] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(357),
    [anon_sym_BSLASH] = ACTIONS(357),
    [anon_sym_CARET] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_BQUOTE] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(357),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_TILDE] = ACTIONS(357),
    [sym_word] = ACTIONS(357),
    [sym_whitespace] = ACTIONS(357),
    [aux_sym__inline_element_token1] = ACTIONS(357),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(355),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(355),
    [aux_sym_autolinks_token1] = ACTIONS(357),
    [anon_sym_link_COLON] = ACTIONS(357),
    [anon_sym_mailto_COLON] = ACTIONS(357),
    [anon_sym_LT_LT] = ACTIONS(357),
    [anon_sym_xref_COLON] = ACTIONS(357),
    [sym_emphasis] = ACTIONS(357),
    [sym_strong] = ACTIONS(357),
    [sym_monospace] = ACTIONS(355),
    [sym_highlight] = ACTIONS(355),
    [sym_superscript] = ACTIONS(355),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_DOT] = ACTIONS(361),
    [anon_sym_EQ] = ACTIONS(361),
    [anon_sym_EQ_EQ] = ACTIONS(361),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(361),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(361),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(361),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(361),
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
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(359),
    [anon_sym_audio_COLON_COLON] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_video_COLON_COLON] = ACTIONS(359),
    [anon_sym_BANG] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_POUND] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [anon_sym_PERCENT] = ACTIONS(361),
    [anon_sym_AMP] = ACTIONS(361),
    [anon_sym_SQUOTE] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_STAR] = ACTIONS(361),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_DASH] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_QMARK] = ACTIONS(361),
    [anon_sym_AT] = ACTIONS(361),
    [anon_sym_BSLASH] = ACTIONS(361),
    [anon_sym_CARET] = ACTIONS(361),
    [anon_sym__] = ACTIONS(361),
    [anon_sym_BQUOTE] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_TILDE] = ACTIONS(361),
    [sym_word] = ACTIONS(361),
    [sym_whitespace] = ACTIONS(361),
    [aux_sym__inline_element_token1] = ACTIONS(361),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(359),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(359),
    [aux_sym_autolinks_token1] = ACTIONS(361),
    [anon_sym_link_COLON] = ACTIONS(361),
    [anon_sym_mailto_COLON] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(361),
    [anon_sym_xref_COLON] = ACTIONS(361),
    [sym_emphasis] = ACTIONS(361),
    [sym_strong] = ACTIONS(361),
    [sym_monospace] = ACTIONS(359),
    [sym_highlight] = ACTIONS(359),
    [sym_superscript] = ACTIONS(359),
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
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(365),
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(365),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(365),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(365),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(365),
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
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(363),
    [anon_sym_audio_COLON_COLON] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_video_COLON_COLON] = ACTIONS(363),
    [anon_sym_BANG] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_POUND] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_SQUOTE] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_QMARK] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
    [anon_sym_BSLASH] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym__] = ACTIONS(365),
    [anon_sym_BQUOTE] = ACTIONS(365),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_TILDE] = ACTIONS(365),
    [sym_word] = ACTIONS(365),
    [sym_whitespace] = ACTIONS(365),
    [aux_sym__inline_element_token1] = ACTIONS(365),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(363),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(363),
    [aux_sym_autolinks_token1] = ACTIONS(365),
    [anon_sym_link_COLON] = ACTIONS(365),
    [anon_sym_mailto_COLON] = ACTIONS(365),
    [anon_sym_LT_LT] = ACTIONS(365),
    [anon_sym_xref_COLON] = ACTIONS(365),
    [sym_emphasis] = ACTIONS(365),
    [sym_strong] = ACTIONS(365),
    [sym_monospace] = ACTIONS(363),
    [sym_highlight] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
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
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_DOT] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(369),
    [anon_sym_EQ_EQ] = ACTIONS(369),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(369),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(369),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(369),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(367),
    [anon_sym_COLON] = ACTIONS(369),
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
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(367),
    [anon_sym_audio_COLON_COLON] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_video_COLON_COLON] = ACTIONS(367),
    [anon_sym_BANG] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(369),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_PERCENT] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(369),
    [anon_sym_PLUS] = ACTIONS(369),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym_SLASH] = ACTIONS(369),
    [anon_sym_SEMI] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_QMARK] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_BSLASH] = ACTIONS(369),
    [anon_sym_CARET] = ACTIONS(369),
    [anon_sym__] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(369),
    [sym_word] = ACTIONS(369),
    [sym_whitespace] = ACTIONS(369),
    [aux_sym__inline_element_token1] = ACTIONS(369),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(367),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(367),
    [aux_sym_autolinks_token1] = ACTIONS(369),
    [anon_sym_link_COLON] = ACTIONS(369),
    [anon_sym_mailto_COLON] = ACTIONS(369),
    [anon_sym_LT_LT] = ACTIONS(369),
    [anon_sym_xref_COLON] = ACTIONS(369),
    [sym_emphasis] = ACTIONS(369),
    [sym_strong] = ACTIONS(369),
    [sym_monospace] = ACTIONS(367),
    [sym_highlight] = ACTIONS(367),
    [sym_superscript] = ACTIONS(367),
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
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_EQ] = ACTIONS(373),
    [anon_sym_EQ_EQ] = ACTIONS(373),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(373),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(373),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(373),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(373),
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
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(371),
    [anon_sym_audio_COLON_COLON] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(373),
    [anon_sym_video_COLON_COLON] = ACTIONS(371),
    [anon_sym_BANG] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(373),
    [anon_sym_SQUOTE] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_SLASH] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(373),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_QMARK] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_BSLASH] = ACTIONS(373),
    [anon_sym_CARET] = ACTIONS(373),
    [anon_sym__] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(373),
    [sym_word] = ACTIONS(373),
    [sym_whitespace] = ACTIONS(373),
    [aux_sym__inline_element_token1] = ACTIONS(373),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(371),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(371),
    [aux_sym_autolinks_token1] = ACTIONS(373),
    [anon_sym_link_COLON] = ACTIONS(373),
    [anon_sym_mailto_COLON] = ACTIONS(373),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_xref_COLON] = ACTIONS(373),
    [sym_emphasis] = ACTIONS(373),
    [sym_strong] = ACTIONS(373),
    [sym_monospace] = ACTIONS(371),
    [sym_highlight] = ACTIONS(371),
    [sym_superscript] = ACTIONS(371),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_DOT] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(377),
    [anon_sym_EQ_EQ] = ACTIONS(377),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(377),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(377),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(377),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(375),
    [anon_sym_COLON] = ACTIONS(377),
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
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(375),
    [anon_sym_audio_COLON_COLON] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_video_COLON_COLON] = ACTIONS(375),
    [anon_sym_BANG] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(377),
    [anon_sym_PERCENT] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(377),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_QMARK] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_BSLASH] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(377),
    [anon_sym__] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [sym_word] = ACTIONS(377),
    [sym_whitespace] = ACTIONS(377),
    [aux_sym__inline_element_token1] = ACTIONS(377),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(375),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(375),
    [aux_sym_autolinks_token1] = ACTIONS(377),
    [anon_sym_link_COLON] = ACTIONS(377),
    [anon_sym_mailto_COLON] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(377),
    [anon_sym_xref_COLON] = ACTIONS(377),
    [sym_emphasis] = ACTIONS(377),
    [sym_strong] = ACTIONS(377),
    [sym_monospace] = ACTIONS(375),
    [sym_highlight] = ACTIONS(375),
    [sym_superscript] = ACTIONS(375),
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
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_EQ_EQ] = ACTIONS(381),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(381),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(381),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(381),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(381),
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
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(379),
    [anon_sym_audio_COLON_COLON] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_video_COLON_COLON] = ACTIONS(379),
    [anon_sym_BANG] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_BSLASH] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(381),
    [anon_sym__] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [sym_word] = ACTIONS(381),
    [sym_whitespace] = ACTIONS(381),
    [aux_sym__inline_element_token1] = ACTIONS(381),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(379),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(379),
    [aux_sym_autolinks_token1] = ACTIONS(381),
    [anon_sym_link_COLON] = ACTIONS(381),
    [anon_sym_mailto_COLON] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_xref_COLON] = ACTIONS(381),
    [sym_emphasis] = ACTIONS(381),
    [sym_strong] = ACTIONS(381),
    [sym_monospace] = ACTIONS(379),
    [sym_highlight] = ACTIONS(379),
    [sym_superscript] = ACTIONS(379),
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
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(385),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_EQ_EQ] = ACTIONS(385),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(385),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(385),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(385),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(385),
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
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(383),
    [anon_sym_audio_COLON_COLON] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(385),
    [anon_sym_video_COLON_COLON] = ACTIONS(383),
    [anon_sym_BANG] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(385),
    [anon_sym_DOLLAR] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(385),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_QMARK] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_BSLASH] = ACTIONS(385),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym__] = ACTIONS(385),
    [anon_sym_BQUOTE] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(385),
    [sym_word] = ACTIONS(385),
    [sym_whitespace] = ACTIONS(385),
    [aux_sym__inline_element_token1] = ACTIONS(385),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(383),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(383),
    [aux_sym_autolinks_token1] = ACTIONS(385),
    [anon_sym_link_COLON] = ACTIONS(385),
    [anon_sym_mailto_COLON] = ACTIONS(385),
    [anon_sym_LT_LT] = ACTIONS(385),
    [anon_sym_xref_COLON] = ACTIONS(385),
    [sym_emphasis] = ACTIONS(385),
    [sym_strong] = ACTIONS(385),
    [sym_monospace] = ACTIONS(383),
    [sym_highlight] = ACTIONS(383),
    [sym_superscript] = ACTIONS(383),
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
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_EQ_EQ] = ACTIONS(389),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(389),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(389),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(389),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(389),
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
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(387),
    [anon_sym_audio_COLON_COLON] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(389),
    [anon_sym_video_COLON_COLON] = ACTIONS(387),
    [anon_sym_BANG] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(389),
    [anon_sym_DOLLAR] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_STAR] = ACTIONS(389),
    [anon_sym_PLUS] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_SLASH] = ACTIONS(389),
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_QMARK] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_BSLASH] = ACTIONS(389),
    [anon_sym_CARET] = ACTIONS(389),
    [anon_sym__] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [sym_word] = ACTIONS(389),
    [sym_whitespace] = ACTIONS(389),
    [aux_sym__inline_element_token1] = ACTIONS(389),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(387),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(387),
    [aux_sym_autolinks_token1] = ACTIONS(389),
    [anon_sym_link_COLON] = ACTIONS(389),
    [anon_sym_mailto_COLON] = ACTIONS(389),
    [anon_sym_LT_LT] = ACTIONS(389),
    [anon_sym_xref_COLON] = ACTIONS(389),
    [sym_emphasis] = ACTIONS(389),
    [sym_strong] = ACTIONS(389),
    [sym_monospace] = ACTIONS(387),
    [sym_highlight] = ACTIONS(387),
    [sym_superscript] = ACTIONS(387),
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
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(393),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_EQ_EQ] = ACTIONS(393),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(393),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(393),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(393),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(393),
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
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(391),
    [anon_sym_audio_COLON_COLON] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_video_COLON_COLON] = ACTIONS(391),
    [anon_sym_BANG] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_POUND] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(393),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_BSLASH] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(393),
    [anon_sym__] = ACTIONS(393),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [sym_word] = ACTIONS(393),
    [sym_whitespace] = ACTIONS(393),
    [aux_sym__inline_element_token1] = ACTIONS(393),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(391),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(391),
    [aux_sym_autolinks_token1] = ACTIONS(393),
    [anon_sym_link_COLON] = ACTIONS(393),
    [anon_sym_mailto_COLON] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_xref_COLON] = ACTIONS(393),
    [sym_emphasis] = ACTIONS(393),
    [sym_strong] = ACTIONS(393),
    [sym_monospace] = ACTIONS(391),
    [sym_highlight] = ACTIONS(391),
    [sym_superscript] = ACTIONS(391),
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
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_DOT] = ACTIONS(397),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(397),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(397),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(397),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(397),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(397),
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
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(395),
    [anon_sym_audio_COLON_COLON] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_video_COLON_COLON] = ACTIONS(395),
    [anon_sym_BANG] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_DOLLAR] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_SEMI] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_QMARK] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_BSLASH] = ACTIONS(397),
    [anon_sym_CARET] = ACTIONS(397),
    [anon_sym__] = ACTIONS(397),
    [anon_sym_BQUOTE] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(397),
    [sym_word] = ACTIONS(397),
    [sym_whitespace] = ACTIONS(397),
    [aux_sym__inline_element_token1] = ACTIONS(397),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(395),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(395),
    [aux_sym_autolinks_token1] = ACTIONS(397),
    [anon_sym_link_COLON] = ACTIONS(397),
    [anon_sym_mailto_COLON] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_xref_COLON] = ACTIONS(397),
    [sym_emphasis] = ACTIONS(397),
    [sym_strong] = ACTIONS(397),
    [sym_monospace] = ACTIONS(395),
    [sym_highlight] = ACTIONS(395),
    [sym_superscript] = ACTIONS(395),
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
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_DOT] = ACTIONS(401),
    [anon_sym_EQ] = ACTIONS(401),
    [anon_sym_EQ_EQ] = ACTIONS(401),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(401),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(401),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(401),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(401),
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
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(399),
    [anon_sym_audio_COLON_COLON] = ACTIONS(399),
    [anon_sym_RBRACK] = ACTIONS(401),
    [anon_sym_video_COLON_COLON] = ACTIONS(399),
    [anon_sym_BANG] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(401),
    [anon_sym_DOLLAR] = ACTIONS(401),
    [anon_sym_PERCENT] = ACTIONS(401),
    [anon_sym_AMP] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_STAR] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(401),
    [anon_sym_DASH] = ACTIONS(401),
    [anon_sym_SLASH] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_QMARK] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_BSLASH] = ACTIONS(401),
    [anon_sym_CARET] = ACTIONS(401),
    [anon_sym__] = ACTIONS(401),
    [anon_sym_BQUOTE] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [sym_word] = ACTIONS(401),
    [sym_whitespace] = ACTIONS(401),
    [aux_sym__inline_element_token1] = ACTIONS(401),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(399),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(399),
    [aux_sym_autolinks_token1] = ACTIONS(401),
    [anon_sym_link_COLON] = ACTIONS(401),
    [anon_sym_mailto_COLON] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(401),
    [anon_sym_xref_COLON] = ACTIONS(401),
    [sym_emphasis] = ACTIONS(401),
    [sym_strong] = ACTIONS(401),
    [sym_monospace] = ACTIONS(399),
    [sym_highlight] = ACTIONS(399),
    [sym_superscript] = ACTIONS(399),
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
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_EQ] = ACTIONS(405),
    [anon_sym_EQ_EQ] = ACTIONS(405),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(405),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(405),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(405),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(405),
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
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(403),
    [anon_sym_audio_COLON_COLON] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(405),
    [anon_sym_video_COLON_COLON] = ACTIONS(403),
    [anon_sym_BANG] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_PERCENT] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_COMMA] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_SLASH] = ACTIONS(405),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_QMARK] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_BSLASH] = ACTIONS(405),
    [anon_sym_CARET] = ACTIONS(405),
    [anon_sym__] = ACTIONS(405),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [sym_word] = ACTIONS(405),
    [sym_whitespace] = ACTIONS(405),
    [aux_sym__inline_element_token1] = ACTIONS(405),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(403),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(403),
    [aux_sym_autolinks_token1] = ACTIONS(405),
    [anon_sym_link_COLON] = ACTIONS(405),
    [anon_sym_mailto_COLON] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_xref_COLON] = ACTIONS(405),
    [sym_emphasis] = ACTIONS(405),
    [sym_strong] = ACTIONS(405),
    [sym_monospace] = ACTIONS(403),
    [sym_highlight] = ACTIONS(403),
    [sym_superscript] = ACTIONS(403),
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
  [51] = {
    [sym_line] = STATE(52),
    [sym__inline_element] = STATE(52),
    [sym_kbd] = STATE(52),
    [sym_footnote] = STATE(52),
    [sym_links] = STATE(52),
    [sym_autolinks] = STATE(181),
    [sym_url_macro] = STATE(65),
    [sym_link_macro] = STATE(65),
    [sym_mailto] = STATE(65),
    [sym_xref] = STATE(52),
    [sym__inline_xref] = STATE(58),
    [sym__xref] = STATE(64),
    [sym_passthrough] = STATE(52),
    [sym__passthrough_plus] = STATE(68),
    [sym__passthrough_cmd] = STATE(68),
    [sym_replacement] = STATE(52),
    [aux_sym_paragraph_repeat1] = STATE(52),
    [aux_sym_line_repeat1] = STATE(54),
    [anon_sym_DOT] = ACTIONS(407),
    [anon_sym_EQ] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [anon_sym_LF_LF] = ACTIONS(409),
    [anon_sym_BANG] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(407),
    [anon_sym_PERCENT] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(407),
    [anon_sym_SQUOTE] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [anon_sym_SLASH] = ACTIONS(407),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(407),
    [anon_sym_QMARK] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(407),
    [anon_sym_BSLASH] = ACTIONS(407),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym__] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_TILDE] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
    [sym_whitespace] = ACTIONS(407),
    [aux_sym__inline_element_token1] = ACTIONS(411),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(67),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(69),
    [aux_sym_autolinks_token1] = ACTIONS(71),
    [anon_sym_link_COLON] = ACTIONS(73),
    [anon_sym_mailto_COLON] = ACTIONS(75),
    [anon_sym_LT_LT] = ACTIONS(413),
    [anon_sym_xref_COLON] = ACTIONS(79),
    [sym_emphasis] = ACTIONS(411),
    [sym_strong] = ACTIONS(415),
    [sym_monospace] = ACTIONS(415),
    [sym_highlight] = ACTIONS(415),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(83),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(87),
  },
  [52] = {
    [sym_line] = STATE(52),
    [sym__inline_element] = STATE(52),
    [sym_kbd] = STATE(52),
    [sym_footnote] = STATE(52),
    [sym_links] = STATE(52),
    [sym_autolinks] = STATE(181),
    [sym_url_macro] = STATE(65),
    [sym_link_macro] = STATE(65),
    [sym_mailto] = STATE(65),
    [sym_xref] = STATE(52),
    [sym__inline_xref] = STATE(58),
    [sym__xref] = STATE(64),
    [sym_passthrough] = STATE(52),
    [sym__passthrough_plus] = STATE(68),
    [sym__passthrough_cmd] = STATE(68),
    [sym_replacement] = STATE(52),
    [aux_sym_paragraph_repeat1] = STATE(52),
    [aux_sym_line_repeat1] = STATE(54),
    [anon_sym_DOT] = ACTIONS(417),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_LF_LF] = ACTIONS(420),
    [anon_sym_BANG] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_POUND] = ACTIONS(422),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(417),
    [anon_sym_SLASH] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_QMARK] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_BSLASH] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [anon_sym_BQUOTE] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(422),
    [sym_word] = ACTIONS(422),
    [sym_whitespace] = ACTIONS(417),
    [aux_sym__inline_element_token1] = ACTIONS(425),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(428),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(431),
    [aux_sym_autolinks_token1] = ACTIONS(434),
    [anon_sym_link_COLON] = ACTIONS(437),
    [anon_sym_mailto_COLON] = ACTIONS(440),
    [anon_sym_LT_LT] = ACTIONS(443),
    [anon_sym_xref_COLON] = ACTIONS(446),
    [sym_emphasis] = ACTIONS(425),
    [sym_strong] = ACTIONS(449),
    [sym_monospace] = ACTIONS(449),
    [sym_highlight] = ACTIONS(449),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(452),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(455),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(458),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(458),
  },
  [53] = {
    [anon_sym_DOT] = ACTIONS(461),
    [aux_sym_block_title_token1] = ACTIONS(463),
    [anon_sym_EQ] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(461),
    [anon_sym_LF_LF] = ACTIONS(465),
    [anon_sym_BANG] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_DOLLAR] = ACTIONS(461),
    [anon_sym_PERCENT] = ACTIONS(461),
    [anon_sym_AMP] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(461),
    [anon_sym_SLASH] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
    [anon_sym_BSLASH] = ACTIONS(461),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym__] = ACTIONS(461),
    [anon_sym_BQUOTE] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(461),
    [sym_word] = ACTIONS(461),
    [sym_whitespace] = ACTIONS(461),
    [aux_sym__inline_element_token1] = ACTIONS(461),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(461),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(461),
    [aux_sym_autolinks_token1] = ACTIONS(461),
    [anon_sym_link_COLON] = ACTIONS(461),
    [anon_sym_mailto_COLON] = ACTIONS(461),
    [anon_sym_LT_LT] = ACTIONS(461),
    [anon_sym_xref_COLON] = ACTIONS(461),
    [sym_emphasis] = ACTIONS(461),
    [sym_strong] = ACTIONS(461),
    [sym_monospace] = ACTIONS(461),
    [sym_highlight] = ACTIONS(461),
    [sym_superscript] = ACTIONS(461),
    [sym_subscript] = ACTIONS(461),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(461),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(461),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(461),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(461),
  },
  [54] = {
    [aux_sym_line_repeat1] = STATE(56),
    [anon_sym_DOT] = ACTIONS(467),
    [anon_sym_EQ] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(467),
    [anon_sym_LF_LF] = ACTIONS(469),
    [anon_sym_BANG] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_DOLLAR] = ACTIONS(467),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_AMP] = ACTIONS(467),
    [anon_sym_SQUOTE] = ACTIONS(467),
    [anon_sym_LPAREN] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(467),
    [anon_sym_SEMI] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(467),
    [anon_sym_QMARK] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(467),
    [anon_sym_BSLASH] = ACTIONS(467),
    [anon_sym_CARET] = ACTIONS(471),
    [anon_sym__] = ACTIONS(471),
    [anon_sym_BQUOTE] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_PIPE] = ACTIONS(467),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_TILDE] = ACTIONS(471),
    [sym_word] = ACTIONS(471),
    [sym_whitespace] = ACTIONS(467),
    [aux_sym__inline_element_token1] = ACTIONS(473),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(469),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(469),
    [aux_sym_autolinks_token1] = ACTIONS(473),
    [anon_sym_link_COLON] = ACTIONS(473),
    [anon_sym_mailto_COLON] = ACTIONS(473),
    [anon_sym_LT_LT] = ACTIONS(469),
    [anon_sym_xref_COLON] = ACTIONS(473),
    [sym_emphasis] = ACTIONS(473),
    [sym_strong] = ACTIONS(469),
    [sym_monospace] = ACTIONS(469),
    [sym_highlight] = ACTIONS(469),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(469),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(469),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(469),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(469),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(469),
  },
  [55] = {
    [anon_sym_DOT] = ACTIONS(465),
    [anon_sym_EQ] = ACTIONS(465),
    [anon_sym_] = ACTIONS(475),
    [anon_sym_COLON] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_LF_LF] = ACTIONS(465),
    [anon_sym_BANG] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
    [anon_sym_SQUOTE] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_DASH] = ACTIONS(465),
    [anon_sym_SLASH] = ACTIONS(465),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_QMARK] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(465),
    [anon_sym_BSLASH] = ACTIONS(465),
    [anon_sym_CARET] = ACTIONS(461),
    [anon_sym__] = ACTIONS(461),
    [anon_sym_BQUOTE] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_TILDE] = ACTIONS(461),
    [sym_word] = ACTIONS(461),
    [sym_whitespace] = ACTIONS(461),
    [aux_sym__inline_element_token1] = ACTIONS(461),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(465),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(465),
    [aux_sym_autolinks_token1] = ACTIONS(461),
    [anon_sym_link_COLON] = ACTIONS(461),
    [anon_sym_mailto_COLON] = ACTIONS(461),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_xref_COLON] = ACTIONS(461),
    [sym_emphasis] = ACTIONS(461),
    [sym_strong] = ACTIONS(465),
    [sym_monospace] = ACTIONS(465),
    [sym_highlight] = ACTIONS(465),
    [sym_superscript] = ACTIONS(465),
    [sym_subscript] = ACTIONS(465),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(465),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(465),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(465),
  },
  [56] = {
    [aux_sym_line_repeat1] = STATE(56),
    [anon_sym_DOT] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(477),
    [anon_sym_LF_LF] = ACTIONS(480),
    [anon_sym_BANG] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [anon_sym_POUND] = ACTIONS(482),
    [anon_sym_DOLLAR] = ACTIONS(477),
    [anon_sym_PERCENT] = ACTIONS(477),
    [anon_sym_AMP] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(477),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_PLUS] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_DASH] = ACTIONS(477),
    [anon_sym_SLASH] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_LT] = ACTIONS(482),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_QMARK] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(477),
    [anon_sym_BSLASH] = ACTIONS(477),
    [anon_sym_CARET] = ACTIONS(482),
    [anon_sym__] = ACTIONS(482),
    [anon_sym_BQUOTE] = ACTIONS(482),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_PIPE] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_TILDE] = ACTIONS(482),
    [sym_word] = ACTIONS(482),
    [sym_whitespace] = ACTIONS(477),
    [aux_sym__inline_element_token1] = ACTIONS(485),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(480),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(480),
    [aux_sym_autolinks_token1] = ACTIONS(485),
    [anon_sym_link_COLON] = ACTIONS(485),
    [anon_sym_mailto_COLON] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(480),
    [anon_sym_xref_COLON] = ACTIONS(485),
    [sym_emphasis] = ACTIONS(485),
    [sym_strong] = ACTIONS(480),
    [sym_monospace] = ACTIONS(480),
    [sym_highlight] = ACTIONS(480),
    [sym_superscript] = ACTIONS(480),
    [sym_subscript] = ACTIONS(480),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(480),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(480),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(480),
  },
  [57] = {
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_LF_LF] = ACTIONS(487),
    [anon_sym_BANG] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_PERCENT] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_STAR] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_DASH] = ACTIONS(487),
    [anon_sym_SLASH] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_QMARK] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(487),
    [anon_sym_BSLASH] = ACTIONS(487),
    [anon_sym_CARET] = ACTIONS(489),
    [anon_sym__] = ACTIONS(489),
    [anon_sym_BQUOTE] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_TILDE] = ACTIONS(489),
    [sym_word] = ACTIONS(489),
    [sym_whitespace] = ACTIONS(487),
    [aux_sym__inline_element_token1] = ACTIONS(489),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(487),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(487),
    [aux_sym_autolinks_token1] = ACTIONS(489),
    [anon_sym_link_COLON] = ACTIONS(489),
    [anon_sym_mailto_COLON] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_xref_COLON] = ACTIONS(489),
    [sym_emphasis] = ACTIONS(489),
    [sym_strong] = ACTIONS(487),
    [sym_monospace] = ACTIONS(487),
    [sym_highlight] = ACTIONS(487),
    [sym_superscript] = ACTIONS(487),
    [sym_subscript] = ACTIONS(487),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(487),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(487),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(487),
  },
  [58] = {
    [anon_sym_DOT] = ACTIONS(491),
    [anon_sym_EQ] = ACTIONS(491),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [anon_sym_LF_LF] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_PERCENT] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_STAR] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(493),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(491),
    [anon_sym_BSLASH] = ACTIONS(491),
    [anon_sym_CARET] = ACTIONS(493),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_BQUOTE] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_TILDE] = ACTIONS(493),
    [sym_word] = ACTIONS(493),
    [sym_whitespace] = ACTIONS(491),
    [aux_sym__inline_element_token1] = ACTIONS(493),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(491),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(491),
    [aux_sym_autolinks_token1] = ACTIONS(493),
    [anon_sym_link_COLON] = ACTIONS(493),
    [anon_sym_mailto_COLON] = ACTIONS(493),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_xref_COLON] = ACTIONS(493),
    [sym_emphasis] = ACTIONS(493),
    [sym_strong] = ACTIONS(491),
    [sym_monospace] = ACTIONS(491),
    [sym_highlight] = ACTIONS(491),
    [sym_superscript] = ACTIONS(491),
    [sym_subscript] = ACTIONS(491),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(491),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(491),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(491),
  },
  [59] = {
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
    [anon_sym_LF_LF] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_POUND] = ACTIONS(497),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(495),
    [anon_sym_AMP] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_QMARK] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(495),
    [anon_sym_BSLASH] = ACTIONS(495),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_BQUOTE] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_TILDE] = ACTIONS(497),
    [sym_word] = ACTIONS(497),
    [sym_whitespace] = ACTIONS(495),
    [aux_sym__inline_element_token1] = ACTIONS(497),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(495),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(495),
    [aux_sym_autolinks_token1] = ACTIONS(497),
    [anon_sym_link_COLON] = ACTIONS(497),
    [anon_sym_mailto_COLON] = ACTIONS(497),
    [anon_sym_LT_LT] = ACTIONS(495),
    [anon_sym_xref_COLON] = ACTIONS(497),
    [sym_emphasis] = ACTIONS(497),
    [sym_strong] = ACTIONS(495),
    [sym_monospace] = ACTIONS(495),
    [sym_highlight] = ACTIONS(495),
    [sym_superscript] = ACTIONS(495),
    [sym_subscript] = ACTIONS(495),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(495),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(495),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(495),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(495),
  },
  [60] = {
    [anon_sym_DOT] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [anon_sym_LF_LF] = ACTIONS(499),
    [anon_sym_BANG] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [anon_sym_POUND] = ACTIONS(501),
    [anon_sym_DOLLAR] = ACTIONS(499),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_AMP] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_STAR] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(499),
    [anon_sym_BSLASH] = ACTIONS(499),
    [anon_sym_CARET] = ACTIONS(501),
    [anon_sym__] = ACTIONS(501),
    [anon_sym_BQUOTE] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_TILDE] = ACTIONS(501),
    [sym_word] = ACTIONS(501),
    [sym_whitespace] = ACTIONS(499),
    [aux_sym__inline_element_token1] = ACTIONS(501),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(499),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(499),
    [aux_sym_autolinks_token1] = ACTIONS(501),
    [anon_sym_link_COLON] = ACTIONS(501),
    [anon_sym_mailto_COLON] = ACTIONS(501),
    [anon_sym_LT_LT] = ACTIONS(499),
    [anon_sym_xref_COLON] = ACTIONS(501),
    [sym_emphasis] = ACTIONS(501),
    [sym_strong] = ACTIONS(499),
    [sym_monospace] = ACTIONS(499),
    [sym_highlight] = ACTIONS(499),
    [sym_superscript] = ACTIONS(499),
    [sym_subscript] = ACTIONS(499),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(499),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(499),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(499),
  },
  [61] = {
    [anon_sym_DOT] = ACTIONS(503),
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [anon_sym_LF_LF] = ACTIONS(503),
    [anon_sym_BANG] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_DOLLAR] = ACTIONS(503),
    [anon_sym_PERCENT] = ACTIONS(503),
    [anon_sym_AMP] = ACTIONS(503),
    [anon_sym_SQUOTE] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_STAR] = ACTIONS(505),
    [anon_sym_PLUS] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_DASH] = ACTIONS(503),
    [anon_sym_SLASH] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(503),
    [anon_sym_QMARK] = ACTIONS(503),
    [anon_sym_AT] = ACTIONS(503),
    [anon_sym_BSLASH] = ACTIONS(503),
    [anon_sym_CARET] = ACTIONS(505),
    [anon_sym__] = ACTIONS(505),
    [anon_sym_BQUOTE] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_TILDE] = ACTIONS(505),
    [sym_word] = ACTIONS(505),
    [sym_whitespace] = ACTIONS(503),
    [aux_sym__inline_element_token1] = ACTIONS(505),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(503),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(503),
    [aux_sym_autolinks_token1] = ACTIONS(505),
    [anon_sym_link_COLON] = ACTIONS(505),
    [anon_sym_mailto_COLON] = ACTIONS(505),
    [anon_sym_LT_LT] = ACTIONS(503),
    [anon_sym_xref_COLON] = ACTIONS(505),
    [sym_emphasis] = ACTIONS(505),
    [sym_strong] = ACTIONS(503),
    [sym_monospace] = ACTIONS(503),
    [sym_highlight] = ACTIONS(503),
    [sym_superscript] = ACTIONS(503),
    [sym_subscript] = ACTIONS(503),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(503),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(503),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(503),
  },
  [62] = {
    [anon_sym_DOT] = ACTIONS(507),
    [anon_sym_EQ] = ACTIONS(507),
    [anon_sym_COLON] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [anon_sym_LF_LF] = ACTIONS(507),
    [anon_sym_BANG] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_PERCENT] = ACTIONS(507),
    [anon_sym_AMP] = ACTIONS(507),
    [anon_sym_SQUOTE] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_STAR] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(507),
    [anon_sym_SLASH] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(507),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_GT] = ACTIONS(507),
    [anon_sym_QMARK] = ACTIONS(507),
    [anon_sym_AT] = ACTIONS(507),
    [anon_sym_BSLASH] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(509),
    [anon_sym__] = ACTIONS(509),
    [anon_sym_BQUOTE] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_TILDE] = ACTIONS(509),
    [sym_word] = ACTIONS(509),
    [sym_whitespace] = ACTIONS(507),
    [aux_sym__inline_element_token1] = ACTIONS(509),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(507),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(507),
    [aux_sym_autolinks_token1] = ACTIONS(509),
    [anon_sym_link_COLON] = ACTIONS(509),
    [anon_sym_mailto_COLON] = ACTIONS(509),
    [anon_sym_LT_LT] = ACTIONS(507),
    [anon_sym_xref_COLON] = ACTIONS(509),
    [sym_emphasis] = ACTIONS(509),
    [sym_strong] = ACTIONS(507),
    [sym_monospace] = ACTIONS(507),
    [sym_highlight] = ACTIONS(507),
    [sym_superscript] = ACTIONS(507),
    [sym_subscript] = ACTIONS(507),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(507),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(507),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(507),
  },
  [63] = {
    [anon_sym_DOT] = ACTIONS(511),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_COLON] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [anon_sym_LF_LF] = ACTIONS(511),
    [anon_sym_BANG] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_DOLLAR] = ACTIONS(511),
    [anon_sym_PERCENT] = ACTIONS(511),
    [anon_sym_AMP] = ACTIONS(511),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_DASH] = ACTIONS(511),
    [anon_sym_SLASH] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_QMARK] = ACTIONS(511),
    [anon_sym_AT] = ACTIONS(511),
    [anon_sym_BSLASH] = ACTIONS(511),
    [anon_sym_CARET] = ACTIONS(513),
    [anon_sym__] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_RBRACE] = ACTIONS(511),
    [anon_sym_TILDE] = ACTIONS(513),
    [sym_word] = ACTIONS(513),
    [sym_whitespace] = ACTIONS(511),
    [aux_sym__inline_element_token1] = ACTIONS(513),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(511),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(511),
    [aux_sym_autolinks_token1] = ACTIONS(513),
    [anon_sym_link_COLON] = ACTIONS(513),
    [anon_sym_mailto_COLON] = ACTIONS(513),
    [anon_sym_LT_LT] = ACTIONS(511),
    [anon_sym_xref_COLON] = ACTIONS(513),
    [sym_emphasis] = ACTIONS(513),
    [sym_strong] = ACTIONS(511),
    [sym_monospace] = ACTIONS(511),
    [sym_highlight] = ACTIONS(511),
    [sym_superscript] = ACTIONS(511),
    [sym_subscript] = ACTIONS(511),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(511),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(511),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(511),
  },
  [64] = {
    [anon_sym_DOT] = ACTIONS(491),
    [anon_sym_EQ] = ACTIONS(491),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [anon_sym_LF_LF] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_PERCENT] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_STAR] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(493),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(491),
    [anon_sym_BSLASH] = ACTIONS(491),
    [anon_sym_CARET] = ACTIONS(493),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_BQUOTE] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_TILDE] = ACTIONS(493),
    [sym_word] = ACTIONS(493),
    [sym_whitespace] = ACTIONS(491),
    [aux_sym__inline_element_token1] = ACTIONS(493),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(491),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(491),
    [aux_sym_autolinks_token1] = ACTIONS(493),
    [anon_sym_link_COLON] = ACTIONS(493),
    [anon_sym_mailto_COLON] = ACTIONS(493),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_xref_COLON] = ACTIONS(493),
    [sym_emphasis] = ACTIONS(493),
    [sym_strong] = ACTIONS(491),
    [sym_monospace] = ACTIONS(491),
    [sym_highlight] = ACTIONS(491),
    [sym_superscript] = ACTIONS(491),
    [sym_subscript] = ACTIONS(491),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(491),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(491),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(491),
  },
  [65] = {
    [anon_sym_DOT] = ACTIONS(515),
    [anon_sym_EQ] = ACTIONS(515),
    [anon_sym_COLON] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(515),
    [anon_sym_LF_LF] = ACTIONS(515),
    [anon_sym_BANG] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(517),
    [anon_sym_DOLLAR] = ACTIONS(515),
    [anon_sym_PERCENT] = ACTIONS(515),
    [anon_sym_AMP] = ACTIONS(515),
    [anon_sym_SQUOTE] = ACTIONS(515),
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_STAR] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_DASH] = ACTIONS(515),
    [anon_sym_SLASH] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_QMARK] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(515),
    [anon_sym_BSLASH] = ACTIONS(515),
    [anon_sym_CARET] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_BQUOTE] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_TILDE] = ACTIONS(517),
    [sym_word] = ACTIONS(517),
    [sym_whitespace] = ACTIONS(515),
    [aux_sym__inline_element_token1] = ACTIONS(517),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(515),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(515),
    [aux_sym_autolinks_token1] = ACTIONS(517),
    [anon_sym_link_COLON] = ACTIONS(517),
    [anon_sym_mailto_COLON] = ACTIONS(517),
    [anon_sym_LT_LT] = ACTIONS(515),
    [anon_sym_xref_COLON] = ACTIONS(517),
    [sym_emphasis] = ACTIONS(517),
    [sym_strong] = ACTIONS(515),
    [sym_monospace] = ACTIONS(515),
    [sym_highlight] = ACTIONS(515),
    [sym_superscript] = ACTIONS(515),
    [sym_subscript] = ACTIONS(515),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(515),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(515),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(515),
  },
  [66] = {
    [anon_sym_DOT] = ACTIONS(519),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [anon_sym_LF_LF] = ACTIONS(519),
    [anon_sym_BANG] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(521),
    [anon_sym_DOLLAR] = ACTIONS(519),
    [anon_sym_PERCENT] = ACTIONS(519),
    [anon_sym_AMP] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_LPAREN] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_STAR] = ACTIONS(521),
    [anon_sym_PLUS] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_DASH] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_QMARK] = ACTIONS(519),
    [anon_sym_AT] = ACTIONS(519),
    [anon_sym_BSLASH] = ACTIONS(519),
    [anon_sym_CARET] = ACTIONS(521),
    [anon_sym__] = ACTIONS(521),
    [anon_sym_BQUOTE] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_TILDE] = ACTIONS(521),
    [sym_word] = ACTIONS(521),
    [sym_whitespace] = ACTIONS(519),
    [aux_sym__inline_element_token1] = ACTIONS(521),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(519),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(519),
    [aux_sym_autolinks_token1] = ACTIONS(521),
    [anon_sym_link_COLON] = ACTIONS(521),
    [anon_sym_mailto_COLON] = ACTIONS(521),
    [anon_sym_LT_LT] = ACTIONS(519),
    [anon_sym_xref_COLON] = ACTIONS(521),
    [sym_emphasis] = ACTIONS(521),
    [sym_strong] = ACTIONS(519),
    [sym_monospace] = ACTIONS(519),
    [sym_highlight] = ACTIONS(519),
    [sym_superscript] = ACTIONS(519),
    [sym_subscript] = ACTIONS(519),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(519),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(519),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(519),
  },
  [67] = {
    [anon_sym_DOT] = ACTIONS(523),
    [anon_sym_EQ] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [anon_sym_LF_LF] = ACTIONS(523),
    [anon_sym_BANG] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(525),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_PERCENT] = ACTIONS(523),
    [anon_sym_AMP] = ACTIONS(523),
    [anon_sym_SQUOTE] = ACTIONS(523),
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(523),
    [anon_sym_STAR] = ACTIONS(525),
    [anon_sym_PLUS] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_DASH] = ACTIONS(523),
    [anon_sym_SLASH] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_LT] = ACTIONS(525),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_QMARK] = ACTIONS(523),
    [anon_sym_AT] = ACTIONS(523),
    [anon_sym_BSLASH] = ACTIONS(523),
    [anon_sym_CARET] = ACTIONS(525),
    [anon_sym__] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_PIPE] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_TILDE] = ACTIONS(525),
    [sym_word] = ACTIONS(525),
    [sym_whitespace] = ACTIONS(523),
    [aux_sym__inline_element_token1] = ACTIONS(525),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(523),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(523),
    [aux_sym_autolinks_token1] = ACTIONS(525),
    [anon_sym_link_COLON] = ACTIONS(525),
    [anon_sym_mailto_COLON] = ACTIONS(525),
    [anon_sym_LT_LT] = ACTIONS(523),
    [anon_sym_xref_COLON] = ACTIONS(525),
    [sym_emphasis] = ACTIONS(525),
    [sym_strong] = ACTIONS(523),
    [sym_monospace] = ACTIONS(523),
    [sym_highlight] = ACTIONS(523),
    [sym_superscript] = ACTIONS(523),
    [sym_subscript] = ACTIONS(523),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(523),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(523),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(523),
  },
  [68] = {
    [anon_sym_DOT] = ACTIONS(527),
    [anon_sym_EQ] = ACTIONS(527),
    [anon_sym_COLON] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [anon_sym_LF_LF] = ACTIONS(527),
    [anon_sym_BANG] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [anon_sym_POUND] = ACTIONS(529),
    [anon_sym_DOLLAR] = ACTIONS(527),
    [anon_sym_PERCENT] = ACTIONS(527),
    [anon_sym_AMP] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_STAR] = ACTIONS(529),
    [anon_sym_PLUS] = ACTIONS(529),
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_DASH] = ACTIONS(527),
    [anon_sym_SLASH] = ACTIONS(527),
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(527),
    [anon_sym_QMARK] = ACTIONS(527),
    [anon_sym_AT] = ACTIONS(527),
    [anon_sym_BSLASH] = ACTIONS(527),
    [anon_sym_CARET] = ACTIONS(529),
    [anon_sym__] = ACTIONS(529),
    [anon_sym_BQUOTE] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_TILDE] = ACTIONS(529),
    [sym_word] = ACTIONS(529),
    [sym_whitespace] = ACTIONS(527),
    [aux_sym__inline_element_token1] = ACTIONS(529),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(527),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(527),
    [aux_sym_autolinks_token1] = ACTIONS(529),
    [anon_sym_link_COLON] = ACTIONS(529),
    [anon_sym_mailto_COLON] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(527),
    [anon_sym_xref_COLON] = ACTIONS(529),
    [sym_emphasis] = ACTIONS(529),
    [sym_strong] = ACTIONS(527),
    [sym_monospace] = ACTIONS(527),
    [sym_highlight] = ACTIONS(527),
    [sym_superscript] = ACTIONS(527),
    [sym_subscript] = ACTIONS(527),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(527),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(527),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(527),
  },
  [69] = {
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_EQ] = ACTIONS(531),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(531),
    [anon_sym_LF_LF] = ACTIONS(531),
    [anon_sym_BANG] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(533),
    [anon_sym_DOLLAR] = ACTIONS(531),
    [anon_sym_PERCENT] = ACTIONS(531),
    [anon_sym_AMP] = ACTIONS(531),
    [anon_sym_SQUOTE] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_STAR] = ACTIONS(533),
    [anon_sym_PLUS] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_DASH] = ACTIONS(531),
    [anon_sym_SLASH] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_LT] = ACTIONS(533),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_QMARK] = ACTIONS(531),
    [anon_sym_AT] = ACTIONS(531),
    [anon_sym_BSLASH] = ACTIONS(531),
    [anon_sym_CARET] = ACTIONS(533),
    [anon_sym__] = ACTIONS(533),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_TILDE] = ACTIONS(533),
    [sym_word] = ACTIONS(533),
    [sym_whitespace] = ACTIONS(531),
    [aux_sym__inline_element_token1] = ACTIONS(533),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(531),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(531),
    [aux_sym_autolinks_token1] = ACTIONS(533),
    [anon_sym_link_COLON] = ACTIONS(533),
    [anon_sym_mailto_COLON] = ACTIONS(533),
    [anon_sym_LT_LT] = ACTIONS(531),
    [anon_sym_xref_COLON] = ACTIONS(533),
    [sym_emphasis] = ACTIONS(533),
    [sym_strong] = ACTIONS(531),
    [sym_monospace] = ACTIONS(531),
    [sym_highlight] = ACTIONS(531),
    [sym_superscript] = ACTIONS(531),
    [sym_subscript] = ACTIONS(531),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(531),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(531),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(531),
  },
  [70] = {
    [anon_sym_DOT] = ACTIONS(535),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [anon_sym_LF_LF] = ACTIONS(535),
    [anon_sym_BANG] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(537),
    [anon_sym_DOLLAR] = ACTIONS(535),
    [anon_sym_PERCENT] = ACTIONS(535),
    [anon_sym_AMP] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(535),
    [anon_sym_LPAREN] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_STAR] = ACTIONS(537),
    [anon_sym_PLUS] = ACTIONS(537),
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_DASH] = ACTIONS(535),
    [anon_sym_SLASH] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(535),
    [anon_sym_LT] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_QMARK] = ACTIONS(535),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym_BSLASH] = ACTIONS(535),
    [anon_sym_CARET] = ACTIONS(537),
    [anon_sym__] = ACTIONS(537),
    [anon_sym_BQUOTE] = ACTIONS(537),
    [anon_sym_LBRACE] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(537),
    [sym_word] = ACTIONS(537),
    [sym_whitespace] = ACTIONS(535),
    [aux_sym__inline_element_token1] = ACTIONS(537),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(535),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(535),
    [aux_sym_autolinks_token1] = ACTIONS(537),
    [anon_sym_link_COLON] = ACTIONS(537),
    [anon_sym_mailto_COLON] = ACTIONS(537),
    [anon_sym_LT_LT] = ACTIONS(535),
    [anon_sym_xref_COLON] = ACTIONS(537),
    [sym_emphasis] = ACTIONS(537),
    [sym_strong] = ACTIONS(535),
    [sym_monospace] = ACTIONS(535),
    [sym_highlight] = ACTIONS(535),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(535),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(535),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(535),
  },
  [71] = {
    [anon_sym_DOT] = ACTIONS(539),
    [anon_sym_EQ] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_RBRACK] = ACTIONS(539),
    [anon_sym_LF_LF] = ACTIONS(539),
    [anon_sym_BANG] = ACTIONS(539),
    [anon_sym_DQUOTE] = ACTIONS(539),
    [anon_sym_POUND] = ACTIONS(541),
    [anon_sym_DOLLAR] = ACTIONS(539),
    [anon_sym_PERCENT] = ACTIONS(539),
    [anon_sym_AMP] = ACTIONS(539),
    [anon_sym_SQUOTE] = ACTIONS(539),
    [anon_sym_LPAREN] = ACTIONS(539),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_STAR] = ACTIONS(541),
    [anon_sym_PLUS] = ACTIONS(541),
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_DASH] = ACTIONS(539),
    [anon_sym_SLASH] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(539),
    [anon_sym_LT] = ACTIONS(541),
    [anon_sym_GT] = ACTIONS(539),
    [anon_sym_QMARK] = ACTIONS(539),
    [anon_sym_AT] = ACTIONS(539),
    [anon_sym_BSLASH] = ACTIONS(539),
    [anon_sym_CARET] = ACTIONS(541),
    [anon_sym__] = ACTIONS(541),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(541),
    [anon_sym_PIPE] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(539),
    [anon_sym_TILDE] = ACTIONS(541),
    [sym_word] = ACTIONS(541),
    [sym_whitespace] = ACTIONS(539),
    [aux_sym__inline_element_token1] = ACTIONS(541),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(539),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(539),
    [aux_sym_autolinks_token1] = ACTIONS(541),
    [anon_sym_link_COLON] = ACTIONS(541),
    [anon_sym_mailto_COLON] = ACTIONS(541),
    [anon_sym_LT_LT] = ACTIONS(539),
    [anon_sym_xref_COLON] = ACTIONS(541),
    [sym_emphasis] = ACTIONS(541),
    [sym_strong] = ACTIONS(539),
    [sym_monospace] = ACTIONS(539),
    [sym_highlight] = ACTIONS(539),
    [sym_superscript] = ACTIONS(539),
    [sym_subscript] = ACTIONS(539),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(539),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(539),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(539),
  },
  [72] = {
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_LF_LF] = ACTIONS(543),
    [anon_sym_BANG] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_DOLLAR] = ACTIONS(543),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_AMP] = ACTIONS(543),
    [anon_sym_SQUOTE] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(545),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(543),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_AT] = ACTIONS(543),
    [anon_sym_BSLASH] = ACTIONS(543),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym__] = ACTIONS(545),
    [anon_sym_BQUOTE] = ACTIONS(545),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_TILDE] = ACTIONS(545),
    [sym_word] = ACTIONS(545),
    [sym_whitespace] = ACTIONS(543),
    [aux_sym__inline_element_token1] = ACTIONS(545),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(543),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(543),
    [aux_sym_autolinks_token1] = ACTIONS(545),
    [anon_sym_link_COLON] = ACTIONS(545),
    [anon_sym_mailto_COLON] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(543),
    [anon_sym_xref_COLON] = ACTIONS(545),
    [sym_emphasis] = ACTIONS(545),
    [sym_strong] = ACTIONS(543),
    [sym_monospace] = ACTIONS(543),
    [sym_highlight] = ACTIONS(543),
    [sym_superscript] = ACTIONS(543),
    [sym_subscript] = ACTIONS(543),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(543),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(543),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(543),
  },
  [73] = {
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_EQ] = ACTIONS(547),
    [anon_sym_COLON] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(547),
    [anon_sym_LF_LF] = ACTIONS(547),
    [anon_sym_BANG] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [anon_sym_POUND] = ACTIONS(549),
    [anon_sym_DOLLAR] = ACTIONS(547),
    [anon_sym_PERCENT] = ACTIONS(547),
    [anon_sym_AMP] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(547),
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_STAR] = ACTIONS(549),
    [anon_sym_PLUS] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [anon_sym_SLASH] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(547),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(547),
    [anon_sym_QMARK] = ACTIONS(547),
    [anon_sym_AT] = ACTIONS(547),
    [anon_sym_BSLASH] = ACTIONS(547),
    [anon_sym_CARET] = ACTIONS(549),
    [anon_sym__] = ACTIONS(549),
    [anon_sym_BQUOTE] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(547),
    [anon_sym_TILDE] = ACTIONS(549),
    [sym_word] = ACTIONS(549),
    [sym_whitespace] = ACTIONS(547),
    [aux_sym__inline_element_token1] = ACTIONS(549),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(547),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(547),
    [aux_sym_autolinks_token1] = ACTIONS(549),
    [anon_sym_link_COLON] = ACTIONS(549),
    [anon_sym_mailto_COLON] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(547),
    [anon_sym_xref_COLON] = ACTIONS(549),
    [sym_emphasis] = ACTIONS(549),
    [sym_strong] = ACTIONS(547),
    [sym_monospace] = ACTIONS(547),
    [sym_highlight] = ACTIONS(547),
    [sym_superscript] = ACTIONS(547),
    [sym_subscript] = ACTIONS(547),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(547),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(547),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(547),
  },
  [74] = {
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_EQ] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(551),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(551),
    [anon_sym_LF_LF] = ACTIONS(551),
    [anon_sym_BANG] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [anon_sym_POUND] = ACTIONS(553),
    [anon_sym_DOLLAR] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(551),
    [anon_sym_AMP] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_STAR] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(551),
    [anon_sym_SLASH] = ACTIONS(551),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_LT] = ACTIONS(553),
    [anon_sym_GT] = ACTIONS(551),
    [anon_sym_QMARK] = ACTIONS(551),
    [anon_sym_AT] = ACTIONS(551),
    [anon_sym_BSLASH] = ACTIONS(551),
    [anon_sym_CARET] = ACTIONS(553),
    [anon_sym__] = ACTIONS(553),
    [anon_sym_BQUOTE] = ACTIONS(553),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_PIPE] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_TILDE] = ACTIONS(553),
    [sym_word] = ACTIONS(553),
    [sym_whitespace] = ACTIONS(551),
    [aux_sym__inline_element_token1] = ACTIONS(553),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(551),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(551),
    [aux_sym_autolinks_token1] = ACTIONS(553),
    [anon_sym_link_COLON] = ACTIONS(553),
    [anon_sym_mailto_COLON] = ACTIONS(553),
    [anon_sym_LT_LT] = ACTIONS(551),
    [anon_sym_xref_COLON] = ACTIONS(553),
    [sym_emphasis] = ACTIONS(553),
    [sym_strong] = ACTIONS(551),
    [sym_monospace] = ACTIONS(551),
    [sym_highlight] = ACTIONS(551),
    [sym_superscript] = ACTIONS(551),
    [sym_subscript] = ACTIONS(551),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(551),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(551),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(21), 1,
      anon_sym_NOTE_COLON,
    ACTIONS(23), 1,
      anon_sym_LBRACKNOTE_RBRACK_LF,
    ACTIONS(25), 1,
      anon_sym_TIP_COLON,
    ACTIONS(27), 1,
      anon_sym_LBRACKTIP_RBRACK_LF,
    ACTIONS(29), 1,
      anon_sym_IMPORTANT_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACKIMPORTANT_RBRACK_LF,
    ACTIONS(33), 1,
      anon_sym_CAUTION_COLON,
    ACTIONS(35), 1,
      anon_sym_LBRACKCAUTION_RBRACK_LF,
    ACTIONS(37), 1,
      anon_sym_WARNING_COLON,
    ACTIONS(39), 1,
      anon_sym_LBRACKWARNING_RBRACK_LF,
    ACTIONS(41), 1,
      sym__unordered_list_mark,
    ACTIONS(43), 1,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(47), 1,
      aux_sym_code_token1,
    ACTIONS(49), 1,
      aux_sym_code_language_token1,
    ACTIONS(57), 1,
      anon_sym_image_COLON_COLON,
    ACTIONS(59), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    ACTIONS(61), 1,
      anon_sym_audio_COLON_COLON,
    ACTIONS(63), 1,
      anon_sym_video_COLON_COLON,
    ACTIONS(555), 1,
      sym__checklist_mark,
    STATE(88), 1,
      sym_table_start,
    STATE(191), 1,
      sym__ordered_list_mark,
    ACTIONS(45), 2,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
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
    STATE(84), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(91), 2,
      sym_description_list_item,
      aux_sym_description_list_repeat1,
    STATE(34), 13,
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
  [111] = 3,
    STATE(77), 1,
      aux_sym_line_repeat1,
    STATE(171), 1,
      sym_line,
    ACTIONS(557), 34,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_word,
      sym_whitespace,
  [154] = 3,
    ACTIONS(469), 1,
      aux_sym_title0_token2,
    STATE(78), 1,
      aux_sym_line_repeat1,
    ACTIONS(559), 34,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_word,
      sym_whitespace,
  [197] = 3,
    ACTIONS(480), 1,
      aux_sym_title0_token2,
    STATE(78), 1,
      aux_sym_line_repeat1,
    ACTIONS(561), 34,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_word,
      sym_whitespace,
  [240] = 2,
    ACTIONS(566), 3,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
      aux_sym_code_language_token1,
    ACTIONS(564), 18,
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
  [266] = 5,
    ACTIONS(568), 1,
      aux_sym_title0_token2,
    ACTIONS(570), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_attr_mark,
    STATE(82), 2,
      sym_doc_attr,
      aux_sym_title0_repeat1,
    STATE(137), 7,
      sym__doctype,
      sym__page_layout,
      sym__doc_description,
      sym__url_repo,
      sym__link_with_underscores,
      sym__hide_uri_scheme,
      sym__sectanchors,
  [289] = 5,
    ACTIONS(572), 1,
      aux_sym_title0_token2,
    ACTIONS(574), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_attr_mark,
    STATE(81), 2,
      sym_doc_attr,
      aux_sym_title0_repeat1,
    STATE(137), 7,
      sym__doctype,
      sym__page_layout,
      sym__doc_description,
      sym__url_repo,
      sym__link_with_underscores,
      sym__hide_uri_scheme,
      sym__sectanchors,
  [312] = 5,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(577), 1,
      aux_sym_title0_token2,
    STATE(86), 1,
      sym_attr_mark,
    STATE(81), 2,
      sym_doc_attr,
      aux_sym_title0_repeat1,
    STATE(137), 7,
      sym__doctype,
      sym__page_layout,
      sym__doc_description,
      sym__url_repo,
      sym__link_with_underscores,
      sym__hide_uri_scheme,
      sym__sectanchors,
  [335] = 1,
    ACTIONS(579), 9,
      anon_sym_,
      anon_sym_doctype,
      anon_sym_LF,
      anon_sym_page_DASHlayout,
      anon_sym_description,
      anon_sym_url_DASHrepo,
      anon_sym_link_DASHwith_DASHunderscores,
      anon_sym_hide_DASHuri_DASHscheme,
      anon_sym_sectanchors,
  [347] = 7,
    ACTIONS(41), 1,
      sym__unordered_list_mark,
    ACTIONS(43), 1,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(555), 1,
      sym__checklist_mark,
    ACTIONS(581), 1,
      anon_sym_LF,
    STATE(191), 1,
      sym__ordered_list_mark,
    ACTIONS(45), 2,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
    STATE(85), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [371] = 7,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 1,
      sym__unordered_list_mark,
    ACTIONS(591), 1,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(594), 1,
      sym__checklist_mark,
    STATE(191), 1,
      sym__ordered_list_mark,
    ACTIONS(588), 2,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
    STATE(85), 2,
      sym_list_item,
      aux_sym_list_repeat1,
  [395] = 7,
    ACTIONS(597), 1,
      anon_sym_doctype,
    ACTIONS(599), 1,
      anon_sym_page_DASHlayout,
    ACTIONS(601), 1,
      anon_sym_description,
    ACTIONS(603), 1,
      anon_sym_url_DASHrepo,
    ACTIONS(605), 1,
      anon_sym_link_DASHwith_DASHunderscores,
    ACTIONS(607), 1,
      anon_sym_hide_DASHuri_DASHscheme,
    ACTIONS(609), 1,
      anon_sym_sectanchors,
  [417] = 2,
    ACTIONS(611), 3,
      anon_sym_LF,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(613), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [428] = 5,
    ACTIONS(615), 1,
      aux_sym_block_title_token1,
    ACTIONS(617), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(114), 1,
      aux_sym_table_content_repeat1,
    STATE(117), 1,
      sym_table_content,
    STATE(185), 1,
      sym_table_end,
  [444] = 1,
    ACTIONS(619), 4,
      anon_sym_article,
      anon_sym_book,
      anon_sym_manpage,
      anon_sym_inline,
  [451] = 4,
    ACTIONS(621), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(623), 1,
      aux_sym__note_block_token1,
    STATE(109), 1,
      aux_sym__note_block_repeat1,
    STATE(152), 1,
      sym_code_content,
  [464] = 3,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(627), 1,
      aux_sym_code_language_token1,
    STATE(92), 2,
      sym_description_list_item,
      aux_sym_description_list_repeat1,
  [475] = 3,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      aux_sym_code_language_token1,
    STATE(92), 2,
      sym_description_list_item,
      aux_sym_description_list_repeat1,
  [486] = 3,
    ACTIONS(634), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(636), 1,
      aux_sym__note_block_token1,
    STATE(98), 1,
      aux_sym__note_block_repeat1,
  [496] = 3,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(640), 1,
      aux_sym_audio_url_token1,
    STATE(221), 1,
      sym_audio_url,
  [506] = 3,
    ACTIONS(642), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(644), 1,
      aux_sym__note_block_token1,
    STATE(111), 1,
      aux_sym__note_block_repeat1,
  [516] = 3,
    ACTIONS(646), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(648), 1,
      aux_sym__note_block_token1,
    STATE(108), 1,
      aux_sym__note_block_repeat1,
  [526] = 3,
    ACTIONS(650), 1,
      aux_sym_block_title_token1,
    ACTIONS(653), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(97), 1,
      aux_sym_table_content_repeat1,
  [536] = 3,
    ACTIONS(655), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(657), 1,
      aux_sym__note_block_token1,
    STATE(98), 1,
      aux_sym__note_block_repeat1,
  [546] = 3,
    ACTIONS(640), 1,
      aux_sym_audio_url_token1,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    STATE(224), 1,
      sym_audio_url,
  [556] = 3,
    ACTIONS(662), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(664), 1,
      aux_sym__note_block_token1,
    STATE(113), 1,
      aux_sym__note_block_repeat1,
  [566] = 3,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
    ACTIONS(668), 1,
      aux_sym_audio_url_token1,
    STATE(174), 1,
      sym_audio_title,
  [576] = 3,
    ACTIONS(668), 1,
      aux_sym_audio_url_token1,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      sym_audio_title,
  [586] = 3,
    ACTIONS(668), 1,
      aux_sym_audio_url_token1,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      sym_audio_title,
  [596] = 3,
    ACTIONS(668), 1,
      aux_sym_audio_url_token1,
    ACTIONS(674), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_audio_title,
  [606] = 3,
    ACTIONS(676), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(678), 1,
      aux_sym__note_block_token1,
    STATE(93), 1,
      aux_sym__note_block_repeat1,
  [616] = 3,
    ACTIONS(680), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(682), 1,
      aux_sym__note_block_token1,
    STATE(112), 1,
      aux_sym__note_block_repeat1,
  [626] = 1,
    ACTIONS(684), 3,
      anon_sym_docs,
      anon_sym_landscape,
      anon_sym_portrait,
  [632] = 3,
    ACTIONS(636), 1,
      aux_sym__note_block_token1,
    ACTIONS(686), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(98), 1,
      aux_sym__note_block_repeat1,
  [642] = 3,
    ACTIONS(636), 1,
      aux_sym__note_block_token1,
    ACTIONS(688), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(98), 1,
      aux_sym__note_block_repeat1,
  [652] = 1,
    ACTIONS(690), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [658] = 3,
    ACTIONS(636), 1,
      aux_sym__note_block_token1,
    ACTIONS(692), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(98), 1,
      aux_sym__note_block_repeat1,
  [668] = 3,
    ACTIONS(636), 1,
      aux_sym__note_block_token1,
    ACTIONS(694), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(98), 1,
      aux_sym__note_block_repeat1,
  [678] = 3,
    ACTIONS(636), 1,
      aux_sym__note_block_token1,
    ACTIONS(696), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(98), 1,
      aux_sym__note_block_repeat1,
  [688] = 3,
    ACTIONS(698), 1,
      aux_sym_block_title_token1,
    ACTIONS(700), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(97), 1,
      aux_sym_table_content_repeat1,
  [698] = 2,
    ACTIONS(702), 1,
      anon_sym_COLON,
    STATE(127), 1,
      sym_attr_mark,
  [705] = 2,
    ACTIONS(570), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym_attr_mark,
  [712] = 2,
    ACTIONS(617), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(157), 1,
      sym_table_end,
  [719] = 2,
    ACTIONS(704), 1,
      anon_sym_COLON,
    STATE(207), 1,
      sym_attr_mark,
  [726] = 2,
    ACTIONS(570), 1,
      anon_sym_COLON,
    STATE(210), 1,
      sym_attr_mark,
  [733] = 2,
    ACTIONS(570), 1,
      anon_sym_COLON,
    STATE(206), 1,
      sym_attr_mark,
  [740] = 2,
    ACTIONS(570), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_attr_mark,
  [747] = 2,
    ACTIONS(706), 1,
      aux_sym_code_language_token1,
    STATE(229), 1,
      sym_code_language,
  [754] = 1,
    ACTIONS(708), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [759] = 2,
    ACTIONS(570), 1,
      anon_sym_COLON,
    STATE(211), 1,
      sym_attr_mark,
  [766] = 2,
    ACTIONS(640), 1,
      aux_sym_audio_url_token1,
    STATE(226), 1,
      sym_audio_url,
  [773] = 2,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_GT_GT,
  [780] = 2,
    ACTIONS(714), 1,
      aux_sym_autolinks_token1,
    STATE(219), 1,
      sym_autolinks,
  [787] = 2,
    ACTIONS(716), 1,
      aux_sym_block_title_token1,
    ACTIONS(718), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [794] = 2,
    ACTIONS(714), 1,
      aux_sym_autolinks_token1,
    STATE(225), 1,
      sym_autolinks,
  [801] = 1,
    ACTIONS(720), 2,
      aux_sym_title0_token2,
      anon_sym_COLON,
  [806] = 2,
    ACTIONS(722), 1,
      aux_sym_audio_url_token1,
    STATE(166), 1,
      sym_audio_title,
  [813] = 1,
    ACTIONS(724), 2,
      anon_sym_LF,
      anon_sym_LBRACK,
  [818] = 1,
    ACTIONS(726), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [823] = 2,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
    ACTIONS(730), 1,
      sym_kbd_content,
  [830] = 1,
    ACTIONS(732), 2,
      aux_sym_title0_token2,
      anon_sym_COLON,
  [835] = 2,
    ACTIONS(734), 1,
      anon_sym_RBRACK,
    ACTIONS(736), 1,
      sym_footnote_content,
  [842] = 1,
    ACTIONS(738), 2,
      aux_sym_title0_token2,
      anon_sym_COLON,
  [847] = 1,
    ACTIONS(740), 2,
      aux_sym_title0_token2,
      anon_sym_COLON,
  [852] = 1,
    ACTIONS(742), 2,
      aux_sym_title0_token2,
      anon_sym_COLON,
  [857] = 2,
    ACTIONS(744), 1,
      aux_sym_code_language_token1,
    STATE(187), 1,
      sym_passthrough_content,
  [864] = 1,
    ACTIONS(746), 2,
      aux_sym_title0_token2,
      anon_sym_COLON,
  [869] = 2,
    ACTIONS(748), 1,
      anon_sym_RBRACK,
    ACTIONS(750), 1,
      aux_sym_url_macro_token1,
  [876] = 2,
    ACTIONS(668), 1,
      aux_sym_audio_url_token1,
    STATE(178), 1,
      sym_audio_title,
  [883] = 2,
    ACTIONS(744), 1,
      aux_sym_code_language_token1,
    STATE(188), 1,
      sym_passthrough_content,
  [890] = 2,
    ACTIONS(668), 1,
      aux_sym_audio_url_token1,
    STATE(179), 1,
      sym_audio_title,
  [897] = 2,
    ACTIONS(752), 1,
      aux_sym_code_language_token1,
    STATE(193), 1,
      sym_xref_url,
  [904] = 2,
    ACTIONS(752), 1,
      aux_sym_code_language_token1,
    STATE(126), 1,
      sym_xref_url,
  [911] = 1,
    ACTIONS(754), 2,
      anon_sym_LF,
      aux_sym_code_language_token1,
  [916] = 1,
    ACTIONS(756), 2,
      aux_sym_title0_token2,
      anon_sym_COLON,
  [921] = 1,
    ACTIONS(758), 2,
      aux_sym_title0_token2,
      anon_sym_COLON,
  [926] = 1,
    ACTIONS(760), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [930] = 1,
    ACTIONS(762), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [934] = 1,
    ACTIONS(764), 1,
      anon_sym_LF,
  [938] = 1,
    ACTIONS(766), 1,
      anon_sym_RBRACK,
  [942] = 1,
    ACTIONS(768), 1,
      ts_builtin_sym_end,
  [946] = 1,
    ACTIONS(770), 1,
      aux_sym_url_macro_token1,
  [950] = 1,
    ACTIONS(772), 1,
      anon_sym_LF,
  [954] = 1,
    ACTIONS(774), 1,
      aux_sym_mailto_token1,
  [958] = 1,
    ACTIONS(776), 1,
      anon_sym_RBRACK,
  [962] = 1,
    ACTIONS(778), 1,
      aux_sym_link_macro_token1,
  [966] = 1,
    ACTIONS(780), 1,
      aux_sym_title0_token1,
  [970] = 1,
    ACTIONS(782), 1,
      aux_sym_title0_token1,
  [974] = 1,
    ACTIONS(784), 1,
      anon_sym_RBRACK_LF,
  [978] = 1,
    ACTIONS(786), 1,
      anon_sym_LF,
  [982] = 1,
    ACTIONS(788), 1,
      aux_sym_title0_token1,
  [986] = 1,
    ACTIONS(790), 1,
      anon_sym_RBRACK_LF,
  [990] = 1,
    ACTIONS(792), 1,
      anon_sym_LF,
  [994] = 1,
    ACTIONS(794), 1,
      anon_sym_LF,
  [998] = 1,
    ACTIONS(796), 1,
      anon_sym_LF,
  [1002] = 1,
    ACTIONS(798), 1,
      anon_sym_RBRACK,
  [1006] = 1,
    ACTIONS(800), 1,
      aux_sym_title0_token2,
  [1010] = 1,
    ACTIONS(802), 1,
      anon_sym_LF,
  [1014] = 1,
    ACTIONS(804), 1,
      anon_sym_LF,
  [1018] = 1,
    ACTIONS(806), 1,
      anon_sym_RBRACK,
  [1022] = 1,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
  [1026] = 1,
    ACTIONS(810), 1,
      aux_sym_title0_token1,
  [1030] = 1,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
  [1034] = 1,
    ACTIONS(814), 1,
      anon_sym_GT_GT,
  [1038] = 1,
    ACTIONS(816), 1,
      anon_sym_RBRACK,
  [1042] = 1,
    ACTIONS(818), 1,
      anon_sym_COLON_COLON,
  [1046] = 1,
    ACTIONS(820), 1,
      anon_sym_LBRACK,
  [1050] = 1,
    ACTIONS(822), 1,
      aux_sym_title0_token1,
  [1054] = 1,
    ACTIONS(824), 1,
      anon_sym_,
  [1058] = 1,
    ACTIONS(826), 1,
      aux_sym_url_macro_token1,
  [1062] = 1,
    ACTIONS(828), 1,
      anon_sym_LF,
  [1066] = 1,
    ACTIONS(830), 1,
      anon_sym_LF,
  [1070] = 1,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
  [1074] = 1,
    ACTIONS(834), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1078] = 1,
    ACTIONS(836), 1,
      anon_sym_,
  [1082] = 1,
    ACTIONS(838), 1,
      aux_sym_title0_token1,
  [1086] = 1,
    ACTIONS(840), 1,
      anon_sym_,
  [1090] = 1,
    ACTIONS(842), 1,
      anon_sym_RBRACK,
  [1094] = 1,
    ACTIONS(844), 1,
      anon_sym_LBRACK,
  [1098] = 1,
    ACTIONS(846), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1102] = 1,
    ACTIONS(848), 1,
      aux_sym_block_title_token1,
  [1106] = 1,
    ACTIONS(850), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1110] = 1,
    ACTIONS(852), 1,
      anon_sym_LF,
  [1114] = 1,
    ACTIONS(854), 1,
      aux_sym_block_title_token1,
  [1118] = 1,
    ACTIONS(856), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1122] = 1,
    ACTIONS(858), 1,
      anon_sym_LF,
  [1126] = 1,
    ACTIONS(860), 1,
      aux_sym_block_title_token1,
  [1130] = 1,
    ACTIONS(862), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1134] = 1,
    ACTIONS(864), 1,
      aux_sym_block_title_token1,
  [1138] = 1,
    ACTIONS(866), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1142] = 1,
    ACTIONS(868), 1,
      anon_sym_,
  [1146] = 1,
    ACTIONS(870), 1,
      anon_sym_,
  [1150] = 1,
    ACTIONS(872), 1,
      aux_sym__doc_description_token1,
  [1154] = 1,
    ACTIONS(874), 1,
      anon_sym_,
  [1158] = 1,
    ACTIONS(876), 1,
      anon_sym_LBRACK,
  [1162] = 1,
    ACTIONS(878), 1,
      anon_sym_LF,
  [1166] = 1,
    ACTIONS(880), 1,
      anon_sym_LF,
  [1170] = 1,
    ACTIONS(882), 1,
      aux_sym_block_title_token1,
  [1174] = 1,
    ACTIONS(884), 1,
      anon_sym_,
  [1178] = 1,
    ACTIONS(886), 1,
      anon_sym_,
  [1182] = 1,
    ACTIONS(888), 1,
      aux_sym_title0_token1,
  [1186] = 1,
    ACTIONS(890), 1,
      anon_sym_LBRACK,
  [1190] = 1,
    ACTIONS(892), 1,
      anon_sym_LF,
  [1194] = 1,
    ACTIONS(894), 1,
      anon_sym_RBRACK,
  [1198] = 1,
    ACTIONS(896), 1,
      anon_sym_LF,
  [1202] = 1,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
  [1206] = 1,
    ACTIONS(900), 1,
      anon_sym_LBRACK,
  [1210] = 1,
    ACTIONS(902), 1,
      anon_sym_LF,
  [1214] = 1,
    ACTIONS(904), 1,
      anon_sym_LF,
  [1218] = 1,
    ACTIONS(906), 1,
      anon_sym_LBRACK,
  [1222] = 1,
    ACTIONS(908), 1,
      anon_sym_LF,
  [1226] = 1,
    ACTIONS(910), 1,
      anon_sym_LBRACK,
  [1230] = 1,
    ACTIONS(912), 1,
      anon_sym_LBRACK,
  [1234] = 1,
    ACTIONS(914), 1,
      aux_sym__doc_description_token1,
  [1238] = 1,
    ACTIONS(916), 1,
      anon_sym_RBRACK_LF,
  [1242] = 1,
    ACTIONS(918), 1,
      anon_sym_,
  [1246] = 1,
    ACTIONS(920), 1,
      anon_sym_,
  [1250] = 1,
    ACTIONS(726), 1,
      anon_sym_RBRACK_LF,
  [1254] = 1,
    ACTIONS(579), 1,
      aux_sym__doc_description_token1,
  [1258] = 1,
    ACTIONS(579), 1,
      aux_sym_autolinks_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(75)] = 0,
  [SMALL_STATE(76)] = 111,
  [SMALL_STATE(77)] = 154,
  [SMALL_STATE(78)] = 197,
  [SMALL_STATE(79)] = 240,
  [SMALL_STATE(80)] = 266,
  [SMALL_STATE(81)] = 289,
  [SMALL_STATE(82)] = 312,
  [SMALL_STATE(83)] = 335,
  [SMALL_STATE(84)] = 347,
  [SMALL_STATE(85)] = 371,
  [SMALL_STATE(86)] = 395,
  [SMALL_STATE(87)] = 417,
  [SMALL_STATE(88)] = 428,
  [SMALL_STATE(89)] = 444,
  [SMALL_STATE(90)] = 451,
  [SMALL_STATE(91)] = 464,
  [SMALL_STATE(92)] = 475,
  [SMALL_STATE(93)] = 486,
  [SMALL_STATE(94)] = 496,
  [SMALL_STATE(95)] = 506,
  [SMALL_STATE(96)] = 516,
  [SMALL_STATE(97)] = 526,
  [SMALL_STATE(98)] = 536,
  [SMALL_STATE(99)] = 546,
  [SMALL_STATE(100)] = 556,
  [SMALL_STATE(101)] = 566,
  [SMALL_STATE(102)] = 576,
  [SMALL_STATE(103)] = 586,
  [SMALL_STATE(104)] = 596,
  [SMALL_STATE(105)] = 606,
  [SMALL_STATE(106)] = 616,
  [SMALL_STATE(107)] = 626,
  [SMALL_STATE(108)] = 632,
  [SMALL_STATE(109)] = 642,
  [SMALL_STATE(110)] = 652,
  [SMALL_STATE(111)] = 658,
  [SMALL_STATE(112)] = 668,
  [SMALL_STATE(113)] = 678,
  [SMALL_STATE(114)] = 688,
  [SMALL_STATE(115)] = 698,
  [SMALL_STATE(116)] = 705,
  [SMALL_STATE(117)] = 712,
  [SMALL_STATE(118)] = 719,
  [SMALL_STATE(119)] = 726,
  [SMALL_STATE(120)] = 733,
  [SMALL_STATE(121)] = 740,
  [SMALL_STATE(122)] = 747,
  [SMALL_STATE(123)] = 754,
  [SMALL_STATE(124)] = 759,
  [SMALL_STATE(125)] = 766,
  [SMALL_STATE(126)] = 773,
  [SMALL_STATE(127)] = 780,
  [SMALL_STATE(128)] = 787,
  [SMALL_STATE(129)] = 794,
  [SMALL_STATE(130)] = 801,
  [SMALL_STATE(131)] = 806,
  [SMALL_STATE(132)] = 813,
  [SMALL_STATE(133)] = 818,
  [SMALL_STATE(134)] = 823,
  [SMALL_STATE(135)] = 830,
  [SMALL_STATE(136)] = 835,
  [SMALL_STATE(137)] = 842,
  [SMALL_STATE(138)] = 847,
  [SMALL_STATE(139)] = 852,
  [SMALL_STATE(140)] = 857,
  [SMALL_STATE(141)] = 864,
  [SMALL_STATE(142)] = 869,
  [SMALL_STATE(143)] = 876,
  [SMALL_STATE(144)] = 883,
  [SMALL_STATE(145)] = 890,
  [SMALL_STATE(146)] = 897,
  [SMALL_STATE(147)] = 904,
  [SMALL_STATE(148)] = 911,
  [SMALL_STATE(149)] = 916,
  [SMALL_STATE(150)] = 921,
  [SMALL_STATE(151)] = 926,
  [SMALL_STATE(152)] = 930,
  [SMALL_STATE(153)] = 934,
  [SMALL_STATE(154)] = 938,
  [SMALL_STATE(155)] = 942,
  [SMALL_STATE(156)] = 946,
  [SMALL_STATE(157)] = 950,
  [SMALL_STATE(158)] = 954,
  [SMALL_STATE(159)] = 958,
  [SMALL_STATE(160)] = 962,
  [SMALL_STATE(161)] = 966,
  [SMALL_STATE(162)] = 970,
  [SMALL_STATE(163)] = 974,
  [SMALL_STATE(164)] = 978,
  [SMALL_STATE(165)] = 982,
  [SMALL_STATE(166)] = 986,
  [SMALL_STATE(167)] = 990,
  [SMALL_STATE(168)] = 994,
  [SMALL_STATE(169)] = 998,
  [SMALL_STATE(170)] = 1002,
  [SMALL_STATE(171)] = 1006,
  [SMALL_STATE(172)] = 1010,
  [SMALL_STATE(173)] = 1014,
  [SMALL_STATE(174)] = 1018,
  [SMALL_STATE(175)] = 1022,
  [SMALL_STATE(176)] = 1026,
  [SMALL_STATE(177)] = 1030,
  [SMALL_STATE(178)] = 1034,
  [SMALL_STATE(179)] = 1038,
  [SMALL_STATE(180)] = 1042,
  [SMALL_STATE(181)] = 1046,
  [SMALL_STATE(182)] = 1050,
  [SMALL_STATE(183)] = 1054,
  [SMALL_STATE(184)] = 1058,
  [SMALL_STATE(185)] = 1062,
  [SMALL_STATE(186)] = 1066,
  [SMALL_STATE(187)] = 1070,
  [SMALL_STATE(188)] = 1074,
  [SMALL_STATE(189)] = 1078,
  [SMALL_STATE(190)] = 1082,
  [SMALL_STATE(191)] = 1086,
  [SMALL_STATE(192)] = 1090,
  [SMALL_STATE(193)] = 1094,
  [SMALL_STATE(194)] = 1098,
  [SMALL_STATE(195)] = 1102,
  [SMALL_STATE(196)] = 1106,
  [SMALL_STATE(197)] = 1110,
  [SMALL_STATE(198)] = 1114,
  [SMALL_STATE(199)] = 1118,
  [SMALL_STATE(200)] = 1122,
  [SMALL_STATE(201)] = 1126,
  [SMALL_STATE(202)] = 1130,
  [SMALL_STATE(203)] = 1134,
  [SMALL_STATE(204)] = 1138,
  [SMALL_STATE(205)] = 1142,
  [SMALL_STATE(206)] = 1146,
  [SMALL_STATE(207)] = 1150,
  [SMALL_STATE(208)] = 1154,
  [SMALL_STATE(209)] = 1158,
  [SMALL_STATE(210)] = 1162,
  [SMALL_STATE(211)] = 1166,
  [SMALL_STATE(212)] = 1170,
  [SMALL_STATE(213)] = 1174,
  [SMALL_STATE(214)] = 1178,
  [SMALL_STATE(215)] = 1182,
  [SMALL_STATE(216)] = 1186,
  [SMALL_STATE(217)] = 1190,
  [SMALL_STATE(218)] = 1194,
  [SMALL_STATE(219)] = 1198,
  [SMALL_STATE(220)] = 1202,
  [SMALL_STATE(221)] = 1206,
  [SMALL_STATE(222)] = 1210,
  [SMALL_STATE(223)] = 1214,
  [SMALL_STATE(224)] = 1218,
  [SMALL_STATE(225)] = 1222,
  [SMALL_STATE(226)] = 1226,
  [SMALL_STATE(227)] = 1230,
  [SMALL_STATE(228)] = 1234,
  [SMALL_STATE(229)] = 1238,
  [SMALL_STATE(230)] = 1242,
  [SMALL_STATE(231)] = 1246,
  [SMALL_STATE(232)] = 1250,
  [SMALL_STATE(233)] = 1254,
  [SMALL_STATE(234)] = 1258,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(183),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(231),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(230),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(214),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(213),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(212),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(204),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(203),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(202),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(201),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(199),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(198),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(196),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(195),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(194),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(191),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(189),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(189),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(180),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(128),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(136),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(132),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(160),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(158),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(144),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 10),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 10),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 9),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 9),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 9),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 9),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 12),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 12),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title5, 3, .production_id = 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title5, 3, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 10),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 10),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 9),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 8),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 8),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 5, .production_id = 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 5, .production_id = 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 3, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title1, 3, .production_id = 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 4, .production_id = 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 4, .production_id = 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title4, 3, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title4, 3, .production_id = 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title3, 3, .production_id = 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title3, 3, .production_id = 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title2, 3, .production_id = 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title2, 3, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(54),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(54),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(52),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(134),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(136),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(132),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(160),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(158),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(147),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(146),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(52),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(144),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(140),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(59),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(56),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(56),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailto, 5),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto, 5),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_links, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_links, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_macro, 5, .production_id = 11),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_macro, 5, .production_id = 11),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_macro, 4, .production_id = 7),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_macro, 4, .production_id = 7),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailto, 4),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 9),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 9),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 9),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 9),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(78),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(83),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_mark, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(191),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(189),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(189),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(191),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 4, .production_id = 5),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 4, .production_id = 5),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_list_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_list_repeat1, 2), SHIFT_REPEAT(180),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(97),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(98),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_content, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_content, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_start, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hide_uri_scheme, 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolinks, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sectanchors, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doc_description, 5, .production_id = 13),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_with_underscores, 5),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype, 6),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list_item, 4, .production_id = 6),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__page_layout, 6),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_repo, 6),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [768] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordered_list_mark, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_asciidoc_external_scanner_create(void);
void tree_sitter_asciidoc_external_scanner_destroy(void *);
bool tree_sitter_asciidoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_asciidoc_external_scanner_serialize(void *, char *);
void tree_sitter_asciidoc_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_asciidoc_external_scanner_create,
      tree_sitter_asciidoc_external_scanner_destroy,
      tree_sitter_asciidoc_external_scanner_scan,
      tree_sitter_asciidoc_external_scanner_serialize,
      tree_sitter_asciidoc_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
