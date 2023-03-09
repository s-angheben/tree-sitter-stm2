#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_check_DASHsat = 2,
  anon_sym_RPAREN = 3,
  anon_sym_get_DASHmodel = 4,
  anon_sym_exit = 5,
  anon_sym_assert = 6,
  anon_sym_not = 7,
  anon_sym_or = 8,
  anon_sym_and = 9,
  anon_sym_EQ_GT = 10,
  anon_sym_declare_DASHconst = 11,
  anon_sym_Bool = 12,
  sym_identifier = 13,
  sym_source_file = 14,
  sym__specification = 15,
  sym_commands = 16,
  sym_assertion = 17,
  sym_logical_exp = 18,
  sym_declaration = 19,
  sym__type = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_logical_exp_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'k') ADVANCE(3);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_check_DASHsat);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_get_DASHmodel);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_declare_DASHconst);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(24),
    [sym__specification] = STATE(2),
    [sym_commands] = STATE(2),
    [sym_assertion] = STATE(2),
    [sym_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 5,
      sym__specification,
      sym_commands,
      sym_assertion,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [14] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(3), 5,
      sym__specification,
      sym_commands,
      sym_assertion,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [28] = 3,
    ACTIONS(16), 1,
      anon_sym_assert,
    ACTIONS(18), 1,
      anon_sym_declare_DASHconst,
    ACTIONS(14), 3,
      anon_sym_check_DASHsat,
      anon_sym_get_DASHmodel,
      anon_sym_exit,
  [40] = 4,
    ACTIONS(20), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(5), 2,
      sym_logical_exp,
      aux_sym_logical_exp_repeat1,
  [54] = 4,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(30), 1,
      anon_sym_RPAREN,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(5), 2,
      sym_logical_exp,
      aux_sym_logical_exp_repeat1,
  [68] = 3,
    ACTIONS(34), 1,
      anon_sym_not,
    ACTIONS(38), 1,
      anon_sym_EQ_GT,
    ACTIONS(36), 2,
      anon_sym_or,
      anon_sym_and,
  [79] = 3,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(6), 2,
      sym_logical_exp,
      aux_sym_logical_exp_repeat1,
  [90] = 3,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(26), 1,
      sym_logical_exp,
  [100] = 1,
    ACTIONS(40), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [106] = 3,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(23), 1,
      sym_logical_exp,
  [116] = 3,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(8), 1,
      sym_logical_exp,
  [126] = 3,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(9), 1,
      sym_logical_exp,
  [136] = 1,
    ACTIONS(42), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [142] = 3,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(21), 1,
      sym_logical_exp,
  [152] = 1,
    ACTIONS(44), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [158] = 1,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [163] = 2,
    ACTIONS(48), 1,
      anon_sym_Bool,
    STATE(22), 1,
      sym__type,
  [170] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [175] = 1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [180] = 1,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
  [184] = 1,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
  [188] = 1,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
  [192] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [196] = 1,
    ACTIONS(62), 1,
      sym_identifier,
  [200] = 1,
    ACTIONS(30), 1,
      anon_sym_RPAREN,
  [204] = 1,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 136,
  [SMALL_STATE(15)] = 142,
  [SMALL_STATE(16)] = 152,
  [SMALL_STATE(17)] = 158,
  [SMALL_STATE(18)] = 163,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 175,
  [SMALL_STATE(21)] = 180,
  [SMALL_STATE(22)] = 184,
  [SMALL_STATE(23)] = 188,
  [SMALL_STATE(24)] = 192,
  [SMALL_STATE(25)] = 196,
  [SMALL_STATE(26)] = 200,
  [SMALL_STATE(27)] = 204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_exp_repeat1, 2), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logical_exp_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logical_exp_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_exp, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_exp, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_exp, 5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commands, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assertion, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
