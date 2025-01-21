#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (; num != 0; num /= 10) {
        sum += num % 10; // Add the last digit to sum
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
