#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    switch (year % 400 == 0 ? 1 : year % 100 == 0 ? 2 : year % 4 == 0 ? 1 : 0) 
    {
        case 1:
            cout << year << " is a leap year.\n";
            break;
        case 2:
            cout << year << " is not a leap year.\n";
            break;
        default:
            cout << year << " is not a leap year.\n";
    }

    return 0;
}
