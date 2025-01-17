#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << n << " is " << (n % 2 == 0 ? " Even " : " Odd ") << endl;

    return 0;
}