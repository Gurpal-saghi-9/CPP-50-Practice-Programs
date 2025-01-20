#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare array of size 'n'

    // Get array elements from the user
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the sum using range-based for loop
    int sum = 0;
    for (int elem : arr) {
        sum += elem;
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
