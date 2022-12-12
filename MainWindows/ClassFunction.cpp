#include "ClassFunction.h"
#include <cmath>

Function::Function()
{

}

void Function::set_x(double x1)
{
    x=x1;
}

void Function::set_y(double y1)
{
    y=y1;
}

void Function::set_z(double z1)
{
    z=z1;
}

double Function::get_x()
{
    return x;
}

double Function::get_y()
{
    return y;
}

double Function::get_z()
{
    return z;
}

double Function::A(double x,double y,double z)
{
   return log(std::abs((y-sqrt(std::abs(x)))*(x-y/(z+x*x/4))));
}

double Function::B(double x)
{
   return x - pow(x, 2) / 6 + pow(x, 5) / 120;
}
