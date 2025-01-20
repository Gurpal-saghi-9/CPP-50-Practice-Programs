#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) : radius(r) {}

    double calculateArea() {
        const double PI = 3.14159;
        return PI * radius * radius;
    }
};

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius);
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    return 0;
}
