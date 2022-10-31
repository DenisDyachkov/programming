#include <iostream>
#include <cmath>
using namespace std;
/**
 * \brief Функция расчета для аргумента меньше, чем пороговое значение
 * \param x - Аргумент функции
 * \param a- Константа функции
 * \return Значение функции в точке \a x.
 */
double getFunction1(const double x);

/**
* \brief Функция расчета для аргумента больше или равно пороговому значению
* \param x - Аргумент функции
* \param a- Константа функции
* \return Значение функции в точке \a x.
*/
double getFunction2(const double x, const double a);

/**
 * \brief точка входа в программу
 * \return возвращает 0 в случае успеха
 */
int main()
{
    cout << "Введите значение x = ";
    double x = 0.0;
    cin >> x;

    const double THRESHOLD = 1;
    const double a = 20.3;

    if (x <= THRESHOLD)
    {
        const double y = getFunction1(x);
        cout << " y = " << y;
    }
    else
    {
        const double y = getFunction2(x, a);
        cout << " y = " << y;
    }

    return 0;
}

double getFunction2(const double x, const double a)
{
    return  sin(2) * sqrt(a * x);
}

double getFunction1(  const double x)
{
    return  log10(x + 1);
}
