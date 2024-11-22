#include <iostream>
#include "boxType.h"

using namespace std;

int main() {
    boxType box1(3, 4, 5), box2(2, 3, 4), box3;

    cout << "Box 1: " << box1 << endl;
    cout << "Box 2: " << box2 << endl;

    box3 = box1 + box2;
    cout << "Box 1 + Box 2: " << box3 << endl;

    box3 = box1 - box2;
    cout << "Box 1 - Box 2: " << box3 << endl;

    box3 = box1 * box2;
    cout << "Box 1 * Box 2: " << box3 << endl;

    cout << "Box 1 == Box 2: " << (box1 == box2 ? "True" : "False") << endl;
    cout << "Box 1 != Box 2: " << (box1 != box2 ? "True" : "False") << endl;

    ++box1;
    cout << "Pre-increment Box 1: " << box1 << endl;

    box1++;
    cout << "Post-increment Box 1: " << box1 << endl;

    --box1;
    cout << "Pre-decrement Box 1: " << box1 << endl;

    box1--;
    cout << "Post-decrement Box 1: " << box1 << endl;

    return 0;
}
