#include <iostream>
#include <string>
using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary equivalent: " << decimalToBinary(decimal) << endl;
    return 0;
}
