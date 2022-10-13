#include <iostream>
#include <cmath>
using namespace std;
/**
* \ brief Функция расчета по заданной формуле
* \ param x Первый параметр функции
* \ param y Второй параметр функции
* \ param z Третий парметр функции
* \ return Значение функции
*/
double get_A(double x, double y, double z);
/**
 * \ brief Функция расчета по заданной формуле
 * \ param x Первый параметр функции
 * \ param y Второй параметр функции
 * \ param z Третий парметр функции
 * \ return Значение функции
 */
double get_B(double x, double y, double z);
/**
* \ brief Точка входа в программу
* \ return Возвращает 0 в случае успеха
*/
int main()
{
    const auto x = 0.2;
    const auto y = 0.004;
    const auto z = 1.1;
    const auto a = get_A(x, y, z);
    const auto b = get_B(x, y, z);

    cout << "x =" << x << "y = " << y << "z = " << z << "\n";
    cout << "a =" << a << "b = " << b << endl;

    return 0;
}

double get_A(const double x, const double y, const double z)
{
    return pow(sin(x*x*x*x+2*x*x*z+y*y),3) - sqrt(x / y);
}

double get_B(const double x, const double y, const double z)
{
    return pow(x, 2) / z + cos(pow(x + y, 3));
}
