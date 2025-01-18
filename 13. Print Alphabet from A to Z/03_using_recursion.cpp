#include <iostream>

using namespace std;

void printAlphabets(char ch, char end) {
    if (ch > end) return;
    cout << ch << " ";
    printAlphabets(ch + 1, end);
}

int main() {
    cout << "Uppercase Alphabets: ";
    printAlphabets('A', 'Z');

    cout << "\nLowercase Alphabets: ";
    printAlphabets('a', 'z');

    return 0;
}
