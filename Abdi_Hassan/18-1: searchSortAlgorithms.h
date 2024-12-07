#ifndef SEARCH_SORT_ALGORITHMS_H
#define SEARCH_SORT_ALGORITHMS_H

template <class elemType>
int recursiveSeqSearch(const elemType list[], int length, const elemType& item, int loc = 0) {
    if (loc >= length) {
        return -1;
    }
    if (list[loc] == item) {
        return loc; 
    }
    return recursiveSeqSearch(list, length, item, loc + 1); 
}

#endif 
