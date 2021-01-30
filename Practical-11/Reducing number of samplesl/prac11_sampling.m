a = imread('D:\Anthony\cameraman.jpg');
[row, col] = size(a);
i = 1;
j = 1;
for x = 1: 2: row
  for y = 1: 2: col
    c(i, j) = a(x, y);
    j = j+ 1;
  endfor
  j = 1;
  i = i + 1;
endfor
figure(1), imshow(a);
figure(2), imshow(c);
