(set-logic QF_UF)
(declare-sort A 0)
(declare-sort B 0)

(declare-fun f (A A) B) 
(declare-fun g (A B) B) 
(declare-fun h1 (B A) B) 
(declare-fun h2 (B B) B)

(declare-const x A)
(declare-const y B)
(declare-const w A)

;human readable form
;   g(x,y) = h1(y,x) /\ 
;   f(x,x) = h2(y,y) /\
;   f(x,x) != f(x,w)
(assert (= (g x y) (h1 y x)))
(assert (= (f x x) (h2 y y))) 
(assert (not (= (f x x) (f x w))))
(check-sat)
(get-model)
(exit)

