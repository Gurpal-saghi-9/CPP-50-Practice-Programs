#include <iostream>

using namespace std;

int main() {
    cout << "Uppercase Alphabets: ";
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
    }

    cout << "\nLowercase Alphabets: ";
    for (char ch = 'a'; ch <= 'z'; ch++) {
        cout << ch << " ";
    }

    return 0;
}
