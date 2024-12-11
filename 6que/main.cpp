#include <iostream>
using namespace std;

int longestEqualSequence(int* arr, int size) {
    int maxLength = 1, currentLength = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        } else {
            currentLength = 1;
        }
    }

    return maxLength;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = longestEqualSequence(arr, size);

    cout << "Длина самой длинной последовательности одинаковых элементов: " << result << endl;

    return 0;
}
