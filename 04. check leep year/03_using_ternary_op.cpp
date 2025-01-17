#include <bits/stdc++.h>

using namespace std;


int main(){
   int year;

   cout << "Enter the year: ";
   cin >> year;

   cout << year << " is " << (year % 4 == 0 ? (year % 100 == 0 ? (year % 400 == 0 ? "a Leap Year" : "Not a Leap Year") : "a Leap Year") : "Not a Leap Year") << endl;

    return 0;
}