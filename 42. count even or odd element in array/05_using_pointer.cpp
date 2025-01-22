#include <iostream>
using namespace std;

int main() {
    int n, evenCount = 0, oddCount = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Even elements: " << evenCount << endl;
    cout << "Odd elements: " << oddCount << endl;

    delete[] arr; // Free allocated memory

    return 0;
}
