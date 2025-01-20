#include <iostream>
using namespace std;

// Recursive function to reverse a string
void reverseString(string& str, int index = 0) {
    int n = str.length();
    if (index >= n / 2)
        return;

    swap(str[index], str[n - index - 1]); // Swap characters at index and n-1-index
    reverseString(str, index + 1); // Recursive call to reverse the string
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
