#include "searchSortAlgorithms.h"

template <class elemType>
int seqOrdSearch(const elemType list[], int length, const elemType& item) {
    for (int i = 0; i < length; i++) {
        if (list[i] == item) {
            return i; 
        }
        if (list[i] > item) {
            break;
        }
    }
    return -1; 
}


template int seqOrdSearch<int>(const int[], int, const int&);
template int seqOrdSearch<double>(const double[], int, const double&);
