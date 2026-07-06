%a
x = linspace(-1,1);
f = exp(x);
r11 = (1+0.5*x)./(1-0.5*x);
r22 = (1+0.5*x+(1/12)*(x.^2))./(1-0.5*x+(1/12)*(x.^2));
plot(x,f,'Color','blue')
hold on;
plot(x,r11,'Color','green')
hold on;
plot(x,r22,'Color','red')

%b
x = linspace(-1,1);
f = log(1+x);
r22 = (x+0.5*(x.^2))./(1+x+(1/6)*(x.^2));
r31 = (x+0.25*(x.^2)-(1/24)*(x.^3))./(1+0.75*x);
plot(x,f, 'Color', 'blue')
hold on;
plot(x,r11, 'Color', 'red')
hold on;
plot(x,r22, 'Color', 'green')
