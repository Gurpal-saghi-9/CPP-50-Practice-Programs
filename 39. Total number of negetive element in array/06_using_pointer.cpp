#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
        if (*(arr + i) < 0) { // Check for negative elements
            count++;
        }
    }

    cout << "Total number of negative elements: " << count << endl;

    delete[] arr;

    return 0;
}
