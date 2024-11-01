#include "studentType.h"

// Constructor 
studentType::studentType(std::string fName, std::string lName, char grade, 
                         int tScore, int pScore, double gpa) {
    firstName = fName;
    lastName = lName;
    testScore = tScore;
    programmingScore = pScore;
    GPA = gpa;
    setGrade(); 
}

// Setters implementation
void studentType::setFirstName(std::string val) {
    firstName = val;
}

void studentType::setLastName(std::string val) {
    lastName = val;
}

void studentType::setTestScore(int val) {
    testScore = val;
    setGrade(); 
}

void studentType::setProgScore(int val) {
    programmingScore = val;
    setGrade(); 
}

void studentType::setGPA(double val) {
    GPA = val;
}

// Getters implementation
std::string studentType::getFirstName() const {
    return firstName;
}

std::string studentType::getLastName() const {
    return lastName;
}

char studentType::getGrade() const {
    return courseGrade;
}

int studentType::getTestScore() const {
    return testScore;
}

int studentType::getProgScore() const {
    return programmingScore;
}

double studentType::getGPA() const {
    return GPA;
}

// Private method to set the course grade based on test and programming scores
void studentType::setGrade() {
    double average = (testScore + programmingScore) / 2.0;
    if (average >= 90) {
        courseGrade = 'A';
    } else if (average >= 80) {
        courseGrade = 'B';
    } else if (average >= 70) {
        courseGrade = 'C';
    } else if (average >= 60) {
        courseGrade = 'D';
    } else {
        courseGrade = 'F';
    }
}

// Method to print student details
void studentType::print() const {
    std::cout << "Name: " << firstName << " " << lastName << std::endl;
    std::cout << "Grade: " << courseGrade << std::endl;
    std::cout << "Test score: " << testScore << std::endl;
    std::cout << "Programming score: " << programmingScore << std::endl;
    std::cout << "GPA: " << GPA << std::endl;
}
