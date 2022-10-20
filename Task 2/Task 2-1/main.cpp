#include <iostream>

using namespace std;

/**
* \brief —читывает переменную из консоли.
* \param message ѕобуждающее сообщение дл€ пользовател€.
* \return «начение переменной.
*/

double getNumber(const string& message);

enum class userInput
{
	DAY_OF_THE_WEEK,
	MONTH
};

/**
* \brief —читывает пор€дковый номер дн€ недели.
* \param number ѕор€дковый номер дн€ недели.
* \return Ќазвание дн€ недели.
*/

string getDay(const int number);

/**
* \brief —читывает пор€дковый номер мес€ца.
* \param number ѕор€дковый номер мес€ца.
* \return Ќазвание мес€ца.
*/

string getMonth(const int number);

/*
*\brief “очка входа в программу
*\return возвращает 0 в случае успеха
*/

int main()
{
	cout Ђ "¬ведите число, соответствующее заданию:\n"
		Ђ static_cast<int>(userInput::DAY_OF_THE_WEEK) Ђ " - ќпределение названи€ дн€ недели по номеру\n"
		Ђ static_cast<int>(userInput::MONTH) Ђ " - ќпределение названи€ мес€ца по номеру\n";

	int input = 0;
	cin ї  input;
	const auto choice = static_cast<userInput>(input);

	switch (choice)
	{
	case userInput::DAY_OF_THE_WEEK:
	{
		const double number = getNumber("¬ведите номер дн€: ");
		cout Ђ number Ђ " день недели" Ђ " - " Ђ getDay(number) Ђ "\n";
		break;
	}

	case userInput::MONTH:
	{
		const double number = getNumber("¬ведите номер мес€ца: ");
		cout Ђ number Ђ " мес€ц" Ђ " - " Ђ getMonth(number) Ђ "\n";
		break;
	}
	}

	return 0;
}

double getNumber(const string& message)
{
	cout Ђ message;
	int variable = 0;
	cin ї variable;
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
		return "п€тница";
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
		return "€нварь";
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
		return "сент€брь";
		break;
	}

	case 10:
	{
		return "окт€брь";
		break;
	}

	case 11:
	{
		return "но€брь";
		break;
	}

	case 12:
	{
		return "декабрь";
		break;
	}

	}
}
