#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int cube = pow(number, 3); // Calculate cube using pow
    cout << "Cube of " << number << " is " << cube << endl;

    return 0;
}

// Output
// Enter a number: 5    
// Cube of 5 is 125

// Enter a number: 10
// Cube of 10 is 1000

