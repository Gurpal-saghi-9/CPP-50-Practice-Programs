#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false; // Divisible by a number other than 1 and itself
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}


// Output
// Enter a positive integer: 50
// Prime numbers from 1 to 50 are: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47