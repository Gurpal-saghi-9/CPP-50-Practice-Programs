#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string str = to_string(n);
    int left = 0, right = str.size() - 1;

    while (left < right){
        if (str[left] != str[right]){
            cout << "Not a palindrome" << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "Palindrome" << endl; 
    
    return 0;
}