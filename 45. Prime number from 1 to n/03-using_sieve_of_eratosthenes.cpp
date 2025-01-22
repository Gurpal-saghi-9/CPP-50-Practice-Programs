// This approach is efficient for finding all primes up to a large number n.

#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    sieveOfEratosthenes(n);

    return 0;
}
