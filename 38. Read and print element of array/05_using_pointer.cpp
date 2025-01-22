#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n]; // Dynamically allocate memory

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i); // Use pointer arithmetic
    }

    cout << "The elements in the array are: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " "; // Use pointer arithmetic
    }

    delete[] arr; // Free memory

    return 0;
}
