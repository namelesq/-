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
		std::cout << "������� ������� ��������: ";
		std::cin >> students[i];
	}
	std::sort(students, students + 5);
	std::cout << "��������������� ������� �� �����������: \n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << students[i]<<"\n";
	}
	return 0;
}