## Instructions
_Chapter 9_ defined the `struct studentType` to implement the basic properties of a student. Define the `class studentType` with the same components as the `struct studentType`, and add member functions to manipulate the data members. (Note that the data members of the `class studentType` must be `private`.) 

Write a program to illustrate how to use the `class studentType`.

The studentType struct needs to have 6 data members in total. All fields except courseGrade should be set by passing a parameter into the set function. The course grade should reflect their performance in the two categories testScore and programmingScore. Anytime setGrade() is called, it should be set to the average of these two scores. Do not pass in a parameter when calling setGrade.
### Struct `studentType`:
``` 
struct studentType
{
 string firstName;
 string lastName;
 char courseGrade;
 int testScore;
 int programmingScore;
 double GPA;
};
```
### Implement the following member functions
```
firstName:        setFirstName(string val) : getFirstName()
lastName:         setLastName(string val)  : getLastName()
courseGrade:      setGrade()               : getGrade()
testScore:        setTestScore(int val)    : getTestScore()
programmingScore: setProgScore(int val)    : getProgScore()
GPA:              setGPA(double val)       : getGPA()
```
An example of the program is shown below: 
```text
Name: Sara Spilner
Grade: A
Test score: 89
Programming score: 92
GPA: 3.57
***************
```
