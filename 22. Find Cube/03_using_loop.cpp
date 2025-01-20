#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int cube = 0;
    for (int i = 0; i < number; i++) {
        cube += number * number;
    }

    cout << "Cube of " << number << " is " << cube << endl;

    return 0;
}
