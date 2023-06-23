module.exports = grammar({
    name: 'asciidoc',

    rules: {
        document: $ => repeat($._block),
        _block: $ =>
            choice(
                $.title0,
                $.title1,
                $.title2,
                $.title3,
                $.title4,
                $.title5,
                $.comment,
                $.paragraph,
                $.line_breaks,
                $.page_breaks,
                $._titled_block
            ),
        _titled_block: $ =>
            seq(
                seq(
                    optional($.block_title),
                    choice(
                        $._admonitions,
                        $.list,
                        $.image,
                        $.code,
                        $.audio,
                        $.video,
                        $.description_list,
                        $.table
                    )
                )
            ),
        block_title: _ => seq('.', /.+\n?/),
        title0: $ => seq(/= .*\n?/, repeat($.doc_attr)),
        title1: _ => /== .*\n?/,
        title2: _ => /=== .*\n?/,
        title3: _ => /==== .*\n?/,
        title4: _ => /===== .*\n?/,
        title5: _ => /====== .*\n?/,
        author_info: $ =>
            seq(
                $.name,
                optional($.name),
                optional($.name),
                optional(seq('<', $.email, '>')),
                '\n'
            ),
        name: _ => /\w+\.?/,
        email: _ => /\w+([-+.]\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*/,
        _doctype: $ =>
            seq(
                $.attr_mark,
                alias('doctype', $.attr_name),
                $.attr_mark,
                alias(
                    choice('article', 'book', 'manpage', 'inline'),
                    $.attr_value
                ),
                '\n'
            ),
        _normal_doc_attr: $ =>
            seq(
                $.attr_mark,
                $.attr_name,
                $.attr_mark,
                optional($.attr_value),
                '\n'
            ),
        doc_attr: $ => choice($._normal_doc_attr, $._doctype, $.author_info),
        attr_mark: _ => ':',
        attr_name: _ => choice(/\w+/, 'url-repo'),
        attr_value: _ => /.+/,
        // Admonitions
        _admonitions: $ =>
            choice($.note, $.tip, $.important, $.caution, $.warning),
        note: $ => choice($._note_line, $._note_block),
        _note_line: _$ => seq('NOTE: ', /.+\n?/),
        _note_block: _$ => seq('[NOTE]\n', '----\n', repeat(/.+\n/), '----\n'),
        tip: $ => choice($._tip, $._tip_block),
        _tip: _$ => seq('TIP: ', /.+\n?/),
        _tip_block: _$ => seq('[TIP]\n', '----\n', repeat(/.+\n/), '----\n'),
        important: $ => choice($._important, $._important_block),
        _important: _$ => seq('IMPORTANT: ', /.+\n?/),
        _important_block: _$ =>
            seq('[IMPORTANT]\n', '----\n', repeat(/.+\n/), '----\n'),
        caution: $ => choice($._caution, $._caution_block),
        _caution: _$ => seq('CAUTION: ', /.+\n?/),
        _caution_block: _$ =>
            seq('[CAUTION]\n', '----\n', repeat(/.+\n/), '----\n'),
        warning: $ => choice($._warning, $._warning_block),
        _warning: _$ => seq('WARNING: ', /.+\n?/),
        _warning_block: _$ =>
            seq('[WARNING]\n', '----\n', repeat(/.+\n/), '----\n'),
        // list
        list: $ => seq(repeat1($.list_item), '\n'),
        list_item: $ => seq($.list_item_mark, ' ', $.list_item_content),
        list_item_mark: $ =>
            choice(
                $._unordered_list_mark,
                $._ordered_list_mark,
                $._checklist_mark
            ),
        list_item_content: _ => /.+\n?/,
        _unordered_list_mark: _ => /[\*\-]+/,
        _ordered_list_mark: _ => choice(/\.+/, /0?\d+\./, /[\w\P{M}]\./),
        _checklist_mark: _ => /\* \[[\* x]\]/,
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
        comment: _$ => seq('// ', /.*\n?/),
        line_breaks: _ => seq(/[\-\*]{3}\n\n/),
        page_breaks: _ => seq('<<<\n\n'),
        image: $ =>
            seq(
                'image::',
                field('url', $.audio_url),
                '[',
                field('title', $.audio_title),
                ']\n'
            ),
        table: $ => seq($.table_start, optional($.table_content), $.table_end),
        table_start: _ => '|===\n',
        table_content: _ => repeat1(/.+\n?/),
        table_end: _ => '|===\n',
        description_list: _$ => seq(/\w+/, ':: ', /.+/, '\n'),
        audio: $ =>
            seq(
                'audio::',
                field('url', optional($.audio_url)),
                '[',
                field('title', optional($.audio_title)),
                ']',
                '\n'
            ),
        audio_url: _ => /[\w.]+/,
        audio_title: _ => /[\w.]+/,
        video: $ =>
            seq(
                'video::',
                field('url', optional($.audio_url)),
                '[',
                field('title', optional($.audio_title)),
                ']',
                '\n'
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
        _inline_xref: $ =>
            seq(
                '<<',
                field('url', $.xref_url),
                optional(seq(',', field('title', $.audio_title))),
                '>>'
            ),
        _xref: $ =>
            seq(
                'xref:',
                field('url', $.xref_url),
                '[',
                field('title', $.audio_title),
                ']'
            ),
        xref_url: _ => /\w+/,
        emphasis: _$ => /_.+_/,
        strong: _$ => /\*.+\*/,
        monospace: _$ => /`.+`/,
        highlight: _ => /#.+#/,
        superscript: _$ => /\^.+\^/,
        subscript: _$ => /~.+~/,
        passthrough: $ => choice($._passthrough_plus, $._passthrough_cmd),
        _passthrough_plus: $ => seq('+++', $.passthrough_content, '+++'),
        _passthrough_cmd: $ => seq('pass:[', $.passthrough_content, ']'),
        passthrough_content: _ => /\w+/,
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
