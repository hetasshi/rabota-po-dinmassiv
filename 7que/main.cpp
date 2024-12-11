#include <iostream>
using namespace std;

void reverseAroundMiddle(int* arr, int size) {
    int mid = size / 2;

    for (int i = 0; i < mid; i++) {
        swap(arr[i], arr[mid + i + (size % 2 == 0 ? 0 : 1)]);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseAroundMiddle(arr, size);

    cout << "Массив после разворота относительно середины: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
