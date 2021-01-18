## Implementation of 4-point DFT ##

In mathematics, the Discrete Fourier Transform (DFT) converts a finite sequence of equally-spaced samples of a function 
into a same length sequence of equally-spaced samples of the Discrete Time Fourier Transform (DTFT), which is a complex-valued function of frequency.
The interval at which the DFT is sampled is the reciprocal of the duration of the input sequence.

An inverse DFT is a Fourier series using the DTFT samples as coefficients of complex sinusoids at the corresponding DTFT frequencies. 
It has the same sample values as the original input sequence.
The DFT is therefore said to be a frequency domain representation of the original input sequence.

Discrete Time Fourier Transform (DTFT) is used when the signal is discrete in time and is periodic. It is given by the below formula:

![1_TcgKj8TvXTW9XhH2P8HRiw](https://user-images.githubusercontent.com/54772502/104909696-4020b900-59ae-11eb-8c26-2a4d5b9941aa.png)

Here, x(n) is the discrete time signal and X(w) are the frequency components present in the signal.

For computation of DTFT we implement the matrix method. The matrix is denoted by Wn (called as twiddle factor). 
The given sequence x(n) is multiplied with this matrix to obtain its DTFT.
