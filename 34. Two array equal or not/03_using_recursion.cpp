#include <iostream>
using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int n, int index = 0) {
    if (index == n) 
        return true; // Reached the end of arrays

    if (arr1[index] != arr2[index]) 
        return false; // Arrays are not equal

    return areArraysEqual(arr1, arr2, n, index + 1); // Check next element
}

int main() {
    int n;
    cout << "Enter the number of elements in the arrays: ";
    cin >> n;

    int arr1[n], arr2[n];

    // Input elements for both arrays
    cout << "Enter elements for the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements for the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2, n)) {
        cout << "Arrays are equal." << endl;
    } else {
        cout << "Arrays are not equal." << endl;
    }

    return 0;
}
