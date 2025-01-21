#include <iostream>
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

    bool isEqual = true;
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    // Compare elements using pointers
    for (int i = 0; i < n; i++) {
        if (*(ptr1 + i) != *(ptr2 + i)) {
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
