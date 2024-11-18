
#include <iostream>
#include "unorderedArrayListType.h"
 
using namespace std; 

unorderedArrayListType::unorderedArrayListType(int size) : arrayListType(size) {}

unorderedArrayListType::~unorderedArrayListType() {}

void unorderedArrayListType::removeAt(int location)
{
    if (location < 0 || location >= length)
    {
        cout << "The location of the item to be removed "
             << "is out of range." << endl;
    }
    else
    {
        // Swap the item at location with the last item
        list[location] = list[length - 1];
        length--;  // Decrease the length of the list
    }
}

void unorderedArrayListType::insertAt(int location, int insertItem)
{
    if (isFull())
    {
        cout << "The list is full. Cannot insert item." << endl;
    }
    else if (location < 0 || location > length)
    {
        cout << "The location is out of range." << endl;
    }
    else
    {
        // Shift elements to the right to make space for the new item
        for (int i = length; i > location; --i)
        {
            list[i] = list[i - 1];
        }
        list[location] = insertItem;
        length++;
    }
}

void unorderedArrayListType::insertEnd(int insertItem)
{
    if (isFull())
    {
        cout << "The list is full. Cannot insert item." << endl;
    }
    else
    {
        list[length] = insertItem;
        length++;
    }
}

// Implement replaceAt (replace an element at a specified location)
void unorderedArrayListType::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
    {
        cout << "The location is out of range." << endl;
    }
    else
    {
        list[location] = repItem;
    }
}

// Implement seqSearch (simple sequential search)
int unorderedArrayListType::seqSearch(int searchItem) const
{
    for (int i = 0; i < length; i++)
    {
        if (list[i] == searchItem)
        {
            return i;  // Return index where the item is found
        }
    }
    return -1;  // Item not found
}

void unorderedArrayListType::remove(int removeItem)
{
    int index = seqSearch(removeItem);
    if (index != -1)
    {
        removeAt(index);  // Use the optimized removeAt function
    }
    else
    {
        cout << "Item not found in the list." << endl;
    }
}
