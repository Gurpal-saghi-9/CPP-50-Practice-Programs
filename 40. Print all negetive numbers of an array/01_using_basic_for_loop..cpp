#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Negative numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 -2 3 -4 5
// Negative numbers in the array: -2 -4

// In this program, the user is asked to enter the number of elements in the array. The elements are then stored in an array. The program then finds and prints the negative numbers in the array using a for loop.

// The for loop iterates over the elements of the array and checks if the element is less than 0. If the element is less than 0, it is printed to the console.  
// The output of the program is the negative numbers in the array. If there are no negative numbers, the program will not print anything.


