#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0){
        cout << "Number is not palindrome" << endl;
        return 0;
    }

    int num_digits = log10(n) + 1;
    int leftdiv = pow(10, num_digits - 1);
    while (n > 0){
        int left = n / leftdiv;
        int right = n % 10;
        if (left != right){
            cout << "Number is not palindrome" << endl;
            return 0;
        }
        n = (n % leftdiv)/10;
        leftdiv /= 100;
    }
    cout << "Number is palindrome" << endl;
    
    return 0;
}