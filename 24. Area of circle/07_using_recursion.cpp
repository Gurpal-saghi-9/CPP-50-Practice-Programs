#include <iostream>
using namespace std;

// Recursive function to calculate the area
double calculateArea(double radius, double PI = 3.14159) {
    if (radius == 0) {
        return 0;
    }
    return PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Area of the circle: " << calculateArea(radius) << endl;
    return 0;
}
