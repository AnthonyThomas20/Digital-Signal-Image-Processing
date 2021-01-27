pkg load image
a = imread('D:\Anthony\image9.jpg')
b = rgb2gray(a)
figure
subplot(1,2,1)
imshow(b)
subplot(1,2,2)
imhist(b,64)

c = histeq(b)
figure
subplot(1,2,1)
imshow(c)
subplot(1,2,2)
imhist(c,64)
