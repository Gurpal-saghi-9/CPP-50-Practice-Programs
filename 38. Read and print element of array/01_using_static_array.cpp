#include <iostream>
using namespace std;

int main() {
    int n = 5; // Size of the array
    

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output the elements of the array
    cout << "The elements in the array are: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
