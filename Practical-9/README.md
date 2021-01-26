## Implement Contrast Stretching and Bit Plane Slicing ##

**1. Contrast Stretching**

The idea behind contrast stretching is to increase the contrast of the images by making the dark portions darker and the bright portions brighter.
As the name suggests, we try to improve the contrast by stretching the intensity values of an image to fill the entire dynamic range.
The transformation function used is always linear and monotonically increasing.

Here, the lower values of the input image is mapped to 0 and the upper value is mapped to 255.
All other intermediate values are reassigned new intensity values according to the following formula:

**2. Bit Plane Slicing**

In bit plane slicing, we find out the contribution made by each bit to the final image.

An image is defined as say a 256 x 256 x 8 image. 
Here, (256 x 256) is the number of pixels present in the image and 8 is the number of bits required to represent each pixel.
Each pixel will be represented by 8 bits.
Black is represented as 00000000, White is represented as 11111111 and the remaining 254 grey levels are accomadated in between.

In bit plane slicing, we see the importance of each bit in the final image.
Here, we consider the LSB value of each pixel and plot the image using only the LSBs and continue doing this for each bit till we come to the MSB.
So, for the given defined image we will get 8 different images from LSB to MSB.
