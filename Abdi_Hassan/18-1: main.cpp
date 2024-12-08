#include <iostream>
#include "searchSortAlgorithms.h" 

using namespace std;

int main() {
    const int size = 5;
    int list[size] = {10, 20, 30, 40, 50};
    int target;

    cout << "Enter a number to search: ";
    cin >> target;

    int result = recursiveSeqSearch(list, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << ".\n";
    } else {
        cout << "Element not found in the list.\n";
    }

    return 0;
}
