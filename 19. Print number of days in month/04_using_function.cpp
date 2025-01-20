#include <iostream>
using namespace std;

int getDaysInMonth(int month) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else if (month == 2) {
        return 28; // Can add leap year handling here if required.
    } else {
        return -1; // Invalid month
    }
}

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    int days = getDaysInMonth(month);
    if (days == -1) {
        cout << "Invalid month number!" << endl;
    } else if (month == 2) {
        cout << "28 or 29 days (depending on the year)" << endl;
    } else {
        cout << days << " days" << endl;
    }

    return 0;
}
