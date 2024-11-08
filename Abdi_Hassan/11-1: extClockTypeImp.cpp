#include "extClockType.h"
#include <iostream>
using namespace std;

extClockType::extClockType(int hours, int minutes, int seconds, const std::string& tz) 
    : clockType(hours, minutes, seconds), timeZone(tz) {}

extClockType::extClockType() : clockType(), timeZone("UTC") {}

void extClockType::setTimeZone(const std::string& tz) {
    timeZone = tz;
}

std::string extClockType::getTimeZone() const {
    return timeZone;
}

void extClockType::printTimeZone() const {
    cout << "Time Zone: " << timeZone << endl;
}

void extClockType::printTime() const {
    clockType::printTime();  // Call base class function to print time
    cout << " ";
    printTimeZone();         // Print the time zone
}
