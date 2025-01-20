#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int cube = number * number * number; // Calculate cube
    cout << "Cube of " << number << " is " << cube << endl;

    return 0;
}
