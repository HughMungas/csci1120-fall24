#include <iostream>
#include "clockType.h"
#include "extClockType.h"

using namespace std;

int main() {
    extClockType clock;
    clock.setTime(1, 2, 3);
    clock.setTimeZone("eastern");
    clock.printTime();
    clock.printTimeZone();
}
