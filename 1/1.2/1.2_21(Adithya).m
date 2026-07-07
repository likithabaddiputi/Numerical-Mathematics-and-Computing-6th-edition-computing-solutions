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
