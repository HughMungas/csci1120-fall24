#include <iostream>
#include "searchSortAlgorithms.h"     

using namespace std;

int main() {
    int list[100];
    int i = 0;
    while (i < 99){
        list[i] = i + 1;
        i++;
    }

    cout << reqBinarySearch(list, 33, 0, 99) << endl;

    return 0;
}