#include <iostream>

struct Pixel { // структура для хранения пикселя
    int red; // значение красного канала
    int green; // значение зеленого канала
    int blue; // значение синего канала
};

int main() {
    const int n = 3, m = 4; // размеры матрицы
    Pixel image[n][m]; // матрица изображения

    // ввод значений пикселей
    std::cout << "Введите " << n * m << " элементов матрицы:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << "Пиксель (" << i << ", " << j << "):" << std::endl;
            std::cout << " Значение красного: ";
            std::cin >> image[i][j].red;
            std::cout << " Значение зеленого: ";
            std::cin >> image[i][j].green;
            std::cout << " Значение синего: ";
            std::cin >> image[i][j].blue;
        }
    }

    // вывод матрицы изображения
    std::cout << "Матрица изображения:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << " (" << image[i][j].red << "," << image[i][j].green << "," << image[i][j].blue << ")";
        }
        std::cout << std::endl;
    }

    return 0;
}