#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n1, n2, n3;
    cout << "Enter an integer: ";
    cin >> n1;
    cout << "Enter an integer: ";
    cin >> n2 ;
    cout << "Enter an integer: ";
    cin >> n3;

    int largest = max({n1,n2, n3});

    cout << "Largest number is: " << largest << endl;

    return 0;
}