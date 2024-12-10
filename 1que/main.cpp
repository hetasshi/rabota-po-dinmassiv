#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int sizeA, sizeB;

    
    cout << "Введите размер массива A: ";
    cin >> sizeA;
    cout << "Введите размер массива B: ";
    cin >> sizeB;

    
    int* A = new int[sizeA];
    int* B = new int[sizeB];

    
    cout << "Введите элементы массива A (в отсортированном порядке): ";
    for (int i = 0; i < sizeA; i++) {
        cin >> A[i];
    }

    
    cout << "Введите элементы массива B (в отсортированном порядке): ";
    for (int i = 0; i < sizeB; i++) {
        cin >> B[i];
    }

    
    int* C = new int[sizeA + sizeB];
    int i = 0, j = 0, k = 0;

    
    while (i < sizeA && j < sizeB) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        }
        else {
            C[k++] = B[j++];
        }
    }

    
    while (i < sizeA) {
        C[k++] = A[i++];
    }

    
    while (j < sizeB) {
        C[k++] = B[j++];
    }

    
    cout << "Результирующий массив C: ";
    for (int x = 0; x < sizeA + sizeB; x++) {
        cout << C[x] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
