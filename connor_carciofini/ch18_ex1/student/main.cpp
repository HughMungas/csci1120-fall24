
#include <iostream>
#include "searchSortAlgorithms.h"     

using namespace std;

int main() {
    int list[8] = {2, 3, 4, 10, 12, 40, 7, 69};

    cout << recursiveSeqSearch(list, 10, 69) << endl;

    return 0;
}