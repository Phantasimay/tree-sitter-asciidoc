module.exports = grammar({
    name: 'asciidoc',
    externals: $ => [$.eof],

    rules: {
        source_file: $ => 'hello',
    },
})
