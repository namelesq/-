#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <sstream>
void SearchByPhone(std::vector<std::string>&data_about_people)
{
	size_t rows = data_about_people.size();
	std::string phone;
	std::cout << "Введите номер телефона: ";
	std::cin >> phone;
	for (int i = 0; i < rows; i++)
	{
		if (data_about_people[i] == phone)
		{
			std::cout << "Имя человека под данным номером: " << data_about_people[i - 1];
			break;
		}
	}
}
void SearchByName(std::vector<std::string>& data_about_people)
{
	size_t rows = data_about_people.size();
	std::string name;
	std::cout << "Введите имя человека: ";
	std::cin >> name;
	for (int i = 0; i < rows; i++)
	{
		if (data_about_people[i] == name)
		{
			std::cout << "Номер человека под данным именем: " << data_about_people[i + 1];
			break;
		}
	}
}
void ReplacingNameInArray(std::vector<std::string>& data_about_people)
{
	size_t rows = data_about_people.size();
	std::string name,new_name;
	std::cout << "Если захотите закончить изменение имён, то нажмите 0\n";
	while(true)
	{
		std::cout << "\nВведите имя которое хотите заменить: ";
		std::cin >> name;
		std::cout << "\nВведите имя на которое хотите заменить предыдущие: ";
		std::cin >> new_name;
		std::cout << "\n";
		for (int i = 0; i < rows; i++)
		{
			if (data_about_people[i] == name)
			{
				data_about_people[i] = new_name;
				break;
			}
		}
		int n;
		std::cout << "\nВы хотите закончить изменение, если да, то нажмите 0: ";
		std::cin >> n;
		if (n == 0)
		{
			break;
		}
		else
		{
			continue;
		}
		n = 0;
	}
	std::cout << "Новые данные: \n";
	for (int i = 0; i < rows; i++)
	{
		std::cout << data_about_people[i] << "\n";
	}
}
void ReplacingPhoneInArray(std::vector<std::string>& data_about_people)
{
	size_t rows = data_about_people.size();
	std::string phone, new_phone;
	std::cout << "Если захотите закончить изменение номеров, то нажмите 0\n";
	while (true)
	{
		std::cout << "\nВведите номер который хотите заменить: ";
		std::cin >> phone;
		std::cout << "\nВведите номер на который хотите заменить предыдущий: ";
		std::cin >> new_phone;
		std::cout << "\n";
		for (int i = 0; i < rows; i++)
		{
			if (data_about_people[i] == phone)
			{
				data_about_people[i] = new_phone;
				break;
			}
		}
		int n;
		std::cout << "Вы хотите закончить изменение, если да, то нажмите 0: ";
		std::cin >> n;
		if (n == 0)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	std::cout << "Новые данные: \n";
	for (int i = 0; i < rows; i++)
	{
		std::cout << data_about_people[i] << "\n";
	}
}
void InputDataInArray(std::vector<std::string>& data_about_people)
{
	std::string name, phone;
	std::cout << "Если захотите прекратить ввод новых данных, то вводите 0.\n";
	while(true)
	{
		std::cout << "Введите имя: ";
		std::cin >> name;
		std::cout << "Введите номер телефона: ";
		std::cin >> phone;
		data_about_people.push_back(name);
		data_about_people.push_back(phone);
		int zero;
		std::cout << "Если хотите закончить изменение, то нажмите 0: ";
		std::cin >> zero;
		if (zero == 0)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	size_t size = data_about_people.size();
	std::cout << "\nНовые данные:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << data_about_people[i]<<"\n";
	}
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int way;
	std::vector<std::string> data_about_people = { "Пётр","89990001111","Карим","87771112222","Вадим","82221239080" };
	std::cout << "Вы хотите искать человека по номеру телефона или по имени?\nЕсли по номеру, то нажмите 1\nЕсли по имени то введите 2.\nВведите способ: ";
	std::cin >> way;
	if (way == 1)
	{
		SearchByPhone(data_about_people);
	}
	else if (way == 2)
	{
		SearchByName(data_about_people);
	}
	else
	{
		std::cerr << "Ошибка в значении!";
	}
	int way_1;
	std::cout << "\n\nХотите изменить данные в матрице?\nЕсли да и хотите изменить имя, то нажмите 1\nЕсли да и хотите изменить номер, то нажмите 2\nЕсли нет, то нажмите 0\nВведите значение: ";
	std::cin >> way_1;
	if (way_1 == 1)
	{
		ReplacingNameInArray(data_about_people);
	}
	else if (way_1 == 2)
	{
		ReplacingPhoneInArray(data_about_people);
	}
	else
	{
		std::cout << "Хорошо. Остаемся без изменений";
	}
	int way_2;
	std::cout << "\n\nВы хотите добавить данные?\nЕсли да, то нажмите 1\nЕсли нет, то нажмите 0\nВведите значение: ";
	std::cin >> way_2;
	if (way_2 == 1)
	{
		InputDataInArray(data_about_people);
	}
	else
	{
		std::cout << "До свидания";
	}
	return 0;
}