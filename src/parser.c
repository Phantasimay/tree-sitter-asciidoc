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
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 58
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 0
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_DOT = 1,
  aux_sym_block_title_token1 = 2,
  aux_sym_title1_token1 = 3,
  sym_title2 = 4,
  sym_title3 = 5,
  sym_title4 = 6,
  sym_title5 = 7,
  anon_sym_LT = 8,
  anon_sym_GT = 9,
  anon_sym_LF = 10,
  sym_name = 11,
  sym_email = 12,
  sym_attr_mark = 13,
  aux_sym_attr_name_token1 = 14,
  anon_sym_url_DASHrepo = 15,
  aux_sym_attr_value_token1 = 16,
  anon_sym_NOTE_COLON = 17,
  anon_sym_LBRACKNOTE_RBRACK_LF = 18,
  anon_sym_DASH_DASH_DASH_DASH_LF = 19,
  aux_sym__note_block_token1 = 20,
  anon_sym_TIP_COLON = 21,
  anon_sym_LBRACKTIP_RBRACK_LF = 22,
  anon_sym_IMPORTANT_COLON = 23,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 24,
  anon_sym_CAUTION_COLON = 25,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 26,
  anon_sym_WARNING_COLON = 27,
  anon_sym_LBRACKWARNING_RBRACK_LF = 28,
  anon_sym_ = 29,
  sym__unordered_list_mark = 30,
  aux_sym__ordered_list_mark_token1 = 31,
  aux_sym__ordered_list_mark_token2 = 32,
  aux_sym__ordered_list_mark_token3 = 33,
  sym__checklist_mark = 34,
  aux_sym_code_token1 = 35,
  anon_sym_RBRACK_LF = 36,
  anon_sym_SLASH_SLASH = 37,
  aux_sym_comment_token1 = 38,
  aux_sym_line_breaks_token1 = 39,
  anon_sym_LT_LT_LT_LF_LF = 40,
  anon_sym_image_COLON_COLON = 41,
  anon_sym_LBRACK = 42,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 43,
  anon_sym_COLON_COLON = 44,
  anon_sym_audio_COLON_COLON = 45,
  anon_sym_RBRACK = 46,
  aux_sym_audio_url_token1 = 47,
  anon_sym_video_COLON_COLON = 48,
  anon_sym_LF_LF = 49,
  anon_sym_kbd_COLON_LBRACK = 50,
  sym_kbd_content = 51,
  anon_sym_footnote_COLON_LBRACK = 52,
  sym_footnote_content = 53,
  aux_sym_url_token1 = 54,
  aux_sym_url_token2 = 55,
  anon_sym_LT_LT = 56,
  anon_sym_COMMA = 57,
  anon_sym_GT_GT = 58,
  anon_sym_xref_COLON = 59,
  sym_emphasis = 60,
  sym_strong = 61,
  sym_monospace = 62,
  sym_highlight = 63,
  sym_superscript = 64,
  sym_subscript = 65,
  anon_sym_PLUS_PLUS_PLUS = 66,
  anon_sym_pass_COLON_LBRACK = 67,
  anon_sym_LBRACEblank_RBRACE = 68,
  anon_sym_LBRACEempty_RBRACE = 69,
  anon_sym_LBRACEsp_RBRACE = 70,
  anon_sym_LBRACEnbsp_RBRACE = 71,
  anon_sym_LBRACEzwsp_RBRACE = 72,
  anon_sym_LBRACEwj_RBRACE = 73,
  anon_sym_LBRACEapos_RBRACE = 74,
  anon_sym_LBRACEquot_RBRACE = 75,
  anon_sym_LBRACElsquo_RBRACE = 76,
  anon_sym_LBRACErsquo_RBRACE = 77,
  anon_sym_LBRACEldquo_RBRACE = 78,
  anon_sym_LBRACErdquo_RBRACE = 79,
  anon_sym_LBRACEdeg_RBRACE = 80,
  anon_sym_LBRACEplus_RBRACE = 81,
  anon_sym_LBRACEbrvbar_RBRACE = 82,
  anon_sym_LBRACEvbar_RBRACE = 83,
  anon_sym_LBRACEamp_RBRACE = 84,
  anon_sym_LBRACElt_RBRACE = 85,
  anon_sym_LBRACEgt_RBRACE = 86,
  anon_sym_LBRACEstartsb_RBRACE = 87,
  anon_sym_LBRACEendsb_RBRACE = 88,
  anon_sym_LBRACEcaret_RBRACE = 89,
  anon_sym_LBRACEasterisk_RBRACE = 90,
  anon_sym_LBRACEtilde_RBRACE = 91,
  anon_sym_LBRACEbackslash_RBRACE = 92,
  anon_sym_LBRACEbacktick_RBRACE = 93,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 94,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 95,
  anon_sym_LBRACEcpp_RBRACE = 96,
  anon_sym_LBRACEpp_RBRACE = 97,
  sym_document = 98,
  sym__block = 99,
  sym__titled_block = 100,
  sym_block_title = 101,
  sym_title1 = 102,
  sym_author_info = 103,
  sym_doc_attr = 104,
  sym_attr_name = 105,
  sym_attr_value = 106,
  sym__admonitions = 107,
  sym_note = 108,
  sym__note_line = 109,
  sym__note_block = 110,
  sym_tip = 111,
  sym__tip = 112,
  sym__tip_block = 113,
  sym_important = 114,
  sym__important = 115,
  sym__important_block = 116,
  sym_caution = 117,
  sym__caution = 118,
  sym__caution_block = 119,
  sym_warning = 120,
  sym__warning = 121,
  sym__warning_block = 122,
  sym_list = 123,
  sym_list_item = 124,
  sym_list_item_mark = 125,
  sym_list_item_content = 126,
  sym__ordered_list_mark = 127,
  sym_code = 128,
  sym_code_language = 129,
  sym_code_content = 130,
  sym_comment = 131,
  sym_line_breaks = 132,
  sym_page_breaks = 133,
  sym_image = 134,
  sym_table = 135,
  sym_table_start = 136,
  sym_table_content = 137,
  sym_table_end = 138,
  sym_description_list = 139,
  sym_audio = 140,
  sym_audio_url = 141,
  sym_audio_title = 142,
  sym_video = 143,
  sym_paragraph = 144,
  sym__inline_element = 145,
  sym_kbd = 146,
  sym_footnote = 147,
  sym_url = 148,
  sym_xref = 149,
  sym__inline_xref = 150,
  sym__xref = 151,
  sym_xref_url = 152,
  sym_passthrough = 153,
  sym__passthrough_plus = 154,
  sym__passthrough_cmd = 155,
  sym_passthrough_content = 156,
  sym_replacement = 157,
  aux_sym_document_repeat1 = 158,
  aux_sym_title1_repeat1 = 159,
  aux_sym__note_block_repeat1 = 160,
  aux_sym_list_repeat1 = 161,
  aux_sym_table_content_repeat1 = 162,
  aux_sym_paragraph_repeat1 = 163,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [aux_sym_block_title_token1] = "block_title_token1",
  [aux_sym_title1_token1] = "title1_token1",
  [sym_title2] = "title2",
  [sym_title3] = "title3",
  [sym_title4] = "title4",
  [sym_title5] = "title5",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LF] = "\n",
  [sym_name] = "name",
  [sym_email] = "email",
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
  [sym_title1] = "title1",
  [sym_author_info] = "author_info",
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
  [aux_sym_title1_repeat1] = "title1_repeat1",
  [aux_sym__note_block_repeat1] = "_note_block_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_table_content_repeat1] = "table_content_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_block_title_token1] = aux_sym_block_title_token1,
  [aux_sym_title1_token1] = aux_sym_title1_token1,
  [sym_title2] = sym_title2,
  [sym_title3] = sym_title3,
  [sym_title4] = sym_title4,
  [sym_title5] = sym_title5,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LF] = anon_sym_LF,
  [sym_name] = sym_name,
  [sym_email] = sym_email,
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
  [sym_title1] = sym_title1,
  [sym_author_info] = sym_author_info,
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
  [aux_sym_title1_repeat1] = aux_sym_title1_repeat1,
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
  [aux_sym_title1_token1] = {
    .visible = false,
    .named = false,
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
  [sym_title1] = {
    .visible = true,
    .named = true,
  },
  [sym_author_info] = {
    .visible = true,
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
  [aux_sym_title1_repeat1] = {
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
  [188] = 120,
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
      if (eof) ADVANCE(333);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '*') ADVANCE(651);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(703);
      if (lookahead == '-') ADVANCE(658);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '0') ADVANCE(495);
      if (lookahead == ':') ADVANCE(503);
      if (lookahead == '<') ADVANCE(356);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(358);
      if (lookahead == 'C') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(449);
      if (lookahead == 'N') ADVANCE(454);
      if (lookahead == 'T') ADVANCE(446);
      if (lookahead == 'W') ADVANCE(442);
      if (lookahead == '[') ADVANCE(682);
      if (lookahead == ']') ADVANCE(687);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(500);
      if (lookahead == '`') ADVANCE(329);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'f') ADVANCE(484);
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead == 'k') ADVANCE(468);
      if (lookahead == 'p') ADVANCE(466);
      if (lookahead == 'u') ADVANCE(488);
      if (lookahead == 'v') ADVANCE(479);
      if (lookahead == 'x') ADVANCE(489);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '|') ADVANCE(141);
      if (lookahead == '~') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(678);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(679);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(684);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(640);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(635);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(635);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(644);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(646);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(642);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(642);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '<') ADVANCE(138);
      if (lookahead == '[') ADVANCE(683);
      if (lookahead == '^') ADVANCE(102);
      if (lookahead == '_') ADVANCE(532);
      if (lookahead == '`') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(571);
      if (lookahead == 'k') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead == 'x') ADVANCE(576);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '~') ADVANCE(330);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(359);
      if (lookahead == '*') ADVANCE(652);
      if (lookahead == '-') ADVANCE(656);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(638);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(636);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '<') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(326);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '<') ADVANCE(138);
      if (lookahead == '[') ADVANCE(683);
      if (lookahead == '^') ADVANCE(102);
      if (lookahead == '_') ADVANCE(532);
      if (lookahead == '`') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(571);
      if (lookahead == 'k') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead == 'x') ADVANCE(576);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '~') ADVANCE(330);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(2);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(674);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(352);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(639);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(639);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(634);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(634);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(643);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(643);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(645);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(645);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(641);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(685);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(650);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(655);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(495);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'C') ADVANCE(371);
      if (lookahead == 'I') ADVANCE(379);
      if (lookahead == 'N') ADVANCE(384);
      if (lookahead == 'T') ADVANCE(376);
      if (lookahead == 'W') ADVANCE(372);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(498);
      if (lookahead == '`') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'k') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 'v') ADVANCE(409);
      if (lookahead == 'x') ADVANCE(417);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(650);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(655);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(506);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'N') ADVANCE(510);
      if (lookahead == 'T') ADVANCE(508);
      if (lookahead == 'W') ADVANCE(507);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == '`') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == 'k') ADVANCE(512);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == 'v') ADVANCE(513);
      if (lookahead == 'x') ADVANCE(516);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(710);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(710);
      if (lookahead == ']') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(709);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(652);
      if (lookahead == '-') ADVANCE(656);
      if (lookahead == '.') ADVANCE(660);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'C') ADVANCE(519);
      if (lookahead == 'I') ADVANCE(522);
      if (lookahead == 'N') ADVANCE(523);
      if (lookahead == 'T') ADVANCE(521);
      if (lookahead == 'W') ADVANCE(520);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead == 'v') ADVANCE(524);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(527);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == '+') ADVANCE(717);
      END_STATE();
    case 60:
      if (lookahead == '+') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '.') ADVANCE(662);
      END_STATE();
    case 62:
      if (lookahead == ',') ADVANCE(703);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '[') ADVANCE(681);
      if (lookahead == ']') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 63:
      if (lookahead == ',') ADVANCE(672);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 64:
      if (lookahead == ',') ADVANCE(672);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(153);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == 'T') ADVANCE(150);
      if (lookahead == 'W') ADVANCE(146);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '.') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(662);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '<') ADVANCE(702);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '>') ADVANCE(704);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'b') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'q') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(196);
      if (lookahead == 'w') ADVANCE(218);
      if (lookahead == 'z') ADVANCE(287);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(665);
      if (lookahead == ':') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(667);
      if (lookahead == ':') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(699);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(696);
      if (lookahead == '^') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(697);
      if (lookahead == '_') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(698);
      if (lookahead == '`') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '^') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '_') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '`') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 92:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(686);
      END_STATE();
    case 93:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(680);
      END_STATE();
    case 94:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(689);
      END_STATE();
    case 95:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '[') ADVANCE(691);
      END_STATE();
    case 96:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '[') ADVANCE(718);
      END_STATE();
    case 97:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '[') ADVANCE(694);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(686);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(680);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(689);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '^') ADVANCE(714);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '_') ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '`') ADVANCE(711);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(130);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(124);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(117);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'G') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'M') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ']') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ']') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ']') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 135:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ']') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 138:
      if (lookahead == '<') ADVANCE(701);
      END_STATE();
    case 139:
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 141:
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 142:
      if (lookahead == '>') ADVANCE(704);
      END_STATE();
    case 143:
      if (lookahead == '>') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 144:
      if (lookahead == '@') ADVANCE(324);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == 'A') ADVANCE(169);
      END_STATE();
    case 146:
      if (lookahead == 'A') ADVANCE(163);
      END_STATE();
    case 147:
      if (lookahead == 'A') ADVANCE(156);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'G') ADVANCE(180);
      END_STATE();
    case 150:
      if (lookahead == 'I') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'I') ADVANCE(154);
      END_STATE();
    case 152:
      if (lookahead == 'I') ADVANCE(160);
      END_STATE();
    case 153:
      if (lookahead == 'M') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 155:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 156:
      if (lookahead == 'N') ADVANCE(168);
      END_STATE();
    case 157:
      if (lookahead == 'N') ADVANCE(179);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(165);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(164);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(157);
      END_STATE();
    case 161:
      if (lookahead == 'P') ADVANCE(159);
      END_STATE();
    case 162:
      if (lookahead == 'P') ADVANCE(177);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(155);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(167);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(147);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(181);
      END_STATE();
    case 169:
      if (lookahead == 'U') ADVANCE(166);
      END_STATE();
    case 170:
      if (lookahead == '[') ADVANCE(691);
      END_STATE();
    case 171:
      if (lookahead == '[') ADVANCE(718);
      END_STATE();
    case 172:
      if (lookahead == '[') ADVANCE(694);
      END_STATE();
    case 173:
      if (lookahead == '[') ADVANCE(320);
      END_STATE();
    case 174:
      if (lookahead == ']') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 175:
      if (lookahead == ']') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(175)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(695);
      END_STATE();
    case 176:
      if (lookahead == ']') ADVANCE(669);
      END_STATE();
    case 177:
      if (lookahead == ']') ADVANCE(5);
      END_STATE();
    case 178:
      if (lookahead == ']') ADVANCE(7);
      END_STATE();
    case 179:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 180:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 181:
      if (lookahead == ']') ADVANCE(13);
      END_STATE();
    case 182:
      if (lookahead == '^') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 183:
      if (lookahead == '_') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 184:
      if (lookahead == '`') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'b') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'q') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(196);
      if (lookahead == 'w') ADVANCE(218);
      if (lookahead == 'z') ADVANCE(287);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(272);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(313);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(190);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 212:
      if (lookahead == 'g') ADVANCE(296);
      END_STATE();
    case 213:
      if (lookahead == 'h') ADVANCE(316);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(234);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 218:
      if (lookahead == 'j') ADVANCE(293);
      END_STATE();
    case 219:
      if (lookahead == 'k') ADVANCE(264);
      END_STATE();
    case 220:
      if (lookahead == 'k') ADVANCE(303);
      END_STATE();
    case 221:
      if (lookahead == 'k') ADVANCE(314);
      END_STATE();
    case 222:
      if (lookahead == 'k') ADVANCE(315);
      END_STATE();
    case 223:
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 224:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 226:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 228:
      if (lookahead == 'm') ADVANCE(249);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 229:
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 230:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(292);
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 253:
      if (lookahead == 'q') ADVANCE(281);
      END_STATE();
    case 254:
      if (lookahead == 'q') ADVANCE(283);
      END_STATE();
    case 255:
      if (lookahead == 'q') ADVANCE(284);
      END_STATE();
    case 256:
      if (lookahead == 'q') ADVANCE(285);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 286:
      if (lookahead == 'v') ADVANCE(197);
      END_STATE();
    case 287:
      if (lookahead == 'w') ADVANCE(273);
      END_STATE();
    case 288:
      if (lookahead == 'y') ADVANCE(305);
      END_STATE();
    case 289:
      if (lookahead == '}') ADVANCE(737);
      END_STATE();
    case 290:
      if (lookahead == '}') ADVANCE(736);
      END_STATE();
    case 291:
      if (lookahead == '}') ADVANCE(748);
      END_STATE();
    case 292:
      if (lookahead == '}') ADVANCE(721);
      END_STATE();
    case 293:
      if (lookahead == '}') ADVANCE(724);
      END_STATE();
    case 294:
      if (lookahead == '}') ADVANCE(735);
      END_STATE();
    case 295:
      if (lookahead == '}') ADVANCE(747);
      END_STATE();
    case 296:
      if (lookahead == '}') ADVANCE(731);
      END_STATE();
    case 297:
      if (lookahead == '}') ADVANCE(725);
      END_STATE();
    case 298:
      if (lookahead == '}') ADVANCE(722);
      END_STATE();
    case 299:
      if (lookahead == '}') ADVANCE(732);
      END_STATE();
    case 300:
      if (lookahead == '}') ADVANCE(726);
      END_STATE();
    case 301:
      if (lookahead == '}') ADVANCE(734);
      END_STATE();
    case 302:
      if (lookahead == '}') ADVANCE(723);
      END_STATE();
    case 303:
      if (lookahead == '}') ADVANCE(719);
      END_STATE();
    case 304:
      if (lookahead == '}') ADVANCE(740);
      END_STATE();
    case 305:
      if (lookahead == '}') ADVANCE(720);
      END_STATE();
    case 306:
      if (lookahead == '}') ADVANCE(739);
      END_STATE();
    case 307:
      if (lookahead == '}') ADVANCE(729);
      END_STATE();
    case 308:
      if (lookahead == '}') ADVANCE(727);
      END_STATE();
    case 309:
      if (lookahead == '}') ADVANCE(730);
      END_STATE();
    case 310:
      if (lookahead == '}') ADVANCE(728);
      END_STATE();
    case 311:
      if (lookahead == '}') ADVANCE(742);
      END_STATE();
    case 312:
      if (lookahead == '}') ADVANCE(733);
      END_STATE();
    case 313:
      if (lookahead == '}') ADVANCE(738);
      END_STATE();
    case 314:
      if (lookahead == '}') ADVANCE(741);
      END_STATE();
    case 315:
      if (lookahead == '}') ADVANCE(744);
      END_STATE();
    case 316:
      if (lookahead == '}') ADVANCE(743);
      END_STATE();
    case 317:
      if (lookahead == '}') ADVANCE(745);
      END_STATE();
    case 318:
      if (lookahead == '}') ADVANCE(746);
      END_STATE();
    case 319:
      if (lookahead == '~') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 320:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(176);
      END_STATE();
    case 321:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(321)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 324:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 325:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      END_STATE();
    case 326:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 327:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 328:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 329:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 330:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 331:
      if (eof) ADVANCE(333);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(650);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(655);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(495);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'C') ADVANCE(371);
      if (lookahead == 'I') ADVANCE(379);
      if (lookahead == 'N') ADVANCE(384);
      if (lookahead == 'T') ADVANCE(376);
      if (lookahead == 'W') ADVANCE(372);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(498);
      if (lookahead == '`') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'f') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'k') ADVANCE(398);
      if (lookahead == 'p') ADVANCE(396);
      if (lookahead == 'v') ADVANCE(409);
      if (lookahead == 'x') ADVANCE(417);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 332:
      if (eof) ADVANCE(333);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '*') ADVANCE(650);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(655);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(506);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'N') ADVANCE(510);
      if (lookahead == 'T') ADVANCE(508);
      if (lookahead == 'W') ADVANCE(507);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(80);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == '`') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == 'k') ADVANCE(512);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == 'v') ADVANCE(513);
      if (lookahead == 'x') ADVANCE(516);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(660);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(684);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '=') ADVANCE(336);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_title1_token1);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_title1_token1);
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(349);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(351);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_title5);
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(702);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(704);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(39);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(706);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(92);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'G') ADVANCE(436);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'M') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(375);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(391);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(383);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(373);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(433);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(421);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(434);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 's') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 's') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(404);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(91);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(42);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(96);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(93);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(44);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(46);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(48);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'A') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'A') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'A') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'E') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'G') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'I') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'I') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'I') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'M') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'N') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'N') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'N') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'N') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'O') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'O') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'O') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'P') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'P') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'R') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'R') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'U') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'a') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'a') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'b') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'd') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'd') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'd') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'g') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'm') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 's') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == 'u') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '_') ADVANCE(497);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == ':') ADVANCE(89);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '_') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead == '.') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_attr_mark);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_attr_mark);
      if (lookahead == '.') ADVANCE(662);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '-') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(556);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(550);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(549);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'M') ADVANCE(548);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(552);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(577);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(562);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(561);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(558);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(572);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(563);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(560);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == ':') ADVANCE(91);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'A') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'A') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'I') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'M') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'O') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'i') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'm') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == 'u') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == ':') ADVANCE(89);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '_') ADVANCE(531);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(89);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(39);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(706);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(92);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'A') ADVANCE(544);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'E') ADVANCE(584);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'G') ADVANCE(592);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(547);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(542);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(539);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(541);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(555);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(588);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(551);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(545);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(546);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(533);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(543);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(554);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(538);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(540);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(537);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(594);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(553);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(577);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(568);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(562);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(569);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(566);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(534);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(567);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(586);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(589);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(575);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(535);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(564);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(574);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(573);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(572);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(579);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(580);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(536);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(590);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(563);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 's') ADVANCE(578);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 's') ADVANCE(585);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(570);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 't') ADVANCE(565);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(91);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(96);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(93);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(44);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(97);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(46);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(48);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'A') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'E') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'G') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'I') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'I') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'N') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'N') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'N') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'N') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'O') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'O') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'P') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'P') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'R') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'R') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'T') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'T') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'T') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'T') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'U') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == '_') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'a') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'd') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'd') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'e') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'g') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'i') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'l') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'o') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (lookahead == 'r') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_attr_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_url_DASHrepo);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == '\n') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_attr_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(654);
      if (lookahead == '-') ADVANCE(654);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(659);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '.') ADVANCE(664);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(659);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(648);
      if (lookahead == '-') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(654);
      if (lookahead == '-') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(657);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(659);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(649);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(657);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(671);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(675);
      if (lookahead != 0) ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(672);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(696);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(696);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(697);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(699);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(31);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '_') ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(710);
      if (lookahead == ']') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '`') ADVANCE(711);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '^') ADVANCE(714);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 332},
  [2] = {.lex_state = 332},
  [3] = {.lex_state = 332},
  [4] = {.lex_state = 331},
  [5] = {.lex_state = 332},
  [6] = {.lex_state = 332},
  [7] = {.lex_state = 332},
  [8] = {.lex_state = 332},
  [9] = {.lex_state = 332},
  [10] = {.lex_state = 332},
  [11] = {.lex_state = 332},
  [12] = {.lex_state = 332},
  [13] = {.lex_state = 332},
  [14] = {.lex_state = 332},
  [15] = {.lex_state = 332},
  [16] = {.lex_state = 332},
  [17] = {.lex_state = 332},
  [18] = {.lex_state = 332},
  [19] = {.lex_state = 332},
  [20] = {.lex_state = 332},
  [21] = {.lex_state = 332},
  [22] = {.lex_state = 332},
  [23] = {.lex_state = 332},
  [24] = {.lex_state = 332},
  [25] = {.lex_state = 332},
  [26] = {.lex_state = 332},
  [27] = {.lex_state = 332},
  [28] = {.lex_state = 332},
  [29] = {.lex_state = 332},
  [30] = {.lex_state = 332},
  [31] = {.lex_state = 332},
  [32] = {.lex_state = 332},
  [33] = {.lex_state = 332},
  [34] = {.lex_state = 332},
  [35] = {.lex_state = 332},
  [36] = {.lex_state = 332},
  [37] = {.lex_state = 332},
  [38] = {.lex_state = 332},
  [39] = {.lex_state = 332},
  [40] = {.lex_state = 332},
  [41] = {.lex_state = 332},
  [42] = {.lex_state = 332},
  [43] = {.lex_state = 332},
  [44] = {.lex_state = 332},
  [45] = {.lex_state = 332},
  [46] = {.lex_state = 332},
  [47] = {.lex_state = 332},
  [48] = {.lex_state = 332},
  [49] = {.lex_state = 332},
  [50] = {.lex_state = 332},
  [51] = {.lex_state = 332},
  [52] = {.lex_state = 332},
  [53] = {.lex_state = 332},
  [54] = {.lex_state = 332},
  [55] = {.lex_state = 332},
  [56] = {.lex_state = 332},
  [57] = {.lex_state = 332},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 58},
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
  [77] = {.lex_state = 58},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 26},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 62},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 62},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 143},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 62},
  [111] = {.lex_state = 143},
  [112] = {.lex_state = 62},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 174},
  [115] = {.lex_state = 175},
  [116] = {.lex_state = 62},
  [117] = {.lex_state = 143},
  [118] = {.lex_state = 62},
  [119] = {.lex_state = 143},
  [120] = {.lex_state = 62},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 143},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 62},
  [126] = {.lex_state = 143},
  [127] = {.lex_state = 62},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 30},
  [133] = {.lex_state = 58},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 143},
  [137] = {.lex_state = 321},
  [138] = {.lex_state = 62},
  [139] = {.lex_state = 27},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 62},
  [142] = {.lex_state = 700},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 50},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 332},
  [148] = {.lex_state = 321},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 16},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 62},
  [157] = {.lex_state = 332},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 143},
  [161] = {.lex_state = 321},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 676},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 62},
  [168] = {.lex_state = 62},
  [169] = {.lex_state = 50},
  [170] = {.lex_state = 62},
  [171] = {.lex_state = 27},
  [172] = {.lex_state = 16},
  [173] = {.lex_state = 62},
  [174] = {.lex_state = 27},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 62},
  [177] = {.lex_state = 332},
  [178] = {.lex_state = 62},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 143},
  [181] = {.lex_state = 27},
  [182] = {.lex_state = 62},
  [183] = {.lex_state = 27},
  [184] = {.lex_state = 62},
  [185] = {.lex_state = 27},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 332},
  [188] = {.lex_state = 332},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_title1_token1] = ACTIONS(1),
    [sym_title2] = ACTIONS(1),
    [sym_title3] = ACTIONS(1),
    [sym_title4] = ACTIONS(1),
    [sym_title5] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
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
    [sym_document] = STATE(143),
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(60),
    [sym_title1] = STATE(3),
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
    [sym__warning] = STATE(18),
    [sym__warning_block] = STATE(18),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(79),
    [sym_list_item_mark] = STATE(144),
    [sym__ordered_list_mark] = STATE(169),
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
    [sym__inline_element] = STATE(59),
    [sym_kbd] = STATE(59),
    [sym_footnote] = STATE(59),
    [sym_url] = STATE(59),
    [sym_xref] = STATE(59),
    [sym__inline_xref] = STATE(65),
    [sym__xref] = STATE(66),
    [sym_passthrough] = STATE(59),
    [sym__passthrough_plus] = STATE(69),
    [sym__passthrough_cmd] = STATE(69),
    [sym_replacement] = STATE(59),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(79),
    [aux_sym_paragraph_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(5),
    [aux_sym_title1_token1] = ACTIONS(7),
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
    [sym_title1] = STATE(2),
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
    [sym__warning] = STATE(18),
    [sym__warning_block] = STATE(18),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(79),
    [sym_list_item_mark] = STATE(144),
    [sym__ordered_list_mark] = STATE(169),
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
    [sym__inline_element] = STATE(59),
    [sym_kbd] = STATE(59),
    [sym_footnote] = STATE(59),
    [sym_url] = STATE(59),
    [sym_xref] = STATE(59),
    [sym__inline_xref] = STATE(65),
    [sym__xref] = STATE(66),
    [sym_passthrough] = STATE(59),
    [sym__passthrough_plus] = STATE(69),
    [sym__passthrough_cmd] = STATE(69),
    [sym_replacement] = STATE(59),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(79),
    [aux_sym_paragraph_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(75),
    [aux_sym_title1_token1] = ACTIONS(78),
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
    [sym_title1] = STATE(2),
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
    [sym__warning] = STATE(18),
    [sym__warning_block] = STATE(18),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(79),
    [sym_list_item_mark] = STATE(144),
    [sym__ordered_list_mark] = STATE(169),
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
    [sym__inline_element] = STATE(59),
    [sym_kbd] = STATE(59),
    [sym_footnote] = STATE(59),
    [sym_url] = STATE(59),
    [sym_xref] = STATE(59),
    [sym__inline_xref] = STATE(65),
    [sym__xref] = STATE(66),
    [sym_passthrough] = STATE(59),
    [sym__passthrough_plus] = STATE(69),
    [sym__passthrough_cmd] = STATE(69),
    [sym_replacement] = STATE(59),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(79),
    [aux_sym_paragraph_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(5),
    [aux_sym_title1_token1] = ACTIONS(7),
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
    [sym_author_info] = STATE(6),
    [sym_doc_attr] = STATE(5),
    [aux_sym_title1_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(183),
    [aux_sym_title1_token1] = ACTIONS(181),
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
    [sym_doc_attr] = STATE(8),
    [aux_sym_title1_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [aux_sym_title1_token1] = ACTIONS(189),
    [sym_title2] = ACTIONS(189),
    [sym_title3] = ACTIONS(189),
    [sym_title4] = ACTIONS(189),
    [sym_title5] = ACTIONS(189),
    [sym_attr_mark] = ACTIONS(187),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(189),
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
    [sym_doc_attr] = STATE(7),
    [aux_sym_title1_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [aux_sym_title1_token1] = ACTIONS(189),
    [sym_title2] = ACTIONS(189),
    [sym_title3] = ACTIONS(189),
    [sym_title4] = ACTIONS(189),
    [sym_title5] = ACTIONS(189),
    [sym_attr_mark] = ACTIONS(187),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(189),
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
  [7] = {
    [sym_doc_attr] = STATE(8),
    [aux_sym_title1_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(195),
    [aux_sym_title1_token1] = ACTIONS(193),
    [sym_title2] = ACTIONS(193),
    [sym_title3] = ACTIONS(193),
    [sym_title4] = ACTIONS(193),
    [sym_title5] = ACTIONS(193),
    [sym_attr_mark] = ACTIONS(187),
    [aux_sym_attr_name_token1] = ACTIONS(195),
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
    [sym__unordered_list_mark] = ACTIONS(195),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(195),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(193),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(195),
    [sym__checklist_mark] = ACTIONS(195),
    [aux_sym_code_token1] = ACTIONS(193),
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
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(193),
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
  [8] = {
    [sym_doc_attr] = STATE(8),
    [aux_sym_title1_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(199),
    [aux_sym_title1_token1] = ACTIONS(197),
    [sym_title2] = ACTIONS(197),
    [sym_title3] = ACTIONS(197),
    [sym_title4] = ACTIONS(197),
    [sym_title5] = ACTIONS(197),
    [sym_attr_mark] = ACTIONS(201),
    [aux_sym_attr_name_token1] = ACTIONS(199),
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
    [sym__unordered_list_mark] = ACTIONS(199),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(199),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(197),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(199),
    [sym__checklist_mark] = ACTIONS(199),
    [aux_sym_code_token1] = ACTIONS(197),
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
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(197),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(206),
    [aux_sym_title1_token1] = ACTIONS(204),
    [sym_title2] = ACTIONS(204),
    [sym_title3] = ACTIONS(204),
    [sym_title4] = ACTIONS(204),
    [sym_title5] = ACTIONS(204),
    [sym_attr_mark] = ACTIONS(206),
    [aux_sym_attr_name_token1] = ACTIONS(206),
    [anon_sym_NOTE_COLON] = ACTIONS(204),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(204),
    [anon_sym_TIP_COLON] = ACTIONS(204),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(204),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(204),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(204),
    [anon_sym_CAUTION_COLON] = ACTIONS(204),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(204),
    [anon_sym_WARNING_COLON] = ACTIONS(204),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(204),
    [sym__unordered_list_mark] = ACTIONS(206),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(206),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(204),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(206),
    [sym__checklist_mark] = ACTIONS(206),
    [aux_sym_code_token1] = ACTIONS(204),
    [anon_sym_SLASH_SLASH] = ACTIONS(204),
    [aux_sym_line_breaks_token1] = ACTIONS(204),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(204),
    [anon_sym_image_COLON_COLON] = ACTIONS(204),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(204),
    [anon_sym_audio_COLON_COLON] = ACTIONS(204),
    [anon_sym_video_COLON_COLON] = ACTIONS(204),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(204),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(204),
    [aux_sym_url_token1] = ACTIONS(206),
    [anon_sym_LT_LT] = ACTIONS(206),
    [anon_sym_xref_COLON] = ACTIONS(206),
    [sym_emphasis] = ACTIONS(206),
    [sym_strong] = ACTIONS(206),
    [sym_monospace] = ACTIONS(206),
    [sym_highlight] = ACTIONS(204),
    [sym_superscript] = ACTIONS(206),
    [sym_subscript] = ACTIONS(204),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(204),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(204),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(210),
    [aux_sym_title1_token1] = ACTIONS(208),
    [sym_title2] = ACTIONS(208),
    [sym_title3] = ACTIONS(208),
    [sym_title4] = ACTIONS(208),
    [sym_title5] = ACTIONS(208),
    [sym_attr_mark] = ACTIONS(210),
    [aux_sym_attr_name_token1] = ACTIONS(210),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(208),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(210),
    [sym__checklist_mark] = ACTIONS(210),
    [aux_sym_code_token1] = ACTIONS(208),
    [anon_sym_SLASH_SLASH] = ACTIONS(208),
    [aux_sym_line_breaks_token1] = ACTIONS(208),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(208),
    [anon_sym_image_COLON_COLON] = ACTIONS(208),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(208),
    [anon_sym_audio_COLON_COLON] = ACTIONS(208),
    [anon_sym_video_COLON_COLON] = ACTIONS(208),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(208),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(208),
    [aux_sym_url_token1] = ACTIONS(210),
    [anon_sym_LT_LT] = ACTIONS(210),
    [anon_sym_xref_COLON] = ACTIONS(210),
    [sym_emphasis] = ACTIONS(210),
    [sym_strong] = ACTIONS(210),
    [sym_monospace] = ACTIONS(210),
    [sym_highlight] = ACTIONS(208),
    [sym_superscript] = ACTIONS(210),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(214),
    [aux_sym_title1_token1] = ACTIONS(212),
    [sym_title2] = ACTIONS(212),
    [sym_title3] = ACTIONS(212),
    [sym_title4] = ACTIONS(212),
    [sym_title5] = ACTIONS(212),
    [sym_attr_mark] = ACTIONS(214),
    [aux_sym_attr_name_token1] = ACTIONS(214),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(212),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(214),
    [sym__checklist_mark] = ACTIONS(214),
    [aux_sym_code_token1] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [aux_sym_line_breaks_token1] = ACTIONS(212),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(212),
    [anon_sym_image_COLON_COLON] = ACTIONS(212),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(212),
    [anon_sym_audio_COLON_COLON] = ACTIONS(212),
    [anon_sym_video_COLON_COLON] = ACTIONS(212),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(212),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(212),
    [aux_sym_url_token1] = ACTIONS(214),
    [anon_sym_LT_LT] = ACTIONS(214),
    [anon_sym_xref_COLON] = ACTIONS(214),
    [sym_emphasis] = ACTIONS(214),
    [sym_strong] = ACTIONS(214),
    [sym_monospace] = ACTIONS(214),
    [sym_highlight] = ACTIONS(212),
    [sym_superscript] = ACTIONS(214),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(218),
    [aux_sym_title1_token1] = ACTIONS(216),
    [sym_title2] = ACTIONS(216),
    [sym_title3] = ACTIONS(216),
    [sym_title4] = ACTIONS(216),
    [sym_title5] = ACTIONS(216),
    [sym_attr_mark] = ACTIONS(218),
    [aux_sym_attr_name_token1] = ACTIONS(218),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(216),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(218),
    [sym__checklist_mark] = ACTIONS(218),
    [aux_sym_code_token1] = ACTIONS(216),
    [anon_sym_SLASH_SLASH] = ACTIONS(216),
    [aux_sym_line_breaks_token1] = ACTIONS(216),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(216),
    [anon_sym_image_COLON_COLON] = ACTIONS(216),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(216),
    [anon_sym_audio_COLON_COLON] = ACTIONS(216),
    [anon_sym_video_COLON_COLON] = ACTIONS(216),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(216),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(216),
    [aux_sym_url_token1] = ACTIONS(218),
    [anon_sym_LT_LT] = ACTIONS(218),
    [anon_sym_xref_COLON] = ACTIONS(218),
    [sym_emphasis] = ACTIONS(218),
    [sym_strong] = ACTIONS(218),
    [sym_monospace] = ACTIONS(218),
    [sym_highlight] = ACTIONS(216),
    [sym_superscript] = ACTIONS(218),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(222),
    [aux_sym_title1_token1] = ACTIONS(220),
    [sym_title2] = ACTIONS(220),
    [sym_title3] = ACTIONS(220),
    [sym_title4] = ACTIONS(220),
    [sym_title5] = ACTIONS(220),
    [sym_attr_mark] = ACTIONS(222),
    [aux_sym_attr_name_token1] = ACTIONS(222),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(220),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(222),
    [sym__checklist_mark] = ACTIONS(222),
    [aux_sym_code_token1] = ACTIONS(220),
    [anon_sym_SLASH_SLASH] = ACTIONS(220),
    [aux_sym_line_breaks_token1] = ACTIONS(220),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(220),
    [anon_sym_image_COLON_COLON] = ACTIONS(220),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(220),
    [anon_sym_audio_COLON_COLON] = ACTIONS(220),
    [anon_sym_video_COLON_COLON] = ACTIONS(220),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(220),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(220),
    [aux_sym_url_token1] = ACTIONS(222),
    [anon_sym_LT_LT] = ACTIONS(222),
    [anon_sym_xref_COLON] = ACTIONS(222),
    [sym_emphasis] = ACTIONS(222),
    [sym_strong] = ACTIONS(222),
    [sym_monospace] = ACTIONS(222),
    [sym_highlight] = ACTIONS(220),
    [sym_superscript] = ACTIONS(222),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(226),
    [aux_sym_title1_token1] = ACTIONS(224),
    [sym_title2] = ACTIONS(224),
    [sym_title3] = ACTIONS(224),
    [sym_title4] = ACTIONS(224),
    [sym_title5] = ACTIONS(224),
    [sym_attr_mark] = ACTIONS(226),
    [aux_sym_attr_name_token1] = ACTIONS(226),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(224),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(226),
    [sym__checklist_mark] = ACTIONS(226),
    [aux_sym_code_token1] = ACTIONS(224),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [aux_sym_line_breaks_token1] = ACTIONS(224),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(224),
    [anon_sym_image_COLON_COLON] = ACTIONS(224),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(224),
    [anon_sym_audio_COLON_COLON] = ACTIONS(224),
    [anon_sym_video_COLON_COLON] = ACTIONS(224),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(224),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(224),
    [aux_sym_url_token1] = ACTIONS(226),
    [anon_sym_LT_LT] = ACTIONS(226),
    [anon_sym_xref_COLON] = ACTIONS(226),
    [sym_emphasis] = ACTIONS(226),
    [sym_strong] = ACTIONS(226),
    [sym_monospace] = ACTIONS(226),
    [sym_highlight] = ACTIONS(224),
    [sym_superscript] = ACTIONS(226),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(230),
    [aux_sym_title1_token1] = ACTIONS(228),
    [sym_title2] = ACTIONS(228),
    [sym_title3] = ACTIONS(228),
    [sym_title4] = ACTIONS(228),
    [sym_title5] = ACTIONS(228),
    [sym_attr_mark] = ACTIONS(230),
    [aux_sym_attr_name_token1] = ACTIONS(230),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(228),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(230),
    [sym__checklist_mark] = ACTIONS(230),
    [aux_sym_code_token1] = ACTIONS(228),
    [anon_sym_SLASH_SLASH] = ACTIONS(228),
    [aux_sym_line_breaks_token1] = ACTIONS(228),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(228),
    [anon_sym_image_COLON_COLON] = ACTIONS(228),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(228),
    [anon_sym_audio_COLON_COLON] = ACTIONS(228),
    [anon_sym_video_COLON_COLON] = ACTIONS(228),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(228),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(228),
    [aux_sym_url_token1] = ACTIONS(230),
    [anon_sym_LT_LT] = ACTIONS(230),
    [anon_sym_xref_COLON] = ACTIONS(230),
    [sym_emphasis] = ACTIONS(230),
    [sym_strong] = ACTIONS(230),
    [sym_monospace] = ACTIONS(230),
    [sym_highlight] = ACTIONS(228),
    [sym_superscript] = ACTIONS(230),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(234),
    [aux_sym_title1_token1] = ACTIONS(232),
    [sym_title2] = ACTIONS(232),
    [sym_title3] = ACTIONS(232),
    [sym_title4] = ACTIONS(232),
    [sym_title5] = ACTIONS(232),
    [sym_attr_mark] = ACTIONS(234),
    [aux_sym_attr_name_token1] = ACTIONS(234),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(232),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(234),
    [sym__checklist_mark] = ACTIONS(234),
    [aux_sym_code_token1] = ACTIONS(232),
    [anon_sym_SLASH_SLASH] = ACTIONS(232),
    [aux_sym_line_breaks_token1] = ACTIONS(232),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(232),
    [anon_sym_image_COLON_COLON] = ACTIONS(232),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(232),
    [anon_sym_audio_COLON_COLON] = ACTIONS(232),
    [anon_sym_video_COLON_COLON] = ACTIONS(232),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(232),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(232),
    [aux_sym_url_token1] = ACTIONS(234),
    [anon_sym_LT_LT] = ACTIONS(234),
    [anon_sym_xref_COLON] = ACTIONS(234),
    [sym_emphasis] = ACTIONS(234),
    [sym_strong] = ACTIONS(234),
    [sym_monospace] = ACTIONS(234),
    [sym_highlight] = ACTIONS(232),
    [sym_superscript] = ACTIONS(234),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(238),
    [aux_sym_title1_token1] = ACTIONS(236),
    [sym_title2] = ACTIONS(236),
    [sym_title3] = ACTIONS(236),
    [sym_title4] = ACTIONS(236),
    [sym_title5] = ACTIONS(236),
    [aux_sym_attr_name_token1] = ACTIONS(238),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(236),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(238),
    [sym__checklist_mark] = ACTIONS(238),
    [aux_sym_code_token1] = ACTIONS(236),
    [anon_sym_SLASH_SLASH] = ACTIONS(236),
    [aux_sym_line_breaks_token1] = ACTIONS(236),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(236),
    [anon_sym_image_COLON_COLON] = ACTIONS(236),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(236),
    [anon_sym_audio_COLON_COLON] = ACTIONS(236),
    [anon_sym_video_COLON_COLON] = ACTIONS(236),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(236),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(236),
    [aux_sym_url_token1] = ACTIONS(238),
    [anon_sym_LT_LT] = ACTIONS(238),
    [anon_sym_xref_COLON] = ACTIONS(238),
    [sym_emphasis] = ACTIONS(238),
    [sym_strong] = ACTIONS(238),
    [sym_monospace] = ACTIONS(238),
    [sym_highlight] = ACTIONS(236),
    [sym_superscript] = ACTIONS(238),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(242),
    [aux_sym_title1_token1] = ACTIONS(240),
    [sym_title2] = ACTIONS(240),
    [sym_title3] = ACTIONS(240),
    [sym_title4] = ACTIONS(240),
    [sym_title5] = ACTIONS(240),
    [aux_sym_attr_name_token1] = ACTIONS(242),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(240),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(242),
    [sym__checklist_mark] = ACTIONS(242),
    [aux_sym_code_token1] = ACTIONS(240),
    [anon_sym_SLASH_SLASH] = ACTIONS(240),
    [aux_sym_line_breaks_token1] = ACTIONS(240),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(240),
    [anon_sym_image_COLON_COLON] = ACTIONS(240),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(240),
    [anon_sym_audio_COLON_COLON] = ACTIONS(240),
    [anon_sym_video_COLON_COLON] = ACTIONS(240),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(240),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(240),
    [aux_sym_url_token1] = ACTIONS(242),
    [anon_sym_LT_LT] = ACTIONS(242),
    [anon_sym_xref_COLON] = ACTIONS(242),
    [sym_emphasis] = ACTIONS(242),
    [sym_strong] = ACTIONS(242),
    [sym_monospace] = ACTIONS(242),
    [sym_highlight] = ACTIONS(240),
    [sym_superscript] = ACTIONS(242),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(246),
    [aux_sym_title1_token1] = ACTIONS(244),
    [sym_title2] = ACTIONS(244),
    [sym_title3] = ACTIONS(244),
    [sym_title4] = ACTIONS(244),
    [sym_title5] = ACTIONS(244),
    [aux_sym_attr_name_token1] = ACTIONS(246),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(244),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(246),
    [sym__checklist_mark] = ACTIONS(246),
    [aux_sym_code_token1] = ACTIONS(244),
    [anon_sym_SLASH_SLASH] = ACTIONS(244),
    [aux_sym_line_breaks_token1] = ACTIONS(244),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(244),
    [anon_sym_image_COLON_COLON] = ACTIONS(244),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(244),
    [anon_sym_audio_COLON_COLON] = ACTIONS(244),
    [anon_sym_video_COLON_COLON] = ACTIONS(244),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(244),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(244),
    [aux_sym_url_token1] = ACTIONS(246),
    [anon_sym_LT_LT] = ACTIONS(246),
    [anon_sym_xref_COLON] = ACTIONS(246),
    [sym_emphasis] = ACTIONS(246),
    [sym_strong] = ACTIONS(246),
    [sym_monospace] = ACTIONS(246),
    [sym_highlight] = ACTIONS(244),
    [sym_superscript] = ACTIONS(246),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_DOT] = ACTIONS(250),
    [aux_sym_title1_token1] = ACTIONS(248),
    [sym_title2] = ACTIONS(248),
    [sym_title3] = ACTIONS(248),
    [sym_title4] = ACTIONS(248),
    [sym_title5] = ACTIONS(248),
    [aux_sym_attr_name_token1] = ACTIONS(250),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(248),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(250),
    [sym__checklist_mark] = ACTIONS(250),
    [aux_sym_code_token1] = ACTIONS(248),
    [anon_sym_SLASH_SLASH] = ACTIONS(248),
    [aux_sym_line_breaks_token1] = ACTIONS(248),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(248),
    [anon_sym_image_COLON_COLON] = ACTIONS(248),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(248),
    [anon_sym_audio_COLON_COLON] = ACTIONS(248),
    [anon_sym_video_COLON_COLON] = ACTIONS(248),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(248),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(248),
    [aux_sym_url_token1] = ACTIONS(250),
    [anon_sym_LT_LT] = ACTIONS(250),
    [anon_sym_xref_COLON] = ACTIONS(250),
    [sym_emphasis] = ACTIONS(250),
    [sym_strong] = ACTIONS(250),
    [sym_monospace] = ACTIONS(250),
    [sym_highlight] = ACTIONS(248),
    [sym_superscript] = ACTIONS(250),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_DOT] = ACTIONS(254),
    [aux_sym_title1_token1] = ACTIONS(252),
    [sym_title2] = ACTIONS(252),
    [sym_title3] = ACTIONS(252),
    [sym_title4] = ACTIONS(252),
    [sym_title5] = ACTIONS(252),
    [aux_sym_attr_name_token1] = ACTIONS(254),
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
    [aux_sym__ordered_list_mark_token2] = ACTIONS(252),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(254),
    [sym__checklist_mark] = ACTIONS(254),
    [aux_sym_code_token1] = ACTIONS(252),
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [aux_sym_line_breaks_token1] = ACTIONS(252),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(252),
    [anon_sym_image_COLON_COLON] = ACTIONS(252),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(252),
    [anon_sym_audio_COLON_COLON] = ACTIONS(252),
    [anon_sym_video_COLON_COLON] = ACTIONS(252),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(252),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(252),
    [aux_sym_url_token1] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(254),
    [anon_sym_xref_COLON] = ACTIONS(254),
    [sym_emphasis] = ACTIONS(254),
    [sym_strong] = ACTIONS(254),
    [sym_monospace] = ACTIONS(254),
    [sym_highlight] = ACTIONS(252),
    [sym_superscript] = ACTIONS(254),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(258),
    [aux_sym_title1_token1] = ACTIONS(256),
    [sym_title2] = ACTIONS(256),
    [sym_title3] = ACTIONS(256),
    [sym_title4] = ACTIONS(256),
    [sym_title5] = ACTIONS(256),
    [aux_sym_attr_name_token1] = ACTIONS(258),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(256),
    [aux_sym_line_breaks_token1] = ACTIONS(256),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(256),
    [anon_sym_image_COLON_COLON] = ACTIONS(256),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(256),
    [anon_sym_audio_COLON_COLON] = ACTIONS(256),
    [anon_sym_video_COLON_COLON] = ACTIONS(256),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(256),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(256),
    [aux_sym_url_token1] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_xref_COLON] = ACTIONS(258),
    [sym_emphasis] = ACTIONS(258),
    [sym_strong] = ACTIONS(258),
    [sym_monospace] = ACTIONS(258),
    [sym_highlight] = ACTIONS(256),
    [sym_superscript] = ACTIONS(258),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
    [aux_sym_title1_token1] = ACTIONS(260),
    [sym_title2] = ACTIONS(260),
    [sym_title3] = ACTIONS(260),
    [sym_title4] = ACTIONS(260),
    [sym_title5] = ACTIONS(260),
    [aux_sym_attr_name_token1] = ACTIONS(262),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(260),
    [aux_sym_line_breaks_token1] = ACTIONS(260),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(260),
    [anon_sym_image_COLON_COLON] = ACTIONS(260),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(260),
    [anon_sym_audio_COLON_COLON] = ACTIONS(260),
    [anon_sym_video_COLON_COLON] = ACTIONS(260),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(260),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(260),
    [aux_sym_url_token1] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(262),
    [anon_sym_xref_COLON] = ACTIONS(262),
    [sym_emphasis] = ACTIONS(262),
    [sym_strong] = ACTIONS(262),
    [sym_monospace] = ACTIONS(262),
    [sym_highlight] = ACTIONS(260),
    [sym_superscript] = ACTIONS(262),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_DOT] = ACTIONS(266),
    [aux_sym_title1_token1] = ACTIONS(264),
    [sym_title2] = ACTIONS(264),
    [sym_title3] = ACTIONS(264),
    [sym_title4] = ACTIONS(264),
    [sym_title5] = ACTIONS(264),
    [aux_sym_attr_name_token1] = ACTIONS(266),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(264),
    [aux_sym_line_breaks_token1] = ACTIONS(264),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(264),
    [anon_sym_image_COLON_COLON] = ACTIONS(264),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(264),
    [anon_sym_audio_COLON_COLON] = ACTIONS(264),
    [anon_sym_video_COLON_COLON] = ACTIONS(264),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(264),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(264),
    [aux_sym_url_token1] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_xref_COLON] = ACTIONS(266),
    [sym_emphasis] = ACTIONS(266),
    [sym_strong] = ACTIONS(266),
    [sym_monospace] = ACTIONS(266),
    [sym_highlight] = ACTIONS(264),
    [sym_superscript] = ACTIONS(266),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_DOT] = ACTIONS(270),
    [aux_sym_title1_token1] = ACTIONS(268),
    [sym_title2] = ACTIONS(268),
    [sym_title3] = ACTIONS(268),
    [sym_title4] = ACTIONS(268),
    [sym_title5] = ACTIONS(268),
    [aux_sym_attr_name_token1] = ACTIONS(270),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(268),
    [aux_sym_line_breaks_token1] = ACTIONS(268),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(268),
    [anon_sym_image_COLON_COLON] = ACTIONS(268),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(268),
    [anon_sym_audio_COLON_COLON] = ACTIONS(268),
    [anon_sym_video_COLON_COLON] = ACTIONS(268),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(268),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(268),
    [aux_sym_url_token1] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(270),
    [anon_sym_xref_COLON] = ACTIONS(270),
    [sym_emphasis] = ACTIONS(270),
    [sym_strong] = ACTIONS(270),
    [sym_monospace] = ACTIONS(270),
    [sym_highlight] = ACTIONS(268),
    [sym_superscript] = ACTIONS(270),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(274),
    [aux_sym_title1_token1] = ACTIONS(272),
    [sym_title2] = ACTIONS(272),
    [sym_title3] = ACTIONS(272),
    [sym_title4] = ACTIONS(272),
    [sym_title5] = ACTIONS(272),
    [aux_sym_attr_name_token1] = ACTIONS(274),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(272),
    [aux_sym_line_breaks_token1] = ACTIONS(272),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(272),
    [anon_sym_image_COLON_COLON] = ACTIONS(272),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(272),
    [anon_sym_audio_COLON_COLON] = ACTIONS(272),
    [anon_sym_video_COLON_COLON] = ACTIONS(272),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(272),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(272),
    [aux_sym_url_token1] = ACTIONS(274),
    [anon_sym_LT_LT] = ACTIONS(274),
    [anon_sym_xref_COLON] = ACTIONS(274),
    [sym_emphasis] = ACTIONS(274),
    [sym_strong] = ACTIONS(274),
    [sym_monospace] = ACTIONS(274),
    [sym_highlight] = ACTIONS(272),
    [sym_superscript] = ACTIONS(274),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(278),
    [aux_sym_title1_token1] = ACTIONS(276),
    [sym_title2] = ACTIONS(276),
    [sym_title3] = ACTIONS(276),
    [sym_title4] = ACTIONS(276),
    [sym_title5] = ACTIONS(276),
    [aux_sym_attr_name_token1] = ACTIONS(278),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(276),
    [aux_sym_line_breaks_token1] = ACTIONS(276),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(276),
    [anon_sym_image_COLON_COLON] = ACTIONS(276),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(276),
    [anon_sym_audio_COLON_COLON] = ACTIONS(276),
    [anon_sym_video_COLON_COLON] = ACTIONS(276),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(276),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(276),
    [aux_sym_url_token1] = ACTIONS(278),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_xref_COLON] = ACTIONS(278),
    [sym_emphasis] = ACTIONS(278),
    [sym_strong] = ACTIONS(278),
    [sym_monospace] = ACTIONS(278),
    [sym_highlight] = ACTIONS(276),
    [sym_superscript] = ACTIONS(278),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(282),
    [aux_sym_title1_token1] = ACTIONS(280),
    [sym_title2] = ACTIONS(280),
    [sym_title3] = ACTIONS(280),
    [sym_title4] = ACTIONS(280),
    [sym_title5] = ACTIONS(280),
    [aux_sym_attr_name_token1] = ACTIONS(282),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(280),
    [aux_sym_line_breaks_token1] = ACTIONS(280),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(280),
    [anon_sym_image_COLON_COLON] = ACTIONS(280),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(280),
    [anon_sym_audio_COLON_COLON] = ACTIONS(280),
    [anon_sym_video_COLON_COLON] = ACTIONS(280),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(280),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(280),
    [aux_sym_url_token1] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_xref_COLON] = ACTIONS(282),
    [sym_emphasis] = ACTIONS(282),
    [sym_strong] = ACTIONS(282),
    [sym_monospace] = ACTIONS(282),
    [sym_highlight] = ACTIONS(280),
    [sym_superscript] = ACTIONS(282),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(286),
    [aux_sym_title1_token1] = ACTIONS(284),
    [sym_title2] = ACTIONS(284),
    [sym_title3] = ACTIONS(284),
    [sym_title4] = ACTIONS(284),
    [sym_title5] = ACTIONS(284),
    [aux_sym_attr_name_token1] = ACTIONS(286),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(284),
    [aux_sym_line_breaks_token1] = ACTIONS(284),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(284),
    [anon_sym_image_COLON_COLON] = ACTIONS(284),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(284),
    [anon_sym_audio_COLON_COLON] = ACTIONS(284),
    [anon_sym_video_COLON_COLON] = ACTIONS(284),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(284),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(284),
    [aux_sym_url_token1] = ACTIONS(286),
    [anon_sym_LT_LT] = ACTIONS(286),
    [anon_sym_xref_COLON] = ACTIONS(286),
    [sym_emphasis] = ACTIONS(286),
    [sym_strong] = ACTIONS(286),
    [sym_monospace] = ACTIONS(286),
    [sym_highlight] = ACTIONS(284),
    [sym_superscript] = ACTIONS(286),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(290),
    [aux_sym_title1_token1] = ACTIONS(288),
    [sym_title2] = ACTIONS(288),
    [sym_title3] = ACTIONS(288),
    [sym_title4] = ACTIONS(288),
    [sym_title5] = ACTIONS(288),
    [aux_sym_attr_name_token1] = ACTIONS(290),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [aux_sym_line_breaks_token1] = ACTIONS(288),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(288),
    [anon_sym_image_COLON_COLON] = ACTIONS(288),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(288),
    [anon_sym_audio_COLON_COLON] = ACTIONS(288),
    [anon_sym_video_COLON_COLON] = ACTIONS(288),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(288),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(288),
    [aux_sym_url_token1] = ACTIONS(290),
    [anon_sym_LT_LT] = ACTIONS(290),
    [anon_sym_xref_COLON] = ACTIONS(290),
    [sym_emphasis] = ACTIONS(290),
    [sym_strong] = ACTIONS(290),
    [sym_monospace] = ACTIONS(290),
    [sym_highlight] = ACTIONS(288),
    [sym_superscript] = ACTIONS(290),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_DOT] = ACTIONS(294),
    [aux_sym_title1_token1] = ACTIONS(292),
    [sym_title2] = ACTIONS(292),
    [sym_title3] = ACTIONS(292),
    [sym_title4] = ACTIONS(292),
    [sym_title5] = ACTIONS(292),
    [aux_sym_attr_name_token1] = ACTIONS(294),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(292),
    [aux_sym_line_breaks_token1] = ACTIONS(292),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(292),
    [anon_sym_image_COLON_COLON] = ACTIONS(292),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(292),
    [anon_sym_audio_COLON_COLON] = ACTIONS(292),
    [anon_sym_video_COLON_COLON] = ACTIONS(292),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(292),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(292),
    [aux_sym_url_token1] = ACTIONS(294),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_xref_COLON] = ACTIONS(294),
    [sym_emphasis] = ACTIONS(294),
    [sym_strong] = ACTIONS(294),
    [sym_monospace] = ACTIONS(294),
    [sym_highlight] = ACTIONS(292),
    [sym_superscript] = ACTIONS(294),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(298),
    [aux_sym_title1_token1] = ACTIONS(296),
    [sym_title2] = ACTIONS(296),
    [sym_title3] = ACTIONS(296),
    [sym_title4] = ACTIONS(296),
    [sym_title5] = ACTIONS(296),
    [aux_sym_attr_name_token1] = ACTIONS(298),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(296),
    [aux_sym_line_breaks_token1] = ACTIONS(296),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(296),
    [anon_sym_image_COLON_COLON] = ACTIONS(296),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(296),
    [anon_sym_audio_COLON_COLON] = ACTIONS(296),
    [anon_sym_video_COLON_COLON] = ACTIONS(296),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(296),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(296),
    [aux_sym_url_token1] = ACTIONS(298),
    [anon_sym_LT_LT] = ACTIONS(298),
    [anon_sym_xref_COLON] = ACTIONS(298),
    [sym_emphasis] = ACTIONS(298),
    [sym_strong] = ACTIONS(298),
    [sym_monospace] = ACTIONS(298),
    [sym_highlight] = ACTIONS(296),
    [sym_superscript] = ACTIONS(298),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(302),
    [aux_sym_title1_token1] = ACTIONS(300),
    [sym_title2] = ACTIONS(300),
    [sym_title3] = ACTIONS(300),
    [sym_title4] = ACTIONS(300),
    [sym_title5] = ACTIONS(300),
    [aux_sym_attr_name_token1] = ACTIONS(302),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [aux_sym_line_breaks_token1] = ACTIONS(300),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(300),
    [anon_sym_image_COLON_COLON] = ACTIONS(300),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(300),
    [anon_sym_audio_COLON_COLON] = ACTIONS(300),
    [anon_sym_video_COLON_COLON] = ACTIONS(300),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(300),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(300),
    [aux_sym_url_token1] = ACTIONS(302),
    [anon_sym_LT_LT] = ACTIONS(302),
    [anon_sym_xref_COLON] = ACTIONS(302),
    [sym_emphasis] = ACTIONS(302),
    [sym_strong] = ACTIONS(302),
    [sym_monospace] = ACTIONS(302),
    [sym_highlight] = ACTIONS(300),
    [sym_superscript] = ACTIONS(302),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(306),
    [aux_sym_title1_token1] = ACTIONS(304),
    [sym_title2] = ACTIONS(304),
    [sym_title3] = ACTIONS(304),
    [sym_title4] = ACTIONS(304),
    [sym_title5] = ACTIONS(304),
    [aux_sym_attr_name_token1] = ACTIONS(306),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(304),
    [aux_sym_line_breaks_token1] = ACTIONS(304),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(304),
    [anon_sym_image_COLON_COLON] = ACTIONS(304),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(304),
    [anon_sym_audio_COLON_COLON] = ACTIONS(304),
    [anon_sym_video_COLON_COLON] = ACTIONS(304),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(304),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(304),
    [aux_sym_url_token1] = ACTIONS(306),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_xref_COLON] = ACTIONS(306),
    [sym_emphasis] = ACTIONS(306),
    [sym_strong] = ACTIONS(306),
    [sym_monospace] = ACTIONS(306),
    [sym_highlight] = ACTIONS(304),
    [sym_superscript] = ACTIONS(306),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(310),
    [aux_sym_title1_token1] = ACTIONS(308),
    [sym_title2] = ACTIONS(308),
    [sym_title3] = ACTIONS(308),
    [sym_title4] = ACTIONS(308),
    [sym_title5] = ACTIONS(308),
    [aux_sym_attr_name_token1] = ACTIONS(310),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [aux_sym_line_breaks_token1] = ACTIONS(308),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(308),
    [anon_sym_image_COLON_COLON] = ACTIONS(308),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(308),
    [anon_sym_audio_COLON_COLON] = ACTIONS(308),
    [anon_sym_video_COLON_COLON] = ACTIONS(308),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(308),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(308),
    [aux_sym_url_token1] = ACTIONS(310),
    [anon_sym_LT_LT] = ACTIONS(310),
    [anon_sym_xref_COLON] = ACTIONS(310),
    [sym_emphasis] = ACTIONS(310),
    [sym_strong] = ACTIONS(310),
    [sym_monospace] = ACTIONS(310),
    [sym_highlight] = ACTIONS(308),
    [sym_superscript] = ACTIONS(310),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(314),
    [aux_sym_title1_token1] = ACTIONS(312),
    [sym_title2] = ACTIONS(312),
    [sym_title3] = ACTIONS(312),
    [sym_title4] = ACTIONS(312),
    [sym_title5] = ACTIONS(312),
    [aux_sym_attr_name_token1] = ACTIONS(314),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(312),
    [aux_sym_line_breaks_token1] = ACTIONS(312),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(312),
    [anon_sym_image_COLON_COLON] = ACTIONS(312),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(312),
    [anon_sym_audio_COLON_COLON] = ACTIONS(312),
    [anon_sym_video_COLON_COLON] = ACTIONS(312),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(312),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(312),
    [aux_sym_url_token1] = ACTIONS(314),
    [anon_sym_LT_LT] = ACTIONS(314),
    [anon_sym_xref_COLON] = ACTIONS(314),
    [sym_emphasis] = ACTIONS(314),
    [sym_strong] = ACTIONS(314),
    [sym_monospace] = ACTIONS(314),
    [sym_highlight] = ACTIONS(312),
    [sym_superscript] = ACTIONS(314),
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
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(318),
    [aux_sym_title1_token1] = ACTIONS(316),
    [sym_title2] = ACTIONS(316),
    [sym_title3] = ACTIONS(316),
    [sym_title4] = ACTIONS(316),
    [sym_title5] = ACTIONS(316),
    [aux_sym_attr_name_token1] = ACTIONS(318),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(316),
    [aux_sym_line_breaks_token1] = ACTIONS(316),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(316),
    [anon_sym_image_COLON_COLON] = ACTIONS(316),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(316),
    [anon_sym_audio_COLON_COLON] = ACTIONS(316),
    [anon_sym_video_COLON_COLON] = ACTIONS(316),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(316),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(316),
    [aux_sym_url_token1] = ACTIONS(318),
    [anon_sym_LT_LT] = ACTIONS(318),
    [anon_sym_xref_COLON] = ACTIONS(318),
    [sym_emphasis] = ACTIONS(318),
    [sym_strong] = ACTIONS(318),
    [sym_monospace] = ACTIONS(318),
    [sym_highlight] = ACTIONS(316),
    [sym_superscript] = ACTIONS(318),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(322),
    [aux_sym_title1_token1] = ACTIONS(320),
    [sym_title2] = ACTIONS(320),
    [sym_title3] = ACTIONS(320),
    [sym_title4] = ACTIONS(320),
    [sym_title5] = ACTIONS(320),
    [aux_sym_attr_name_token1] = ACTIONS(322),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(320),
    [aux_sym_line_breaks_token1] = ACTIONS(320),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(320),
    [anon_sym_image_COLON_COLON] = ACTIONS(320),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(320),
    [anon_sym_audio_COLON_COLON] = ACTIONS(320),
    [anon_sym_video_COLON_COLON] = ACTIONS(320),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(320),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(320),
    [aux_sym_url_token1] = ACTIONS(322),
    [anon_sym_LT_LT] = ACTIONS(322),
    [anon_sym_xref_COLON] = ACTIONS(322),
    [sym_emphasis] = ACTIONS(322),
    [sym_strong] = ACTIONS(322),
    [sym_monospace] = ACTIONS(322),
    [sym_highlight] = ACTIONS(320),
    [sym_superscript] = ACTIONS(322),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(326),
    [aux_sym_title1_token1] = ACTIONS(324),
    [sym_title2] = ACTIONS(324),
    [sym_title3] = ACTIONS(324),
    [sym_title4] = ACTIONS(324),
    [sym_title5] = ACTIONS(324),
    [aux_sym_attr_name_token1] = ACTIONS(326),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(324),
    [aux_sym_line_breaks_token1] = ACTIONS(324),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(324),
    [anon_sym_image_COLON_COLON] = ACTIONS(324),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(324),
    [anon_sym_audio_COLON_COLON] = ACTIONS(324),
    [anon_sym_video_COLON_COLON] = ACTIONS(324),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(324),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(324),
    [aux_sym_url_token1] = ACTIONS(326),
    [anon_sym_LT_LT] = ACTIONS(326),
    [anon_sym_xref_COLON] = ACTIONS(326),
    [sym_emphasis] = ACTIONS(326),
    [sym_strong] = ACTIONS(326),
    [sym_monospace] = ACTIONS(326),
    [sym_highlight] = ACTIONS(324),
    [sym_superscript] = ACTIONS(326),
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
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(330),
    [aux_sym_title1_token1] = ACTIONS(328),
    [sym_title2] = ACTIONS(328),
    [sym_title3] = ACTIONS(328),
    [sym_title4] = ACTIONS(328),
    [sym_title5] = ACTIONS(328),
    [aux_sym_attr_name_token1] = ACTIONS(330),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(328),
    [aux_sym_line_breaks_token1] = ACTIONS(328),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(328),
    [anon_sym_image_COLON_COLON] = ACTIONS(328),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(328),
    [anon_sym_audio_COLON_COLON] = ACTIONS(328),
    [anon_sym_video_COLON_COLON] = ACTIONS(328),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(328),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(328),
    [aux_sym_url_token1] = ACTIONS(330),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_xref_COLON] = ACTIONS(330),
    [sym_emphasis] = ACTIONS(330),
    [sym_strong] = ACTIONS(330),
    [sym_monospace] = ACTIONS(330),
    [sym_highlight] = ACTIONS(328),
    [sym_superscript] = ACTIONS(330),
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
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(334),
    [aux_sym_title1_token1] = ACTIONS(332),
    [sym_title2] = ACTIONS(332),
    [sym_title3] = ACTIONS(332),
    [sym_title4] = ACTIONS(332),
    [sym_title5] = ACTIONS(332),
    [aux_sym_attr_name_token1] = ACTIONS(334),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(332),
    [aux_sym_line_breaks_token1] = ACTIONS(332),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(332),
    [anon_sym_image_COLON_COLON] = ACTIONS(332),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(332),
    [anon_sym_audio_COLON_COLON] = ACTIONS(332),
    [anon_sym_video_COLON_COLON] = ACTIONS(332),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(332),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(332),
    [aux_sym_url_token1] = ACTIONS(334),
    [anon_sym_LT_LT] = ACTIONS(334),
    [anon_sym_xref_COLON] = ACTIONS(334),
    [sym_emphasis] = ACTIONS(334),
    [sym_strong] = ACTIONS(334),
    [sym_monospace] = ACTIONS(334),
    [sym_highlight] = ACTIONS(332),
    [sym_superscript] = ACTIONS(334),
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
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(338),
    [aux_sym_title1_token1] = ACTIONS(336),
    [sym_title2] = ACTIONS(336),
    [sym_title3] = ACTIONS(336),
    [sym_title4] = ACTIONS(336),
    [sym_title5] = ACTIONS(336),
    [aux_sym_attr_name_token1] = ACTIONS(338),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(336),
    [aux_sym_line_breaks_token1] = ACTIONS(336),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(336),
    [anon_sym_image_COLON_COLON] = ACTIONS(336),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(336),
    [anon_sym_audio_COLON_COLON] = ACTIONS(336),
    [anon_sym_video_COLON_COLON] = ACTIONS(336),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(336),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(336),
    [aux_sym_url_token1] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(338),
    [anon_sym_xref_COLON] = ACTIONS(338),
    [sym_emphasis] = ACTIONS(338),
    [sym_strong] = ACTIONS(338),
    [sym_monospace] = ACTIONS(338),
    [sym_highlight] = ACTIONS(336),
    [sym_superscript] = ACTIONS(338),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_DOT] = ACTIONS(342),
    [aux_sym_title1_token1] = ACTIONS(340),
    [sym_title2] = ACTIONS(340),
    [sym_title3] = ACTIONS(340),
    [sym_title4] = ACTIONS(340),
    [sym_title5] = ACTIONS(340),
    [aux_sym_attr_name_token1] = ACTIONS(342),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [aux_sym_line_breaks_token1] = ACTIONS(340),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(340),
    [anon_sym_image_COLON_COLON] = ACTIONS(340),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(340),
    [anon_sym_audio_COLON_COLON] = ACTIONS(340),
    [anon_sym_video_COLON_COLON] = ACTIONS(340),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(340),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(340),
    [aux_sym_url_token1] = ACTIONS(342),
    [anon_sym_LT_LT] = ACTIONS(342),
    [anon_sym_xref_COLON] = ACTIONS(342),
    [sym_emphasis] = ACTIONS(342),
    [sym_strong] = ACTIONS(342),
    [sym_monospace] = ACTIONS(342),
    [sym_highlight] = ACTIONS(340),
    [sym_superscript] = ACTIONS(342),
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
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_DOT] = ACTIONS(346),
    [aux_sym_title1_token1] = ACTIONS(344),
    [sym_title2] = ACTIONS(344),
    [sym_title3] = ACTIONS(344),
    [sym_title4] = ACTIONS(344),
    [sym_title5] = ACTIONS(344),
    [aux_sym_attr_name_token1] = ACTIONS(346),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(344),
    [aux_sym_line_breaks_token1] = ACTIONS(344),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(344),
    [anon_sym_image_COLON_COLON] = ACTIONS(344),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(344),
    [anon_sym_audio_COLON_COLON] = ACTIONS(344),
    [anon_sym_video_COLON_COLON] = ACTIONS(344),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(344),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(344),
    [aux_sym_url_token1] = ACTIONS(346),
    [anon_sym_LT_LT] = ACTIONS(346),
    [anon_sym_xref_COLON] = ACTIONS(346),
    [sym_emphasis] = ACTIONS(346),
    [sym_strong] = ACTIONS(346),
    [sym_monospace] = ACTIONS(346),
    [sym_highlight] = ACTIONS(344),
    [sym_superscript] = ACTIONS(346),
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
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(350),
    [aux_sym_title1_token1] = ACTIONS(348),
    [sym_title2] = ACTIONS(348),
    [sym_title3] = ACTIONS(348),
    [sym_title4] = ACTIONS(348),
    [sym_title5] = ACTIONS(348),
    [aux_sym_attr_name_token1] = ACTIONS(350),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(348),
    [aux_sym_line_breaks_token1] = ACTIONS(348),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(348),
    [anon_sym_image_COLON_COLON] = ACTIONS(348),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(348),
    [anon_sym_audio_COLON_COLON] = ACTIONS(348),
    [anon_sym_video_COLON_COLON] = ACTIONS(348),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(348),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(348),
    [aux_sym_url_token1] = ACTIONS(350),
    [anon_sym_LT_LT] = ACTIONS(350),
    [anon_sym_xref_COLON] = ACTIONS(350),
    [sym_emphasis] = ACTIONS(350),
    [sym_strong] = ACTIONS(350),
    [sym_monospace] = ACTIONS(350),
    [sym_highlight] = ACTIONS(348),
    [sym_superscript] = ACTIONS(350),
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
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_DOT] = ACTIONS(354),
    [aux_sym_title1_token1] = ACTIONS(352),
    [sym_title2] = ACTIONS(352),
    [sym_title3] = ACTIONS(352),
    [sym_title4] = ACTIONS(352),
    [sym_title5] = ACTIONS(352),
    [aux_sym_attr_name_token1] = ACTIONS(354),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [aux_sym_line_breaks_token1] = ACTIONS(352),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(352),
    [anon_sym_image_COLON_COLON] = ACTIONS(352),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(352),
    [anon_sym_audio_COLON_COLON] = ACTIONS(352),
    [anon_sym_video_COLON_COLON] = ACTIONS(352),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(352),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(352),
    [aux_sym_url_token1] = ACTIONS(354),
    [anon_sym_LT_LT] = ACTIONS(354),
    [anon_sym_xref_COLON] = ACTIONS(354),
    [sym_emphasis] = ACTIONS(354),
    [sym_strong] = ACTIONS(354),
    [sym_monospace] = ACTIONS(354),
    [sym_highlight] = ACTIONS(352),
    [sym_superscript] = ACTIONS(354),
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
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(358),
    [aux_sym_title1_token1] = ACTIONS(356),
    [sym_title2] = ACTIONS(356),
    [sym_title3] = ACTIONS(356),
    [sym_title4] = ACTIONS(356),
    [sym_title5] = ACTIONS(356),
    [aux_sym_attr_name_token1] = ACTIONS(358),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(356),
    [aux_sym_line_breaks_token1] = ACTIONS(356),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(356),
    [anon_sym_image_COLON_COLON] = ACTIONS(356),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(356),
    [anon_sym_audio_COLON_COLON] = ACTIONS(356),
    [anon_sym_video_COLON_COLON] = ACTIONS(356),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(356),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(356),
    [aux_sym_url_token1] = ACTIONS(358),
    [anon_sym_LT_LT] = ACTIONS(358),
    [anon_sym_xref_COLON] = ACTIONS(358),
    [sym_emphasis] = ACTIONS(358),
    [sym_strong] = ACTIONS(358),
    [sym_monospace] = ACTIONS(358),
    [sym_highlight] = ACTIONS(356),
    [sym_superscript] = ACTIONS(358),
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
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_DOT] = ACTIONS(362),
    [aux_sym_title1_token1] = ACTIONS(360),
    [sym_title2] = ACTIONS(360),
    [sym_title3] = ACTIONS(360),
    [sym_title4] = ACTIONS(360),
    [sym_title5] = ACTIONS(360),
    [aux_sym_attr_name_token1] = ACTIONS(362),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [aux_sym_line_breaks_token1] = ACTIONS(360),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(360),
    [anon_sym_image_COLON_COLON] = ACTIONS(360),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(360),
    [anon_sym_audio_COLON_COLON] = ACTIONS(360),
    [anon_sym_video_COLON_COLON] = ACTIONS(360),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(360),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(360),
    [aux_sym_url_token1] = ACTIONS(362),
    [anon_sym_LT_LT] = ACTIONS(362),
    [anon_sym_xref_COLON] = ACTIONS(362),
    [sym_emphasis] = ACTIONS(362),
    [sym_strong] = ACTIONS(362),
    [sym_monospace] = ACTIONS(362),
    [sym_highlight] = ACTIONS(360),
    [sym_superscript] = ACTIONS(362),
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
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_DOT] = ACTIONS(366),
    [aux_sym_title1_token1] = ACTIONS(364),
    [sym_title2] = ACTIONS(364),
    [sym_title3] = ACTIONS(364),
    [sym_title4] = ACTIONS(364),
    [sym_title5] = ACTIONS(364),
    [aux_sym_attr_name_token1] = ACTIONS(366),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(364),
    [aux_sym_line_breaks_token1] = ACTIONS(364),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(364),
    [anon_sym_image_COLON_COLON] = ACTIONS(364),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(364),
    [anon_sym_audio_COLON_COLON] = ACTIONS(364),
    [anon_sym_video_COLON_COLON] = ACTIONS(364),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(364),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(364),
    [aux_sym_url_token1] = ACTIONS(366),
    [anon_sym_LT_LT] = ACTIONS(366),
    [anon_sym_xref_COLON] = ACTIONS(366),
    [sym_emphasis] = ACTIONS(366),
    [sym_strong] = ACTIONS(366),
    [sym_monospace] = ACTIONS(366),
    [sym_highlight] = ACTIONS(364),
    [sym_superscript] = ACTIONS(366),
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
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(370),
    [aux_sym_title1_token1] = ACTIONS(368),
    [sym_title2] = ACTIONS(368),
    [sym_title3] = ACTIONS(368),
    [sym_title4] = ACTIONS(368),
    [sym_title5] = ACTIONS(368),
    [aux_sym_attr_name_token1] = ACTIONS(370),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(368),
    [aux_sym_line_breaks_token1] = ACTIONS(368),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(368),
    [anon_sym_image_COLON_COLON] = ACTIONS(368),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(368),
    [anon_sym_audio_COLON_COLON] = ACTIONS(368),
    [anon_sym_video_COLON_COLON] = ACTIONS(368),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(368),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(368),
    [aux_sym_url_token1] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_xref_COLON] = ACTIONS(370),
    [sym_emphasis] = ACTIONS(370),
    [sym_strong] = ACTIONS(370),
    [sym_monospace] = ACTIONS(370),
    [sym_highlight] = ACTIONS(368),
    [sym_superscript] = ACTIONS(370),
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
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(374),
    [aux_sym_title1_token1] = ACTIONS(372),
    [sym_title2] = ACTIONS(372),
    [sym_title3] = ACTIONS(372),
    [sym_title4] = ACTIONS(372),
    [sym_title5] = ACTIONS(372),
    [aux_sym_attr_name_token1] = ACTIONS(374),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(372),
    [aux_sym_line_breaks_token1] = ACTIONS(372),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(372),
    [anon_sym_image_COLON_COLON] = ACTIONS(372),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(372),
    [anon_sym_audio_COLON_COLON] = ACTIONS(372),
    [anon_sym_video_COLON_COLON] = ACTIONS(372),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(372),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(372),
    [aux_sym_url_token1] = ACTIONS(374),
    [anon_sym_LT_LT] = ACTIONS(374),
    [anon_sym_xref_COLON] = ACTIONS(374),
    [sym_emphasis] = ACTIONS(374),
    [sym_strong] = ACTIONS(374),
    [sym_monospace] = ACTIONS(374),
    [sym_highlight] = ACTIONS(372),
    [sym_superscript] = ACTIONS(374),
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
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [anon_sym_DOT] = ACTIONS(378),
    [aux_sym_title1_token1] = ACTIONS(376),
    [sym_title2] = ACTIONS(376),
    [sym_title3] = ACTIONS(376),
    [sym_title4] = ACTIONS(376),
    [sym_title5] = ACTIONS(376),
    [aux_sym_attr_name_token1] = ACTIONS(378),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(376),
    [aux_sym_line_breaks_token1] = ACTIONS(376),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(376),
    [anon_sym_image_COLON_COLON] = ACTIONS(376),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(376),
    [anon_sym_audio_COLON_COLON] = ACTIONS(376),
    [anon_sym_video_COLON_COLON] = ACTIONS(376),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(376),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(376),
    [aux_sym_url_token1] = ACTIONS(378),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_xref_COLON] = ACTIONS(378),
    [sym_emphasis] = ACTIONS(378),
    [sym_strong] = ACTIONS(378),
    [sym_monospace] = ACTIONS(378),
    [sym_highlight] = ACTIONS(376),
    [sym_superscript] = ACTIONS(378),
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
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_DOT] = ACTIONS(382),
    [aux_sym_title1_token1] = ACTIONS(380),
    [sym_title2] = ACTIONS(380),
    [sym_title3] = ACTIONS(380),
    [sym_title4] = ACTIONS(380),
    [sym_title5] = ACTIONS(380),
    [aux_sym_attr_name_token1] = ACTIONS(382),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(380),
    [aux_sym_line_breaks_token1] = ACTIONS(380),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(380),
    [anon_sym_image_COLON_COLON] = ACTIONS(380),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(380),
    [anon_sym_audio_COLON_COLON] = ACTIONS(380),
    [anon_sym_video_COLON_COLON] = ACTIONS(380),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(380),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(380),
    [aux_sym_url_token1] = ACTIONS(382),
    [anon_sym_LT_LT] = ACTIONS(382),
    [anon_sym_xref_COLON] = ACTIONS(382),
    [sym_emphasis] = ACTIONS(382),
    [sym_strong] = ACTIONS(382),
    [sym_monospace] = ACTIONS(382),
    [sym_highlight] = ACTIONS(380),
    [sym_superscript] = ACTIONS(382),
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
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(386),
    [aux_sym_title1_token1] = ACTIONS(384),
    [sym_title2] = ACTIONS(384),
    [sym_title3] = ACTIONS(384),
    [sym_title4] = ACTIONS(384),
    [sym_title5] = ACTIONS(384),
    [aux_sym_attr_name_token1] = ACTIONS(386),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(384),
    [aux_sym_line_breaks_token1] = ACTIONS(384),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(384),
    [anon_sym_image_COLON_COLON] = ACTIONS(384),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(384),
    [anon_sym_audio_COLON_COLON] = ACTIONS(384),
    [anon_sym_video_COLON_COLON] = ACTIONS(384),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(384),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(384),
    [aux_sym_url_token1] = ACTIONS(386),
    [anon_sym_LT_LT] = ACTIONS(386),
    [anon_sym_xref_COLON] = ACTIONS(386),
    [sym_emphasis] = ACTIONS(386),
    [sym_strong] = ACTIONS(386),
    [sym_monospace] = ACTIONS(386),
    [sym_highlight] = ACTIONS(384),
    [sym_superscript] = ACTIONS(386),
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
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(390),
    [aux_sym_title1_token1] = ACTIONS(388),
    [sym_title2] = ACTIONS(388),
    [sym_title3] = ACTIONS(388),
    [sym_title4] = ACTIONS(388),
    [sym_title5] = ACTIONS(388),
    [aux_sym_attr_name_token1] = ACTIONS(390),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(388),
    [aux_sym_line_breaks_token1] = ACTIONS(388),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(388),
    [anon_sym_image_COLON_COLON] = ACTIONS(388),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(388),
    [anon_sym_audio_COLON_COLON] = ACTIONS(388),
    [anon_sym_video_COLON_COLON] = ACTIONS(388),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(388),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(388),
    [aux_sym_url_token1] = ACTIONS(390),
    [anon_sym_LT_LT] = ACTIONS(390),
    [anon_sym_xref_COLON] = ACTIONS(390),
    [sym_emphasis] = ACTIONS(390),
    [sym_strong] = ACTIONS(390),
    [sym_monospace] = ACTIONS(390),
    [sym_highlight] = ACTIONS(388),
    [sym_superscript] = ACTIONS(390),
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
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [anon_sym_DOT] = ACTIONS(394),
    [aux_sym_title1_token1] = ACTIONS(392),
    [sym_title2] = ACTIONS(392),
    [sym_title3] = ACTIONS(392),
    [sym_title4] = ACTIONS(392),
    [sym_title5] = ACTIONS(392),
    [aux_sym_attr_name_token1] = ACTIONS(394),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(392),
    [aux_sym_line_breaks_token1] = ACTIONS(392),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(392),
    [anon_sym_image_COLON_COLON] = ACTIONS(392),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(392),
    [anon_sym_audio_COLON_COLON] = ACTIONS(392),
    [anon_sym_video_COLON_COLON] = ACTIONS(392),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(392),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(392),
    [aux_sym_url_token1] = ACTIONS(394),
    [anon_sym_LT_LT] = ACTIONS(394),
    [anon_sym_xref_COLON] = ACTIONS(394),
    [sym_emphasis] = ACTIONS(394),
    [sym_strong] = ACTIONS(394),
    [sym_monospace] = ACTIONS(394),
    [sym_highlight] = ACTIONS(392),
    [sym_superscript] = ACTIONS(394),
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
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(398),
    [aux_sym_title1_token1] = ACTIONS(396),
    [sym_title2] = ACTIONS(396),
    [sym_title3] = ACTIONS(396),
    [sym_title4] = ACTIONS(396),
    [sym_title5] = ACTIONS(396),
    [aux_sym_attr_name_token1] = ACTIONS(398),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [aux_sym_line_breaks_token1] = ACTIONS(396),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(396),
    [anon_sym_image_COLON_COLON] = ACTIONS(396),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(396),
    [anon_sym_audio_COLON_COLON] = ACTIONS(396),
    [anon_sym_video_COLON_COLON] = ACTIONS(396),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(396),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(396),
    [aux_sym_url_token1] = ACTIONS(398),
    [anon_sym_LT_LT] = ACTIONS(398),
    [anon_sym_xref_COLON] = ACTIONS(398),
    [sym_emphasis] = ACTIONS(398),
    [sym_strong] = ACTIONS(398),
    [sym_monospace] = ACTIONS(398),
    [sym_highlight] = ACTIONS(396),
    [sym_superscript] = ACTIONS(398),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(403), 1,
      anon_sym_LF_LF,
    ACTIONS(405), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(408), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(411), 1,
      aux_sym_url_token1,
    ACTIONS(414), 1,
      anon_sym_LT_LT,
    ACTIONS(417), 1,
      anon_sym_xref_COLON,
    ACTIONS(420), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(423), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(65), 1,
      sym__inline_xref,
    STATE(66), 1,
      sym__xref,
    STATE(69), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(400), 7,
      aux_sym_attr_name_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(58), 8,
      sym__inline_element,
      sym_kbd,
      sym_footnote,
      sym_url,
      sym_xref,
      sym_passthrough,
      sym_replacement,
      aux_sym_paragraph_repeat1,
    ACTIONS(426), 30,
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
    ACTIONS(431), 1,
      anon_sym_LF_LF,
    ACTIONS(433), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(435), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(437), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(439), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(65), 1,
      sym__inline_xref,
    STATE(66), 1,
      sym__xref,
    STATE(69), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(429), 7,
      aux_sym_attr_name_token1,
      sym_emphasis,
      sym_strong,
      sym_monospace,
      sym_highlight,
      sym_superscript,
      sym_subscript,
    STATE(58), 8,
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
    ACTIONS(443), 1,
      aux_sym_attr_name_token1,
    STATE(82), 1,
      sym_table_start,
    STATE(144), 1,
      sym_list_item_mark,
    STATE(169), 1,
      sym__ordered_list_mark,
    ACTIONS(33), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(18), 2,
      sym__warning,
      sym__warning_block,
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
    STATE(79), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(35), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
    STATE(47), 13,
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
    ACTIONS(447), 1,
      anon_sym_COLON_COLON,
    ACTIONS(449), 1,
      anon_sym_LF_LF,
    ACTIONS(445), 44,
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
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      anon_sym_LF_LF,
    ACTIONS(451), 44,
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
    ACTIONS(459), 1,
      anon_sym_LF_LF,
    ACTIONS(457), 44,
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
    ACTIONS(463), 1,
      anon_sym_LF_LF,
    ACTIONS(461), 44,
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
    ACTIONS(467), 1,
      anon_sym_LF_LF,
    ACTIONS(465), 44,
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
    ACTIONS(467), 1,
      anon_sym_LF_LF,
    ACTIONS(465), 44,
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
    ACTIONS(471), 1,
      anon_sym_LF_LF,
    ACTIONS(469), 44,
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
    ACTIONS(475), 1,
      anon_sym_LF_LF,
    ACTIONS(473), 44,
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
    ACTIONS(479), 1,
      anon_sym_LF_LF,
    ACTIONS(477), 44,
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
    ACTIONS(483), 1,
      anon_sym_LF_LF,
    ACTIONS(481), 44,
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
    ACTIONS(487), 1,
      anon_sym_LF_LF,
    ACTIONS(485), 44,
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
    ACTIONS(491), 1,
      anon_sym_LF_LF,
    ACTIONS(489), 44,
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
    ACTIONS(495), 1,
      anon_sym_LF_LF,
    ACTIONS(493), 44,
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
    ACTIONS(499), 1,
      anon_sym_LF_LF,
    ACTIONS(497), 44,
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
    ACTIONS(503), 1,
      anon_sym_LF_LF,
    ACTIONS(501), 44,
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
    ACTIONS(507), 1,
      anon_sym_LF_LF,
    ACTIONS(505), 44,
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
    ACTIONS(509), 3,
      aux_sym_attr_name_token1,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    ACTIONS(511), 18,
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
    ACTIONS(513), 1,
      anon_sym_LF,
    STATE(144), 1,
      sym_list_item_mark,
    STATE(169), 1,
      sym__ordered_list_mark,
    STATE(78), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(515), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1131] = 5,
    ACTIONS(518), 1,
      anon_sym_LF,
    STATE(144), 1,
      sym_list_item_mark,
    STATE(169), 1,
      sym__ordered_list_mark,
    STATE(78), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(33), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1152] = 2,
    ACTIONS(520), 1,
      anon_sym_LF,
    ACTIONS(522), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1163] = 2,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(526), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1174] = 5,
    ACTIONS(528), 1,
      aux_sym_block_title_token1,
    ACTIONS(530), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(56), 1,
      sym_table_end,
    STATE(84), 1,
      aux_sym_table_content_repeat1,
    STATE(109), 1,
      sym_table_content,
  [1190] = 4,
    ACTIONS(532), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(534), 1,
      aux_sym__note_block_token1,
    STATE(91), 1,
      aux_sym__note_block_repeat1,
    STATE(167), 1,
      sym_code_content,
  [1203] = 3,
    ACTIONS(536), 1,
      aux_sym_block_title_token1,
    ACTIONS(538), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(89), 1,
      aux_sym_table_content_repeat1,
  [1213] = 3,
    ACTIONS(540), 1,
      anon_sym_LT,
    ACTIONS(542), 1,
      anon_sym_LF,
    ACTIONS(544), 1,
      sym_name,
  [1223] = 3,
    ACTIONS(546), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(548), 1,
      aux_sym__note_block_token1,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
  [1233] = 1,
    ACTIONS(551), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1239] = 3,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      aux_sym_attr_value_token1,
    STATE(165), 1,
      sym_attr_value,
  [1249] = 3,
    ACTIONS(557), 1,
      aux_sym_block_title_token1,
    ACTIONS(560), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(89), 1,
      aux_sym_table_content_repeat1,
  [1259] = 3,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    ACTIONS(564), 1,
      aux_sym_audio_url_token1,
    STATE(158), 1,
      sym_audio_title,
  [1269] = 3,
    ACTIONS(566), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(568), 1,
      aux_sym__note_block_token1,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
  [1279] = 3,
    ACTIONS(570), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(572), 1,
      aux_sym__note_block_token1,
    STATE(98), 1,
      aux_sym__note_block_repeat1,
  [1289] = 3,
    ACTIONS(574), 1,
      anon_sym_LBRACK,
    ACTIONS(576), 1,
      aux_sym_audio_url_token1,
    STATE(156), 1,
      sym_audio_url,
  [1299] = 3,
    ACTIONS(578), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(580), 1,
      aux_sym__note_block_token1,
    STATE(95), 1,
      aux_sym__note_block_repeat1,
  [1309] = 3,
    ACTIONS(568), 1,
      aux_sym__note_block_token1,
    ACTIONS(582), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
  [1319] = 3,
    ACTIONS(584), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(586), 1,
      aux_sym__note_block_token1,
    STATE(108), 1,
      aux_sym__note_block_repeat1,
  [1329] = 3,
    ACTIONS(576), 1,
      aux_sym_audio_url_token1,
    ACTIONS(588), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      sym_audio_url,
  [1339] = 3,
    ACTIONS(568), 1,
      aux_sym__note_block_token1,
    ACTIONS(590), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
  [1349] = 3,
    ACTIONS(564), 1,
      aux_sym_audio_url_token1,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym_audio_title,
  [1359] = 3,
    ACTIONS(594), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(596), 1,
      aux_sym__note_block_token1,
    STATE(106), 1,
      aux_sym__note_block_repeat1,
  [1369] = 3,
    ACTIONS(598), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(600), 1,
      aux_sym__note_block_token1,
    STATE(104), 1,
      aux_sym__note_block_repeat1,
  [1379] = 3,
    ACTIONS(564), 1,
      aux_sym_audio_url_token1,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_audio_title,
  [1389] = 3,
    ACTIONS(564), 1,
      aux_sym_audio_url_token1,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      sym_audio_title,
  [1399] = 3,
    ACTIONS(568), 1,
      aux_sym__note_block_token1,
    ACTIONS(606), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
  [1409] = 3,
    ACTIONS(608), 1,
      aux_sym_attr_name_token1,
    ACTIONS(610), 1,
      anon_sym_url_DASHrepo,
    STATE(162), 1,
      sym_attr_name,
  [1419] = 3,
    ACTIONS(568), 1,
      aux_sym__note_block_token1,
    ACTIONS(612), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
  [1429] = 3,
    ACTIONS(614), 1,
      anon_sym_LT,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      sym_name,
  [1439] = 3,
    ACTIONS(568), 1,
      aux_sym__note_block_token1,
    ACTIONS(620), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
  [1449] = 2,
    ACTIONS(622), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(29), 1,
      sym_table_end,
  [1456] = 2,
    ACTIONS(564), 1,
      aux_sym_audio_url_token1,
    STATE(128), 1,
      sym_audio_title,
  [1463] = 2,
    ACTIONS(624), 1,
      aux_sym_attr_name_token1,
    STATE(177), 1,
      sym_code_language,
  [1470] = 2,
    ACTIONS(576), 1,
      aux_sym_audio_url_token1,
    STATE(168), 1,
      sym_audio_url,
  [1477] = 1,
    ACTIONS(626), 2,
      aux_sym_block_title_token1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1482] = 2,
    ACTIONS(628), 1,
      anon_sym_RBRACK,
    ACTIONS(630), 1,
      sym_kbd_content,
  [1489] = 2,
    ACTIONS(632), 1,
      anon_sym_RBRACK,
    ACTIONS(634), 1,
      sym_footnote_content,
  [1496] = 2,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      anon_sym_GT_GT,
  [1503] = 2,
    ACTIONS(640), 1,
      aux_sym_attr_name_token1,
    STATE(116), 1,
      sym_xref_url,
  [1510] = 2,
    ACTIONS(642), 1,
      aux_sym_audio_url_token1,
    STATE(147), 1,
      sym_audio_title,
  [1517] = 2,
    ACTIONS(640), 1,
      aux_sym_attr_name_token1,
    STATE(138), 1,
      sym_xref_url,
  [1524] = 1,
    ACTIONS(644), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1529] = 2,
    ACTIONS(646), 1,
      aux_sym_block_title_token1,
    STATE(80), 1,
      sym_list_item_content,
  [1536] = 1,
    ACTIONS(648), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [1541] = 2,
    ACTIONS(650), 1,
      aux_sym_attr_name_token1,
    STATE(135), 1,
      sym_passthrough_content,
  [1548] = 2,
    ACTIONS(652), 1,
      anon_sym_LT,
    ACTIONS(654), 1,
      anon_sym_LF,
  [1555] = 2,
    ACTIONS(564), 1,
      aux_sym_audio_url_token1,
    STATE(157), 1,
      sym_audio_title,
  [1562] = 2,
    ACTIONS(650), 1,
      aux_sym_attr_name_token1,
    STATE(134), 1,
      sym_passthrough_content,
  [1569] = 1,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
  [1573] = 1,
    ACTIONS(658), 1,
      anon_sym_RBRACK,
  [1577] = 1,
    ACTIONS(660), 1,
      anon_sym_LF,
  [1581] = 1,
    ACTIONS(662), 1,
      anon_sym_RBRACK,
  [1585] = 1,
    ACTIONS(664), 1,
      anon_sym_RBRACK,
  [1589] = 1,
    ACTIONS(666), 1,
      aux_sym_attr_value_token1,
  [1593] = 1,
    ACTIONS(668), 1,
      anon_sym_COLON_COLON,
  [1597] = 1,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
  [1601] = 1,
    ACTIONS(672), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1605] = 1,
    ACTIONS(674), 1,
      anon_sym_GT,
  [1609] = 1,
    ACTIONS(676), 1,
      sym_email,
  [1613] = 1,
    ACTIONS(678), 1,
      anon_sym_LBRACK,
  [1617] = 1,
    ACTIONS(680), 1,
      aux_sym_block_title_token1,
  [1621] = 1,
    ACTIONS(682), 1,
      anon_sym_LF,
  [1625] = 1,
    ACTIONS(684), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1629] = 1,
    ACTIONS(686), 1,
      aux_sym_url_token2,
  [1633] = 1,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
  [1637] = 1,
    ACTIONS(690), 1,
      anon_sym_,
  [1641] = 1,
    ACTIONS(692), 1,
      anon_sym_RBRACK,
  [1645] = 1,
    ACTIONS(694), 1,
      anon_sym_RBRACK,
  [1649] = 1,
    ACTIONS(696), 1,
      anon_sym_RBRACK_LF,
  [1653] = 1,
    ACTIONS(698), 1,
      sym_email,
  [1657] = 1,
    ACTIONS(700), 1,
      anon_sym_LF,
  [1661] = 1,
    ACTIONS(702), 1,
      anon_sym_LF,
  [1665] = 1,
    ACTIONS(704), 1,
      anon_sym_RBRACK,
  [1669] = 1,
    ACTIONS(706), 1,
      anon_sym_LF,
  [1673] = 1,
    ACTIONS(708), 1,
      anon_sym_LF,
  [1677] = 1,
    ACTIONS(710), 1,
      anon_sym_LF,
  [1681] = 1,
    ACTIONS(712), 1,
      anon_sym_RBRACK,
  [1685] = 1,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
  [1689] = 1,
    ACTIONS(716), 1,
      anon_sym_GT_GT,
  [1693] = 1,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
  [1697] = 1,
    ACTIONS(720), 1,
      anon_sym_LF,
  [1701] = 1,
    ACTIONS(722), 1,
      anon_sym_GT,
  [1705] = 1,
    ACTIONS(724), 1,
      sym_email,
  [1709] = 1,
    ACTIONS(726), 1,
      sym_attr_mark,
  [1713] = 1,
    ACTIONS(728), 1,
      aux_sym_comment_token1,
  [1717] = 1,
    ACTIONS(730), 1,
      anon_sym_LF,
  [1721] = 1,
    ACTIONS(732), 1,
      anon_sym_LF,
  [1725] = 1,
    ACTIONS(734), 1,
      sym_attr_mark,
  [1729] = 1,
    ACTIONS(736), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1733] = 1,
    ACTIONS(738), 1,
      anon_sym_LBRACK,
  [1737] = 1,
    ACTIONS(740), 1,
      anon_sym_,
  [1741] = 1,
    ACTIONS(742), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1745] = 1,
    ACTIONS(744), 1,
      aux_sym_block_title_token1,
  [1749] = 1,
    ACTIONS(746), 1,
      anon_sym_LF,
  [1753] = 1,
    ACTIONS(748), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1757] = 1,
    ACTIONS(750), 1,
      aux_sym_block_title_token1,
  [1761] = 1,
    ACTIONS(752), 1,
      anon_sym_LF,
  [1765] = 1,
    ACTIONS(754), 1,
      anon_sym_LBRACK,
  [1769] = 1,
    ACTIONS(756), 1,
      anon_sym_RBRACK_LF,
  [1773] = 1,
    ACTIONS(758), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1777] = 1,
    ACTIONS(760), 1,
      anon_sym_LF,
  [1781] = 1,
    ACTIONS(762), 1,
      anon_sym_GT,
  [1785] = 1,
    ACTIONS(764), 1,
      aux_sym_block_title_token1,
  [1789] = 1,
    ACTIONS(766), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1793] = 1,
    ACTIONS(768), 1,
      aux_sym_block_title_token1,
  [1797] = 1,
    ACTIONS(770), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1801] = 1,
    ACTIONS(772), 1,
      aux_sym_block_title_token1,
  [1805] = 1,
    ACTIONS(774), 1,
      anon_sym_LF,
  [1809] = 1,
    ACTIONS(776), 1,
      anon_sym_RBRACK_LF,
  [1813] = 1,
    ACTIONS(644), 1,
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
  [SMALL_STATE(85)] = 1213,
  [SMALL_STATE(86)] = 1223,
  [SMALL_STATE(87)] = 1233,
  [SMALL_STATE(88)] = 1239,
  [SMALL_STATE(89)] = 1249,
  [SMALL_STATE(90)] = 1259,
  [SMALL_STATE(91)] = 1269,
  [SMALL_STATE(92)] = 1279,
  [SMALL_STATE(93)] = 1289,
  [SMALL_STATE(94)] = 1299,
  [SMALL_STATE(95)] = 1309,
  [SMALL_STATE(96)] = 1319,
  [SMALL_STATE(97)] = 1329,
  [SMALL_STATE(98)] = 1339,
  [SMALL_STATE(99)] = 1349,
  [SMALL_STATE(100)] = 1359,
  [SMALL_STATE(101)] = 1369,
  [SMALL_STATE(102)] = 1379,
  [SMALL_STATE(103)] = 1389,
  [SMALL_STATE(104)] = 1399,
  [SMALL_STATE(105)] = 1409,
  [SMALL_STATE(106)] = 1419,
  [SMALL_STATE(107)] = 1429,
  [SMALL_STATE(108)] = 1439,
  [SMALL_STATE(109)] = 1449,
  [SMALL_STATE(110)] = 1456,
  [SMALL_STATE(111)] = 1463,
  [SMALL_STATE(112)] = 1470,
  [SMALL_STATE(113)] = 1477,
  [SMALL_STATE(114)] = 1482,
  [SMALL_STATE(115)] = 1489,
  [SMALL_STATE(116)] = 1496,
  [SMALL_STATE(117)] = 1503,
  [SMALL_STATE(118)] = 1510,
  [SMALL_STATE(119)] = 1517,
  [SMALL_STATE(120)] = 1524,
  [SMALL_STATE(121)] = 1529,
  [SMALL_STATE(122)] = 1536,
  [SMALL_STATE(123)] = 1541,
  [SMALL_STATE(124)] = 1548,
  [SMALL_STATE(125)] = 1555,
  [SMALL_STATE(126)] = 1562,
  [SMALL_STATE(127)] = 1569,
  [SMALL_STATE(128)] = 1573,
  [SMALL_STATE(129)] = 1577,
  [SMALL_STATE(130)] = 1581,
  [SMALL_STATE(131)] = 1585,
  [SMALL_STATE(132)] = 1589,
  [SMALL_STATE(133)] = 1593,
  [SMALL_STATE(134)] = 1597,
  [SMALL_STATE(135)] = 1601,
  [SMALL_STATE(136)] = 1605,
  [SMALL_STATE(137)] = 1609,
  [SMALL_STATE(138)] = 1613,
  [SMALL_STATE(139)] = 1617,
  [SMALL_STATE(140)] = 1621,
  [SMALL_STATE(141)] = 1625,
  [SMALL_STATE(142)] = 1629,
  [SMALL_STATE(143)] = 1633,
  [SMALL_STATE(144)] = 1637,
  [SMALL_STATE(145)] = 1641,
  [SMALL_STATE(146)] = 1645,
  [SMALL_STATE(147)] = 1649,
  [SMALL_STATE(148)] = 1653,
  [SMALL_STATE(149)] = 1657,
  [SMALL_STATE(150)] = 1661,
  [SMALL_STATE(151)] = 1665,
  [SMALL_STATE(152)] = 1669,
  [SMALL_STATE(153)] = 1673,
  [SMALL_STATE(154)] = 1677,
  [SMALL_STATE(155)] = 1681,
  [SMALL_STATE(156)] = 1685,
  [SMALL_STATE(157)] = 1689,
  [SMALL_STATE(158)] = 1693,
  [SMALL_STATE(159)] = 1697,
  [SMALL_STATE(160)] = 1701,
  [SMALL_STATE(161)] = 1705,
  [SMALL_STATE(162)] = 1709,
  [SMALL_STATE(163)] = 1713,
  [SMALL_STATE(164)] = 1717,
  [SMALL_STATE(165)] = 1721,
  [SMALL_STATE(166)] = 1725,
  [SMALL_STATE(167)] = 1729,
  [SMALL_STATE(168)] = 1733,
  [SMALL_STATE(169)] = 1737,
  [SMALL_STATE(170)] = 1741,
  [SMALL_STATE(171)] = 1745,
  [SMALL_STATE(172)] = 1749,
  [SMALL_STATE(173)] = 1753,
  [SMALL_STATE(174)] = 1757,
  [SMALL_STATE(175)] = 1761,
  [SMALL_STATE(176)] = 1765,
  [SMALL_STATE(177)] = 1769,
  [SMALL_STATE(178)] = 1773,
  [SMALL_STATE(179)] = 1777,
  [SMALL_STATE(180)] = 1781,
  [SMALL_STATE(181)] = 1785,
  [SMALL_STATE(182)] = 1789,
  [SMALL_STATE(183)] = 1793,
  [SMALL_STATE(184)] = 1797,
  [SMALL_STATE(185)] = 1801,
  [SMALL_STATE(186)] = 1805,
  [SMALL_STATE(187)] = 1809,
  [SMALL_STATE(188)] = 1813,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(139),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(185),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(184),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(183),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(182),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(181),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(178),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(174),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(173),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(171),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(170),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(169),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(169),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(163),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title1, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title1, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title1_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title1_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title1_repeat1, 2), SHIFT_REPEAT(105),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 7),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 6),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 6),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 5),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_attr, 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_info, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_info, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_attr, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_attr, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 5),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 6),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 6),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(58),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(114),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(115),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(62),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(117),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(119),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(123),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(126),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(67),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 4),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(169),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_content, 1),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(86),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(89),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [688] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_name, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_mark, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
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
