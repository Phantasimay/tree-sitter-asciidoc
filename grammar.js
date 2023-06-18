module.exports = grammar({
    name: 'asciidoc',

    rules: {
        document: $ => repeat($._block),
        _block: $ =>
            choice(
                $.title,
                $.note,
                $.list,
                $.code,
                $.note,
                $.comment,
                $.image,
                $.url,
                $.footnote,
                $.kbd,
                $.table,
                $.xref,
                $.description_list,
                $.audio,
                $.video
            ),
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
        url: $ =>
            seq(/[a-zA-z]+:\/\/[^\s]*/, optional(seq('[', /[\w.]*/, ']'))),
        footnote: $ => seq('footnote:[', optional(/[\w._]+/), ']'),
        kbd: $ => seq('kbd:[', optional(/\w+(\+\w+)?/), ']'),
        table: $ => seq('|===\n', repeat(/.*/), '|==='),
        xref: $ =>
            seq(
                '<<',
                field('url', /\w+/),
                optional(seq(',', field('title', /\w+/))),
                '>>'
            ),
        description_list: $ => seq(/\w+/, ':: ', /.+/),
        audio: $ =>
            seq(
                'audio::',
                field('url', optional(/[\w.]*/)),
                '[',
                field('title', optional(/[\w.]+/)),
                ']'
            ),
        video: $ =>
            seq(
                'video::',
                field('url', optional(/[\w.]*/)),
                '[',
                field('title', optional(/[\w.]+/)),
                ']'
            ),
    },
})
