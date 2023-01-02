(benchmark example222
:logic QF_LIA
:extrafuns ((x1 Int) (x2 Int) (x3 Int) (x4 Int) (x5 Int))
;human readable form
; x1-1 => x2 /\ 
; x1-3 <= x2 /\ 
; x1 = 2 x3+x5 /\
; x3 = x5   /\
; x2 = 6 x4
:formula (and (>= (- x1 x2) 1) (<= (- x1 x2) 3) (= x1 (+ (* 2 x3) x5)) (= x3 x5) (= x2 (* 6 x4))))  
