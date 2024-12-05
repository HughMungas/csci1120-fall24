#include <iostream>
#include "rectangleType.h"

using namespace std;

int main() {
    rectangleType r1(5, 10), r2(3, 4), r3;

    cout << "Enter dimensions for rectangle r3 (length and width): ";
    cin >> r3;

    cout << "Rectangle r1: " << r1 << endl;
    cout << "Rectangle r2: " << r2 << endl;
    cout << "Rectangle r3: " << r3 << endl;

    rectangleType sum = r1 + r2;
    rectangleType diff = r1 - r2;
    rectangleType prod = r1 * r2;

    cout << "r1 + r2: " << sum << endl;
    cout << "r1 - r2: " << diff << endl;
    cout << "r1 * r2: " << prod << endl;

    cout << "r1 == r2: " << (r1 == r2 ? "True" : "False") << endl;
    cout << "r1 != r2: " << (r1 != r2 ? "True" : "False") << endl;
    cout << "r1 <= r2: " << (r1 <= r2 ? "True" : "False") << endl;
    cout << "r1 < r2: " << (r1 < r2 ? "True" : "False") << endl;
    cout << "r1 >= r2: " << (r1 >= r2 ? "True" : "False") << endl;
    cout << "r1 > r2: " << (r1 > r2 ? "True" : "False") << endl;

    return 0;
}
