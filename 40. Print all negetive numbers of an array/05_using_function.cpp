#include <iostream>
using namespace std;

void printNegative(int arr[], int n) {
    cout << "Negative numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printNegative(arr, n);

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 -2 3 -4 5
// Negative numbers in the array: -2 -4

// In the above program, we have defined a function printNegative() that takes an array and its size as arguments. The function prints all the negative numbers in the array. The main() function reads the number of elements and the elements of the array from the user and calls the printNegative() function to print the negative numbers in the array.

// The function printNegative() iterates through the array and prints the negative numbers. The main() function calls this function with the array and its size as arguments.   


