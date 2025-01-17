#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int originalNum = n;
    int result = 0;

    while (originalNum != 0)
    {
        int reminder = originalNum %10;
        result += reminder * reminder * reminder;
        originalNum /= 10;
    }

    if (result == n)    
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;    
    }

    return 0;
}