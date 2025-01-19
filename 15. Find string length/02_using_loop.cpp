#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int length = 0;

    for (char ch : str) {
        length++;
    }

    cout << "Length using loop: " << length << endl;
    
    return 0;
}
