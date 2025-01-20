#include <iostream>
using namespace std;

class Fibonacci {
public:
    void printSeries(int n) {
        int a = 0, b = 1;
        cout << "Fibonacci Series: " << a << " " << b << " ";

        for (int i = 3; i <= n; i++) {
            int nextTerm = a + b;
            cout << nextTerm << " ";
            a = b;
            b = nextTerm;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    Fibonacci fib;
    fib.printSeries(n);
    return 0;
}
