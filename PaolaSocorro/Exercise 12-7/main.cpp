//Data:  21 10 56 43 78 11 20 18 
 
#include <iostream> 
#include <sstream> 
#include "unorderedArrayListType.h"

using namespace std;

int main() {
    string inputLine;
    int num, minValue;

    cout << "Enter a list of numbers separated by spaces: ";
    getline(cin, inputLine); 

    unorderedArrayListType list(100);  
    stringstream ss(inputLine);

    while (ss >> num) {
        list.insertEnd(num);
    }

    cout << "Original List: ";
    list.print();

    list.removeAt(0);

    cout << "List after removing element at index 0: ";
    list.print();
    return 0;
}
