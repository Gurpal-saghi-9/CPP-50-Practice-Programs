#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of the first " << n << " natural numbers: " << sum << endl;
    return 0;
}

// Output
// Enter the value of n: 5
// Sum of the first 5 natural numbers: 15