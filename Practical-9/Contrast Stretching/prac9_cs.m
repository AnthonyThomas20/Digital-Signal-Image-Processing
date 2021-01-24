img = imread('D:\Anthony\image5.jpg'); 
a = min(img(:));            
b = max(img(:));
cs_img = (img - a) * ( 255 / (b - a));
imshow([img, cs_img]);
