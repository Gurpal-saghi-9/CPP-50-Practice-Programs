#include <iostream>
#include <cmath>
using namespace std;

double calculateCompoundInterest(double principal, double rate, double time) {
    return principal * pow((1 + rate / 100), time) - principal;
}

int main() {
    double principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double compoundInterest = calculateCompoundInterest(principal, rate, time);
    cout << "Compound Interest: " << compoundInterest << endl;
    cout << "Total Amount: " << (principal + compoundInterest) << endl;

    return 0;
}
