#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> source(n), destination(n);

    cout << "Enter " << n << " elements for the source vector: ";
    for (int i = 0; i < n; i++) {
        cin >> source[i];
    }

    // Copy elements using assignment operator
    destination = source;

    // Print destination vector
    cout << "Elements in the destination vector: ";
    for (int element : destination) {
        cout << element << " ";
    }

    return 0;
}
