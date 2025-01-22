#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (auto& element : arr) {
        cin >> element;
    }

    cout << "Negative numbers in the array: ";
    for (const auto& element : arr) {
        if (element < 0) {
            cout << element << " ";
        }
    }

    return 0;
}


// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 2 -3 4 -5
// Negative numbers in the array: -3 -5

// In the above program, we have used the range-based for loop to iterate over the elements of the vector. The loop iterates over each element of the vector arr and stores it in the variable element. The variable element is a reference to the elements of the vector, so any changes made to element will reflect in the vector arr.

// The first range-based for loop is used to input elements into the vector arr. The second range-based for loop is used to print the negative numbers in the vector arr. If the element is less than 0, it is printed to the console.

// The output of the program is the negative numbers in the vector arr. If the input is 1 2 -3 4 -5, the output will be -3 -5.

// In this program, we have used the const keyword to make the element variable constant. This ensures that the elements of the vector arr are not modified inside the loop. If you try to modify the element variable inside the loop, the compiler will generate an error.