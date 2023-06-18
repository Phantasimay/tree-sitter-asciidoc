module.exports = grammar({
    name: 'asciidoc',

    rules: {
        document: $ => repeat($._block),
        _block: $ =>
            choice($.title, $.note, $.list, $.code, $.note, $.comment, $.image),
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
                '----'
            ),
        note: $ => seq('NOTE:', optional(seq(' ', /.*/))),
        comment: $ => seq('// ', /.*/),
        image: $ =>
            seq(
                'image::',
                field('url', /[\w./:]*/),
                '[',
                field('title', /[\w.]*/),
                ']\n'
            ),
    },
})
