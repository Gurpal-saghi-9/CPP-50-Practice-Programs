#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> daysInMonth = {
        {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}};

    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    if (daysInMonth.find(month) != daysInMonth.end())
    {
        if (month == 2)
        {
            cout << "28 or 29 days (depending on the year)" << endl;
        }
        else
        {
            cout << daysInMonth[month] << " days" << endl;
        }
    }
    else
    {
        cout << "Invalid month number!" << endl;
    }

    return 0;
}
