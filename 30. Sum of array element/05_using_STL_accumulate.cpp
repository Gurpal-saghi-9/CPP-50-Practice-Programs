#include <iostream>
#include <numeric>  // For accumulate
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

    // Calculate the sum using accumulate function from STL
    int sum = accumulate(arr, arr + n, 0);  // Sum all elements in the array
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
