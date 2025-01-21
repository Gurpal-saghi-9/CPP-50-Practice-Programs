#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* ptr = arr;
    int max = *ptr, min = *ptr;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > max)
            max = *(ptr + i);
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter the elements of the array: 1 2 3 4 5
// Maximum: 5
// Minimum: 1