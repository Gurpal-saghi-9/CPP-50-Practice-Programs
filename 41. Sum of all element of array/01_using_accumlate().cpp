#include <iostream>
#include <numeric> // For std::accumulate
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = accumulate(arr, arr + n, 0); // Sum all elements starting with 0

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}

// Enter the number of elements: 5
// Enter 5 elements: 1 2 3 4 5
// Sum of all elements: 15

// Enter the number of elements: 3
// Enter 3 elements: 10 20 30
// Sum of all elements: 60

// This program calculates the sum of all elements in an array using the accumulate() function from the <numeric> header.
// 1. The program starts by including the necessary headers: <iostream> for input/output and <numeric> for accumulate().
// 2. The main() function begins by declaring an integer variable 'n' to store the number of elements in the array.
// 3. The user is prompted to enter the number of elements, which is then stored in 'n'.
// 4. An array 'arr' of size 'n' is declared to hold the elements.
// 5. The user is prompted to enter 'n' elements, which are stored in the array 'arr'.
// 6. The accumulate() function is used to calculate the sum of all elements in the array. It takes three arguments:
//    - The first argument is the starting iterator (pointer to the first element of the array).
//    - The second argument is the ending iterator (pointer to one past the last element of the array).
//    - The third argument is the initial value for the sum, which is 0 in this case.
// 7. The result of accumulate() is stored in the variable 'sum'.
// 8. The sum of all elements is printed to the console.
// 9. The program returns 0, indicating successful execution.