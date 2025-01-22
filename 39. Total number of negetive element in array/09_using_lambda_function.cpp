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

    int count = count_if(arr.begin(), arr.end(), [](int x) { return x < 0; });

    cout << "Total number of negative elements: " << count << endl;

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 -2 3 -4 5
// Total number of negative elements: 2 

// In the above code, we have used a lambda function to count the number of negative elements in the array. The lambda function is passed as an argument to the count_if() function, which counts the number of elements that satisfy the given condition.

// The lambda function takes an integer x as an argument and returns true if x is less than 0, i.e., x < 0. The count_if() function counts the number of elements in the array that satisfy this condition and returns the count.

// In this case, the output is 2, as there are two negative elements in the array (-2 and -4).

// Lambda functions are useful when you need to define a small function that is used only once and does not need a separate function definition. They are especially useful when working with algorithms that take functions as arguments, such as count_if(), sort(), etc. Lambda functions provide a concise way to define functions inline without the need for a separate function definition.

// In the next section, we will see how lambda functions can capture variables from the surrounding scope.

// Capturing Variables in Lambda Functions

