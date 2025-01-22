#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (auto& element : arr) {
        cin >> element;
        if (element < 0) {
            count++;
        }
    }

    cout << "Total number of negative elements: " << count << endl;

    return 0;
}
