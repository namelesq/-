#include <iostream>
#include <algorithm>
#include <string>
#include <Windows.h>
int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string students[5];
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Введите фамилию студента: ";
		std::cin >> students[i];
	}
	std::sort(students, students + 5);
	std::cout << "Отсортированные фамилии по возрастанию: \n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << students[i]<<"\n";
	}
	return 0;
}