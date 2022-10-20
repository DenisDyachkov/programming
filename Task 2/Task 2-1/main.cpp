#include <iostream>

using namespace std;

/**
* \brief Считывает переменную из консоли.
* \param message Побуждающее сообщение для пользователя.
* \return Значение переменной.
*/

double getNumber(const string& message);

enum class userInput
{
	DAY_OF_THE_WEEK,
	MONTH
};

/**
* \brief Считывает порядковый номер дня недели.
* \param number Порядковый номер дня недели.
* \return Название дня недели.
*/

string getDay(const int number);

/**
* \brief Считывает порядковый номер месяца.
* \param number Порядковый номер месяца.
* \return Название месяца.
*/

string getMonth(const int number);

/*
*\brief Точка входа в программу
*\return возвращает 0 в случае успеха
*/

int main()
{
	cout « "Введите число, соответствующее заданию:\n"
		« static_cast<int>(userInput::DAY_OF_THE_WEEK) « " - Определение названия дня недели по номеру\n"
		« static_cast<int>(userInput::MONTH) « " - Определение названия месяца по номеру\n";

	int input = 0;
	cin »  input;
	const auto choice = static_cast<userInput>(input);

	switch (choice)
	{
	case userInput::DAY_OF_THE_WEEK:
	{
		const double number = getNumber("Введите номер дня: ");
		cout « number « " день недели" « " - " « getDay(number) « "\n";
		break;
	}

	case userInput::MONTH:
	{
		const double number = getNumber("Введите номер месяца: ");
		cout « number « " месяц" « " - " « getMonth(number) « "\n";
		break;
	}
	}

	return 0;
}

double getNumber(const string& message)
{
	cout « message;
	int variable = 0;
	cin » variable;
	return variable;
}

string getDay(const int number)
{
	switch (number)
	{
	case 1:
	{
		return "понедельник";
		break;
	}

	case 2:
	{
		return "вторник";
		break;
	}

	case 3:
	{
		return "среда";
		break;
	}

	case 4:
	{
		return "четверг";
		break;
	}

	case 5:
	{
		return "пятница";
		break;
	}

	case 6:
	{
		return "суббота";
		break;
	}

	case 7:
	{
		return "воскресенье";
		break;
	}
	}
}

string getMonth(const int number)
{
	switch (number)
	{
	case 1:
	{
		return "январь";
		break;
	}

	case 2:
	{
		return "февраль";
		break;
	}

	case 3:
	{
		return "март";
		break;
	}

	case 4:
	{
		return "апрель";
		break;
	}

	case 5:
	{
		return "май";
		break;
	}

	case 6:
	{
		return "июнь";
		break;
	}

	case 7:
	{
		return "июль";
		break;
	}

	case 8:
	{
		return "август";
		break;
	}

	case 9:
	{
		return "сентябрь";
		break;
	}

	case 10:
	{
		return "октябрь";
		break;
	}

	case 11:
	{
		return "ноябрь";
		break;
	}

	case 12:
	{
		return "декабрь";
		break;
	}

	}
}
