#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int original = n, rev = 0;

    while (n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (original == rev){
        cout << "The number is a palindrome." << endl;
    }
    else{
        cout << "The number is not a palindrome." << endl;
    }
    {
        /* code */
    }
    
    
    return 0;
}