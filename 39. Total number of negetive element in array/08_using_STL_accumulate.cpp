#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = accumulate(arr.begin(), arr.end(), 0, [](int sum, int x) {
        return sum + (x < 0);
    });

    cout << "Total number of negative elements: " << count << endl;

    return 0;
}
