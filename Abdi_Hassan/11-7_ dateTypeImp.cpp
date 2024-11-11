#include "dateType.h"

dateType::dateType(int month, int day, int year)
    : dMonth(month), dDay(day), dYear(year) {}

void dateType::setDate(int month, int day, int year) {
    dMonth = month;
    dDay = day;
    dYear = year;
}

void dateType::setMonth(int month) {
    dMonth = month;
}

void dateType::setDay(int day) {
    dDay = day;
}

void dateType::setYear(int year) {
    dYear = year;
}

int dateType::getMonth() const {
    return dMonth;
}

int dateType::getDay() const {
    return dDay;
}

int dateType::getYear() const {
    return dYear;
}

void dateType::print() const {
    cout << dMonth << "-" << dDay << "-" << dYear << endl;
}

int dateType::numberOfDaysPassed() {
    int daysInMonth[] = {31, 28 + isLeapYear(), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;
    for (int i = 0; i < dMonth - 1; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays += dDay;
    return totalDays;
}

int dateType::numberOfDaysLeft() {
    int daysInMonth[] = {31, 28 + isLeapYear(), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;
    for (int i = dMonth; i < 12; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays -= dDay;
    return (366 - numberOfDaysPassed());
}

void dateType::incrementDate(int nDays) {
    int daysInMonth[] = {31, 28 + isLeapYear(), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < nDays; i++) {
        if (dDay < daysInMonth[dMonth - 1]) {
            dDay++;
        } else {
            dDay = 1;
            if (dMonth < 12) {
                dMonth++;
            } else {
                dMonth = 1;
                dYear++;
            }
        }
    }
}

int dateType::getDaysInMonth() {
    int daysInMonth[] = {31, 28 + isLeapYear(), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return daysInMonth[dMonth - 1];
}

bool dateType::isLeapYear() {
    if ((dYear % 4 == 0 && dYear % 100 != 0) || (dYear % 400 == 0)) {
        return true;
    }
    return false;
}
