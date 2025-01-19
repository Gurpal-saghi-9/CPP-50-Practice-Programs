#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time, amount, compoundInterest;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    cout << "Compound Interest: " << compoundInterest << endl;
    cout << "Total Amount: " << amount << endl;

    return 0;
}
