#include <iostream>
using namespace std;

class CubeCalculator
{
public:
    int calculateCube(int num)
    {
        return num * num * num;
    }
};

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    CubeCalculator calc;
    cout << "Cube of " << number << " is " << calc.calculateCube(number) << endl;

    return 0;
}
