#include <iostream>

using namespace std;

int main() {
    char ch = 'A';
    cout << "Uppercase Alphabets: ";
    while (ch <= 'Z') {
        cout << ch << " ";
        ch++;
    }

    cout << "\nLowercase Alphabets: ";
    ch = 'a';
    while (ch <= 'z') {
        cout << ch << " ";
        ch++;
    }

    return 0;
}
