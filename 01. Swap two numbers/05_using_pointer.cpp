#include <iostream>
using namespace std;

void swapNumbers(int* a, int* b) {
    int temp = *a; // Store the value pointed by 'a' in 'temp'
    *a = *b;       // Assign the value pointed by 'b' to 'a'
    *b = temp;     // Assign the value stored in 'temp' to 'b'
}

int main() {
    int num1 = 10, num2 = 20;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapNumbers(&num1, &num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
