a = imread('D:\Anthony\cameraman.jpg');
a = double(a);
a = a + 1;
b = max(max(a));
i = 4;    #change value of i to 1,2 or 4
j = b / ( 2 ^ i );
F = floor(a / (j + 1));
F1 = (F * 255)/max(max(F));
subplot(1,2,1);
imshow(uint8(a));
subplot(1,2,2);
imshow(uint8(F1));
