#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_rulesep = 1,
  sym_fullstop = 2,
  anon_sym_ixml = 3,
  anon_sym_version = 4,
  sym_tmark = 5,
  sym_mark = 6,
  sym__namestart = 7,
  sym__namefollow = 8,
  anon_sym_DQUOTE = 9,
  sym__escaped_dquote = 10,
  anon_sym_SQUOTE = 11,
  sym__escaped_squote = 12,
  sym__char = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym__comment_text = 16,
  sym_altsep = 17,
  sym_termsep = 18,
  sym_op = 19,
  sym_cp = 20,
  sym_single_star = 21,
  sym_double_star = 22,
  anon_sym_PLUS = 23,
  sym_double_plus = 24,
  sym_quest = 25,
  anon_sym_POUND = 26,
  aux_sym_hex_token1 = 27,
  sym_osq = 28,
  sym_csq = 29,
  sym_hyphen = 30,
  anon_sym_DQUOTE2 = 31,
  anon_sym_SQUOTE2 = 32,
  sym_tilde = 33,
  sym__capital = 34,
  sym__letter = 35,
  sym_source_file = 36,
  sym_rule = 37,
  sym_prolog = 38,
  sym_version = 39,
  sym_rulename = 40,
  sym__name = 41,
  sym_string = 42,
  sym__string_dquote = 43,
  sym__string_dquote_content = 44,
  sym__string_squote = 45,
  sym__string_squote_content = 46,
  sym_comment = 47,
  sym__alts = 48,
  sym_alt = 49,
  sym__term_star_sep = 50,
  sym__term_plus_plus_sep = 51,
  sym__term_plus_sep = 52,
  sym__term = 53,
  sym__factor = 54,
  sym_repeat0 = 55,
  sym_repeat1 = 56,
  sym_single_plus = 57,
  sym_option = 58,
  sym_sep = 59,
  sym_nonterminal = 60,
  sym__terminal = 61,
  sym_literal = 62,
  sym_quoted = 63,
  sym_encoded = 64,
  sym_hex = 65,
  sym_set = 66,
  sym_member = 67,
  sym_range = 68,
  sym_from = 69,
  sym_to = 70,
  sym_character = 71,
  sym_charset = 72,
  sym__inclusion = 73,
  sym__exclusion = 74,
  sym_chclass = 75,
  sym__code = 76,
  sym_insertion = 77,
  sym_plus = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym__name_repeat1 = 80,
  aux_sym__string_dquote_repeat1 = 81,
  aux_sym__string_squote_repeat1 = 82,
  aux_sym_comment_repeat1 = 83,
  aux_sym__alts_repeat1 = 84,
  aux_sym__term_plus_sep_repeat1 = 85,
  aux_sym_set_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_rulesep] = "rulesep",
  [sym_fullstop] = "fullstop",
  [anon_sym_ixml] = "ixml",
  [anon_sym_version] = "version",
  [sym_tmark] = "tmark",
  [sym_mark] = "mark",
  [sym__namestart] = "_namestart",
  [sym__namefollow] = "_namefollow",
  [anon_sym_DQUOTE] = "\"",
  [sym__escaped_dquote] = "_escaped_dquote",
  [anon_sym_SQUOTE] = "'",
  [sym__escaped_squote] = "_escaped_squote",
  [sym__char] = "_char",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__comment_text] = "_comment_text",
  [sym_altsep] = "altsep",
  [sym_termsep] = "termsep",
  [sym_op] = "op",
  [sym_cp] = "cp",
  [sym_single_star] = "single_star",
  [sym_double_star] = "double_star",
  [anon_sym_PLUS] = "+",
  [sym_double_plus] = "double_plus",
  [sym_quest] = "quest",
  [anon_sym_POUND] = "#",
  [aux_sym_hex_token1] = "hex_token1",
  [sym_osq] = "osq",
  [sym_csq] = "csq",
  [sym_hyphen] = "hyphen",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_SQUOTE2] = "'",
  [sym_tilde] = "tilde",
  [sym__capital] = "_capital",
  [sym__letter] = "_letter",
  [sym_source_file] = "source_file",
  [sym_rule] = "rule",
  [sym_prolog] = "prolog",
  [sym_version] = "version",
  [sym_rulename] = "rulename",
  [sym__name] = "_name",
  [sym_string] = "string",
  [sym__string_dquote] = "_string_dquote",
  [sym__string_dquote_content] = "_string_dquote_content",
  [sym__string_squote] = "_string_squote",
  [sym__string_squote_content] = "_string_squote_content",
  [sym_comment] = "comment",
  [sym__alts] = "_alts",
  [sym_alt] = "alt",
  [sym__term_star_sep] = "_term_star_sep",
  [sym__term_plus_plus_sep] = "_term_plus_plus_sep",
  [sym__term_plus_sep] = "_term_plus_sep",
  [sym__term] = "_term",
  [sym__factor] = "_factor",
  [sym_repeat0] = "repeat0",
  [sym_repeat1] = "repeat1",
  [sym_single_plus] = "single_plus",
  [sym_option] = "option",
  [sym_sep] = "sep",
  [sym_nonterminal] = "nonterminal",
  [sym__terminal] = "_terminal",
  [sym_literal] = "literal",
  [sym_quoted] = "quoted",
  [sym_encoded] = "encoded",
  [sym_hex] = "hex",
  [sym_set] = "set",
  [sym_member] = "member",
  [sym_range] = "range",
  [sym_from] = "from",
  [sym_to] = "to",
  [sym_character] = "character",
  [sym_charset] = "charset",
  [sym__inclusion] = "_inclusion",
  [sym__exclusion] = "_exclusion",
  [sym_chclass] = "chclass",
  [sym__code] = "_code",
  [sym_insertion] = "insertion",
  [sym_plus] = "plus",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__name_repeat1] = "_name_repeat1",
  [aux_sym__string_dquote_repeat1] = "_string_dquote_repeat1",
  [aux_sym__string_squote_repeat1] = "_string_squote_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym__alts_repeat1] = "_alts_repeat1",
  [aux_sym__term_plus_sep_repeat1] = "_term_plus_sep_repeat1",
  [aux_sym_set_repeat1] = "set_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_rulesep] = sym_rulesep,
  [sym_fullstop] = sym_fullstop,
  [anon_sym_ixml] = anon_sym_ixml,
  [anon_sym_version] = anon_sym_version,
  [sym_tmark] = sym_tmark,
  [sym_mark] = sym_mark,
  [sym__namestart] = sym__namestart,
  [sym__namefollow] = sym__namefollow,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__escaped_dquote] = sym__escaped_dquote,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__escaped_squote] = sym__escaped_squote,
  [sym__char] = sym__char,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__comment_text] = sym__comment_text,
  [sym_altsep] = sym_altsep,
  [sym_termsep] = sym_termsep,
  [sym_op] = sym_op,
  [sym_cp] = sym_cp,
  [sym_single_star] = sym_single_star,
  [sym_double_star] = sym_double_star,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_double_plus] = sym_double_plus,
  [sym_quest] = sym_quest,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_hex_token1] = aux_sym_hex_token1,
  [sym_osq] = sym_osq,
  [sym_csq] = sym_csq,
  [sym_hyphen] = sym_hyphen,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_tilde] = sym_tilde,
  [sym__capital] = sym__capital,
  [sym__letter] = sym__letter,
  [sym_source_file] = sym_source_file,
  [sym_rule] = sym_rule,
  [sym_prolog] = sym_prolog,
  [sym_version] = sym_version,
  [sym_rulename] = sym_rulename,
  [sym__name] = sym__name,
  [sym_string] = sym_string,
  [sym__string_dquote] = sym__string_dquote,
  [sym__string_dquote_content] = sym__string_dquote_content,
  [sym__string_squote] = sym__string_squote,
  [sym__string_squote_content] = sym__string_squote_content,
  [sym_comment] = sym_comment,
  [sym__alts] = sym__alts,
  [sym_alt] = sym_alt,
  [sym__term_star_sep] = sym__term_star_sep,
  [sym__term_plus_plus_sep] = sym__term_plus_plus_sep,
  [sym__term_plus_sep] = sym__term_plus_sep,
  [sym__term] = sym__term,
  [sym__factor] = sym__factor,
  [sym_repeat0] = sym_repeat0,
  [sym_repeat1] = sym_repeat1,
  [sym_single_plus] = sym_single_plus,
  [sym_option] = sym_option,
  [sym_sep] = sym_sep,
  [sym_nonterminal] = sym_nonterminal,
  [sym__terminal] = sym__terminal,
  [sym_literal] = sym_literal,
  [sym_quoted] = sym_quoted,
  [sym_encoded] = sym_encoded,
  [sym_hex] = sym_hex,
  [sym_set] = sym_set,
  [sym_member] = sym_member,
  [sym_range] = sym_range,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [sym_character] = sym_character,
  [sym_charset] = sym_charset,
  [sym__inclusion] = sym__inclusion,
  [sym__exclusion] = sym__exclusion,
  [sym_chclass] = sym_chclass,
  [sym__code] = sym__code,
  [sym_insertion] = sym_insertion,
  [sym_plus] = sym_plus,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__name_repeat1] = aux_sym__name_repeat1,
  [aux_sym__string_dquote_repeat1] = aux_sym__string_dquote_repeat1,
  [aux_sym__string_squote_repeat1] = aux_sym__string_squote_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym__alts_repeat1] = aux_sym__alts_repeat1,
  [aux_sym__term_plus_sep_repeat1] = aux_sym__term_plus_sep_repeat1,
  [aux_sym_set_repeat1] = aux_sym_set_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_rulesep] = {
    .visible = true,
    .named = true,
  },
  [sym_fullstop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ixml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [sym_tmark] = {
    .visible = true,
    .named = true,
  },
  [sym_mark] = {
    .visible = true,
    .named = true,
  },
  [sym__namestart] = {
    .visible = false,
    .named = true,
  },
  [sym__namefollow] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__escaped_dquote] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__escaped_squote] = {
    .visible = false,
    .named = true,
  },
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__comment_text] = {
    .visible = false,
    .named = true,
  },
  [sym_altsep] = {
    .visible = true,
    .named = true,
  },
  [sym_termsep] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_cp] = {
    .visible = true,
    .named = true,
  },
  [sym_single_star] = {
    .visible = true,
    .named = true,
  },
  [sym_double_star] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_double_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_quest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_osq] = {
    .visible = true,
    .named = true,
  },
  [sym_csq] = {
    .visible = true,
    .named = true,
  },
  [sym_hyphen] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_tilde] = {
    .visible = true,
    .named = true,
  },
  [sym__capital] = {
    .visible = false,
    .named = true,
  },
  [sym__letter] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_prolog] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_rulename] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string_dquote] = {
    .visible = false,
    .named = true,
  },
  [sym__string_dquote_content] = {
    .visible = false,
    .named = true,
  },
  [sym__string_squote] = {
    .visible = false,
    .named = true,
  },
  [sym__string_squote_content] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__alts] = {
    .visible = false,
    .named = true,
  },
  [sym_alt] = {
    .visible = true,
    .named = true,
  },
  [sym__term_star_sep] = {
    .visible = false,
    .named = true,
  },
  [sym__term_plus_plus_sep] = {
    .visible = false,
    .named = true,
  },
  [sym__term_plus_sep] = {
    .visible = false,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym__factor] = {
    .visible = false,
    .named = true,
  },
  [sym_repeat0] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat1] = {
    .visible = true,
    .named = true,
  },
  [sym_single_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_nonterminal] = {
    .visible = true,
    .named = true,
  },
  [sym__terminal] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_encoded] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_charset] = {
    .visible = true,
    .named = true,
  },
  [sym__inclusion] = {
    .visible = false,
    .named = true,
  },
  [sym__exclusion] = {
    .visible = false,
    .named = true,
  },
  [sym_chclass] = {
    .visible = true,
    .named = true,
  },
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [sym_insertion] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_dquote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_squote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__alts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__term_plus_sep_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_repeat1] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 10,
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
  [23] = 15,
  [24] = 24,
  [25] = 25,
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 16,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 21,
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
  [49] = 32,
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
  [82] = 76,
  [83] = 83,
  [84] = 74,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 72,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 96,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 89,
  [107] = 103,
  [108] = 108,
  [109] = 77,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 95,
  [114] = 114,
  [115] = 115,
  [116] = 94,
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
  [142] = 77,
  [143] = 89,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
};

static inline bool sym__namestart_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__namestart_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1519
          ? (c < 890
            ? (c < 248
              ? (c < 186
                ? (c < 170
                  ? c == '_'
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))
              : (c <= 705 || (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))))
            : (c <= 893 || (c < 1015
              ? (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))
              : (c <= 1153 || (c < 1369
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))))))
          : (c <= 1522 || (c < 2036
            ? (c < 1786
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : c <= 1775)))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2144
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))
              : (c <= 2154 || (c < 2208
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3205
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__namefollow_character_set_1(int32_t c) {
  return (c < 4190
    ? (c < 2876
      ? (c < 2362
        ? (c < 1770
          ? (c < 1476
            ? (c < 1155
              ? (c < 183
                ? (c >= '0' && c <= '9')
                : (c <= 183 || (c >= 768 && c <= 879)))
              : (c <= 1159 || (c < 1471
                ? (c >= 1425 && c <= 1469)
                : (c <= 1471 || (c >= 1473 && c <= 1474)))))
            : (c <= 1477 || (c < 1648
              ? (c < 1552
                ? c == 1479
                : (c <= 1562 || (c >= 1611 && c <= 1641)))
              : (c <= 1648 || (c < 1759
                ? (c >= 1750 && c <= 1756)
                : (c <= 1764 || (c >= 1767 && c <= 1768)))))))
          : (c <= 1773 || (c < 2070
            ? (c < 1958
              ? (c < 1809
                ? (c >= 1776 && c <= 1785)
                : (c <= 1809 || (c >= 1840 && c <= 1866)))
              : (c <= 1968 || (c < 2027
                ? (c >= 1984 && c <= 1993)
                : (c <= 2035 || c == 2045))))
            : (c <= 2073 || (c < 2137
              ? (c < 2085
                ? (c >= 2075 && c <= 2083)
                : (c <= 2087 || (c >= 2089 && c <= 2093)))
              : (c <= 2139 || (c < 2250
                ? (c >= 2200 && c <= 2207)
                : (c <= 2273 || (c >= 2275 && c <= 2306)))))))))
        : (c <= 2362 || (c < 2625
          ? (c < 2492
            ? (c < 2385
              ? (c < 2369
                ? c == 2364
                : (c <= 2376 || c == 2381))
              : (c <= 2391 || (c < 2406
                ? (c >= 2402 && c <= 2403)
                : (c <= 2415 || c == 2433))))
            : (c <= 2492 || (c < 2534
              ? (c < 2509
                ? (c >= 2497 && c <= 2500)
                : (c <= 2509 || (c >= 2530 && c <= 2531)))
              : (c <= 2543 || (c < 2561
                ? c == 2558
                : (c <= 2562 || c == 2620))))))
          : (c <= 2626 || (c < 2753
            ? (c < 2662
              ? (c < 2635
                ? (c >= 2631 && c <= 2632)
                : (c <= 2637 || c == 2641))
              : (c <= 2673 || (c < 2689
                ? c == 2677
                : (c <= 2690 || c == 2748))))
            : (c <= 2757 || (c < 2790
              ? (c < 2765
                ? (c >= 2759 && c <= 2760)
                : (c <= 2765 || (c >= 2786 && c <= 2787)))
              : (c <= 2799 || (c < 2817
                ? (c >= 2810 && c <= 2815)
                : c <= 2817)))))))))
      : (c <= 2876 || (c < 3430
        ? (c < 3146
          ? (c < 3008
            ? (c < 2901
              ? (c < 2881
                ? c == 2879
                : (c <= 2884 || c == 2893))
              : (c <= 2902 || (c < 2918
                ? (c >= 2914 && c <= 2915)
                : (c <= 2927 || c == 2946))))
            : (c <= 3008 || (c < 3076
              ? (c < 3046
                ? c == 3021
                : (c <= 3055 || c == 3072))
              : (c <= 3076 || (c < 3134
                ? c == 3132
                : (c <= 3136 || (c >= 3142 && c <= 3144)))))))
          : (c <= 3149 || (c < 3276
            ? (c < 3201
              ? (c < 3170
                ? (c >= 3157 && c <= 3158)
                : (c <= 3171 || (c >= 3174 && c <= 3183)))
              : (c <= 3201 || (c < 3263
                ? c == 3260
                : (c <= 3263 || c == 3270))))
            : (c <= 3277 || (c < 3387
              ? (c < 3302
                ? (c >= 3298 && c <= 3299)
                : (c <= 3311 || (c >= 3328 && c <= 3329)))
              : (c <= 3388 || (c < 3405
                ? (c >= 3393 && c <= 3396)
                : (c <= 3405 || (c >= 3426 && c <= 3427)))))))))
        : (c <= 3439 || (c < 3893
          ? (c < 3655
            ? (c < 3542
              ? (c < 3530
                ? c == 3457
                : (c <= 3530 || (c >= 3538 && c <= 3540)))
              : (c <= 3542 || (c < 3633
                ? (c >= 3558 && c <= 3567)
                : (c <= 3633 || (c >= 3636 && c <= 3642)))))
            : (c <= 3662 || (c < 3784
              ? (c < 3761
                ? (c >= 3664 && c <= 3673)
                : (c <= 3761 || (c >= 3764 && c <= 3772)))
              : (c <= 3789 || (c < 3864
                ? (c >= 3792 && c <= 3801)
                : (c <= 3865 || (c >= 3872 && c <= 3881)))))))
          : (c <= 3893 || (c < 4038
            ? (c < 3968
              ? (c < 3897
                ? c == 3895
                : (c <= 3897 || (c >= 3953 && c <= 3966)))
              : (c <= 3972 || (c < 3981
                ? (c >= 3974 && c <= 3975)
                : (c <= 3991 || (c >= 3993 && c <= 4028)))))
            : (c <= 4038 || (c < 4157
              ? (c < 4146
                ? (c >= 4141 && c <= 4144)
                : (c <= 4151 || (c >= 4153 && c <= 4154)))
              : (c <= 4158 || (c < 4184
                ? (c >= 4160 && c <= 4169)
                : c <= 4185)))))))))))
    : (c <= 4192 || (c < 7405
      ? (c < 6752
        ? (c < 6109
          ? (c < 5906
            ? (c < 4237
              ? (c < 4226
                ? (c >= 4209 && c <= 4212)
                : (c <= 4226 || (c >= 4229 && c <= 4230)))
              : (c <= 4237 || (c < 4253
                ? (c >= 4240 && c <= 4249)
                : (c <= 4253 || (c >= 4957 && c <= 4959)))))
            : (c <= 5908 || (c < 6068
              ? (c < 5970
                ? (c >= 5938 && c <= 5939)
                : (c <= 5971 || (c >= 6002 && c <= 6003)))
              : (c <= 6069 || (c < 6086
                ? (c >= 6071 && c <= 6077)
                : (c <= 6086 || (c >= 6089 && c <= 6099)))))))
          : (c <= 6109 || (c < 6450
            ? (c < 6277
              ? (c < 6155
                ? (c >= 6112 && c <= 6121)
                : (c <= 6157 || (c >= 6159 && c <= 6169)))
              : (c <= 6278 || (c < 6432
                ? c == 6313
                : (c <= 6434 || (c >= 6439 && c <= 6440)))))
            : (c <= 6450 || (c < 6679
              ? (c < 6470
                ? (c >= 6457 && c <= 6459)
                : (c <= 6479 || (c >= 6608 && c <= 6617)))
              : (c <= 6680 || (c < 6742
                ? c == 6683
                : (c <= 6742 || (c >= 6744 && c <= 6750)))))))))
        : (c <= 6752 || (c < 7074
          ? (c < 6912
            ? (c < 6783
              ? (c < 6757
                ? c == 6754
                : (c <= 6764 || (c >= 6771 && c <= 6780)))
              : (c <= 6793 || (c < 6832
                ? (c >= 6800 && c <= 6809)
                : (c <= 6845 || (c >= 6847 && c <= 6862)))))
            : (c <= 6915 || (c < 6978
              ? (c < 6966
                ? c == 6964
                : (c <= 6970 || c == 6972))
              : (c <= 6978 || (c < 7019
                ? (c >= 6992 && c <= 7001)
                : (c <= 7027 || (c >= 7040 && c <= 7041)))))))
          : (c <= 7077 || (c < 7212
            ? (c < 7142
              ? (c < 7083
                ? (c >= 7080 && c <= 7081)
                : (c <= 7085 || (c >= 7088 && c <= 7097)))
              : (c <= 7142 || (c < 7149
                ? (c >= 7144 && c <= 7145)
                : (c <= 7149 || (c >= 7151 && c <= 7153)))))
            : (c <= 7219 || (c < 7376
              ? (c < 7232
                ? (c >= 7222 && c <= 7223)
                : (c <= 7241 || (c >= 7248 && c <= 7257)))
              : (c <= 7378 || (c < 7394
                ? (c >= 7380 && c <= 7392)
                : c <= 7400)))))))))
      : (c <= 7405 || (c < 43446
        ? (c < 42654
          ? (c < 11503
            ? (c < 8255
              ? (c < 7416
                ? c == 7412
                : (c <= 7417 || (c >= 7616 && c <= 7679)))
              : (c <= 8256 || (c < 8417
                ? (c >= 8400 && c <= 8412)
                : (c <= 8417 || (c >= 8421 && c <= 8432)))))
            : (c <= 11505 || (c < 12441
              ? (c < 11744
                ? c == 11647
                : (c <= 11775 || (c >= 12330 && c <= 12333)))
              : (c <= 12442 || (c < 42607
                ? (c >= 42528 && c <= 42537)
                : (c <= 42607 || (c >= 42612 && c <= 42621)))))))
          : (c <= 42655 || (c < 43216
            ? (c < 43019
              ? (c < 43010
                ? (c >= 42736 && c <= 42737)
                : (c <= 43010 || c == 43014))
              : (c <= 43019 || (c < 43052
                ? (c >= 43045 && c <= 43046)
                : (c <= 43052 || (c >= 43204 && c <= 43205)))))
            : (c <= 43225 || (c < 43335
              ? (c < 43263
                ? (c >= 43232 && c <= 43249)
                : (c <= 43273 || (c >= 43302 && c <= 43309)))
              : (c <= 43345 || (c < 43443
                ? (c >= 43392 && c <= 43394)
                : c <= 43443)))))))
        : (c <= 43449 || (c < 43713
          ? (c < 43587
            ? (c < 43504
              ? (c < 43472
                ? (c >= 43452 && c <= 43453)
                : (c <= 43481 || c == 43493))
              : (c <= 43513 || (c < 43569
                ? (c >= 43561 && c <= 43566)
                : (c <= 43570 || (c >= 43573 && c <= 43574)))))
            : (c <= 43587 || (c < 43696
              ? (c < 43600
                ? c == 43596
                : (c <= 43609 || c == 43644))
              : (c <= 43696 || (c < 43703
                ? (c >= 43698 && c <= 43700)
                : (c <= 43704 || (c >= 43710 && c <= 43711)))))))
          : (c <= 43713 || (c < 65024
            ? (c < 44008
              ? (c < 43766
                ? (c >= 43756 && c <= 43757)
                : (c <= 43766 || c == 44005))
              : (c <= 44008 || (c < 44016
                ? c == 44013
                : (c <= 44025 || c == 64286))))
            : (c <= 65039 || (c < 66272
              ? (c < 65296
                ? (c >= 65056 && c <= 65071)
                : (c <= 65305 || c == 66045))
              : (c <= 66272 || (c < 66720
                ? (c >= 66422 && c <= 66426)
                : c <= 66729)))))))))))));
}

static inline bool sym__namefollow_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2984
      ? (c < 2447
        ? (c < 1376
          ? (c < 886
            ? (c < 248
              ? (c < 186
                ? (c < 170
                  ? c == '_'
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))
              : (c <= 705 || (c < 748
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 910
              ? (c < 902
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 2042
            ? (c < 1765
              ? (c < 1568
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)
                : (c <= 1610 || (c < 1749
                  ? (c >= 1646 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)
                : (c <= 1839 || (c < 1994
                  ? (c >= 1869 && c <= 1969)
                  : c <= 2037)))))
            : (c <= 2042 || (c < 2208
              ? (c < 2144
                ? (c < 2112
                  ? (c >= 2048 && c <= 2088)
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))
              : (c <= 2249 || (c < 2384
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))))))))
        : (c <= 2448 || (c < 2738
          ? (c < 2579
            ? (c < 2524
              ? (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))
              : (c <= 2525 || (c < 2556
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))))
            : (c <= 2600 || (c < 2654
              ? (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))
              : (c <= 2654 || (c < 2703
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2877
            ? (c < 2821
              ? (c < 2768
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)
                : (c <= 2768 || (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2809)))
              : (c <= 2828 || (c < 2858
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2958
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3168
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3165)
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3296
              ? (c < 3253
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3406
                  ? (c >= 3346 && c <= 3389)
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3635)
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3804
              ? (c < 3751
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4696
            ? (c < 4295
              ? (c < 4206
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4348
                ? (c < 4304
                  ? c == 4301
                  : c <= 4346)
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4792
              ? (c < 4746
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5984
            ? (c < 5761
              ? (c < 5112
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5888
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)
                : (c <= 5905 || (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : c <= 5969)))))
            : (c <= 5996 || (c < 6272
              ? (c < 6103
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8526
        ? (c < 8118
          ? (c < 7401
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7293)
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7414 || (c < 8016
              ? (c < 7960
                ? (c < 7424
                  ? c == 7418
                  : c <= 7957)
                : (c <= 7965 || (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : c <= 8013)))
              : (c <= 8023 || (c < 8029
                ? (c < 8027
                  ? c == 8025
                  : c <= 8027)
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8450
            ? (c < 8160
              ? (c < 8134
                ? (c < 8130
                  ? c == 8126
                  : c <= 8132)
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8305
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8486
              ? (c < 8469
                ? (c < 8458
                  ? c == 8455
                  : c <= 8467)
                : (c <= 8469 || (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : c <= 8484)))
              : (c <= 8486 || (c < 8495
                ? (c < 8490
                  ? c == 8488
                  : c <= 8493)
                : (c <= 8505 || (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)))))))))
        : (c <= 8526 || (c < 12540
          ? (c < 11704
            ? (c < 11568
              ? (c < 11520
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11680
                ? (c < 11648
                  ? c == 11631
                  : c <= 11670)
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12293
              ? (c < 11728
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19903
              ? (c < 12704
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42192
                ? (c < 40959
                  ? c == 19968
                  : c <= 42124)
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42963
              ? (c < 42786
                ? (c < 42775
                  ? (c >= 42623 && c <= 42725)
                  : c <= 42783)
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : c <= 42961)))
              : (c <= 42963 || (c < 43072
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65490
        ? (c < 55216
          ? (c < 43744
            ? (c < 43520
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43261 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43518)))
              : (c <= 43560 || (c < 43642
                ? (c < 43616
                  ? (c >= 43584 && c <= 43595)
                  : c <= 43638)
                : (c <= 43642 || (c < 43739
                  ? (c >= 43646 && c <= 43714)
                  : c <= 43741)))))
            : (c <= 43754 || (c < 43816
              ? (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))
              : (c <= 43822 || (c < 43888
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : c <= 43881)
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))))))
          : (c <= 55238 || (c < 64326
            ? (c < 64285
              ? (c < 64112
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : c <= 64109)
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))
              : (c <= 64296 || (c < 64318
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : c <= 64316)
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))))
            : (c <= 64433 || (c < 65142
              ? (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))
              : (c <= 65276 || (c < 65382
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : c <= 65370)
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))))))))
        : (c <= 65495 || (c < 66956
          ? (c < 66370
            ? (c < 65616
              ? (c < 65576
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : c <= 65613)))
              : (c <= 65629 || (c < 66208
                ? (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)
                : (c <= 66256 || (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : c <= 66368)))))
            : (c <= 66377 || (c < 66736
              ? (c < 66464
                ? (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)
                : (c <= 66499 || (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)))
              : (c <= 66771 || (c < 66864
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)
                : (c <= 66915 || (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : c <= 66954)))))))
          : (c <= 66962 || (c < 67584
            ? (c < 67072
              ? (c < 66979
                ? (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)
                : (c <= 66993 || (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : c <= 67004)))
              : (c <= 67382 || (c < 67456
                ? (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : c <= 67431)
                : (c <= 67461 || (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : c <= 67514)))))
            : (c <= 67589 || (c < 67680
              ? (c < 67639
                ? (c < 67594
                  ? c == 67592
                  : c <= 67637)
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__namefollow_character_set_3(int32_t c) {
  return (c < 6159
    ? (c < 2990
      ? (c < 2474
        ? (c < 1473
          ? (c < 768
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c < '0'
                    ? (c >= '-' && c <= '.')
                    : c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : (c <= 181 || c == 183))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))))))
            : (c <= 884 || (c < 1015
              ? (c < 904
                ? (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))))
              : (c <= 1153 || (c < 1369
                ? (c < 1162
                  ? (c >= 1155 && c <= 1159)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1425
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1469 || c == 1471))))))))
          : (c <= 1474 || (c < 2048
            ? (c < 1759
              ? (c < 1552
                ? (c < 1488
                  ? (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1562 || (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))))
              : (c <= 1768 || (c < 1869
                ? (c < 1791
                  ? (c >= 1770 && c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))
                : (c <= 1969 || (c < 2042
                  ? (c >= 1984 && c <= 2037)
                  : (c <= 2042 || c == 2045))))))
            : (c <= 2093 || (c < 2369
              ? (c < 2200
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2273 || (c < 2308
                  ? (c >= 2275 && c <= 2306)
                  : (c <= 2362 || (c >= 2364 && c <= 2365)))))
              : (c <= 2376 || (c < 2417
                ? (c < 2384
                  ? c == 2381
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2433 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))))
        : (c <= 2480 || (c < 2748
          ? (c < 2613
            ? (c < 2556
              ? (c < 2509
                ? (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || (c >= 2497 && c <= 2500)))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2545)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2562 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2662
              ? (c < 2635
                ? (c < 2625
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2690)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2749 || (c < 2881
            ? (c < 2821
              ? (c < 2784
                ? (c < 2765
                  ? (c < 2759
                    ? (c >= 2753 && c <= 2757)
                    : c <= 2760)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2815 || c == 2817))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || c == 2879))))))
            : (c <= 2884 || (c < 2949
              ? (c < 2911
                ? (c < 2901
                  ? c == 2893
                  : (c <= 2902 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2929 || (c >= 2946 && c <= 2947)))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))))))))))
      : (c <= 3001 || (c < 3872
        ? (c < 3342
          ? (c < 3174
            ? (c < 3114
              ? (c < 3072
                ? (c < 3024
                  ? (c < 3021
                    ? c == 3008
                    : c <= 3021)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3072 || (c < 3086
                  ? (c >= 3076 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3157
                ? (c < 3142
                  ? (c >= 3132 && c <= 3136)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))))
            : (c <= 3183 || (c < 3270
              ? (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3201)
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3263))))
              : (c <= 3270 || (c < 3302
                ? (c < 3293
                  ? (c >= 3276 && c <= 3277)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))
                : (c <= 3311 || (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3329 || (c >= 3332 && c <= 3340)))))))))
          : (c <= 3344 || (c < 3558
            ? (c < 3461
              ? (c < 3423
                ? (c < 3405
                  ? (c < 3393
                    ? (c >= 3346 && c <= 3389)
                    : c <= 3396)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3427 || (c < 3450
                  ? (c >= 3430 && c <= 3439)
                  : (c <= 3455 || c == 3457))))
              : (c <= 3478 || (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3538
                  ? c == 3530
                  : (c <= 3540 || c == 3542))))))
            : (c <= 3567 || (c < 3751
              ? (c < 3716
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3773 || (c < 3792
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3864 && c <= 3865)))))))))))
        : (c <= 3881 || (c < 4746
          ? (c < 4184
            ? (c < 3993
              ? (c < 3913
                ? (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 3968
                  ? (c >= 3953 && c <= 3966)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4146
                ? (c < 4096
                  ? c == 4038
                  : (c <= 4138 || (c >= 4141 && c <= 4144)))
                : (c <= 4151 || (c < 4157
                  ? (c >= 4153 && c <= 4154)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))))))
            : (c <= 4193 || (c < 4301
              ? (c < 4240
                ? (c < 4229
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4226)
                  : (c <= 4230 || (c >= 4237 && c <= 4238)))
                : (c <= 4249 || (c < 4256
                  ? c == 4253
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))))))
          : (c <= 4749 || (c < 5792
            ? (c < 4888
              ? (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))
              : (c <= 4954 || (c < 5112
                ? (c < 4992
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))))
            : (c <= 5866 || (c < 6016
              ? (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5908 || (c >= 5919 && c <= 5939)))
                : (c <= 5971 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))))
              : (c <= 6069 || (c < 6103
                ? (c < 6086
                  ? (c >= 6071 && c <= 6077)
                  : (c <= 6086 || (c >= 6089 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6108 && c <= 6109)
                  : (c <= 6121 || (c >= 6155 && c <= 6157)))))))))))))))
    : (c <= 6169 || (c < 42612
      ? (c < 8130
        ? (c < 6992
          ? (c < 6742
            ? (c < 6470
              ? (c < 6432
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6434 || (c < 6450
                  ? (c >= 6439 && c <= 6440)
                  : (c <= 6450 || (c >= 6457 && c <= 6459)))))
              : (c <= 6509 || (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6617 || (c < 6683
                  ? (c >= 6656 && c <= 6680)
                  : (c <= 6683 || (c >= 6688 && c <= 6740)))))))
            : (c <= 6742 || (c < 6832
              ? (c < 6771
                ? (c < 6754
                  ? (c < 6752
                    ? (c >= 6744 && c <= 6750)
                    : c <= 6752)
                  : (c <= 6754 || (c >= 6757 && c <= 6764)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))
              : (c <= 6845 || (c < 6966
                ? (c < 6912
                  ? (c >= 6847 && c <= 6862)
                  : (c <= 6915 || (c >= 6917 && c <= 6964)))
                : (c <= 6970 || (c < 6978
                  ? c == 6972
                  : (c <= 6978 || (c >= 6981 && c <= 6988)))))))))
          : (c <= 7001 || (c < 7357
            ? (c < 7151
              ? (c < 7080
                ? (c < 7043
                  ? (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7041)
                  : (c <= 7072 || (c >= 7074 && c <= 7077)))
                : (c <= 7081 || (c < 7144
                  ? (c >= 7083 && c <= 7142)
                  : (c <= 7145 || c == 7149))))
              : (c <= 7153 || (c < 7232
                ? (c < 7212
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7219 || (c >= 7222 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7394
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7392)
                  : (c <= 7414 || (c >= 7416 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 11631
          ? (c < 8469
            ? (c < 8319
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8255
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8256 || c == 8305))))
              : (c <= 8319 || (c < 8421
                ? (c < 8400
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8412 || c == 8417))
                : (c <= 8432 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))))
            : (c <= 8469 || (c < 8526
              ? (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8473 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))
              : (c <= 8526 || (c < 11520
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))))
          : (c <= 11631 || (c < 12441
            ? (c < 11736
              ? (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))
              : (c <= 11742 || (c < 12330
                ? (c < 11823
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11823 || (c >= 12293 && c <= 12294)))
                : (c <= 12333 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))))
            : (c <= 12442 || (c < 13312
              ? (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42607)))))))))))))
      : (c <= 42621 || (c < 64326
        ? (c < 43644
          ? (c < 43259
            ? (c < 42994
              ? (c < 42891
                ? (c < 42775
                  ? (c < 42736
                    ? (c >= 42623 && c <= 42725)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))
              : (c <= 43042 || (c < 43138
                ? (c < 43052
                  ? (c >= 43045 && c <= 43046)
                  : (c <= 43052 || (c >= 43072 && c <= 43123)))
                : (c <= 43187 || (c < 43216
                  ? (c >= 43204 && c <= 43205)
                  : (c <= 43225 || (c >= 43232 && c <= 43255)))))))
            : (c <= 43259 || (c < 43488
              ? (c < 43396
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43345)
                  : (c <= 43388 || (c >= 43392 && c <= 43394)))
                : (c <= 43443 || (c < 43452
                  ? (c >= 43446 && c <= 43449)
                  : (c <= 43453 || (c >= 43471 && c <= 43481)))))
              : (c <= 43518 || (c < 43584
                ? (c < 43569
                  ? (c >= 43520 && c <= 43566)
                  : (c <= 43570 || (c >= 43573 && c <= 43574)))
                : (c <= 43596 || (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))))))))
          : (c <= 43644 || (c < 44013
            ? (c < 43793
              ? (c < 43762
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43646 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43756 && c <= 43757)))
                : (c <= 43764 || (c < 43777
                  ? c == 43766
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44005
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44005 || c == 44008))))))
            : (c <= 44013 || (c < 64256
              ? (c < 55216
                ? (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))
                : (c <= 55238 || (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))
              : (c <= 64262 || (c < 64312
                ? (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))))
        : (c <= 64433 || (c < 66504
          ? (c < 65536
            ? (c < 65296
              ? (c < 65024
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65039 || (c < 65136
                  ? (c >= 65056 && c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))))
              : (c <= 65305 || (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))))
            : (c <= 65547 || (c < 66208
              ? (c < 65616
                ? (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66045
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))))
              : (c <= 66256 || (c < 66370
                ? (c < 66304
                  ? c == 66272
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))))))
          : (c <= 66511 || (c < 67424
            ? (c < 66956
              ? (c < 66816
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))
              : (c <= 66962 || (c < 66995
                ? (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))
                : (c <= 67001 || (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))
            : (c <= 67431 || (c < 67644
              ? (c < 67584
                ? (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67680
                  ? (c >= 67647 && c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))
                : (c <= 67826 || (c < 67840
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67883)))))))))))))))));
}

static inline bool sym__namefollow_character_set_4(int32_t c) {
  return (c < 6159
    ? (c < 2990
      ? (c < 2474
        ? (c < 1473
          ? (c < 768
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : (c <= 181 || c == 183))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))))))
            : (c <= 884 || (c < 1015
              ? (c < 904
                ? (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))))
              : (c <= 1153 || (c < 1369
                ? (c < 1162
                  ? (c >= 1155 && c <= 1159)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1425
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1469 || c == 1471))))))))
          : (c <= 1474 || (c < 2048
            ? (c < 1759
              ? (c < 1552
                ? (c < 1488
                  ? (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1562 || (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))))
              : (c <= 1768 || (c < 1869
                ? (c < 1791
                  ? (c >= 1770 && c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))
                : (c <= 1969 || (c < 2042
                  ? (c >= 1984 && c <= 2037)
                  : (c <= 2042 || c == 2045))))))
            : (c <= 2093 || (c < 2369
              ? (c < 2200
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2273 || (c < 2308
                  ? (c >= 2275 && c <= 2306)
                  : (c <= 2362 || (c >= 2364 && c <= 2365)))))
              : (c <= 2376 || (c < 2417
                ? (c < 2384
                  ? c == 2381
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2433 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))))))
        : (c <= 2480 || (c < 2748
          ? (c < 2613
            ? (c < 2556
              ? (c < 2509
                ? (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || (c >= 2497 && c <= 2500)))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2545)))))
              : (c <= 2556 || (c < 2575
                ? (c < 2561
                  ? c == 2558
                  : (c <= 2562 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))))
            : (c <= 2614 || (c < 2662
              ? (c < 2635
                ? (c < 2625
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c >= 2631 && c <= 2632)))
                : (c <= 2637 || (c < 2649
                  ? c == 2641
                  : (c <= 2652 || c == 2654))))
              : (c <= 2677 || (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2690)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))))
          : (c <= 2749 || (c < 2881
            ? (c < 2821
              ? (c < 2784
                ? (c < 2765
                  ? (c < 2759
                    ? (c >= 2753 && c <= 2757)
                    : c <= 2760)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2815 || c == 2817))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || c == 2879))))))
            : (c <= 2884 || (c < 2949
              ? (c < 2911
                ? (c < 2901
                  ? c == 2893
                  : (c <= 2902 || (c >= 2908 && c <= 2909)))
                : (c <= 2915 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2929 || (c >= 2946 && c <= 2947)))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))))))))))
      : (c <= 3001 || (c < 3872
        ? (c < 3342
          ? (c < 3174
            ? (c < 3114
              ? (c < 3072
                ? (c < 3024
                  ? (c < 3021
                    ? c == 3008
                    : c <= 3021)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3072 || (c < 3086
                  ? (c >= 3076 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3157
                ? (c < 3142
                  ? (c >= 3132 && c <= 3136)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))))
            : (c <= 3183 || (c < 3270
              ? (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3201)
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3260
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3263))))
              : (c <= 3270 || (c < 3302
                ? (c < 3293
                  ? (c >= 3276 && c <= 3277)
                  : (c <= 3294 || (c >= 3296 && c <= 3299)))
                : (c <= 3311 || (c < 3328
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3329 || (c >= 3332 && c <= 3340)))))))))
          : (c <= 3344 || (c < 3558
            ? (c < 3461
              ? (c < 3423
                ? (c < 3405
                  ? (c < 3393
                    ? (c >= 3346 && c <= 3389)
                    : c <= 3396)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3427 || (c < 3450
                  ? (c >= 3430 && c <= 3439)
                  : (c <= 3455 || c == 3457))))
              : (c <= 3478 || (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3538
                  ? c == 3530
                  : (c <= 3540 || c == 3542))))))
            : (c <= 3567 || (c < 3751
              ? (c < 3716
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3773 || (c < 3792
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3864 && c <= 3865)))))))))))
        : (c <= 3881 || (c < 4746
          ? (c < 4184
            ? (c < 3993
              ? (c < 3913
                ? (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 3968
                  ? (c >= 3953 && c <= 3966)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4146
                ? (c < 4096
                  ? c == 4038
                  : (c <= 4138 || (c >= 4141 && c <= 4144)))
                : (c <= 4151 || (c < 4157
                  ? (c >= 4153 && c <= 4154)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))))))
            : (c <= 4193 || (c < 4301
              ? (c < 4240
                ? (c < 4229
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4226)
                  : (c <= 4230 || (c >= 4237 && c <= 4238)))
                : (c <= 4249 || (c < 4256
                  ? c == 4253
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))))))
          : (c <= 4749 || (c < 5792
            ? (c < 4888
              ? (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))
              : (c <= 4954 || (c < 5112
                ? (c < 4992
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))))
            : (c <= 5866 || (c < 6016
              ? (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5908 || (c >= 5919 && c <= 5939)))
                : (c <= 5971 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))))
              : (c <= 6069 || (c < 6103
                ? (c < 6086
                  ? (c >= 6071 && c <= 6077)
                  : (c <= 6086 || (c >= 6089 && c <= 6099)))
                : (c <= 6103 || (c < 6112
                  ? (c >= 6108 && c <= 6109)
                  : (c <= 6121 || (c >= 6155 && c <= 6157)))))))))))))))
    : (c <= 6169 || (c < 42612
      ? (c < 8130
        ? (c < 6992
          ? (c < 6742
            ? (c < 6470
              ? (c < 6432
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6434 || (c < 6450
                  ? (c >= 6439 && c <= 6440)
                  : (c <= 6450 || (c >= 6457 && c <= 6459)))))
              : (c <= 6509 || (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6617 || (c < 6683
                  ? (c >= 6656 && c <= 6680)
                  : (c <= 6683 || (c >= 6688 && c <= 6740)))))))
            : (c <= 6742 || (c < 6832
              ? (c < 6771
                ? (c < 6754
                  ? (c < 6752
                    ? (c >= 6744 && c <= 6750)
                    : c <= 6752)
                  : (c <= 6754 || (c >= 6757 && c <= 6764)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))
              : (c <= 6845 || (c < 6966
                ? (c < 6912
                  ? (c >= 6847 && c <= 6862)
                  : (c <= 6915 || (c >= 6917 && c <= 6964)))
                : (c <= 6970 || (c < 6978
                  ? c == 6972
                  : (c <= 6978 || (c >= 6981 && c <= 6988)))))))))
          : (c <= 7001 || (c < 7357
            ? (c < 7151
              ? (c < 7080
                ? (c < 7043
                  ? (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7041)
                  : (c <= 7072 || (c >= 7074 && c <= 7077)))
                : (c <= 7081 || (c < 7144
                  ? (c >= 7083 && c <= 7142)
                  : (c <= 7145 || c == 7149))))
              : (c <= 7153 || (c < 7232
                ? (c < 7212
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7219 || (c >= 7222 && c <= 7223)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7394
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7392)
                  : (c <= 7414 || (c >= 7416 && c <= 7418)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 11631
          ? (c < 8469
            ? (c < 8319
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8255
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8256 || c == 8305))))
              : (c <= 8319 || (c < 8421
                ? (c < 8400
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8412 || c == 8417))
                : (c <= 8432 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))))
            : (c <= 8469 || (c < 8526
              ? (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8473 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))
              : (c <= 8526 || (c < 11520
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))))))
          : (c <= 11631 || (c < 12441
            ? (c < 11736
              ? (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))
              : (c <= 11742 || (c < 12330
                ? (c < 11823
                  ? (c >= 11744 && c <= 11775)
                  : (c <= 11823 || (c >= 12293 && c <= 12294)))
                : (c <= 12333 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))))
            : (c <= 12442 || (c < 13312
              ? (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42539 || (c >= 42560 && c <= 42607)))))))))))))
      : (c <= 42621 || (c < 64326
        ? (c < 43644
          ? (c < 43259
            ? (c < 42994
              ? (c < 42891
                ? (c < 42775
                  ? (c < 42736
                    ? (c >= 42623 && c <= 42725)
                    : c <= 42737)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))
              : (c <= 43042 || (c < 43138
                ? (c < 43052
                  ? (c >= 43045 && c <= 43046)
                  : (c <= 43052 || (c >= 43072 && c <= 43123)))
                : (c <= 43187 || (c < 43216
                  ? (c >= 43204 && c <= 43205)
                  : (c <= 43225 || (c >= 43232 && c <= 43255)))))))
            : (c <= 43259 || (c < 43488
              ? (c < 43396
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43345)
                  : (c <= 43388 || (c >= 43392 && c <= 43394)))
                : (c <= 43443 || (c < 43452
                  ? (c >= 43446 && c <= 43449)
                  : (c <= 43453 || (c >= 43471 && c <= 43481)))))
              : (c <= 43518 || (c < 43584
                ? (c < 43569
                  ? (c >= 43520 && c <= 43566)
                  : (c <= 43570 || (c >= 43573 && c <= 43574)))
                : (c <= 43596 || (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))))))))
          : (c <= 43644 || (c < 44013
            ? (c < 43793
              ? (c < 43762
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43646 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43756 && c <= 43757)))
                : (c <= 43764 || (c < 43777
                  ? c == 43766
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44005
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44005 || c == 44008))))))
            : (c <= 44013 || (c < 64256
              ? (c < 55216
                ? (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))
                : (c <= 55238 || (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))))
              : (c <= 64262 || (c < 64312
                ? (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))))
        : (c <= 64433 || (c < 66504
          ? (c < 65536
            ? (c < 65296
              ? (c < 65024
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65039 || (c < 65136
                  ? (c >= 65056 && c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))))
              : (c <= 65305 || (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))))
            : (c <= 65547 || (c < 66208
              ? (c < 65616
                ? (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66045
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))))
              : (c <= 66256 || (c < 66370
                ? (c < 66304
                  ? c == 66272
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66426)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))))))
          : (c <= 66511 || (c < 67424
            ? (c < 66956
              ? (c < 66816
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))
              : (c <= 66962 || (c < 66995
                ? (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))
                : (c <= 67001 || (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))
            : (c <= 67431 || (c < 67644
              ? (c < 67584
                ? (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))
              : (c <= 67644 || (c < 67808
                ? (c < 67680
                  ? (c >= 67647 && c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))
                : (c <= 67826 || (c < 67840
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67883)))))))))))))))));
}

static inline bool sym__char_character_set_1(int32_t c) {
  return (c < 2274
    ? (c < 1536
      ? (c < 127
        ? (c < 0
          ? c == 0
          : c <= 31)
        : (c <= 159 || c == 173))
      : (c <= 1541 || (c < 1807
        ? (c < 1757
          ? c == 1564
          : c <= 1757)
        : (c <= 1807 || (c >= 2192 && c <= 2193)))))
    : (c <= 2274 || (c < 8294
      ? (c < 8234
        ? (c < 8203
          ? c == 6158
          : c <= 8207)
        : (c <= 8238 || (c >= 8288 && c <= 8292)))
      : (c <= 8303 || (c < 65279
        ? (c < 63743
          ? c == 57344
          : c <= 63743)
        : (c <= 65279 || (c >= 65529 && c <= 65531)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(30);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (sym__namefollow_character_set_1(lookahead)) ADVANCE(38);
      if (sym__namefollow_character_set_2(lookahead)) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (!sym__char_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (!sym__char_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (!sym__char_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (!sym__char_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (!sym__char_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (!sym__char_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '^') ADVANCE(34);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym__namestart_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(30);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(30);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(30);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym__namefollow_character_set_3(lookahead)) ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym__namefollow_character_set_4(lookahead)) ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(30);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (sym__namestart_character_set_2(lookahead)) ADVANCE(36);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '@' ||
          lookahead == '^') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym__namestart_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_rulesep);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_fullstop);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_ixml);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_tmark);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_mark);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__namestart);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__namestart);
      if (lookahead == 'x') ADVANCE(18);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__namefollow);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__escaped_dquote);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__escaped_squote);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '"') ADVANCE(41);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '\'') ADVANCE(44);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__comment_text);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__comment_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_altsep);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_termsep);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_op);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_cp);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_single_star);
      if (lookahead == '*') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_double_star);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_double_plus);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_quest);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_osq);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_csq);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_hyphen);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(41);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(44);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tilde);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__capital);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__letter);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 28},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 28},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 28},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 25},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 26},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {(TSStateId)(-1)},
  [148] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_rulesep] = ACTIONS(1),
    [sym_fullstop] = ACTIONS(1),
    [sym_tmark] = ACTIONS(1),
    [sym_mark] = ACTIONS(1),
    [sym__namestart] = ACTIONS(1),
    [sym__namefollow] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escaped_dquote] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__escaped_squote] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_altsep] = ACTIONS(1),
    [sym_termsep] = ACTIONS(1),
    [sym_op] = ACTIONS(1),
    [sym_cp] = ACTIONS(1),
    [sym_single_star] = ACTIONS(1),
    [sym_double_star] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_double_plus] = ACTIONS(1),
    [sym_quest] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_osq] = ACTIONS(1),
    [sym_csq] = ACTIONS(1),
    [sym_hyphen] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym_tilde] = ACTIONS(1),
    [sym__capital] = ACTIONS(1),
    [sym__letter] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(145),
    [sym_rule] = STATE(81),
    [sym_prolog] = STATE(56),
    [sym_version] = STATE(141),
    [sym_rulename] = STATE(139),
    [sym__name] = STATE(138),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(53),
    [anon_sym_ixml] = ACTIONS(5),
    [sym_mark] = ACTIONS(7),
    [sym__namestart] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(15), 1,
      sym_mark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    STATE(2), 1,
      sym_comment,
    STATE(32), 1,
      sym__factor,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(57), 1,
      sym_plus,
    STATE(90), 1,
      sym__term,
    STATE(111), 1,
      sym__term_plus_sep,
    STATE(112), 1,
      sym_alt,
    STATE(114), 1,
      sym__term_plus_plus_sep,
    STATE(115), 1,
      sym__term_star_sep,
    ACTIONS(21), 2,
      sym_altsep,
      sym_cp,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
    STATE(71), 3,
      sym_repeat0,
      sym_repeat1,
      sym_option,
  [103] = 32,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(15), 1,
      sym_mark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    ACTIONS(33), 1,
      sym_cp,
    STATE(3), 1,
      sym_comment,
    STATE(32), 1,
      sym__factor,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(57), 1,
      sym_plus,
    STATE(90), 1,
      sym__term,
    STATE(94), 1,
      sym_alt,
    STATE(111), 1,
      sym__term_plus_sep,
    STATE(114), 1,
      sym__term_plus_plus_sep,
    STATE(115), 1,
      sym__term_star_sep,
    STATE(133), 1,
      sym__alts,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
    STATE(71), 3,
      sym_repeat0,
      sym_repeat1,
      sym_option,
  [208] = 31,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    ACTIONS(35), 1,
      sym_mark,
    ACTIONS(37), 1,
      sym__namestart,
    STATE(4), 1,
      sym_comment,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(49), 1,
      sym__factor,
    STATE(57), 1,
      sym_plus,
    STATE(72), 1,
      sym__term,
    STATE(111), 1,
      sym__term_plus_sep,
    STATE(112), 1,
      sym_alt,
    STATE(114), 1,
      sym__term_plus_plus_sep,
    STATE(115), 1,
      sym__term_star_sep,
    ACTIONS(21), 2,
      sym_fullstop,
      sym_altsep,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
    STATE(71), 3,
      sym_repeat0,
      sym_repeat1,
      sym_option,
  [311] = 32,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    ACTIONS(35), 1,
      sym_mark,
    ACTIONS(37), 1,
      sym__namestart,
    ACTIONS(39), 1,
      sym_fullstop,
    STATE(5), 1,
      sym_comment,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(49), 1,
      sym__factor,
    STATE(57), 1,
      sym_plus,
    STATE(72), 1,
      sym__term,
    STATE(111), 1,
      sym__term_plus_sep,
    STATE(114), 1,
      sym__term_plus_plus_sep,
    STATE(115), 1,
      sym__term_star_sep,
    STATE(116), 1,
      sym_alt,
    STATE(135), 1,
      sym__alts,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
    STATE(71), 3,
      sym_repeat0,
      sym_repeat1,
      sym_option,
  [416] = 32,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    ACTIONS(35), 1,
      sym_mark,
    ACTIONS(37), 1,
      sym__namestart,
    ACTIONS(41), 1,
      sym_fullstop,
    STATE(6), 1,
      sym_comment,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(49), 1,
      sym__factor,
    STATE(57), 1,
      sym_plus,
    STATE(72), 1,
      sym__term,
    STATE(111), 1,
      sym__term_plus_sep,
    STATE(114), 1,
      sym__term_plus_plus_sep,
    STATE(115), 1,
      sym__term_star_sep,
    STATE(116), 1,
      sym_alt,
    STATE(132), 1,
      sym__alts,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
    STATE(71), 3,
      sym_repeat0,
      sym_repeat1,
      sym_option,
  [521] = 26,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    ACTIONS(35), 1,
      sym_mark,
    ACTIONS(37), 1,
      sym__namestart,
    STATE(7), 1,
      sym_comment,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(49), 1,
      sym__factor,
    STATE(57), 1,
      sym_plus,
    STATE(73), 1,
      sym__term,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
    STATE(71), 3,
      sym_repeat0,
      sym_repeat1,
      sym_option,
  [608] = 26,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(15), 1,
      sym_mark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    STATE(8), 1,
      sym_comment,
    STATE(32), 1,
      sym__factor,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(57), 1,
      sym_plus,
    STATE(73), 1,
      sym__term,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
    STATE(71), 3,
      sym_repeat0,
      sym_repeat1,
      sym_option,
  [695] = 25,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    ACTIONS(35), 1,
      sym_mark,
    ACTIONS(37), 1,
      sym__namestart,
    STATE(9), 1,
      sym_comment,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(57), 1,
      sym_plus,
    STATE(69), 1,
      sym_sep,
    STATE(75), 1,
      sym__factor,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
  [777] = 25,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    ACTIONS(35), 1,
      sym_mark,
    ACTIONS(37), 1,
      sym__namestart,
    STATE(10), 1,
      sym_comment,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(57), 1,
      sym_plus,
    STATE(75), 1,
      sym__factor,
    STATE(78), 1,
      sym_sep,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
  [859] = 25,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(15), 1,
      sym_mark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    STATE(11), 1,
      sym_comment,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(57), 1,
      sym_plus,
    STATE(69), 1,
      sym_sep,
    STATE(75), 1,
      sym__factor,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
  [941] = 25,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(13), 1,
      sym_tmark,
    ACTIONS(15), 1,
      sym_mark,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_op,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(31), 1,
      sym_tilde,
    STATE(12), 1,
      sym_comment,
    STATE(36), 1,
      sym_set,
    STATE(41), 1,
      sym__name,
    STATE(42), 1,
      sym_string,
    STATE(45), 1,
      sym_hex,
    STATE(57), 1,
      sym_plus,
    STATE(75), 1,
      sym__factor,
    STATE(78), 1,
      sym_sep,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(31), 2,
      sym_literal,
      sym_charset,
    STATE(33), 2,
      sym__inclusion,
      sym__exclusion,
    STATE(46), 2,
      sym_quoted,
      sym_encoded,
    STATE(51), 3,
      sym_nonterminal,
      sym__terminal,
      sym_insertion,
  [1023] = 14,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      sym_csq,
    ACTIONS(49), 1,
      sym__capital,
    STATE(13), 1,
      sym_comment,
    STATE(97), 1,
      sym_hex,
    STATE(98), 1,
      sym_member,
    STATE(100), 1,
      sym_character,
    STATE(130), 1,
      sym__code,
    STATE(136), 1,
      sym_from,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(127), 3,
      sym_string,
      sym_range,
      sym_chclass,
  [1069] = 13,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym__capital,
    STATE(14), 1,
      sym_comment,
    STATE(97), 1,
      sym_hex,
    STATE(100), 1,
      sym_character,
    STATE(122), 1,
      sym_member,
    STATE(130), 1,
      sym__code,
    STATE(136), 1,
      sym_from,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(127), 3,
      sym_string,
      sym_range,
      sym_chclass,
  [1112] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__namefollow,
    ACTIONS(56), 2,
      sym_single_star,
      anon_sym_PLUS,
    STATE(15), 2,
      sym_comment,
      aux_sym__name_repeat1,
    ACTIONS(51), 7,
      sym_rulesep,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1136] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      sym__namefollow,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__name_repeat1,
    ACTIONS(62), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(58), 7,
      sym_rulesep,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1162] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      sym__namefollow,
    STATE(15), 1,
      aux_sym__name_repeat1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(66), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(64), 7,
      sym_rulesep,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1188] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_comment,
    ACTIONS(70), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(68), 9,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
      sym_csq,
      sym_hyphen,
  [1210] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_comment,
    ACTIONS(74), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(72), 8,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
      sym_csq,
  [1231] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(58), 8,
      sym_rulesep,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1252] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_comment,
    ACTIONS(78), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(76), 8,
      sym_rulesep,
      sym__namefollow,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1273] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_comment,
    ACTIONS(82), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(80), 8,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
      sym_csq,
  [1294] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      sym__namefollow,
    ACTIONS(56), 2,
      sym_single_star,
      anon_sym_PLUS,
    STATE(23), 2,
      sym_comment,
      aux_sym__name_repeat1,
    ACTIONS(51), 6,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1317] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(87), 8,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
      sym_csq,
  [1338] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(91), 8,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
      sym_csq,
  [1359] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      sym__namefollow,
    STATE(23), 1,
      aux_sym__name_repeat1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(66), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(64), 6,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1384] = 11,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym_osq,
    ACTIONS(97), 1,
      sym_tilde,
    STATE(27), 1,
      sym_comment,
    STATE(30), 1,
      sym_hex,
    STATE(44), 1,
      sym_set,
    STATE(48), 1,
      sym_string,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
  [1419] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(99), 8,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
      sym_csq,
  [1440] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      sym__namefollow,
    STATE(26), 1,
      aux_sym__name_repeat1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(58), 6,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1465] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(103), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1485] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(109), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(107), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1505] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      sym_single_star,
    ACTIONS(115), 1,
      sym_double_star,
    ACTIONS(117), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      sym_double_plus,
    ACTIONS(121), 1,
      sym_quest,
    STATE(32), 1,
      sym_comment,
    STATE(88), 1,
      sym_single_plus,
    ACTIONS(111), 3,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [1535] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(123), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1555] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(78), 3,
      sym__namefollow,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(76), 6,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1575] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(127), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1595] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(133), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(131), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1615] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(137), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(135), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1635] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(141), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(139), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1655] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(145), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(143), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1675] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(149), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(147), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1695] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(153), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(151), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1715] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(157), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(155), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1735] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_comment,
    ACTIONS(161), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(159), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1755] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(165), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(163), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1775] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(169), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(167), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1795] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(173), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(171), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1815] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(175), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1835] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(179), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1855] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      sym_single_star,
    ACTIONS(117), 1,
      anon_sym_PLUS,
    ACTIONS(121), 1,
      sym_quest,
    ACTIONS(183), 1,
      sym_double_star,
    ACTIONS(185), 1,
      sym_double_plus,
    STATE(49), 1,
      sym_comment,
    STATE(88), 1,
      sym_single_plus,
    ACTIONS(111), 3,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
  [1885] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(189), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(187), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1905] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_comment,
    ACTIONS(193), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(191), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1925] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(197), 2,
      sym_single_star,
      anon_sym_PLUS,
    ACTIONS(195), 7,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
      sym_double_star,
      sym_double_plus,
      sym_quest,
  [1945] = 10,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_mark,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_source_file_repeat1,
    STATE(81), 1,
      sym_rule,
    STATE(138), 1,
      sym__name,
    STATE(139), 1,
      sym_rulename,
  [1976] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 1,
      anon_sym_ixml,
    ACTIONS(206), 1,
      sym_mark,
    ACTIONS(209), 1,
      sym__namestart,
    STATE(81), 1,
      sym_rule,
    STATE(138), 1,
      sym__name,
    STATE(139), 1,
      sym_rulename,
    STATE(54), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [2005] = 10,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_mark,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym_source_file_repeat1,
    STATE(55), 1,
      sym_comment,
    STATE(81), 1,
      sym_rule,
    STATE(138), 1,
      sym__name,
    STATE(139), 1,
      sym_rulename,
  [2036] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_mark,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    STATE(55), 1,
      aux_sym_source_file_repeat1,
    STATE(56), 1,
      sym_comment,
    STATE(81), 1,
      sym_rule,
    STATE(138), 1,
      sym__name,
    STATE(139), 1,
      sym_rulename,
  [2064] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_comment,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
    STATE(35), 2,
      sym_string,
      sym_hex,
  [2088] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_comment,
    STATE(97), 1,
      sym_hex,
    STATE(125), 1,
      sym_to,
    STATE(126), 1,
      sym_character,
  [2113] = 7,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      sym__escaped_squote,
    ACTIONS(222), 1,
      sym__char,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__string_squote_repeat1,
    STATE(70), 1,
      sym__string_squote_content,
  [2135] = 6,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 1,
      sym__escaped_squote,
    ACTIONS(231), 1,
      sym__char,
    STATE(105), 1,
      sym__string_squote_content,
    STATE(60), 2,
      sym_comment,
      aux_sym__string_squote_repeat1,
  [2155] = 7,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      sym__escaped_dquote,
    ACTIONS(238), 1,
      sym__char,
    STATE(61), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym__string_dquote_repeat1,
    STATE(108), 1,
      sym__string_dquote_content,
  [2177] = 6,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__escaped_dquote,
    ACTIONS(245), 1,
      sym__char,
    STATE(108), 1,
      sym__string_dquote_content,
    STATE(62), 2,
      sym_comment,
      aux_sym__string_dquote_repeat1,
  [2197] = 7,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym__escaped_squote,
    ACTIONS(250), 1,
      sym__char,
    STATE(63), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__string_squote_repeat1,
    STATE(105), 1,
      sym__string_squote_content,
  [2219] = 7,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym__escaped_dquote,
    ACTIONS(238), 1,
      sym__char,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym__string_dquote_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(108), 1,
      sym__string_dquote_content,
  [2241] = 7,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      sym__escaped_squote,
    ACTIONS(250), 1,
      sym__char,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      aux_sym__string_squote_repeat1,
    STATE(65), 1,
      sym_comment,
    STATE(105), 1,
      sym__string_squote_content,
  [2263] = 7,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym__escaped_dquote,
    ACTIONS(258), 1,
      sym__char,
    STATE(61), 1,
      aux_sym__string_dquote_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(91), 1,
      sym__string_dquote_content,
  [2285] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      sym_comment,
    STATE(137), 1,
      sym_string,
    STATE(28), 2,
      sym__string_dquote,
      sym__string_squote,
  [2305] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      sym__namestart,
    STATE(68), 1,
      sym_comment,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_ixml,
      sym_mark,
  [2320] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(264), 4,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [2333] = 5,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      sym__escaped_squote,
    ACTIONS(270), 1,
      anon_sym_SQUOTE2,
    STATE(70), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_SQUOTE,
      sym__char,
  [2350] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_comment,
    ACTIONS(111), 4,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [2363] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_termsep,
    STATE(72), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym__term_plus_sep_repeat1,
    ACTIONS(272), 2,
      sym_fullstop,
      sym_altsep,
  [2380] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(276), 4,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [2393] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      sym_termsep,
    ACTIONS(276), 2,
      sym_fullstop,
      sym_altsep,
    STATE(74), 2,
      sym_comment,
      aux_sym__term_plus_sep_repeat1,
  [2408] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(281), 4,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [2421] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      sym_termsep,
    STATE(76), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym__term_plus_sep_repeat1,
    ACTIONS(283), 2,
      sym_altsep,
      sym_cp,
  [2438] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      sym__escaped_dquote,
    STATE(77), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_DQUOTE,
      sym__char,
      anon_sym_DQUOTE2,
  [2453] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(291), 4,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [2466] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      sym__namestart,
    STATE(79), 1,
      sym_comment,
    ACTIONS(293), 3,
      ts_builtin_sym_end,
      anon_sym_ixml,
      sym_mark,
  [2481] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      sym__namestart,
    STATE(80), 1,
      sym_comment,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      anon_sym_ixml,
      sym_mark,
  [2496] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      sym__namestart,
    STATE(81), 1,
      sym_comment,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      anon_sym_ixml,
      sym_mark,
  [2511] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      sym_termsep,
    STATE(74), 1,
      aux_sym__term_plus_sep_repeat1,
    STATE(82), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym_fullstop,
      sym_altsep,
  [2528] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(305), 4,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [2541] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 1,
      sym_termsep,
    ACTIONS(276), 2,
      sym_altsep,
      sym_cp,
    STATE(84), 2,
      sym_comment,
      aux_sym__term_plus_sep_repeat1,
  [2556] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_comment,
    ACTIONS(310), 4,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [2569] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    STATE(86), 1,
      sym_comment,
    STATE(134), 1,
      sym_rulename,
    STATE(138), 1,
      sym__name,
  [2588] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(312), 4,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [2601] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(314), 4,
      sym_fullstop,
      sym_altsep,
      sym_termsep,
      sym_cp,
  [2614] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      sym__escaped_squote,
    STATE(89), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_SQUOTE,
      sym__char,
      anon_sym_SQUOTE2,
  [2629] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      sym_termsep,
    STATE(76), 1,
      aux_sym__term_plus_sep_repeat1,
    STATE(90), 1,
      sym_comment,
    ACTIONS(272), 2,
      sym_altsep,
      sym_cp,
  [2646] = 5,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_DQUOTE2,
    ACTIONS(322), 1,
      sym__escaped_dquote,
    STATE(91), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_DQUOTE,
      sym__char,
  [2663] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_POUND,
  [2675] = 5,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      sym__comment_text,
    STATE(93), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_comment_repeat1,
  [2691] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      sym_altsep,
    ACTIONS(332), 1,
      sym_cp,
    STATE(94), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym__alts_repeat1,
  [2707] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      sym_altsep,
    ACTIONS(337), 1,
      sym_cp,
    STATE(95), 2,
      sym_comment,
      aux_sym__alts_repeat1,
  [2721] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      sym_fullstop,
    ACTIONS(341), 1,
      sym_altsep,
    STATE(96), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym__alts_repeat1,
  [2737] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(343), 3,
      sym_altsep,
      sym_csq,
      sym_hyphen,
  [2749] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      sym_altsep,
    ACTIONS(347), 1,
      sym_csq,
    STATE(98), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_set_repeat1,
  [2765] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      sym_altsep,
    ACTIONS(339), 1,
      sym_cp,
    STATE(95), 1,
      aux_sym__alts_repeat1,
    STATE(99), 1,
      sym_comment,
  [2781] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      sym_hyphen,
    STATE(100), 1,
      sym_comment,
    ACTIONS(349), 2,
      sym_altsep,
      sym_csq,
  [2795] = 5,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      sym__comment_text,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_comment_repeat1,
    STATE(101), 1,
      sym_comment,
  [2811] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      sym__namestart,
    STATE(102), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_ixml,
      sym_mark,
  [2825] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym__namestart,
    ACTIONS(11), 1,
      anon_sym_ixml,
    STATE(43), 1,
      sym__name,
    STATE(103), 1,
      sym_comment,
  [2841] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 1,
      sym__comment_text,
    STATE(104), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [2855] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      sym__escaped_squote,
    STATE(105), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_SQUOTE,
      sym__char,
  [2869] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      sym__escaped_squote,
    STATE(106), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_SQUOTE,
      sym__char,
  [2883] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_ixml,
    ACTIONS(37), 1,
      sym__namestart,
    STATE(43), 1,
      sym__name,
    STATE(107), 1,
      sym_comment,
  [2899] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      sym__escaped_dquote,
    STATE(108), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_DQUOTE,
      sym__char,
  [2913] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      sym__escaped_dquote,
    STATE(109), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_DQUOTE,
      sym__char,
  [2927] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      sym_altsep,
    ACTIONS(364), 1,
      sym_csq,
    STATE(110), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_set_repeat1,
  [2943] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_comment,
    ACTIONS(366), 3,
      sym_fullstop,
      sym_altsep,
      sym_cp,
  [2955] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_comment,
    ACTIONS(337), 3,
      sym_fullstop,
      sym_altsep,
      sym_cp,
  [2967] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      sym_fullstop,
    ACTIONS(368), 1,
      sym_altsep,
    STATE(113), 2,
      sym_comment,
      aux_sym__alts_repeat1,
  [2981] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_comment,
    ACTIONS(371), 3,
      sym_fullstop,
      sym_altsep,
      sym_cp,
  [2993] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_comment,
    ACTIONS(373), 3,
      sym_fullstop,
      sym_altsep,
      sym_cp,
  [3005] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      sym_fullstop,
    ACTIONS(341), 1,
      sym_altsep,
    STATE(96), 1,
      aux_sym__alts_repeat1,
    STATE(116), 1,
      sym_comment,
  [3021] = 5,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      sym__escaped_squote,
    ACTIONS(377), 1,
      sym__char,
    STATE(117), 1,
      sym_comment,
    STATE(131), 1,
      sym__string_squote_content,
  [3037] = 5,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 1,
      sym__escaped_dquote,
    ACTIONS(381), 1,
      sym__char,
    STATE(118), 1,
      sym_comment,
    STATE(146), 1,
      sym__string_dquote_content,
  [3053] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(383), 3,
      sym_altsep,
      sym_csq,
      sym_hyphen,
  [3065] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(385), 1,
      sym_altsep,
    ACTIONS(388), 1,
      sym_csq,
    STATE(120), 2,
      sym_comment,
      aux_sym_set_repeat1,
  [3079] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_osq,
    STATE(50), 1,
      sym_set,
    STATE(121), 1,
      sym_comment,
  [3092] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_comment,
    ACTIONS(388), 2,
      sym_altsep,
      sym_csq,
  [3103] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym_osq,
    STATE(37), 1,
      sym_set,
    STATE(123), 1,
      sym_comment,
  [3116] = 4,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym_rulesep,
    ACTIONS(390), 1,
      anon_sym_version,
    STATE(124), 1,
      sym_comment,
  [3129] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(392), 2,
      sym_altsep,
      sym_csq,
  [3140] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(126), 1,
      sym_comment,
    ACTIONS(394), 2,
      sym_altsep,
      sym_csq,
  [3151] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_comment,
    ACTIONS(349), 2,
      sym_altsep,
      sym_csq,
  [3162] = 4,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(398), 1,
      sym__comment_text,
    STATE(128), 1,
      sym_comment,
  [3175] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_comment,
    ACTIONS(400), 2,
      sym_altsep,
      sym_csq,
  [3186] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_comment,
    ACTIONS(402), 2,
      sym_altsep,
      sym_csq,
  [3197] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE2,
    STATE(131), 1,
      sym_comment,
  [3207] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(406), 1,
      sym_fullstop,
    STATE(132), 1,
      sym_comment,
  [3217] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      sym_cp,
    STATE(133), 1,
      sym_comment,
  [3227] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(410), 1,
      sym_rulesep,
    STATE(134), 1,
      sym_comment,
  [3237] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym_fullstop,
    STATE(135), 1,
      sym_comment,
  [3247] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      sym_hyphen,
    STATE(136), 1,
      sym_comment,
  [3257] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(414), 1,
      sym_fullstop,
    STATE(137), 1,
      sym_comment,
  [3267] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_rulesep,
    STATE(138), 1,
      sym_comment,
  [3277] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      sym_rulesep,
    STATE(139), 1,
      sym_comment,
  [3287] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(420), 1,
      aux_sym_hex_token1,
    STATE(140), 1,
      sym_comment,
  [3297] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(422), 1,
      sym_fullstop,
    STATE(141), 1,
      sym_comment,
  [3307] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      anon_sym_DQUOTE2,
    STATE(142), 1,
      sym_comment,
  [3317] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_SQUOTE2,
    STATE(143), 1,
      sym_comment,
  [3327] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      sym__letter,
    STATE(144), 1,
      sym_comment,
  [3337] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      sym_comment,
  [3347] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      anon_sym_DQUOTE2,
    STATE(146), 1,
      sym_comment,
  [3357] = 1,
    ACTIONS(428), 1,
      ts_builtin_sym_end,
  [3361] = 1,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 103,
  [SMALL_STATE(4)] = 208,
  [SMALL_STATE(5)] = 311,
  [SMALL_STATE(6)] = 416,
  [SMALL_STATE(7)] = 521,
  [SMALL_STATE(8)] = 608,
  [SMALL_STATE(9)] = 695,
  [SMALL_STATE(10)] = 777,
  [SMALL_STATE(11)] = 859,
  [SMALL_STATE(12)] = 941,
  [SMALL_STATE(13)] = 1023,
  [SMALL_STATE(14)] = 1069,
  [SMALL_STATE(15)] = 1112,
  [SMALL_STATE(16)] = 1136,
  [SMALL_STATE(17)] = 1162,
  [SMALL_STATE(18)] = 1188,
  [SMALL_STATE(19)] = 1210,
  [SMALL_STATE(20)] = 1231,
  [SMALL_STATE(21)] = 1252,
  [SMALL_STATE(22)] = 1273,
  [SMALL_STATE(23)] = 1294,
  [SMALL_STATE(24)] = 1317,
  [SMALL_STATE(25)] = 1338,
  [SMALL_STATE(26)] = 1359,
  [SMALL_STATE(27)] = 1384,
  [SMALL_STATE(28)] = 1419,
  [SMALL_STATE(29)] = 1440,
  [SMALL_STATE(30)] = 1465,
  [SMALL_STATE(31)] = 1485,
  [SMALL_STATE(32)] = 1505,
  [SMALL_STATE(33)] = 1535,
  [SMALL_STATE(34)] = 1555,
  [SMALL_STATE(35)] = 1575,
  [SMALL_STATE(36)] = 1595,
  [SMALL_STATE(37)] = 1615,
  [SMALL_STATE(38)] = 1635,
  [SMALL_STATE(39)] = 1655,
  [SMALL_STATE(40)] = 1675,
  [SMALL_STATE(41)] = 1695,
  [SMALL_STATE(42)] = 1715,
  [SMALL_STATE(43)] = 1735,
  [SMALL_STATE(44)] = 1755,
  [SMALL_STATE(45)] = 1775,
  [SMALL_STATE(46)] = 1795,
  [SMALL_STATE(47)] = 1815,
  [SMALL_STATE(48)] = 1835,
  [SMALL_STATE(49)] = 1855,
  [SMALL_STATE(50)] = 1885,
  [SMALL_STATE(51)] = 1905,
  [SMALL_STATE(52)] = 1925,
  [SMALL_STATE(53)] = 1945,
  [SMALL_STATE(54)] = 1976,
  [SMALL_STATE(55)] = 2005,
  [SMALL_STATE(56)] = 2036,
  [SMALL_STATE(57)] = 2064,
  [SMALL_STATE(58)] = 2088,
  [SMALL_STATE(59)] = 2113,
  [SMALL_STATE(60)] = 2135,
  [SMALL_STATE(61)] = 2155,
  [SMALL_STATE(62)] = 2177,
  [SMALL_STATE(63)] = 2197,
  [SMALL_STATE(64)] = 2219,
  [SMALL_STATE(65)] = 2241,
  [SMALL_STATE(66)] = 2263,
  [SMALL_STATE(67)] = 2285,
  [SMALL_STATE(68)] = 2305,
  [SMALL_STATE(69)] = 2320,
  [SMALL_STATE(70)] = 2333,
  [SMALL_STATE(71)] = 2350,
  [SMALL_STATE(72)] = 2363,
  [SMALL_STATE(73)] = 2380,
  [SMALL_STATE(74)] = 2393,
  [SMALL_STATE(75)] = 2408,
  [SMALL_STATE(76)] = 2421,
  [SMALL_STATE(77)] = 2438,
  [SMALL_STATE(78)] = 2453,
  [SMALL_STATE(79)] = 2466,
  [SMALL_STATE(80)] = 2481,
  [SMALL_STATE(81)] = 2496,
  [SMALL_STATE(82)] = 2511,
  [SMALL_STATE(83)] = 2528,
  [SMALL_STATE(84)] = 2541,
  [SMALL_STATE(85)] = 2556,
  [SMALL_STATE(86)] = 2569,
  [SMALL_STATE(87)] = 2588,
  [SMALL_STATE(88)] = 2601,
  [SMALL_STATE(89)] = 2614,
  [SMALL_STATE(90)] = 2629,
  [SMALL_STATE(91)] = 2646,
  [SMALL_STATE(92)] = 2663,
  [SMALL_STATE(93)] = 2675,
  [SMALL_STATE(94)] = 2691,
  [SMALL_STATE(95)] = 2707,
  [SMALL_STATE(96)] = 2721,
  [SMALL_STATE(97)] = 2737,
  [SMALL_STATE(98)] = 2749,
  [SMALL_STATE(99)] = 2765,
  [SMALL_STATE(100)] = 2781,
  [SMALL_STATE(101)] = 2795,
  [SMALL_STATE(102)] = 2811,
  [SMALL_STATE(103)] = 2825,
  [SMALL_STATE(104)] = 2841,
  [SMALL_STATE(105)] = 2855,
  [SMALL_STATE(106)] = 2869,
  [SMALL_STATE(107)] = 2883,
  [SMALL_STATE(108)] = 2899,
  [SMALL_STATE(109)] = 2913,
  [SMALL_STATE(110)] = 2927,
  [SMALL_STATE(111)] = 2943,
  [SMALL_STATE(112)] = 2955,
  [SMALL_STATE(113)] = 2967,
  [SMALL_STATE(114)] = 2981,
  [SMALL_STATE(115)] = 2993,
  [SMALL_STATE(116)] = 3005,
  [SMALL_STATE(117)] = 3021,
  [SMALL_STATE(118)] = 3037,
  [SMALL_STATE(119)] = 3053,
  [SMALL_STATE(120)] = 3065,
  [SMALL_STATE(121)] = 3079,
  [SMALL_STATE(122)] = 3092,
  [SMALL_STATE(123)] = 3103,
  [SMALL_STATE(124)] = 3116,
  [SMALL_STATE(125)] = 3129,
  [SMALL_STATE(126)] = 3140,
  [SMALL_STATE(127)] = 3151,
  [SMALL_STATE(128)] = 3162,
  [SMALL_STATE(129)] = 3175,
  [SMALL_STATE(130)] = 3186,
  [SMALL_STATE(131)] = 3197,
  [SMALL_STATE(132)] = 3207,
  [SMALL_STATE(133)] = 3217,
  [SMALL_STATE(134)] = 3227,
  [SMALL_STATE(135)] = 3237,
  [SMALL_STATE(136)] = 3247,
  [SMALL_STATE(137)] = 3257,
  [SMALL_STATE(138)] = 3267,
  [SMALL_STATE(139)] = 3277,
  [SMALL_STATE(140)] = 3287,
  [SMALL_STATE(141)] = 3297,
  [SMALL_STATE(142)] = 3307,
  [SMALL_STATE(143)] = 3317,
  [SMALL_STATE(144)] = 3327,
  [SMALL_STATE(145)] = 3337,
  [SMALL_STATE(146)] = 3347,
  [SMALL_STATE(147)] = 3357,
  [SMALL_STATE(148)] = 3361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__alts_repeat1, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_squote, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_squote, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__name_repeat1, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__name_repeat1, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_dquote, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_dquote, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__name_repeat1, 2), SHIFT_REPEAT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_squote, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_squote, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_dquote, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_dquote, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoded, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encoded, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__terminal, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__terminal, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insertion, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_insertion, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inclusion, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inclusion, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exclusion, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exclusion, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__factor, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__factor, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonterminal, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonterminal, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inclusion, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inclusion, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoded, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encoded, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exclusion, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exclusion, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__factor, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__factor, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__factor, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__factor, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_squote_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_squote_repeat1, 2), SHIFT_REPEAT(106),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_squote_repeat1, 2), SHIFT_REPEAT(106),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_dquote_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_dquote_repeat1, 2), SHIFT_REPEAT(109),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_dquote_repeat1, 2), SHIFT_REPEAT(109),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_squote_repeat1, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_squote_repeat1, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_plus_sep, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__term_plus_sep_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__term_plus_sep_repeat1, 2), SHIFT_REPEAT(7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_plus_sep, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_dquote_content, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_dquote_content, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat0, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat0, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__term_plus_sep_repeat1, 2), SHIFT_REPEAT(8),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_plus, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_squote_content, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_squote_content, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_dquote_repeat1, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_dquote_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plus, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alts, 1),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__alts_repeat1, 2), SHIFT_REPEAT(2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__alts_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alts, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(128),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_plus_plus_sep, 1),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__alts_repeat1, 2), SHIFT_REPEAT(4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term_star_sep, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alt, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 3),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(14),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_repeat1, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__code, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chclass, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rulename, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [426] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ixml(void) {
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
