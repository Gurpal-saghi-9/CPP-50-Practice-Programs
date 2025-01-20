#include <iostream>
using namespace std;

class SumCalculator {
public:
    int calculate(int n) {
        return (n * (n + 1)) / 2;
    }
};

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    SumCalculator calculator;
    cout << "Sum of the first " << n << " natural numbers: " << calculator.calculate(n) << endl;

    return 0;
}
