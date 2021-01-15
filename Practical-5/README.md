## Implementation of Correlation ##

Correlation is nothing but comparing two given signals.

There are two types:

**1. Cross Correlation**
- If two sequences are derived from two different sources then it is called Cross Correlation.

**2. Auto Correlation**
- If two sequences are derived from same source then it is called Auto Correlation.

Steps to compute Cross Correlation:
- Take sequence x(n) as it is.
- Fold y(n) w.r.t origin to get y(-n).
- Perform linear convolution using tabular method of x(n) and y(-n) 
- Result is:- r x,y (n).

Steps to compute Auto Correlation:
- Take sequence x(n) as it is.
- Fold it w.r.t origin to get x(-n).
- Perform linear convolution using tabular method of x(n) and x(-n) 
- Result is:- r x,y (n).
