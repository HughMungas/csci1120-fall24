#include <iostream>
#include "searchSortAlgorithms.h" 

using namespace std;

int main() {
    int intList[] = {1, 3, 5, 7, 9};
    int intSize = sizeof(intList) / sizeof(intList[0]);

    int searchItem = 5;
    int result = seqOrdSearch(intList, intSize, searchItem);
    if (result != -1) {
        cout << "Item " << searchItem << " found at index " << result << "." << endl;
    } else {
        cout << "Item " << searchItem << " not found." << endl;
    }

    searchItem = 10;
    result = seqOrdSearch(intList, intSize, searchItem);
    if (result != -1) {
        cout << "Item " << searchItem << " found at index " << result << "." << endl;
    } else {
        cout << "Item " << searchItem << " not found." << endl;
    }

    searchItem = 1;
    result = seqOrdSearch(intList, intSize, searchItem);
    if (result != -1) {
        cout << "Item " << searchItem << " found at index " << result << "." << endl;
    } else {
        cout << "Item " << searchItem << " not found." << endl;
    }


    searchItem = 9;
    result = seqOrdSearch(intList, intSize, searchItem);
    if (result != -1) {
        cout << "Item " << searchItem << " found at index " << result << "." << endl;
    } else {
        cout << "Item " << searchItem << " not found." << endl;
    }

    return 0;
}
