#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if ((n & 1) == 0) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }

    return 0;
}