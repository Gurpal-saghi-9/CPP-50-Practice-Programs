#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = stoi(binary, nullptr, 2); // Convert binary string to decimal
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
