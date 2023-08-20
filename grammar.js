module.exports = grammar({
  name: 'ixml',

  extras: $ => [
    /\s/,
    $.comment
  ],

  rules: {
    source_file: $ => seq(optional($.prolog), repeat1($.rule)),

    rule: $ => choice(
      seq(optional($.mark), $.name, /[:=]/, $.alts, '.'),
      seq(optional($.mark), $.name, /[:=]/, '.'),
    ),

    prolog: $ => $.version,

    version: $ => seq("ixml", "version", $.string, '.'),
    
    tmark: $ => /[-^]/,
    mark: $ => /[-^@]/,
    name: $ => /[a-zA-Z_][-a-zA-Z0-9_]*/,
    string: $ => prec(2, choice(
      seq('"', repeat1($._dchar), token.immediate('"')),
      seq("'", repeat1($._schar), token.immediate("'"))
    )),

    _dchar: $ => token.immediate(choice(/[^"]/, '""')),

    _schar: $ => token.immediate(choice(/[^']/, "''")),

    comment: $ => token(prec(-1, seq(
      '{',
      /[^{}]*/,
      '}'
    ))),

    alts: $ => seq($.alt, repeat(seq(/[;|]/, optional($.alt)))),

    alt: $ => $._term_star_sep,

    _term_star_sep: $ => $._term_plus_plus_sep,

    _term_plus_plus_sep: $ => $._term_plus_sep,

    _term_plus_sep: $ => seq($.term, repeat(seq(',', $.term))),

    term: $ => choice(
      $.factor,
      $.option,
      $.repeat0,
      $.repeat1
    ),

    factor: $ => choice(
      $.terminal,
      $.nonterminal,
      $.insertion,
      seq('(', $.alts, ')'),
      seq('(', ')')
    ),

    repeat0: $ => choice(
      seq($.factor, '*'),
      seq($.factor, '**', $.sep)
    ),

    repeat1: $ => choice(
      seq($.factor, '+'),
      seq($.factor, '++', $.sep)
    ),
    
    option: $ => seq($.factor, '?'),

    sep: $ => $.factor,

    nonterminal: $ => seq(optional($.mark), $.name),

    terminal: $ => choice(
      $.literal,
      $.charset
    ),

    literal: $ => choice(
      $.quoted,
      $.encoded
    ),

    quoted: $ => seq(optional($.tmark), $.string),

    encoded: $ => seq(optional($.tmark), '#', $.hex),

    hex: $ => /[a-fA-F0-9]+/,

    charset: $ => choice(
      $.inclusion,
      $.exclusion
    ),

    inclusion: $ => seq(optional($.tmark), $.set),
    exclusion: $ => seq(optional($.tmark), '~', $.set),

    set: $ => choice(
      seq('[', ']'),
      seq('[', $.member, repeat(seq(/[;|]/, $.member)), ']')
    ),

    member: $ => choice(
      $.range,
      $.string,
      seq('#', $.hex),
      $.chclass
    ),

    range: $ => prec(2, seq($.from, '-', $.to)),

    from: $ => $.character,
    to: $ => $.character,
    character: $ => prec(2, choice(
      seq('"', $._dchar, token.immediate('"')),
      seq("'", $._schar, token.immediate("'")),
      seq('#', $.hex)
    )),

    chclass: $ => $._code,
    _code: $ => seq($._capital, $._letter),
    _capital: $ => /[A-Z]/,
    _letter: $ => /[A-Za-z]/,

    insertion: $ => seq('+', choice($.string, seq('#', $.hex)))
  },

  conflicts: $ => [
    [$.character, $.string, $.range],
    [$.version, $.rule]
  ]

});
