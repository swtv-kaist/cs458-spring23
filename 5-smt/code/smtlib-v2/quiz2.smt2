(set-logic QF_UF)
(declare-sort A 0) 
(declare-sort B 0) 
(declare-sort C 0) 

(declare-const a A)
(declare-const b A)
(declare-const c A)
 
(declare-fun f (A) B) 
(declare-fun g (B A) C)

;human readable form
; a=b/\ b=c ->  g(f(a),b) = g(f(c),a) 
(assert (=> (and (= a b) (= b c))  
         (= (g ( f a) b) (g (f c) a))))
(check-sat)
(get-model)
(exit)
