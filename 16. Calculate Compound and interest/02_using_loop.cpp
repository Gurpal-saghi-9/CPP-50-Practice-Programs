#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, compoundInterest = 0;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double tempPrincipal = principal;
    for (int i = 1; i <= time; i++) {
        tempPrincipal += tempPrincipal * rate / 100;
    }
    compoundInterest = tempPrincipal - principal;

    cout << "Compound Interest: " << compoundInterest << endl;
    cout << "Total Amount: " << tempPrincipal << endl;

    return 0;
}
