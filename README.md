# Carryover of a saddle-node bifurcation

The carryover of a bifurcation is a concept in which a bifurcation in a system is preserved after we transfor one parameter into a variable. In other words, consider a $n$-dimentional system with two parameters
$$
\dot z = f(z;\mu_{1},\mu_{2}),
$$
and assume that this system has a saddle-node as one of the parameters crosses the bifurcation point. Now consider transforming $\mu_1$, not necesarilly the bifurcation parameter, into a variable to obtain an extended system
$$
\begin{aligned}
\dot z &= f(z,\mu_{1}; \mu_{2}), \\
\dot \mu_{1} &= g(\mu_{1}; \mu_{2}).
\end{aligned}
$$
A saddle-node bifurcation that has originated from the original saddle-node bifucation is called the carryover of the latter.

The study of a carryover can be done via a two-parameter bifurcation diagram in the original system: if the nullcline of the new equation ($g(\mu_{1};\mu_{2})$ intersects transversally the two-parameter bifurcation curve in the $\mu_1\mu_2$-plane and the tangent line in not parallel to the $\mu_1$-axis at the intersction, then the extended system has a saddle-node bifurcation at the inersection as $\mu_2$ varies. See more details in the [manuscript (draft)](article.pdf). For illustrative examples see the Python notebooks below.

### Notebooks with examples and applications:

- [Toy examples](/notebooks/Carryover%20notebook.ipynb)

- [Gen activation](/notebooks/Application%20Gen%20activation.ipynb)

- [Cell cycle progression](/notebooks/Application%20Cell%20cycle.ipynb)
