#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Negative numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 -2 3 -4 5
// Negative numbers in the array: -2 -4

// In this program, we have used the vector class from the STL library to store the elements of the array. We have used the vector<int> arr(n) to create a vector of size n. We have used the [] operator to access the elements of the vector.

// The program reads n elements from the user and stores them in the vector. It then prints the negative numbers in the array. We have used the if statement to check if the element is negative. If it is, we print it.

// The vector class provides many useful functions to work with arrays. You can use the push_back() function to add elements to the array, the pop_back() function to remove elements from the array, and the size() function to get the size of the array. You can also use iterators to traverse the array.

