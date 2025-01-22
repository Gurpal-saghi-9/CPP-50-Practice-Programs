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

    // Copy elements using pointers
    int* ptrSrc = source;
    int* ptrDest = destination;

    for (int i = 0; i < n; i++) {
        *(ptrDest + i) = *(ptrSrc + i);
    }

    // Print destination array
    cout << "Elements in the destination array: ";
    for (int i = 0; i < n; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}
