#include <iostream>
using namespace std;

// Function to calculate area of circle
double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Area of the circle: " << calculateArea(radius) << endl;
    return 0;
}
