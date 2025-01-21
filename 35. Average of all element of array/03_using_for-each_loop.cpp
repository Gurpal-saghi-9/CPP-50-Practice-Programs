#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    // Input elements for the array
    cout << "Enter elements of the array: ";
    for (int& element : arr) {
        cin >> element;
        sum += element; // Add each element to the sum
    }

    // Calculate average
    double average = static_cast<double>(sum) / n;

    cout << "Average of the elements: " << average << endl;

    return 0;
}
