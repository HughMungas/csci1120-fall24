#include <iostream>

using namespace std;

// Write your code here
class studentType
{
private:
    string firstName;
    string lastName;
    char courseGrade;
    int testScore;
    int programmingScore;
    double GPA;

public:
    studentType();
    studentType(string fn, string ln, char cg, int ts, int ps, double gpa)
    {
        firstName = fn;
        lastName = ln;
        courseGrade = cg;
        testScore = ts;
        programmingScore = ps;
        GPA = gpa;
    }

    void setFirstName(string val)
    {
        firstName = val;
    }
    void setLastName(string val)
    {
        lastName = val;
    };
    void setGrade()
    {
        double avg_grade = (programmingScore + testScore) / 2;
        if (avg_grade < 60) courseGrade = 'F';
        if (avg_grade >= 60 && avg_grade < 70) courseGrade = 'D';
        if (avg_grade >= 70 && avg_grade < 80) courseGrade = 'C';
        if (avg_grade >= 80 && avg_grade < 90) courseGrade = 'B';
        if (avg_grade >= 90 && avg_grade <=100) courseGrade = 'A';
        
    };
    void setTestScore(int val)
    {
        testScore = val;
    };
    void setProgScore(int val)
    {
        programmingScore = val;
    };
    void setGPA(double val)
    {
        GPA = val;
    };

    string getFirstName()
    {
        return firstName;
    }

    string getLastName()
    {
        return lastName;
    }

    char getGrade()
    {
        return courseGrade;
    }

    int getTestScore()
    {
        return testScore;
    }

    int getProgScore()
    {
        return programmingScore;
    }

    double getGPA()
    {
        return GPA;
    }

    void print() {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Grade: " << courseGrade << endl;
        cout << "Test score: " << testScore << endl;
        cout << "Programming score: " << programmingScore << endl;
        cout << "GPA: " << GPA << endl;
    }
};