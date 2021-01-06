## Represent images in Grayscale and Color ##

**Converting image to Grayscale:**

We can transform an image from RGB color space to Grayscale intensity image. The input may be of class uint8, int8, uint16, single or double. 
The output is of the same class as the input.

**Syntax:** 

> rgb2gray(img)

**Converting image to Color using colormap:**

We can transform a Grayscale image back to its color image. 
For this the grayscale image is first indexed to its RGB components. 
The **gray2ind(grayscale_image)** function is used.
This indexed image is then transformed into its colored image using a suitable **colormap** and using the **ind2rgb()** function.
If a map does not contain enough colors for the image, pixels in image outside the range are mapped to the last color in the map.

**Syntax:** 

> var1 = colormap_type

> var2 = gray2ind(grayscale_image)

> var3 = ind2rgb(var2, var1)

> imshow(var3)
