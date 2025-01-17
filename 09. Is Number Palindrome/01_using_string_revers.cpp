#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (s == rev)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    
    return 0;
}