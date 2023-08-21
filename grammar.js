module.exports = grammar({
  name: 'ixml',

  extras: ($) => [
    /\s/,
    $.comment
  ],

  rules: {
    source_file: ($) => seq(optional($.prolog), repeat1($.rule)),

    // alts isn't allowed to be empty, so make it optional
    rule: ($) => seq(optional($.mark), $.rulename, $.rulesep, optional($._alts), $.fullstop),

    rulesep: ($) => /[:=]/,
    fullstop: ($) => '.',

    prolog: ($) => seq($.version, $.fullstop),

    version: ($) => seq("ixml", "version", $.string),
    
    tmark: ($) => /[-^]/,
    mark: ($) => /[-^@]/,

    rulename: ($) => $._name,
    _name: ($) => choice(seq($._namestart, repeat($._namefollow)), 'ixml'),
    _namestart: ($) => /[_\p{L}]/,
    _namefollow: ($) => token.immediate(/[-.·‿⁀_\p{L}\p{Nd}\p{Mn}]/),

    string: ($) => choice($._string_dquote, $._string_squote),

    _string_dquote: ($) => seq('"', repeat($._string_dquote_content), '"'),
    _string_dquote_content: ($) => choice($._escaped_dquote, $._char),
    _escaped_dquote: ($) => token.immediate('""'),

    _string_squote: ($) => seq("'", repeat($._string_squote_content), "'"),
    _string_squote_content: ($) => choice($._escaped_squote, $._char),
    _escaped_squote: ($) => token.immediate("''"),

    _char: ($) => token.immediate(/[^\p{C}]/),

    // N.B. This takes advantage of the fact that $.comment is in extras.
    // That's what allows nested comments in _comment_text
    comment: ($) => seq(token(prec(-3, '{')), repeat($._comment_text), '}'),
    _comment_text: ($) => /[^\{\}]/,

    // alts isn't allowed to be empty, so make it optional
    _alts: ($) => seq($.alt, repeat(seq($.altsep, optional($.alt)))),

    altsep: ($) => /[;|]/,

    alt: ($) => $._term_star_sep,

    _term_star_sep: ($) => $._term_plus_plus_sep,

    _term_plus_plus_sep: ($) => $._term_plus_sep,

    _term_plus_sep: ($) => seq($._term, repeat(seq($.termsep, $._term))),

    termsep: ($) => ',',

    _term: ($) => choice(
      $._factor,
      $.option,
      $.repeat0,
      $.repeat1
    ),

    // alts isn't allowed to be empty, so make () an explicit option
    _factor: ($) => choice(
      $._terminal,
      $.nonterminal,
      $.insertion,
      seq($.op, $._alts, $.cp),
      seq($.op, $.cp)
    ),

    op: ($) => '(',
    cp: ($) => ')',

    repeat0: ($) => choice(
      seq($._factor, $.single_star),
      seq($._factor, $.double_star, $.sep)
    ),

    single_star: ($) => '*',
    double_star: ($) => '**',

    repeat1: ($) => choice(
      seq($._factor, $.single_plus),
      seq($._factor, $.double_plus, $.sep)
    ),

    single_plus: ($) => '+',
    double_plus: ($) => '++',
    
    option: ($) => seq($._factor, $.quest),

    quest: ($) => '?',

    sep: ($) => $._factor,

    nonterminal: ($) => seq(optional($.mark), $._name),

    _terminal: ($) => choice(
      $.literal,
      $.charset
    ),

    literal: ($) => choice(
      $.quoted,
      $.encoded
    ),

    quoted: ($) => seq(optional($.tmark), $.string),

    encoded: ($) => seq(optional($.tmark), $.hex),

    hex: ($) => seq('#', /[a-fA-F0-9]+/),

    // member isn't allowed to be empty, so make [] an explicit option
    set: ($) => choice(
      seq($.osq, $.csq),
      seq($.osq, $.member, repeat(seq($.altsep, $.member)), $.csq)
    ),

    osq: ($) => '[',
    csq: ($) => ']',

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

    range: ($) => seq($.from, $.hyphen, $.to),

    hyphen: ($) => '-',

    from: ($) => $.character,
    to: ($) => $.character,
    character: ($) => choice(
      seq('"', $._string_dquote_content, token.immediate('"')),
      seq("'", $._string_squote_content, token.immediate("'")),
      $.hex
    ),

    charset: ($) => choice(
      $._inclusion,
      $._exclusion
    ),

    _inclusion: ($) => seq(optional($.tmark), $.set),
    _exclusion: ($) => seq(optional($.tmark), $.tilde, $.set),

    tilde: ($) => '~',

    chclass: ($) => $._code,
    _code: ($) => seq($._capital, $._letter),
    _capital: ($) => /[A-Z]/,
    _letter: ($) => /[A-Za-z]/,

    insertion: ($) => seq($.plus, choice($.string, $.hex)),
    plus: ($) => '+'
  },

  conflicts: ($) => [
    [$.character, $.string]
  ]
});
