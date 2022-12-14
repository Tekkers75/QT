#ifndef CLASSFUNCTION_H
#define CLASSFUNCTION_H
#include <stdexcept>



/// https://ivtipm.github.io/Programming/Glava01/index01.htm#z11 (ж)
/// Считает значения по формуле из задачника
class Function
{
private:
    /// Поля
    double x,y,z;

    /// Поля, хранят данные из функции
    double A;
    double B;

public:
    /// Конструктор без параметров
    Function();
    /// Сеттер
    void set_xyz(double x1,double y1,double z1);
    /// Геттеры
    double get_x() const; // добавил константы
    double get_y() const;
    double get_z() const;
    /// Методы для расчета функций
    double calc_A();
    double calc_B();
};


#endif // CLASSFUNCTION_H
