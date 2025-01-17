#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool isPalindromeReverse(const string &s, int start, int end){
    if (start >= end){
        return true;
    }
    if (s[start] != s[end]){
        return false;
    }
    
    return isPalindromeReverse(s, start + 1, end - 1);
}

bool isPalindrome(int x){
    string s = to_string(x);
    return isPalindromeReverse(s, 0, s.length() - 1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n)){
        cout << n << " is a palindrome number." << endl;
    } else {
        cout << n << " is not a palindrome number." << endl;
    }
    
    return 0;
}