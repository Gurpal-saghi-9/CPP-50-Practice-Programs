#include <iostream>
#include <cmath>

using namespace std;

bool isAstrong(int n){
    int sum = 0;
    int original = n;
    int dig = 0;

    // counting the number of digits
    int temp = n;
    while (temp > 0)
    {
        temp /= 10;
        dig++;
    }

    // sum of the power of the digits
    temp = n;
    while (temp > 0)
    {
        int last = temp % 10;
        sum += pow(last, dig);
        temp /= 10;
    }

    return sum == original;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (isAstrong(i))
        {
            cout << i << " ";
        }
        
    }

    return 0;
}

// 1 to 1 lakh
// 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084 548834 