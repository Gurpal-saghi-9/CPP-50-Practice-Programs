#include <iostream>
using namespace std;

void decimalToBinary(int decimal) {
    if (decimal == 0)
        return;
    decimalToBinary(decimal / 2); // Recursive call
    cout << decimal % 2;          // Print remainder
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary equivalent: ";
    if (decimal == 0) {
        cout << 0;
    } else {
        decimalToBinary(decimal);
    }
    cout << endl;

    return 0;
}
