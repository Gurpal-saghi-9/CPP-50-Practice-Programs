#include <iostream>
#define CUBE(x) ((x) * (x) * (x)) // Macro to calculate cube
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Cube of " << number << " is " << CUBE(number) << endl;

    return 0;
}
