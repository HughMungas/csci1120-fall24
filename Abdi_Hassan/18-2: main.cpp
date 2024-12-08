#include <iostream>
#include "searchSortAlgorithms.h" // Include the header where the function is declared

using namespace std;

// Recursive Binary Search Function
template <class elemType>
int recursiveBinarySearch(const elemType list[], int left, int right, const elemType& item) {
    if (left > right) {
        return -1; // Base case: item not found
    }
    
    int mid = left + (right - left) / 2;

    if (list[mid] == item) {
        return mid; // Base case: item found
    }

    if (list[mid] > item) {
        return recursiveBinarySearch(list, left, mid - 1, item); // Search left subarray
    } else {
        return recursiveBinarySearch(list, mid + 1, right, item); // Search right subarray
    }
}

int main() {
    const int size = 5;
    int list[size] = {10, 20, 30, 40, 50}; // Sorted array for binary search
    int target;

    cout << "Enter a number to search using Binary Search: ";
    cin >> target;

    // Call the Recursive Binary Search Function
    int result = recursiveBinarySearch(list, 0, size - 1, target);

    if (result != -1) {
        cout << "Element found at index " << result << ".\n";
    } else {
        cout << "Element not found in the list.\n";
    }

    return 0;
}
