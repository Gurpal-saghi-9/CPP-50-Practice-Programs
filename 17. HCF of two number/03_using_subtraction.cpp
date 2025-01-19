#include <iostream>
using namespace std;

int hcf(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF: " << hcf(num1, num2) << endl;
    return 0;
}
