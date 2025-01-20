#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        cout << "31 days" << endl;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "30 days" << endl;
    }
    else if (month == 2)
    {
        cout << "28 or 29 days (depending on the year)" << endl;
    }
    else
    {
        cout << "Invalid month number!" << endl;
    }

    return 0;
}
