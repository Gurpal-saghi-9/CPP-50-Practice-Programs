#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate memory

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) {
            count++;
        }
    }

    cout << "Total number of negative elements: " << count << endl;

    delete[] arr; // Free allocated memory

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 2 -3 4 -5
// Total number of negative elements: 2

// In this program, we have used a dynamic array to store n elements. We have used new operator to allocate memory for the array. After using the array, we have freed the allocated memory using delete[] operator.    */
