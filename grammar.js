const common = require('./common/grammar.js')
const PRECEDENCE_LEVEL_LINK = common.PRECEDENCE_LEVEL_LINK

const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~'
const PUNCTUATION_CHARACTERS_ARRAY = [
    '!',
    '"',
    '#',
    '$',
    '%',
    '&',
    "'",
    '(',
    ')',
    '*',
    '+',
    ',',
    '-',
    '.',
    '/',
    ':',
    ';',
    '<',
    '=',
    '>',
    '?',
    '@',
    '[',
    '\\',
    ']',
    '^',
    '_',
    '`',
    '{',
    '|',
    '}',
    '~',
]

module.exports = grammar({
    name: 'asciidoc',
    externals: $ => [
        $._eof,
        $._line_ending,
        $.atx_h1_marker,
        $.atx_h2_marker,
        $.atx_h3_marker,
        $.atx_h4_marker,
        $.atx_h5_marker,
    ],
    extras: $ => [],

    rules: {
        document: $ => seq($.atx_heading1),
        // title1: $ => seq($.atx_h1_marker, ' ', alias(/.*\n?/, $.title_content)),
        // title2: $ => seq($.atx_h2_marker, ' ', alias(/.*\n?/, $.title_content)),
        // title3: $ => seq($.atx_h3_marker, ' ', alias(/.*\n?/, $.title_content)),
        // title4: $ => seq($.atx_h4_marker, ' ', alias(/.*\n?/, $.title_content)),
        // title5: $ => seq($.atx_h5_marker, ' ', alias(/.*\n?/, $.title_content)),
        atx_heading1: $ =>
            prec(
                1,
                seq(
                    $.atx_h1_marker,
                    optional($._atx_heading_content),
                    $._newline,
                ),
            ),
        _atx_heading_content: $ =>
            prec(
                1,
                seq(
                    optional($._whitespace),
                    field('heading_content', alias($._line, $.inline)),
                ),
            ),
        _line: $ =>
            prec.right(
                repeat1(
                    choice(
                        $._word,
                        $._whitespace,
                        common.punctuation_without($, []),
                    ),
                ),
            ),
        _word: $ =>
            seq(
                new RegExp(
                    '[^' + PUNCTUATION_CHARACTERS_REGEX + ' \\t\\n\\r]+',
                ),
            ),

        _whitespace: $ => /[ \t]+/,
        _newline: $ => seq($._line_ending),
        _last_token_punctuation: $ => choice(), // needed for compatability wiht common rules
    },
})
