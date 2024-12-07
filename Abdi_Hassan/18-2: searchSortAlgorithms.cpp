#include "searchSortAlgorithms.h"

template <class elemType>
int recursiveBinarySearch(const elemType list[], int left, int right, const elemType& item) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (list[mid] == item) {
        return mid;
    }
    if (list[mid] > item) {
        return recursiveBinarySearch(list, left, mid - 1, item);
    }
    return recursiveBinarySearch(list, mid + 1, right, item);
}

// Explicit template instantiation
template int recursiveBinarySearch<int>(const int list[], int left, int right, const int& item);
