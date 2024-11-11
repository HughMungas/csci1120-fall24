#ifndef date_H
#define date_H

class dateType {
public:
    void setDate(int month, int day, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void printDate() const;
    bool isLeapYear(int year) const;
    dateType(int month = 1, int day = 1, int year = 1900);

private:
    int dMonth;
    int dDay;
    int dYear;
    bool isValidDate(int month, int day, int year) const;
};

#endif
