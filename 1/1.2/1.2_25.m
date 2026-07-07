syms x
hold on;
y=sin(x);
fplot(y,'w');

y1=x;
fplot(y1,'r');

y2=x-(x.^3)/6;
fplot(y2,'b');

y2=x-((x.^3)/6)+((x.^5)/120);
fplot(y2,'y');

hold off
