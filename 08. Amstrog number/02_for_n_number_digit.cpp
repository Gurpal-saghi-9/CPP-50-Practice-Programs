#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int originalNum = n;
    int rem;
    int result = 0;
    int x = 0;
    int power;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++x;
    }

    originalNum = n;

    while (originalNum != 0)
    {
        rem = originalNum % 10;
        power = round(pow(rem, x));
        result += power;
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