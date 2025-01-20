#include <iostream>
using namespace std;

class ArrayHandler {
public:
    void getArray(int arr[], int n) {
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void printArray(int arr[], int n) {
        cout << "Array elements are:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare an array of size 'n'

    ArrayHandler handler;
    handler.getArray(arr, n);  // Get elements from the user
    handler.printArray(arr, n);  // Print array elements

    return 0;
}
