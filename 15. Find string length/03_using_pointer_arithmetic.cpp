#include <iostream>
using namespace std;

int main() {
    const char* str = "Hello, World!";
    const char* ptr = str;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    cout << "Length using pointer arithmetic: " << length << endl;
    return 0;
}
