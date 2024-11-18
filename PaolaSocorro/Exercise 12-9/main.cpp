 
//Data:  18 42 78 22 42 5 42 57 
 
#include <iostream>
#include <sstream> 
#include "unorderedArrayListType.h"

using namespace std;

/*
This passes 1 out of two tests, however the input for the second test
Doesn't make sense to me. It expects 31 but it inputs a single number?


Status: PASSED!
Check: 1
Test: Successful Output
Reason: None
Timestamp: 2024-11-18 02:28:52.740298

Status: FAILED!
Check: 2
Test: Successful Output II
Reason: Unable to find '['The smallest number in intList: 31']' in the program's output.
Enter a list of numbers separated by spaces: 65
The list is: 65 
The smallest number in intList: 65
.
Error : AssertionError - Unable to find The smallest number in intList: 31 in the program's output.
Timestamp: 2024-11-18 02:28:52.742428


*/

int main() {
    string inputLine;
    int num, minValue;

    cout << "Enter a list of numbers separated by spaces: ";
    getline(cin, inputLine); 

    // Debug input from cengage
    cout << inputLine << endl;
    unorderedArrayListType list(100); 

    stringstream ss(inputLine);

    while (ss >> num) {
        list.insertEnd(num);
    }

    cout << "The list is: ";
    list.print();

    minValue = list.min();
    if (minValue != -1)
    {
        cout << "The smallest number in intList: " << minValue << endl;
    }
    return 0;
}
