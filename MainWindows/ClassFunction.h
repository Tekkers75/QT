#ifndef CLASSFUNCTION_H
#define CLASSFUNCTION_H





class Function
{
private:
    double x,y,z;
public:
    Function();
    void set_x(double x1);
    void set_y(double y1);
    void set_z(double z1);
    double get_x();
    double get_y();
    double get_z();
    double A(double x,double y,double z);
    double B(double x);
};


#endif // CLASSFUNCTION_H
