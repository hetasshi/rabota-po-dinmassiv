#include <iostream>
using namespace std;

int maxSubarraySum(int* arr, int size) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < size; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, size);

    cout << "Максимальная сумма подмассива: " << result << endl;

    return 0;
}
