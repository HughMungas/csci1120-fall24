#include <iostream>
#include <cmath>
using namespace std;

class cylinderType {
private:
    double radius;
    double height;

public:
    // Constructor to initialize the radius and height
    cylinderType(double r, double h) {
        radius = r;
        height = h;
    }

    // Function to calculate the volume of the cylinder in cubic feet
    double getVolume() {
        return M_PI * pow(radius, 2) * height; // Volume = π * r^2 * h
    }

    // Function to calculate the surface area of the cylinder in square feet
    double getSurfaceArea() {
        return 2 * M_PI * radius * (radius + height); // Surface Area = 2 * π * r * (r + h)
    }
};
