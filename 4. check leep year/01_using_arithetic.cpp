#include <bits/stdc++.h>

using namespace std;


int main(){
   int year;

   cout << "Enter the year: ";
   cin >> year;

   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
   {
        cout << year << " is a leep year" << endl;
   }
   else
   {
        cout << year << " is not a leep year" << endl;
   }
   

    return 0;
}