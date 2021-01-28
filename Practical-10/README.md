## Implementation of Histogram Processing ##

**Histogram** is the graphical representation of the intensity distribution of an image.
In simple terms, it represents the number of pixels for each intensity value considered.

Here in this practical we try to implement **Histogram Equalization**

- **Histogram equalization** is a computer image processing technique used to improve contrast in images. 
- It accomplishes this by effecively spreading out the most frequent intensity values, i.e., stretching out the intensity range of the image.
- This method usually increases the global contrast of images when its usable data is represented by close contrast values.
- This allows for areas of lower local contrast to gain a higher contrast.

A colour histogram of an image represents the number of pixels in each type of colour component.
But Histogram Equalization cannot be applied separately to the RGB components of the image as it leads to dramatic changes in the image's colour balance.

Therefore, we first convert the image to another colour space (such as Greyscale) and then perform Histogram Equalization to the luminance or value channel without resulting in changes to hue and saturation of image.
