## Implementation of Linear Convolution ##

Convolution is a mathematical operation used to express the relation between input and output of a LTI (Linear Time Invariant) system.
It relates input, output and impulse response of a LTI system as:

**y(n) = x(n) * h(n)** where:

- x(n) = input of LTI
- h(n) = impulse response of LTI
- y(n) = output of LTI

**Convolution in Octave:**

*Syntax:* conv(a, b) **OR** conv(a, b, shape) 

The optional shape argument may be:

- shape = "full" : Return full convolution (Default value)
- shape = "same" : Return central part of convolution with same size as "a"
