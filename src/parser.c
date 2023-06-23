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
#define STATE_COUNT 212
#define LARGE_STATE_COUNT 61
#define SYMBOL_COUNT 182
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
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
  anon_sym_ = 22,
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
  anon_sym_link_COLON = 66,
  anon_sym_LT_LT = 67,
  anon_sym_COMMA = 68,
  anon_sym_GT_GT = 69,
  anon_sym_xref_COLON = 70,
  sym_emphasis = 71,
  sym_strong = 72,
  sym_monospace = 73,
  sym_highlight = 74,
  sym_superscript = 75,
  sym_subscript = 76,
  anon_sym_PLUS_PLUS_PLUS = 77,
  anon_sym_pass_COLON_LBRACK = 78,
  anon_sym_LBRACEblank_RBRACE = 79,
  anon_sym_LBRACEempty_RBRACE = 80,
  anon_sym_LBRACEsp_RBRACE = 81,
  anon_sym_LBRACEnbsp_RBRACE = 82,
  anon_sym_LBRACEzwsp_RBRACE = 83,
  anon_sym_LBRACEwj_RBRACE = 84,
  anon_sym_LBRACEapos_RBRACE = 85,
  anon_sym_LBRACEquot_RBRACE = 86,
  anon_sym_LBRACElsquo_RBRACE = 87,
  anon_sym_LBRACErsquo_RBRACE = 88,
  anon_sym_LBRACEldquo_RBRACE = 89,
  anon_sym_LBRACErdquo_RBRACE = 90,
  anon_sym_LBRACEdeg_RBRACE = 91,
  anon_sym_LBRACEplus_RBRACE = 92,
  anon_sym_LBRACEbrvbar_RBRACE = 93,
  anon_sym_LBRACEvbar_RBRACE = 94,
  anon_sym_LBRACEamp_RBRACE = 95,
  anon_sym_LBRACElt_RBRACE = 96,
  anon_sym_LBRACEgt_RBRACE = 97,
  anon_sym_LBRACEstartsb_RBRACE = 98,
  anon_sym_LBRACEendsb_RBRACE = 99,
  anon_sym_LBRACEcaret_RBRACE = 100,
  anon_sym_LBRACEasterisk_RBRACE = 101,
  anon_sym_LBRACEtilde_RBRACE = 102,
  anon_sym_LBRACEbackslash_RBRACE = 103,
  anon_sym_LBRACEbacktick_RBRACE = 104,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 105,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 106,
  anon_sym_LBRACEcpp_RBRACE = 107,
  anon_sym_LBRACEpp_RBRACE = 108,
  sym_document = 109,
  sym__block = 110,
  sym__titled_block = 111,
  sym_block_title = 112,
  sym_title0 = 113,
  sym_author_info = 114,
  sym__doctype = 115,
  sym__doc_description = 116,
  sym__url_repo = 117,
  sym__link_with_underscores = 118,
  sym__hide_uri_scheme = 119,
  sym__sectanchors = 120,
  sym_doc_attr = 121,
  sym__admonitions = 122,
  sym_note = 123,
  sym__note_line = 124,
  sym__note_block = 125,
  sym_tip = 126,
  sym__tip = 127,
  sym__tip_block = 128,
  sym_important = 129,
  sym__important = 130,
  sym__important_block = 131,
  sym_caution = 132,
  sym__caution = 133,
  sym__caution_block = 134,
  sym_warning = 135,
  sym__warning = 136,
  sym__warning_block = 137,
  sym_list = 138,
  sym_list_item = 139,
  sym_list_item_mark = 140,
  sym_list_item_content = 141,
  sym__ordered_list_mark = 142,
  sym_code = 143,
  sym_code_language = 144,
  sym_code_content = 145,
  sym_comment = 146,
  sym_line_breaks = 147,
  sym_page_breaks = 148,
  sym_image = 149,
  sym_table = 150,
  sym_table_start = 151,
  sym_table_content = 152,
  sym_table_end = 153,
  sym_description_list = 154,
  sym_audio = 155,
  sym_audio_url = 156,
  sym_audio_title = 157,
  sym_video = 158,
  sym_paragraph = 159,
  sym__inline_element = 160,
  sym_kbd = 161,
  sym_footnote = 162,
  sym_links = 163,
  sym_autolinks = 164,
  sym_url_macro = 165,
  sym_link_macro = 166,
  sym_xref = 167,
  sym__inline_xref = 168,
  sym__xref = 169,
  sym_xref_url = 170,
  sym_passthrough = 171,
  sym__passthrough_plus = 172,
  sym__passthrough_cmd = 173,
  sym_passthrough_content = 174,
  sym_replacement = 175,
  aux_sym_document_repeat1 = 176,
  aux_sym_title0_repeat1 = 177,
  aux_sym__note_block_repeat1 = 178,
  aux_sym_list_repeat1 = 179,
  aux_sym_table_content_repeat1 = 180,
  aux_sym_paragraph_repeat1 = 181,
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
  [anon_sym_] = " ",
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
  [anon_sym_] = anon_sym_,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 66,
  [211] = 123,
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
      if (eof) ADVANCE(371);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(851);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '0') ADVANCE(517);
      if (lookahead == ':') ADVANCE(622);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(414);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead == 'N') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(419);
      if (lookahead == 'W') ADVANCE(415);
      if (lookahead == '[') ADVANCE(832);
      if (lookahead == ']') ADVANCE(836);
      if (lookahead == '^') ADVANCE(365);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'b') ADVANCE(490);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(491);
      if (lookahead == 'h') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead == 'k') ADVANCE(444);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(441);
      if (lookahead == 'p') ADVANCE(440);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead == 'v') ADVANCE(476);
      if (lookahead == 'x') ADVANCE(502);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '~') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(829);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(830);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(833);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(697);
      if (lookahead == '.') ADVANCE(686);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(666);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(661);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(670);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(672);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(668);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '[') ADVANCE(832);
      if (lookahead == '^') ADVANCE(365);
      if (lookahead == '_') ADVANCE(726);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'k') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(764);
      if (lookahead == 'p') ADVANCE(752);
      if (lookahead == 'x') ADVANCE(774);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '~') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '*') ADVANCE(677);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == '.') ADVANCE(684);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(662);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(662);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '|') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0) ADVANCE(378);
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
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '<') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(594);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '[') ADVANCE(832);
      if (lookahead == '^') ADVANCE(365);
      if (lookahead == '_') ADVANCE(726);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'k') ADVANCE(754);
      if (lookahead == 'l') ADVANCE(764);
      if (lookahead == 'p') ADVANCE(752);
      if (lookahead == 'x') ADVANCE(774);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '~') ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(611);
      if (lookahead != 0) ADVANCE(612);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(2);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(825);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(388);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(390);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(665);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(665);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(660);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(660);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(394);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(669);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(669);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(671);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(671);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(667);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(667);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(834);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(615);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '*') ADVANCE(675);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(721);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(698);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'N') ADVANCE(702);
      if (lookahead == 'T') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(699);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '_') ADVANCE(723);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead == 'f') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead == 'k') ADVANCE(704);
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead == 'v') ADVANCE(706);
      if (lookahead == 'x') ADVANCE(709);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '~') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '*') ADVANCE(675);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(584);
      if (lookahead == ':') ADVANCE(623);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(529);
      if (lookahead == 'I') ADVANCE(537);
      if (lookahead == 'N') ADVANCE(542);
      if (lookahead == 'T') ADVANCE(534);
      if (lookahead == 'W') ADVANCE(530);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '_') ADVANCE(596);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'f') ADVANCE(574);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead == 'k') ADVANCE(556);
      if (lookahead == 'l') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead == 'v') ADVANCE(568);
      if (lookahead == 'x') ADVANCE(578);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '~') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(857);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(857);
      if (lookahead == ']') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(856);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(677);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == '.') ADVANCE(684);
      if (lookahead == '0') ADVANCE(722);
      if (lookahead == 'C') ADVANCE(712);
      if (lookahead == 'I') ADVANCE(715);
      if (lookahead == 'N') ADVANCE(716);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == 'W') ADVANCE(713);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(718);
      if (lookahead == 'v') ADVANCE(717);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(722);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == '+') ADVANCE(862);
      END_STATE();
    case 55:
      if (lookahead == '+') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == '.') ADVANCE(686);
      END_STATE();
    case 57:
      if (lookahead == ',') ADVANCE(851);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '[') ADVANCE(832);
      if (lookahead == ']') ADVANCE(836);
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == ',') ADVANCE(696);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == 'W') ADVANCE(104);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '.') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(317);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(291);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(279);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(686);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '<') ADVANCE(850);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '>') ADVANCE(852);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'g') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 'q') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(212);
      if (lookahead == 'z') ADVANCE(322);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(835);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(831);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(838);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '[') ADVANCE(840);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '[') ADVANCE(863);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '[') ADVANCE(843);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(368);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(835);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(831);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(838);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 96:
      if (lookahead == '<') ADVANCE(849);
      END_STATE();
    case 97:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 99:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 100:
      if (lookahead == '>') ADVANCE(852);
      END_STATE();
    case 101:
      if (lookahead == '>') ADVANCE(397);
      if (lookahead == '[') ADVANCE(832);
      if (lookahead == ']') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 102:
      if (lookahead == '@') ADVANCE(361);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 105:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(136);
      END_STATE();
    case 107:
      if (lookahead == 'G') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'M') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(109);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(126);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(137);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'P') ADVANCE(117);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(113);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(106);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 128:
      if (lookahead == '[') ADVANCE(840);
      END_STATE();
    case 129:
      if (lookahead == '[') ADVANCE(863);
      END_STATE();
    case 130:
      if (lookahead == '[') ADVANCE(843);
      END_STATE();
    case 131:
      if (lookahead == '[') ADVANCE(356);
      END_STATE();
    case 132:
      if (lookahead == ']') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(132)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 133:
      if (lookahead == ']') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(133)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(844);
      END_STATE();
    case 134:
      if (lookahead == ']') ADVANCE(693);
      END_STATE();
    case 135:
      if (lookahead == ']') ADVANCE(5);
      END_STATE();
    case 136:
      if (lookahead == ']') ADVANCE(6);
      END_STATE();
    case 137:
      if (lookahead == ']') ADVANCE(7);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(8);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 140:
      if (lookahead == '^') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(845);
      END_STATE();
    case 143:
      if (lookahead == '`') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'g') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 'q') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'v') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(212);
      if (lookahead == 'z') ADVANCE(322);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(299);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(342);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(349);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(247);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'w') ADVANCE(241);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 212:
      if (lookahead == 'j') ADVANCE(329);
      END_STATE();
    case 213:
      if (lookahead == 'k') ADVANCE(288);
      END_STATE();
    case 214:
      if (lookahead == 'k') ADVANCE(603);
      END_STATE();
    case 215:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 216:
      if (lookahead == 'k') ADVANCE(339);
      END_STATE();
    case 217:
      if (lookahead == 'k') ADVANCE(350);
      END_STATE();
    case 218:
      if (lookahead == 'k') ADVANCE(351);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 220:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 221:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 227:
      if (lookahead == 'm') ADVANCE(261);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 234:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 236:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 237:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 238:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 239:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 259:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 261:
      if (lookahead == 'p') ADVANCE(330);
      END_STATE();
    case 262:
      if (lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 263:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 264:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 265:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(338);
      END_STATE();
    case 267:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 268:
      if (lookahead == 'q') ADVANCE(313);
      END_STATE();
    case 269:
      if (lookahead == 'q') ADVANCE(316);
      END_STATE();
    case 270:
      if (lookahead == 'q') ADVANCE(318);
      END_STATE();
    case 271:
      if (lookahead == 'q') ADVANCE(319);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(620);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 312:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 313:
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 320:
      if (lookahead == 'v') ADVANCE(159);
      END_STATE();
    case 321:
      if (lookahead == 'w') ADVANCE(206);
      END_STATE();
    case 322:
      if (lookahead == 'w') ADVANCE(300);
      END_STATE();
    case 323:
      if (lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 324:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 325:
      if (lookahead == '}') ADVANCE(882);
      END_STATE();
    case 326:
      if (lookahead == '}') ADVANCE(881);
      END_STATE();
    case 327:
      if (lookahead == '}') ADVANCE(893);
      END_STATE();
    case 328:
      if (lookahead == '}') ADVANCE(866);
      END_STATE();
    case 329:
      if (lookahead == '}') ADVANCE(869);
      END_STATE();
    case 330:
      if (lookahead == '}') ADVANCE(880);
      END_STATE();
    case 331:
      if (lookahead == '}') ADVANCE(892);
      END_STATE();
    case 332:
      if (lookahead == '}') ADVANCE(876);
      END_STATE();
    case 333:
      if (lookahead == '}') ADVANCE(870);
      END_STATE();
    case 334:
      if (lookahead == '}') ADVANCE(867);
      END_STATE();
    case 335:
      if (lookahead == '}') ADVANCE(877);
      END_STATE();
    case 336:
      if (lookahead == '}') ADVANCE(871);
      END_STATE();
    case 337:
      if (lookahead == '}') ADVANCE(879);
      END_STATE();
    case 338:
      if (lookahead == '}') ADVANCE(868);
      END_STATE();
    case 339:
      if (lookahead == '}') ADVANCE(864);
      END_STATE();
    case 340:
      if (lookahead == '}') ADVANCE(885);
      END_STATE();
    case 341:
      if (lookahead == '}') ADVANCE(865);
      END_STATE();
    case 342:
      if (lookahead == '}') ADVANCE(884);
      END_STATE();
    case 343:
      if (lookahead == '}') ADVANCE(874);
      END_STATE();
    case 344:
      if (lookahead == '}') ADVANCE(872);
      END_STATE();
    case 345:
      if (lookahead == '}') ADVANCE(875);
      END_STATE();
    case 346:
      if (lookahead == '}') ADVANCE(873);
      END_STATE();
    case 347:
      if (lookahead == '}') ADVANCE(887);
      END_STATE();
    case 348:
      if (lookahead == '}') ADVANCE(878);
      END_STATE();
    case 349:
      if (lookahead == '}') ADVANCE(883);
      END_STATE();
    case 350:
      if (lookahead == '}') ADVANCE(886);
      END_STATE();
    case 351:
      if (lookahead == '}') ADVANCE(889);
      END_STATE();
    case 352:
      if (lookahead == '}') ADVANCE(888);
      END_STATE();
    case 353:
      if (lookahead == '}') ADVANCE(890);
      END_STATE();
    case 354:
      if (lookahead == '}') ADVANCE(891);
      END_STATE();
    case 355:
      if (lookahead == '~') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 356:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(134);
      END_STATE();
    case 357:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(357)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 358:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 359:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      END_STATE();
    case 360:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 361:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 362:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 363:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 364:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 365:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 366:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 367:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 368:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 369:
      if (eof) ADVANCE(371);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '*') ADVANCE(675);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(721);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(698);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'N') ADVANCE(702);
      if (lookahead == 'T') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(699);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '_') ADVANCE(723);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead == 'f') ADVANCE(708);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead == 'k') ADVANCE(704);
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead == 'p') ADVANCE(703);
      if (lookahead == 'v') ADVANCE(706);
      if (lookahead == 'x') ADVANCE(709);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '~') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(711);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 370:
      if (eof) ADVANCE(371);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '*') ADVANCE(675);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(584);
      if (lookahead == ':') ADVANCE(623);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 'C') ADVANCE(529);
      if (lookahead == 'I') ADVANCE(537);
      if (lookahead == 'N') ADVANCE(542);
      if (lookahead == 'T') ADVANCE(534);
      if (lookahead == 'W') ADVANCE(530);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '_') ADVANCE(596);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == 'f') ADVANCE(574);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead == 'k') ADVANCE(556);
      if (lookahead == 'l') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead == 'v') ADVANCE(568);
      if (lookahead == 'x') ADVANCE(578);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '~') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(684);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(833);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(373);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(373);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(373);
      if (lookahead == '=') ADVANCE(375);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(373);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead == '|') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '|') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(378);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(378);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_title0_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_title1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_title1);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(387);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_title5);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(850);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(852);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'A') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'A') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'A') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'E') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'G') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'I') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'I') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'I') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'M') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'N') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'N') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'N') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'N') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'O') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'O') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'O') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'P') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'P') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'R') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'U') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'a') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'a') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'a') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'a') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'a') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'b') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'c') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 'o') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'f') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'g') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'g') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'h') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'k') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'k') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(439);
      if (lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'p') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'p') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'p') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead == 'u') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 's') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 's') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 's') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 's') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 't') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 't') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == 'y') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(630);
      if (lookahead == '.') ADVANCE(597);
      if (lookahead == '_') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(630);
      if (lookahead == '.') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(648);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(657);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(658);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'E') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'G') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'P') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'P') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'g') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 's') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 's') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(594);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(597);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '_') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(597);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '.') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_article);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_article);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_book);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_book);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_manpage);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_manpage);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_description);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(612);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__doc_description_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_link_DASHwith_DASHunderscores);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_link_DASHwith_DASHunderscores);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_hide_DASHuri_DASHscheme);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_sectanchors);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead == '.') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_attr_mark);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_attr_mark);
      if (lookahead == '.') ADVANCE(686);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(683);
      if (lookahead == '-') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(682);
      if (lookahead == '-') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(674);
      if (lookahead == '-') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '*') ADVANCE(683);
      if (lookahead == '-') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '_') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'c') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'c') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'd') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'h') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'h') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'm') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'p') ADVANCE(645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 't') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'u') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'u') ADVANCE(649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'w') ADVANCE(641);
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
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
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
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(679);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(683);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '.') ADVANCE(688);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(683);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(673);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(679);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(682);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(683);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(674);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(695);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'A') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'A') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'I') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'M') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'O') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'm') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(685);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(722);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(690);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '_') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'E') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'G') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'I') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'P') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'P') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'g') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 's') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 's') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 't') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 't') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(779);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'g') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(824);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(827);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(827);
      if (lookahead != 0) ADVANCE(828);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(826);
      if (lookahead != 0) ADVANCE(828);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(839);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead == '_') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_autolinks_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_link_COLON);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(25);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(857);
      if (lookahead == ']') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(355);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 369},
  [2] = {.lex_state = 369},
  [3] = {.lex_state = 369},
  [4] = {.lex_state = 370},
  [5] = {.lex_state = 370},
  [6] = {.lex_state = 370},
  [7] = {.lex_state = 370},
  [8] = {.lex_state = 370},
  [9] = {.lex_state = 370},
  [10] = {.lex_state = 370},
  [11] = {.lex_state = 370},
  [12] = {.lex_state = 370},
  [13] = {.lex_state = 370},
  [14] = {.lex_state = 370},
  [15] = {.lex_state = 370},
  [16] = {.lex_state = 370},
  [17] = {.lex_state = 370},
  [18] = {.lex_state = 370},
  [19] = {.lex_state = 370},
  [20] = {.lex_state = 369},
  [21] = {.lex_state = 369},
  [22] = {.lex_state = 369},
  [23] = {.lex_state = 369},
  [24] = {.lex_state = 369},
  [25] = {.lex_state = 369},
  [26] = {.lex_state = 369},
  [27] = {.lex_state = 369},
  [28] = {.lex_state = 369},
  [29] = {.lex_state = 369},
  [30] = {.lex_state = 369},
  [31] = {.lex_state = 369},
  [32] = {.lex_state = 369},
  [33] = {.lex_state = 369},
  [34] = {.lex_state = 369},
  [35] = {.lex_state = 369},
  [36] = {.lex_state = 369},
  [37] = {.lex_state = 369},
  [38] = {.lex_state = 369},
  [39] = {.lex_state = 369},
  [40] = {.lex_state = 369},
  [41] = {.lex_state = 369},
  [42] = {.lex_state = 369},
  [43] = {.lex_state = 369},
  [44] = {.lex_state = 369},
  [45] = {.lex_state = 369},
  [46] = {.lex_state = 369},
  [47] = {.lex_state = 369},
  [48] = {.lex_state = 369},
  [49] = {.lex_state = 369},
  [50] = {.lex_state = 369},
  [51] = {.lex_state = 369},
  [52] = {.lex_state = 369},
  [53] = {.lex_state = 369},
  [54] = {.lex_state = 369},
  [55] = {.lex_state = 369},
  [56] = {.lex_state = 369},
  [57] = {.lex_state = 369},
  [58] = {.lex_state = 369},
  [59] = {.lex_state = 369},
  [60] = {.lex_state = 369},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 53},
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
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 53},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 57},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 57},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 101},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 101},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 101},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 101},
  [103] = {.lex_state = 101},
  [104] = {.lex_state = 101},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 57},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 132},
  [116] = {.lex_state = 357},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 57},
  [119] = {.lex_state = 357},
  [120] = {.lex_state = 357},
  [121] = {.lex_state = 101},
  [122] = {.lex_state = 369},
  [123] = {.lex_state = 57},
  [124] = {.lex_state = 357},
  [125] = {.lex_state = 133},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 369},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 101},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 101},
  [133] = {.lex_state = 357},
  [134] = {.lex_state = 101},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 101},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 24},
  [140] = {.lex_state = 369},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 101},
  [143] = {.lex_state = 358},
  [144] = {.lex_state = 369},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 357},
  [147] = {.lex_state = 24},
  [148] = {.lex_state = 45},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 57},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 45},
  [160] = {.lex_state = 369},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 11},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 369},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 358},
  [176] = {.lex_state = 22},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 357},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 57},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 358},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 24},
  [191] = {.lex_state = 369},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 827},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 45},
  [196] = {.lex_state = 57},
  [197] = {.lex_state = 11},
  [198] = {.lex_state = 101},
  [199] = {.lex_state = 22},
  [200] = {.lex_state = 57},
  [201] = {.lex_state = 11},
  [202] = {.lex_state = 22},
  [203] = {.lex_state = 57},
  [204] = {.lex_state = 22},
  [205] = {.lex_state = 57},
  [206] = {.lex_state = 22},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 57},
  [209] = {.lex_state = 22},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 369},
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
    [anon_sym_link_DASHwith_DASHunderscores] = ACTIONS(1),
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
    [sym_document] = STATE(161),
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(63),
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
    [sym_list_item] = STATE(84),
    [sym_list_item_mark] = STATE(159),
    [sym__ordered_list_mark] = STATE(195),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(89),
    [sym_description_list] = STATE(2),
    [sym_audio] = STATE(2),
    [sym_video] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline_element] = STATE(61),
    [sym_kbd] = STATE(61),
    [sym_footnote] = STATE(61),
    [sym_links] = STATE(61),
    [sym_autolinks] = STATE(65),
    [sym_url_macro] = STATE(80),
    [sym_link_macro] = STATE(80),
    [sym_xref] = STATE(61),
    [sym__inline_xref] = STATE(67),
    [sym__xref] = STATE(82),
    [sym_passthrough] = STATE(61),
    [sym__passthrough_plus] = STATE(81),
    [sym__passthrough_cmd] = STATE(81),
    [sym_replacement] = STATE(61),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(84),
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
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(63),
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
    [sym_list_item] = STATE(84),
    [sym_list_item_mark] = STATE(159),
    [sym__ordered_list_mark] = STATE(195),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(89),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(61),
    [sym_kbd] = STATE(61),
    [sym_footnote] = STATE(61),
    [sym_links] = STATE(61),
    [sym_autolinks] = STATE(65),
    [sym_url_macro] = STATE(80),
    [sym_link_macro] = STATE(80),
    [sym_xref] = STATE(61),
    [sym__inline_xref] = STATE(67),
    [sym__xref] = STATE(82),
    [sym_passthrough] = STATE(61),
    [sym__passthrough_plus] = STATE(81),
    [sym__passthrough_cmd] = STATE(81),
    [sym_replacement] = STATE(61),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(84),
    [aux_sym_paragraph_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(5),
    [aux_sym_title0_token1] = ACTIONS(7),
    [sym_title1] = ACTIONS(77),
    [sym_title2] = ACTIONS(77),
    [sym_title3] = ACTIONS(77),
    [sym_title4] = ACTIONS(77),
    [sym_title5] = ACTIONS(77),
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
  [3] = {
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(63),
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
    [sym_list_item] = STATE(84),
    [sym_list_item_mark] = STATE(159),
    [sym__ordered_list_mark] = STATE(195),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(89),
    [sym_description_list] = STATE(3),
    [sym_audio] = STATE(3),
    [sym_video] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline_element] = STATE(61),
    [sym_kbd] = STATE(61),
    [sym_footnote] = STATE(61),
    [sym_links] = STATE(61),
    [sym_autolinks] = STATE(65),
    [sym_url_macro] = STATE(80),
    [sym_link_macro] = STATE(80),
    [sym_xref] = STATE(61),
    [sym__inline_xref] = STATE(67),
    [sym__xref] = STATE(82),
    [sym_passthrough] = STATE(61),
    [sym__passthrough_plus] = STATE(81),
    [sym__passthrough_cmd] = STATE(81),
    [sym_replacement] = STATE(61),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(84),
    [aux_sym_paragraph_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(81),
    [aux_sym_title0_token1] = ACTIONS(84),
    [sym_title1] = ACTIONS(87),
    [sym_title2] = ACTIONS(87),
    [sym_title3] = ACTIONS(87),
    [sym_title4] = ACTIONS(87),
    [sym_title5] = ACTIONS(87),
    [anon_sym_NOTE_COLON] = ACTIONS(90),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(93),
    [anon_sym_TIP_COLON] = ACTIONS(96),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(99),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(102),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(105),
    [anon_sym_CAUTION_COLON] = ACTIONS(108),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(111),
    [anon_sym_WARNING_COLON] = ACTIONS(114),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(117),
    [sym__unordered_list_mark] = ACTIONS(120),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(120),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(123),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(120),
    [sym__checklist_mark] = ACTIONS(120),
    [aux_sym_code_token1] = ACTIONS(126),
    [aux_sym_code_language_token1] = ACTIONS(129),
    [anon_sym_SLASH_SLASH] = ACTIONS(132),
    [aux_sym_line_breaks_token1] = ACTIONS(135),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(138),
    [anon_sym_image_COLON_COLON] = ACTIONS(141),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(144),
    [anon_sym_audio_COLON_COLON] = ACTIONS(147),
    [anon_sym_video_COLON_COLON] = ACTIONS(150),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(153),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(156),
    [aux_sym_autolinks_token1] = ACTIONS(159),
    [anon_sym_link_COLON] = ACTIONS(162),
    [anon_sym_LT_LT] = ACTIONS(165),
    [anon_sym_xref_COLON] = ACTIONS(168),
    [sym_emphasis] = ACTIONS(171),
    [sym_strong] = ACTIONS(171),
    [sym_monospace] = ACTIONS(174),
    [sym_highlight] = ACTIONS(174),
    [sym_superscript] = ACTIONS(174),
    [sym_subscript] = ACTIONS(174),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(177),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(180),
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
  [4] = {
    [sym_author_info] = STATE(12),
    [sym__doctype] = STATE(12),
    [sym__doc_description] = STATE(12),
    [sym__url_repo] = STATE(12),
    [sym__link_with_underscores] = STATE(12),
    [sym__hide_uri_scheme] = STATE(12),
    [sym__sectanchors] = STATE(12),
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
    [sym_author_info] = STATE(12),
    [sym__doctype] = STATE(12),
    [sym__doc_description] = STATE(12),
    [sym__url_repo] = STATE(12),
    [sym__link_with_underscores] = STATE(12),
    [sym__hide_uri_scheme] = STATE(12),
    [sym__sectanchors] = STATE(12),
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
    [sym_author_info] = STATE(12),
    [sym__doctype] = STATE(12),
    [sym__doc_description] = STATE(12),
    [sym__url_repo] = STATE(12),
    [sym__link_with_underscores] = STATE(12),
    [sym__hide_uri_scheme] = STATE(12),
    [sym__sectanchors] = STATE(12),
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
    [sym_name] = ACTIONS(258),
    [sym_attr_mark] = ACTIONS(258),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(258),
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
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(422),
    [aux_sym_title0_token1] = ACTIONS(420),
    [sym_title1] = ACTIONS(420),
    [sym_title2] = ACTIONS(420),
    [sym_title3] = ACTIONS(420),
    [sym_title4] = ACTIONS(420),
    [sym_title5] = ACTIONS(420),
    [anon_sym_NOTE_COLON] = ACTIONS(420),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(420),
    [anon_sym_TIP_COLON] = ACTIONS(420),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(420),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(420),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(420),
    [anon_sym_CAUTION_COLON] = ACTIONS(420),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(420),
    [anon_sym_WARNING_COLON] = ACTIONS(420),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(420),
    [sym__unordered_list_mark] = ACTIONS(422),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(422),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(420),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(422),
    [sym__checklist_mark] = ACTIONS(422),
    [aux_sym_code_token1] = ACTIONS(420),
    [aux_sym_code_language_token1] = ACTIONS(422),
    [anon_sym_SLASH_SLASH] = ACTIONS(420),
    [aux_sym_line_breaks_token1] = ACTIONS(420),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(420),
    [anon_sym_image_COLON_COLON] = ACTIONS(420),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(420),
    [anon_sym_audio_COLON_COLON] = ACTIONS(420),
    [anon_sym_video_COLON_COLON] = ACTIONS(420),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(420),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(420),
    [aux_sym_autolinks_token1] = ACTIONS(420),
    [anon_sym_link_COLON] = ACTIONS(422),
    [anon_sym_LT_LT] = ACTIONS(422),
    [anon_sym_xref_COLON] = ACTIONS(422),
    [sym_emphasis] = ACTIONS(422),
    [sym_strong] = ACTIONS(422),
    [sym_monospace] = ACTIONS(420),
    [sym_highlight] = ACTIONS(420),
    [sym_superscript] = ACTIONS(420),
    [sym_subscript] = ACTIONS(420),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(420),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(420),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(420),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(420),
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
    ACTIONS(426), 1,
      anon_sym_LF_LF,
    ACTIONS(428), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(430), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(432), 1,
      aux_sym_autolinks_token1,
    ACTIONS(434), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(436), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(65), 1,
      sym_autolinks,
    STATE(67), 1,
      sym__inline_xref,
    STATE(82), 1,
      sym__xref,
    STATE(80), 2,
      sym_url_macro,
      sym_link_macro,
    STATE(81), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(424), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
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
    ACTIONS(438), 30,
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
    ACTIONS(443), 1,
      anon_sym_LF_LF,
    ACTIONS(445), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(448), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(451), 1,
      aux_sym_autolinks_token1,
    ACTIONS(454), 1,
      anon_sym_link_COLON,
    ACTIONS(457), 1,
      anon_sym_LT_LT,
    ACTIONS(460), 1,
      anon_sym_xref_COLON,
    ACTIONS(463), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(466), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(65), 1,
      sym_autolinks,
    STATE(67), 1,
      sym__inline_xref,
    STATE(82), 1,
      sym__xref,
    STATE(80), 2,
      sym_url_macro,
      sym_link_macro,
    STATE(81), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(440), 7,
      aux_sym_code_language_token1,
      sym_emphasis,
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
    ACTIONS(469), 30,
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
    ACTIONS(472), 1,
      aux_sym_code_language_token1,
    STATE(89), 1,
      sym_table_start,
    STATE(159), 1,
      sym_list_item_mark,
    STATE(195), 1,
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
    STATE(84), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(33), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
    STATE(45), 13,
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
    ACTIONS(476), 1,
      anon_sym_COLON_COLON,
    ACTIONS(478), 1,
      anon_sym_LF_LF,
    ACTIONS(474), 45,
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
  [352] = 3,
    ACTIONS(482), 1,
      anon_sym_LBRACK,
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
  [406] = 2,
    ACTIONS(488), 1,
      anon_sym_LF_LF,
    ACTIONS(486), 46,
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
  [458] = 2,
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
  [509] = 2,
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
  [560] = 2,
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
  [611] = 2,
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
  [662] = 2,
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
  [713] = 2,
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
  [764] = 2,
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
  [815] = 2,
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
  [866] = 2,
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
  [917] = 2,
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
  [968] = 2,
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
  [1019] = 2,
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
  [1070] = 2,
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
  [1121] = 2,
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
  [1172] = 2,
    ACTIONS(548), 1,
      anon_sym_LF_LF,
    ACTIONS(546), 45,
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
  [1274] = 2,
    ACTIONS(552), 3,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
      aux_sym_code_language_token1,
    ACTIONS(550), 18,
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
    ACTIONS(554), 1,
      anon_sym_LF,
    STATE(159), 1,
      sym_list_item_mark,
    STATE(195), 1,
      sym__ordered_list_mark,
    STATE(85), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(31), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1321] = 5,
    ACTIONS(556), 1,
      anon_sym_LF,
    STATE(159), 1,
      sym_list_item_mark,
    STATE(195), 1,
      sym__ordered_list_mark,
    STATE(85), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(558), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1342] = 6,
    ACTIONS(561), 1,
      anon_sym_doctype,
    ACTIONS(563), 1,
      anon_sym_description,
    ACTIONS(565), 1,
      anon_sym_url_DASHrepo,
    ACTIONS(567), 1,
      anon_sym_link_DASHwith_DASHunderscores,
    ACTIONS(569), 1,
      anon_sym_hide_DASHuri_DASHscheme,
    ACTIONS(571), 1,
      anon_sym_sectanchors,
  [1361] = 2,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1372] = 2,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1383] = 5,
    ACTIONS(581), 1,
      aux_sym_block_title_token1,
    ACTIONS(583), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(21), 1,
      sym_table_end,
    STATE(98), 1,
      aux_sym_table_content_repeat1,
    STATE(126), 1,
      sym_table_content,
  [1399] = 4,
    ACTIONS(585), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(587), 1,
      aux_sym__note_block_token1,
    STATE(92), 1,
      aux_sym__note_block_repeat1,
    STATE(184), 1,
      sym_code_content,
  [1412] = 1,
    ACTIONS(589), 4,
      anon_sym_article,
      anon_sym_book,
      anon_sym_manpage,
      anon_sym_inline,
  [1419] = 3,
    ACTIONS(591), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(593), 1,
      aux_sym__note_block_token1,
    STATE(99), 1,
      aux_sym__note_block_repeat1,
  [1429] = 3,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 1,
      aux_sym_audio_url_token1,
    STATE(149), 1,
      sym_audio_url,
  [1439] = 3,
    ACTIONS(599), 1,
      aux_sym_block_title_token1,
    ACTIONS(602), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(94), 1,
      aux_sym_table_content_repeat1,
  [1449] = 3,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    ACTIONS(606), 1,
      aux_sym_audio_url_token1,
    STATE(168), 1,
      sym_audio_title,
  [1459] = 3,
    ACTIONS(608), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(610), 1,
      aux_sym__note_block_token1,
    STATE(108), 1,
      aux_sym__note_block_repeat1,
  [1469] = 3,
    ACTIONS(606), 1,
      aux_sym_audio_url_token1,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(164), 1,
      sym_audio_title,
  [1479] = 3,
    ACTIONS(614), 1,
      aux_sym_block_title_token1,
    ACTIONS(616), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(94), 1,
      aux_sym_table_content_repeat1,
  [1489] = 3,
    ACTIONS(618), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(620), 1,
      aux_sym__note_block_token1,
    STATE(99), 1,
      aux_sym__note_block_repeat1,
  [1499] = 3,
    ACTIONS(593), 1,
      aux_sym__note_block_token1,
    ACTIONS(623), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(99), 1,
      aux_sym__note_block_repeat1,
  [1509] = 3,
    ACTIONS(625), 1,
      anon_sym_LT,
    ACTIONS(627), 1,
      anon_sym_LF,
    ACTIONS(629), 1,
      sym_name,
  [1519] = 3,
    ACTIONS(606), 1,
      aux_sym_audio_url_token1,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_audio_title,
  [1529] = 3,
    ACTIONS(606), 1,
      aux_sym_audio_url_token1,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_audio_title,
  [1539] = 3,
    ACTIONS(597), 1,
      aux_sym_audio_url_token1,
    ACTIONS(635), 1,
      anon_sym_LBRACK,
    STATE(174), 1,
      sym_audio_url,
  [1549] = 3,
    ACTIONS(637), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(639), 1,
      aux_sym__note_block_token1,
    STATE(100), 1,
      aux_sym__note_block_repeat1,
  [1559] = 3,
    ACTIONS(641), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(643), 1,
      aux_sym__note_block_token1,
    STATE(113), 1,
      aux_sym__note_block_repeat1,
  [1569] = 3,
    ACTIONS(645), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(647), 1,
      aux_sym__note_block_token1,
    STATE(112), 1,
      aux_sym__note_block_repeat1,
  [1579] = 3,
    ACTIONS(593), 1,
      aux_sym__note_block_token1,
    ACTIONS(649), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(99), 1,
      aux_sym__note_block_repeat1,
  [1589] = 3,
    ACTIONS(651), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(653), 1,
      aux_sym__note_block_token1,
    STATE(110), 1,
      aux_sym__note_block_repeat1,
  [1599] = 3,
    ACTIONS(593), 1,
      aux_sym__note_block_token1,
    ACTIONS(655), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(99), 1,
      aux_sym__note_block_repeat1,
  [1609] = 1,
    ACTIONS(657), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1615] = 3,
    ACTIONS(593), 1,
      aux_sym__note_block_token1,
    ACTIONS(659), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(99), 1,
      aux_sym__note_block_repeat1,
  [1625] = 3,
    ACTIONS(593), 1,
      aux_sym__note_block_token1,
    ACTIONS(661), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(99), 1,
      aux_sym__note_block_repeat1,
  [1635] = 3,
    ACTIONS(663), 1,
      anon_sym_LT,
    ACTIONS(665), 1,
      anon_sym_LF,
    ACTIONS(667), 1,
      sym_name,
  [1645] = 2,
    ACTIONS(669), 1,
      anon_sym_RBRACK,
    ACTIONS(671), 1,
      sym_kbd_content,
  [1652] = 2,
    ACTIONS(673), 1,
      aux_sym_code_language_token1,
    STATE(194), 1,
      sym_passthrough_content,
  [1659] = 1,
    ACTIONS(675), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [1664] = 2,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_GT_GT,
  [1671] = 2,
    ACTIONS(673), 1,
      aux_sym_code_language_token1,
    STATE(145), 1,
      sym_passthrough_content,
  [1678] = 2,
    ACTIONS(681), 1,
      aux_sym_code_language_token1,
    STATE(150), 1,
      sym_xref_url,
  [1685] = 2,
    ACTIONS(683), 1,
      aux_sym_audio_url_token1,
    STATE(160), 1,
      sym_audio_title,
  [1692] = 2,
    ACTIONS(685), 1,
      aux_sym_autolinks_token1,
    STATE(201), 1,
      sym_autolinks,
  [1699] = 1,
    ACTIONS(687), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1704] = 2,
    ACTIONS(681), 1,
      aux_sym_code_language_token1,
    STATE(118), 1,
      sym_xref_url,
  [1711] = 2,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
    ACTIONS(691), 1,
      sym_footnote_content,
  [1718] = 2,
    ACTIONS(693), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(41), 1,
      sym_table_end,
  [1725] = 2,
    ACTIONS(685), 1,
      aux_sym_autolinks_token1,
    STATE(180), 1,
      sym_autolinks,
  [1732] = 2,
    ACTIONS(695), 1,
      aux_sym_block_title_token1,
    STATE(88), 1,
      sym_list_item_content,
  [1739] = 1,
    ACTIONS(697), 2,
      aux_sym_block_title_token1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1744] = 2,
    ACTIONS(597), 1,
      aux_sym_audio_url_token1,
    STATE(137), 1,
      sym_audio_url,
  [1751] = 2,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(701), 1,
      anon_sym_LF,
  [1758] = 2,
    ACTIONS(606), 1,
      aux_sym_audio_url_token1,
    STATE(170), 1,
      sym_audio_title,
  [1765] = 2,
    ACTIONS(703), 1,
      aux_sym_code_language_token1,
    STATE(140), 1,
      sym_code_language,
  [1772] = 2,
    ACTIONS(606), 1,
      aux_sym_audio_url_token1,
    STATE(171), 1,
      sym_audio_title,
  [1779] = 1,
    ACTIONS(705), 1,
      anon_sym_LF,
  [1783] = 1,
    ACTIONS(707), 1,
      anon_sym_GT,
  [1787] = 1,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
  [1791] = 1,
    ACTIONS(711), 1,
      anon_sym_LBRACK,
  [1795] = 1,
    ACTIONS(713), 1,
      aux_sym__doc_description_token1,
  [1799] = 1,
    ACTIONS(715), 1,
      anon_sym_RBRACK_LF,
  [1803] = 1,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
  [1807] = 1,
    ACTIONS(719), 1,
      anon_sym_GT,
  [1811] = 1,
    ACTIONS(721), 1,
      sym_email,
  [1815] = 1,
    ACTIONS(723), 1,
      anon_sym_RBRACK_LF,
  [1819] = 1,
    ACTIONS(725), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1823] = 1,
    ACTIONS(727), 1,
      aux_sym_code_language_token1,
  [1827] = 1,
    ACTIONS(729), 1,
      aux_sym__doc_description_token1,
  [1831] = 1,
    ACTIONS(731), 1,
      anon_sym_,
  [1835] = 1,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
  [1839] = 1,
    ACTIONS(735), 1,
      anon_sym_LBRACK,
  [1843] = 1,
    ACTIONS(737), 1,
      anon_sym_LF,
  [1847] = 1,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
  [1851] = 1,
    ACTIONS(741), 1,
      anon_sym_LF,
  [1855] = 1,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
  [1859] = 1,
    ACTIONS(745), 1,
      anon_sym_LF,
  [1863] = 1,
    ACTIONS(747), 1,
      anon_sym_LF,
  [1867] = 1,
    ACTIONS(749), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1871] = 1,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
  [1875] = 1,
    ACTIONS(753), 1,
      anon_sym_,
  [1879] = 1,
    ACTIONS(755), 1,
      anon_sym_RBRACK_LF,
  [1883] = 1,
    ACTIONS(757), 1,
      ts_builtin_sym_end,
  [1887] = 1,
    ACTIONS(759), 1,
      anon_sym_LF,
  [1891] = 1,
    ACTIONS(761), 1,
      anon_sym_LF,
  [1895] = 1,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
  [1899] = 1,
    ACTIONS(765), 1,
      anon_sym_RBRACK,
  [1903] = 1,
    ACTIONS(767), 1,
      anon_sym_LF,
  [1907] = 1,
    ACTIONS(769), 1,
      anon_sym_LF,
  [1911] = 1,
    ACTIONS(771), 1,
      anon_sym_RBRACK,
  [1915] = 1,
    ACTIONS(773), 1,
      anon_sym_RBRACK,
  [1919] = 1,
    ACTIONS(775), 1,
      anon_sym_GT_GT,
  [1923] = 1,
    ACTIONS(777), 1,
      anon_sym_RBRACK,
  [1927] = 1,
    ACTIONS(779), 1,
      anon_sym_LBRACK,
  [1931] = 1,
    ACTIONS(781), 1,
      anon_sym_LF,
  [1935] = 1,
    ACTIONS(783), 1,
      anon_sym_LBRACK,
  [1939] = 1,
    ACTIONS(785), 1,
      sym_email,
  [1943] = 1,
    ACTIONS(787), 1,
      aux_sym_block_title_token1,
  [1947] = 1,
    ACTIONS(789), 1,
      anon_sym_LF,
  [1951] = 1,
    ACTIONS(791), 1,
      anon_sym_LF,
  [1955] = 1,
    ACTIONS(793), 1,
      sym_attr_mark,
  [1959] = 1,
    ACTIONS(795), 1,
      anon_sym_LF,
  [1963] = 1,
    ACTIONS(797), 1,
      sym_attr_mark,
  [1967] = 1,
    ACTIONS(799), 1,
      aux_sym_code_language_token1,
  [1971] = 1,
    ACTIONS(801), 1,
      sym_attr_mark,
  [1975] = 1,
    ACTIONS(803), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1979] = 1,
    ACTIONS(805), 1,
      sym_attr_mark,
  [1983] = 1,
    ACTIONS(807), 1,
      sym_attr_mark,
  [1987] = 1,
    ACTIONS(809), 1,
      sym_attr_mark,
  [1991] = 1,
    ACTIONS(811), 1,
      sym_email,
  [1995] = 1,
    ACTIONS(813), 1,
      anon_sym_LF,
  [1999] = 1,
    ACTIONS(815), 1,
      aux_sym__doc_description_token1,
  [2003] = 1,
    ACTIONS(817), 1,
      anon_sym_COLON_COLON,
  [2007] = 1,
    ACTIONS(819), 1,
      anon_sym_LF,
  [2011] = 1,
    ACTIONS(821), 1,
      aux_sym_comment_token1,
  [2015] = 1,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
  [2019] = 1,
    ACTIONS(825), 1,
      anon_sym_,
  [2023] = 1,
    ACTIONS(827), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2027] = 1,
    ACTIONS(829), 1,
      anon_sym_LF,
  [2031] = 1,
    ACTIONS(831), 1,
      anon_sym_GT,
  [2035] = 1,
    ACTIONS(833), 1,
      aux_sym_block_title_token1,
  [2039] = 1,
    ACTIONS(835), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2043] = 1,
    ACTIONS(837), 1,
      anon_sym_LF,
  [2047] = 1,
    ACTIONS(839), 1,
      aux_sym_block_title_token1,
  [2051] = 1,
    ACTIONS(841), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2055] = 1,
    ACTIONS(843), 1,
      aux_sym_block_title_token1,
  [2059] = 1,
    ACTIONS(845), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2063] = 1,
    ACTIONS(847), 1,
      aux_sym_block_title_token1,
  [2067] = 1,
    ACTIONS(849), 1,
      anon_sym_LF,
  [2071] = 1,
    ACTIONS(851), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [2075] = 1,
    ACTIONS(853), 1,
      aux_sym_block_title_token1,
  [2079] = 1,
    ACTIONS(488), 1,
      anon_sym_LF,
  [2083] = 1,
    ACTIONS(687), 1,
      anon_sym_RBRACK_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(61)] = 0,
  [SMALL_STATE(62)] = 96,
  [SMALL_STATE(63)] = 192,
  [SMALL_STATE(64)] = 298,
  [SMALL_STATE(65)] = 352,
  [SMALL_STATE(66)] = 406,
  [SMALL_STATE(67)] = 458,
  [SMALL_STATE(68)] = 509,
  [SMALL_STATE(69)] = 560,
  [SMALL_STATE(70)] = 611,
  [SMALL_STATE(71)] = 662,
  [SMALL_STATE(72)] = 713,
  [SMALL_STATE(73)] = 764,
  [SMALL_STATE(74)] = 815,
  [SMALL_STATE(75)] = 866,
  [SMALL_STATE(76)] = 917,
  [SMALL_STATE(77)] = 968,
  [SMALL_STATE(78)] = 1019,
  [SMALL_STATE(79)] = 1070,
  [SMALL_STATE(80)] = 1121,
  [SMALL_STATE(81)] = 1172,
  [SMALL_STATE(82)] = 1223,
  [SMALL_STATE(83)] = 1274,
  [SMALL_STATE(84)] = 1300,
  [SMALL_STATE(85)] = 1321,
  [SMALL_STATE(86)] = 1342,
  [SMALL_STATE(87)] = 1361,
  [SMALL_STATE(88)] = 1372,
  [SMALL_STATE(89)] = 1383,
  [SMALL_STATE(90)] = 1399,
  [SMALL_STATE(91)] = 1412,
  [SMALL_STATE(92)] = 1419,
  [SMALL_STATE(93)] = 1429,
  [SMALL_STATE(94)] = 1439,
  [SMALL_STATE(95)] = 1449,
  [SMALL_STATE(96)] = 1459,
  [SMALL_STATE(97)] = 1469,
  [SMALL_STATE(98)] = 1479,
  [SMALL_STATE(99)] = 1489,
  [SMALL_STATE(100)] = 1499,
  [SMALL_STATE(101)] = 1509,
  [SMALL_STATE(102)] = 1519,
  [SMALL_STATE(103)] = 1529,
  [SMALL_STATE(104)] = 1539,
  [SMALL_STATE(105)] = 1549,
  [SMALL_STATE(106)] = 1559,
  [SMALL_STATE(107)] = 1569,
  [SMALL_STATE(108)] = 1579,
  [SMALL_STATE(109)] = 1589,
  [SMALL_STATE(110)] = 1599,
  [SMALL_STATE(111)] = 1609,
  [SMALL_STATE(112)] = 1615,
  [SMALL_STATE(113)] = 1625,
  [SMALL_STATE(114)] = 1635,
  [SMALL_STATE(115)] = 1645,
  [SMALL_STATE(116)] = 1652,
  [SMALL_STATE(117)] = 1659,
  [SMALL_STATE(118)] = 1664,
  [SMALL_STATE(119)] = 1671,
  [SMALL_STATE(120)] = 1678,
  [SMALL_STATE(121)] = 1685,
  [SMALL_STATE(122)] = 1692,
  [SMALL_STATE(123)] = 1699,
  [SMALL_STATE(124)] = 1704,
  [SMALL_STATE(125)] = 1711,
  [SMALL_STATE(126)] = 1718,
  [SMALL_STATE(127)] = 1725,
  [SMALL_STATE(128)] = 1732,
  [SMALL_STATE(129)] = 1739,
  [SMALL_STATE(130)] = 1744,
  [SMALL_STATE(131)] = 1751,
  [SMALL_STATE(132)] = 1758,
  [SMALL_STATE(133)] = 1765,
  [SMALL_STATE(134)] = 1772,
  [SMALL_STATE(135)] = 1779,
  [SMALL_STATE(136)] = 1783,
  [SMALL_STATE(137)] = 1787,
  [SMALL_STATE(138)] = 1791,
  [SMALL_STATE(139)] = 1795,
  [SMALL_STATE(140)] = 1799,
  [SMALL_STATE(141)] = 1803,
  [SMALL_STATE(142)] = 1807,
  [SMALL_STATE(143)] = 1811,
  [SMALL_STATE(144)] = 1815,
  [SMALL_STATE(145)] = 1819,
  [SMALL_STATE(146)] = 1823,
  [SMALL_STATE(147)] = 1827,
  [SMALL_STATE(148)] = 1831,
  [SMALL_STATE(149)] = 1835,
  [SMALL_STATE(150)] = 1839,
  [SMALL_STATE(151)] = 1843,
  [SMALL_STATE(152)] = 1847,
  [SMALL_STATE(153)] = 1851,
  [SMALL_STATE(154)] = 1855,
  [SMALL_STATE(155)] = 1859,
  [SMALL_STATE(156)] = 1863,
  [SMALL_STATE(157)] = 1867,
  [SMALL_STATE(158)] = 1871,
  [SMALL_STATE(159)] = 1875,
  [SMALL_STATE(160)] = 1879,
  [SMALL_STATE(161)] = 1883,
  [SMALL_STATE(162)] = 1887,
  [SMALL_STATE(163)] = 1891,
  [SMALL_STATE(164)] = 1895,
  [SMALL_STATE(165)] = 1899,
  [SMALL_STATE(166)] = 1903,
  [SMALL_STATE(167)] = 1907,
  [SMALL_STATE(168)] = 1911,
  [SMALL_STATE(169)] = 1915,
  [SMALL_STATE(170)] = 1919,
  [SMALL_STATE(171)] = 1923,
  [SMALL_STATE(172)] = 1927,
  [SMALL_STATE(173)] = 1931,
  [SMALL_STATE(174)] = 1935,
  [SMALL_STATE(175)] = 1939,
  [SMALL_STATE(176)] = 1943,
  [SMALL_STATE(177)] = 1947,
  [SMALL_STATE(178)] = 1951,
  [SMALL_STATE(179)] = 1955,
  [SMALL_STATE(180)] = 1959,
  [SMALL_STATE(181)] = 1963,
  [SMALL_STATE(182)] = 1967,
  [SMALL_STATE(183)] = 1971,
  [SMALL_STATE(184)] = 1975,
  [SMALL_STATE(185)] = 1979,
  [SMALL_STATE(186)] = 1983,
  [SMALL_STATE(187)] = 1987,
  [SMALL_STATE(188)] = 1991,
  [SMALL_STATE(189)] = 1995,
  [SMALL_STATE(190)] = 1999,
  [SMALL_STATE(191)] = 2003,
  [SMALL_STATE(192)] = 2007,
  [SMALL_STATE(193)] = 2011,
  [SMALL_STATE(194)] = 2015,
  [SMALL_STATE(195)] = 2019,
  [SMALL_STATE(196)] = 2023,
  [SMALL_STATE(197)] = 2027,
  [SMALL_STATE(198)] = 2031,
  [SMALL_STATE(199)] = 2035,
  [SMALL_STATE(200)] = 2039,
  [SMALL_STATE(201)] = 2043,
  [SMALL_STATE(202)] = 2047,
  [SMALL_STATE(203)] = 2051,
  [SMALL_STATE(204)] = 2055,
  [SMALL_STATE(205)] = 2059,
  [SMALL_STATE(206)] = 2063,
  [SMALL_STATE(207)] = 2067,
  [SMALL_STATE(208)] = 2071,
  [SMALL_STATE(209)] = 2075,
  [SMALL_STATE(210)] = 2079,
  [SMALL_STATE(211)] = 2083,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(209),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(208),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(206),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(205),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(204),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(203),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(202),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(200),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(199),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(196),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(195),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(195),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(133),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(193),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(130),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(182),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title0, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title0, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title0_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(114),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title0_repeat1, 2), SHIFT_REPEAT(86),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sectanchors, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sectanchors, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 7),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 7),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__url_repo, 6),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__url_repo, 6),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_attr, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__link_with_underscores, 5),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_with_underscores, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doc_description, 5, .production_id = 8),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doc_description, 5, .production_id = 8),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__doctype, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__doctype, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hide_uri_scheme, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hide_uri_scheme, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 6),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 6),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 4),
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
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 9),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 9),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(62),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(115),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(125),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(66),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(182),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(124),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(120),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(119),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(116),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(79),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_macro, 1, .production_id = 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_macro, 1, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_autolinks, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_autolinks, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 5),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 5),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 3),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 5),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 5),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_macro, 5, .production_id = 7),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_macro, 5, .production_id = 7),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_macro, 4, .production_id = 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_macro, 4, .production_id = 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_links, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_links, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(195),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(94),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_content, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(99),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [757] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_mark, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
