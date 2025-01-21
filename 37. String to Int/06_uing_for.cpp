#include <bits/stdc++.h>

using namespace std;
int main()
{
    string number = "13";
    int i = 0;

    // Traversing string
    for (char c : number) {
        // Checking if the element is number
        if (c >= '0' && c <= '9') {
            i = i * 10 + (c - '0');
        }
        // Otherwise print bad output
        else {
            cout << "Bad Input";
            return 1;
        }
    }

    cout << i;
}
