#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> numbers(n);
    iota(numbers.begin(), numbers.end(), 1); // Fill the vector with 1 to n

    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of the first " << n << " natural numbers: " << sum << endl;

    return 0;
}
