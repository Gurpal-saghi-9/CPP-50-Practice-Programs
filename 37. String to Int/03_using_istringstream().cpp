#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "14364";
    int num;

    istringstream(str) >> num;

    cout << "String: " << str << endl;
    cout << "Integer: " << num << endl;

    return 0;
}
