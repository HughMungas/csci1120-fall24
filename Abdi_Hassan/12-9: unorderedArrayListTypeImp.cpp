#include "unorderedArrayListType.h"
#include <iostream>

template <class T>
unorderedArrayListType<T>::unorderedArrayListType(int size) : arrayListType<T>(size) {}

template <class T>
void unorderedArrayListType<T>::insertAt(int location, T insertItem) {
    if (location < 0 || location >= this->maxSize) {
        cout << "The position of the item to be inserted is out of range." << endl;
    } else if (this->length >= this->maxSize) {  
        cout << "Cannot insert in a full list." << endl;
    } else {
        for (int i = this->length; i > location; i--) {
            this->list[i] = this->list[i - 1];  
        }
        this->list[location] = insertItem;  
        this->length++;  
    }
}

template <class T>
void unorderedArrayListType<T>::insertEnd(T insertItem) {
    if (this->length >= this->maxSize) {  // List is full
        cout << "Cannot insert in a full list." << endl;
    } else {
        this->list[this->length] = insertItem;  
        this->length++;  
    }
}

template <class T>
int unorderedArrayListType<T>::seqSearch(T searchItem) const {
    int loc = 0;
    bool found = false;

    while (loc < this->length && !found) {
        if (this->list[loc] == searchItem) {
            found = true;
        } else {
            loc++;
        }
    }

    if (found) {
        return loc;
    } else {
        return -1;
    }
}

template <class T>
void unorderedArrayListType<T>::remove(T removeItem) {
    int loc;

    if (this->length == 0) {
        cout << "Cannot delete from an empty list." << endl;
    } else {
        loc = seqSearch(removeItem);

        if (loc != -1) {
            this->removeAt(loc);  
        } else {
            cout << "The item to be deleted is not in the list." << endl;
        }
    }
}

template <class T>
T unorderedArrayListType<T>::min() const {
    if (this->length == 0) {
        cout << "List is empty, cannot find minimum." << endl;
        return T();  
    }

    T minVal = this->list[0];
    for (int i = 1; i < this->length; i++) {
        if (this->list[i] < minVal) {
            minVal = this->list[i];
        }
    }
    return minVal;
}

template class unorderedArrayListType<int>;
