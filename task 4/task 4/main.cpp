#include <iostream>
#include <ctime>
#include <random>
using namespace std;

/**
* \brief Считывает значение числа из консоли
* \param message Побуждающее сообщение для пользователя
* \return Число
*/
size_t get_size(const string& message);

/*
*\brief Фукция которая заполняет массив случайными элементами
*\return Возвращает указатель на заполненный массив
*/
int* RandomArray(const size_t size);

/**
* \brief Метод, возвращающий заполненный пользователем массив
* \param size размер массива
* \return заполненный массив
*/
int* UserArray(size_t size);

/**
* \brief Выводит массив в консоли
* \param array Указатель на массив
*/
void PrintArray(int* array, const size_t size);

/**
* \brief Выбор варианта заполнения массива
* \param USER_INPUT Пользователь заполняет массив
* \param RANDOM_INPUT Массив заполняется случайными числами
*/
enum class userInput
{
	USER_INPUT,
	RANDOM_INPUT
};

/**
* \brief Находит минимальный элемент массива
* \param array Указатель на массив
* \param size размер массива
*/
int getMinElement(int* array, const size_t size);

/**
* \brief Решение первого задания
* \param array Указатель на массив
* \param size размер массива
*/
void First_task(int* array, const size_t size);

/**
* \brief Решение второго задания
* \param array Указатель на массив
* \param size размер массива
*/
void Second_task(int* array, const size_t size);

/**
* \brief Решение третьего задания
* \param array Указатель на массив
* \param size размер массива
*/
void Third_task(int* array, const size_t size);
int main()
{
	setlocale(LC_ALL, "Russian");
	int size = get_size("Введиите колличество элементов массива ");
	cout « "Введите число, соответствующее вашему желанию заполнения массива:\n" « "\n"
		« static_cast<int>(userInput::USER_INPUT) « " - вы заполняете массив вручную.\n"
		« static_cast<int>(userInput::RANDOM_INPUT) « " - заполняет массив случайными числами.\n\n";

	int input = 0;
	cout « "Ваше число выбора варианта заполнения массива: ";
	cin » input;
	const auto choice = static_cast<userInput>(input);
	cout « "\n";

	int* array = nullptr;

	switch (choice)
	{
	case userInput::USER_INPUT:
	{
		array = UserArray(size);
		break;
	}

	case userInput::RANDOM_INPUT:
	{
		array = RandomArray(size);
		break;
	}

	default:
	{
		cerr « "Введено неверное значение\n";
		return 1;
	}
	}

	cout « "\nМассив:\n";

	PrintArray(array, size);

	cout « "\n\nПервое задание:\n";

	First_task(array, size);

	cout « "\n\nВторое задание:\n";

	Second_task(array, size);

	cout « "\n\nТретье задание:\n";

	Third_task(array, size);

	PrintArray(array, size);
}

size_t get_size(const string& message)
{
	int size = -1;
	cout « message;
	cin » size;

	if (size < 0)
	{
		throw out_of_range("Incorrect size. Value has to be greater or equal zero.");
	}

	return static_cast<size_t>(size);
}

int* RandomArray(const size_t size)
{
	const int minValue = -20;
	const int maxValue = 40;

	//Will be used to obtain a seed for the random number engine
	std::random_device rd;

	//Standard mersenne_twister_engine seeded with rd()
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> uniformIntDistribution(minValue, maxValue);

	auto* array = new int[size];
	for (size_t index = 0; index < size; index++)
	{
		array[index] = uniformIntDistribution(gen);
	}

	return array;
}

int* UserArray(const size_t size)
{
	int* array = new int[size];
	cout « "Введите элементы массива" « "\n";
	for (size_t i = 0; i < size; i++)
	{
		cin » array[i];
	}
	return array;
}

void PrintArray(int* array, const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout « array[i] « "\t";
	}
}
int getMinElement(int* array, const size_t size)
{
	int min = array[0];
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	return min;
}

void First_task(int* array, const size_t size)
{
	int min = getMinElement(array, size);
	int t = array[(size - 1) / 2];
	array[(size - 1) / 2] = min;
	PrintArray(array, size);
	array[(size - 1) / 2] = t;
}

void Second_task(int* array, const size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		if (array[i] > array[i - 1])
		{
			cout « i « " ";
		}
	}
}

void Third_task(int* array, const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] % 3 == 0)
		{
			array[i] = array[i] * array[2];
		}
	}
}
