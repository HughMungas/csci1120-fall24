#include "dayType.h"

// Define the array of days
const string dayType::daysOfWeek[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

// Constructor
dayType::dayType(string day) {
    setDay(day);
}

// Set the day
void dayType::setDay(string day) {
    bool validDay = false;
    for (const auto& d : daysOfWeek) {
        if (d == day) {
            this->day = day;
            validDay = true;
            break;
        }
    }
    if (!validDay) {
        this->day = "Sun"; // Default to "Sun" if input is invalid
    }
}

// Print the day
void dayType::printDay() const {
    cout << "Current day: " << day << endl;
}

// Return the day
string dayType::getDay() const {
    return day;
}

// Return the next day
string dayType::nextDay() const {
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            return daysOfWeek[(i + 1) % 7];
        }
    }
    return "Sun"; // Default case
}

// Return the previous day
string dayType::previousDay() const {
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            return daysOfWeek[(i + 6) % 7];
        }
    }
    return "Sun"; // Default case
}

// Calculate and return the day after adding days
string dayType::addDays(int days) const {
    int currentIndex = 0;
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            currentIndex = i;
            break;
        }
    }
    return daysOfWeek[(currentIndex + days % 7 + 7) % 7];
}
