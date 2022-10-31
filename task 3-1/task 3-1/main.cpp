#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
using namespace std;

/**
 * \brief Существует ли функция в точке x.
 * \param x аргумент функции.
 * \return true, если существует.
 */
bool isExists(const double x);

/**
 * \brief Расчет функции в точке x.
 * \param x аргумент функции
 * \return значение функции в точке x.
 */
double getY(const double x);

/**
 * \brief Точка входа в программу.
 * \return 0 в случае успеха
 */
int main()
{
    const double xStart = 0;
    const double xFinish = 0.8;
    const double step = 0.05;
    double x = xStart;

    cout << setw(10) << " x " << " " << " y " << "\n";

    while (x <= xFinish + step)
    {
        if (isExists(x))
        {
            const double y = getY(x);
            cout << x << " " << y;
        }
        else
        {
            cout << x << " " << " нет решения " <<"\n";
        }

        x += step;
    }
    return 0;
}

bool isExists(const double x)
{
    return abs(cos(x)) > numeric_limits<double>::min() ;
}

double getY(const double x)
{
    return tan(x) - 1.0 / 3 * pow(tan(x), 3) + 1 / 5 * pow(tan(x), 5) - 1.0 / 3;
}