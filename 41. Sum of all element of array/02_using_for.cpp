#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add each element to the sum
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}


// Enter the number of elements: 5
// Enter 5 elements: 1 2 3 4 5
// Sum of all elements: 15

// This program calculates the sum of all elements in an array using a for loop.
// 1. The program starts by including the <iostream> header for input/output operations.
// 2. The main() function begins by declaring two integer variables: 'n' to store the number of elements and 'sum' initialized to 0 to store the sum of the elements.
// 3. The user is prompted to enter the number of elements, which is then stored in 'n'.
// 4. An array 'arr' of size 'n' is declared to hold the elements.
// 5. The user is prompted to enter 'n' elements, which are stored in the array 'arr'.
// 6. A for loop iterates over each element of the array:
//    - Each element is read from the user and stored in the array.
//    - The value of each element is added to 'sum'.
// 7. After the loop, the sum of all elements is printed to the console.
// 8. The program returns 0, indicating successful execution.

// Example:
// If the user enters 5 elements: 1, 2, 3, 4, 5
// The program will compute the sum as follows:
// sum = 0 + 1 + 2 + 3 + 4 + 5 = 15
// The output will be: "Sum of all elements: 15"