#include <iostream>

using namespace std;

/**
* \brief ��������� ���������� �� �������.
* \param message ����������� ��������� ��� ������������.
* \return �������� ����������.
*/

double getNumber(const string& message);

enum class userInput
{
	DAY_OF_THE_WEEK,
	MONTH
};

/**
* \brief ��������� ���������� ����� ��� ������.
* \param number ���������� ����� ��� ������.
* \return �������� ��� ������.
*/

string getDay(const int number);

/**
* \brief ��������� ���������� ����� ������.
* \param number ���������� ����� ������.
* \return �������� ������.
*/

string getMonth(const int number);

/*
*\brief ����� ����� � ���������
*\return ���������� 0 � ������ ������
*/

int main()
{
	cout � "������� �����, ��������������� �������:\n"
		� static_cast<int>(userInput::DAY_OF_THE_WEEK) � " - ����������� �������� ��� ������ �� ������\n"
		� static_cast<int>(userInput::MONTH) � " - ����������� �������� ������ �� ������\n";

	int input = 0;
	cin �  input;
	const auto choice = static_cast<userInput>(input);

	switch (choice)
	{
	case userInput::DAY_OF_THE_WEEK:
	{
		const double number = getNumber("������� ����� ���: ");
		cout � number � " ���� ������" � " - " � getDay(number) � "\n";
		break;
	}

	case userInput::MONTH:
	{
		const double number = getNumber("������� ����� ������: ");
		cout � number � " �����" � " - " � getMonth(number) � "\n";
		break;
	}
	}

	return 0;
}

double getNumber(const string& message)
{
	cout � message;
	int variable = 0;
	cin � variable;
	return variable;
}

string getDay(const int number)
{
	switch (number)
	{
	case 1:
	{
		return "�����������";
		break;
	}

	case 2:
	{
		return "�������";
		break;
	}

	case 3:
	{
		return "�����";
		break;
	}

	case 4:
	{
		return "�������";
		break;
	}

	case 5:
	{
		return "�������";
		break;
	}

	case 6:
	{
		return "�������";
		break;
	}

	case 7:
	{
		return "�����������";
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
		return "������";
		break;
	}

	case 2:
	{
		return "�������";
		break;
	}

	case 3:
	{
		return "����";
		break;
	}

	case 4:
	{
		return "������";
		break;
	}

	case 5:
	{
		return "���";
		break;
	}

	case 6:
	{
		return "����";
		break;
	}

	case 7:
	{
		return "����";
		break;
	}

	case 8:
	{
		return "������";
		break;
	}

	case 9:
	{
		return "��������";
		break;
	}

	case 10:
	{
		return "�������";
		break;
	}

	case 11:
	{
		return "������";
		break;
	}

	case 12:
	{
		return "�������";
		break;
	}

	}
}
