#include <iostream>
#include <string>

using namespace std;

int main() {
    int number = 12345;
    string numStr = to_string(number);

    // Swap the first digit with another (e.g., last digit)
    swap(numStr[0], numStr[numStr.size() - 1]);

    // Convert back to number
    int swappedNumber = stoi(numStr);

    cout << "Original number: " << number << endl;
    cout << "Swapped number: " << swappedNumber << endl;

    return 0;
}
