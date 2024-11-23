#include <iostream>
#include "boxType.h"

using namespace std;

int main() {
    // Write your main here
    boxType box1(2, 2, 2);
    boxType box2(2, 2, 2);
    boxType box3 = box1 + box2;
    box3++;

    cout << box3 << endl;
    return 0;
}