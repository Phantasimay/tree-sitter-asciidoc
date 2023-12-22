module.exports = grammar({
    name: 'asciidoc',
    externals: $ => [
        $._eof,
        $.atx_h1_marker,
        $.atx_h2_marker,
        $.atx_h3_marker,
        $.atx_h4_marker,
        $.atx_h5_marker,
    ],
    extras: $ => [],

    rules: {
        document: $ => seq($.title1),
        title1: $ => seq($.atx_h1_marker, ' ', alias(/.*\n?/, $.title_content)),
        title2: $ => seq($.atx_h2_marker, ' ', alias(/.*\n?/, $.title_content)),
        title3: $ => seq($.atx_h3_marker, ' ', alias(/.*\n?/, $.title_content)),
        title4: $ => seq($.atx_h4_marker, ' ', alias(/.*\n?/, $.title_content)),
        title5: $ => seq($.atx_h5_marker, ' ', alias(/.*\n?/, $.title_content)),
    },
})
