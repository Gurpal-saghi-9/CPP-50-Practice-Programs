#include <iostream>
using namespace std;

void readArray(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int n) {
    cout << "The elements in the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    readArray(arr, n);
    printArray(arr, n);

    return 0;
}
