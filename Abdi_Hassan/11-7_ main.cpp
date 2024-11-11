#include <iostream>
#include "dateType.h"

using namespace std;

int main() {
    dateType date1(3, 15, 2008);
    cout << "Date 1: ";
    date1.print();
    cout << "Days passed in the year: " << date1.numberOfDaysPassed() << endl;
    cout << "Days left in the year: " << date1.numberOfDaysLeft() << endl;
    
    dateType date2(12, 20, 2008);
    cout << "Date 2: ";
    date2.print();
    cout << "Days passed in the year: " << date2.numberOfDaysPassed() << endl;
    cout << "Days left in the year: " << date2.numberOfDaysLeft() << endl;

    dateType date3(3, 15, 2008);
    date3.incrementDate(4);
    cout << "New date after incrementing 4 days: ";
    date3.print();
    
    return 0;
}
