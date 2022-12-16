#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/**
 *\ brief считать количеcтво членов последовательности
 *\ param message сообщение пользователю
 *\ return количеcтво членов последовательности
 *\ exсeption invalid_argument в случае количества меньшего 0
 */
size_t getCount(const string& message = "");

/**
 *\brief считать точность вычисления суммы последовательности
 *\param message сообщение пользователю
 *\return точность вычисления членов последовательности
 *\exсeption invalid_argument в случае точности меньшего или равна 0
 */
double getEpsilion(const string& message = "");

/**
 *\ brief рассчитывает сумму последовательности
 *\ param count количеcтво членов последовательности
 *\ return сумму последовательности
 */
double getSum(const size_t count);

/**
 *\ brief рассчитывает сумму последовательности
 *\ param epsilon точность вычисления членов последовательности
 *\ return сумма последовательности
 */
double getSum(const double epsilon);


/**
 *\ brief рассчитывает реккурентный член последовательности
 *\ param k номер члена последовательности
 *\ return значение реккурентного члена последовательности
 */
double getReccurent(const size_t k);

/**
 *\ brief точка входа в программу
 *\ return 0 в случае успеха
 */
int main()
{
    try
    {
        const auto count = getCount("Введите количество членов последовательности = ");
        const auto sum = getSum(count);
        cout << setprecision(20) << "сумма" << count << " членов последовательности равна " << sum << "\n";

        const auto epsilon = getEpsilion("Введите точность вычисления = ");
        sum = getSum(epsilon);
        cout << setprecision(20) << "сумма членов последовательности с заданной точностью равна " << sum << "\n";
    }
    catch (invalid_argument const& ex)
    {
        cerr << ex.what();
        return 1;
    }

    return 0;
}

size_t getCount(const string& message)
{
    const auto THRESHOLD = 0;

    cout << message;
    auto count = THRESHOLD;
    cin >> count;

    if (count < THRESHOLD)
    {
        throw invalid_argument("число должно быть больше " + to_string(THRESHOLD));
    }

    return count;
}

double getEpsilion(const string& message)
{
    const auto THRESHOLD = 0.0;

    cout << message;
    auto epsilon = 1e-5;
    cin >> epsilon;

    if (epsilon <= THRESHOLD)
    {
        throw invalid_argument("число должно быть больше " + to_string(THRESHOLD));
    }

    return epsilon;
}

double getSum(const size_t count)
{
    auto current = 0.0;
    auto sum = current;

    for (size_t k = 0; k < count; k++)
    {
        current *= getReccurent(k);
        sum += current;
    }

    return sum;
}

double getSum(const double epsilon)
{
    auto current = 0.0;
    auto sum = current;
    size_t k = 0;

    while (abs(current) > epsilon)
    {
        current *= getReccurent(k);
        sum += current;
        k++;
    }

    return sum;
}

double getReccurent(const size_t k)
{
    return 1.0 / (4 * pow(k, 2) + 6 * k + 2);
}
