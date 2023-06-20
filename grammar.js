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
                $.table,
                $.description_list,
                $.audio,
                $.video,
                $.paragraph
            ),
        title: _$ => /={1,6} .*\n?/,
        // Admonitions
        _admonitions: $ =>
            choice($.note, $.tip, $.important, $.caution, $.warning),
        note: $ => choice($._note_line, $._note_block),
        _note_line: _$ => seq('NOTE: ', /.+/),
        _note_block: _$ => seq('[NOTE]\n', '----\n', repeat(/.+\n/), '----\n'),
        tip: $ => choice($._tip, $._tip_block),
        _tip: _$ => seq('TIP: ', /.+/),
        _tip_block: _$ => seq('[TIP]\n', '----\n', repeat(/.+\n/), '----\n'),
        important: $ => choice($._important, $._important_block),
        _important: _$ => seq('IMPORTANT: ', /.+/),
        _important_block: _$ =>
            seq('[IMPORTANT]\n', '----\n', repeat(/.+\n/), '----\n'),
        caution: $ => choice($._caution, $._caution_block),
        _caution: _$ => seq('CAUTION: ', /.+/),
        _caution_block: _$ =>
            seq('[CAUTION]\n', '----\n', repeat(/.+\n/), '----\n'),
        warning: $ => choice($._warning, $._warning_block),
        _warning: _$ => seq('WARNING: ', /.+/),
        _warning_block: _$ =>
            seq('[WARNING]\n', '----\n', repeat(/.+\n/), '----\n'),
        // list
        list: $ => seq($._list_item, '\n'),
        _list_item: _$ => repeat1(/[\*\-\.]+ .+\n?/),
        code: _$ =>
            seq(
                /\[,\s?/,
                field('language', /\w+/),
                ']\n',
                '----\n',
                field('content', optional(repeat1(/.+\n/))),
                '----\n'
            ),
        comment: _$ => seq('// ', /.*/),
        image: _$ =>
            seq(
                'image::',
                field('url', /[\w./:]*/),
                '[',
                field('title', /[\w.]*/),
                ']\n'
            ),
        table: _$ => seq('|===\n', repeat(/.*/), /\|===\n?/),
        description_list: _$ => seq(/\w+/, ':: ', /.+/),
        audio: _$ =>
            seq(
                'audio::',
                field('url', optional(/[\w.]*/)),
                '[',
                field('title', optional(/[\w.]+/)),
                ']'
            ),
        video: _$ =>
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
                $.replacement,
                $.passthrough,
                $.kbd,
                $.footnote,
                $.url,
                $.xref,
                /\w+/
            ),
        kbd: _$ => seq('kbd:[', optional(/\w+(\+\w+)?/), ']'),
        footnote: _$ => seq('footnote:[', optional(/[\w._]+/), ']'),
        url: _$ =>
            seq(/[a-zA-z]+:\/\/[^\s]*/, optional(seq('[', /[\w.]*/, ']'))),
        xref: $ => choice($._inline_xref, $._xref),
        _inline_xref: _$ =>
            seq(
                '<<',
                field('url', /\w+/),
                optional(seq(',', field('title', /\w+/))),
                '>>'
            ),
        _xref: _$ =>
            seq('xref:', field('url', /\w+/), '[', field('title', /\w+/), ']'),
        emphasis: _$ => /_.+_/,
        strong: _$ => /\*.+\*/,
        monospace: _$ => /`.+`/,
        superscript: _$ => /\^.+\^/,
        subscript: _$ => /~.+~/,
        passthrough: _ => seq('pass:[', /\w+/, ']'),
        replacement: _ =>
            choice(
                '{blank}',
                '{empty}',
                '{sp}',
                '{nbsp}',
                '{zwsp}',
                '{wj}',
                '{apos}',
                '{quot}',
                '{lsquo}',
                '{rsquo}',
                '{ldquo}',
                '{rdquo}',
                '{deg}',
                '{plus}',
                '{brvbar}',
                '{vbar}',
                '{amp}',
                '{lt}',
                '{gt}',
                '{startsb}',
                '{endsb}',
                '{caret}',
                '{asterisk}',
                '{tilde}',
                '{backslash}',
                '{backtick}',
                '{two-colons}',
                '{two-semicolons}',
                '{cpp}',
                '{pp}'
            ),
    },
})
