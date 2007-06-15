;; This file has been generated. (DON'T EDIT)
;; generated on Thu May 31 14:44:55 2007

(require "lex-rt")

(define lang-mzscheme
  (lambda (%%input)
    (letrec ((%%self
               (make <lex>
                     :input
                     %%input
                     :table
                     (vector
                       'line
                       (lambda (yycontinue yygetc yyungetc)
                         (lambda (yytext yyline) 'eof))
                       (lambda (yycontinue yygetc yyungetc)
                         (lambda (yytext yyline)
                           (error 'mzscheme-preprocessor
                                  "parse error ~S (line ~a)"
                                  yytext
                                  (lexer-get-line))))
                       (vector
                         #f
                         (lambda (yycontinue yygetc yyungetc)
                           (lambda (yyline) "#\\\""))
                         #t
                         (lambda (yycontinue yygetc yyungetc)
                           (lambda (yytext yyline) yytext))
                         #t
                         (lambda (yycontinue yygetc yyungetc)
                           (lambda (yytext yyline) yytext))
                         #f
                         (lambda (yycontinue yygetc yyungetc)
                           (lambda (yyline) "(mzrequire"))
                         #f
                         (lambda (yycontinue yygetc yyungetc)
                           (lambda (yyline) "(mzprovide"))
                         #t
                         (lambda (yycontinue yygetc yyungetc)
                           (lambda (yytext yyline) yytext))
                         #t
                         (lambda (yycontinue yygetc yyungetc)
                           (lambda (yytext yyline) yytext)))
                       'code
                       (lambda (<<eof>>-pre-action
                                <<error>>-pre-action
                                rules-pre-action
                                is)
                         (letrec ((user-action-<<eof>> #f)
                                  (user-action-<<error>> #f)
                                  (user-action-0 #f)
                                  (user-action-1 #f)
                                  (user-action-2 #f)
                                  (user-action-3 #f)
                                  (user-action-4 #f)
                                  (user-action-5 #f)
                                  (user-action-6 #f)
                                  (start-go-to-end
                                    (cdr (assq 'start-go-to-end is)))
                                  (end-go-to-point
                                    (cdr (assq 'end-go-to-point is)))
                                  (init-lexeme (cdr (assq 'init-lexeme is)))
                                  (get-start-line
                                    (cdr (assq 'get-start-line is)))
                                  (get-start-column
                                    (cdr (assq 'get-start-column is)))
                                  (get-start-offset
                                    (cdr (assq 'get-start-offset is)))
                                  (peek-left-context
                                    (cdr (assq 'peek-left-context is)))
                                  (peek-char (cdr (assq 'peek-char is)))
                                  (read-char (cdr (assq 'read-char is)))
                                  (get-start-end-text
                                    (cdr (assq 'get-start-end-text is)))
                                  (user-getc (cdr (assq 'user-getc is)))
                                  (user-ungetc (cdr (assq 'user-ungetc is)))
                                  (action-<<eof>>
                                    (lambda (yyline)
                                      (user-action-<<eof>> "" yyline)))
                                  (action-<<error>>
                                    (lambda (yyline)
                                      (user-action-<<error>> "" yyline)))
                                  (action-0
                                    (lambda (yyline)
                                      (start-go-to-end)
                                      (user-action-0 yyline)))
                                  (action-1
                                    (lambda (yyline)
                                      (let ((yytext (get-start-end-text)))
                                        (start-go-to-end)
                                        (user-action-1 yytext yyline))))
                                  (action-2
                                    (lambda (yyline)
                                      (let ((yytext (get-start-end-text)))
                                        (start-go-to-end)
                                        (user-action-2 yytext yyline))))
                                  (action-3
                                    (lambda (yyline)
                                      (start-go-to-end)
                                      (user-action-3 yyline)))
                                  (action-4
                                    (lambda (yyline)
                                      (start-go-to-end)
                                      (user-action-4 yyline)))
                                  (action-5
                                    (lambda (yyline)
                                      (let ((yytext (get-start-end-text)))
                                        (start-go-to-end)
                                        (user-action-5 yytext yyline))))
                                  (action-6
                                    (lambda (yyline)
                                      (let ((yytext (get-start-end-text)))
                                        (start-go-to-end)
                                        (user-action-6 yytext yyline))))
                                  (state-0
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (< c 40)
                                            (if (< c 35)
                                              (if (< c 34)
                                                (state-1 action)
                                                (state-4 action))
                                              (if (< c 36)
                                                (state-5 action)
                                                (state-1 action)))
                                            (if (< c 59)
                                              (if (< c 41)
                                                (state-2 action)
                                                (state-1 action))
                                              (if (< c 60)
                                                (state-3 action)
                                                (state-1 action))))
                                          action))))
                                  (state-1
                                    (lambda (action)
                                      (end-go-to-point)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (< c 40)
                                            (if (< c 34)
                                              (state-1 action-5)
                                              (if (< c 36)
                                                action-5
                                                (state-1 action-5)))
                                            (if (< c 59)
                                              (if (< c 41)
                                                action-5
                                                (state-1 action-5))
                                              (if (< c 60)
                                                action-5
                                                (state-1 action-5))))
                                          action-5))))
                                  (state-2
                                    (lambda (action)
                                      (end-go-to-point)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (< c 113)
                                            (if (< c 112)
                                              action-6
                                              (state-6 action-6))
                                            (if (= c 114)
                                              (state-7 action-6)
                                              action-6))
                                          action-6))))
                                  (state-3
                                    (lambda (action)
                                      (end-go-to-point)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 10)
                                            action-2
                                            (state-3 action-2))
                                          action-2))))
                                  (state-4
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (< c 35)
                                            (if (< c 34)
                                              (state-4 action)
                                              (state-9 action))
                                            (if (= c 92)
                                              (state-8 action)
                                              (state-4 action)))
                                          action))))
                                  (state-5
                                    (lambda (action)
                                      (end-go-to-point)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 92)
                                            (state-10 action-6)
                                            action-6)
                                          action-6))))
                                  (state-6
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 114)
                                            (state-11 action)
                                            action)
                                          action))))
                                  (state-7
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 101)
                                            (state-12 action)
                                            action)
                                          action))))
                                  (state-8
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 10) action (state-4 action))
                                          action))))
                                  (state-9
                                    (lambda (action)
                                      (end-go-to-point)
                                      action-1))
                                  (state-10
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 34)
                                            (state-13 action)
                                            action)
                                          action))))
                                  (state-11
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 111)
                                            (state-14 action)
                                            action)
                                          action))))
                                  (state-12
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 113)
                                            (state-15 action)
                                            action)
                                          action))))
                                  (state-13
                                    (lambda (action)
                                      (end-go-to-point)
                                      action-0))
                                  (state-14
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 118)
                                            (state-16 action)
                                            action)
                                          action))))
                                  (state-15
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 117)
                                            (state-17 action)
                                            action)
                                          action))))
                                  (state-16
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 105)
                                            (state-18 action)
                                            action)
                                          action))))
                                  (state-17
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 105)
                                            (state-19 action)
                                            action)
                                          action))))
                                  (state-18
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 100)
                                            (state-20 action)
                                            action)
                                          action))))
                                  (state-19
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 114)
                                            (state-21 action)
                                            action)
                                          action))))
                                  (state-20
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 101)
                                            (state-22 action)
                                            action)
                                          action))))
                                  (state-21
                                    (lambda (action)
                                      (let ((c (read-char)))
                                        (if c
                                          (if (= c 101)
                                            (state-23 action)
                                            action)
                                          action))))
                                  (state-22
                                    (lambda (action)
                                      (end-go-to-point)
                                      action-4))
                                  (state-23
                                    (lambda (action)
                                      (end-go-to-point)
                                      action-3))
                                  (start-automaton
                                    (lambda ()
                                      (if (peek-char)
                                        (state-0 action-<<error>>)
                                        action-<<eof>>)))
                                  (final-lexer
                                    (lambda ()
                                      (init-lexeme)
                                      (let ((yyline (get-start-line)))
                                        ((start-automaton) yyline)))))
                           (set! user-action-<<eof>>
                             (<<eof>>-pre-action
                               final-lexer
                               user-getc
                               user-ungetc))
                           (set! user-action-<<error>>
                             (<<error>>-pre-action
                               final-lexer
                               user-getc
                               user-ungetc))
                           (set! user-action-0
                             ((vector-ref rules-pre-action 1)
                              final-lexer
                              user-getc
                              user-ungetc))
                           (set! user-action-1
                             ((vector-ref rules-pre-action 3)
                              final-lexer
                              user-getc
                              user-ungetc))
                           (set! user-action-2
                             ((vector-ref rules-pre-action 5)
                              final-lexer
                              user-getc
                              user-ungetc))
                           (set! user-action-3
                             ((vector-ref rules-pre-action 7)
                              final-lexer
                              user-getc
                              user-ungetc))
                           (set! user-action-4
                             ((vector-ref rules-pre-action 9)
                              final-lexer
                              user-getc
                              user-ungetc))
                           (set! user-action-5
                             ((vector-ref rules-pre-action 11)
                              final-lexer
                              user-getc
                              user-ungetc))
                           (set! user-action-6
                             ((vector-ref rules-pre-action 13)
                              final-lexer
                              user-getc
                              user-ungetc))
                           final-lexer)))))
             (lexer-get-line #f)
             (lexer-getc #f)
             (lexer-ungetc #f))
      (set! lexer-get-line (slot-ref %%self 'line))
      (set! lexer-getc (slot-ref %%self 'line))
      (set! lexer-ungetc (slot-ref %%self 'line))
      %%self)))
