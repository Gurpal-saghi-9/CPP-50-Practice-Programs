#include <iostream>
using namespace std;

int hcf(int a, int b) {
    return (b == 0) ? a : hcf(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF: " << hcf(num1, num2) << endl;
    return 0;
}
