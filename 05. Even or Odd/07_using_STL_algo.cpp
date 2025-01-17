#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    auto is_even = [](int n) { return n % 2 == 0; };

    if (is_even(n))
        cout << n << " is even." << endl;
    else
        cout << n << " is odd." << endl;

    return 0;
}