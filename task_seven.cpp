#include <iostream>

int main() {
    const int n = 2, m = 7; // размер матрицы
    int a[n][m]; // матрица

    // ввод матрицы
    std::cout << "Введите " << n * m << " элементов матрицы:" << std::endl;
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
          std::cin >> a[i][j];
        }
    }

    // поиск дня с максимальным количеством осадков и максимальной силой ветра
    int max_rain = -1, max_rain_day = -1, max_wind = -1, max_wind_day = -1;
        for (int j = 0; j < m; j++) {
            if (a[0][j] > max_rain) {
                max_rain = a[0][j];
                max_rain_day = j;
            }
            if (a[1][j] > max_wind) {
                max_wind = a[1][j];
                max_wind_day = j;
            }
        }

    // проверка условия на ураган
    if (max_rain_day == max_wind_day) {
        std::cout << "Ураган был." << std::endl;
        } else {
        std::cout << "Урагана не было." << std::endl;
    }

    return 0;
}