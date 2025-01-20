#include <iostream>
using namespace std;

// Function to check if a number is even or odd
string checkEvenOdd(int num) {
    if (num % 2 == 0)
        return "Even";
    else
        return "Odd";
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Call the function and display the result
    cout << "The number " << number << " is " << checkEvenOdd(number) << "." << endl;

    return 0;
}
