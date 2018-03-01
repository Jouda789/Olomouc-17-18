(define x 4)
(define y 3)
(define z 2)

(cond ((= y 4) (* y z))
      ((= y 2) (* x y))
      ((= z 4) (+ x y z))
      (else (* z x)))