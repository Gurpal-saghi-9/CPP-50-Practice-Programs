#include <iostream>
using namespace std;

int main() {
    string str1 = "Gurpal Singh";

    int i = 0;
    int j = str1.length() - 1;

    while (i < j)
    {
        swap(str1[i], str1[j]);
        i++;
        j--;
    }
    
    cout << str1 << endl;

    return 0;
}