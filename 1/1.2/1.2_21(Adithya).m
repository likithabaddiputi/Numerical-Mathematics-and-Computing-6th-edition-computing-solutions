x = linspace(0,4,400); 
y = exp(x);                 
plot(x, y,'w');

hold on

y2=1+x+((x.^2)/2);
plot(x,y2,'r:');

y3=1+x+((x.^2)/2)+((x.^3)/6);
plot(x,y3,'b:');

y4=1+x+((x.^2)/2)+((x.^3)/6)+((x.^4)/24);
plot(x,y4,':');

y5=1+x+((x.^2)/2)+((x.^3)/6)+((x.^4)/24)+((x.^5)/120);
plot(x,y5,'g:');

hold off

%ln(1+x)
% Define the input variable 'a' and the exact log function 'b'
a = linspace(0, 4, 400); 
b = log(1+a);                 
plot(a, b, 'w', 'LineWidth', 2);

hold on

% 2nd Order
a2 = a - ((a.^2)/2);
plot(a, a2, 'r:');

% 3rd Order
a3 = a - ((a.^2)/2) + ((a.^3)/3);
plot(a, a3, 'b:');

% 4th Order
a4 = a - ((a.^2)/2) + ((a.^3)/3) - ((a.^4)/4);
plot(a, a4, 'm:');

% 5th Order
a5 = a - ((a.^2)/2) + ((a.^3)/3) - ((a.^4)/4) + ((a.^5)/5);
plot(a, a5, 'g:');

% Formatting the plot window
xlim([0, 4]);
ylim([-5, 5]); 
grid on;
legend('Exact \ln(1+a)', 'Order 2 (a2)', 'Order 3 (a3)', 'Order 4 (a4)', 'Order 5 (a5)', 'Location', 'southwest');

hold off
