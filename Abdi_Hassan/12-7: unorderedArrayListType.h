#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType

#include <iostream>
#include "arrayListType.h"

using namespace std;

class unorderedArrayListType : public arrayListType {
public:
    unorderedArrayListType(int size = 100) : arrayListType(size) {}

    void insertEnd(int insertItem) override {
        if (isFull()) {
            cout << "List is full. Cannot insert." << endl;
        } else {
            list[length] = insertItem;
            length++;
        }
    }

    void insertAt(int location, int insertItem) override {
        if (location < 0 || location >= maxSize) {
            cout << "Location out of range." << endl;
        } else if (isFull()) {
            cout << "List is full. Cannot insert." << endl;
        } else {
            for (int i = length; i > location; i--) {
                list[i] = list[i - 1];
            }
            list[location] = insertItem;
            length++;
        }
    }

    int seqSearch(int searchItem) const override {
        for (int i = 0; i < length; i++) {
            if (list[i] == searchItem)
                return i;
        }
        return -1;
    }

    void remove(int removeItem) override {
        int location = seqSearch(removeItem);
        if (location != -1)
            removeAt(location);
        else
            cout << "Item not found in the list." << endl;
    }

    void replaceAt(int location, int repItem) override {
        if (location < 0 || location >= length) {
            cout << "Location out of range." << endl;
        } else {
            list[location] = repItem;
        }
    }
};

#endif
