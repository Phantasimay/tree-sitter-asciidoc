;From nvim-treesitter/nvim-treesitter

(title) @text.title
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
