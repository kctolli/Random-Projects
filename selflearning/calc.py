from sympy import *
x, y, z = symbols('x y z')
init_printing(use_unicode=True)

print(diff(cos(x), x))

print(integrate(cos(x), x))

expr = exp(sin(x))
print(expr.series(x, 0, 4))