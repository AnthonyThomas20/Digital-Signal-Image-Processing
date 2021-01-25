c = imread('D:\Anthony\image1.jpg'); 
cd = double(c);

c1 = mod(cd, 2);
c2 = mod(floor(cd/2), 2);
c3 = mod(floor(cd/4), 2);
c4 = mod(floor(cd/8), 2);
c5 = mod(floor(cd/16), 2);
c6 = mod(floor(cd/32), 2);
c7 = mod(floor(cd/64), 2);
c8 = mod(floor(cd/128), 2);

subplot(3, 3, 1);
imshow(c);  
title('Original image');

subplot(3, 3, 2);
imshow(c1); 
title('Bit plane 1'); 

subplot(3, 3, 3);
imshow(c2);
title('Bit plane 2');

subplot(3, 3, 4);
imshow(c3); 
title('Bit plane 3');

subplot(3, 3, 5);
imshow(c4);
title('Bit plane 4');

subplot(3, 3, 6);
imshow(c5);
title('Bit plane 5');

subplot(3, 3, 7);
imshow(c6); 
title('Bit plane 6');

subplot(3, 3, 8);
imshow(c7);
title('Bit plane 7');

subplot(3, 3, 9);
imshow(c8);
title('Bit plane 8');
