#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) {
            count++;
        }
    }

    cout << "Total number of negative elements: " << count << endl;

    return 0;
}
