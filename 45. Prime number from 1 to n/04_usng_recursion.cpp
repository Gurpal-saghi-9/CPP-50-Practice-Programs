#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeRecursive(int num, int divisor = 2) {
    if (num <= 1) return false;
    if (divisor > sqrt(num)) return true; // Base case
    if (num % divisor == 0) return false;
    return isPrimeRecursive(num, divisor + 1); // Recursive call
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (isPrimeRecursive(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
