#include <iostream>

using namespace std;

bool isEven(int n){
    if (n == 0){
        return true;
    } 
    else if (n == 1){
        return false;
    } 
    return isEven(n - 2);
}

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (isEven(n)){
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }

    return 0;
}