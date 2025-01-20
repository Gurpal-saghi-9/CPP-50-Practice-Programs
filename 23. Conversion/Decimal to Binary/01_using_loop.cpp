#include <iostream>
#include <string>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary; // Add remainder to binary string
        decimal /= 2;
    }

    cout << "Binary equivalent: " << binary << endl;
    return 0;
}
