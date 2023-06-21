#include <iostream>
#include <climits>

int main() {
    const int n = 3, m = 4; // размер матрицы
    int a[n][m]; // матрица
    int min_elem = INT_MAX, min_row = -1; // переменные для хранения минимального элемента и его строки

// ввод матрицы
    std::cout << "Введите " << n * m << " элементов матрицы:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
            if (a[i][j] < min_elem) { // если элемент меньше минимального
                min_elem = a[i][j]; // обновляем минимальный элемент
                min_row = i; // обновляем строку минимального элемента
            }
        }
    }

// вывод исходной матрицы
std::cout << "Исходная матрица:" << std::endl;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        std::cout << a[i][j] << ' ';
    }
    std::cout << std::endl;
}

// замена элементов строки минимального элемента на нули
for (int j = 0; j < m; j++) {
    a[min_row][j] = 0;
}

// вывод преобразованной матрицы
std::cout << "Новая матрица:" << std::endl;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        std::cout << a[i][j] << ' ';
    }
    std::cout << std::endl;
}

return 0;
}