#include <iostream>
using namespace std;

void rev1(string str){
    int i = 0;
    int j = str.length() - 1;

    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

void rev2(string& str){
    int i = 0;
    int j = str.length() - 1;

    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

int main() {
    string str1 = "Gurpal Singh";

    rev1(str1);
    cout << str1 << endl;

    rev2(str1);
    cout << str1 << endl;

    return 0;
}