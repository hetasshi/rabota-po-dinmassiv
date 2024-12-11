#include <iostream>
using namespace std;

void cyclicShift(int* arr, int size, int shift, bool toRight) {
    shift %= size;
    if (shift == 0) return;

    if (!toRight) {
        shift = size - shift;
    }

    int* temp = new int[shift];

    for (int i = 0; i < shift; i++) {
        temp[i] = arr[size - shift + i];
    }

    for (int i = size - 1; i >= shift; i--) {
        arr[i] = arr[i - shift];
    }

    for (int i = 0; i < shift; i++) {
        arr[i] = temp[i];
    }

    delete[] temp;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int shift;
    char direction;

    cout << "Введите количество позиций для сдвига: ";
    cin >> shift;
    cout << "Введите направление сдвига (R для вправо, L для влево): ";
    cin >> direction;

    bool toRight = (direction == 'R' || direction == 'r');

    cyclicShift(arr, size, shift, toRight);

    cout << "Результирующий массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
