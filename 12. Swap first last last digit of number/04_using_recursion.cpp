#include <iostream>
#include <cmath>

int swapFirstAndLast(int number) {
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
    return lastDigit * static_cast<int>(pow(10, numDigits - 1)) + middlePart * 10 + firstDigit;
}

int main() {
    int number = 12345;
    int swappedNumber = swapFirstAndLast(number);

    std::cout << "Original number: " << number << std::endl;
    std::cout << "Swapped number: " << swappedNumber << std::endl;

    return 0;
}
