;From nvim-treesitter/nvim-treesitter

(title1) @text.title.1
(title2) @text.title.2
(title3) @text.title.3
(title4) @text.title.4
(title5) @text.title.5

[
  (list_item_mark)
  (table_start)
  (table_end)
]@punctuation.special

(comment) @comment
; (code) @document.code

(note) @text.note
[
  (tip)
  (important)
  (caution)
  (warning)
] @function.builtin

[
  (url)
  (xref)
  (audio)
  (video)
  (image)
] @text.uri
(emphasis) @text.emphasis
(strong) @text.strong
(footnote) @text.footnote
(highlight) @text.warning
(line_breaks) @punctuation.special
(page_breaks) @punctuation.special
(code_language) @parameter

[
  (code)
  (kbd)
  (footnote)
] @function

[
  (monospace)
  (replacement)
  (passthrough)
  (kbd_content)
  (footnote_content)
] @text.literal
