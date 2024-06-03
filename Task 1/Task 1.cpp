#include <iostream>
#include <vector>
std::vector<std::vector<int>>ChangeTheMatrix(const std::vector<std::vector<int>>& matrix)
{
	size_t rows = matrix.size();
	size_t cols = matrix[0].size();
	std::vector<std::vector<int>> change(cols, std::vector<int>(rows));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			change[j][i] = matrix[i][j];
		}
	}
	return change;
}
int main()
{
	setlocale(LC_ALL, "RU");
	std::vector<std::vector<int>>matrix =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	std::vector<std::vector<int>>change = ChangeTheMatrix(matrix);
	std::cout << "Новая матрица: \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << change[i][j]<<" ";
		}
		std::cout << "\n";
	}
	return 0;

}