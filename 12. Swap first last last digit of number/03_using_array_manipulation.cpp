#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int number = 12345;
    vector<int> digits;

    // Extract digits
    int temp = number;
    while (temp > 0) {
        digits.push_back(temp % 10);
        temp /= 10;
    }
    reverse(digits.begin(), digits.end());

    // Swap the first and last digits
    swap(digits[0], digits[digits.size() - 1]);

    // Reconstruct the number
    int swappedNumber = 0;
    for (int digit : digits) {
        swappedNumber = swappedNumber * 10 + digit;
    }

    cout << "Original number: " << number << endl;
    cout << "Swapped number: " << swappedNumber << endl;

    return 0;
}
