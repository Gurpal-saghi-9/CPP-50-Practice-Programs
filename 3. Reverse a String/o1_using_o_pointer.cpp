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

    int i = 0;
    int j = str1.length() - 1;

    while (i < j)
    {
        swap(str1[i], str1[j]);
        i++;
        j--;
    }
    
    cout << str1 << endl;

    string str2 = "Hello World";

    rev1(str2);
    cout << str2 << endl;

    rev2(str2);
    cout << str2 << endl;

    return 0;
}