#include <iostream>
using namespace std;

// Function to calculate cube
int findCube(int num) {
    return num * num * num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Cube of " << number << " is " << findCube(number) << endl;

    return 0;
}
    
    // Output 
    // Enter a number: 5
    // Cube of 5 is 125