#include <iostream>
using namespace std;

// Recursive function to print Fibonacci series
void printFibonacci(int n, int a = 0, int b = 1) {
    if (n == 0)
        return;

    cout << a << " ";
    printFibonacci(n - 1, b, a + b);  // Recursive call with updated values
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    printFibonacci(n);
    cout << endl;
    return 0;
}
