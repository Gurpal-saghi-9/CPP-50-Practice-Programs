#include <iostream>
using namespace std;

// Recursive function to calculate sum of array elements
int sumArray(int arr[], int n) {
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);  // Recursive call to sum the elements
}

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

    // Call the recursive function to calculate the sum
    int sum = sumArray(arr, n);
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
