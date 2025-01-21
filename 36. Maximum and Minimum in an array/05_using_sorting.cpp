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

    sort(arr, arr + n);

    cout << "Maximum: " << arr[n - 1] << endl;
    cout << "Minimum: " << arr[0] << endl;

    return 0;
}
