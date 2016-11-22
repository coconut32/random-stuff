Problems and theorems in linear algebra

Techniques
T1.mathematical induction
T2.pretend variable as constant
T3.substitute and compute
T4.view the left action by a matrix as row operation
T5.work on the level of block
T6.decomposition into products (maybe by guesswork)
T7.Cauchy-Binet
T8.uniqueness, independence etc. argument
T9.modify some elements of a given matrix equation (eg.set to 0 or 1) to extract information from it

1.1 (Cramer rule) 
P1.do T1. the base step is trivial, for the induction step, use T2.
P2.do T3 to rhs.

1.7 (generalization of row operation)
P1.use T4.
P2.use T5 combined with T6.

2.2
P1.immediate by contradiction.
P2.compute to construct an explicit linear relationship.

2.3 (Cauchy-Binet)
This result does not admit a simpler proof (and since the proof uses linearity heavily, which is the core as well as basic stuff of LA) so itself will be added to the list of tools.
We prove this for the smallest non-trivial case.
the proof is at Cauchy-Binet.jpg.

2.5.1
P1.use generalized laplace expansion (2.4.1) (k-minor) to get an expression (i). apply T7 to the standard equation A*adj(A)=det(A)*I (first k row of A and first k column of adj(A)) to get an expression (ii). conclude by T8 wrt. (i)&(ii).
P2.use T5 combined with T9.
