#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
double get_angle(const double angle);
/**
 * \ brief Рассчитывает радуис шара
 * \ param radius радиус шара
 * \ param angle  значение угла
 * \ return радуис шара
 */
double get_volume(double radius, double angle);
/**
 * \ brief Рассчитывает объем конуса
 * \ param radius радиус шара
 * \ param angle  значение угла
 * \ return объем конуса
 */
double get_surface(double radius, double angle);
/**
 * \ brief Рассчитывает поверхность конуса
 * \ return возвращает 0 в случае успеха
 */
int main()
{
    cout << "Введите значение радуиса = ";
    double radius = 0.0;
    cin >> radius;
    cout << " Введите значение угла а в градусах = ";
    double angle = 0.0;
    cin >> angle;

    const double angle_in_radian = get_angle(angle);
    const double volume = get_volume(radius, angle);
    const double surface = get_surface(radius, angle);

    cout << "Объем конуса= " << volume <<
        " Полная поверхность конуса = " << surface;

    return 0;
}

double get_angle(const double angle)
{
    return(angle * (M_PI / 180));
}
double get_volume(const double radius, const double angle)
{
    return (M_PI * (pow(radius, 3)) / 3);
}
double get_surface(const double radius, const double angle)
{
    return (M_PI * radius * (radius + sqrt(2) * radius));
}
