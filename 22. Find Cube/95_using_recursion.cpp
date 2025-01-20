#include <iostream>
using namespace std;

// Recursive function to calculate cube
int findCube(int num, int count = 0, int sum = 0)
{
    if (count == num)
        return sum;
    return findCube(num, count + 1, sum + num * num);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Cube of " << number << " is " << findCube(number) << endl;

    return 0;
}
