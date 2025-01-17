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

    if (n1 >= n2 && n1 >= n3){
        cout<< "Largest number: " << n1 << endl;
    }
    else if (n2 >= n1 && n2 >= n3){
        cout<< "Largest number: " << n2 << endl;
    }
    else{
        cout<< "Largest number: " << n3 << endl;
    }

    return 0;
}