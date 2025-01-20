#include <iostream>
using namespace std;

// Function to get array elements
void getArray(int arr[], int n) {
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function to print array elements
void printArray(int arr[], int n) {
    cout << "Array elements are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare an array of size 'n'

    getArray(arr, n);  // Get elements from the user
    printArray(arr, n);  // Print array elements

    return 0;
}
