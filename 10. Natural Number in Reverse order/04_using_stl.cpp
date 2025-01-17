#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    vector<int> num;
    for (int i = 1; i <= n; i++){
        num.push_back(i);
    }
    reverse(num.begin(), num.end());

    for (int number : num){
        cout << number << " ";
    }


    return 0;
}