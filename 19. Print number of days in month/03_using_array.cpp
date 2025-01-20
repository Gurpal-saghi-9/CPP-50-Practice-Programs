#include <iostream>
using namespace std;

int main()
{
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month >= 1 && month <= 12)
    {
        if (month == 2)
        {
            cout << "28 or 29 days (depending on the year)" << endl;
        }
        else
        {
            cout << daysInMonth[month - 1] << " days" << endl;
        }
    }
    else
    {
        cout << "Invalid month number!" << endl;
    }

    return 0;
}
