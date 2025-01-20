#include <iostream>
#define PI 3.14159
#define AREA(r) (PI * (r) * (r)) // Macro to calculate area

using namespace std;

int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Area of the circle: " << AREA(radius) << endl;

    return 0;
}
