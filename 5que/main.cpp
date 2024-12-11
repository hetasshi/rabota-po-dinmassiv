#include <iostream>
using namespace std;

void rearrangePosNeg(int* arr, int size) {
    int* temp = new int[size];
    int posIndex = 0, negIndex = 0;

    // Считаем количество положительных чисел для корректного размещения
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            temp[posIndex++] = arr[i];
        }
    }

    // Добавляем отрицательные числа после положительных
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            temp[posIndex + negIndex++] = arr[i];
        }
    }

    // Копируем элементы обратно в исходный массив
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }

    delete[] temp;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -8};
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrangePosNeg(arr, size);

    cout << "Массив после перестановки: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
