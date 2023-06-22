module.exports = grammar({
    name: 'asciidoc',

    rules: {
        document: $ => repeat($._block),
        _block: $ =>
            choice(
                $.title1,
                $.title2,
                $.title3,
                $.title4,
                $.title5,
                $._admonitions,
                $.list,
                $.code,
                $.comment,
                $.image,
                $.table,
                $.description_list,
                $.audio,
                $.video,
                $.paragraph,
                $.line_breaks,
                $.page_breaks
            ),
        title1: _ => /= .*\n?/,
        title2: _ => /== .*\n?/,
        title3: _ => /=== .*\n?/,
        title4: _ => /==== .*\n?/,
        title5: _ => /===== .*\n?/,
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
        list: $ => seq(repeat1($.list_item), '\n'),
        list_item: $ => seq($.list_item_mark, ' ', $.list_item_content),
        list_item_mark: _ => /[\*\-\.]/,
        list_item_content: _ => /.+\n?/,
        code: $ =>
            seq(
                /\[,\s?/,
                field('language', $.code_language),
                ']\n',
                '----\n',
                field('content', optional($.code_content)),
                '----\n'
            ),
        code_language: _ => /\w+/,
        code_content: _ => repeat1(/.+\n/),
        comment: _$ => seq('// ', /.*/),
        line_breaks: _ => seq(/[\-\*]{3}\n\n/),
        page_breaks: _ => seq('<<<\n\n'),
        image: _$ =>
            seq(
                'image::',
                field('url', /[\w./:]*/),
                '[',
                field('title', /[\w.]*/),
                ']\n'
            ),
        table: $ => seq($.table_start, optional($.table_content), $.table_end),
        table_start: _ => '|===\n',
        table_content: _ => repeat1(/.+\n?/),
        table_end: _ => '|===\n',
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
        paragraph: $ => seq(repeat1($._inline_element), '\n\n'),
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
                $.highlight,
                /\w+/
            ),
        kbd: $ => seq('kbd:[', optional($.kbd_content), ']'),
        kbd_content: _ => /\w+(\+\w+)?/,
        footnote: $ => seq('footnote:[', optional($.footnote_content), ']'),
        footnote_content: $ => /[\w._]+/,
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
        highlight: _ => /#.+#/,
        superscript: _$ => /\^.+\^/,
        subscript: _$ => /~.+~/,
        passthrough: $ => choice($._passthrough_plus, $._passthrough_cmd),
        _passthrough_plus: _ => seq('+++', /.+/, '+++'),
        _passthrough_cmd: _ => seq('pass:[', /\w+/, ']'),
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
