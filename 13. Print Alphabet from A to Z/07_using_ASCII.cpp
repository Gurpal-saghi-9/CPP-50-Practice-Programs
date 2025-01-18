#include <iostream>

using namespace std;

int main() {
    cout << "Uppercase Alphabets: ";
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << " ";
    }

    cout << "\nLowercase Alphabets: ";
    for (int i = 97; i <= 122; i++) {
        cout << char(i) << " ";
    }

    return 0;
}
