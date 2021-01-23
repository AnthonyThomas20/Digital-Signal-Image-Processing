I=imread('D:\Anthony\cameraman.jpg');
Z=I;
[row col]=size(Z);
T=100;
for i=1:1:row
  for j=1:1:col
    if(I(i,j)<T)
      Z(i,j)=0;
    else
      Z(i,j)=255;
    endif
  endfor
endfor
imshow([I, uint8(Z)]);
