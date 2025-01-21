#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const char* str = "12345";
    int num = strtol(str, nullptr, 10); // Base 10 conversion

    cout << "String: " << str << endl;
    cout << "Integer: " << num << endl;

    return 0;
}
