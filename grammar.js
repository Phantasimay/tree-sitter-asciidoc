module.exports = grammar({
    name: 'asciidoc',
    externals: $ => [$._eof],

    rules: {
        document: $ => seq(optional($.document_title), repeat($._block)),
        _block: $ => seq($._block_body, $._block_ending),
        _block_ending: $ => choice('\n', $._eof),
        _block_body: $ =>
            choice($.title1, $.title2, $.title3, $.title4, $.title5),
        document_title: $ =>
            seq('=', ' ', /.*\n/, optional($._author_line), $._block_ending),
        _author_line: $ =>
            seq(
                field('first_name', /\w+/),
                optional(field('middle_name', /[\w.]+/)),
                field('last_name', /\w+/),
                '<',
                field('author_email', $.email),
                '>',
            ),
        title1: $ => seq('==', ' ', /.*\n/),
        title2: $ => seq('===', ' ', /.*\n/),
        title3: $ => seq('====', ' ', /.*\n/),
        title4: $ => seq('=====', ' ', /.*\n/),
        title5: $ => seq('======', ' ', /.*\n/),
        email: $ =>
            /[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*/,
    },
})
