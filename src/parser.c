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
#define STATE_COUNT 226
#define LARGE_STATE_COUNT 61
#define SYMBOL_COUNT 187
#define ALIAS_COUNT 0
#define TOKEN_COUNT 113
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_DOT = 1,
  aux_sym_block_title_token1 = 2,
  aux_sym_title0_token1 = 3,
  sym_title1 = 4,
  sym_title2 = 5,
  sym_title3 = 6,
  sym_title4 = 7,
  sym_title5 = 8,
  anon_sym_ = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  anon_sym_LF = 12,
  sym_name = 13,
  sym_email = 14,
  anon_sym_doctype = 15,
  anon_sym_article = 16,
  anon_sym_book = 17,
  anon_sym_manpage = 18,
  anon_sym_inline = 19,
  anon_sym_description = 20,
  aux_sym__doc_description_token1 = 21,
  anon_sym_url_DASHrepo = 22,
  anon_sym_link_DASHwith_DASHunderscores = 23,
  anon_sym_hide_DASHuri_DASHscheme = 24,
  anon_sym_sectanchors = 25,
  sym_attr_mark = 26,
  aux_sym_attr_name_token1 = 27,
  anon_sym_NOTE_COLON = 28,
  anon_sym_LBRACKNOTE_RBRACK_LF = 29,
  anon_sym_DASH_DASH_DASH_DASH_LF = 30,
  aux_sym__note_block_token1 = 31,
  anon_sym_TIP_COLON = 32,
  anon_sym_LBRACKTIP_RBRACK_LF = 33,
  anon_sym_IMPORTANT_COLON = 34,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 35,
  anon_sym_CAUTION_COLON = 36,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 37,
  anon_sym_WARNING_COLON = 38,
  anon_sym_LBRACKWARNING_RBRACK_LF = 39,
  sym__unordered_list_mark = 40,
  aux_sym__ordered_list_mark_token1 = 41,
  aux_sym__ordered_list_mark_token2 = 42,
  aux_sym__ordered_list_mark_token3 = 43,
  sym__checklist_mark = 44,
  aux_sym_code_token1 = 45,
  anon_sym_RBRACK_LF = 46,
  aux_sym_code_language_token1 = 47,
  anon_sym_SLASH_SLASH = 48,
  aux_sym_comment_token1 = 49,
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
  anon_sym_kbd_COLON_LBRACK = 61,
  sym_kbd_content = 62,
  anon_sym_footnote_COLON_LBRACK = 63,
  sym_footnote_content = 64,
  aux_sym_autolinks_token1 = 65,
  aux_sym_url_macro_token1 = 66,
  anon_sym_link_COLON = 67,
  aux_sym_link_macro_token1 = 68,
  anon_sym_mailto_COLON = 69,
  aux_sym_mailto_token1 = 70,
  anon_sym_LT_LT = 71,
  anon_sym_COMMA = 72,
  anon_sym_GT_GT = 73,
  anon_sym_xref_COLON = 74,
  sym_emphasis = 75,
  sym_strong = 76,
  sym_monospace = 77,
  sym_highlight = 78,
  sym_superscript = 79,
  sym_subscript = 80,
  anon_sym_PLUS_PLUS_PLUS = 81,
  anon_sym_pass_COLON_LBRACK = 82,
  anon_sym_LBRACEblank_RBRACE = 83,
  anon_sym_LBRACEempty_RBRACE = 84,
  anon_sym_LBRACEsp_RBRACE = 85,
  anon_sym_LBRACEnbsp_RBRACE = 86,
  anon_sym_LBRACEzwsp_RBRACE = 87,
  anon_sym_LBRACEwj_RBRACE = 88,
  anon_sym_LBRACEapos_RBRACE = 89,
  anon_sym_LBRACEquot_RBRACE = 90,
  anon_sym_LBRACElsquo_RBRACE = 91,
  anon_sym_LBRACErsquo_RBRACE = 92,
  anon_sym_LBRACEldquo_RBRACE = 93,
  anon_sym_LBRACErdquo_RBRACE = 94,
  anon_sym_LBRACEdeg_RBRACE = 95,
  anon_sym_LBRACEplus_RBRACE = 96,
  anon_sym_LBRACEbrvbar_RBRACE = 97,
  anon_sym_LBRACEvbar_RBRACE = 98,
  anon_sym_LBRACEamp_RBRACE = 99,
  anon_sym_LBRACElt_RBRACE = 100,
  anon_sym_LBRACEgt_RBRACE = 101,
  anon_sym_LBRACEstartsb_RBRACE = 102,
  anon_sym_LBRACEendsb_RBRACE = 103,
  anon_sym_LBRACEcaret_RBRACE = 104,
  anon_sym_LBRACEasterisk_RBRACE = 105,
  anon_sym_LBRACEtilde_RBRACE = 106,
  anon_sym_LBRACEbackslash_RBRACE = 107,
  anon_sym_LBRACEbacktick_RBRACE = 108,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 109,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 110,
  anon_sym_LBRACEcpp_RBRACE = 111,
  anon_sym_LBRACEpp_RBRACE = 112,
  sym_document = 113,
  sym__block = 114,
  sym__titled_block = 115,
  sym_block_title = 116,
  sym_title0 = 117,
  sym_author_info = 118,
  sym__doctype = 119,
  sym__doc_description = 120,
  sym__url_repo = 121,
  sym__link_with_underscores = 122,
  sym__hide_uri_scheme = 123,
  sym__sectanchors = 124,
  sym_doc_attr = 125,
  sym__admonitions = 126,
  sym_note = 127,
  sym__note_line = 128,
  sym__note_block = 129,
  sym_tip = 130,
  sym__tip = 131,
  sym__tip_block = 132,
  sym_important = 133,
  sym__important = 134,
  sym__important_block = 135,
  sym_caution = 136,
  sym__caution = 137,
  sym__caution_block = 138,
  sym_warning = 139,
  sym__warning = 140,
  sym__warning_block = 141,
  sym_list = 142,
  sym_list_item = 143,
  sym_list_item_mark = 144,
  sym_list_item_content = 145,
  sym__ordered_list_mark = 146,
  sym_code = 147,
  sym_code_language = 148,
  sym_code_content = 149,
  sym_comment = 150,
  sym_line_breaks = 151,
  sym_page_breaks = 152,
  sym_image = 153,
  sym_table = 154,
  sym_table_start = 155,
  sym_table_content = 156,
  sym_table_end = 157,
  sym_description_list = 158,
  sym_audio = 159,
  sym_audio_url = 160,
  sym_audio_title = 161,
  sym_video = 162,
  sym_paragraph = 163,
  sym__inline_element = 164,
  sym_kbd = 165,
  sym_footnote = 166,
  sym_links = 167,
  sym_autolinks = 168,
  sym_url_macro = 169,
  sym_link_macro = 170,
  sym_mailto = 171,
  sym_xref = 172,
  sym__inline_xref = 173,
  sym__xref = 174,
  sym_xref_url = 175,
  sym_passthrough = 176,
  sym__passthrough_plus = 177,
  sym__passthrough_cmd = 178,
  sym_passthrough_content = 179,
  sym_replacement = 180,
  aux_sym_document_repeat1 = 181,
  aux_sym_title0_repeat1 = 182,
  aux_sym__note_block_repeat1 = 183,
  aux_sym_list_repeat1 = 184,
  aux_sym_table_content_repeat1 = 185,
  aux_sym_paragraph_repeat1 = 186,
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
  [anon_sym_] = " ",
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
  [aux_sym_url_macro_token1] = "url_macro_token1",
  [anon_sym_link_COLON] = "link:",
  [aux_sym_link_macro_token1] = "url",
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
  [anon_sym_] = anon_sym_,
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
  [aux_sym_url_macro_token1] = aux_sym_url_macro_token1,
  [anon_sym_link_COLON] = anon_sym_link_COLON,
  [aux_sym_link_macro_token1] = aux_sym_autolinks_token1,
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
  [anon_sym_] = {
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
  [8] = {.index = 7, .length = 2},
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
  [224] = 66,
  [225] = 126,
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
      if (eof) ADVANCE(369);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(389);
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '*') ADVANCE(679);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(865);
      if (lookahead == '-') ADVANCE(629);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(516);
      if (lookahead == ':') ADVANCE(625);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(393);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == 'W') ADVANCE(411);
      if (lookahead == '[') ADVANCE(841);
      if (lookahead == ']') ADVANCE(845);
      if (lookahead == '^') ADVANCE(360);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'b') ADVANCE(487);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'f') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(466);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == 'k') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead == 'm') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 's') ADVANCE(459);
      if (lookahead == 'u') ADVANCE(501);
      if (lookahead == 'v') ADVANCE(473);
      if (lookahead == 'x') ADVANCE(500);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '~') ADVANCE(362);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '<') ADVANCE(390);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == 'b') ADVANCE(242);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == 'h') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(838);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(666);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(839);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(842);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(700);
      if (lookahead == '.') ADVANCE(689);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(669);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(665);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(673);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(675);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(671);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(848);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(395);
      if (lookahead == '*') ADVANCE(680);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '0') ADVANCE(726);
      if (lookahead == 'C') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(719);
      if (lookahead == 'N') ADVANCE(720);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == 'W') ADVANCE(717);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == 'i') ADVANCE(722);
      if (lookahead == 'v') ADVANCE(721);
      if (lookahead == '|') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(726);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '*') ADVANCE(359);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(865);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '[') ADVANCE(841);
      if (lookahead == ']') ADVANCE(845);
      if (lookahead == '^') ADVANCE(360);
      if (lookahead == '_') ADVANCE(730);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'k') ADVANCE(760);
      if (lookahead == 'l') ADVANCE(770);
      if (lookahead == 'm') ADVANCE(757);
      if (lookahead == 'p') ADVANCE(758);
      if (lookahead == 'x') ADVANCE(783);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '~') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(835);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(668);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(668);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(664);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(664);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(388);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(672);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(672);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(674);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(674);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(670);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(670);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(843);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(871);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(871);
      if (lookahead == ']') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '+') ADVANCE(876);
      END_STATE();
    case 47:
      if (lookahead == '+') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '.') ADVANCE(689);
      END_STATE();
    case 49:
      if (lookahead == ',') ADVANCE(699);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'C') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == 'W') ADVANCE(95);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(307);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(354);
      if (lookahead == '.') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(272);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(689);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '<') ADVANCE(864);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '>') ADVANCE(866);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(294);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'q') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(151);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == 'z') ADVANCE(315);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 72:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 73:
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '_') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 74:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '_') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 75:
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(844);
      END_STATE();
    case 77:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(840);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(847);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '[') ADVANCE(849);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '[') ADVANCE(877);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '[') ADVANCE(852);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(363);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(844);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(840);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(847);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 87:
      if (lookahead == '<') ADVANCE(863);
      END_STATE();
    case 88:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 90:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == '>') ADVANCE(866);
      END_STATE();
    case 92:
      if (lookahead == '@') ADVANCE(357);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == '@') ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 98:
      if (lookahead == 'G') ADVANCE(131);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'M') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 'P') ADVANCE(128);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(104);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 118:
      if (lookahead == 'U') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == '[') ADVANCE(841);
      if (lookahead == ']') ADVANCE(845);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 120:
      if (lookahead == '[') ADVANCE(849);
      END_STATE();
    case 121:
      if (lookahead == '[') ADVANCE(877);
      END_STATE();
    case 122:
      if (lookahead == '[') ADVANCE(852);
      END_STATE();
    case 123:
      if (lookahead == '[') ADVANCE(350);
      END_STATE();
    case 124:
      if (lookahead == ']') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 125:
      if (lookahead == ']') ADVANCE(845);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(853);
      END_STATE();
    case 126:
      if (lookahead == ']') ADVANCE(845);
      if (lookahead != 0) ADVANCE(856);
      END_STATE();
    case 127:
      if (lookahead == ']') ADVANCE(696);
      END_STATE();
    case 128:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 129:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 130:
      if (lookahead == ']') ADVANCE(10);
      END_STATE();
    case 131:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(12);
      END_STATE();
    case 133:
      if (lookahead == '^') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(854);
      END_STATE();
    case 136:
      if (lookahead == '`') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(294);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == 'q') ADVANCE(305);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(151);
      if (lookahead == 'w') ADVANCE(205);
      if (lookahead == 'z') ADVANCE(315);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(292);
      END_STATE();
    case 149:
      if (lookahead == 'b') ADVANCE(336);
      END_STATE();
    case 150:
      if (lookahead == 'b') ADVANCE(343);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(263);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 187:
      if (lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 189:
      if (lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 190:
      if (lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(177);
      END_STATE();
    case 192:
      if (lookahead == 'h') ADVANCE(346);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(234);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 205:
      if (lookahead == 'j') ADVANCE(323);
      END_STATE();
    case 206:
      if (lookahead == 'k') ADVANCE(281);
      END_STATE();
    case 207:
      if (lookahead == 'k') ADVANCE(608);
      END_STATE();
    case 208:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 209:
      if (lookahead == 'k') ADVANCE(333);
      END_STATE();
    case 210:
      if (lookahead == 'k') ADVANCE(344);
      END_STATE();
    case 211:
      if (lookahead == 'k') ADVANCE(345);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(251);
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 223:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 255:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 256:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 257:
      if (lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 259:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 261:
      if (lookahead == 'q') ADVANCE(306);
      END_STATE();
    case 262:
      if (lookahead == 'q') ADVANCE(309);
      END_STATE();
    case 263:
      if (lookahead == 'q') ADVANCE(311);
      END_STATE();
    case 264:
      if (lookahead == 'q') ADVANCE(312);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 308:
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 312:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 313:
      if (lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 314:
      if (lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 315:
      if (lookahead == 'w') ADVANCE(293);
      END_STATE();
    case 316:
      if (lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 317:
      if (lookahead == 'y') ADVANCE(335);
      END_STATE();
    case 318:
      if (lookahead == '|') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(376);
      END_STATE();
    case 319:
      if (lookahead == '}') ADVANCE(896);
      END_STATE();
    case 320:
      if (lookahead == '}') ADVANCE(895);
      END_STATE();
    case 321:
      if (lookahead == '}') ADVANCE(907);
      END_STATE();
    case 322:
      if (lookahead == '}') ADVANCE(880);
      END_STATE();
    case 323:
      if (lookahead == '}') ADVANCE(883);
      END_STATE();
    case 324:
      if (lookahead == '}') ADVANCE(894);
      END_STATE();
    case 325:
      if (lookahead == '}') ADVANCE(906);
      END_STATE();
    case 326:
      if (lookahead == '}') ADVANCE(890);
      END_STATE();
    case 327:
      if (lookahead == '}') ADVANCE(884);
      END_STATE();
    case 328:
      if (lookahead == '}') ADVANCE(881);
      END_STATE();
    case 329:
      if (lookahead == '}') ADVANCE(891);
      END_STATE();
    case 330:
      if (lookahead == '}') ADVANCE(885);
      END_STATE();
    case 331:
      if (lookahead == '}') ADVANCE(893);
      END_STATE();
    case 332:
      if (lookahead == '}') ADVANCE(882);
      END_STATE();
    case 333:
      if (lookahead == '}') ADVANCE(878);
      END_STATE();
    case 334:
      if (lookahead == '}') ADVANCE(899);
      END_STATE();
    case 335:
      if (lookahead == '}') ADVANCE(879);
      END_STATE();
    case 336:
      if (lookahead == '}') ADVANCE(898);
      END_STATE();
    case 337:
      if (lookahead == '}') ADVANCE(888);
      END_STATE();
    case 338:
      if (lookahead == '}') ADVANCE(886);
      END_STATE();
    case 339:
      if (lookahead == '}') ADVANCE(889);
      END_STATE();
    case 340:
      if (lookahead == '}') ADVANCE(887);
      END_STATE();
    case 341:
      if (lookahead == '}') ADVANCE(901);
      END_STATE();
    case 342:
      if (lookahead == '}') ADVANCE(892);
      END_STATE();
    case 343:
      if (lookahead == '}') ADVANCE(897);
      END_STATE();
    case 344:
      if (lookahead == '}') ADVANCE(900);
      END_STATE();
    case 345:
      if (lookahead == '}') ADVANCE(903);
      END_STATE();
    case 346:
      if (lookahead == '}') ADVANCE(902);
      END_STATE();
    case 347:
      if (lookahead == '}') ADVANCE(904);
      END_STATE();
    case 348:
      if (lookahead == '}') ADVANCE(905);
      END_STATE();
    case 349:
      if (lookahead == '~') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 350:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(127);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 352:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(851);
      END_STATE();
    case 353:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 354:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 355:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 356:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 357:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(862);
      END_STATE();
    case 358:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 359:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 360:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 361:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 362:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 363:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(855);
      END_STATE();
    case 364:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(376);
      END_STATE();
    case 365:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(616);
      END_STATE();
    case 366:
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(859);
      END_STATE();
    case 367:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '*') ADVANCE(678);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(725);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(701);
      if (lookahead == 'I') ADVANCE(704);
      if (lookahead == 'N') ADVANCE(705);
      if (lookahead == 'T') ADVANCE(703);
      if (lookahead == 'W') ADVANCE(702);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == '_') ADVANCE(727);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead == 'f') ADVANCE(712);
      if (lookahead == 'i') ADVANCE(711);
      if (lookahead == 'k') ADVANCE(708);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead == 'm') ADVANCE(706);
      if (lookahead == 'p') ADVANCE(707);
      if (lookahead == 'v') ADVANCE(710);
      if (lookahead == 'x') ADVANCE(713);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '~') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(715);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 368:
      if (eof) ADVANCE(369);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '*') ADVANCE(678);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(589);
      if (lookahead == ':') ADVANCE(626);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(529);
      if (lookahead == 'I') ADVANCE(537);
      if (lookahead == 'N') ADVANCE(542);
      if (lookahead == 'T') ADVANCE(534);
      if (lookahead == 'W') ADVANCE(530);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '^') ADVANCE(69);
      if (lookahead == '_') ADVANCE(601);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'f') ADVANCE(577);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'k') ADVANCE(557);
      if (lookahead == 'l') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead == 'v') ADVANCE(570);
      if (lookahead == 'x') ADVANCE(582);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '~') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(687);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(842);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(371);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(371);
      if (lookahead == '=') ADVANCE(372);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(371);
      if (lookahead == '=') ADVANCE(373);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(371);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_title1);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_title1);
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_title5);
      if (lookahead == '\n') ADVANCE(387);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(864);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(866);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '.') ADVANCE(689);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'A') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'A') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'A') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'E') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'G') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'I') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'I') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'I') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'M') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'N') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'N') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'N') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'N') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'O') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'O') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'O') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'P') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'P') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'R') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'R') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'T') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'T') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'T') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'T') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'U') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'a') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'a') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'a') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'a') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'a') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'b') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'c') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'c') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'c') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'c') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'c') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'd') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'f') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'h') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'k') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'k') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'm') ADVANCE(436);
      if (lookahead == 'n') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == 'u') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 's') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 's') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 's') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 's') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 't') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 't') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 't') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == 'y') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == '_') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '.') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(652);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(661);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(662);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'G') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'O') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'O') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'O') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'P') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'P') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'U') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'k') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 's') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 's') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 't') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 't') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 't') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(602);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_article);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_article);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_book);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_book);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_manpage);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_manpage);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_link_DASHwith_DASHunderscores);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_link_DASHwith_DASHunderscores);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == '.') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_attr_mark);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_attr_mark);
      if (lookahead == '.') ADVANCE(689);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '*') ADVANCE(686);
      if (lookahead == '-') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(686);
      if (lookahead == '-') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(685);
      if (lookahead == '-') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(677);
      if (lookahead == '-') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(686);
      if (lookahead == '-') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '_') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'd') ADVANCE(642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'h') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'h') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'm') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'n') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'p') ADVANCE(649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 't') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'u') ADVANCE(648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'u') ADVANCE(653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'w') ADVANCE(645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(682);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(686);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '.') ADVANCE(691);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(686);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '-') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(682);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(685);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(686);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(677);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(698);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'M') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'O') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'A') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'A') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'I') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'M') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'O') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'i') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'm') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'u') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(688);
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(693);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '_') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'G') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'I') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'O') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'O') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'P') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'P') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'U') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'k') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 's') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 's') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 't') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 't') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 't') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'g') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(834);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(836);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(850);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(851);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(853);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead == '_') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(854);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(855);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_url_macro_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(856);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_link_macro_token1);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(859);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_mailto_COLON);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_mailto_COLON);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_mailto_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(862);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(19);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(871);
      if (lookahead == ']') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 367},
  [2] = {.lex_state = 367},
  [3] = {.lex_state = 367},
  [4] = {.lex_state = 368},
  [5] = {.lex_state = 368},
  [6] = {.lex_state = 368},
  [7] = {.lex_state = 368},
  [8] = {.lex_state = 368},
  [9] = {.lex_state = 368},
  [10] = {.lex_state = 368},
  [11] = {.lex_state = 368},
  [12] = {.lex_state = 368},
  [13] = {.lex_state = 368},
  [14] = {.lex_state = 368},
  [15] = {.lex_state = 368},
  [16] = {.lex_state = 368},
  [17] = {.lex_state = 368},
  [18] = {.lex_state = 368},
  [19] = {.lex_state = 368},
  [20] = {.lex_state = 367},
  [21] = {.lex_state = 367},
  [22] = {.lex_state = 367},
  [23] = {.lex_state = 367},
  [24] = {.lex_state = 367},
  [25] = {.lex_state = 367},
  [26] = {.lex_state = 367},
  [27] = {.lex_state = 367},
  [28] = {.lex_state = 367},
  [29] = {.lex_state = 367},
  [30] = {.lex_state = 367},
  [31] = {.lex_state = 367},
  [32] = {.lex_state = 367},
  [33] = {.lex_state = 367},
  [34] = {.lex_state = 367},
  [35] = {.lex_state = 367},
  [36] = {.lex_state = 367},
  [37] = {.lex_state = 367},
  [38] = {.lex_state = 367},
  [39] = {.lex_state = 367},
  [40] = {.lex_state = 367},
  [41] = {.lex_state = 367},
  [42] = {.lex_state = 367},
  [43] = {.lex_state = 367},
  [44] = {.lex_state = 367},
  [45] = {.lex_state = 367},
  [46] = {.lex_state = 367},
  [47] = {.lex_state = 367},
  [48] = {.lex_state = 367},
  [49] = {.lex_state = 367},
  [50] = {.lex_state = 367},
  [51] = {.lex_state = 367},
  [52] = {.lex_state = 367},
  [53] = {.lex_state = 367},
  [54] = {.lex_state = 367},
  [55] = {.lex_state = 367},
  [56] = {.lex_state = 367},
  [57] = {.lex_state = 367},
  [58] = {.lex_state = 367},
  [59] = {.lex_state = 367},
  [60] = {.lex_state = 367},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 318},
  [92] = {.lex_state = 51},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 51},
  [95] = {.lex_state = 51},
  [96] = {.lex_state = 119},
  [97] = {.lex_state = 51},
  [98] = {.lex_state = 51},
  [99] = {.lex_state = 318},
  [100] = {.lex_state = 119},
  [101] = {.lex_state = 318},
  [102] = {.lex_state = 51},
  [103] = {.lex_state = 51},
  [104] = {.lex_state = 119},
  [105] = {.lex_state = 119},
  [106] = {.lex_state = 51},
  [107] = {.lex_state = 51},
  [108] = {.lex_state = 51},
  [109] = {.lex_state = 119},
  [110] = {.lex_state = 51},
  [111] = {.lex_state = 119},
  [112] = {.lex_state = 51},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 51},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 367},
  [117] = {.lex_state = 125},
  [118] = {.lex_state = 364},
  [119] = {.lex_state = 119},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 351},
  [122] = {.lex_state = 351},
  [123] = {.lex_state = 351},
  [124] = {.lex_state = 126},
  [125] = {.lex_state = 119},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 119},
  [128] = {.lex_state = 351},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 351},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 124},
  [133] = {.lex_state = 21},
  [134] = {.lex_state = 21},
  [135] = {.lex_state = 367},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 318},
  [140] = {.lex_state = 119},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 365},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 126},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 837},
  [158] = {.lex_state = 364},
  [159] = {.lex_state = 367},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 367},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 126},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 367},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 20},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 365},
  [195] = {.lex_state = 367},
  [196] = {.lex_state = 367},
  [197] = {.lex_state = 353},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 364},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 20},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 356},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 353},
  [210] = {.lex_state = 364},
  [211] = {.lex_state = 366},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 364},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 353},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 364},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 364},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 367},
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
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_article] = ACTIONS(1),
    [anon_sym_book] = ACTIONS(1),
    [anon_sym_manpage] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(1),
    [anon_sym_link_COLON] = ACTIONS(1),
    [anon_sym_mailto_COLON] = ACTIONS(1),
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
    [sym_document] = STATE(206),
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(63),
    [sym_title0] = STATE(3),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(41),
    [sym__note_block] = STATE(41),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(42),
    [sym__tip_block] = STATE(42),
    [sym_important] = STATE(3),
    [sym__important] = STATE(21),
    [sym__important_block] = STATE(21),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(44),
    [sym__caution_block] = STATE(44),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(45),
    [sym__warning_block] = STATE(45),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(87),
    [sym_list_item_mark] = STATE(205),
    [sym__ordered_list_mark] = STATE(182),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(91),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(61),
    [sym_kbd] = STATE(61),
    [sym_footnote] = STATE(61),
    [sym_links] = STATE(61),
    [sym_autolinks] = STATE(64),
    [sym_url_macro] = STATE(81),
    [sym_link_macro] = STATE(81),
    [sym_mailto] = STATE(81),
    [sym_xref] = STATE(61),
    [sym__inline_xref] = STATE(82),
    [sym__xref] = STATE(67),
    [sym_passthrough] = STATE(61),
    [sym__passthrough_plus] = STATE(83),
    [sym__passthrough_cmd] = STATE(83),
    [sym_replacement] = STATE(61),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(87),
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
    [aux_sym_autolinks_token1] = ACTIONS(57),
    [anon_sym_link_COLON] = ACTIONS(59),
    [anon_sym_mailto_COLON] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_xref_COLON] = ACTIONS(65),
    [sym_emphasis] = ACTIONS(67),
    [sym_strong] = ACTIONS(67),
    [sym_monospace] = ACTIONS(69),
    [sym_highlight] = ACTIONS(69),
    [sym_superscript] = ACTIONS(69),
    [sym_subscript] = ACTIONS(69),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(71),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(73),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(75),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(63),
    [sym_title0] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(41),
    [sym__note_block] = STATE(41),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(42),
    [sym__tip_block] = STATE(42),
    [sym_important] = STATE(2),
    [sym__important] = STATE(21),
    [sym__important_block] = STATE(21),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(44),
    [sym__caution_block] = STATE(44),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(45),
    [sym__warning_block] = STATE(45),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(87),
    [sym_list_item_mark] = STATE(205),
    [sym__ordered_list_mark] = STATE(182),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(91),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(61),
    [sym_kbd] = STATE(61),
    [sym_footnote] = STATE(61),
    [sym_links] = STATE(61),
    [sym_autolinks] = STATE(64),
    [sym_url_macro] = STATE(81),
    [sym_link_macro] = STATE(81),
    [sym_mailto] = STATE(81),
    [sym_xref] = STATE(61),
    [sym__inline_xref] = STATE(82),
    [sym__xref] = STATE(67),
    [sym_passthrough] = STATE(61),
    [sym__passthrough_plus] = STATE(83),
    [sym__passthrough_cmd] = STATE(83),
    [sym_replacement] = STATE(61),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(87),
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
    [aux_sym_autolinks_token1] = ACTIONS(157),
    [anon_sym_link_COLON] = ACTIONS(160),
    [anon_sym_mailto_COLON] = ACTIONS(163),
    [anon_sym_LT_LT] = ACTIONS(166),
    [anon_sym_xref_COLON] = ACTIONS(169),
    [sym_emphasis] = ACTIONS(172),
    [sym_strong] = ACTIONS(172),
    [sym_monospace] = ACTIONS(175),
    [sym_highlight] = ACTIONS(175),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(175),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(178),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(181),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(184),
  },
  [3] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(63),
    [sym_title0] = STATE(2),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(41),
    [sym__note_block] = STATE(41),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(42),
    [sym__tip_block] = STATE(42),
    [sym_important] = STATE(2),
    [sym__important] = STATE(21),
    [sym__important_block] = STATE(21),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(44),
    [sym__caution_block] = STATE(44),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(45),
    [sym__warning_block] = STATE(45),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(87),
    [sym_list_item_mark] = STATE(205),
    [sym__ordered_list_mark] = STATE(182),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(91),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(61),
    [sym_kbd] = STATE(61),
    [sym_footnote] = STATE(61),
    [sym_links] = STATE(61),
    [sym_autolinks] = STATE(64),
    [sym_url_macro] = STATE(81),
    [sym_link_macro] = STATE(81),
    [sym_mailto] = STATE(81),
    [sym_xref] = STATE(61),
    [sym__inline_xref] = STATE(82),
    [sym__xref] = STATE(67),
    [sym_passthrough] = STATE(61),
    [sym__passthrough_plus] = STATE(83),
    [sym__passthrough_cmd] = STATE(83),
    [sym_replacement] = STATE(61),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(87),
    [aux_sym_paragraph_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(5),
    [aux_sym_title0_token1] = ACTIONS(7),
    [sym_title1] = ACTIONS(189),
    [sym_title2] = ACTIONS(189),
    [sym_title3] = ACTIONS(189),
    [sym_title4] = ACTIONS(189),
    [sym_title5] = ACTIONS(189),
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
    [anon_sym_mailto_COLON] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_xref_COLON] = ACTIONS(65),
    [sym_emphasis] = ACTIONS(67),
    [sym_strong] = ACTIONS(67),
    [sym_monospace] = ACTIONS(69),
    [sym_highlight] = ACTIONS(69),
    [sym_superscript] = ACTIONS(69),
    [sym_subscript] = ACTIONS(69),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(71),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(73),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(75),
  },
  [4] = {
    [sym_author_info] = STATE(7),
    [sym__doctype] = STATE(7),
    [sym__doc_description] = STATE(7),
    [sym__url_repo] = STATE(7),
    [sym__link_with_underscores] = STATE(7),
    [sym__hide_uri_scheme] = STATE(7),
    [sym__sectanchors] = STATE(7),
    [sym_doc_attr] = STATE(5),
    [aux_sym_title0_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(193),
    [aux_sym_title0_token1] = ACTIONS(191),
    [sym_title1] = ACTIONS(191),
    [sym_title2] = ACTIONS(191),
    [sym_title3] = ACTIONS(191),
    [sym_title4] = ACTIONS(191),
    [sym_title5] = ACTIONS(191),
    [sym_name] = ACTIONS(195),
    [sym_attr_mark] = ACTIONS(197),
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
    [sym__unordered_list_mark] = ACTIONS(193),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(193),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(193),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(193),
    [sym__checklist_mark] = ACTIONS(193),
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
    [aux_sym_autolinks_token1] = ACTIONS(191),
    [anon_sym_link_COLON] = ACTIONS(193),
    [anon_sym_mailto_COLON] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(193),
    [anon_sym_xref_COLON] = ACTIONS(193),
    [sym_emphasis] = ACTIONS(193),
    [sym_strong] = ACTIONS(193),
    [sym_monospace] = ACTIONS(191),
    [sym_highlight] = ACTIONS(191),
    [sym_superscript] = ACTIONS(191),
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
  [5] = {
    [sym_author_info] = STATE(7),
    [sym__doctype] = STATE(7),
    [sym__doc_description] = STATE(7),
    [sym__url_repo] = STATE(7),
    [sym__link_with_underscores] = STATE(7),
    [sym__hide_uri_scheme] = STATE(7),
    [sym__sectanchors] = STATE(7),
    [sym_doc_attr] = STATE(6),
    [aux_sym_title0_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(201),
    [aux_sym_title0_token1] = ACTIONS(199),
    [sym_title1] = ACTIONS(199),
    [sym_title2] = ACTIONS(199),
    [sym_title3] = ACTIONS(199),
    [sym_title4] = ACTIONS(199),
    [sym_title5] = ACTIONS(199),
    [sym_name] = ACTIONS(195),
    [sym_attr_mark] = ACTIONS(197),
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
    [aux_sym_autolinks_token1] = ACTIONS(199),
    [anon_sym_link_COLON] = ACTIONS(201),
    [anon_sym_mailto_COLON] = ACTIONS(201),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_xref_COLON] = ACTIONS(201),
    [sym_emphasis] = ACTIONS(201),
    [sym_strong] = ACTIONS(201),
    [sym_monospace] = ACTIONS(199),
    [sym_highlight] = ACTIONS(199),
    [sym_superscript] = ACTIONS(199),
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
  [6] = {
    [sym_author_info] = STATE(7),
    [sym__doctype] = STATE(7),
    [sym__doc_description] = STATE(7),
    [sym__url_repo] = STATE(7),
    [sym__link_with_underscores] = STATE(7),
    [sym__hide_uri_scheme] = STATE(7),
    [sym__sectanchors] = STATE(7),
    [sym_doc_attr] = STATE(6),
    [aux_sym_title0_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(205),
    [aux_sym_title0_token1] = ACTIONS(203),
    [sym_title1] = ACTIONS(203),
    [sym_title2] = ACTIONS(203),
    [sym_title3] = ACTIONS(203),
    [sym_title4] = ACTIONS(203),
    [sym_title5] = ACTIONS(203),
    [sym_name] = ACTIONS(207),
    [sym_attr_mark] = ACTIONS(210),
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
    [aux_sym_autolinks_token1] = ACTIONS(203),
    [anon_sym_link_COLON] = ACTIONS(205),
    [anon_sym_mailto_COLON] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(205),
    [anon_sym_xref_COLON] = ACTIONS(205),
    [sym_emphasis] = ACTIONS(205),
    [sym_strong] = ACTIONS(205),
    [sym_monospace] = ACTIONS(203),
    [sym_highlight] = ACTIONS(203),
    [sym_superscript] = ACTIONS(203),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(215),
    [aux_sym_title0_token1] = ACTIONS(213),
    [sym_title1] = ACTIONS(213),
    [sym_title2] = ACTIONS(213),
    [sym_title3] = ACTIONS(213),
    [sym_title4] = ACTIONS(213),
    [sym_title5] = ACTIONS(213),
    [sym_name] = ACTIONS(215),
    [sym_attr_mark] = ACTIONS(215),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(215),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(213),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(213),
    [aux_sym_autolinks_token1] = ACTIONS(213),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(219),
    [aux_sym_title0_token1] = ACTIONS(217),
    [sym_title1] = ACTIONS(217),
    [sym_title2] = ACTIONS(217),
    [sym_title3] = ACTIONS(217),
    [sym_title4] = ACTIONS(217),
    [sym_title5] = ACTIONS(217),
    [sym_name] = ACTIONS(219),
    [sym_attr_mark] = ACTIONS(219),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(219),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(217),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(217),
    [aux_sym_autolinks_token1] = ACTIONS(217),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(223),
    [aux_sym_title0_token1] = ACTIONS(221),
    [sym_title1] = ACTIONS(221),
    [sym_title2] = ACTIONS(221),
    [sym_title3] = ACTIONS(221),
    [sym_title4] = ACTIONS(221),
    [sym_title5] = ACTIONS(221),
    [sym_name] = ACTIONS(223),
    [sym_attr_mark] = ACTIONS(223),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(223),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(221),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(221),
    [aux_sym_autolinks_token1] = ACTIONS(221),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(227),
    [aux_sym_title0_token1] = ACTIONS(225),
    [sym_title1] = ACTIONS(225),
    [sym_title2] = ACTIONS(225),
    [sym_title3] = ACTIONS(225),
    [sym_title4] = ACTIONS(225),
    [sym_title5] = ACTIONS(225),
    [sym_name] = ACTIONS(227),
    [sym_attr_mark] = ACTIONS(227),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(227),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(225),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(225),
    [aux_sym_autolinks_token1] = ACTIONS(225),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(231),
    [aux_sym_title0_token1] = ACTIONS(229),
    [sym_title1] = ACTIONS(229),
    [sym_title2] = ACTIONS(229),
    [sym_title3] = ACTIONS(229),
    [sym_title4] = ACTIONS(229),
    [sym_title5] = ACTIONS(229),
    [sym_name] = ACTIONS(231),
    [sym_attr_mark] = ACTIONS(231),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(231),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(229),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(229),
    [aux_sym_autolinks_token1] = ACTIONS(229),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(235),
    [aux_sym_title0_token1] = ACTIONS(233),
    [sym_title1] = ACTIONS(233),
    [sym_title2] = ACTIONS(233),
    [sym_title3] = ACTIONS(233),
    [sym_title4] = ACTIONS(233),
    [sym_title5] = ACTIONS(233),
    [sym_name] = ACTIONS(235),
    [sym_attr_mark] = ACTIONS(235),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(235),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(233),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(233),
    [aux_sym_autolinks_token1] = ACTIONS(233),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(239),
    [aux_sym_title0_token1] = ACTIONS(237),
    [sym_title1] = ACTIONS(237),
    [sym_title2] = ACTIONS(237),
    [sym_title3] = ACTIONS(237),
    [sym_title4] = ACTIONS(237),
    [sym_title5] = ACTIONS(237),
    [sym_name] = ACTIONS(239),
    [sym_attr_mark] = ACTIONS(239),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(239),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(237),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(237),
    [aux_sym_autolinks_token1] = ACTIONS(237),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(243),
    [aux_sym_title0_token1] = ACTIONS(241),
    [sym_title1] = ACTIONS(241),
    [sym_title2] = ACTIONS(241),
    [sym_title3] = ACTIONS(241),
    [sym_title4] = ACTIONS(241),
    [sym_title5] = ACTIONS(241),
    [sym_name] = ACTIONS(243),
    [sym_attr_mark] = ACTIONS(243),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(243),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(241),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(241),
    [aux_sym_autolinks_token1] = ACTIONS(241),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_DOT] = ACTIONS(247),
    [aux_sym_title0_token1] = ACTIONS(245),
    [sym_title1] = ACTIONS(245),
    [sym_title2] = ACTIONS(245),
    [sym_title3] = ACTIONS(245),
    [sym_title4] = ACTIONS(245),
    [sym_title5] = ACTIONS(245),
    [sym_name] = ACTIONS(247),
    [sym_attr_mark] = ACTIONS(247),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(247),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(245),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(245),
    [aux_sym_autolinks_token1] = ACTIONS(245),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(251),
    [aux_sym_title0_token1] = ACTIONS(249),
    [sym_title1] = ACTIONS(249),
    [sym_title2] = ACTIONS(249),
    [sym_title3] = ACTIONS(249),
    [sym_title4] = ACTIONS(249),
    [sym_title5] = ACTIONS(249),
    [sym_name] = ACTIONS(251),
    [sym_attr_mark] = ACTIONS(251),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(251),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(249),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(249),
    [aux_sym_autolinks_token1] = ACTIONS(249),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [aux_sym_title0_token1] = ACTIONS(253),
    [sym_title1] = ACTIONS(253),
    [sym_title2] = ACTIONS(253),
    [sym_title3] = ACTIONS(253),
    [sym_title4] = ACTIONS(253),
    [sym_title5] = ACTIONS(253),
    [sym_name] = ACTIONS(255),
    [sym_attr_mark] = ACTIONS(255),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(255),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(253),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(253),
    [aux_sym_autolinks_token1] = ACTIONS(253),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_DOT] = ACTIONS(259),
    [aux_sym_title0_token1] = ACTIONS(257),
    [sym_title1] = ACTIONS(257),
    [sym_title2] = ACTIONS(257),
    [sym_title3] = ACTIONS(257),
    [sym_title4] = ACTIONS(257),
    [sym_title5] = ACTIONS(257),
    [sym_name] = ACTIONS(259),
    [sym_attr_mark] = ACTIONS(259),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(259),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(257),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(257),
    [aux_sym_autolinks_token1] = ACTIONS(257),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_DOT] = ACTIONS(263),
    [aux_sym_title0_token1] = ACTIONS(261),
    [sym_title1] = ACTIONS(261),
    [sym_title2] = ACTIONS(261),
    [sym_title3] = ACTIONS(261),
    [sym_title4] = ACTIONS(261),
    [sym_title5] = ACTIONS(261),
    [sym_name] = ACTIONS(263),
    [sym_attr_mark] = ACTIONS(263),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(263),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(261),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(261),
    [aux_sym_autolinks_token1] = ACTIONS(261),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(267),
    [aux_sym_title0_token1] = ACTIONS(265),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(265),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(265),
    [aux_sym_autolinks_token1] = ACTIONS(265),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(271),
    [aux_sym_title0_token1] = ACTIONS(269),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(269),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(269),
    [aux_sym_autolinks_token1] = ACTIONS(269),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_DOT] = ACTIONS(275),
    [aux_sym_title0_token1] = ACTIONS(273),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(273),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(273),
    [aux_sym_autolinks_token1] = ACTIONS(273),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(279),
    [aux_sym_title0_token1] = ACTIONS(277),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(277),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(277),
    [aux_sym_autolinks_token1] = ACTIONS(277),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(283),
    [aux_sym_title0_token1] = ACTIONS(281),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(281),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(281),
    [aux_sym_autolinks_token1] = ACTIONS(281),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(287),
    [aux_sym_title0_token1] = ACTIONS(285),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(285),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(285),
    [aux_sym_autolinks_token1] = ACTIONS(285),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(291),
    [aux_sym_title0_token1] = ACTIONS(289),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(289),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(289),
    [aux_sym_autolinks_token1] = ACTIONS(289),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(295),
    [aux_sym_title0_token1] = ACTIONS(293),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(293),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(293),
    [aux_sym_autolinks_token1] = ACTIONS(293),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(299),
    [aux_sym_title0_token1] = ACTIONS(297),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(297),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(297),
    [aux_sym_autolinks_token1] = ACTIONS(297),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(303),
    [aux_sym_title0_token1] = ACTIONS(301),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(301),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(301),
    [aux_sym_autolinks_token1] = ACTIONS(301),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(307),
    [aux_sym_title0_token1] = ACTIONS(305),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(305),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(305),
    [aux_sym_autolinks_token1] = ACTIONS(305),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_DOT] = ACTIONS(311),
    [aux_sym_title0_token1] = ACTIONS(309),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(309),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(309),
    [aux_sym_autolinks_token1] = ACTIONS(309),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(315),
    [aux_sym_title0_token1] = ACTIONS(313),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(313),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(313),
    [aux_sym_autolinks_token1] = ACTIONS(313),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(319),
    [aux_sym_title0_token1] = ACTIONS(317),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(317),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(317),
    [aux_sym_autolinks_token1] = ACTIONS(317),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(323),
    [aux_sym_title0_token1] = ACTIONS(321),
    [sym_title1] = ACTIONS(321),
    [sym_title2] = ACTIONS(321),
    [sym_title3] = ACTIONS(321),
    [sym_title4] = ACTIONS(321),
    [sym_title5] = ACTIONS(321),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(321),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(321),
    [aux_sym_autolinks_token1] = ACTIONS(321),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(327),
    [aux_sym_title0_token1] = ACTIONS(325),
    [sym_title1] = ACTIONS(325),
    [sym_title2] = ACTIONS(325),
    [sym_title3] = ACTIONS(325),
    [sym_title4] = ACTIONS(325),
    [sym_title5] = ACTIONS(325),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(325),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(325),
    [aux_sym_autolinks_token1] = ACTIONS(325),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_DOT] = ACTIONS(331),
    [aux_sym_title0_token1] = ACTIONS(329),
    [sym_title1] = ACTIONS(329),
    [sym_title2] = ACTIONS(329),
    [sym_title3] = ACTIONS(329),
    [sym_title4] = ACTIONS(329),
    [sym_title5] = ACTIONS(329),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(329),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(329),
    [aux_sym_autolinks_token1] = ACTIONS(329),
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
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(335),
    [aux_sym_title0_token1] = ACTIONS(333),
    [sym_title1] = ACTIONS(333),
    [sym_title2] = ACTIONS(333),
    [sym_title3] = ACTIONS(333),
    [sym_title4] = ACTIONS(333),
    [sym_title5] = ACTIONS(333),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(333),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(333),
    [aux_sym_autolinks_token1] = ACTIONS(333),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [anon_sym_DOT] = ACTIONS(339),
    [aux_sym_title0_token1] = ACTIONS(337),
    [sym_title1] = ACTIONS(337),
    [sym_title2] = ACTIONS(337),
    [sym_title3] = ACTIONS(337),
    [sym_title4] = ACTIONS(337),
    [sym_title5] = ACTIONS(337),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(337),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(337),
    [aux_sym_autolinks_token1] = ACTIONS(337),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [aux_sym_title0_token1] = ACTIONS(341),
    [sym_title1] = ACTIONS(341),
    [sym_title2] = ACTIONS(341),
    [sym_title3] = ACTIONS(341),
    [sym_title4] = ACTIONS(341),
    [sym_title5] = ACTIONS(341),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(341),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(341),
    [aux_sym_autolinks_token1] = ACTIONS(341),
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
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_DOT] = ACTIONS(347),
    [aux_sym_title0_token1] = ACTIONS(345),
    [sym_title1] = ACTIONS(345),
    [sym_title2] = ACTIONS(345),
    [sym_title3] = ACTIONS(345),
    [sym_title4] = ACTIONS(345),
    [sym_title5] = ACTIONS(345),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(345),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(345),
    [aux_sym_autolinks_token1] = ACTIONS(345),
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
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_DOT] = ACTIONS(351),
    [aux_sym_title0_token1] = ACTIONS(349),
    [sym_title1] = ACTIONS(349),
    [sym_title2] = ACTIONS(349),
    [sym_title3] = ACTIONS(349),
    [sym_title4] = ACTIONS(349),
    [sym_title5] = ACTIONS(349),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(349),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(349),
    [aux_sym_autolinks_token1] = ACTIONS(349),
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
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(355),
    [aux_sym_title0_token1] = ACTIONS(353),
    [sym_title1] = ACTIONS(353),
    [sym_title2] = ACTIONS(353),
    [sym_title3] = ACTIONS(353),
    [sym_title4] = ACTIONS(353),
    [sym_title5] = ACTIONS(353),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(353),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(353),
    [aux_sym_autolinks_token1] = ACTIONS(353),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(359),
    [aux_sym_title0_token1] = ACTIONS(357),
    [sym_title1] = ACTIONS(357),
    [sym_title2] = ACTIONS(357),
    [sym_title3] = ACTIONS(357),
    [sym_title4] = ACTIONS(357),
    [sym_title5] = ACTIONS(357),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(357),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(357),
    [aux_sym_autolinks_token1] = ACTIONS(357),
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
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(363),
    [aux_sym_title0_token1] = ACTIONS(361),
    [sym_title1] = ACTIONS(361),
    [sym_title2] = ACTIONS(361),
    [sym_title3] = ACTIONS(361),
    [sym_title4] = ACTIONS(361),
    [sym_title5] = ACTIONS(361),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(361),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(361),
    [aux_sym_autolinks_token1] = ACTIONS(361),
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
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(367),
    [aux_sym_title0_token1] = ACTIONS(365),
    [sym_title1] = ACTIONS(365),
    [sym_title2] = ACTIONS(365),
    [sym_title3] = ACTIONS(365),
    [sym_title4] = ACTIONS(365),
    [sym_title5] = ACTIONS(365),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(365),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(365),
    [aux_sym_autolinks_token1] = ACTIONS(365),
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
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(371),
    [aux_sym_title0_token1] = ACTIONS(369),
    [sym_title1] = ACTIONS(369),
    [sym_title2] = ACTIONS(369),
    [sym_title3] = ACTIONS(369),
    [sym_title4] = ACTIONS(369),
    [sym_title5] = ACTIONS(369),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(369),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(369),
    [aux_sym_autolinks_token1] = ACTIONS(369),
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
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(375),
    [aux_sym_title0_token1] = ACTIONS(373),
    [sym_title1] = ACTIONS(373),
    [sym_title2] = ACTIONS(373),
    [sym_title3] = ACTIONS(373),
    [sym_title4] = ACTIONS(373),
    [sym_title5] = ACTIONS(373),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(373),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(373),
    [aux_sym_autolinks_token1] = ACTIONS(373),
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
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(379),
    [aux_sym_title0_token1] = ACTIONS(377),
    [sym_title1] = ACTIONS(377),
    [sym_title2] = ACTIONS(377),
    [sym_title3] = ACTIONS(377),
    [sym_title4] = ACTIONS(377),
    [sym_title5] = ACTIONS(377),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(377),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(377),
    [aux_sym_autolinks_token1] = ACTIONS(377),
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
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(383),
    [aux_sym_title0_token1] = ACTIONS(381),
    [sym_title1] = ACTIONS(381),
    [sym_title2] = ACTIONS(381),
    [sym_title3] = ACTIONS(381),
    [sym_title4] = ACTIONS(381),
    [sym_title5] = ACTIONS(381),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(381),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(381),
    [aux_sym_autolinks_token1] = ACTIONS(381),
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
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(387),
    [aux_sym_title0_token1] = ACTIONS(385),
    [sym_title1] = ACTIONS(385),
    [sym_title2] = ACTIONS(385),
    [sym_title3] = ACTIONS(385),
    [sym_title4] = ACTIONS(385),
    [sym_title5] = ACTIONS(385),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(385),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(385),
    [aux_sym_autolinks_token1] = ACTIONS(385),
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
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [anon_sym_DOT] = ACTIONS(391),
    [aux_sym_title0_token1] = ACTIONS(389),
    [sym_title1] = ACTIONS(389),
    [sym_title2] = ACTIONS(389),
    [sym_title3] = ACTIONS(389),
    [sym_title4] = ACTIONS(389),
    [sym_title5] = ACTIONS(389),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(389),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(389),
    [aux_sym_autolinks_token1] = ACTIONS(389),
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
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_DOT] = ACTIONS(395),
    [aux_sym_title0_token1] = ACTIONS(393),
    [sym_title1] = ACTIONS(393),
    [sym_title2] = ACTIONS(393),
    [sym_title3] = ACTIONS(393),
    [sym_title4] = ACTIONS(393),
    [sym_title5] = ACTIONS(393),
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
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(393),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(393),
    [aux_sym_autolinks_token1] = ACTIONS(393),
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
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_DOT] = ACTIONS(399),
    [aux_sym_title0_token1] = ACTIONS(397),
    [sym_title1] = ACTIONS(397),
    [sym_title2] = ACTIONS(397),
    [sym_title3] = ACTIONS(397),
    [sym_title4] = ACTIONS(397),
    [sym_title5] = ACTIONS(397),
    [anon_sym_NOTE_COLON] = ACTIONS(397),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(397),
    [anon_sym_TIP_COLON] = ACTIONS(397),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(397),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(397),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(397),
    [anon_sym_CAUTION_COLON] = ACTIONS(397),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(397),
    [anon_sym_WARNING_COLON] = ACTIONS(397),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(397),
    [sym__unordered_list_mark] = ACTIONS(399),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(399),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(397),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(399),
    [sym__checklist_mark] = ACTIONS(399),
    [aux_sym_code_token1] = ACTIONS(397),
    [aux_sym_code_language_token1] = ACTIONS(399),
    [anon_sym_SLASH_SLASH] = ACTIONS(397),
    [aux_sym_line_breaks_token1] = ACTIONS(397),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(397),
    [anon_sym_image_COLON_COLON] = ACTIONS(397),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(397),
    [anon_sym_audio_COLON_COLON] = ACTIONS(397),
    [anon_sym_video_COLON_COLON] = ACTIONS(397),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(397),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(397),
    [aux_sym_autolinks_token1] = ACTIONS(397),
    [anon_sym_link_COLON] = ACTIONS(399),
    [anon_sym_mailto_COLON] = ACTIONS(399),
    [anon_sym_LT_LT] = ACTIONS(399),
    [anon_sym_xref_COLON] = ACTIONS(399),
    [sym_emphasis] = ACTIONS(399),
    [sym_strong] = ACTIONS(399),
    [sym_monospace] = ACTIONS(397),
    [sym_highlight] = ACTIONS(397),
    [sym_superscript] = ACTIONS(397),
    [sym_subscript] = ACTIONS(397),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(397),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(397),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(397),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_DOT] = ACTIONS(403),
    [aux_sym_title0_token1] = ACTIONS(401),
    [sym_title1] = ACTIONS(401),
    [sym_title2] = ACTIONS(401),
    [sym_title3] = ACTIONS(401),
    [sym_title4] = ACTIONS(401),
    [sym_title5] = ACTIONS(401),
    [anon_sym_NOTE_COLON] = ACTIONS(401),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(401),
    [anon_sym_TIP_COLON] = ACTIONS(401),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(401),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(401),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(401),
    [anon_sym_CAUTION_COLON] = ACTIONS(401),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(401),
    [anon_sym_WARNING_COLON] = ACTIONS(401),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(401),
    [sym__unordered_list_mark] = ACTIONS(403),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(403),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(401),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(403),
    [sym__checklist_mark] = ACTIONS(403),
    [aux_sym_code_token1] = ACTIONS(401),
    [aux_sym_code_language_token1] = ACTIONS(403),
    [anon_sym_SLASH_SLASH] = ACTIONS(401),
    [aux_sym_line_breaks_token1] = ACTIONS(401),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(401),
    [anon_sym_image_COLON_COLON] = ACTIONS(401),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(401),
    [anon_sym_audio_COLON_COLON] = ACTIONS(401),
    [anon_sym_video_COLON_COLON] = ACTIONS(401),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(401),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(401),
    [aux_sym_autolinks_token1] = ACTIONS(401),
    [anon_sym_link_COLON] = ACTIONS(403),
    [anon_sym_mailto_COLON] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_xref_COLON] = ACTIONS(403),
    [sym_emphasis] = ACTIONS(403),
    [sym_strong] = ACTIONS(403),
    [sym_monospace] = ACTIONS(401),
    [sym_highlight] = ACTIONS(401),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(401),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(401),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(401),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(401),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [anon_sym_DOT] = ACTIONS(407),
    [aux_sym_title0_token1] = ACTIONS(405),
    [sym_title1] = ACTIONS(405),
    [sym_title2] = ACTIONS(405),
    [sym_title3] = ACTIONS(405),
    [sym_title4] = ACTIONS(405),
    [sym_title5] = ACTIONS(405),
    [anon_sym_NOTE_COLON] = ACTIONS(405),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(405),
    [anon_sym_TIP_COLON] = ACTIONS(405),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(405),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(405),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(405),
    [anon_sym_CAUTION_COLON] = ACTIONS(405),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(405),
    [anon_sym_WARNING_COLON] = ACTIONS(405),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(405),
    [sym__unordered_list_mark] = ACTIONS(407),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(407),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(405),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(407),
    [sym__checklist_mark] = ACTIONS(407),
    [aux_sym_code_token1] = ACTIONS(405),
    [aux_sym_code_language_token1] = ACTIONS(407),
    [anon_sym_SLASH_SLASH] = ACTIONS(405),
    [aux_sym_line_breaks_token1] = ACTIONS(405),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(405),
    [anon_sym_image_COLON_COLON] = ACTIONS(405),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(405),
    [anon_sym_audio_COLON_COLON] = ACTIONS(405),
    [anon_sym_video_COLON_COLON] = ACTIONS(405),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(405),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(405),
    [aux_sym_autolinks_token1] = ACTIONS(405),
    [anon_sym_link_COLON] = ACTIONS(407),
    [anon_sym_mailto_COLON] = ACTIONS(407),
    [anon_sym_LT_LT] = ACTIONS(407),
    [anon_sym_xref_COLON] = ACTIONS(407),
    [sym_emphasis] = ACTIONS(407),
    [sym_strong] = ACTIONS(407),
    [sym_monospace] = ACTIONS(405),
    [sym_highlight] = ACTIONS(405),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(405),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(405),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(405),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_DOT] = ACTIONS(411),
    [aux_sym_title0_token1] = ACTIONS(409),
    [sym_title1] = ACTIONS(409),
    [sym_title2] = ACTIONS(409),
    [sym_title3] = ACTIONS(409),
    [sym_title4] = ACTIONS(409),
    [sym_title5] = ACTIONS(409),
    [anon_sym_NOTE_COLON] = ACTIONS(409),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(409),
    [anon_sym_TIP_COLON] = ACTIONS(409),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(409),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(409),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(409),
    [anon_sym_CAUTION_COLON] = ACTIONS(409),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(409),
    [anon_sym_WARNING_COLON] = ACTIONS(409),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(409),
    [sym__unordered_list_mark] = ACTIONS(411),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(411),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(409),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(411),
    [sym__checklist_mark] = ACTIONS(411),
    [aux_sym_code_token1] = ACTIONS(409),
    [aux_sym_code_language_token1] = ACTIONS(411),
    [anon_sym_SLASH_SLASH] = ACTIONS(409),
    [aux_sym_line_breaks_token1] = ACTIONS(409),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(409),
    [anon_sym_image_COLON_COLON] = ACTIONS(409),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(409),
    [anon_sym_audio_COLON_COLON] = ACTIONS(409),
    [anon_sym_video_COLON_COLON] = ACTIONS(409),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(409),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(409),
    [aux_sym_autolinks_token1] = ACTIONS(409),
    [anon_sym_link_COLON] = ACTIONS(411),
    [anon_sym_mailto_COLON] = ACTIONS(411),
    [anon_sym_LT_LT] = ACTIONS(411),
    [anon_sym_xref_COLON] = ACTIONS(411),
    [sym_emphasis] = ACTIONS(411),
    [sym_strong] = ACTIONS(411),
    [sym_monospace] = ACTIONS(409),
    [sym_highlight] = ACTIONS(409),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(409),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(409),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(409),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(409),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [anon_sym_DOT] = ACTIONS(415),
    [aux_sym_title0_token1] = ACTIONS(413),
    [sym_title1] = ACTIONS(413),
    [sym_title2] = ACTIONS(413),
    [sym_title3] = ACTIONS(413),
    [sym_title4] = ACTIONS(413),
    [sym_title5] = ACTIONS(413),
    [anon_sym_NOTE_COLON] = ACTIONS(413),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(413),
    [anon_sym_TIP_COLON] = ACTIONS(413),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(413),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(413),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(413),
    [anon_sym_CAUTION_COLON] = ACTIONS(413),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(413),
    [anon_sym_WARNING_COLON] = ACTIONS(413),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(413),
    [sym__unordered_list_mark] = ACTIONS(415),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(415),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(413),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(415),
    [sym__checklist_mark] = ACTIONS(415),
    [aux_sym_code_token1] = ACTIONS(413),
    [aux_sym_code_language_token1] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(413),
    [aux_sym_line_breaks_token1] = ACTIONS(413),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(413),
    [anon_sym_image_COLON_COLON] = ACTIONS(413),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(413),
    [anon_sym_audio_COLON_COLON] = ACTIONS(413),
    [anon_sym_video_COLON_COLON] = ACTIONS(413),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(413),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(413),
    [aux_sym_autolinks_token1] = ACTIONS(413),
    [anon_sym_link_COLON] = ACTIONS(415),
    [anon_sym_mailto_COLON] = ACTIONS(415),
    [anon_sym_LT_LT] = ACTIONS(415),
    [anon_sym_xref_COLON] = ACTIONS(415),
    [sym_emphasis] = ACTIONS(415),
    [sym_strong] = ACTIONS(415),
    [sym_monospace] = ACTIONS(413),
    [sym_highlight] = ACTIONS(413),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(413),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(413),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(413),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_DOT] = ACTIONS(419),
    [aux_sym_title0_token1] = ACTIONS(417),
    [sym_title1] = ACTIONS(417),
    [sym_title2] = ACTIONS(417),
    [sym_title3] = ACTIONS(417),
    [sym_title4] = ACTIONS(417),
    [sym_title5] = ACTIONS(417),
    [anon_sym_NOTE_COLON] = ACTIONS(417),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(417),
    [anon_sym_TIP_COLON] = ACTIONS(417),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(417),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(417),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(417),
    [anon_sym_CAUTION_COLON] = ACTIONS(417),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(417),
    [anon_sym_WARNING_COLON] = ACTIONS(417),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(417),
    [sym__unordered_list_mark] = ACTIONS(419),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(419),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(417),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(419),
    [sym__checklist_mark] = ACTIONS(419),
    [aux_sym_code_token1] = ACTIONS(417),
    [aux_sym_code_language_token1] = ACTIONS(419),
    [anon_sym_SLASH_SLASH] = ACTIONS(417),
    [aux_sym_line_breaks_token1] = ACTIONS(417),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(417),
    [anon_sym_image_COLON_COLON] = ACTIONS(417),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(417),
    [anon_sym_audio_COLON_COLON] = ACTIONS(417),
    [anon_sym_video_COLON_COLON] = ACTIONS(417),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(417),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(417),
    [aux_sym_autolinks_token1] = ACTIONS(417),
    [anon_sym_link_COLON] = ACTIONS(419),
    [anon_sym_mailto_COLON] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_xref_COLON] = ACTIONS(419),
    [sym_emphasis] = ACTIONS(419),
    [sym_strong] = ACTIONS(419),
    [sym_monospace] = ACTIONS(417),
    [sym_highlight] = ACTIONS(417),
    [sym_superscript] = ACTIONS(417),
    [sym_subscript] = ACTIONS(417),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(417),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(417),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(417),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [anon_sym_DOT] = ACTIONS(423),
    [aux_sym_title0_token1] = ACTIONS(421),
    [sym_title1] = ACTIONS(421),
    [sym_title2] = ACTIONS(421),
    [sym_title3] = ACTIONS(421),
    [sym_title4] = ACTIONS(421),
    [sym_title5] = ACTIONS(421),
    [anon_sym_NOTE_COLON] = ACTIONS(421),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(421),
    [anon_sym_TIP_COLON] = ACTIONS(421),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(421),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(421),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(421),
    [anon_sym_CAUTION_COLON] = ACTIONS(421),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(421),
    [anon_sym_WARNING_COLON] = ACTIONS(421),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(421),
    [sym__unordered_list_mark] = ACTIONS(423),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(423),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(421),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(423),
    [sym__checklist_mark] = ACTIONS(423),
    [aux_sym_code_token1] = ACTIONS(421),
    [aux_sym_code_language_token1] = ACTIONS(423),
    [anon_sym_SLASH_SLASH] = ACTIONS(421),
    [aux_sym_line_breaks_token1] = ACTIONS(421),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(421),
    [anon_sym_image_COLON_COLON] = ACTIONS(421),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(421),
    [anon_sym_audio_COLON_COLON] = ACTIONS(421),
    [anon_sym_video_COLON_COLON] = ACTIONS(421),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(421),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(421),
    [aux_sym_autolinks_token1] = ACTIONS(421),
    [anon_sym_link_COLON] = ACTIONS(423),
    [anon_sym_mailto_COLON] = ACTIONS(423),
    [anon_sym_LT_LT] = ACTIONS(423),
    [anon_sym_xref_COLON] = ACTIONS(423),
    [sym_emphasis] = ACTIONS(423),
    [sym_strong] = ACTIONS(423),
    [sym_monospace] = ACTIONS(421),
    [sym_highlight] = ACTIONS(421),
    [sym_superscript] = ACTIONS(421),
    [sym_subscript] = ACTIONS(421),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(421),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(421),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(421),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_DOT] = ACTIONS(427),
    [aux_sym_title0_token1] = ACTIONS(425),
    [sym_title1] = ACTIONS(425),
    [sym_title2] = ACTIONS(425),
    [sym_title3] = ACTIONS(425),
    [sym_title4] = ACTIONS(425),
    [sym_title5] = ACTIONS(425),
    [anon_sym_NOTE_COLON] = ACTIONS(425),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(425),
    [anon_sym_TIP_COLON] = ACTIONS(425),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(425),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(425),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(425),
    [anon_sym_CAUTION_COLON] = ACTIONS(425),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(425),
    [anon_sym_WARNING_COLON] = ACTIONS(425),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(425),
    [sym__unordered_list_mark] = ACTIONS(427),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(427),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(425),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(427),
    [sym__checklist_mark] = ACTIONS(427),
    [aux_sym_code_token1] = ACTIONS(425),
    [aux_sym_code_language_token1] = ACTIONS(427),
    [anon_sym_SLASH_SLASH] = ACTIONS(425),
    [aux_sym_line_breaks_token1] = ACTIONS(425),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(425),
    [anon_sym_image_COLON_COLON] = ACTIONS(425),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(425),
    [anon_sym_audio_COLON_COLON] = ACTIONS(425),
    [anon_sym_video_COLON_COLON] = ACTIONS(425),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(425),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(425),
    [aux_sym_autolinks_token1] = ACTIONS(425),
    [anon_sym_link_COLON] = ACTIONS(427),
    [anon_sym_mailto_COLON] = ACTIONS(427),
    [anon_sym_LT_LT] = ACTIONS(427),
    [anon_sym_xref_COLON] = ACTIONS(427),
    [sym_emphasis] = ACTIONS(427),
    [sym_strong] = ACTIONS(427),
    [sym_monospace] = ACTIONS(425),
    [sym_highlight] = ACTIONS(425),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(425),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(425),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(425),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(425),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(53), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(55), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(57), 1,
      aux_sym_autolinks_token1,
    ACTIONS(59), 1,
      anon_sym_link_COLON,
    ACTIONS(61), 1,
      anon_sym_mailto_COLON,
    ACTIONS(65), 1,
      anon_sym_xref_COLON,
    ACTIONS(71), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(73), 1,
      anon_sym_pass_COLON_LBRACK,
    ACTIONS(431), 1,
      anon_sym_LF_LF,
    ACTIONS(433), 1,
      anon_sym_LT_LT,
    STATE(64), 1,
      sym_autolinks,
    STATE(67), 1,
      sym__xref,
    STATE(82), 1,
      sym__inline_xref,
    ACTIONS(429), 2,
      aux_sym_code_language_token1,
      sym_emphasis,
    STATE(83), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    STATE(81), 3,
      sym_url_macro,
      sym_link_macro,
      sym_mailto,
    ACTIONS(435), 5,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(62), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_links,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(75), 30,
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
  [102] = 19,
    ACTIONS(440), 1,
      anon_sym_LF_LF,
    ACTIONS(442), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(445), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(448), 1,
      aux_sym_autolinks_token1,
    ACTIONS(451), 1,
      anon_sym_link_COLON,
    ACTIONS(454), 1,
      anon_sym_mailto_COLON,
    ACTIONS(457), 1,
      anon_sym_LT_LT,
    ACTIONS(460), 1,
      anon_sym_xref_COLON,
    ACTIONS(466), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(469), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(64), 1,
      sym_autolinks,
    STATE(67), 1,
      sym__xref,
    STATE(82), 1,
      sym__inline_xref,
    ACTIONS(437), 2,
      aux_sym_code_language_token1,
      sym_emphasis,
    STATE(83), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    STATE(81), 3,
      sym_url_macro,
      sym_link_macro,
      sym_mailto,
    ACTIONS(463), 5,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(62), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_links,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(472), 30,
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
  [204] = 28,
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
    ACTIONS(475), 1,
      aux_sym_code_language_token1,
    STATE(91), 1,
      sym_table_start,
    STATE(182), 1,
      sym__ordered_list_mark,
    STATE(205), 1,
      sym_list_item_mark,
    ACTIONS(31), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(21), 2,
      sym__important,
      sym__important_block,
    STATE(41), 2,
      sym__note_line,
      sym__note_block,
    STATE(42), 2,
      sym__tip,
      sym__tip_block,
    STATE(44), 2,
      sym__caution,
      sym__caution_block,
    STATE(45), 2,
      sym__warning,
      sym__warning_block,
    STATE(87), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(33), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
    STATE(53), 13,
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
  [310] = 3,
    ACTIONS(479), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(481), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [365] = 3,
    ACTIONS(485), 1,
      anon_sym_COLON_COLON,
    ACTIONS(483), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(487), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [420] = 2,
    ACTIONS(489), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(491), 43,
      anon_sym_LBRACK,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [473] = 2,
    ACTIONS(493), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(495), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [525] = 2,
    ACTIONS(497), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(499), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [577] = 2,
    ACTIONS(501), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(503), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [629] = 2,
    ACTIONS(505), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(507), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [681] = 2,
    ACTIONS(509), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(511), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [733] = 2,
    ACTIONS(513), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(515), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [785] = 2,
    ACTIONS(517), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(519), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [837] = 2,
    ACTIONS(521), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(523), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [889] = 2,
    ACTIONS(525), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(527), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [941] = 2,
    ACTIONS(529), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(531), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [993] = 2,
    ACTIONS(533), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(535), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [1045] = 2,
    ACTIONS(537), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(539), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [1097] = 2,
    ACTIONS(541), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(543), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [1149] = 2,
    ACTIONS(545), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(547), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [1201] = 2,
    ACTIONS(549), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(551), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [1253] = 2,
    ACTIONS(493), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(495), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [1305] = 2,
    ACTIONS(553), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(555), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [1357] = 2,
    ACTIONS(557), 5,
      aux_sym_code_language_token1,
      anon_sym_link_COLON,
      anon_sym_mailto_COLON,
      anon_sym_xref_COLON,
      sym_emphasis,
    ACTIONS(559), 42,
      anon_sym_LF_LF,
      anon_sym_kbd_COLON_LBRACK,
      anon_sym_footnote_COLON_LBRACK,
      aux_sym_autolinks_token1,
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
  [1409] = 2,
    ACTIONS(563), 3,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
      aux_sym_code_language_token1,
    ACTIONS(561), 18,
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
  [1435] = 6,
    ACTIONS(565), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym__ordered_list_mark,
    STATE(205), 1,
      sym_list_item_mark,
    ACTIONS(567), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(86), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(570), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [1458] = 6,
    ACTIONS(573), 1,
      anon_sym_LF,
    STATE(182), 1,
      sym__ordered_list_mark,
    STATE(205), 1,
      sym_list_item_mark,
    ACTIONS(31), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(86), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(33), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [1481] = 2,
    ACTIONS(575), 3,
      anon_sym_LF,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(577), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [1492] = 2,
    ACTIONS(579), 3,
      anon_sym_LF,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(581), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
  [1503] = 6,
    ACTIONS(583), 1,
      anon_sym_doctype,
    ACTIONS(585), 1,
      anon_sym_description,
    ACTIONS(587), 1,
      anon_sym_url_DASHrepo,
    ACTIONS(589), 1,
      anon_sym_link_DASHwith_DASHunderscores,
    ACTIONS(591), 1,
      anon_sym_hide_DASHuri_DASHscheme,
    ACTIONS(593), 1,
      anon_sym_sectanchors,
  [1522] = 5,
    ACTIONS(595), 1,
      aux_sym_block_title_token1,
    ACTIONS(597), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(50), 1,
      sym_table_end,
    STATE(99), 1,
      aux_sym_table_content_repeat1,
    STATE(138), 1,
      sym_table_content,
  [1538] = 4,
    ACTIONS(599), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(601), 1,
      aux_sym__note_block_token1,
    STATE(98), 1,
      aux_sym__note_block_repeat1,
    STATE(184), 1,
      sym_code_content,
  [1551] = 1,
    ACTIONS(603), 4,
      anon_sym_article,
      anon_sym_book,
      anon_sym_manpage,
      anon_sym_inline,
  [1558] = 3,
    ACTIONS(605), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    STATE(97), 1,
      aux_sym__note_block_repeat1,
  [1568] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(609), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(97), 1,
      aux_sym__note_block_repeat1,
  [1578] = 3,
    ACTIONS(611), 1,
      anon_sym_LBRACK,
    ACTIONS(613), 1,
      aux_sym_audio_url_token1,
    STATE(192), 1,
      sym_audio_url,
  [1588] = 3,
    ACTIONS(615), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(617), 1,
      aux_sym__note_block_token1,
    STATE(97), 1,
      aux_sym__note_block_repeat1,
  [1598] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(620), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(97), 1,
      aux_sym__note_block_repeat1,
  [1608] = 3,
    ACTIONS(622), 1,
      aux_sym_block_title_token1,
    ACTIONS(624), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(101), 1,
      aux_sym_table_content_repeat1,
  [1618] = 3,
    ACTIONS(613), 1,
      aux_sym_audio_url_token1,
    ACTIONS(626), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_audio_url,
  [1628] = 3,
    ACTIONS(628), 1,
      aux_sym_block_title_token1,
    ACTIONS(631), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(101), 1,
      aux_sym_table_content_repeat1,
  [1638] = 3,
    ACTIONS(633), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(635), 1,
      aux_sym__note_block_token1,
    STATE(94), 1,
      aux_sym__note_block_repeat1,
  [1648] = 3,
    ACTIONS(637), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(639), 1,
      aux_sym__note_block_token1,
    STATE(114), 1,
      aux_sym__note_block_repeat1,
  [1658] = 3,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
    ACTIONS(643), 1,
      aux_sym_audio_url_token1,
    STATE(148), 1,
      sym_audio_title,
  [1668] = 3,
    ACTIONS(643), 1,
      aux_sym_audio_url_token1,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_audio_title,
  [1678] = 3,
    ACTIONS(647), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(649), 1,
      aux_sym__note_block_token1,
    STATE(95), 1,
      aux_sym__note_block_repeat1,
  [1688] = 3,
    ACTIONS(651), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(653), 1,
      aux_sym__note_block_token1,
    STATE(110), 1,
      aux_sym__note_block_repeat1,
  [1698] = 3,
    ACTIONS(655), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(657), 1,
      aux_sym__note_block_token1,
    STATE(112), 1,
      aux_sym__note_block_repeat1,
  [1708] = 3,
    ACTIONS(643), 1,
      aux_sym_audio_url_token1,
    ACTIONS(659), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_audio_title,
  [1718] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(661), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(97), 1,
      aux_sym__note_block_repeat1,
  [1728] = 3,
    ACTIONS(643), 1,
      aux_sym_audio_url_token1,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_audio_title,
  [1738] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(665), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(97), 1,
      aux_sym__note_block_repeat1,
  [1748] = 1,
    ACTIONS(667), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1754] = 3,
    ACTIONS(607), 1,
      aux_sym__note_block_token1,
    ACTIONS(669), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(97), 1,
      aux_sym__note_block_repeat1,
  [1764] = 2,
    ACTIONS(671), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_LF,
  [1771] = 2,
    ACTIONS(675), 1,
      aux_sym_autolinks_token1,
    STATE(203), 1,
      sym_autolinks,
  [1778] = 2,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    ACTIONS(679), 1,
      sym_footnote_content,
  [1785] = 2,
    ACTIONS(681), 1,
      aux_sym_block_title_token1,
    STATE(88), 1,
      sym_list_item_content,
  [1792] = 2,
    ACTIONS(683), 1,
      aux_sym_audio_url_token1,
    STATE(159), 1,
      sym_audio_title,
  [1799] = 2,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_GT_GT,
  [1806] = 2,
    ACTIONS(689), 1,
      aux_sym_code_language_token1,
    STATE(185), 1,
      sym_xref_url,
  [1813] = 2,
    ACTIONS(691), 1,
      aux_sym_code_language_token1,
    STATE(183), 1,
      sym_passthrough_content,
  [1820] = 2,
    ACTIONS(691), 1,
      aux_sym_code_language_token1,
    STATE(181), 1,
      sym_passthrough_content,
  [1827] = 2,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
    ACTIONS(695), 1,
      aux_sym_url_macro_token1,
  [1834] = 2,
    ACTIONS(643), 1,
      aux_sym_audio_url_token1,
    STATE(171), 1,
      sym_audio_title,
  [1841] = 1,
    ACTIONS(697), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1846] = 2,
    ACTIONS(643), 1,
      aux_sym_audio_url_token1,
    STATE(172), 1,
      sym_audio_title,
  [1853] = 2,
    ACTIONS(689), 1,
      aux_sym_code_language_token1,
    STATE(120), 1,
      sym_xref_url,
  [1860] = 2,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(701), 1,
      anon_sym_LF,
  [1867] = 2,
    ACTIONS(703), 1,
      aux_sym_code_language_token1,
    STATE(195), 1,
      sym_code_language,
  [1874] = 1,
    ACTIONS(705), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [1879] = 2,
    ACTIONS(707), 1,
      anon_sym_RBRACK,
    ACTIONS(709), 1,
      sym_kbd_content,
  [1886] = 2,
    ACTIONS(711), 1,
      anon_sym_,
    ACTIONS(713), 1,
      sym_name,
  [1893] = 2,
    ACTIONS(715), 1,
      anon_sym_,
    ACTIONS(717), 1,
      sym_name,
  [1900] = 2,
    ACTIONS(675), 1,
      aux_sym_autolinks_token1,
    STATE(180), 1,
      sym_autolinks,
  [1907] = 2,
    ACTIONS(719), 1,
      anon_sym_LT,
    ACTIONS(721), 1,
      anon_sym_LF,
  [1914] = 2,
    ACTIONS(723), 1,
      anon_sym_,
    ACTIONS(725), 1,
      sym_name,
  [1921] = 2,
    ACTIONS(597), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(28), 1,
      sym_table_end,
  [1928] = 2,
    ACTIONS(727), 1,
      aux_sym_block_title_token1,
    ACTIONS(729), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1935] = 2,
    ACTIONS(613), 1,
      aux_sym_audio_url_token1,
    STATE(193), 1,
      sym_audio_url,
  [1942] = 1,
    ACTIONS(731), 1,
      anon_sym_LBRACK,
  [1946] = 1,
    ACTIONS(733), 1,
      anon_sym_RBRACK,
  [1950] = 1,
    ACTIONS(735), 1,
      anon_sym_LF,
  [1954] = 1,
    ACTIONS(737), 1,
      anon_sym_,
  [1958] = 1,
    ACTIONS(739), 1,
      anon_sym_,
  [1962] = 1,
    ACTIONS(741), 1,
      aux_sym__doc_description_token1,
  [1966] = 1,
    ACTIONS(743), 1,
      anon_sym_,
  [1970] = 1,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
  [1974] = 1,
    ACTIONS(747), 1,
      anon_sym_LF,
  [1978] = 1,
    ACTIONS(749), 1,
      anon_sym_LF,
  [1982] = 1,
    ACTIONS(751), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1986] = 1,
    ACTIONS(753), 1,
      anon_sym_LF,
  [1990] = 1,
    ACTIONS(755), 1,
      anon_sym_LF,
  [1994] = 1,
    ACTIONS(757), 1,
      aux_sym_url_macro_token1,
  [1998] = 1,
    ACTIONS(759), 1,
      anon_sym_LF,
  [2002] = 1,
    ACTIONS(761), 1,
      anon_sym_LF,
  [2006] = 1,
    ACTIONS(763), 1,
      aux_sym_comment_token1,
  [2010] = 1,
    ACTIONS(765), 1,
      aux_sym_block_title_token1,
  [2014] = 1,
    ACTIONS(767), 1,
      anon_sym_RBRACK_LF,
  [2018] = 1,
    ACTIONS(769), 1,
      sym_attr_mark,
  [2022] = 1,
    ACTIONS(771), 1,
      anon_sym_RBRACK,
  [2026] = 1,
    ACTIONS(773), 1,
      anon_sym_LF,
  [2030] = 1,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
  [2034] = 1,
    ACTIONS(777), 1,
      sym_attr_mark,
  [2038] = 1,
    ACTIONS(779), 1,
      anon_sym_LF,
  [2042] = 1,
    ACTIONS(781), 1,
      anon_sym_LF,
  [2046] = 1,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
  [2050] = 1,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
  [2054] = 1,
    ACTIONS(787), 1,
      sym_attr_mark,
  [2058] = 1,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
  [2062] = 1,
    ACTIONS(791), 1,
      anon_sym_GT_GT,
  [2066] = 1,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
  [2070] = 1,
    ACTIONS(795), 1,
      sym_attr_mark,
  [2074] = 1,
    ACTIONS(797), 1,
      sym_attr_mark,
  [2078] = 1,
    ACTIONS(723), 1,
      anon_sym_,
  [2082] = 1,
    ACTIONS(799), 1,
      sym_attr_mark,
  [2086] = 1,
    ACTIONS(801), 1,
      aux_sym_url_macro_token1,
  [2090] = 1,
    ACTIONS(803), 1,
      anon_sym_LF,
  [2094] = 1,
    ACTIONS(485), 1,
      anon_sym_COLON_COLON,
  [2098] = 1,
    ACTIONS(805), 1,
      anon_sym_LF,
  [2102] = 1,
    ACTIONS(807), 1,
      anon_sym_RBRACK,
  [2106] = 1,
    ACTIONS(809), 1,
      anon_sym_,
  [2110] = 1,
    ACTIONS(811), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2114] = 1,
    ACTIONS(813), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2118] = 1,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
  [2122] = 1,
    ACTIONS(817), 1,
      anon_sym_LBRACK,
  [2126] = 1,
    ACTIONS(819), 1,
      anon_sym_LBRACK,
  [2130] = 1,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
  [2134] = 1,
    ACTIONS(823), 1,
      anon_sym_LF,
  [2138] = 1,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
  [2142] = 1,
    ACTIONS(827), 1,
      anon_sym_LBRACK,
  [2146] = 1,
    ACTIONS(829), 1,
      anon_sym_LBRACK,
  [2150] = 1,
    ACTIONS(831), 1,
      anon_sym_LBRACK,
  [2154] = 1,
    ACTIONS(833), 1,
      aux_sym__doc_description_token1,
  [2158] = 1,
    ACTIONS(835), 1,
      anon_sym_RBRACK_LF,
  [2162] = 1,
    ACTIONS(837), 1,
      anon_sym_RBRACK_LF,
  [2166] = 1,
    ACTIONS(839), 1,
      sym_email,
  [2170] = 1,
    ACTIONS(841), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2174] = 1,
    ACTIONS(843), 1,
      anon_sym_,
  [2178] = 1,
    ACTIONS(845), 1,
      anon_sym_,
  [2182] = 1,
    ACTIONS(847), 1,
      anon_sym_LF,
  [2186] = 1,
    ACTIONS(849), 1,
      aux_sym_block_title_token1,
  [2190] = 1,
    ACTIONS(851), 1,
      anon_sym_LF,
  [2194] = 1,
    ACTIONS(853), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2198] = 1,
    ACTIONS(855), 1,
      anon_sym_,
  [2202] = 1,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
  [2206] = 1,
    ACTIONS(859), 1,
      aux_sym_mailto_token1,
  [2210] = 1,
    ACTIONS(861), 1,
      anon_sym_GT,
  [2214] = 1,
    ACTIONS(863), 1,
      sym_email,
  [2218] = 1,
    ACTIONS(865), 1,
      aux_sym_block_title_token1,
  [2222] = 1,
    ACTIONS(867), 1,
      aux_sym_link_macro_token1,
  [2226] = 1,
    ACTIONS(869), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2230] = 1,
    ACTIONS(871), 1,
      aux_sym_block_title_token1,
  [2234] = 1,
    ACTIONS(873), 1,
      anon_sym_LF,
  [2238] = 1,
    ACTIONS(875), 1,
      anon_sym_GT,
  [2242] = 1,
    ACTIONS(877), 1,
      sym_email,
  [2246] = 1,
    ACTIONS(879), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2250] = 1,
    ACTIONS(881), 1,
      aux_sym_block_title_token1,
  [2254] = 1,
    ACTIONS(883), 1,
      anon_sym_LF,
  [2258] = 1,
    ACTIONS(885), 1,
      anon_sym_GT,
  [2262] = 1,
    ACTIONS(887), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2266] = 1,
    ACTIONS(889), 1,
      anon_sym_LF,
  [2270] = 1,
    ACTIONS(891), 1,
      aux_sym_block_title_token1,
  [2274] = 1,
    ACTIONS(491), 1,
      anon_sym_LF,
  [2278] = 1,
    ACTIONS(697), 1,
      anon_sym_RBRACK_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(61)] = 0,
  [SMALL_STATE(62)] = 102,
  [SMALL_STATE(63)] = 204,
  [SMALL_STATE(64)] = 310,
  [SMALL_STATE(65)] = 365,
  [SMALL_STATE(66)] = 420,
  [SMALL_STATE(67)] = 473,
  [SMALL_STATE(68)] = 525,
  [SMALL_STATE(69)] = 577,
  [SMALL_STATE(70)] = 629,
  [SMALL_STATE(71)] = 681,
  [SMALL_STATE(72)] = 733,
  [SMALL_STATE(73)] = 785,
  [SMALL_STATE(74)] = 837,
  [SMALL_STATE(75)] = 889,
  [SMALL_STATE(76)] = 941,
  [SMALL_STATE(77)] = 993,
  [SMALL_STATE(78)] = 1045,
  [SMALL_STATE(79)] = 1097,
  [SMALL_STATE(80)] = 1149,
  [SMALL_STATE(81)] = 1201,
  [SMALL_STATE(82)] = 1253,
  [SMALL_STATE(83)] = 1305,
  [SMALL_STATE(84)] = 1357,
  [SMALL_STATE(85)] = 1409,
  [SMALL_STATE(86)] = 1435,
  [SMALL_STATE(87)] = 1458,
  [SMALL_STATE(88)] = 1481,
  [SMALL_STATE(89)] = 1492,
  [SMALL_STATE(90)] = 1503,
  [SMALL_STATE(91)] = 1522,
  [SMALL_STATE(92)] = 1538,
  [SMALL_STATE(93)] = 1551,
  [SMALL_STATE(94)] = 1558,
  [SMALL_STATE(95)] = 1568,
  [SMALL_STATE(96)] = 1578,
  [SMALL_STATE(97)] = 1588,
  [SMALL_STATE(98)] = 1598,
  [SMALL_STATE(99)] = 1608,
  [SMALL_STATE(100)] = 1618,
  [SMALL_STATE(101)] = 1628,
  [SMALL_STATE(102)] = 1638,
  [SMALL_STATE(103)] = 1648,
  [SMALL_STATE(104)] = 1658,
  [SMALL_STATE(105)] = 1668,
  [SMALL_STATE(106)] = 1678,
  [SMALL_STATE(107)] = 1688,
  [SMALL_STATE(108)] = 1698,
  [SMALL_STATE(109)] = 1708,
  [SMALL_STATE(110)] = 1718,
  [SMALL_STATE(111)] = 1728,
  [SMALL_STATE(112)] = 1738,
  [SMALL_STATE(113)] = 1748,
  [SMALL_STATE(114)] = 1754,
  [SMALL_STATE(115)] = 1764,
  [SMALL_STATE(116)] = 1771,
  [SMALL_STATE(117)] = 1778,
  [SMALL_STATE(118)] = 1785,
  [SMALL_STATE(119)] = 1792,
  [SMALL_STATE(120)] = 1799,
  [SMALL_STATE(121)] = 1806,
  [SMALL_STATE(122)] = 1813,
  [SMALL_STATE(123)] = 1820,
  [SMALL_STATE(124)] = 1827,
  [SMALL_STATE(125)] = 1834,
  [SMALL_STATE(126)] = 1841,
  [SMALL_STATE(127)] = 1846,
  [SMALL_STATE(128)] = 1853,
  [SMALL_STATE(129)] = 1860,
  [SMALL_STATE(130)] = 1867,
  [SMALL_STATE(131)] = 1874,
  [SMALL_STATE(132)] = 1879,
  [SMALL_STATE(133)] = 1886,
  [SMALL_STATE(134)] = 1893,
  [SMALL_STATE(135)] = 1900,
  [SMALL_STATE(136)] = 1907,
  [SMALL_STATE(137)] = 1914,
  [SMALL_STATE(138)] = 1921,
  [SMALL_STATE(139)] = 1928,
  [SMALL_STATE(140)] = 1935,
  [SMALL_STATE(141)] = 1942,
  [SMALL_STATE(142)] = 1946,
  [SMALL_STATE(143)] = 1950,
  [SMALL_STATE(144)] = 1954,
  [SMALL_STATE(145)] = 1958,
  [SMALL_STATE(146)] = 1962,
  [SMALL_STATE(147)] = 1966,
  [SMALL_STATE(148)] = 1970,
  [SMALL_STATE(149)] = 1974,
  [SMALL_STATE(150)] = 1978,
  [SMALL_STATE(151)] = 1982,
  [SMALL_STATE(152)] = 1986,
  [SMALL_STATE(153)] = 1990,
  [SMALL_STATE(154)] = 1994,
  [SMALL_STATE(155)] = 1998,
  [SMALL_STATE(156)] = 2002,
  [SMALL_STATE(157)] = 2006,
  [SMALL_STATE(158)] = 2010,
  [SMALL_STATE(159)] = 2014,
  [SMALL_STATE(160)] = 2018,
  [SMALL_STATE(161)] = 2022,
  [SMALL_STATE(162)] = 2026,
  [SMALL_STATE(163)] = 2030,
  [SMALL_STATE(164)] = 2034,
  [SMALL_STATE(165)] = 2038,
  [SMALL_STATE(166)] = 2042,
  [SMALL_STATE(167)] = 2046,
  [SMALL_STATE(168)] = 2050,
  [SMALL_STATE(169)] = 2054,
  [SMALL_STATE(170)] = 2058,
  [SMALL_STATE(171)] = 2062,
  [SMALL_STATE(172)] = 2066,
  [SMALL_STATE(173)] = 2070,
  [SMALL_STATE(174)] = 2074,
  [SMALL_STATE(175)] = 2078,
  [SMALL_STATE(176)] = 2082,
  [SMALL_STATE(177)] = 2086,
  [SMALL_STATE(178)] = 2090,
  [SMALL_STATE(179)] = 2094,
  [SMALL_STATE(180)] = 2098,
  [SMALL_STATE(181)] = 2102,
  [SMALL_STATE(182)] = 2106,
  [SMALL_STATE(183)] = 2110,
  [SMALL_STATE(184)] = 2114,
  [SMALL_STATE(185)] = 2118,
  [SMALL_STATE(186)] = 2122,
  [SMALL_STATE(187)] = 2126,
  [SMALL_STATE(188)] = 2130,
  [SMALL_STATE(189)] = 2134,
  [SMALL_STATE(190)] = 2138,
  [SMALL_STATE(191)] = 2142,
  [SMALL_STATE(192)] = 2146,
  [SMALL_STATE(193)] = 2150,
  [SMALL_STATE(194)] = 2154,
  [SMALL_STATE(195)] = 2158,
  [SMALL_STATE(196)] = 2162,
  [SMALL_STATE(197)] = 2166,
  [SMALL_STATE(198)] = 2170,
  [SMALL_STATE(199)] = 2174,
  [SMALL_STATE(200)] = 2178,
  [SMALL_STATE(201)] = 2182,
  [SMALL_STATE(202)] = 2186,
  [SMALL_STATE(203)] = 2190,
  [SMALL_STATE(204)] = 2194,
  [SMALL_STATE(205)] = 2198,
  [SMALL_STATE(206)] = 2202,
  [SMALL_STATE(207)] = 2206,
  [SMALL_STATE(208)] = 2210,
  [SMALL_STATE(209)] = 2214,
  [SMALL_STATE(210)] = 2218,
  [SMALL_STATE(211)] = 2222,
  [SMALL_STATE(212)] = 2226,
  [SMALL_STATE(213)] = 2230,
  [SMALL_STATE(214)] = 2234,
  [SMALL_STATE(215)] = 2238,
  [SMALL_STATE(216)] = 2242,
  [SMALL_STATE(217)] = 2246,
  [SMALL_STATE(218)] = 2250,
  [SMALL_STATE(219)] = 2254,
  [SMALL_STATE(220)] = 2258,
  [SMALL_STATE(221)] = 2262,
  [SMALL_STATE(222)] = 2266,
  [SMALL_STATE(223)] = 2270,
  [SMALL_STATE(224)] = 2274,
  [SMALL_STATE(225)] = 2278,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(158),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(223),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(221),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(218),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(217),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(213),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(212),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(210),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(204),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(202),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(198),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(182),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(182),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(130),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(139),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(132),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(211),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(207),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(128),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(199),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(90),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_attr, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 10),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 10),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 9),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 9),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 8),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 8),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 7),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 7),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_repo, 6),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_repo, 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype, 6),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doctype, 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 6),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_with_underscores, 5),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_with_underscores, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doc_description, 5, .production_id = 7),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doc_description, 5, .production_id = 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 5),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sectanchors, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sectanchors, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hide_uri_scheme, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hide_uri_scheme, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 8),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 8),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 6),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 6),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 4),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 5),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 6),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 6),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(62),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(132),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(117),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(66),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(211),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(207),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(128),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(121),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(62),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(122),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(123),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(76),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_macro, 1, .production_id = 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_macro, 1, .production_id = 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolinks, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolinks, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 5),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailto, 5),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_macro, 5),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_macro, 5),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailto, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailto, 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_macro, 4, .production_id = 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_macro, 4, .production_id = 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_links, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_links, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 5),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(182),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(182),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(97),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_content, 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_content, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(101),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_start, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_mark, 1),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [857] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
