#include <iostream>
using namespace std;

int removeDuplicates(int* arr, int size) {
    if (size == 0 || size == 1) {
        return size;
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    int uniqueIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }

    return uniqueIndex + 1;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize = removeDuplicates(arr, size);
    cout << "Массив без дубликатов: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
