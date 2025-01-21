#include <iostream>
#include <algorithm>
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

    auto result = minmax_element(arr, arr + n);

    cout << "Maximum: " << *result.second << endl;
    cout << "Minimum: " << *result.first << endl;

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter the elements of the array: 5 2 7 1 9
// Maximum: 9

