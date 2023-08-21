module.exports = grammar({
  name: 'ixml',

  extras: ($) => [
    /\s/,
    $.comment
  ],

  rules: {
    source_file: ($) => seq(optional($.prolog), repeat1($.rule)),

    // alts isn't allowed to be empty, so make it optional
    rule: ($) => seq(optional($.mark), $.name, /[:=]/, optional($.alts), '.'),

    prolog: ($) => $.version,

    version: ($) => seq("ixml", "version", $.string, '.'),
    
    tmark: ($) => /[-^]/,
    mark: ($) => /[-^@]/,
    name: ($) => /[_\p{L}][-.·‿⁀\p{Nd}\p{Mn}]*/,

    string: ($) => choice($._string_dquote, $._string_squote),

    _string_dquote: ($) => seq('"', repeat($._string_dquote_content), '"'),
    _string_dquote_content: ($) => choice($.escaped_dquote, $.char),
    escaped_dquote: ($) => '""',

    _string_squote: ($) => seq("'", repeat($._string_squote_content), "'"),
    _string_squote_content: ($) => choice($.escaped_squote, $.char),
    escaped_squote: ($) => "''",

    char: ($) => /[^\p{C}]/,

    // FIXME: nested comments
    comment: ($) => token(prec(-1, seq(
      '{',
      /[^{}]*/,
      '}'
    ))),

    // alts isn't allowed to be empty, so make it optional
    alts: ($) => seq($.alt, repeat(seq(/[;|]/, optional($.alt)))),

    alt: ($) => $._term_star_sep,

    _term_star_sep: ($) => $._term_plus_plus_sep,

    _term_plus_plus_sep: ($) => $._term_plus_sep,

    _term_plus_sep: ($) => seq($.term, repeat(seq(',', $.term))),

    term: ($) => choice(
      $.factor,
      $.option,
      $.repeat0,
      $.repeat1
    ),

    // alts isn't allowed to be empty, so make () an explicit option
    factor: ($) => choice(
      $.terminal,
      $.nonterminal,
      $.insertion,
      seq('(', $.alts, ')'),
      seq('(', ')')
    ),

    repeat0: ($) => choice(
      seq($.factor, '*'),
      seq($.factor, '**', $.sep)
    ),

    repeat1: ($) => choice(
      seq($.factor, '+'),
      seq($.factor, '++', $.sep)
    ),
    
    option: ($) => seq($.factor, '?'),

    sep: ($) => $.factor,

    nonterminal: ($) => seq(optional($.mark), $.name),

    terminal: ($) => choice(
      $.literal,
      $.charset
    ),

    literal: ($) => choice(
      $.quoted,
      $.encoded
    ),

    quoted: ($) => seq(optional($.tmark), $.string),

    encoded: ($) => seq(optional($.tmark), '#', $.hex),

    hex: ($) => /[a-fA-F0-9]+/,

    // member isn't allowed to be empty, so make [] an explicit option
    set: ($) => choice(
      seq('[', ']'),
      seq('[', $.member, repeat(seq(/[;|]/, $.member)), ']')
    ),

    // In iXML, "L" matches both "character" and "string". That makes
    // "L" the start of a range and "L" the string ambiguous. I'm
    // fixing that by rewriting the rule for member a bit. The point
    // here is useful editing guidance, not semantic equivalance.
    member: ($) => choice(
      $.range,
      $.string,
      $.character,
      $.chclass
    ),

    range: ($) => seq($.from, '-', $.to),

    from: ($) => $.character,
    to: ($) => $.character,
    character: ($) => choice(
      seq('"', $._string_dquote_content, token.immediate('"')),
      seq("'", $._string_squote_content, token.immediate("'")),
      seq('#', $.hex)
    ),

    charset: ($) => choice(
      $.inclusion,
      $.exclusion
    ),

    inclusion: ($) => seq(optional($.tmark), $.set),
    exclusion: ($) => seq(optional($.tmark), '~', $.set),

    chclass: ($) => $._code,
    _code: ($) => seq($._capital, $._letter),
    _capital: ($) => /[A-Z]/,
    _letter: ($) => /[A-Za-z]/,

    insertion: ($) => seq('+', choice($.string, seq('#', $.hex)))
  },

  conflicts: ($) => [
    [$.character, $.string]
  ]
});
