#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main()
{
    int binary, decimal = 0, base = 1, remainder;
    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0)
    {
        remainder = binary % 10;     // Get the last digit
        decimal += remainder * base; // Add to decimal value
        binary /= 10;                // Remove the last digit
        base *= 2;                   // Increase the base power of 2
    }

    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
