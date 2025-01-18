#include <iostream>

using namespace std;

void printAlphabet(char start, char end) {
    for (char ch = start; ch <= end; ch++) {
        cout << ch << " ";
    }
}

int main() {
    cout << "Uppercase Alphabets: ";
    printAlphabet('A', 'Z');

    cout << "\nLowercase Alphabets: ";
    printAlphabet('a', 'z');

    return 0;
}
