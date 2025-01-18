#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number = 12345;
    int temp = number, numDigits = 0;

    // Find the number of digits
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    // Extract first and last digits
    int firstDigit = number / static_cast<int>(pow(10, numDigits - 1));
    int lastDigit = number % 10;

    // Remove first digit and last digit
    int middlePart = (number % static_cast<int>(pow(10, numDigits - 1))) / 10;

    // Reconstruct the number
    int swappedNumber = lastDigit * static_cast<int>(pow(10, numDigits - 1)) + middlePart * 10 + firstDigit;

    cout << "Original number: " << number << endl;
    cout << "Swapped number: " << swappedNumber << endl;

    return 0;
}
