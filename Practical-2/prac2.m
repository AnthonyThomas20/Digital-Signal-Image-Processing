img = imread('D:\Anthony\image1.jpg');    #load the image

#convert to grayscale
A = rgb2gray(img);

#convert to colored
map = cubehelix();
B = gray2ind(A);
rgb = ind2rgb(B, map);

subplot(3, 3, 4);
imshow(img);    #display the original image

subplot(3, 3, 5);
imshow(A);    #display the grayscale image

subplot(3, 3, 6);
imshow(rgb);    #display the colored image
