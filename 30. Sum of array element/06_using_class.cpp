#include <iostream>
using namespace std;

class ArraySum {
public:
    int calculateSum(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

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

    // Create an object of the class and calculate the sum
    ArraySum obj;
    int sum = obj.calculateSum(arr, n);
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
