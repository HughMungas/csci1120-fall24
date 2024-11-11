#include <iostream>
#include <iomanip>

using namespace std;

class UserData {
    public:
        int marital_status;
        int number_children;
        double gross_salary;
        double percent_pension;

        double taxesOwed() {
            double taxable_income = taxableIncome();

            if (taxable_income <= 15000) return taxable_income * .15;

            if (taxable_income > 15000 && taxable_income <= 40000) return 2250 + ((taxable_income - 15000) * .25);
            
            else return 8460 + ((taxable_income - 40000) * .35);
        }

        double taxableIncome() {
            int personal_exemption = personalExemption();
            int std_exemption = stdExemption();
            double pension_contrib = pensionContrib();

            double taxable_income = gross_salary - personal_exemption - std_exemption - pension_contrib;

            if (taxable_income < 0) taxable_income = 0;

            return taxable_income;
        }

        int personalExemption() {
            if (marital_status == 0) return 1500;

            else return 1500 * (2 + number_children);
        }

        int stdExemption() {
            if (marital_status == 0) return 4000;

            else return 7000;
        }

        double pensionContrib() {
            return percent_pension * .01 * gross_salary;
        }
};

int enum_marital_status(string marital_status) {
    if (marital_status == "single") return 0;
    if (marital_status == "married") return 1;
    else return 0;
}

int main() {
    UserData user_data;

    string marital_status;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "ENTER MARITAL STATUS (married / single)... ";
    cin >> marital_status;
    cout << endl;

    user_data.marital_status = enum_marital_status(marital_status);

    if (user_data.marital_status == 1) {
        cout << "ENTER NUMBER OF CHILDREN UNDER 14 ... ";
        cin >> user_data.number_children;
        cout << endl;
    }
    else user_data.number_children = 0;

    cout << "ENTER GROSS SALARY (IF MARRIED AND SPOUSE ALSO HAS INCOME, ENTER COMBINED SALARY)... ";
    cin >> user_data.gross_salary;
    cout << endl;

    cout << "ENTER PERCENTAGE OF INCOME CONTRIBUTED TO A PENSION FUND ... ";
    cin >> user_data.percent_pension;

    cout << "UNCLE SAM SHAKES YOU DOWN TO THE TUNE OF $" << user_data.taxesOwed() << " ... GOD BLESS AMERICA!" << endl;
    return 0;
}
