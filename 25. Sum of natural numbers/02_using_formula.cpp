#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = (n * (n + 1)) / 2;
    cout << "Sum of the first " << n << " natural numbers: " << sum << endl;
    return 0;
}
