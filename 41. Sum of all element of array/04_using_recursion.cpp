#include <iostream>
using namespace std;

int calculateSum(int arr[], int n) {
    if (n == 0) return 0; // Base case
    return arr[n - 1] + calculateSum(arr, n - 1); // Add last element
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = calculateSum(arr, n);
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
