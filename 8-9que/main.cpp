#include <iostream>
#include <algorithm>
using namespace std;

bool hasEqualEvenOdd(int* arr, int size) {
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    return evenCount == oddCount;
}

int minimizeMaxAfterRemoval(int* arr, int size, int k) {
    sort(arr, arr + size);
    return arr[size - k - 1];
}

int main() {
    setlocale(LC_ALL, "Russian");

    // Проверка задания 8
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Равное количество четных и нечетных: " << (hasEqualEvenOdd(arr1, size1) ? "True" : "False") << endl;

    // Проверка задания 9
    int arr2[] = {10, 20, 30, 40, 50};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int k;
    cout << "Введите количество элементов для удаления: ";
    cin >> k;
    int result = minimizeMaxAfterRemoval(arr2, size2, k);
    cout << "Минимальный максимум после удаления: " << result << endl;

    return 0;
}
