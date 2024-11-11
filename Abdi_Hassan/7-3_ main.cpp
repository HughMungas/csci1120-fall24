#include <iostream>
#include "circleType.h"
#include "cylinderType.h"

int main() {
    cylinderType cylinder(5.0, 10.0);

    std::cout << "Initial properties of the cylinder:" << std::endl;
    cylinder.print();

    cylinder.setRadius(7.0);
    cylinder.setHeight(15.0);

    std::cout << "\nModified properties of the cylinder:" << std::endl;
    cylinder.print();

    return 0;
}
