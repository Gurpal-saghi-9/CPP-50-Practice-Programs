#include <iostream>
using namespace std;

int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int lcm = (num1 * num2) / hcf(num1, num2);
    cout << "LCM: " << lcm << endl;

    return 0;
}
