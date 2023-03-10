#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  sym_comment = 1,
  anon_sym_LPAREN = 2,
  anon_sym_check_DASHsat = 3,
  anon_sym_RPAREN = 4,
  anon_sym_get_DASHmodel = 5,
  anon_sym_exit = 6,
  anon_sym_assert = 7,
  anon_sym_not = 8,
  anon_sym_or = 9,
  anon_sym_and = 10,
  anon_sym_EQ_GT = 11,
  anon_sym_declare_DASHconst = 12,
  anon_sym_Bool = 13,
  sym_identifier = 14,
  sym_source_file = 15,
  sym__specification = 16,
  sym_commands = 17,
  sym_assertion = 18,
  sym_logical_exp = 19,
  sym_declaration = 20,
  sym__type = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_logical_exp_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_check_DASHsat] = "check-sat",
  [anon_sym_RPAREN] = ")",
  [anon_sym_get_DASHmodel] = "get-model",
  [anon_sym_exit] = "exit",
  [anon_sym_assert] = "assert",
  [anon_sym_not] = "not",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_declare_DASHconst] = "declare-const",
  [anon_sym_Bool] = "Bool",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__specification] = "_specification",
  [sym_commands] = "commands",
  [sym_assertion] = "assertion",
  [sym_logical_exp] = "logical_exp",
  [sym_declaration] = "declaration",
  [sym__type] = "_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_logical_exp_repeat1] = "logical_exp_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_check_DASHsat] = anon_sym_check_DASHsat,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_get_DASHmodel] = anon_sym_get_DASHmodel,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_declare_DASHconst] = anon_sym_declare_DASHconst,
  [anon_sym_Bool] = anon_sym_Bool,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__specification] = sym__specification,
  [sym_commands] = sym_commands,
  [sym_assertion] = sym_assertion,
  [sym_logical_exp] = sym_logical_exp,
  [sym_declaration] = sym_declaration,
  [sym__type] = sym__type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_logical_exp_repeat1] = aux_sym_logical_exp_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHsat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get_DASHmodel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare_DASHconst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__specification] = {
    .visible = false,
    .named = true,
  },
  [sym_commands] = {
    .visible = true,
    .named = true,
  },
  [sym_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_logical_exp_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_operator = 2,
  field_statement = 3,
  field_type = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_operator] = "operator",
  [field_statement] = "statement",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_statement, 2},
  [1] =
    {field_name, 2},
    {field_type, 3},
  [3] =
    {field_operator, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_check_DASHsat);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_get_DASHmodel);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_declare_DASHconst);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_check_DASHsat] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_get_DASHmodel] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_declare_DASHconst] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym__specification] = STATE(2),
    [sym_commands] = STATE(2),
    [sym_assertion] = STATE(2),
    [sym_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_comment,
    STATE(4), 5,
      sym__specification,
      sym_commands,
      sym_assertion,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [17] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_EQ_GT,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(24), 1,
      sym_logical_exp,
    ACTIONS(19), 2,
      anon_sym_or,
      anon_sym_and,
  [40] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    STATE(4), 5,
      sym__specification,
      sym_commands,
      sym_assertion,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [57] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_assert,
    ACTIONS(37), 1,
      anon_sym_declare_DASHconst,
    ACTIONS(33), 3,
      anon_sym_check_DASHsat,
      anon_sym_get_DASHmodel,
      anon_sym_exit,
  [72] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(6), 2,
      sym_logical_exp,
      aux_sym_logical_exp_repeat1,
  [89] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(6), 2,
      sym_logical_exp,
      aux_sym_logical_exp_repeat1,
  [106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(7), 2,
      sym_logical_exp,
      aux_sym_logical_exp_repeat1,
  [120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(26), 1,
      sym_logical_exp,
  [133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(8), 1,
      sym_logical_exp,
  [155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(13), 1,
      sym_logical_exp,
  [168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(28), 1,
      sym_logical_exp,
  [181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(23), 1,
      sym_logical_exp,
  [212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [221] = 1,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
  [227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_Bool,
    STATE(25), 1,
      sym__type,
  [237] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
  [243] = 1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
  [249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
  [256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
  [263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
  [270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 142,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 168,
  [SMALL_STATE(14)] = 181,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 199,
  [SMALL_STATE(17)] = 212,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 237,
  [SMALL_STATE(21)] = 243,
  [SMALL_STATE(22)] = 249,
  [SMALL_STATE(23)] = 256,
  [SMALL_STATE(24)] = 263,
  [SMALL_STATE(25)] = 270,
  [SMALL_STATE(26)] = 277,
  [SMALL_STATE(27)] = 284,
  [SMALL_STATE(28)] = 291,
  [SMALL_STATE(29)] = 298,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_exp_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_exp_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_exp_repeat1, 2), SHIFT_REPEAT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_exp, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_exp, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_exp, 4, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_exp, 5, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commands, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 4, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_smt2(void) {
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
