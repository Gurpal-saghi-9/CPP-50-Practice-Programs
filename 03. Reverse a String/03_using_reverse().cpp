#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str1 = "Gurpal Singh";

    reverse(str1.begin(), str1.end());

    cout << "Reversed string: " << str1 << endl;

    return 0;
}