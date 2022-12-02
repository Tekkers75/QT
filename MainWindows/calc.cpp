/// Вычисление по задачнику.
/// https://ivtipm.github.io/Programming/Glava01/index01.htm#z11 (ж)
///@autor Саранчин К.А.
#include <cmath>
#include <iostream>

double A (double x, double y, double z)
   {
    return log(std::abs((y-sqrt(std::abs(x)))*(x-y/(z+x*x/4))));
   }

double B (double x)
{
 return x - pow(x, 2) / 6 + pow(x, 5) / 120;
}
