#include <iostream>
#include "studentType.h"

int main() {
    // Insatance
    studentType student("Sara", "Spilner", 'A', 89, 92, 3.57);
    
    // Print student details
    student.print();

    // Update test and programming scores
    student.setTestScore(85);
    student.setProgScore(90);
    
    // Print updated student details
    std::cout << "After updating scores:" << std::endl;
    student.print();

    return 0;
}
