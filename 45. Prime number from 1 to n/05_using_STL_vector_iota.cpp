#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void printPrimes(int n) {
    vector<int> numbers(n + 1);
    iota(numbers.begin(), numbers.end(), 0); // Fill with 0, 1, ..., n

    numbers[0] = numbers[1] = 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (numbers[i] != 0) {
            for (int j = i * i; j <= n; j += i) {
                numbers[j] = 0; // Mark multiples as non-prime
            }
        }
    }

    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int num : numbers) {
        if (num != 0) {
            cout << num << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    printPrimes(n);

    return 0;
}
