#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main() {
    unorderedArrayListType<int> myList(10);  
    
    myList.insertEnd(10);
    myList.insertEnd(20);
    myList.insertEnd(30);
    myList.insertEnd(40);
    myList.insertEnd(2);  
    myList.insertEnd(31); 
    
    cout << "The list: ";
    myList.print();
    
    int minVal = myList.min();
    cout << "The smallest number in intList: " << minVal << endl;
    
    myList.remove(2);
    cout << "The list after removal: ";
    myList.print();
    
    minVal = myList.min();
    cout << "The smallest number in intList: " << minVal << endl;
    
    return 0;
}
