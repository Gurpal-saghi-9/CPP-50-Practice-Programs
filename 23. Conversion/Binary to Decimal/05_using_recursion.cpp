#include <iostream>
#include <cmath>
using namespace std;

// Recursive function to convert binary to decimal
int binaryToDecimal(int binary, int power = 0) {
    if (binary == 0)
        return 0;
    return (binary % 10) * pow(2, power) + binaryToDecimal(binary / 10, power + 1);
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    return 0;
}
