#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main()
{
    const double PI = 3.14159;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * pow(radius, 2); // Use pow for squaring
    cout << "Area of the circle: " << area << endl;

    return 0;
}
