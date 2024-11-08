#include <iostream>
#include "extClockType.h"
// #include "clockType.h"

using namespace std;

extClockType::extClockType(){
    timeZone = "central";
}

extClockType::extClockType(int hours, int minutes, int seconds, string tz) {
    timeZone = tz;
}

void extClockType::setTimeZone(string tz) {
    timeZone = tz;
}

void extClockType::printTimeZone() {
    cout << timeZone << endl;
}