#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n, int& max, int& min, int index = 0) {
    if (index == n)
        return;

    if (arr[index] > max)
        max = arr[index];
    if (arr[index] < min)
        min = arr[index];

    findMaxMin(arr, n, max, min, index + 1);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0];
    findMaxMin(arr, n, max, min);

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter the elements of the array: 5 2 7 3 1
// Maximum: 7
