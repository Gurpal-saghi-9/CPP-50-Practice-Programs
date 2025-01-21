#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    int *ptr = &num;

    while (*ptr != 0) {
        sum += *ptr % 10; // Add the last digit to sum
        *ptr /= 10;       // Remove the last digit
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
