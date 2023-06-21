#include <iostream>
#include <cmath>
using namespace std;

const int n = 3, m = 4; // размеры матрицы

void print_matrix(int a[n][m]) { // функция вывода матрицы на экран
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

double matrix_norm(int a[n][m]) { // вычисление нормы матрицы
    double norm = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            norm += a[i][j] * a[i][j];
        }
    }
    return sqrt(norm); // возвращаем квадратный корень из суммы квадратов элементов
}

double row_norm(int a[n][m]) { // вычисление построчной нормы
    double max_sum = -1;
    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j < m; j++) {
            sum += abs(a[i][j]); // суммируем абсолютные значения элементов в строке
        }
        if (sum > max_sum) {
            max_sum = sum; // обновляем максимальную сумму
        }
    }
return max_sum;
}

double col_norm(int a[n][m]) { // вычисление постолбцовой нормы
    double max_sum = -1;
    for (int j = 0; j < m; j++) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += abs(a[i][j]); // суммируем абсолютные значения элементов в столбце
        }
        if (sum > max_sum) {
            max_sum = sum; // обновляем максимальную сумму
        }
    }
return max_sum;
}

int main() {
    int a[n][m] = {{6, 8, 1, 4}, {4, 0, 8, 3}, {2, 5, 7, 9}};

    print_matrix(a);
    cout << "Матричная норма: " << matrix_norm(a) << endl;
    cout << "Построчная норма матрицы: " << row_norm(a) << endl;
    cout << "Постолбцевая норма матрицы: " << col_norm(a) << endl;

return 0;
}