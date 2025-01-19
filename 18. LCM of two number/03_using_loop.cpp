#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int maxNum = max(a, b);
    while (true) {
        if (maxNum % a == 0 && maxNum % b == 0)
            return maxNum;
        maxNum++;
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "LCM: " << lcm(num1, num2) << endl;

    return 0;
}
