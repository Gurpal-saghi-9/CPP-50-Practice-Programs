#include <iostream>
#include <string>
using namespace std;

// Recursive function to reverse a number (convert to string first)
string reverseNumber(int num) {
    if (num == 0)
        return "";
    return to_string(num % 10) + reverseNumber(num / 10); // Add last digit to result
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number: " << reverseNumber(num) << endl;
    return 0;
}
