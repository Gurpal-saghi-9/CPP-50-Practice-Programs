#include <iostream>
#include <iterator>
using namespace std;

int main() {
    string str = "Guru Granth Sahib World University";
    int length = distance(str.begin(), str.end());
    cout << "Length using distance(): " << length << endl;
    return 0;
}
