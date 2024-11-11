#include <iostream>
#include "dateType.h"

using namespace std;

int main() {
    dateType date;
    date.setDate(1, 31, 1913);
    cout << date.isLeapYear();
    date.printDate();
    return 0;
}