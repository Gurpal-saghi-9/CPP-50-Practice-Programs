#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF: " << __gcd(num1, num2) << endl;
    return 0;
}
