#include <iostream>
using namespace std;

int findLength(const char* str) {
    if (*str == '\0') return 0;
    return 1 + findLength(str + 1);
}

int main() {
    const char* str = "Hello, World!";
    cout << "Length using recursion: " << findLength(str) << endl;
    return 0;
}
