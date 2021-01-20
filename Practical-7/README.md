## Implementation of DIT-FFT ##

In 1965, Cooley and Tukey proposed a method of computing the DFT which required only NlogN calculations.
This method came to be known as the Fast Fourier Transform.
It refers to a class of algorithms for efficiently computing the DFT.
The results obtained from DFT and FFT are the same.

The commonly used technique is **Radix-2 FFT** algorithm.
There are two important properties of the Twiddle factor:
1. Symmetric property
2. Periodic property

The FFT exploits these two properties to reduce the number of complex multiplications.
The basic principle of FFT algorithm is to break(decimate) a N-point DFT into smaller DFTS.

The two commonly used algorithms are:
1. Decimation-In-Time FFT (DIT-FFT)
2. Decimation-In-Frequency FFT (DIF-FFT)

Both DIT-FFT and DIF-FFT are based on the basic principle of breaking this N-point DFT into smaller DFT blocks.
