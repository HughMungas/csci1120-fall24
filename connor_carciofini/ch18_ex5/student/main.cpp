
#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;

int main() {
    // Write your main here
    int list[10] = {3, 4, 39, 11, 44, 55, 69, 111, 74, 2};

    modifiedBubbleSort(list, 10);

    int i = 0;
    while (i < 10) {
        cout << list[i] << endl;
        i++;
    }

    return 0;
}