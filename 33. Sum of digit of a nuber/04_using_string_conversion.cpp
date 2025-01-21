#include <iostream>
#include <string>
using namespace std;

int main() {
    string numStr;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> numStr;

    for (char digit : numStr) {
        sum += digit - '0'; // Convert character to integer and add to sum
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
