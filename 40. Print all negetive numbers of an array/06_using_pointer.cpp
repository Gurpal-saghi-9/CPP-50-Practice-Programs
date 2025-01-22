#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    cout << "Negative numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (*(arr + i) < 0) {
            cout << *(arr + i) << " ";
        }
    }

    delete[] arr;

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 -2 3 -4 5
// Negative numbers in the array: -2 -4

// In this program, the user is asked to enter the number of elements in the array. The program then dynamically allocates memory for the array using the new keyword.

// The user is then asked to enter the elements of the array. The elements are stored in the dynamically allocated array using pointer notation.

// The program then prints the negative numbers in the array using pointer notation.

// Finally, the memory allocated for the array is deallocated using the delete[] operator.

// Note: When using dynamic memory allocation, it is important to deallocate the memory using the delete[] operator to avoid memory leaks.

// In this program, we have used pointer notation to access the elements of the dynamically allocated array. This is done by dereferencing the pointer and adding an offset to access the elements.

// *(arr + i) is equivalent to arr[i] when arr is a pointer to an array.


