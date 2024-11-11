#include "dayType.h"

int main() {
    dayType today("Mon");
    today.printDay();
    cout << "Next day: " << today.nextDay() << endl;
    cout << "Previous day: " << today.previousDay() << endl;
    cout << "Day after 5 days: " << today.addDays(5) << endl;
    
    dayType invalidDay("Funday");
    invalidDay.printDay();

    return 0;
}
