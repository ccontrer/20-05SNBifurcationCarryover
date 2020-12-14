# Carryover of a saddle-node bifurcation

The carryover of a bifurcation is a concept in which a bifurcation in a system is preserved after we transfor one parameter into a variable. In other words, consider a <img src="https://latex.codecogs.com/gif.latex?n"/>-dimentional system with two parameters

![equation](https://latex.codecogs.com/gif.latex?%5Cdot%20z%20%3D%20f%28z%3B%5Cmu_%7B1%7D%2C%5Cmu_%7B2%7D%29)

and assume that this system has a saddle-node as one of the parameters crosses the bifurcation point. Now consider transforming <img src="https://latex.codecogs.com/gif.latex?\mu_1"/>, not necesarilly the 
bifurcation parameter, into a variable to obtain an extended system

![equation](https://latex.codecogs.com/gif.latex?%5Cbegin%7Baligned%7D%20%5Cdot%20z%20%26%3D%20f%28z%2C%5Cmu_%7B1%7D%3B%20%5Cmu_%7B2%7D%29%2C%20%5C%5C%20%5Cdot%20%5Cmu_%7B1%7D%20%26%3D%20g%28%5Cmu_%7B1%7D%3B%20%5Cmu_%7B2%7D%29.%20%5Cend%7Baligned%7D)

A saddle-node bifurcation that has originated from the original saddle-node bifucation is called the carryover of the latter.

The study of a carryover can be done via a two-parameter bifurcation diagram in the original system: if the nullcline of the new equation (<img src="https://latex.codecogs.com/gif.latex?g(\mu_{1};\mu_{2})"/> intersects transversally the two-parameter bifurcation curve in the <img src="https://latex.codecogs.com/gif.latex?\mu_1\mu_2"/>-plane and the tangent line in not parallel to the <img src="https://latex.codecogs.com/gif.latex?\mu_1"/>-axis at the intersction, then the extended system has a saddle-node bifurcation at the inersection as <img src="https://latex.codecogs.com/gif.latex?\mu_2"/> varies. See more details in the [manuscript (draft)](article.pdf). For illustrative examples see the Python notebooks below.

The main idea is that a saddle-node bifurcation in a original system, such as that labeled `LP1` below,

![bifurcation-original](./notebooks/figures/ApplicationCellCycleOriginalBifurcationFull.png)

appears in the extended system, the one on the right labeled `LP1` below,

![bifurcation-original](./notebooks/figures/ApplicationCellCycleExtendedlBifurcationFull.png)

by simply using the two-parameter bifurcation diagram of the original system and the nullcline of the new equation (coloured green below).

![bifurcation-original](./notebooks/figures/ApplicationCellCycleOriginalTwoParameterBifurcationFull.png)


### Notebooks with examples and applications:

- [Toy examples](/notebooks/Carryover%20notebook.ipynb)

- [Gen activation](/notebooks/Application%20Gen%20activation.ipynb)

- [Cell cycle progression](/notebooks/Application%20Cell%20cycle.ipynb)

- [Diabetes model](/notebooks/Application%20Pathway%20to%20diabetes.ipynb)
