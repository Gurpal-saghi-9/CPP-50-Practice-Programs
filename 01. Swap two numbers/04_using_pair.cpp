#include <iostream>


using namespace std;

pair<int, int> swap_using_func(int n1, int n2) {
    return make_pair(n2, n1);
}

int main(){
    int n1 = 10;
    int n2 = 20;
    
    cout << "Before swaping n1 = " << n1 << " and n2 = " << n2 << endl;

    pair<int, int> swapped = swap_using_func(n1, n2);
    n1 = swapped.first;
    n2 = swapped.second;

    cout << "After swaping n1 = " << n1 << " and n2 = " << n2 << endl;

    return 0;
}