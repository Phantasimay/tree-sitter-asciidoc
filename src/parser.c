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
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 45
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
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
  anon_sym_LBRACKNOTE_RBRACK_LF = 9,
  anon_sym_DASH_DASH_DASH_DASH_LF = 10,
  aux_sym__note_block_token1 = 11,
  anon_sym_TIP_COLON = 12,
  anon_sym_LBRACKTIP_RBRACK_LF = 13,
  anon_sym_IMPORTANT_COLON = 14,
  anon_sym_LBRACKIMPORTANT_RBRACK_LF = 15,
  anon_sym_CAUTION_COLON = 16,
  anon_sym_LBRACKCAUTION_RBRACK_LF = 17,
  anon_sym_WARNING_COLON = 18,
  anon_sym_LBRACKWARNING_RBRACK_LF = 19,
  anon_sym_LF = 20,
  anon_sym_ = 21,
  sym__unordered_list_mark = 22,
  aux_sym__ordered_list_mark_token1 = 23,
  aux_sym__ordered_list_mark_token2 = 24,
  aux_sym__ordered_list_mark_token3 = 25,
  sym__checklist_mark = 26,
  aux_sym_code_token1 = 27,
  anon_sym_RBRACK_LF = 28,
  aux_sym_code_language_token1 = 29,
  anon_sym_SLASH_SLASH = 30,
  aux_sym_comment_token1 = 31,
  aux_sym_line_breaks_token1 = 32,
  anon_sym_LT_LT_LT_LF_LF = 33,
  anon_sym_image_COLON_COLON = 34,
  anon_sym_LBRACK = 35,
  anon_sym_PIPE_EQ_EQ_EQ_LF = 36,
  anon_sym_COLON_COLON = 37,
  aux_sym_description_list_token1 = 38,
  anon_sym_audio_COLON_COLON = 39,
  anon_sym_RBRACK = 40,
  aux_sym_audio_url_token1 = 41,
  anon_sym_video_COLON_COLON = 42,
  anon_sym_LF_LF = 43,
  anon_sym_kbd_COLON_LBRACK = 44,
  sym_kbd_content = 45,
  anon_sym_footnote_COLON_LBRACK = 46,
  sym_footnote_content = 47,
  aux_sym_url_token1 = 48,
  aux_sym_url_token2 = 49,
  anon_sym_LT_LT = 50,
  anon_sym_COMMA = 51,
  anon_sym_GT_GT = 52,
  anon_sym_xref_COLON = 53,
  sym_emphasis = 54,
  sym_strong = 55,
  sym_monospace = 56,
  sym_highlight = 57,
  sym_superscript = 58,
  sym_subscript = 59,
  anon_sym_PLUS_PLUS_PLUS = 60,
  anon_sym_pass_COLON_LBRACK = 61,
  anon_sym_LBRACEblank_RBRACE = 62,
  anon_sym_LBRACEempty_RBRACE = 63,
  anon_sym_LBRACEsp_RBRACE = 64,
  anon_sym_LBRACEnbsp_RBRACE = 65,
  anon_sym_LBRACEzwsp_RBRACE = 66,
  anon_sym_LBRACEwj_RBRACE = 67,
  anon_sym_LBRACEapos_RBRACE = 68,
  anon_sym_LBRACEquot_RBRACE = 69,
  anon_sym_LBRACElsquo_RBRACE = 70,
  anon_sym_LBRACErsquo_RBRACE = 71,
  anon_sym_LBRACEldquo_RBRACE = 72,
  anon_sym_LBRACErdquo_RBRACE = 73,
  anon_sym_LBRACEdeg_RBRACE = 74,
  anon_sym_LBRACEplus_RBRACE = 75,
  anon_sym_LBRACEbrvbar_RBRACE = 76,
  anon_sym_LBRACEvbar_RBRACE = 77,
  anon_sym_LBRACEamp_RBRACE = 78,
  anon_sym_LBRACElt_RBRACE = 79,
  anon_sym_LBRACEgt_RBRACE = 80,
  anon_sym_LBRACEstartsb_RBRACE = 81,
  anon_sym_LBRACEendsb_RBRACE = 82,
  anon_sym_LBRACEcaret_RBRACE = 83,
  anon_sym_LBRACEasterisk_RBRACE = 84,
  anon_sym_LBRACEtilde_RBRACE = 85,
  anon_sym_LBRACEbackslash_RBRACE = 86,
  anon_sym_LBRACEbacktick_RBRACE = 87,
  anon_sym_LBRACEtwo_DASHcolons_RBRACE = 88,
  anon_sym_LBRACEtwo_DASHsemicolons_RBRACE = 89,
  anon_sym_LBRACEcpp_RBRACE = 90,
  anon_sym_LBRACEpp_RBRACE = 91,
  sym_document = 92,
  sym__block = 93,
  sym__titled_block = 94,
  sym_block_title = 95,
  sym__admonitions = 96,
  sym_note = 97,
  sym__note_line = 98,
  sym__note_block = 99,
  sym_tip = 100,
  sym__tip = 101,
  sym__tip_block = 102,
  sym_important = 103,
  sym__important = 104,
  sym__important_block = 105,
  sym_caution = 106,
  sym__caution = 107,
  sym__caution_block = 108,
  sym_warning = 109,
  sym__warning = 110,
  sym__warning_block = 111,
  sym_list = 112,
  sym_list_item = 113,
  sym_list_item_mark = 114,
  sym_list_item_content = 115,
  sym__ordered_list_mark = 116,
  sym_code = 117,
  sym_code_language = 118,
  sym_code_content = 119,
  sym_comment = 120,
  sym_line_breaks = 121,
  sym_page_breaks = 122,
  sym_image = 123,
  sym_table = 124,
  sym_table_start = 125,
  sym_table_content = 126,
  sym_table_end = 127,
  sym_description_list = 128,
  sym_audio = 129,
  sym_audio_url = 130,
  sym_audio_title = 131,
  sym_video = 132,
  sym_paragraph = 133,
  sym__inline_element = 134,
  sym_kbd = 135,
  sym_footnote = 136,
  sym_url = 137,
  sym_xref = 138,
  sym__inline_xref = 139,
  sym__xref = 140,
  sym_xref_url = 141,
  sym_passthrough = 142,
  sym__passthrough_plus = 143,
  sym__passthrough_cmd = 144,
  sym_passthrough_content = 145,
  sym_replacement = 146,
  aux_sym_document_repeat1 = 147,
  aux_sym__note_block_repeat1 = 148,
  aux_sym_list_repeat1 = 149,
  aux_sym_table_content_repeat1 = 150,
  aux_sym_paragraph_repeat1 = 151,
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
  [aux_sym_description_list_token1] = "description_list_token1",
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
  [aux_sym_description_list_token1] = aux_sym_description_list_token1,
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
  [aux_sym_description_list_token1] = {
    .visible = false,
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
  [157] = 105,
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
      if (eof) ADVANCE(318);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(562);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '0') ADVANCE(381);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(476);
      if (lookahead == 'I') ADVANCE(484);
      if (lookahead == 'N') ADVANCE(489);
      if (lookahead == 'T') ADVANCE(481);
      if (lookahead == 'W') ADVANCE(477);
      if (lookahead == '[') ADVANCE(539);
      if (lookahead == ']') ADVANCE(546);
      if (lookahead == '^') ADVANCE(314);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(519);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'k') ADVANCE(504);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == 'v') ADVANCE(515);
      if (lookahead == 'x') ADVANCE(523);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(136);
      if (lookahead == '~') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(535);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(536);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(541);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(346);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == ':') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(341);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == ':') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(350);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(350);
      if (lookahead == ':') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(352);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(352);
      if (lookahead == ':') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(348);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(348);
      if (lookahead == ':') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(549);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(408);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(447);
      if (lookahead == 'k') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(433);
      if (lookahead == 'x') ADVANCE(452);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '~') ADVANCE(316);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead == '*') ADVANCE(359);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '|') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0) ADVANCE(325);
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
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(344);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(342);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(342);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '_') ADVANCE(408);
      if (lookahead == '`') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(447);
      if (lookahead == 'k') ADVANCE(435);
      if (lookahead == 'p') ADVANCE(433);
      if (lookahead == 'x') ADVANCE(452);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '~') ADVANCE(316);
      if (lookahead == '\\' ||
          lookahead == ']') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(543);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(2);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(331);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(531);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(542);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(333);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(337);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(345);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(345);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(349);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(349);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(351);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(351);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(347);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(381);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == 'C') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(385);
      if (lookahead == 'N') ADVANCE(386);
      if (lookahead == 'T') ADVANCE(384);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '_') ADVANCE(404);
      if (lookahead == '`') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == 'k') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(387);
      if (lookahead == 'v') ADVANCE(389);
      if (lookahead == 'x') ADVANCE(392);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(569);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(569);
      if (lookahead == ']') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(568);
      if (lookahead == ' ' ||
          lookahead == 'x') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(359);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '0') ADVANCE(381);
      if (lookahead == 'C') ADVANCE(395);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(399);
      if (lookahead == 'T') ADVANCE(397);
      if (lookahead == 'W') ADVANCE(396);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'v') ADVANCE(400);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == '+') ADVANCE(576);
      END_STATE();
    case 57:
      if (lookahead == '+') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '.') ADVANCE(369);
      END_STATE();
    case 59:
      if (lookahead == ',') ADVANCE(562);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 60:
      if (lookahead == ',') ADVANCE(379);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == 'W') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 61:
      if (lookahead == ',') ADVANCE(379);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'C') ADVANCE(138);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead == 'T') ADVANCE(143);
      if (lookahead == 'W') ADVANCE(139);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(192);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(369);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '<') ADVANCE(561);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(263);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'q') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(210);
      if (lookahead == 'z') ADVANCE(276);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(372);
      if (lookahead == ':') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == ':') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 77:
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(558);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(555);
      if (lookahead == '^') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(556);
      if (lookahead == '_') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(557);
      if (lookahead == '`') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '^') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '_') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '`') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(545);
      END_STATE();
    case 87:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(537);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(548);
      END_STATE();
    case 89:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '[') ADVANCE(550);
      END_STATE();
    case 90:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '[') ADVANCE(577);
      END_STATE();
    case 91:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '[') ADVANCE(553);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(545);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(537);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(548);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '^') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '_') ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '`') ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(124);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(118);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(111);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'E') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'G') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 119:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 123:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 124:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'U') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 125:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ']') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ']') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ']') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ']') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == '<') ADVANCE(561);
      END_STATE();
    case 133:
      if (lookahead == '<') ADVANCE(560);
      END_STATE();
    case 134:
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 136:
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 137:
      if (lookahead == '>') ADVANCE(563);
      END_STATE();
    case 138:
      if (lookahead == 'A') ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'A') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 'A') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 142:
      if (lookahead == 'G') ADVANCE(173);
      END_STATE();
    case 143:
      if (lookahead == 'I') ADVANCE(155);
      END_STATE();
    case 144:
      if (lookahead == 'I') ADVANCE(147);
      END_STATE();
    case 145:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 146:
      if (lookahead == 'M') ADVANCE(154);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(161);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(172);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(158);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 154:
      if (lookahead == 'P') ADVANCE(152);
      END_STATE();
    case 155:
      if (lookahead == 'P') ADVANCE(170);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(148);
      END_STATE();
    case 157:
      if (lookahead == 'R') ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(174);
      END_STATE();
    case 162:
      if (lookahead == 'U') ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == '[') ADVANCE(550);
      END_STATE();
    case 164:
      if (lookahead == '[') ADVANCE(577);
      END_STATE();
    case 165:
      if (lookahead == '[') ADVANCE(553);
      END_STATE();
    case 166:
      if (lookahead == '[') ADVANCE(309);
      END_STATE();
    case 167:
      if (lookahead == ']') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 168:
      if (lookahead == ']') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 169:
      if (lookahead == ']') ADVANCE(376);
      END_STATE();
    case 170:
      if (lookahead == ']') ADVANCE(5);
      END_STATE();
    case 171:
      if (lookahead == ']') ADVANCE(7);
      END_STATE();
    case 172:
      if (lookahead == ']') ADVANCE(9);
      END_STATE();
    case 173:
      if (lookahead == ']') ADVANCE(11);
      END_STATE();
    case 174:
      if (lookahead == ']') ADVANCE(13);
      END_STATE();
    case 175:
      if (lookahead == '^') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 176:
      if (lookahead == '_') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == '`') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'g') ADVANCE(263);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 'q') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == 'v') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(210);
      if (lookahead == 'z') ADVANCE(276);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(261);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(295);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(302);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(183);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(185);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 204:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 205:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 210:
      if (lookahead == 'j') ADVANCE(282);
      END_STATE();
    case 211:
      if (lookahead == 'k') ADVANCE(253);
      END_STATE();
    case 212:
      if (lookahead == 'k') ADVANCE(292);
      END_STATE();
    case 213:
      if (lookahead == 'k') ADVANCE(303);
      END_STATE();
    case 214:
      if (lookahead == 'k') ADVANCE(304);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 217:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 219:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 220:
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(227);
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 221:
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 222:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(281);
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(284);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 243:
      if (lookahead == 'q') ADVANCE(270);
      END_STATE();
    case 244:
      if (lookahead == 'q') ADVANCE(272);
      END_STATE();
    case 245:
      if (lookahead == 'q') ADVANCE(273);
      END_STATE();
    case 246:
      if (lookahead == 'q') ADVANCE(274);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(217);
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 275:
      if (lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 276:
      if (lookahead == 'w') ADVANCE(262);
      END_STATE();
    case 277:
      if (lookahead == 'y') ADVANCE(294);
      END_STATE();
    case 278:
      if (lookahead == '}') ADVANCE(596);
      END_STATE();
    case 279:
      if (lookahead == '}') ADVANCE(595);
      END_STATE();
    case 280:
      if (lookahead == '}') ADVANCE(607);
      END_STATE();
    case 281:
      if (lookahead == '}') ADVANCE(580);
      END_STATE();
    case 282:
      if (lookahead == '}') ADVANCE(583);
      END_STATE();
    case 283:
      if (lookahead == '}') ADVANCE(594);
      END_STATE();
    case 284:
      if (lookahead == '}') ADVANCE(606);
      END_STATE();
    case 285:
      if (lookahead == '}') ADVANCE(590);
      END_STATE();
    case 286:
      if (lookahead == '}') ADVANCE(584);
      END_STATE();
    case 287:
      if (lookahead == '}') ADVANCE(581);
      END_STATE();
    case 288:
      if (lookahead == '}') ADVANCE(591);
      END_STATE();
    case 289:
      if (lookahead == '}') ADVANCE(585);
      END_STATE();
    case 290:
      if (lookahead == '}') ADVANCE(593);
      END_STATE();
    case 291:
      if (lookahead == '}') ADVANCE(582);
      END_STATE();
    case 292:
      if (lookahead == '}') ADVANCE(578);
      END_STATE();
    case 293:
      if (lookahead == '}') ADVANCE(599);
      END_STATE();
    case 294:
      if (lookahead == '}') ADVANCE(579);
      END_STATE();
    case 295:
      if (lookahead == '}') ADVANCE(598);
      END_STATE();
    case 296:
      if (lookahead == '}') ADVANCE(588);
      END_STATE();
    case 297:
      if (lookahead == '}') ADVANCE(586);
      END_STATE();
    case 298:
      if (lookahead == '}') ADVANCE(589);
      END_STATE();
    case 299:
      if (lookahead == '}') ADVANCE(587);
      END_STATE();
    case 300:
      if (lookahead == '}') ADVANCE(601);
      END_STATE();
    case 301:
      if (lookahead == '}') ADVANCE(592);
      END_STATE();
    case 302:
      if (lookahead == '}') ADVANCE(597);
      END_STATE();
    case 303:
      if (lookahead == '}') ADVANCE(600);
      END_STATE();
    case 304:
      if (lookahead == '}') ADVANCE(603);
      END_STATE();
    case 305:
      if (lookahead == '}') ADVANCE(602);
      END_STATE();
    case 306:
      if (lookahead == '}') ADVANCE(604);
      END_STATE();
    case 307:
      if (lookahead == '}') ADVANCE(605);
      END_STATE();
    case 308:
      if (lookahead == '~') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 309:
      if (lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 310:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(310)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 312:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 313:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 314:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 315:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 316:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 317:
      if (eof) ADVANCE(318);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(381);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == 'C') ADVANCE(382);
      if (lookahead == 'I') ADVANCE(385);
      if (lookahead == 'N') ADVANCE(386);
      if (lookahead == 'T') ADVANCE(384);
      if (lookahead == 'W') ADVANCE(383);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead == '^') ADVANCE(74);
      if (lookahead == '_') ADVANCE(404);
      if (lookahead == '`') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == 'k') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(387);
      if (lookahead == 'v') ADVANCE(389);
      if (lookahead == 'x') ADVANCE(392);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (!aux_sym__ordered_list_mark_token3_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(367);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(541);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(320);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '|') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '|') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(325);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_block_title_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(325);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_title1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_title1);
      if (lookahead == '\n') ADVANCE(330);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_title2);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_title2);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_title3);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_title3);
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_title4);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_title4);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_title5);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_title5);
      if (lookahead == '\n') ADVANCE(338);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LBRACKNOTE_RBRACK_LF);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH_LF);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__note_block_token1);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_TIP_COLON);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LBRACKTIP_RBRACK_LF);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_IMPORTANT_COLON);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LBRACKIMPORTANT_RBRACK_LF);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_CAUTION_COLON);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LBRACKCAUTION_RBRACK_LF);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LBRACKWARNING_RBRACK_LF);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*') ADVANCE(361);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(366);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == ' ') ADVANCE(166);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(366);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*') ADVANCE(361);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(366);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(356);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__unordered_list_mark);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token1);
      if (lookahead == '.') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token2);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '*') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '^') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '_') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '`') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ordered_list_mark_token3);
      if (lookahead == '~') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__checklist_mark);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__checklist_mark);
      if (lookahead == '*') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_RBRACK_LF);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(453);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(434);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(448);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(436);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(85);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'A') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'A') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'I') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'M') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'O') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'u') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead == ':') ADVANCE(83);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '_') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(83);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(38);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(89);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(565);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(86);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('B' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'E') ADVANCE(460);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'G') ADVANCE(470);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(423);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(466);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(421);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(422);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(409);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(472);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'U') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(453);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(444);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(445);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(443);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(462);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(467);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(451);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(450);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(449);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(448);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(455);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(456);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(468);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 's') ADVANCE(454);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 's') ADVANCE(461);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 't') ADVANCE(446);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 't') ADVANCE(441);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(85);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(41);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(90);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(87);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(91);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(45);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(47);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'A') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'E') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'G') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'I') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'M') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'N') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'O') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'P') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'R') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'T') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'U') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == '_') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'a') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'b') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'd') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'f') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'g') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'm') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'n') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'o') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'r') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 's') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 's') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 't') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (lookahead == 'u') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_code_language_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(533);
      if (lookahead != 0) ADVANCE(534);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead != 0) ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_line_breaks_token1);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LF_LF);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_image_COLON_COLON);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ',') ADVANCE(379);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_EQ_EQ_LF);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_description_list_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_description_list_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_audio_COLON_COLON);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_audio_url_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_video_COLON_COLON);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_kbd_COLON_LBRACK);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_kbd_content);
      if (lookahead == '+') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_kbd_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_footnote_COLON_LBRACK);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_footnote_content);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '^') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '_') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead == '`') ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(29);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_xref_COLON);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '_') ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_emphasis);
      if (lookahead == '_') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(569);
      if (lookahead == ']') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_strong);
      if (lookahead == '*') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '`') ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_monospace);
      if (lookahead == '`') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_highlight);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '^') ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_superscript);
      if (lookahead == '^') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_subscript);
      if (lookahead == '~') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_pass_COLON_LBRACK);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LBRACEblank_RBRACE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_LBRACEempty_RBRACE);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LBRACEsp_RBRACE);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LBRACEnbsp_RBRACE);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LBRACEzwsp_RBRACE);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LBRACEwj_RBRACE);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LBRACEapos_RBRACE);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_LBRACEquot_RBRACE);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_LBRACElsquo_RBRACE);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_LBRACErsquo_RBRACE);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_LBRACEldquo_RBRACE);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LBRACErdquo_RBRACE);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LBRACEdeg_RBRACE);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_LBRACEplus_RBRACE);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LBRACEbrvbar_RBRACE);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LBRACEvbar_RBRACE);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LBRACEamp_RBRACE);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LBRACElt_RBRACE);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LBRACEgt_RBRACE);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LBRACEstartsb_RBRACE);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LBRACEendsb_RBRACE);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LBRACEcaret_RBRACE);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_LBRACEasterisk_RBRACE);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_LBRACEtilde_RBRACE);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_LBRACEbackslash_RBRACE);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_LBRACEbacktick_RBRACE);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHcolons_RBRACE);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_LBRACEtwo_DASHsemicolons_RBRACE);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_LBRACEcpp_RBRACE);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_LBRACEpp_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 317},
  [2] = {.lex_state = 317},
  [3] = {.lex_state = 317},
  [4] = {.lex_state = 317},
  [5] = {.lex_state = 317},
  [6] = {.lex_state = 317},
  [7] = {.lex_state = 317},
  [8] = {.lex_state = 317},
  [9] = {.lex_state = 317},
  [10] = {.lex_state = 317},
  [11] = {.lex_state = 317},
  [12] = {.lex_state = 317},
  [13] = {.lex_state = 317},
  [14] = {.lex_state = 317},
  [15] = {.lex_state = 317},
  [16] = {.lex_state = 317},
  [17] = {.lex_state = 317},
  [18] = {.lex_state = 317},
  [19] = {.lex_state = 317},
  [20] = {.lex_state = 317},
  [21] = {.lex_state = 317},
  [22] = {.lex_state = 317},
  [23] = {.lex_state = 317},
  [24] = {.lex_state = 317},
  [25] = {.lex_state = 317},
  [26] = {.lex_state = 317},
  [27] = {.lex_state = 317},
  [28] = {.lex_state = 317},
  [29] = {.lex_state = 317},
  [30] = {.lex_state = 317},
  [31] = {.lex_state = 317},
  [32] = {.lex_state = 317},
  [33] = {.lex_state = 317},
  [34] = {.lex_state = 317},
  [35] = {.lex_state = 317},
  [36] = {.lex_state = 317},
  [37] = {.lex_state = 317},
  [38] = {.lex_state = 317},
  [39] = {.lex_state = 317},
  [40] = {.lex_state = 317},
  [41] = {.lex_state = 317},
  [42] = {.lex_state = 317},
  [43] = {.lex_state = 317},
  [44] = {.lex_state = 317},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 55},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 59},
  [75] = {.lex_state = 59},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 59},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 59},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 59},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 18},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 59},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 310},
  [96] = {.lex_state = 59},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 167},
  [100] = {.lex_state = 168},
  [101] = {.lex_state = 310},
  [102] = {.lex_state = 310},
  [103] = {.lex_state = 59},
  [104] = {.lex_state = 310},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 59},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 310},
  [109] = {.lex_state = 559},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 26},
  [117] = {.lex_state = 48},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 59},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 59},
  [125] = {.lex_state = 317},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 317},
  [128] = {.lex_state = 59},
  [129] = {.lex_state = 28},
  [130] = {.lex_state = 317},
  [131] = {.lex_state = 59},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 533},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 59},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 48},
  [143] = {.lex_state = 59},
  [144] = {.lex_state = 59},
  [145] = {.lex_state = 59},
  [146] = {.lex_state = 26},
  [147] = {.lex_state = 59},
  [148] = {.lex_state = 16},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 59},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 26},
  [153] = {.lex_state = 59},
  [154] = {.lex_state = 26},
  [155] = {.lex_state = 59},
  [156] = {.lex_state = 26},
  [157] = {.lex_state = 317},
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
    [sym_document] = STATE(118),
    [sym__block] = STATE(3),
    [sym__titled_block] = STATE(3),
    [sym_block_title] = STATE(47),
    [sym__admonitions] = STATE(3),
    [sym_note] = STATE(3),
    [sym__note_line] = STATE(33),
    [sym__note_block] = STATE(33),
    [sym_tip] = STATE(3),
    [sym__tip] = STATE(4),
    [sym__tip_block] = STATE(4),
    [sym_important] = STATE(3),
    [sym__important] = STATE(35),
    [sym__important_block] = STATE(35),
    [sym_caution] = STATE(3),
    [sym__caution] = STATE(5),
    [sym__caution_block] = STATE(5),
    [sym_warning] = STATE(3),
    [sym__warning] = STATE(37),
    [sym__warning_block] = STATE(37),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(66),
    [sym_list_item_mark] = STATE(117),
    [sym__ordered_list_mark] = STATE(142),
    [sym_code] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_line_breaks] = STATE(3),
    [sym_page_breaks] = STATE(3),
    [sym_image] = STATE(3),
    [sym_table] = STATE(3),
    [sym_table_start] = STATE(69),
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
    [sym__xref] = STATE(50),
    [sym_passthrough] = STATE(45),
    [sym__passthrough_plus] = STATE(57),
    [sym__passthrough_cmd] = STATE(57),
    [sym_replacement] = STATE(45),
    [aux_sym_document_repeat1] = STATE(3),
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
    [sym__unordered_list_mark] = ACTIONS(29),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(29),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(31),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(29),
    [sym__checklist_mark] = ACTIONS(29),
    [aux_sym_code_token1] = ACTIONS(33),
    [aux_sym_code_language_token1] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(37),
    [aux_sym_line_breaks_token1] = ACTIONS(39),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(41),
    [anon_sym_image_COLON_COLON] = ACTIONS(43),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(45),
    [anon_sym_audio_COLON_COLON] = ACTIONS(47),
    [anon_sym_video_COLON_COLON] = ACTIONS(49),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(51),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(53),
    [aux_sym_url_token1] = ACTIONS(55),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_xref_COLON] = ACTIONS(59),
    [sym_emphasis] = ACTIONS(61),
    [sym_strong] = ACTIONS(61),
    [sym_monospace] = ACTIONS(61),
    [sym_highlight] = ACTIONS(63),
    [sym_superscript] = ACTIONS(61),
    [sym_subscript] = ACTIONS(63),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(65),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(67),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(69),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(47),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(33),
    [sym__note_block] = STATE(33),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(4),
    [sym__tip_block] = STATE(4),
    [sym_important] = STATE(2),
    [sym__important] = STATE(35),
    [sym__important_block] = STATE(35),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(5),
    [sym__caution_block] = STATE(5),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(37),
    [sym__warning_block] = STATE(37),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(66),
    [sym_list_item_mark] = STATE(117),
    [sym__ordered_list_mark] = STATE(142),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(69),
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
    [sym__xref] = STATE(50),
    [sym_passthrough] = STATE(45),
    [sym__passthrough_plus] = STATE(57),
    [sym__passthrough_cmd] = STATE(57),
    [sym_replacement] = STATE(45),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(66),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(73),
    [sym_title1] = ACTIONS(76),
    [sym_title2] = ACTIONS(76),
    [sym_title3] = ACTIONS(76),
    [sym_title4] = ACTIONS(76),
    [sym_title5] = ACTIONS(76),
    [anon_sym_NOTE_COLON] = ACTIONS(79),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(82),
    [anon_sym_TIP_COLON] = ACTIONS(85),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(88),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(91),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(94),
    [anon_sym_CAUTION_COLON] = ACTIONS(97),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(100),
    [anon_sym_WARNING_COLON] = ACTIONS(103),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(106),
    [sym__unordered_list_mark] = ACTIONS(109),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(109),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(112),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(109),
    [sym__checklist_mark] = ACTIONS(109),
    [aux_sym_code_token1] = ACTIONS(115),
    [aux_sym_code_language_token1] = ACTIONS(118),
    [anon_sym_SLASH_SLASH] = ACTIONS(121),
    [aux_sym_line_breaks_token1] = ACTIONS(124),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(127),
    [anon_sym_image_COLON_COLON] = ACTIONS(130),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(133),
    [anon_sym_audio_COLON_COLON] = ACTIONS(136),
    [anon_sym_video_COLON_COLON] = ACTIONS(139),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(142),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(145),
    [aux_sym_url_token1] = ACTIONS(148),
    [anon_sym_LT_LT] = ACTIONS(151),
    [anon_sym_xref_COLON] = ACTIONS(154),
    [sym_emphasis] = ACTIONS(157),
    [sym_strong] = ACTIONS(157),
    [sym_monospace] = ACTIONS(157),
    [sym_highlight] = ACTIONS(160),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(160),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(163),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(166),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(169),
  },
  [3] = {
    [sym__block] = STATE(2),
    [sym__titled_block] = STATE(2),
    [sym_block_title] = STATE(47),
    [sym__admonitions] = STATE(2),
    [sym_note] = STATE(2),
    [sym__note_line] = STATE(33),
    [sym__note_block] = STATE(33),
    [sym_tip] = STATE(2),
    [sym__tip] = STATE(4),
    [sym__tip_block] = STATE(4),
    [sym_important] = STATE(2),
    [sym__important] = STATE(35),
    [sym__important_block] = STATE(35),
    [sym_caution] = STATE(2),
    [sym__caution] = STATE(5),
    [sym__caution_block] = STATE(5),
    [sym_warning] = STATE(2),
    [sym__warning] = STATE(37),
    [sym__warning_block] = STATE(37),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(66),
    [sym_list_item_mark] = STATE(117),
    [sym__ordered_list_mark] = STATE(142),
    [sym_code] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_line_breaks] = STATE(2),
    [sym_page_breaks] = STATE(2),
    [sym_image] = STATE(2),
    [sym_table] = STATE(2),
    [sym_table_start] = STATE(69),
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
    [sym__xref] = STATE(50),
    [sym_passthrough] = STATE(45),
    [sym__passthrough_plus] = STATE(57),
    [sym__passthrough_cmd] = STATE(57),
    [sym_replacement] = STATE(45),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(66),
    [aux_sym_paragraph_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(5),
    [sym_title1] = ACTIONS(174),
    [sym_title2] = ACTIONS(174),
    [sym_title3] = ACTIONS(174),
    [sym_title4] = ACTIONS(174),
    [sym_title5] = ACTIONS(174),
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
    [sym__unordered_list_mark] = ACTIONS(29),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(29),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(31),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(29),
    [sym__checklist_mark] = ACTIONS(29),
    [aux_sym_code_token1] = ACTIONS(33),
    [aux_sym_code_language_token1] = ACTIONS(35),
    [anon_sym_SLASH_SLASH] = ACTIONS(37),
    [aux_sym_line_breaks_token1] = ACTIONS(39),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(41),
    [anon_sym_image_COLON_COLON] = ACTIONS(43),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(45),
    [anon_sym_audio_COLON_COLON] = ACTIONS(47),
    [anon_sym_video_COLON_COLON] = ACTIONS(49),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(51),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(53),
    [aux_sym_url_token1] = ACTIONS(55),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_xref_COLON] = ACTIONS(59),
    [sym_emphasis] = ACTIONS(61),
    [sym_strong] = ACTIONS(61),
    [sym_monospace] = ACTIONS(61),
    [sym_highlight] = ACTIONS(63),
    [sym_superscript] = ACTIONS(61),
    [sym_subscript] = ACTIONS(63),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(65),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(67),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(69),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(178),
    [sym_title1] = ACTIONS(176),
    [sym_title2] = ACTIONS(176),
    [sym_title3] = ACTIONS(176),
    [sym_title4] = ACTIONS(176),
    [sym_title5] = ACTIONS(176),
    [anon_sym_NOTE_COLON] = ACTIONS(176),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(176),
    [anon_sym_TIP_COLON] = ACTIONS(176),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(176),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(176),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(176),
    [anon_sym_CAUTION_COLON] = ACTIONS(176),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(176),
    [anon_sym_WARNING_COLON] = ACTIONS(176),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(176),
    [sym__unordered_list_mark] = ACTIONS(178),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(178),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(176),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(178),
    [sym__checklist_mark] = ACTIONS(178),
    [aux_sym_code_token1] = ACTIONS(176),
    [aux_sym_code_language_token1] = ACTIONS(178),
    [anon_sym_SLASH_SLASH] = ACTIONS(176),
    [aux_sym_line_breaks_token1] = ACTIONS(176),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(176),
    [anon_sym_image_COLON_COLON] = ACTIONS(176),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(176),
    [anon_sym_audio_COLON_COLON] = ACTIONS(176),
    [anon_sym_video_COLON_COLON] = ACTIONS(176),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(176),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(176),
    [aux_sym_url_token1] = ACTIONS(178),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_xref_COLON] = ACTIONS(178),
    [sym_emphasis] = ACTIONS(178),
    [sym_strong] = ACTIONS(178),
    [sym_monospace] = ACTIONS(178),
    [sym_highlight] = ACTIONS(176),
    [sym_superscript] = ACTIONS(178),
    [sym_subscript] = ACTIONS(176),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(176),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(176),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(176),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(182),
    [sym_title1] = ACTIONS(180),
    [sym_title2] = ACTIONS(180),
    [sym_title3] = ACTIONS(180),
    [sym_title4] = ACTIONS(180),
    [sym_title5] = ACTIONS(180),
    [anon_sym_NOTE_COLON] = ACTIONS(180),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(180),
    [anon_sym_TIP_COLON] = ACTIONS(180),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(180),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(180),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(180),
    [anon_sym_CAUTION_COLON] = ACTIONS(180),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(180),
    [anon_sym_WARNING_COLON] = ACTIONS(180),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(180),
    [sym__unordered_list_mark] = ACTIONS(182),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(182),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(180),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(182),
    [sym__checklist_mark] = ACTIONS(182),
    [aux_sym_code_token1] = ACTIONS(180),
    [aux_sym_code_language_token1] = ACTIONS(182),
    [anon_sym_SLASH_SLASH] = ACTIONS(180),
    [aux_sym_line_breaks_token1] = ACTIONS(180),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(180),
    [anon_sym_image_COLON_COLON] = ACTIONS(180),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(180),
    [anon_sym_audio_COLON_COLON] = ACTIONS(180),
    [anon_sym_video_COLON_COLON] = ACTIONS(180),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(180),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(180),
    [aux_sym_url_token1] = ACTIONS(182),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_xref_COLON] = ACTIONS(182),
    [sym_emphasis] = ACTIONS(182),
    [sym_strong] = ACTIONS(182),
    [sym_monospace] = ACTIONS(182),
    [sym_highlight] = ACTIONS(180),
    [sym_superscript] = ACTIONS(182),
    [sym_subscript] = ACTIONS(180),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(180),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(180),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(180),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(180),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_DOT] = ACTIONS(186),
    [sym_title1] = ACTIONS(184),
    [sym_title2] = ACTIONS(184),
    [sym_title3] = ACTIONS(184),
    [sym_title4] = ACTIONS(184),
    [sym_title5] = ACTIONS(184),
    [anon_sym_NOTE_COLON] = ACTIONS(184),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(184),
    [anon_sym_TIP_COLON] = ACTIONS(184),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(184),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(184),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(184),
    [anon_sym_CAUTION_COLON] = ACTIONS(184),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(184),
    [anon_sym_WARNING_COLON] = ACTIONS(184),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(184),
    [sym__unordered_list_mark] = ACTIONS(186),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(186),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(184),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(186),
    [sym__checklist_mark] = ACTIONS(186),
    [aux_sym_code_token1] = ACTIONS(184),
    [aux_sym_code_language_token1] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(184),
    [aux_sym_line_breaks_token1] = ACTIONS(184),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(184),
    [anon_sym_image_COLON_COLON] = ACTIONS(184),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(184),
    [anon_sym_audio_COLON_COLON] = ACTIONS(184),
    [anon_sym_video_COLON_COLON] = ACTIONS(184),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(184),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(184),
    [aux_sym_url_token1] = ACTIONS(186),
    [anon_sym_LT_LT] = ACTIONS(186),
    [anon_sym_xref_COLON] = ACTIONS(186),
    [sym_emphasis] = ACTIONS(186),
    [sym_strong] = ACTIONS(186),
    [sym_monospace] = ACTIONS(186),
    [sym_highlight] = ACTIONS(184),
    [sym_superscript] = ACTIONS(186),
    [sym_subscript] = ACTIONS(184),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(184),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(184),
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
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(190),
    [sym_title1] = ACTIONS(188),
    [sym_title2] = ACTIONS(188),
    [sym_title3] = ACTIONS(188),
    [sym_title4] = ACTIONS(188),
    [sym_title5] = ACTIONS(188),
    [anon_sym_NOTE_COLON] = ACTIONS(188),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(188),
    [anon_sym_TIP_COLON] = ACTIONS(188),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(188),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(188),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(188),
    [anon_sym_CAUTION_COLON] = ACTIONS(188),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(188),
    [anon_sym_WARNING_COLON] = ACTIONS(188),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(188),
    [sym__unordered_list_mark] = ACTIONS(190),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(190),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(188),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(190),
    [sym__checklist_mark] = ACTIONS(190),
    [aux_sym_code_token1] = ACTIONS(188),
    [aux_sym_code_language_token1] = ACTIONS(190),
    [anon_sym_SLASH_SLASH] = ACTIONS(188),
    [aux_sym_line_breaks_token1] = ACTIONS(188),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(188),
    [anon_sym_image_COLON_COLON] = ACTIONS(188),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(188),
    [anon_sym_audio_COLON_COLON] = ACTIONS(188),
    [anon_sym_video_COLON_COLON] = ACTIONS(188),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(188),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(188),
    [aux_sym_url_token1] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(190),
    [anon_sym_xref_COLON] = ACTIONS(190),
    [sym_emphasis] = ACTIONS(190),
    [sym_strong] = ACTIONS(190),
    [sym_monospace] = ACTIONS(190),
    [sym_highlight] = ACTIONS(188),
    [sym_superscript] = ACTIONS(190),
    [sym_subscript] = ACTIONS(188),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(188),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(188),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(188),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(194),
    [sym_title1] = ACTIONS(192),
    [sym_title2] = ACTIONS(192),
    [sym_title3] = ACTIONS(192),
    [sym_title4] = ACTIONS(192),
    [sym_title5] = ACTIONS(192),
    [anon_sym_NOTE_COLON] = ACTIONS(192),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(192),
    [anon_sym_TIP_COLON] = ACTIONS(192),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(192),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(192),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(192),
    [anon_sym_CAUTION_COLON] = ACTIONS(192),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(192),
    [anon_sym_WARNING_COLON] = ACTIONS(192),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(192),
    [sym__unordered_list_mark] = ACTIONS(194),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(194),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(192),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(194),
    [sym__checklist_mark] = ACTIONS(194),
    [aux_sym_code_token1] = ACTIONS(192),
    [aux_sym_code_language_token1] = ACTIONS(194),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [aux_sym_line_breaks_token1] = ACTIONS(192),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(192),
    [anon_sym_image_COLON_COLON] = ACTIONS(192),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(192),
    [anon_sym_audio_COLON_COLON] = ACTIONS(192),
    [anon_sym_video_COLON_COLON] = ACTIONS(192),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(192),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(192),
    [aux_sym_url_token1] = ACTIONS(194),
    [anon_sym_LT_LT] = ACTIONS(194),
    [anon_sym_xref_COLON] = ACTIONS(194),
    [sym_emphasis] = ACTIONS(194),
    [sym_strong] = ACTIONS(194),
    [sym_monospace] = ACTIONS(194),
    [sym_highlight] = ACTIONS(192),
    [sym_superscript] = ACTIONS(194),
    [sym_subscript] = ACTIONS(192),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(192),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(192),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(192),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(192),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(198),
    [sym_title1] = ACTIONS(196),
    [sym_title2] = ACTIONS(196),
    [sym_title3] = ACTIONS(196),
    [sym_title4] = ACTIONS(196),
    [sym_title5] = ACTIONS(196),
    [anon_sym_NOTE_COLON] = ACTIONS(196),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(196),
    [anon_sym_TIP_COLON] = ACTIONS(196),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(196),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(196),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(196),
    [anon_sym_CAUTION_COLON] = ACTIONS(196),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(196),
    [anon_sym_WARNING_COLON] = ACTIONS(196),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(196),
    [sym__unordered_list_mark] = ACTIONS(198),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(198),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(196),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(198),
    [sym__checklist_mark] = ACTIONS(198),
    [aux_sym_code_token1] = ACTIONS(196),
    [aux_sym_code_language_token1] = ACTIONS(198),
    [anon_sym_SLASH_SLASH] = ACTIONS(196),
    [aux_sym_line_breaks_token1] = ACTIONS(196),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(196),
    [anon_sym_image_COLON_COLON] = ACTIONS(196),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(196),
    [anon_sym_audio_COLON_COLON] = ACTIONS(196),
    [anon_sym_video_COLON_COLON] = ACTIONS(196),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(196),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(196),
    [aux_sym_url_token1] = ACTIONS(198),
    [anon_sym_LT_LT] = ACTIONS(198),
    [anon_sym_xref_COLON] = ACTIONS(198),
    [sym_emphasis] = ACTIONS(198),
    [sym_strong] = ACTIONS(198),
    [sym_monospace] = ACTIONS(198),
    [sym_highlight] = ACTIONS(196),
    [sym_superscript] = ACTIONS(198),
    [sym_subscript] = ACTIONS(196),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(196),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(196),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(196),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(202),
    [sym_title1] = ACTIONS(200),
    [sym_title2] = ACTIONS(200),
    [sym_title3] = ACTIONS(200),
    [sym_title4] = ACTIONS(200),
    [sym_title5] = ACTIONS(200),
    [anon_sym_NOTE_COLON] = ACTIONS(200),
    [anon_sym_LBRACKNOTE_RBRACK_LF] = ACTIONS(200),
    [anon_sym_TIP_COLON] = ACTIONS(200),
    [anon_sym_LBRACKTIP_RBRACK_LF] = ACTIONS(200),
    [anon_sym_IMPORTANT_COLON] = ACTIONS(200),
    [anon_sym_LBRACKIMPORTANT_RBRACK_LF] = ACTIONS(200),
    [anon_sym_CAUTION_COLON] = ACTIONS(200),
    [anon_sym_LBRACKCAUTION_RBRACK_LF] = ACTIONS(200),
    [anon_sym_WARNING_COLON] = ACTIONS(200),
    [anon_sym_LBRACKWARNING_RBRACK_LF] = ACTIONS(200),
    [sym__unordered_list_mark] = ACTIONS(202),
    [aux_sym__ordered_list_mark_token1] = ACTIONS(202),
    [aux_sym__ordered_list_mark_token2] = ACTIONS(200),
    [aux_sym__ordered_list_mark_token3] = ACTIONS(202),
    [sym__checklist_mark] = ACTIONS(202),
    [aux_sym_code_token1] = ACTIONS(200),
    [aux_sym_code_language_token1] = ACTIONS(202),
    [anon_sym_SLASH_SLASH] = ACTIONS(200),
    [aux_sym_line_breaks_token1] = ACTIONS(200),
    [anon_sym_LT_LT_LT_LF_LF] = ACTIONS(200),
    [anon_sym_image_COLON_COLON] = ACTIONS(200),
    [anon_sym_PIPE_EQ_EQ_EQ_LF] = ACTIONS(200),
    [anon_sym_audio_COLON_COLON] = ACTIONS(200),
    [anon_sym_video_COLON_COLON] = ACTIONS(200),
    [anon_sym_kbd_COLON_LBRACK] = ACTIONS(200),
    [anon_sym_footnote_COLON_LBRACK] = ACTIONS(200),
    [aux_sym_url_token1] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(202),
    [anon_sym_xref_COLON] = ACTIONS(202),
    [sym_emphasis] = ACTIONS(202),
    [sym_strong] = ACTIONS(202),
    [sym_monospace] = ACTIONS(202),
    [sym_highlight] = ACTIONS(200),
    [sym_superscript] = ACTIONS(202),
    [sym_subscript] = ACTIONS(200),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(200),
    [anon_sym_pass_COLON_LBRACK] = ACTIONS(200),
    [anon_sym_LBRACEblank_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEempty_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEsp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEnbsp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEzwsp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEwj_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEapos_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEquot_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACElsquo_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACErsquo_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEldquo_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACErdquo_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEdeg_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEplus_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEbrvbar_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEvbar_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEamp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACElt_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEgt_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEstartsb_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEendsb_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEcaret_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEasterisk_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEtilde_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEbackslash_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEbacktick_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEtwo_DASHcolons_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEtwo_DASHsemicolons_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEcpp_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACEpp_RBRACE] = ACTIONS(200),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(206),
    [sym_title1] = ACTIONS(204),
    [sym_title2] = ACTIONS(204),
    [sym_title3] = ACTIONS(204),
    [sym_title4] = ACTIONS(204),
    [sym_title5] = ACTIONS(204),
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
    [aux_sym_code_language_token1] = ACTIONS(206),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(210),
    [sym_title1] = ACTIONS(208),
    [sym_title2] = ACTIONS(208),
    [sym_title3] = ACTIONS(208),
    [sym_title4] = ACTIONS(208),
    [sym_title5] = ACTIONS(208),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(214),
    [sym_title1] = ACTIONS(212),
    [sym_title2] = ACTIONS(212),
    [sym_title3] = ACTIONS(212),
    [sym_title4] = ACTIONS(212),
    [sym_title5] = ACTIONS(212),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(218),
    [sym_title1] = ACTIONS(216),
    [sym_title2] = ACTIONS(216),
    [sym_title3] = ACTIONS(216),
    [sym_title4] = ACTIONS(216),
    [sym_title5] = ACTIONS(216),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(222),
    [sym_title1] = ACTIONS(220),
    [sym_title2] = ACTIONS(220),
    [sym_title3] = ACTIONS(220),
    [sym_title4] = ACTIONS(220),
    [sym_title5] = ACTIONS(220),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(226),
    [sym_title1] = ACTIONS(224),
    [sym_title2] = ACTIONS(224),
    [sym_title3] = ACTIONS(224),
    [sym_title4] = ACTIONS(224),
    [sym_title5] = ACTIONS(224),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(230),
    [sym_title1] = ACTIONS(228),
    [sym_title2] = ACTIONS(228),
    [sym_title3] = ACTIONS(228),
    [sym_title4] = ACTIONS(228),
    [sym_title5] = ACTIONS(228),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(234),
    [sym_title1] = ACTIONS(232),
    [sym_title2] = ACTIONS(232),
    [sym_title3] = ACTIONS(232),
    [sym_title4] = ACTIONS(232),
    [sym_title5] = ACTIONS(232),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(238),
    [sym_title1] = ACTIONS(236),
    [sym_title2] = ACTIONS(236),
    [sym_title3] = ACTIONS(236),
    [sym_title4] = ACTIONS(236),
    [sym_title5] = ACTIONS(236),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(242),
    [sym_title1] = ACTIONS(240),
    [sym_title2] = ACTIONS(240),
    [sym_title3] = ACTIONS(240),
    [sym_title4] = ACTIONS(240),
    [sym_title5] = ACTIONS(240),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(246),
    [sym_title1] = ACTIONS(244),
    [sym_title2] = ACTIONS(244),
    [sym_title3] = ACTIONS(244),
    [sym_title4] = ACTIONS(244),
    [sym_title5] = ACTIONS(244),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_DOT] = ACTIONS(250),
    [sym_title1] = ACTIONS(248),
    [sym_title2] = ACTIONS(248),
    [sym_title3] = ACTIONS(248),
    [sym_title4] = ACTIONS(248),
    [sym_title5] = ACTIONS(248),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_DOT] = ACTIONS(254),
    [sym_title1] = ACTIONS(252),
    [sym_title2] = ACTIONS(252),
    [sym_title3] = ACTIONS(252),
    [sym_title4] = ACTIONS(252),
    [sym_title5] = ACTIONS(252),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(258),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(262),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_DOT] = ACTIONS(266),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_DOT] = ACTIONS(270),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(274),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(278),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(282),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(286),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(290),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_DOT] = ACTIONS(294),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(298),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(302),
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
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(306),
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
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(310),
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
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(314),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(318),
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
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(322),
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
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(326),
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
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(330),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(334),
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
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(338),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(55), 1,
      aux_sym_url_token1,
    ACTIONS(57), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 1,
      anon_sym_xref_COLON,
    ACTIONS(342), 1,
      anon_sym_LF_LF,
    ACTIONS(344), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(346), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(348), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(350), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(50), 1,
      sym__xref,
    STATE(52), 1,
      sym__inline_xref,
    STATE(57), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(340), 7,
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
    ACTIONS(352), 30,
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
    ACTIONS(357), 1,
      anon_sym_LF_LF,
    ACTIONS(359), 1,
      anon_sym_kbd_COLON_LBRACK,
    ACTIONS(362), 1,
      anon_sym_footnote_COLON_LBRACK,
    ACTIONS(365), 1,
      aux_sym_url_token1,
    ACTIONS(368), 1,
      anon_sym_LT_LT,
    ACTIONS(371), 1,
      anon_sym_xref_COLON,
    ACTIONS(374), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(377), 1,
      anon_sym_pass_COLON_LBRACK,
    STATE(50), 1,
      sym__xref,
    STATE(52), 1,
      sym__inline_xref,
    STATE(57), 2,
      sym__passthrough_plus,
      sym__passthrough_cmd,
    ACTIONS(354), 7,
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
    ACTIONS(380), 30,
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
    ACTIONS(33), 1,
      aux_sym_code_token1,
    ACTIONS(43), 1,
      anon_sym_image_COLON_COLON,
    ACTIONS(45), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    ACTIONS(47), 1,
      anon_sym_audio_COLON_COLON,
    ACTIONS(49), 1,
      anon_sym_video_COLON_COLON,
    ACTIONS(383), 1,
      aux_sym_code_language_token1,
    STATE(69), 1,
      sym_table_start,
    STATE(117), 1,
      sym_list_item_mark,
    STATE(142), 1,
      sym__ordered_list_mark,
    ACTIONS(29), 2,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
    STATE(4), 2,
      sym__tip,
      sym__tip_block,
    STATE(5), 2,
      sym__caution,
      sym__caution_block,
    STATE(33), 2,
      sym__note_line,
      sym__note_block,
    STATE(35), 2,
      sym__important,
      sym__important_block,
    STATE(37), 2,
      sym__warning,
      sym__warning_block,
    STATE(66), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(31), 3,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      sym__checklist_mark,
    STATE(6), 13,
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
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      anon_sym_LF_LF,
    ACTIONS(385), 44,
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
    ACTIONS(393), 1,
      anon_sym_COLON_COLON,
    ACTIONS(395), 1,
      anon_sym_LF_LF,
    ACTIONS(391), 44,
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
    ACTIONS(399), 1,
      anon_sym_LF_LF,
    ACTIONS(397), 44,
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
    ACTIONS(403), 1,
      anon_sym_LF_LF,
    ACTIONS(401), 44,
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
    ACTIONS(399), 1,
      anon_sym_LF_LF,
    ACTIONS(397), 44,
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
    ACTIONS(407), 1,
      anon_sym_LF_LF,
    ACTIONS(405), 44,
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
    ACTIONS(411), 1,
      anon_sym_LF_LF,
    ACTIONS(409), 44,
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
    ACTIONS(415), 1,
      anon_sym_LF_LF,
    ACTIONS(413), 44,
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
    ACTIONS(419), 1,
      anon_sym_LF_LF,
    ACTIONS(417), 44,
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
    ACTIONS(423), 1,
      anon_sym_LF_LF,
    ACTIONS(421), 44,
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
    ACTIONS(427), 1,
      anon_sym_LF_LF,
    ACTIONS(425), 44,
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
    ACTIONS(431), 1,
      anon_sym_LF_LF,
    ACTIONS(429), 44,
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
    ACTIONS(435), 1,
      anon_sym_LF_LF,
    ACTIONS(433), 44,
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
    ACTIONS(439), 1,
      anon_sym_LF_LF,
    ACTIONS(437), 44,
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
    ACTIONS(443), 1,
      anon_sym_LF_LF,
    ACTIONS(441), 44,
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
    ACTIONS(447), 1,
      anon_sym_LF_LF,
    ACTIONS(445), 44,
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
    ACTIONS(451), 3,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token3,
      aux_sym_code_language_token1,
    ACTIONS(449), 18,
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
    ACTIONS(453), 1,
      anon_sym_LF,
    STATE(117), 1,
      sym_list_item_mark,
    STATE(142), 1,
      sym__ordered_list_mark,
    STATE(65), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(455), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1131] = 5,
    ACTIONS(458), 1,
      anon_sym_LF,
    STATE(117), 1,
      sym_list_item_mark,
    STATE(142), 1,
      sym__ordered_list_mark,
    STATE(65), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(29), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1152] = 2,
    ACTIONS(460), 1,
      anon_sym_LF,
    ACTIONS(462), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1163] = 2,
    ACTIONS(464), 1,
      anon_sym_LF,
    ACTIONS(466), 5,
      sym__unordered_list_mark,
      aux_sym__ordered_list_mark_token1,
      aux_sym__ordered_list_mark_token2,
      aux_sym__ordered_list_mark_token3,
      sym__checklist_mark,
  [1174] = 5,
    ACTIONS(468), 1,
      aux_sym_block_title_token1,
    ACTIONS(470), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(15), 1,
      sym_table_end,
    STATE(84), 1,
      aux_sym_table_content_repeat1,
    STATE(93), 1,
      sym_table_content,
  [1190] = 4,
    ACTIONS(472), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(474), 1,
      aux_sym__note_block_token1,
    STATE(73), 1,
      aux_sym__note_block_repeat1,
    STATE(143), 1,
      sym_code_content,
  [1203] = 3,
    ACTIONS(476), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(478), 1,
      aux_sym__note_block_token1,
    STATE(86), 1,
      aux_sym__note_block_repeat1,
  [1213] = 1,
    ACTIONS(480), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_GT_GT,
  [1219] = 3,
    ACTIONS(482), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(484), 1,
      aux_sym__note_block_token1,
    STATE(76), 1,
      aux_sym__note_block_repeat1,
  [1229] = 3,
    ACTIONS(486), 1,
      anon_sym_LBRACK,
    ACTIONS(488), 1,
      aux_sym_audio_url_token1,
    STATE(144), 1,
      sym_audio_url,
  [1239] = 3,
    ACTIONS(488), 1,
      aux_sym_audio_url_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    STATE(119), 1,
      sym_audio_url,
  [1249] = 3,
    ACTIONS(492), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(494), 1,
      aux_sym__note_block_token1,
    STATE(76), 1,
      aux_sym__note_block_repeat1,
  [1259] = 3,
    ACTIONS(497), 1,
      aux_sym_block_title_token1,
    ACTIONS(500), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(77), 1,
      aux_sym_table_content_repeat1,
  [1269] = 3,
    ACTIONS(502), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(504), 1,
      aux_sym__note_block_token1,
    STATE(91), 1,
      aux_sym__note_block_repeat1,
  [1279] = 3,
    ACTIONS(506), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(508), 1,
      aux_sym__note_block_token1,
    STATE(82), 1,
      aux_sym__note_block_repeat1,
  [1289] = 3,
    ACTIONS(484), 1,
      aux_sym__note_block_token1,
    ACTIONS(510), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(76), 1,
      aux_sym__note_block_repeat1,
  [1299] = 3,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    ACTIONS(514), 1,
      aux_sym_audio_url_token1,
    STATE(138), 1,
      sym_audio_title,
  [1309] = 3,
    ACTIONS(484), 1,
      aux_sym__note_block_token1,
    ACTIONS(516), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(76), 1,
      aux_sym__note_block_repeat1,
  [1319] = 3,
    ACTIONS(514), 1,
      aux_sym_audio_url_token1,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_audio_title,
  [1329] = 3,
    ACTIONS(520), 1,
      aux_sym_block_title_token1,
    ACTIONS(522), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(77), 1,
      aux_sym_table_content_repeat1,
  [1339] = 3,
    ACTIONS(514), 1,
      aux_sym_audio_url_token1,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym_audio_title,
  [1349] = 3,
    ACTIONS(484), 1,
      aux_sym__note_block_token1,
    ACTIONS(526), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(76), 1,
      aux_sym__note_block_repeat1,
  [1359] = 3,
    ACTIONS(514), 1,
      aux_sym_audio_url_token1,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      sym_audio_title,
  [1369] = 3,
    ACTIONS(530), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(532), 1,
      aux_sym__note_block_token1,
    STATE(80), 1,
      aux_sym__note_block_repeat1,
  [1379] = 3,
    ACTIONS(484), 1,
      aux_sym__note_block_token1,
    ACTIONS(534), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(76), 1,
      aux_sym__note_block_repeat1,
  [1389] = 3,
    ACTIONS(536), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    ACTIONS(538), 1,
      aux_sym__note_block_token1,
    STATE(89), 1,
      aux_sym__note_block_repeat1,
  [1399] = 3,
    ACTIONS(484), 1,
      aux_sym__note_block_token1,
    ACTIONS(540), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
    STATE(76), 1,
      aux_sym__note_block_repeat1,
  [1409] = 2,
    ACTIONS(514), 1,
      aux_sym_audio_url_token1,
    STATE(140), 1,
      sym_audio_title,
  [1416] = 2,
    ACTIONS(542), 1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
    STATE(26), 1,
      sym_table_end,
  [1423] = 2,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_GT_GT,
  [1430] = 2,
    ACTIONS(548), 1,
      aux_sym_code_language_token1,
    STATE(127), 1,
      sym_code_language,
  [1437] = 2,
    ACTIONS(488), 1,
      aux_sym_audio_url_token1,
    STATE(139), 1,
      sym_audio_url,
  [1444] = 1,
    ACTIONS(550), 2,
      aux_sym_block_title_token1,
      anon_sym_PIPE_EQ_EQ_EQ_LF,
  [1449] = 1,
    ACTIONS(552), 2,
      anon_sym_RBRACK,
      anon_sym_PLUS_PLUS_PLUS,
  [1454] = 2,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
    ACTIONS(556), 1,
      sym_kbd_content,
  [1461] = 2,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    ACTIONS(560), 1,
      sym_footnote_content,
  [1468] = 2,
    ACTIONS(562), 1,
      aux_sym_code_language_token1,
    STATE(94), 1,
      sym_xref_url,
  [1475] = 2,
    ACTIONS(562), 1,
      aux_sym_code_language_token1,
    STATE(128), 1,
      sym_xref_url,
  [1482] = 2,
    ACTIONS(564), 1,
      aux_sym_audio_url_token1,
    STATE(130), 1,
      sym_audio_title,
  [1489] = 2,
    ACTIONS(566), 1,
      aux_sym_code_language_token1,
    STATE(126), 1,
      sym_passthrough_content,
  [1496] = 1,
    ACTIONS(568), 2,
      anon_sym_RBRACK,
      anon_sym_GT_GT,
  [1501] = 2,
    ACTIONS(514), 1,
      aux_sym_audio_url_token1,
    STATE(141), 1,
      sym_audio_title,
  [1508] = 2,
    ACTIONS(570), 1,
      aux_sym_block_title_token1,
    STATE(68), 1,
      sym_list_item_content,
  [1515] = 2,
    ACTIONS(566), 1,
      aux_sym_code_language_token1,
    STATE(123), 1,
      sym_passthrough_content,
  [1522] = 1,
    ACTIONS(572), 1,
      aux_sym_url_token2,
  [1526] = 1,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
  [1530] = 1,
    ACTIONS(576), 1,
      anon_sym_LF,
  [1534] = 1,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
  [1538] = 1,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
  [1542] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACK,
  [1546] = 1,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
  [1550] = 1,
    ACTIONS(586), 1,
      aux_sym_block_title_token1,
  [1554] = 1,
    ACTIONS(588), 1,
      anon_sym_,
  [1558] = 1,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
  [1562] = 1,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
  [1566] = 1,
    ACTIONS(594), 1,
      anon_sym_LF,
  [1570] = 1,
    ACTIONS(596), 1,
      anon_sym_COLON_COLON,
  [1574] = 1,
    ACTIONS(598), 1,
      anon_sym_LF,
  [1578] = 1,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
  [1582] = 1,
    ACTIONS(602), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1586] = 1,
    ACTIONS(604), 1,
      anon_sym_RBRACK_LF,
  [1590] = 1,
    ACTIONS(606), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1594] = 1,
    ACTIONS(608), 1,
      anon_sym_RBRACK_LF,
  [1598] = 1,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
  [1602] = 1,
    ACTIONS(612), 1,
      aux_sym_description_list_token1,
  [1606] = 1,
    ACTIONS(614), 1,
      anon_sym_RBRACK_LF,
  [1610] = 1,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
  [1614] = 1,
    ACTIONS(618), 1,
      anon_sym_LF,
  [1618] = 1,
    ACTIONS(620), 1,
      anon_sym_LF,
  [1622] = 1,
    ACTIONS(622), 1,
      anon_sym_RBRACK,
  [1626] = 1,
    ACTIONS(624), 1,
      aux_sym_comment_token1,
  [1630] = 1,
    ACTIONS(626), 1,
      anon_sym_LF,
  [1634] = 1,
    ACTIONS(628), 1,
      anon_sym_LF,
  [1638] = 1,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
  [1642] = 1,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
  [1646] = 1,
    ACTIONS(634), 1,
      anon_sym_GT_GT,
  [1650] = 1,
    ACTIONS(636), 1,
      anon_sym_RBRACK,
  [1654] = 1,
    ACTIONS(638), 1,
      anon_sym_,
  [1658] = 1,
    ACTIONS(640), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1662] = 1,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
  [1666] = 1,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1670] = 1,
    ACTIONS(646), 1,
      aux_sym_block_title_token1,
  [1674] = 1,
    ACTIONS(648), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1678] = 1,
    ACTIONS(650), 1,
      anon_sym_LF,
  [1682] = 1,
    ACTIONS(652), 1,
      aux_sym_block_title_token1,
  [1686] = 1,
    ACTIONS(654), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1690] = 1,
    ACTIONS(656), 1,
      anon_sym_LF,
  [1694] = 1,
    ACTIONS(658), 1,
      aux_sym_block_title_token1,
  [1698] = 1,
    ACTIONS(660), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1702] = 1,
    ACTIONS(662), 1,
      aux_sym_block_title_token1,
  [1706] = 1,
    ACTIONS(664), 1,
      anon_sym_DASH_DASH_DASH_DASH_LF,
  [1710] = 1,
    ACTIONS(666), 1,
      aux_sym_block_title_token1,
  [1714] = 1,
    ACTIONS(568), 1,
      anon_sym_RBRACK_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(45)] = 0,
  [SMALL_STATE(46)] = 86,
  [SMALL_STATE(47)] = 172,
  [SMALL_STATE(48)] = 278,
  [SMALL_STATE(49)] = 331,
  [SMALL_STATE(50)] = 384,
  [SMALL_STATE(51)] = 434,
  [SMALL_STATE(52)] = 484,
  [SMALL_STATE(53)] = 534,
  [SMALL_STATE(54)] = 584,
  [SMALL_STATE(55)] = 634,
  [SMALL_STATE(56)] = 684,
  [SMALL_STATE(57)] = 734,
  [SMALL_STATE(58)] = 784,
  [SMALL_STATE(59)] = 834,
  [SMALL_STATE(60)] = 884,
  [SMALL_STATE(61)] = 934,
  [SMALL_STATE(62)] = 984,
  [SMALL_STATE(63)] = 1034,
  [SMALL_STATE(64)] = 1084,
  [SMALL_STATE(65)] = 1110,
  [SMALL_STATE(66)] = 1131,
  [SMALL_STATE(67)] = 1152,
  [SMALL_STATE(68)] = 1163,
  [SMALL_STATE(69)] = 1174,
  [SMALL_STATE(70)] = 1190,
  [SMALL_STATE(71)] = 1203,
  [SMALL_STATE(72)] = 1213,
  [SMALL_STATE(73)] = 1219,
  [SMALL_STATE(74)] = 1229,
  [SMALL_STATE(75)] = 1239,
  [SMALL_STATE(76)] = 1249,
  [SMALL_STATE(77)] = 1259,
  [SMALL_STATE(78)] = 1269,
  [SMALL_STATE(79)] = 1279,
  [SMALL_STATE(80)] = 1289,
  [SMALL_STATE(81)] = 1299,
  [SMALL_STATE(82)] = 1309,
  [SMALL_STATE(83)] = 1319,
  [SMALL_STATE(84)] = 1329,
  [SMALL_STATE(85)] = 1339,
  [SMALL_STATE(86)] = 1349,
  [SMALL_STATE(87)] = 1359,
  [SMALL_STATE(88)] = 1369,
  [SMALL_STATE(89)] = 1379,
  [SMALL_STATE(90)] = 1389,
  [SMALL_STATE(91)] = 1399,
  [SMALL_STATE(92)] = 1409,
  [SMALL_STATE(93)] = 1416,
  [SMALL_STATE(94)] = 1423,
  [SMALL_STATE(95)] = 1430,
  [SMALL_STATE(96)] = 1437,
  [SMALL_STATE(97)] = 1444,
  [SMALL_STATE(98)] = 1449,
  [SMALL_STATE(99)] = 1454,
  [SMALL_STATE(100)] = 1461,
  [SMALL_STATE(101)] = 1468,
  [SMALL_STATE(102)] = 1475,
  [SMALL_STATE(103)] = 1482,
  [SMALL_STATE(104)] = 1489,
  [SMALL_STATE(105)] = 1496,
  [SMALL_STATE(106)] = 1501,
  [SMALL_STATE(107)] = 1508,
  [SMALL_STATE(108)] = 1515,
  [SMALL_STATE(109)] = 1522,
  [SMALL_STATE(110)] = 1526,
  [SMALL_STATE(111)] = 1530,
  [SMALL_STATE(112)] = 1534,
  [SMALL_STATE(113)] = 1538,
  [SMALL_STATE(114)] = 1542,
  [SMALL_STATE(115)] = 1546,
  [SMALL_STATE(116)] = 1550,
  [SMALL_STATE(117)] = 1554,
  [SMALL_STATE(118)] = 1558,
  [SMALL_STATE(119)] = 1562,
  [SMALL_STATE(120)] = 1566,
  [SMALL_STATE(121)] = 1570,
  [SMALL_STATE(122)] = 1574,
  [SMALL_STATE(123)] = 1578,
  [SMALL_STATE(124)] = 1582,
  [SMALL_STATE(125)] = 1586,
  [SMALL_STATE(126)] = 1590,
  [SMALL_STATE(127)] = 1594,
  [SMALL_STATE(128)] = 1598,
  [SMALL_STATE(129)] = 1602,
  [SMALL_STATE(130)] = 1606,
  [SMALL_STATE(131)] = 1610,
  [SMALL_STATE(132)] = 1614,
  [SMALL_STATE(133)] = 1618,
  [SMALL_STATE(134)] = 1622,
  [SMALL_STATE(135)] = 1626,
  [SMALL_STATE(136)] = 1630,
  [SMALL_STATE(137)] = 1634,
  [SMALL_STATE(138)] = 1638,
  [SMALL_STATE(139)] = 1642,
  [SMALL_STATE(140)] = 1646,
  [SMALL_STATE(141)] = 1650,
  [SMALL_STATE(142)] = 1654,
  [SMALL_STATE(143)] = 1658,
  [SMALL_STATE(144)] = 1662,
  [SMALL_STATE(145)] = 1666,
  [SMALL_STATE(146)] = 1670,
  [SMALL_STATE(147)] = 1674,
  [SMALL_STATE(148)] = 1678,
  [SMALL_STATE(149)] = 1682,
  [SMALL_STATE(150)] = 1686,
  [SMALL_STATE(151)] = 1690,
  [SMALL_STATE(152)] = 1694,
  [SMALL_STATE(153)] = 1698,
  [SMALL_STATE(154)] = 1702,
  [SMALL_STATE(155)] = 1706,
  [SMALL_STATE(156)] = 1710,
  [SMALL_STATE(157)] = 1714,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(156),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(155),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(154),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(153),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(152),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(150),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(149),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(146),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(145),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(135),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caution, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caution, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__titled_block, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__titled_block, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 5, .production_id = 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 5, .production_id = 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 5, .production_id = 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 5, .production_id = 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image, 5, .production_id = 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image, 5, .production_id = 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 5, .production_id = 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_end, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_end, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_breaks, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_breaks, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_breaks, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_breaks, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_list, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description_list, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio, 6, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_audio, 6, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_block, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_block, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip_block, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip_block, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important_block, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important_block, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_important, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_important, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution_block, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution_block, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warning, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warning, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__caution, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__caution, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_video, 6, .production_id = 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_video, 6, .production_id = 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__warning_block, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__warning_block, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__important, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__important, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tip, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tip, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 6),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 6, .production_id = 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_line, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_line, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(46),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(99),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(100),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(48),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(101),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(102),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(104),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(108),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(51),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_element, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_element, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xref, 1, .production_id = 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref, 1, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 3, .production_id = 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__xref, 5, .production_id = 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xref, 5, .production_id = 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_passthrough, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footnote, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footnote, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_cmd, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_cmd, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__passthrough_plus, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passthrough_plus, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kbd, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kbd, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_xref, 5, .production_id = 4),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_title, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_title, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(142),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_content, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item_content, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xref_url, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_content, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__note_block_repeat1, 2), SHIFT_REPEAT(76),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2), SHIFT_REPEAT(77),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_content_repeat1, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_content, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_start, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_passthrough_content, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_title, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [590] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_language, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_audio_url, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item_mark, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
