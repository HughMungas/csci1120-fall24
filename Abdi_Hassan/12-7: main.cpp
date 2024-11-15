#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main() {
    unorderedArrayListType list(10);  

    list.insertEnd(21);
    list.insertEnd(10);
    list.insertEnd(56);
    list.insertEnd(43);
    list.insertEnd(78);
    list.insertEnd(11);

    cout << "Original List: ";
    list.print();

    list.removeAt(0);

    cout << "List after removing element at index 0: ";
    list.print();

    
    list.remove(56);

    cout << "List after removing item 56: ";
    list.print();

    return 0;
}
