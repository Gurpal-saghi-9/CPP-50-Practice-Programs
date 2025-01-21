#include <iostream>
using namespace std;

int sumOfElements(int arr[], int n, int index = 0) {
    if (index == n) {
        return 0;
    }
    return arr[index] + sumOfElements(arr, n, index + 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input elements for the array
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate sum using recursion
    int sum = sumOfElements(arr, n);

    // Calculate average
    double average = static_cast<double>(sum) / n;

    cout << "Average of the elements: " << average << endl;

    return 0;
}
