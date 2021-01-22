I=imread('D:\Anthony\cameraman.jpg');
Z=double(I);
[row col]=size(Z);
for i=1:1:row
  for j=1:1:col
    if((Z(i,j)>50)&&(Z(i,j)<150))
      Z(i,j)=255;
    else
      Z(i,j)=I;
    endif
  endfor
endfor
imshow([I, uint8(Z)]);
