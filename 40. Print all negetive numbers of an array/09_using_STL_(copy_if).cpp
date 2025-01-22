#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n), negatives;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    copy_if(arr.begin(), arr.end(), back_inserter(negatives), [](int x) {
        return x < 0;
    });

    cout << "Negative numbers in the array: ";
    for (const auto& num : negatives) {
        cout << num << " ";
    }

    return 0;
}

// Output
// Enter the number of elements: 5
// Enter 5 elements: 1 -2 3 -4 5
// Negative numbers in the array: -2 -4

// In this program, we have used the copy_if() algorithm to copy negative numbers from the input array to another array.
// The copy_if() algorithm copies elements from the input range [arr.begin(), arr.end()) to the output range beginning at the position denoted by the back_inserter(negatives) iterator.
// The lambda function [] (int x) { return x < 0; } is used as a predicate to check if the element is negative.
// The back_inserter(negatives) iterator is used to insert elements at the end of the negatives vector.
// Finally, we print the negative numbers in the array negatives.

// The copy_if() algorithm is used to copy elements from an input range to an output range based on a condition specified by a predicate function. The syntax of the copy_if() algorithm is as follows: copy_if(first, last, result, pred);
// Here, first and last are the iterators that define the input range, result is the iterator that defines the output range, and pred is the predicate function that specifies the condition for copying elements.
