#include <iostream>
#include <string>

int main() {
    int number = 12345;
    std::string numStr = std::to_string(number);

    // Swap the first digit with another (e.g., last digit)
    std::swap(numStr[0], numStr[numStr.size() - 1]);

    // Convert back to number
    int swappedNumber = std::stoi(numStr);

    std::cout << "Original number: " << number << std::endl;
    std::cout << "Swapped number: " << swappedNumber << std::endl;

    return 0;
}
