#include <bits/stdc++.h>

using namespace std;

void using_add_sub(int n1, int n2){
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout << "After swaping n1 = " << n1 << " and n2 = " << n2 << endl;
}

void using_mul_div(int n1, int n2){
    n1 = n1 * n2;
    n2 = n1 / n2;
    n1 = n1 / n2;
    cout << "After swaping n1 = " << n1 << " and n2 = " << n2 << endl;
}

int main(){
    int n1 = 10;
    int n2 = 20;
    
    cout << "Before swaping n1 = " << n1 << " and n2 = " << n2 << endl;

    using_add_sub(n1, n2);

    using_mul_div(n1, n2);

    return 0;
}