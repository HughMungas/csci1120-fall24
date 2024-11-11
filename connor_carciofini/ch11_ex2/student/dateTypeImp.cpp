#include <iostream>
#include "dateType.h"

using namespace std;

dateType::dateType(int month, int day, int year)
{
    if (month <= 12)
    {
        dMonth = month;
        if (month == 2)
        // IF MONTH IS FEBRUARY
        {
            if (day <= 28)
                dDay = day;
        }
        if (month != 2)
        // IF MONTH IS NOT FEBRUARY
        {
            if (month % 2 == 0)
            // IF MONTH IS EVEN
            {
                if (month <= 7)
                // MONTHS 7 AND LOWER
                {
                    if (day <= 30)
                        dDay = day;
                }
                if (month > 7)
                // MONTHS 7 AND HIGHER
                {
                    if (day <= 31)
                        dDay = day;
                }
            }
            if (month % 2 != 0)
            // IF MONTH IS ODD
            {
                if (month <= 7)
                {
                    if (day <= 31)
                        dDay = day;
                }
                if (month > 7)
                {
                    if (day <= 30)
                        dDay = day;
                }
            }
        }
        dYear = year;
    }
}

void dateType::setDate(int month, int day, int year)
{
    if (month <= 12)
    {
        dMonth = month;
        if (month == 2)
        // IF MONTH IS FEBRUARY
        {
            if (day <= 28)
                dDay = day;
        }
        if (month != 2)
        // IF MONTH IS NOT FEBRUARY
        {
            if (month % 2 == 0)
            // IF MONTH IS EVEN
            {
                if (month <= 7)
                // MONTHS 7 AND LOWER
                {
                    if (day <= 30)
                        dDay = day;
                }
                if (month > 7)
                // MONTHS 7 AND HIGHER
                {
                    if (day <= 31)
                        dDay = day;
                }
            }
            if (month % 2 != 0)
            // IF MONTH IS ODD
            {
                if (month <= 7)
                {
                    if (day <= 31)
                        dDay = day;
                }
                if (month > 7)
                {
                    if (day <= 30)
                        dDay = day;
                }
            }
        }
        dYear = year;
    }
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getMonth() const
{
    return dMonth;
}

int dateType::getYear() const
{
    return dYear;
}

void dateType::printDate() const
{
    // mm-dd-yyyy
    cout << dMonth << "-" << dDay << "-" << dYear << endl;
}

bool dateType::isLeapYear()
{
    if ((dYear % 4) == 0)
        return true;
    else
        return false;
}