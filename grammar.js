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
        title: $ => /=+ .*\n?/,
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
                /\[,\s?/,
                field('language', $.code_language),
                ']\n',
                '----\n',
                field('content', repeat($.code_content)),
                /----\n?/
            ),
        code_language: $ => /\w+/,
        code_content: $ => /.+\n/,
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
        xref: $ => choice($._inline_xref, $._xref),
        _inline_xref: $ =>
            seq(
                '<<',
                field('url', /\w+/),
                optional(seq(',', field('title', /\w+/))),
                '>>'
            ),
        _xref: $ =>
            seq(
                'xref:',
                field('url', /\w+/),
                '[',
                field('title', /\w+/),
                ']',
                '\n'
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
                $.replacement,
                $.passthrough,
                /\w+/
            ),
        emphasis: $ => /_.+_/,
        strong: $ => /\*.+\*/,
        monospace: $ => /`.+`/,
        superscript: $ => /\^.+\^/,
        subscript: $ => /~.+~/,
        passthrough: $ => seq('pass:[', /\w+/, ']'),
        replacement: $ =>
            choice(
                $._blank,
                $._empty,
                $._sp,
                $._nbsp,
                $._zwsp,
                $._wj,
                $._apos,
                $._quot,
                $._lsquo,
                $._rsquo,
                $._ldquo,
                $._rdquo,
                $._deg,
                $._plus,
                $._brvbar,
                $._vbar,
                $._amp,
                $._lt,
                $._gt,
                $._startsb,
                $._endsb,
                $._caret,
                $._asterisk,
                $._tilde,
                $._backslash,
                $._backtick,
                $._two_colons,
                $._two_semicolons,
                $._cpp,
                $._pp
            ),
        _blank: _ => '{blank}',
        _empty: _ => '{empty}',
        _sp: _ => '{sp}',
        _nbsp: _ => '{nbsp}',
        _zwsp: _ => '{zwsp}',
        _wj: _ => '{wj}',
        _apos: _ => '{apos}',
        _quot: _ => '{quot}',
        _lsquo: _ => '{lsquo}',
        _rsquo: _ => '{rsquo}',
        _ldquo: _ => '{ldquo}',
        _rdquo: _ => '{rdquo}',
        _deg: _ => '{deg}',
        _plus: _ => '{plus}',
        _brvbar: _ => '{brvbar}',
        _vbar: _ => '{vbar}',
        _amp: _ => '{amp}',
        _lt: _ => '{lt}',
        _gt: _ => '{gt}',
        _startsb: _ => '{startsb}',
        _endsb: _ => '{endsb}',
        _caret: _ => '{caret}',
        _asterisk: _ => '{asterisk}',
        _tilde: _ => '{tilde}',
        _backslash: _ => '{backslash}',
        _backtick: _ => '{backtick}',
        _two_colons: _ => '{two-colons}',
        _two_semicolons: _ => '{two-semicolons}',
        _cpp: _ => '{cpp}',
        _pp: _ => '{pp}',
    },
})
