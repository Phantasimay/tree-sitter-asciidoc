#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LF = 1,
  anon_sym_EQ = 2,
  anon_sym_ = 3,
  aux_sym_document_title_token1 = 4,
  aux_sym_author_line_token1 = 5,
  aux_sym_author_line_token2 = 6,
  anon_sym_LT = 7,
  anon_sym_GT = 8,
  anon_sym_COLON = 9,
  aux_sym_doc_description_token1 = 10,
  anon_sym_EQ_EQ = 11,
  anon_sym_EQ_EQ_EQ = 12,
  anon_sym_EQ_EQ_EQ_EQ = 13,
  anon_sym_EQ_EQ_EQ_EQ_EQ = 14,
  anon_sym_EQ_EQ_EQ_EQ_EQ_EQ = 15,
  sym_email = 16,
  sym__eof = 17,
  sym_document = 18,
  sym__block = 19,
  sym__block_ending = 20,
  sym__block_body = 21,
  sym_document_title = 22,
  sym_author_line = 23,
  sym__doc_attr = 24,
  sym_doc_description = 25,
  sym_title1 = 26,
  sym_title2 = 27,
  sym_title3 = 28,
  sym_title4 = 29,
  sym_title5 = 30,
  aux_sym_document_repeat1 = 31,
  aux_sym_document_title_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_EQ] = "=",
  [anon_sym_] = " ",
  [aux_sym_document_title_token1] = "document_title_token1",
  [aux_sym_author_line_token1] = "author_line_token1",
  [aux_sym_author_line_token2] = "author_line_token2",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [aux_sym_doc_description_token1] = "doc_description_token1",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_EQ_EQ_EQ_EQ] = "====",
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = "=====",
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = "======",
  [sym_email] = "email",
  [sym__eof] = "_eof",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym__block_ending] = "_block_ending",
  [sym__block_body] = "_block_body",
  [sym_document_title] = "document_title",
  [sym_author_line] = "author_line",
  [sym__doc_attr] = "_doc_attr",
  [sym_doc_description] = "doc_description",
  [sym_title1] = "title1",
  [sym_title2] = "title2",
  [sym_title3] = "title3",
  [sym_title4] = "title4",
  [sym_title5] = "title5",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_title_repeat1] = "document_title_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_] = anon_sym_,
  [aux_sym_document_title_token1] = aux_sym_document_title_token1,
  [aux_sym_author_line_token1] = aux_sym_author_line_token1,
  [aux_sym_author_line_token2] = aux_sym_author_line_token2,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_doc_description_token1] = aux_sym_doc_description_token1,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [sym_email] = sym_email,
  [sym__eof] = sym__eof,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym__block_ending] = sym__block_ending,
  [sym__block_body] = sym__block_body,
  [sym_document_title] = sym_document_title,
  [sym_author_line] = sym_author_line,
  [sym__doc_attr] = sym__doc_attr,
  [sym_doc_description] = sym_doc_description,
  [sym_title1] = sym_title1,
  [sym_title2] = sym_title2,
  [sym_title3] = sym_title3,
  [sym_title4] = sym_title4,
  [sym_title5] = sym_title5,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_title_repeat1] = aux_sym_document_title_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
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
  [aux_sym_document_title_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_author_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_author_line_token2] = {
    .visible = false,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doc_description_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_email] = {
    .visible = true,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
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
  [sym__block_ending] = {
    .visible = false,
    .named = true,
  },
  [sym__block_body] = {
    .visible = false,
    .named = true,
  },
  [sym_document_title] = {
    .visible = true,
    .named = true,
  },
  [sym_author_line] = {
    .visible = true,
    .named = true,
  },
  [sym__doc_attr] = {
    .visible = false,
    .named = true,
  },
  [sym_doc_description] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_title_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_attr_marker = 1,
  field_attr_name = 2,
  field_author_email = 3,
  field_doc_description = 4,
  field_first_name = 5,
  field_last_name = 6,
  field_middle_name = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attr_marker] = "attr_marker",
  [field_attr_name] = "attr_name",
  [field_author_email] = "author_email",
  [field_doc_description] = "doc_description",
  [field_first_name] = "first_name",
  [field_last_name] = "last_name",
  [field_middle_name] = "middle_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 3},
  [3] = {.index = 7, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attr_marker, 0},
    {field_attr_marker, 2},
    {field_attr_name, 1},
    {field_doc_description, 3},
  [4] =
    {field_author_email, 3},
    {field_first_name, 0},
    {field_last_name, 1},
  [7] =
    {field_author_email, 4},
    {field_first_name, 0},
    {field_last_name, 2},
    {field_middle_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 65:
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_document_title_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_document_title_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_author_line_token1);
      if (lookahead == '.') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_author_line_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_author_line_token2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_doc_description_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_doc_description_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 1, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 1, .external_lex_state = 1},
  [19] = {.lex_state = 1, .external_lex_state = 1},
  [20] = {.lex_state = 1, .external_lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 1, .external_lex_state = 1},
  [24] = {.lex_state = 1, .external_lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 66},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 82},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 66},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 4},
};

enum {
  ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_author_line_token1] = ACTIONS(1),
    [aux_sym_author_line_token2] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(36),
    [sym__block] = STATE(4),
    [sym__block_body] = STATE(18),
    [sym_document_title] = STATE(3),
    [sym_title1] = STATE(18),
    [sym_title2] = STATE(18),
    [sym_title3] = STATE(18),
    [sym_title4] = STATE(18),
    [sym_title5] = STATE(18),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym__block,
      aux_sym_document_repeat1,
    STATE(18), 6,
      sym__block_body,
      sym_title1,
      sym_title2,
      sym_title3,
      sym_title4,
      sym_title5,
  [31] = 8,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym__block,
      aux_sym_document_repeat1,
    STATE(18), 6,
      sym__block_body,
      sym_title1,
      sym_title2,
      sym_title3,
      sym_title4,
      sym_title5,
  [62] = 8,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym__block,
      aux_sym_document_repeat1,
    STATE(18), 6,
      sym__block_body,
      sym_title1,
      sym_title2,
      sym_title3,
      sym_title4,
      sym_title5,
  [93] = 8,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_EQ_EQ,
    ACTIONS(26), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(32), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(35), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(5), 2,
      sym__block,
      aux_sym_document_repeat1,
    STATE(18), 6,
      sym__block_body,
      sym_title1,
      sym_title2,
      sym_title3,
      sym_title4,
      sym_title5,
  [124] = 6,
    ACTIONS(40), 1,
      aux_sym_author_line_token1,
    ACTIONS(42), 1,
      anon_sym_COLON,
    STATE(9), 1,
      sym_author_line,
    STATE(13), 1,
      sym__block_ending,
    ACTIONS(38), 2,
      sym__eof,
      anon_sym_LF,
    STATE(8), 3,
      sym__doc_attr,
      sym_doc_description,
      aux_sym_document_title_repeat1,
  [146] = 4,
    ACTIONS(42), 1,
      anon_sym_COLON,
    STATE(10), 1,
      sym__block_ending,
    ACTIONS(44), 2,
      sym__eof,
      anon_sym_LF,
    STATE(11), 3,
      sym__doc_attr,
      sym_doc_description,
      aux_sym_document_title_repeat1,
  [162] = 4,
    ACTIONS(42), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym__block_ending,
    ACTIONS(46), 2,
      sym__eof,
      anon_sym_LF,
    STATE(11), 3,
      sym__doc_attr,
      sym_doc_description,
      aux_sym_document_title_repeat1,
  [178] = 4,
    ACTIONS(42), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym__block_ending,
    ACTIONS(46), 2,
      sym__eof,
      anon_sym_LF,
    STATE(7), 3,
      sym__doc_attr,
      sym_doc_description,
      aux_sym_document_title_repeat1,
  [194] = 2,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(50), 4,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [205] = 3,
    ACTIONS(54), 1,
      anon_sym_COLON,
    ACTIONS(52), 2,
      sym__eof,
      anon_sym_LF,
    STATE(11), 3,
      sym__doc_attr,
      sym_doc_description,
      aux_sym_document_title_repeat1,
  [218] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(59), 4,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [229] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(63), 4,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [240] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
  [251] = 2,
    ACTIONS(71), 1,
      anon_sym_COLON,
    ACTIONS(69), 2,
      sym__eof,
      anon_sym_LF,
  [259] = 2,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(73), 2,
      sym__eof,
      anon_sym_LF,
  [267] = 2,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(77), 2,
      sym__eof,
      anon_sym_LF,
  [275] = 2,
    STATE(14), 1,
      sym__block_ending,
    ACTIONS(81), 2,
      sym__eof,
      anon_sym_LF,
  [283] = 1,
    ACTIONS(83), 2,
      sym__eof,
      anon_sym_LF,
  [288] = 1,
    ACTIONS(85), 2,
      sym__eof,
      anon_sym_LF,
  [293] = 2,
    ACTIONS(87), 1,
      aux_sym_author_line_token1,
    ACTIONS(89), 1,
      aux_sym_author_line_token2,
  [300] = 1,
    ACTIONS(91), 2,
      sym__eof,
      anon_sym_LF,
  [305] = 1,
    ACTIONS(93), 2,
      sym__eof,
      anon_sym_LF,
  [310] = 1,
    ACTIONS(95), 2,
      sym__eof,
      anon_sym_LF,
  [315] = 1,
    ACTIONS(97), 1,
      anon_sym_COLON,
  [319] = 1,
    ACTIONS(99), 1,
      sym_email,
  [323] = 1,
    ACTIONS(101), 1,
      aux_sym_document_title_token1,
  [327] = 1,
    ACTIONS(103), 1,
      aux_sym_author_line_token1,
  [331] = 1,
    ACTIONS(105), 1,
      anon_sym_,
  [335] = 1,
    ACTIONS(107), 1,
      aux_sym_document_title_token1,
  [339] = 1,
    ACTIONS(109), 1,
      aux_sym_document_title_token1,
  [343] = 1,
    ACTIONS(111), 1,
      anon_sym_LT,
  [347] = 1,
    ACTIONS(113), 1,
      aux_sym_author_line_token1,
  [351] = 1,
    ACTIONS(115), 1,
      aux_sym_document_title_token1,
  [355] = 1,
    ACTIONS(117), 1,
      aux_sym_document_title_token1,
  [359] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [363] = 1,
    ACTIONS(121), 1,
      anon_sym_,
  [367] = 1,
    ACTIONS(123), 1,
      aux_sym_document_title_token1,
  [371] = 1,
    ACTIONS(125), 1,
      anon_sym_LT,
  [375] = 1,
    ACTIONS(127), 1,
      aux_sym_doc_description_token1,
  [379] = 1,
    ACTIONS(129), 1,
      anon_sym_,
  [383] = 1,
    ACTIONS(131), 1,
      anon_sym_GT,
  [387] = 1,
    ACTIONS(133), 1,
      sym_email,
  [391] = 1,
    ACTIONS(135), 1,
      anon_sym_,
  [395] = 1,
    ACTIONS(137), 1,
      anon_sym_LF,
  [399] = 1,
    ACTIONS(139), 1,
      anon_sym_GT,
  [403] = 1,
    ACTIONS(141), 1,
      anon_sym_,
  [407] = 1,
    ACTIONS(143), 1,
      anon_sym_LF,
  [411] = 1,
    ACTIONS(145), 1,
      anon_sym_,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 240,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 288,
  [SMALL_STATE(21)] = 293,
  [SMALL_STATE(22)] = 300,
  [SMALL_STATE(23)] = 305,
  [SMALL_STATE(24)] = 310,
  [SMALL_STATE(25)] = 315,
  [SMALL_STATE(26)] = 319,
  [SMALL_STATE(27)] = 323,
  [SMALL_STATE(28)] = 327,
  [SMALL_STATE(29)] = 331,
  [SMALL_STATE(30)] = 335,
  [SMALL_STATE(31)] = 339,
  [SMALL_STATE(32)] = 343,
  [SMALL_STATE(33)] = 347,
  [SMALL_STATE(34)] = 351,
  [SMALL_STATE(35)] = 355,
  [SMALL_STATE(36)] = 359,
  [SMALL_STATE(37)] = 363,
  [SMALL_STATE(38)] = 367,
  [SMALL_STATE(39)] = 371,
  [SMALL_STATE(40)] = 375,
  [SMALL_STATE(41)] = 379,
  [SMALL_STATE(42)] = 383,
  [SMALL_STATE(43)] = 387,
  [SMALL_STATE(44)] = 391,
  [SMALL_STATE(45)] = 395,
  [SMALL_STATE(46)] = 399,
  [SMALL_STATE(47)] = 403,
  [SMALL_STATE(48)] = 407,
  [SMALL_STATE(49)] = 411,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title, 6),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title, 6),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_title_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_title_repeat1, 2), SHIFT_REPEAT(28),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_title, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_title, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_line, 7, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_line, 7, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_line, 6, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_line, 6, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_description, 4, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_description, 4, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title3, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title4, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title5, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title1, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title2, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
