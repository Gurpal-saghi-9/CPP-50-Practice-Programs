#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int max = a; // Assume `a` is the maximum initially

    // Compare `b` with `max`
    switch (b > max) {
        case 1:
            max = b;
            break;
    }

    // Compare `c` with `max`
    switch (c > max) {
        case 1:
            max = c;
            break;
    }

    cout << "Maximum: " << max << endl;

    return 0;
}
