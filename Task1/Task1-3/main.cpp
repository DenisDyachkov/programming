#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
double get_power(const double power);
/**
 * \ brief Рассчитывает силу тяги
 * \ param power сила тяги
 * \ param work  значение совершенной работы
 * \ return сила тяги
 */
double get_work(const double work);
/**
 * \ brief Рассчитывает работу
 * \ param power сила тяги
 * \ param work  значение совершенной работы
 * \ return значение работы
 */
double get_distance(double power, double work);
/**
 * \ brief Рассчитывает Пройденный путь
 * \ return возвращает 0 в случае успеха
 */
int main()
{
    cout << "Введите значение силы тяги в кН = ";
    double power = 0.0;
    cin >> power;
    cout << "Введите значение совершенной работы в Мдж = ";
    double work = 0.0;
    cin >> work;

    const double distance = get_distance(power, work);

    cout << "Пройденный путь = " << distance;

    return 0;
}

double get_distance(const double power, const double work)
{
    return(work / power);
}
