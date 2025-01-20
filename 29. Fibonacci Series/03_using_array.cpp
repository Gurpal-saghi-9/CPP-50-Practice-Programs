#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int arr[n];  // Array to store Fibonacci numbers
    arr[0] = 0;
    arr[1] = 1;

    cout << "Fibonacci Series: " << arr[0] << " " << arr[1] << " ";

    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];  // Calculate Fibonacci numbers
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
