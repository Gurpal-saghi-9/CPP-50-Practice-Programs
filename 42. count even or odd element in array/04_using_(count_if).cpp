#include <iostream>
#include <vector>
#include <algorithm> // For std::count_if
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

    int evenCount = count_if(arr.begin(), arr.end(), [](int x) { return x % 2 == 0; });
    int oddCount = count_if(arr.begin(), arr.end(), [](int x) { return x % 2 != 0; });

    cout << "Even elements: " << evenCount << endl;
    cout << "Odd elements: " << oddCount << endl;

    return 0;
}
