#include <iostream>
using namespace std;

int hcf(int a, int b) {
    return (b == 0) ? a : hcf(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "LCM: " << lcm(num1, num2) << endl;

    return 0;
}
