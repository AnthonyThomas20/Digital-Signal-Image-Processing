x = [1 2 3 1]
h = [1 2 1 -1]

#linear convolution function
clin = conv(x, h);

#Plotting x(n)
subplot(3,1,1);
stem(x, 'filled');
title('Graph of x(n)');

#Plotting h(n)
subplot(3,1,2);
stem(h, 'filled');
title('Graph of h(n)');

#Plotting convolution of x(n) and h(n)
subplot(3,1,3);
stem(clin, 'filled');
ylim([-10 10])
title('Linear convolution of x(n) and h(n)');
