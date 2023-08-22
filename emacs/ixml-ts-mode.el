;;; ixml-ts-mode.el --- Major mode for iXML grammars, powered by tree-sitter -*- lexical-binding: t -*-

;; Maintainer: Norm Tovey-Walsh <ndw@nwalsh.com>
;; Homepage: https://github.com/nineml/tree-sitter-ixml
;; Version: 0.0.1
;; Keywords: ixml grammars
;; Package-Requires: ((emacs "29.1"))

;; Gleefully stolen^H^H^H^H^H^Hinspired by https://github.com/remi-gelinas/nix-ts-mode/tree/trunk

;; This program is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation, either version 3 of the License, or
;; (at your option) any later version.

;; This program is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with this program.  If not, see <http://www.gnu.org/licenses/>.

;; This file is NOT part of GNU Emacs.

;;; Commentary:

;; A major mode for editing iXML grammars, powered by the new
;; built-in tree-sitter support in Emacs 29.1.

;;; Code:
;; (unless (version< emacs-version "29.1")
;;   (error "`ixml-ts-mode` requires at least Emacs 29 for tree-sitter support"))

(require 'treesit)

(unless (treesit-available-p)
  (error "`ixml-ts-mode` requires Emacs to be built with tree-sitter support"))

(declare-function treesit-parser-create "treesit.c")

;; Other

(defgroup ixml-ts nil
  "Major mode for editing iXML grammars."
  :prefix "ixml-ts-"
  :group 'languages)

(defcustom ixml-ts-mode-indent-offset 2
  "Number of spaces for each indentation step in `ixml-ts-mode'."
  :type 'integer
  :safe 'integerp)

;; Settings
(defvar ixml-ts-mode--font-lock-settings
  (treesit-font-lock-rules
   :language 'ixml
   :feature 'error
   '((ERROR) @font-lock-warning-face)

   :language 'ixml
   :feature 'bracket
   '((osp) @font-lock-bracket-face
     (csp) @font-lock-bracket-face
     (osq) @font-lock-bracket-face
     (csq) @font-lock-bracket-face)

   :language 'ixml
   :feature 'comment
   '((comment) @font-lock-comment-face)

   :language 'ixml
   :feature 'delimiter
   '((quest) @font-lock-delimiter-face
     (termsep) @font-lock-delimiter-face
     (altep) @font-lock-delimiter-face
     (single_plus) @font-lock-misc-punctuation-face
     (double_plus) @font-lock-misc-punctuation-face)

   :language 'ixml
   :feature 'name
   '((rulename) @font-lock-constant-face
     (nonterminal) @font-lock-type-face)

   :language 'ixml
   :feature 'string
   :override t
   `((string) @font-lock-string-face
     (character) @font-lock-string-face)

   :language 'ixml
   :feature 'constant
   :override t
   `((hex) @font-lock-regexp-face))

  "Tree-sitter font-lock settings for `ixml-ts-mode'.")

;; Indentation
(defvar ixml-ts-mode-indent-rules
  (let ((offset ixml-ts-mode-indent-offset))
    `((ixml
       ((node-is ")") parent-bol 0)
       ((node-is "]") parent-bol 0)
       ((parent-is "parenthesized_expression") parent-bol ,offset)))))

;; Keymap
(defvar ixml-ts-mode-map
  (let ((map (make-sparse-keymap)))
    map)
  "Keymap for `ixml-ts-mode'.")

;; Syntax map
(defvar ixml-ts-mode--syntax-table
  (let ((table (make-syntax-table)))
    table)
  "Syntax table for `ixml-ts-mode'.")

;;;###autoload
(define-derived-mode ixml-ts-mode prog-mode "iXML"
  "Major mode for editing iXML grammars, powered by treesitter.

\\{ixml-ts-mode-map}"
  :group 'ixml
  :syntax-table ixml-ts-mode--syntax-table

  (when (treesit-ready-p 'ixml)
    (treesit-parser-create 'ixml)

    ;; Font locking
    (setq-local treesit-font-lock-settings ixml-ts-mode--font-lock-settings)

    (setq-local treesit-font-lock-feature-list
                '((comment name error)
                  (string)
                  (constant)
                  (bracket delimiter)))

    ;; Indentation
    (setq-local treesit-simple-indent-rules ixml-ts-mode-indent-rules)

    (treesit-major-mode-setup)))

(provide 'ixml-ts-mode)
;;; ixml-ts-mode.el ends here

;; Local Variables:
;; indent-tabs-mode: nil
;; End:
