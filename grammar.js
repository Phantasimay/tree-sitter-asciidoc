module.exports = grammar({
    name: "asciidoc",

    rules: {
        document: ($) => repeat($._block),
        _block: ($) => choice($._title),
        _title: ($) => choice($.title1, $.title2, $.title3, $.title4, $.title5),
        title1: ($) => seq("= ", optional(/[\w\s]+/)),
        title2: ($) => seq("== ", optional(/[\w\s]+/)),
        title3: ($) => seq("=== ", optional(/[\w\s]+/)),
        title4: ($) => seq("==== ", optional(/[\w\s]+/)),
        title5: ($) => seq("===== ", optional(/[\w\s]+/)),
    },
});
