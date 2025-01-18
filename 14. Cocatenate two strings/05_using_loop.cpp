#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    string result = str1;

    for (char ch : str2) {
        result += ch;
    }

    cout << "Concatenated String: " << result << endl;
    return 0;
}
