#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int source[n], destination[n];

    cout << "Enter " << n << " elements for the source array: ";
    for (int i = 0; i < n; i++) {
        cin >> source[i];
    }

    // Copy elements
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    // Print destination array
    cout << "Elements in the destination array: ";
    for (int i = 0; i < n; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}
