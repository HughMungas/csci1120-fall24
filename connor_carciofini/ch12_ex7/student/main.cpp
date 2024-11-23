//Data:  21 10 56 43 78 11 20 18 
 
#include <iostream> 
#include "unorderedArrayListType.h"
#include "arrayListType.h"

using namespace std;

int main() {
    // int* aList = new int[10];

    unorderedArrayListType aList;

    for (int i = 0; i < 10; i++) {
        aList.insertAt(i, i+1);

    }

    cout << aList.listSize();
    // cout << aList.isEmpty();
    return 0;
}