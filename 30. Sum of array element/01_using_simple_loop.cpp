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

    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}


// Output:-
// Enter the number of elements in the array: 5
// Enter 5 elements: 10 20 30 40 50
// Sum of array elements: 150
