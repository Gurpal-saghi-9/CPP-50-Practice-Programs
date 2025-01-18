#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> alphabets;

    // Fill vector with uppercase letters
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        alphabets.push_back(ch);
    }

    cout << "Uppercase Alphabets: ";
    for (char ch : alphabets) {
        cout << ch << " ";
    }

    // Clear and refill vector with lowercase letters
    alphabets.clear();
    for (char ch = 'a'; ch <= 'z'; ch++) {
        alphabets.push_back(ch);
    }

    cout << "\nLowercase Alphabets: ";
    for (char ch : alphabets) {
        cout << ch << " ";
    }

    return 0;
}
