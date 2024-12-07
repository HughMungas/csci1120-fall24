#include <iostream>
#include "searchSortAlgorithms.h"  

using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    modifiedBubbleSort(arr, length);

    cout << "Sorted array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
