#include <iostream>
using namespace std;

void printNegative(int arr[], int n, int index = 0) {
    if (index == n) return; // Base case
    if (arr[index] < 0) {
        cout << arr[index] << " ";
    }
    printNegative(arr, n, index + 1); // Recursive call
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

    cout << "Negative numbers in the array: ";
    printNegative(arr, n);

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 -2 3 -4 5
// Negative numbers in the array: -2 -4

// In the above code, we have a function printNegative that prints all the negative numbers in the array. The function takes three arguments, the array arr, the number of elements n, and the index of the array. The index is set to 0 by default.

// The function first checks if the index is equal to n, which is the base case. If the index is equal to n, the function returns. Otherwise, it checks if the element at the current index is negative. If it is negative, it prints the element.

// Finally, the function makes a recursive call to printNegative with the updated index (index + 1). This process continues until the base case is reached.

// The main function reads the number of elements and the elements of the array from the user. It then calls the printNegative function to print the negative numbers in the array.

// The output of the program is the negative numbers in the array. In this case, the output is -2 -4.

