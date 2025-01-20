#include <iostream>
using namespace std;

// Function to calculate sum
int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Sum of the first " << n << " natural numbers: " << calculateSum(n) << endl;
    return 0;
}
