#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum of the first " << n << " natural numbers: " << sum << endl;
    return 0;
}
