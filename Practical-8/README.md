## Implement Image Negative, Grey Level Slicing and Thresholding ##

**1. Image Negative**

As the name suggests, image negative simply means inverting the grey levels,i.e., black in the original image will now look white and vice versa.
Image negatives are useful in a lot of applications such as X-ray images.

Image negative can be obtained by using a simple transformation given by:

**s(x, y) = (L - 1) - r(x, y)** where:

> r(x, y) is the input image

> s(x, y) is the image negative of r(x, y)

> L is the grey level of the image

For an 8-bit image, number of grey levels is L = 256

So, the image negative of an 8-bit image would be **s(x, y) = 255 - r(x, y)**


**2. Grey Level Slicing and Thresholding**

Many times we obtain low contrast images due to poor illuminations or due to wrong setting of the lens aperture.
So, we use a method called contrast stretching to increase the contrast of the images by making the dark portions darker and bright portions brighter.
Extreme contrast stretching yields **Thresholding**.
Thresholding splits the grey level of an image into two parts, i.e., black and white.

Sometimes we need to highlight a specific range of grey values like for example, enhancing a particular section of an X-ray image.
For this, we use a transformation known as grey level slicing.

It consists of two types:
- Without background
- With background
