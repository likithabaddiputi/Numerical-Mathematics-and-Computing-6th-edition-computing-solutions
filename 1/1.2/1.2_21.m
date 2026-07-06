%For exp(x)
syms x
f = exp(x);
p2 = 1 + x + (x.^2)/2;
p3 = 1 + x + (x.^2)/2 + (x.^3)/6;
p4 = 1 + x + (x.^2)/2 + (x.^3)/6 + (x.^4)/24;
p5 = 1 + x + (x.^2)/2 + (x.^3)/6 + (x.^4)/24 + (x.^5)/120;
fplot(f)
hold on;
fplot(p2)
hold on;
fplot(p3)
hold on;
fplot(p4)
hold on;
fplot(p5)
%Apply legends after plotting

%For ln(1+x)
syms x
f = log(1+x);
p2 = x - (x.^2)/2;
p3 = x - (x.^2)/2 + (x.^3)/3;
p4 = x - (x.^2)/2 + (x.^3)/3 - (x.^4)/4;
p5 = x - (x.^2)/2 + (x.^3)/3 - (x.^4)/4 + (x.^5)/5;
fplot(f)
hold on;
fplot(p2)
hold on;
fplot(p3)
hold on;
fplot(p4)
hold on;
fplot(p5)
