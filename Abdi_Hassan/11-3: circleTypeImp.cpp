#include <iostream>
#include "circleType.h"

const double PI = 3.14159;

circleType::circleType(double r) {
    setRadius(r);
}

void circleType::setRadius(double r) {
    if (r >= 0)
        radius = r;
    else
        radius = 0;
}

double circleType::getRadius() {
    return radius;
}

double circleType::area() {
    return PI * radius * radius;
}

double circleType::circumference() {
    return 2 * PI * radius;
}

void circleType::print() {
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Circumference: " << circumference() << std::endl;
}
