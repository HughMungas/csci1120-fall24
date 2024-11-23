#include <iostream>
#include "rectangleType.h"

using namespace std;

int main() {
    rectangleType rectangle1(2, 3);
    rectangleType rectangle2(3, 4);
    rectangle2++;
    rectangleType rectangle3 = rectangle1 + rectangle2;

    cout << "L: " << rectangle3 << " H: " << rectangle3.getWidth();

    return 0;
}