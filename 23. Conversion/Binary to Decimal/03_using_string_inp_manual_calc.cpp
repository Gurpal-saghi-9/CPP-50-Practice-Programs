#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.size();

    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }

    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    return 0;
}
