#include <iostream>

using namespace std;

int find_largest(int n1, int n2, int n3){
    if(n1 >= n2 && n1 >= n3)
    {
        return n1;
    }
    else if(n2 >= n1 && n2 >= n3)
    {
        return n2;
    }
    return n3;
}

int main(){
    int n1, n2, n3;
    cout << "Enter an integer: ";
    cin >> n1;
    cout << "Enter an integer: ";
    cin >> n2 ;
    cout << "Enter an integer: ";
    cin >> n3;

    int largest = find_largest(n1, n2, n3);

    cout << "Largest number is: " << largest << endl;

    return 0;
}