syms k x   

term = ((-1)^(k+1) * x^(2*k-1)) / (2*k-1);
symbolic_arctan = symsum(term, k, 1, 6);


x_num = 0.5;
numeric_result = double(subs(symbolic_arctan, x, x_num)); 

fprintf('The approximated value of arctan(%.2f) is: %.6f\n', x_num, numeric_result);
