#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";

    vector<char> result(str1.begin(), str1.end());
    result.insert(result.end(), str2.begin(), str2.end());

    string concatenated(result.begin(), result.end());
    cout << "Concatenated String: " << concatenated << endl;
    return 0;
}
