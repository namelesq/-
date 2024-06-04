#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
void inputArray(std::vector<std::vector<int>>& arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        std::vector<int> row;
        for (int j = 0; j < cols; j++) {
            int value;
            std::cin >> value;
            row.push_back(value);
        }
        arr.push_back(row);
    }
}
int main() {
    int rowsA, colsA, rowsB, colsB, rowsC, colsC;
    std::cout << "Enter number of rows and columns for array A: ";
    std::cin >> rowsA >> colsA;
    std::vector<std::vector<int>> a;
    std::cout << "Enter elements for array A: ";
    inputArray(a, rowsA, colsA);
    std::cout << "Enter number of rows and columns for array B: ";
    std::cin >> rowsB >> colsB;
    std::vector<std::vector<int>> b;
    std::cout << "Enter elements for array B: ";
    inputArray(b, rowsB, colsB);
    std::cout << "Enter number of rows and columns for array C: ";
    std::cin >> rowsC >> colsC;
    std::vector<std::vector<int>> c;
    std::cout << "Enter elements for array C: ";
    inputArray(c, rowsC, colsC);
    std::vector<int> commonValues;
    for (const auto& row : a) {
        for (int value : row) {
            if (std::find(commonValues.begin(), commonValues.end(), value) == commonValues.end() &&
                std::find(b.begin(), b.end(), value) != b.end() &&
                std::find(c.begin(), c.end(), value) != c.end()) {
                commonValues.push_back(value);
            }
        }
    }
    std::unordered_set<int> uniqueValuesSet;
    for (const auto& arr : { a, b, c }) {
        for (const auto& row : arr) {
            for (int value : row) {
                uniqueValuesSet.insert(value);
            }
        }
    }
    std::vector<int> uniqueValues(uniqueValuesSet.begin(), uniqueValuesSet.end());
    std::vector<int> commonValuesAC;
    for (const auto& rowA : a) {
        for (const auto& rowC : c) {
            for (int valueA : rowA) {
                if (std::find(rowC.begin(), rowC.end(), valueA) != rowC.end()) {
                    commonValuesAC.push_back(valueA);
                }
            }
        }
    }
    std::unordered_set<int> negativeValuesSet;
    for (const auto& arr : { a, b, c }) {
        for (const auto& row : arr) {
            for (int value : row) {
                if (value < 0) {
                    negativeValuesSet.insert(value);
                }
            }
        }
    }
    std::vector<int> negativeValues(negativeValuesSet.begin(), negativeValuesSet.end());
    std::cout << "Common values for A, B, C:";
    for (int value : commonValues) {
        std::cout << " " << value;
    }
    std::cout << std::endl;
    std::cout << "Unique values for A, B, C:";
    for (int value : uniqueValues) {
        std::cout << " " << value;
    }
    std::cout << std::endl;
    std::cout << "Common values for A and C:";
    for (int value : commonValuesAC) {
        std::cout << " " << value;
    }
    std::cout << std::endl;
    std::cout << "Negative values without repetitions:";
    for (int value : negativeValues) {
        std::cout << " " << value;
    }
    std::cout << std::endl;
    return 0;
}