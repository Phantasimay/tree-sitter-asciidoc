module.exports = grammar({
    name: 'asciidoc',

    rules: {
        document: $ => repeat($._block),
        _block: $ => choice($.title, $.note, $.list, $.code, $.note, $.comment),
        title: $ => seq(/=+/, ' ', /.*/),
        note: $ => seq('NOTE: ', /[\w\s]+/),
        list: $ => seq(/[\-.]{1}/, ' ', /.*/),
        code: $ =>
            seq(
                '[,',
                optional(' '),
                field('language', /\w+/),
                ']\n',
                repeat(/.*/),
                '----\n',
                '----\n'
            ),
        note: $ => seq('NOTE:', optional(seq(' ', /.*/))),
        comment: $ => seq('// ', /.*/),
    },
})
