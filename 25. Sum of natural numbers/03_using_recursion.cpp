#include <iostream>
using namespace std;

// Recursive function to calculate sum
int sumOfNaturalNumbers(int n) {
    if (n == 1)
        return 1;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Sum of the first " << n << " natural numbers: " << sumOfNaturalNumbers(n) << endl;
    return 0;
}
