#include "ClassFunction.h"
#include <cmath>

Function::Function()
{

}

void Function::set_xyz(double x1,double y1, double z1)
{
    if ((x1 || z1) == 0 ) throw std::invalid_argument("x or z != 0");
    x=x1;
    y=y1;
    z=z1;
}

double Function::get_x() const
{
    return x;
}

double Function::get_y() const
{
    return y;
}

double Function::get_z() const
{
    return z;
}

double Function::calc_A()
{
   A = log(std::abs((y-sqrt(std::abs(x)))*(x-y/(z+x*x/4))));
   return A;

}

double Function::calc_B()
{
   return x - pow(x, 2) / 6 + pow(x, 5) / 120;
}
