#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    stringstream ss;

    ss << str1 << str2;
    string result = ss.str();

    cout << "Concatenated String: " << result << endl;
    return 0;
}
