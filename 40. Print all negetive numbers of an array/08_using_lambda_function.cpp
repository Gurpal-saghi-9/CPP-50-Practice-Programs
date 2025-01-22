#include <iostream>
#include <vector>
#include <algorithm>
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
    for_each(arr.begin(), arr.end(), [](int x) {
        if (x < 0) {
            cout << x << " ";
        }
    });

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 -2 3 -4 5
// Negative numbers in the array: -2 -4

// In the above code, we have used a lambda function to print all the negative numbers in the array. The lambda function is passed as an argument to the for_each() function. The lambda function checks if the number is less than 0 and prints it if it is negative. The output of the above code is the negative numbers in the array.

// In this way, lambda functions can be used to perform operations on elements of a container or perform other tasks that require a function. Lambda functions are useful when we need a function for a short duration and do not want to define a separate function for it. They provide a concise way to define functions inline.

// Lambda functions can capture variables from the enclosing scope, which makes them more flexible and powerful. We will discuss capturing variables in lambda functions in the next section.

