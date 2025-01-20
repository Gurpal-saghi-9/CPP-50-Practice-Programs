#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> evens, odds;

    // Separate numbers into even and odd lists
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evens.push_back(i);
        } else {
            odds.push_back(i);
        }
    }

    // Print the lists side by side
    cout << "Odd Numbers\tEven Numbers" << endl;
    int maxSize = max(odds.size(), evens.size());
    for (int i = 0; i < maxSize; i++) {
        if (i < odds.size())
            cout << odds[i] << "\t\t";
        else
            cout << "\t\t";

        if (i < evens.size())
            cout << evens[i];
        
        cout << endl;
    }

    return 0;
}


