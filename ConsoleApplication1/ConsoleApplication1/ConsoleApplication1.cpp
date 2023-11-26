#include <iostream>
#include <iomanip>
using namespace std;
void swapElements(int* arr, int n) {
    for (int i = 0; i < 2*n; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void print(int* array, int n) {
    for (int i = 0; i < 2 * n; ++i) {
        cout << setw(4) << array[i] << " ";
    }
}

int main() {
    const int n = 5; 

    int array[2 * n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    cout << "Original: ";
    print(array, n);

    swapElements(array, n);

    cout << "\nNot Original: ";
    print(array, n);

    return 0;
}

