#include <iostream>
using namespace std;

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        cout << 0;
        return;
    }
    
    int binary[32]; // Array to store binary digits
    int index = 0;

    while (decimal > 0) {
        binary[index++] = decimal % 2; // Store remainder
        decimal /= 2;
    }

    // Print binary in reverse order
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary equivalent: ";
    decimalToBinary(decimal);
    cout << endl;

    return 0;
}
