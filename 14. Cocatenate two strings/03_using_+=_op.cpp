#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    str1 += str2;

    cout << "Concatenated String: " << str1 << endl;
    return 0;
}
