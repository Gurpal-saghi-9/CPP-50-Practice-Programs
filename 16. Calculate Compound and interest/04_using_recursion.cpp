#include <iostream>
using namespace std;

double calculateAmount(double principal, double rate, int time) {
    if (time == 0) return principal;
    return calculateAmount(principal * (1 + rate / 100), rate, time - 1);
}

int main() {
    double principal, rate;
    int time;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double amount = calculateAmount(principal, rate, time);
    double compoundInterest = amount - principal;

    cout << "Compound Interest: " << compoundInterest << endl;
    cout << "Total Amount: " << amount << endl;

    return 0;
}
