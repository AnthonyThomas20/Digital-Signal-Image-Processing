## Implementation of Circular Convolution ##

Circular convolution, also known as cyclic convolution, is a special case of periodic convolution, which is the convolution of two periodic functions that have the same period.

The circular convolution of two sequences x1(n) and x2(n) is given by:  

**yc(n) = x1(n) * x2(n)**

We have used the matrix method here to compute circular convolution.

For this, we generate a circular matrix for x2(n) and then multiply it with x1(n). The result is yc(n).
