#include <iostream>
using namespace std;

int hcf(int a, int b) {
    int hcf = 1;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    return hcf;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF: " << hcf(num1, num2) << endl;
    return 0;
}
