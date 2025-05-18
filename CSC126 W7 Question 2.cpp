#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double volume, radius;
    const double PI = 3.141592653589793;

    cout << "Enter the volume of the sphere: ";
    cin >> volume;

    // Formula: V = (4/3) * pi * r^3 => r = cbrt((3V)/(4pi))
    radius = cbrt((3 * volume) / (4 * PI));

    cout << "The radius of the sphere is: " << radius << endl;

    return 0;
}