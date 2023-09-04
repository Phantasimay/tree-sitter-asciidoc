module.exports = grammar({
    name: 'asciidoc',
    externals: $ => [$._eof],
    extras: $ => [],

    rules: {
        document: $ => seq(optional($.document_title), repeat($._block)),
        _block: $ => seq($._block_body, $._block_ending),
        _block_body: $ =>
            choice($.title1, $.title2, $.title3, $.title4, $.title5),
        document_title: $ =>
            seq(
                '=',
                ' ',
                /.*/,
                $._newline_token,
                optional($.author_line),
                repeat($._doc_attr),
                $._block_ending,
            ),
        author_line: $ =>
            seq(
                field('first_name', /\w+/),
                ' ',
                optional(field('middle_name', /[\w.]+/)),
                ' ',
                field('last_name', /\w+/),
                ' ',
                '<',
                field('author_email', $.email),
                '>',
                $._newline_token,
            ),
        _doc_attr: $ => seq(choice($.doc_description), $._newline_token),
        doc_description: $ =>
            seq(
                field('attr_marker', ':'),
                field('attr_name', /\w+/),
                field('attr_marker', ':'),
                ' ',
                field('doc_description', /.*/),
            ),
        title1: $ => seq('==', ' ', /.*/, $._newline_token),
        title2: $ => seq('===', ' ', /.*/, $._newline_token),
        title3: $ => seq('====', ' ', /.*/, $._newline_token),
        title4: $ => seq('=====', ' ', /.*/, $._newline_token),
        title5: $ => seq('======', ' ', /.*/, $._newline_token),
        email: $ =>
            /[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*/,

        _block_ending: $ => choice($._newline_token, $._eof),
        _newline_token: $ => /\n|\r\n?/,
    },
})
