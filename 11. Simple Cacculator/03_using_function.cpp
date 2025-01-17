#include <iostream>
using namespace std;

float add(float n1, float n2)
{
    return n1 + n2;
}
float sub(float n1, float n2)
{
    return n1 - n2;
}
float multiply(float n1, float n2)
{
    return n1 * n2;
}
float divide(float n1, float n2)
{
    if (n1 != 0)
    {
        return n1 / n2;
    }
    else
    {
        return -1;
    }
}


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

    int result;

    if (op == '+')
    {
        result = add(n1, n2);
    }
    else if (op == '-')
    {
        result = sub(n1, n2);
    }
    else if (op == '*')
    {
        result = multiply(n1, n2);
    }
    else if (op == '/')
    {
        result = divide(n1, n2);
        if (result == -1)
        {
            cout << "Invalid input" << endl;
            return 0;
        }
    }
    else{
        cout << "Invalid operator" << endl;
    }

    cout << "Result: " << result << endl;
    
    return 0;
}