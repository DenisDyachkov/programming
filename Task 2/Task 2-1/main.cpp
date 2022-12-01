#include <iostream>

using namespace std;

/**
* \brief Метод выводящий месяц
* \param NameMonth - номер месяца
*/
void GetMonth(int NameMonth);

/**
* \brief Метод выводящий день недели
* \param DayWeek - номер дня недели
*/
void GetWeek(int DayWeek);

/**
* \brief меню выбора
*/
enum class path
{
	first = 1,
	second = 2
};

/**
* \brief список месяцев
*/
enum class month
{
	January = 1,
	February = 2,
	March = 3,
	April = 4,
	May = 5,
	June = 6,
	July = 7,
	August = 8,
	September = 9,
	October = 10,
	November = 11,
	December = 12
};

/**
* \brief список дней недели
*/
enum class week
{
	Monday = 1,
	Tuesday = 2,
	Wednesday = 3,
	Thursday = 4,
	Friday = 5,
	Saturday = 6,
	Sunday = 7
};

int main() {
	setlocale(LC_ALL, "Russian");

	int value, choice;
	cout << "Выберите что вы хотите посчитать:\n1 - название Месяца\n2 - День недели\nВыбор: ";
	cin >> choice;
	const auto choosing = static_cast<path>(choice);
	switch (choosing) {
	case path::first:
	{
		cout<<"Введите номер месяца ";
		cin >> value;
		cout<<"Это ";
		GetMonth(value);
		break;
	}
	case path::second:
	{
		cout<<"Введите номер дня ";
		cin >> value;
		cout<<"Это ";
		GetWeek(value);
		break;
	}
	} return 0;
}

void GetMonth(int NameMonth) {
	const auto choosing = static_cast<month>(NameMonth);
	switch (choosing){
		case month::January:{
			cout<<"January";
			break;
		}
		case month::February:{
			cout<<"February";
			break;
		}
		case month::March:{
			cout<<"March";
			break;
		}
		case month::April:{
			cout<<"April";
			break;
		}
		case month::May:{
			cout<<"May";
			break;
		}
		case month::June:{
			cout<<"June";
			break;
		}
		case month::July:{
			cout<<"July";
			break;
		}
		case month::August:{
			cout<<"August";
			break;
		}
		case month::September:{
			cout<<"September";
			break;
		}
		case month::October:{
			cout<<"October";
			break;
		}
		case month::November:{
			cout<<"November";
			break;
		}
		case month::December:{
			cout<<"December";
			break;
		}
	}

}

void GetWeek(int DayWeek) {
	const auto choosing = static_cast<week>(DayWeek);
	
	switch (choosing){
		case week::Monday:{
			cout<<"Monday";
			break;
		}
		case week::Tuesday:{
			cout<<"Tuesday";
			break;
		}
		case week::Wednesday:{
			cout<<"Wednesday";
			break;
		}
				cout<<"Sunday";
			break;
		}
		
	}
	
}	case week::Thursday:{
			cout<<"Thursday";
			break;
		}
		case week::Friday:{
			cout<<"Friday";
			break;
		}
		case week::Saturday:{
			cout<<"Saturday";
			break;
		}
		case week::Sunday:{
