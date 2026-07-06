digits(50)
syms k;
x_val=vpa('0.5');
term=((-1).^(k-1)*(x_val^k))/k;
y=vpa(symsum(term,k,1,50));
exactval=log(vpa(1+x_val));

fprintf('Taylor Approximation (50 terms):\n%s\n\n', char(y));
fprintf('Exact MATLAB log(1.5):\n%s\n', char(exactval));


%with x^0.5
digits(50)
syms k;
x_val=vpa('0.5');
term=((-1).^(k-1)*(x_val^(k/2)))/k;
z=vpa(symsum(term,k,1,50));
exact_val=log(vpa(1+x_val^0.5));

fprintf('Taylor Approximation root (50 terms):\n%s\n\n', char(z));
fprintf('Exact MATLAB root:\n%s\n', char(exact_val));
