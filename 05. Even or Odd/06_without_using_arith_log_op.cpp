#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    while (n >= 2)
    {
        n -= 2;
    }
    
    if (n == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    return 0;
}