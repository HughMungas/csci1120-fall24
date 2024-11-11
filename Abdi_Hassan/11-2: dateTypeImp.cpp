#include <iostream>
#include "dateType.h"

dateType::dateType(int month, int day, int year) {
    if (isValidDate(month, day, year)) {
        dMonth = month;
        dDay = day;
        dYear = year;
    } else {
        std::cout << "Invalid date. Setting to default date 1-1-1900.\n";
        dMonth = 1;
        dDay = 1;
        dYear = 1900;
    }
}

void dateType::setDate(int month, int day, int year) {
    if (isValidDate(month, day, year)) {
        dMonth = month;
        dDay = day;
        dYear = year;
    } else {
        std::cout << "Invalid date.\n";
    }
}

int dateType::getDay() const {
    return dDay;
}

int dateType::getMonth() const {
    return dMonth;
}

int dateType::getYear() const {
    return dYear;
}

void dateType::printDate() const {
    std::cout << dMonth << "-" << dDay << "-" << dYear << std::endl;
}

bool dateType::isLeapYear(int year) const {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

bool dateType::isValidDate(int month, int day, int year) const {
    if (month < 1 || month > 12) return false;
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) daysInMonth[1] = 29;
    return (day >= 1 && day <= daysInMonth[month - 1]);
}
