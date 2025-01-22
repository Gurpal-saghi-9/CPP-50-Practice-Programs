#include <iostream>
using namespace std;

int countNegative(int arr[], int n) {
    if (n == 0) return 0; // Base case
    return (arr[n - 1] < 0) + countNegative(arr, n - 1); // Check last element
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

    int result = countNegative(arr, n);
    cout << "Total number of negative elements: " << result << endl;

    return 0;
}
