# A tree-sitter grammar for Invisible XML

This is an attempt to craft a tree-sitter grammar for Invisible XML. The primary motivation is to get correct syntax highlighting in editors that support tree-sitter.

I know very little about [tree-sitter](https://github.com/tree-sitter/) so take everything you find in here with a grain of salt.

## Deviations from iXML

The constraints of a tree-sitter grammar differ from the constraints of iXML. Some things that are easy in iXML are difficult or impossible in tree-sitter grammars.

Consequently, this grammar isn’t “the same” as iXML, though it’s expected to be close enough for useful syntax directed highlighting.

This grammar differs from iXML in the following ways.

1. A tree-sitter grammar can’t have a nonterminal that matches nothing. To address this limitation, an `alt` has been defined so that it must contain at least one `term`. In the places where `alt` appears, it has been made optional.

2. The definition of a `set` in iXML includes both `string` and `range` and `range` begins with `character`. A `string` containing a single character and a `character` are indistinguishable. This leads to confusion about what `["L"]` means (it’s either a string or a broken range). To work around this problem, the tree-sitter grammar defines `set` a little differently.

## Open questions

1. Which symbols in the tree-sitter grammar should be hidden?
2. Would the grammar benefit from using fields?

## Known problems

See the [issues list](https://github.com/nineml/tree-sitter-ixml/issues).

