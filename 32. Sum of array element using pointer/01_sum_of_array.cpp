#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    int *ptr = arr; // Pointer pointing to the first element of the array
    int sum = 0;

    // Input array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i); // Storing input using pointer
    }

    // Calculate the sum of array elements
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i); // Accessing array elements using pointer
    }

    // Display the sum
    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
