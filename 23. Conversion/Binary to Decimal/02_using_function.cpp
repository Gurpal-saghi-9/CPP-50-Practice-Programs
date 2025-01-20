#include <iostream>
#include <cmath>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    return 0;
}
