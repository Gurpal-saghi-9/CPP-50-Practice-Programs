#include <iostream>
using namespace std;

void printEvenOdd(int n, bool printEven)
{
    if (printEven)
    {
        cout << "Even numbers from 1 to " << n << ": ";
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        cout << "Odd numbers from 1 to " << n << ": ";
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;
    char choice;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Do you want to print even (E) or odd (O) numbers? ";
    cin >> choice;

    if (choice == 'E' || choice == 'e')
    {
        printEvenOdd(n, true); // Print even numbers
    }
    else if (choice == 'O' || choice == 'o')
    {
        printEvenOdd(n, false); // Print odd numbers
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
