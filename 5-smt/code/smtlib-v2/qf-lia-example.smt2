(set-logic QF_LIA)
(declare-const x1 Int) 
(declare-const x2 Int)
(declare-const x3 Int)
(declare-const x4 Int)
(declare-const x5 Int)
;human readable form
; x1-1 >= x2 /\ 
; x1-3 <= x2 /\ 
; x1 = 2 x3+x5 /\
; x2 = 6 x4
(assert (>= (- x1 x2) 1))
(assert (<= (- x1 x2) 3))
(assert (= x1 (+ (* 2 x3) x5)))
(assert (= x2 (* 6 x4)))
(check-sat)
(get-model)
(exit)
