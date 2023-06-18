module.exports = grammar({
    name: 'asciidoc',

    rules: {
        document: $ => repeat($._block),
        _block: $ =>
            choice(
                $.title,
                $._admonitions,
                $.list,
                $.code,
                $.comment,
                $.image,
                $.url,
                $.footnote,
                $.kbd,
                $.table,
                $.xref,
                $.description_list,
                $.audio,
                $.video,
                $.paragraph
            ),
        title: $ => seq(/=+ .*\n?/),
        _admonitions: $ =>
            choice($.note, $.tip, $.important, $.caution, $.warning),
        note: $ => seq('NOTE: ', /.+/),
        tip: $ => seq('TIP: ', /.+/),
        important: $ => seq('IMPORTANT: ', /.+/),
        caution: $ => seq('CAUTION: ', /.+/),
        warning: $ => seq('WARNING: ', /.+/),
        list: $ => prec.right(repeat1($._list_item)),
        _list_item: $ => seq(choice(/\*+/, /-+/, /\.+/), ' ', /.+/, '\n'),
        code: $ =>
            seq(
                '[,',
                optional(' '),
                field('language', /\w+/),
                ']\n',
                repeat(/.*/),
                '----\n',
                /----\n?/
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
        table: $ => seq('|===\n', repeat(/.*/), /\|===\n?/),
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
        paragraph: $ => seq(repeat1($._inline_element), '\n'),
        _inline_element: $ =>
            choice(
                $.emphasis,
                $.strong,
                $.monospace,
                $.superscript,
                $.subscript,
                /\w+/
            ),
        emphasis: $ => /_.+_/,
        strong: $ => /\*.+\*/,
        monospace: $ => /`.+`/,
        superscript: $ => /\^.+\^/,
        subscript: $ => /~.+~/,
    },
})
