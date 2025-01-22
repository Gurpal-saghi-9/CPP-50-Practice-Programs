#include <iostream>
using namespace std;

void readArray(int arr[], int n, int index = 0) {
    if (index == n) return;
    cin >> arr[index];
    readArray(arr, n, index + 1);
}

void printArray(int arr[], int n, int index = 0) {
    if (index == n) return;
    cout << arr[index] << " ";
    printArray(arr, n, index + 1);
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    readArray(arr, n);

    cout << "The elements in the array are: ";
    printArray(arr, n);

    return 0;
}
