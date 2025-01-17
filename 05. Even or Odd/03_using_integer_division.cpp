#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int  div = n / 2;

    if (div * 2 == n) {
        cout << n << " is even." << endl;
    } 
    else {
        cout << n << " is odd." << endl;
    }

    return 0;
}