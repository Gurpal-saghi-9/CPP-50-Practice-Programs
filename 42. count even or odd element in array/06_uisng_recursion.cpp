#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int n, int& evenCount, int& oddCount, int index = 0) {
    if (index == n) return; // Base case

    if (arr[index] % 2 == 0) {
        evenCount++;
    } else {
        oddCount++;
    }

    countEvenOdd(arr, n, evenCount, oddCount, index + 1); // Recursive call
}

int main() {
    int n, evenCount = 0, oddCount = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countEvenOdd(arr, n, evenCount, oddCount);

    cout << "Even elements: " << evenCount << endl;
    cout << "Odd elements: " << oddCount << endl;

    return 0;
}
