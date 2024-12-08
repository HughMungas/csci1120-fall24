#include <iostream>
#include "unorderedLinkedList.h"

using namespace std;

int main() {
    UnorderedLinkedList<int> list;

    // Append some values to the list
    list.append(64);
    list.append(34);
    list.append(25);
    list.append(12);
    list.append(22);
    list.append(11);

    cout << "Original list: ";
    list.printList();

    // Perform selection sort
    list.selectionSort();

    cout << "Sorted list: ";
    list.printList();

    return 0;
}
