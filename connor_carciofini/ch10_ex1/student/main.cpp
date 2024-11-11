//Main program
   
#include <iostream>
#include <string>
#include "studentType.h"

using namespace std;

int main()
{
    studentType student;
    studentType newStudent("Brain", "Johnson", '*', 85, 95, 3.89);

    student.print();
    cout << "***************" << endl << endl;

    newStudent.setFirstName("Brian");
    newStudent.setLastName("Jones");
    newStudent.setProgScore(77);
    newStudent.setTestScore(88);
    newStudent.setGrade();

    // GETTERS WORK?
    cout << "Hi! My name is " << newStudent.getFirstName() << " " << newStudent.getLastName() << endl;
    cout << "I have a " << newStudent.getGrade() << " in class and my GPA is " << newStudent.getGPA() << endl;
    cout << endl;


    newStudent.print();
    cout << "***************" << endl << endl;

    return 0;
}

