%Manually calculating coefficients for exp(x)
x = linspace(-1,1);
f = exp(x);
r11 = (1+0.5*x)./(1-0.5*x); 
r22 = (1+0.5*x+(1/12)*(x.^2))./(1-0.5*x+(1/12)*(x.^2));
plot(x,f,'Color','blue')
hold on;
plot(x,r11,'Color','green')
hold on;
plot(x,r22,'Color','red')

%{ 
syms x
f = exp(x);
r11 = pade(f,x,'Order',[1,1]);
r22 = pade(f,x, 'Order',[2,2]);
fplot(f, [-1, 1], 'Color', 'blue', 'LineWidth', 2);
hold on;
fplot(r11, [-1, 1], 'Color', 'green', 'LineStyle', '--');
hold on;
fplot(r22, [-1, 1], 'Color', 'red', 'LineStyle', '-.');
}%


%Manually calculating coefficients for log(1+x)
x = linspace(-1,1);
f = log(1+x);
r22 = (x+0.5*(x.^2))./(1+x+(1/6)*(x.^2));
r31 = (x+0.25*(x.^2)-(1/24)*(x.^3))./(1+0.75*x);
plot(x,f, 'Color', 'blue')
hold on;
plot(x,r11, 'Color', 'red')
hold on;
plot(x,r22, 'Color', 'green')

%{
syms x
f = log(1+x);
r22 = pade(f,x,'Order',[2,2]);
r31 = pade(f,x, 'Order',[3,1]);
fplot(f, [-1, 1], 'Color', 'blue', 'LineWidth', 2);
hold on;
fplot(r11, [-1, 1], 'Color', 'green', 'LineStyle', '--');
hold on;
fplot(r22, [-1, 1], 'Color', 'red', 'LineStyle', '-.');
}%
