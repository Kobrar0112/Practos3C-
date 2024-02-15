#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a, b;

    cout << "Введите количество строк массива: ";
    cin >> a;

    cout << "Введите количество столбцов массива: ";
    cin >> b;

    // Выделение памяти для двумерного массива
    double** arr = new double* [a];
    for (int i = 0; i < a; i++) {
        arr[i] = new double[b];
    }

    cout << "Введите элементы двумерного массива (" << a << "x" << b << "):" << endl;

    // Ввод элементов массива
    for (int i = 0; i < a; i++) {
        double sum = 0;
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        double ab = sum / b;
        cout << "Среднее арифметическое для строки " << i + 1 << ": " << ab << endl;
    }

   
    return 0;
}