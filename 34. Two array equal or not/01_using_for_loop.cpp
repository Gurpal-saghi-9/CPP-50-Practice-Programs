#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the arrays: ";
    cin >> n;

    int arr1[n], arr2[n];

    // Input elements for the first array
    cout << "Enter elements for the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Input elements for the second array
    cout << "Enter elements for the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    bool isEqual = true;
    // Compare each element of the arrays
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            isEqual = false;
            break;
        }
    }

    if (isEqual)
        cout << "Arrays are equal." << endl;
    else
        cout << "Arrays are not equal." << endl;

    return 0;
}
