#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int negativeCount = 0;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Total number of negative elements: " << negativeCount << endl;

    return 0;
}
