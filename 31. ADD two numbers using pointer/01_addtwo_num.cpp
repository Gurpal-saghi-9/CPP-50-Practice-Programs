#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Pointers pointing to the variables
    ptr1 = &num1;
    ptr2 = &num2;

    // Adding the values using pointers
    sum = *ptr1 + *ptr2;

    // Display the result
    cout << "The sum of " << *ptr1 << " and " << *ptr2 << " is: " << sum << endl;

    return 0;
}
