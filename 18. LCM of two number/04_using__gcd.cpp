#include <iostream>
#include <algorithm> // For __gcd
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int lcm = (num1 * num2) / __gcd(num1, num2);
    cout << "LCM: " << lcm << endl;

    return 0;
}
