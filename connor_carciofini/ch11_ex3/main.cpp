#include <iostream>
#include "circleType.h"
#include "cylinderType.h"

using namespace std;

int main() {
    circleType circle;
    cylinderType cylinder(2, 2);
    circle.print();
    cylinder.print();
    cout << cylinder.volume() << endl;
    cout << cylinder.surfaceArea() << endl;
    
    return 0;
}
