#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "12345";
    int num = stoi(str);

    cout << "String: " << str << endl;
    cout << typeid(str).name() << endl;
    cout << "Integer: " << num << endl;

    return 0;
}
