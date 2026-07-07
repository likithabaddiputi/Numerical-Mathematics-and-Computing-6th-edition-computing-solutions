syms x
hold on;
y=sin(x);
fplot(y);

y1=x;
fplot(y1);

y2=x-(x.^3)/6;
fplot(y2);

hold off
