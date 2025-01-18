#include <iostream>

using namespace std;

int main() {
    char uppercase[26];
    char lowercase[26];

    for (int i = 0; i < 26; i++) {
        uppercase[i] = 'A' + i;
        lowercase[i] = 'a' + i;
    }

    cout << "Uppercase Alphabets: ";
    for (char ch : uppercase) {
        cout << ch << " ";
    }

    cout << "\nLowercase Alphabets: ";
    for (char ch : lowercase) {
        cout << ch << " ";
    }

    return 0;
}
