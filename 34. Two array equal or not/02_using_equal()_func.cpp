#include <iostream>
#include <algorithm>
using namespace std;

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

    // Check if arrays are equal
    if (equal(arr1, arr1 + n, arr2)) {
        cout << "Arrays are equal." << endl;
    } else {
        cout << "Arrays are not equal." << endl;
    }

    return 0;
}
