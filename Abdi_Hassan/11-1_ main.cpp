#include "extClockType.h"
#include <iostream>
using namespace std;

int main() {
    extClockType clock1(13, 45, 30, "PST");
    cout << "Clock 1: ";
    clock1.printTime();

    extClockType clock2;
    cout << "Clock 2: ";
    clock2.printTime();

    clock2.setTime(9, 15, 0);
    clock2.setTimeZone("EST");
    cout << "Updated Clock 2: ";
    clock2.printTime();

    return 0;
}
