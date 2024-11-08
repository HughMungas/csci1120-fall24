#include <string>
#include "clockType.h"

#ifndef H_ExtClockType
#define H_ExtClockType

using namespace std;

class extClockType : public clockType
{
private:
    string timeZone;

public:
    extClockType();
    extClockType(int hours, int minutes, int seconds, string tz);
    void setTimeZone(string tz);
    void printTimeZone();
};
#endif
