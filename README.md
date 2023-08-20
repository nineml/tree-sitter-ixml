# A tree-sitter grammar for Invisible XML

This is my attempt to craft a tree-sitter grammar for Invisible XML. My primary motivation is to get correct syntax highlighting in editors that support tree-sitter.

I know very little about [tree-sitter](https://github.com/tree-sitter/) so take everything you find in here with a grain of salt.

## Known problems

1. If the first rule in the grammar defines a nonterminal named `ixml`, the parser fails to distinguish between the rule and the version in the prolog.
2. If a `set` contains a `member` that’s a single character, the parser fails to distinguish between the character and a range.
3. A tree-sitter grammar can’t have a nonterminal that matches nothing. To address this limitation, I’ve made an `alt` consist of at least one `term` and made the `alt` optional where it occurs. I have very little confidence that this is correct.

## To be considered…

1. Which symbols in the tree-sitter grammar should be hidden?
2. Would the grammar benefit from using fields?
