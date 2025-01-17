#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3;
    cout << "Enter an integer: ";
    cin >> n1;
    cout << "Enter an integer: ";
    cin >> n2 ;
    cout << "Enter an integer: ";
    cin >> n3;

    int largest = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

    cout << "Largest number: " << largest << endl;

    return 0;
}