#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (a > b)
    {
    case 1:
        cout << "Maximum: " << a << endl;
        break;
    case 0:
        cout << "Maximum: " << b << endl;
        break;
    }

    return 0;
}
