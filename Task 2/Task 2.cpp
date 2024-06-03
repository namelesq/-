#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <sstream>
void SearchByPhone(std::vector<std::string>&data_about_people)
{
	size_t rows = data_about_people.size();
	std::string phone;
	std::cout << "������� ����� ��������: ";
	std::cin >> phone;
	for (int i = 0; i < rows; i++)
	{
		if (data_about_people[i] == phone)
		{
			std::cout << "��� �������� ��� ������ �������: " << data_about_people[i - 1];
			break;
		}
	}
}
void SearchByName(std::vector<std::string>& data_about_people)
{
	size_t rows = data_about_people.size();
	std::string name;
	std::cout << "������� ��� ��������: ";
	std::cin >> name;
	for (int i = 0; i < rows; i++)
	{
		if (data_about_people[i] == name)
		{
			std::cout << "����� �������� ��� ������ ������: " << data_about_people[i + 1];
			break;
		}
	}
}
void ReplacingNameInArray(std::vector<std::string>& data_about_people)
{
	size_t rows = data_about_people.size();
	std::string name,new_name;
	std::cout << "���� �������� ��������� ��������� ���, �� ������� 0\n";
	while(true)
	{
		std::cout << "\n������� ��� ������� ������ ��������: ";
		std::cin >> name;
		std::cout << "\n������� ��� �� ������� ������ �������� ����������: ";
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
		std::cout << "\n�� ������ ��������� ���������, ���� ��, �� ������� 0: ";
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
	std::cout << "����� ������: \n";
	for (int i = 0; i < rows; i++)
	{
		std::cout << data_about_people[i] << "\n";
	}
}
void ReplacingPhoneInArray(std::vector<std::string>& data_about_people)
{
	size_t rows = data_about_people.size();
	std::string phone, new_phone;
	std::cout << "���� �������� ��������� ��������� �������, �� ������� 0\n";
	while (true)
	{
		std::cout << "\n������� ����� ������� ������ ��������: ";
		std::cin >> phone;
		std::cout << "\n������� ����� �� ������� ������ �������� ����������: ";
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
		std::cout << "�� ������ ��������� ���������, ���� ��, �� ������� 0: ";
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
	std::cout << "����� ������: \n";
	for (int i = 0; i < rows; i++)
	{
		std::cout << data_about_people[i] << "\n";
	}
}
void InputDataInArray(std::vector<std::string>& data_about_people)
{
	std::string name, phone;
	std::cout << "���� �������� ���������� ���� ����� ������, �� ������� 0.\n";
	while(true)
	{
		std::cout << "������� ���: ";
		std::cin >> name;
		std::cout << "������� ����� ��������: ";
		std::cin >> phone;
		data_about_people.push_back(name);
		data_about_people.push_back(phone);
		int zero;
		std::cout << "���� ������ ��������� ���������, �� ������� 0: ";
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
	std::cout << "\n����� ������:\n";
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
	std::vector<std::string> data_about_people = { "ϸ��","89990001111","�����","87771112222","�����","82221239080" };
	std::cout << "�� ������ ������ �������� �� ������ �������� ��� �� �����?\n���� �� ������, �� ������� 1\n���� �� ����� �� ������� 2.\n������� ������: ";
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
		std::cerr << "������ � ��������!";
	}
	int way_1;
	std::cout << "\n\n������ �������� ������ � �������?\n���� �� � ������ �������� ���, �� ������� 1\n���� �� � ������ �������� �����, �� ������� 2\n���� ���, �� ������� 0\n������� ��������: ";
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
		std::cout << "������. �������� ��� ���������";
	}
	int way_2;
	std::cout << "\n\n�� ������ �������� ������?\n���� ��, �� ������� 1\n���� ���, �� ������� 0\n������� ��������: ";
	std::cin >> way_2;
	if (way_2 == 1)
	{
		InputDataInArray(data_about_people);
	}
	else
	{
		std::cout << "�� ��������";
	}
	return 0;
}