#include <list>
#include <iostream>

template <class elemType>
void modifiedBubbleSort(elemType list[], int length)
{
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length - i; j++) {
            if (list[j + 1] && (list[j] > list[j + 1])) {
                std::cout << "SWAPPING" << list[j] << " & " << list[j + 1] << std::endl;
                elemType to_swap;
                to_swap = list[j];
                list[j] = list[j + 1];
                list[j + 1] = to_swap;
            }
        }
    }
}