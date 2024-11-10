#include <iostream>
#include "dateType.h"

int main() {
    int month, day, year;
    for (int i = 1; i <= 3; ++i) {
        std::cout << "Enter date #" << i << " (month day year): ";
        std::cin >> month >> day >> year;
        dateType date(month, day, year);
        std::cout << "Date " << i << ": ";
        date.printDate();
        if (date.isLeapYear(date.getYear())) {
            std::cout << "This is a leap year.\n";
        } else {
            std::cout << "This is not a leap year.\n";
        }
    }
    return 0;
}
