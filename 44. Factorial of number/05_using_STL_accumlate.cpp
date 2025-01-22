#include <iostream>
#include <numeric> // For std::accumulate
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        vector<int> range(n);
        iota(range.begin(), range.end(), 1); // Fill with 1, 2, ..., n
        unsigned long long factorial = accumulate(range.begin(), range.end(), 1ULL, multiplies<>());
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}
