#define USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

/**
* \brief Считывает переменную из консоли.
* \param message Побуждающее сообщение для пользователя.
* \return Значение переменной.
*/

double getvariable(const string& message);

/**
*\brief Функция, суммирующая два числа.
*\param x Первое число.
*\param y Второе число.
*\return Значение функции.
*/

double getSum(const double x, const double y);

/**
*\brief Функция вычитающая одно число из другого.
*\param x Первое число.
*\param y Второе число.
*/

double difference(const double x, const double y);

/**
*\brief Функция, умножающая одно число на другое.
*\param a Первое число.
*\param b Второе число.
*/

double composition(const double a, const double b);

/**
*\brief Функция делящая одно число на другое.
*\param x Первое число.
*\param y Второе число.
*/

double quotient(const double x, const double y);

/**
*\brief Точка входа в программу.
*\return Возвращает 0 в случае успеха.
*/

enum class userInput
{
sum,
difference,
composition,
quotient

};

int main()
{
double x = getvariable("Введите значение перменной x: ");
double y = getvariable("Введите значение перменной y: ");
cout « "Введите число, соответствующее заданию:\n"
« static_cast<int>(userInput::sum) « " - Вычисляет сумму чисел x и y.\n"
« static_cast<int>(userInput::difference) « " - Вычисляет разность чисел x и y.\n"
« static_cast<int>(userInput::composition) « " - Вычисляет произведение чисел x и y.\n"
« static_cast<int>(userInput::quotient) « " - Вычисляет частное чисел x и y.\n";

int input = 0;
cin » input;
const auto choice = static_cast<userInput>(input);
cout « "\n";

switch(choice)
{
case userInput::sum:
{
const double t = getSum(x, y);
cout « "Сумма равна = " « t « endl;
break;
}

case userInput::difference:
{
const double t = difference(a, b);
cout « "Разность x - y = " « t « endl;
cout « "Разность y - x = " « (-1)*t « endl;
break;
}
case userInput::composition:
{
const double t = composition(x, y);
cout « "Произведение x и y = " « t « endl;
break;
}
case userInput::quotient:
{
const double t = quotient(x, y);
cout « "Частное x и y = " « t « endl;
break;
}
}
return 0;
}

double getvariable(const string& message)
{
cout « message;
double variable = 0.0;
cin » variable;
return variable;
}

double getSum(const double x, const double y)
{
return x + y;
}

double difference(const double x, const double y)
{
return x - y;
}

double composition(const double x, const double y)
{
return x * y;
}

double quotient(const double x, const double y)
{
return x / y;
}
