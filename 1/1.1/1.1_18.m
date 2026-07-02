%1.1.18.a
syms x
f = (tan(x))^2;
taylor(f,x,0,'Order',12)
% Output: (1382*x^10)/14175 + (62*x^8)/315 + (17*x^6)/45 + (2*x^4)/3 + x^2

%1.1.18.b
syms x
f = (cos(x))^(-4);
int(f,x)
%Output: (sin(x) + 2*cos(x)^2*sin(x))/(3*cos(x)^3)

%1.1.18.c
syms x
f = log(abs(log(x)));
int(f,x,0,1)
%output: -eulergamma

%1.1.18.d
nextprime(27448)
%output: 27449

%1.1.18.e
syms x
f =@(x) sqrt(1+(sin(x)).^3);
integral(f,0,1)
%output: 1.0827

%1.1.18.f
syms y(x)
ode = diff(y,x) + y == (1 + exp(x))^(-1);
y_sol = dsolve(ode);
disp(y_sol)
%output: exp(-x)*log(exp(x) + 1) + C1*exp(-x)

%1.1.18.g
x_val = 40545.0;
y_val = 70226.0;

fprintf('%-10s | %-30s | %-30s\n', 'Precision', 'Direct Formula Result', 'Factored Formula Result');
fprintf('-----------------------------------------------------------------------------\n');

for p = 6:24
    digits(p);
    
    sym_x = vpa(x_val);
    sym_y = vpa(y_val);
    
    res_direct = 9.0*sym_x^4 - sym_y^4 + 2.0*sym_y^2 - 1.0;
    res_factored = (3.0*sym_x^2 - sym_y^2 + 1.0) * (3.0*sym_x^2 + sym_y^2 - 1.0);
    
    fprintf('%-10d | %-30s | %-30s\n', p, char(res_direct), char(res_factored));
end
%output: 
