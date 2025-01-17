#include <iostream>
using namespace std;

int main() {
    int n1;
    cout << "Enter a number 1: ";
    cin >> n1;
    int n2;
    cout << "Enter a number 2: ";
    cin >> n2;
    char op;
    cout << "Enter an operator(+,-,*,/): ";
    cin >> op;

    if (op == '+')
    {
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    }
    else if (op == '-')
    {
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    }
    else if (op == '*')
    {
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    }
    else if (op == '/')
    {
        if (n2 != 0)
        {
            cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        }
        else
        {
            cout << "Division by zero is not allowed" << endl;
        } 
    }
    else{
        cout << "Invalid operator" << endl;
    }
    
    return 0;
}