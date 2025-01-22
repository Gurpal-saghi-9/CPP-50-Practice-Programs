#include <iostream>
using namespace std;

void copyArray(int source[], int destination[], int n, int index = 0) {
    if (index == n) return; // Base case
    destination[index] = source[index];
    copyArray(source, destination, n, index + 1); // Recursive call
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int source[n], destination[n];

    cout << "Enter " << n << " elements for the source array: ";
    for (int i = 0; i < n; i++) {
        cin >> source[i];
    }

    // Copy elements using recursion
    copyArray(source, destination, n);

    // Print destination array
    cout << "Elements in the destination array: ";
    for (int i = 0; i < n; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}
