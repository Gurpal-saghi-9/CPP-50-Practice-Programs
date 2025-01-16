#include <iostream>
using namespace std;

string rev_string(string str) {
    string rev_str = "";

    for (int i = str.length() - 1; i >= 0; i--) {
        rev_str += str[i];
    }

    cout << "Reversed string: " << rev_str << endl;

    return rev_str;
}

int main() {
    string str = "Gurpal Singh";

    cout << "Original string: " << str << endl;

    rev_string(str);

    cout << "Original string: " << str << endl;

    return 0;
}