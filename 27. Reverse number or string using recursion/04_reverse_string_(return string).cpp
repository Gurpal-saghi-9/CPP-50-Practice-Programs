#include <iostream>
using namespace std;

// Recursive function to reverse a string
string reverseString(string str) {
    if (str.length() == 0)
        return str;
    return reverseString(str.substr(1)) + str[0]; // Recursively add first character at the end
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}
