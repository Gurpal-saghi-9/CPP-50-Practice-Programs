#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate memory

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

    delete[] arr; // Free allocated memory

    return 0;
}


// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 -2 3 -4 5
// Negative numbers in the array: -2 -4

// In this program, the user is asked to enter the number of elements in the array. The memory is dynamically allocated using the new operator. The user is then asked to enter the elements of the array. The program then prints the negative numbers in the array. Finally, the memory allocated is freed using the delete[] operator.

// The delete[] operator is used to free the memory allocated using the new operator. It is used with square brackets [] to indicate that the memory being freed is an array. If you use the delete operator without square brackets to free memory allocated for an array, it will lead to undefined behavior.


