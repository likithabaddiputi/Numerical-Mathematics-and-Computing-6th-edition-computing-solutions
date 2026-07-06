syms x
f = besselj(0, 2*x);
r22 = pade(f,x,'Order',[2,2]);
r43 = pade(f,x,'Order',[4,3]);
r24 = pade(f,x,'Order',[2,4]);
fplot(f, [-1, 1], 'Color', 'blue', 'LineWidth', 2);
hold on;
fplot(r22, [-1, 1], 'Color', 'green', 'LineStyle', '--');
hold on;
fplot(r43, [-1, 1], 'Color', 'red', 'LineStyle', '-.');
hold on;
fplot(r24, [-1, 1], 'Color', 'yellow', 'LineStyle', '-.');
