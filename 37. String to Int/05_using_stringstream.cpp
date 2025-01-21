#include <iostream>
#include <sstream>
using namespace std;

// Driver code
int main()
{
    string s = "12345";

    // object from the class stringstream
    stringstream num;

    // inserting string s in geek stream
    num << s;

    // The object has the value 12345
    // and stream it to the integer x
    int x = 0;
    num >> x;

    // Now the variable x holds the
    // value 12345
    cout << "Value of x + 1 : " << x + 1;

    return 0;
}