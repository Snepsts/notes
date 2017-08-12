;;; list, improper list, dotted pair
;;; cons (cons 1 2) (1 . 2)
;;; cons car cdr (cons 1 '()) (1)
;;; (1 2 3 . 4) (1 2 3 4)

(define len (lambda (L)
	(cond ((null? L)	0)
		(#t	(+ 1 (len (cdr L))))
	)
)

(define len2 (lambda (L)
	(cond ((null? L)	0) ;if L is empty return 0
		((not (pair? L)) ;if L is not a pair do nothing
		(#t	(+ 1 (len2 (cdr L))))) ;every other case
	)
)

(define (last L)
	(cond ((null? L)	L) ;if list is empty, return it
		((null? (cdr L)) (car L)) ;if second part is empty return first part
		(#t	(last (cdr L))) ;every other case
	)
)

(define (last2 L)
	(cond ((null? L)	L) ;if L is empty return it
		(not (pair? L)	L) ;if not a pair return L
		((null? (cdr L)) (car L)) ;if second part is empty return first part
		(#t	(last2 (cdr L))) ;every other case
	)
)

(define (allbutlast L)
	(cond ((null? L) L) ;if L is empty return it
		((null? (cdr L) '())) ;if second part of L is empty return empty list
		(#t (cons (car L) (allbutlast (cdr L)))) ;every other case
	)
)

;;box
(define (makebox (cons 'box '())) ('box))

(define (setbox B x) (set-cdr! B x))

(define (getBox B) (cdr B))

(define (box? B) ;;add an empty? to the box function
	(cond ((not (pair? B)) #f)
		(#t	(eq? (car B) 'box))
	)
)

;;;(define C (makebox))
;;; ...
;;;(setBox C 1)
;;; ...
;;;(getBox C)
;;;(box? C)
;;;
;;;set-cdr!
;;;set-car!

;;; f,g
;;; fog(x) = f(g(x))
(define comp (lambda (f g)) ;wrong way
	(lambda (x)(f (g x)))
)

(define (comp2 f g) ;correct way
	(lambda (x)(f (g x)))
)

(define (flatten L)
	(cond ((null? L)       '()) ;--> (cons L '())
		  ((not (pair? L)) (list L))
		  (#t (append (flatten (car L))
		              (flatten (cdr L))
			  )
		  )
	)
)

(define (append L1 L2)
	(cond ((null? L1) L2)
	      (#t (cons (car L1) (append (cdr L1) L2)))
	)
)
