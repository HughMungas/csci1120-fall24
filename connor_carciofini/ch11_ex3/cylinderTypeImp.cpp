#include <iostream>
#include "cylinderType.h"

using namespace std;

void cylinderType::setHeight(double h) {
    height = h;
}

// void cylinderType::print() {
//     cout << height << endl;
// }

double cylinderType::volume() {
    return height * area();
}

double cylinderType::surfaceArea() {
    return (2 * area()) + (circumference() * height);
}



cylinderType::cylinderType(double r, double h){
    setRadius(r);
    setHeight(h);
}