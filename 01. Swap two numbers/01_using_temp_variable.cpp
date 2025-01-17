#include <bits/stdc++.h>

using namespace std;

void swap_using_temp(int n1, int n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "After swaping n1 = " << n1 << " and n2 = " << n2 << endl;
}

int main(){
    int n1 = 10;
    int n2 = 20;
    
    cout << "Before swaping n1 = " << n1 << " and n2 = " << n2 << endl;

    swap_using_temp(n1, n2);

    return 0;
}