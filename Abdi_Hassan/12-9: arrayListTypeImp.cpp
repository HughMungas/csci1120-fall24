#include "arrayListType.h"
#include <iostream>

template <class T>
arrayListType<T>::arrayListType(int size) : maxSize(size), length(0) {
    list = new T[size];
}

template <class T>
arrayListType<T>::~arrayListType() {
    delete[] list;
}

template <class T>
bool arrayListType<T>::isEmpty() const {
    return length == 0;
}

template <class T>
bool arrayListType<T>::isFull() const {
    return length == maxSize;
}

template <class T>
int arrayListType<T>::listSize() const {
    return length;
}

template <class T>
int arrayListType<T>::maxListSize() const {
    return maxSize;
}

template <class T>
void arrayListType<T>::print() const {
    if (length == 0) {
        cout << "The list is empty." << endl;
    } else {
        for (int i = 0; i < length; i++) {
            cout << list[i] << " ";
        }
        cout << endl;
    }
}

template <class T>
void arrayListType<T>::removeAt(int location) {
    if (location >= 0 && location < length) {
        for (int i = location; i < length - 1; i++) {
            list[i] = list[i + 1];  
        }
        length--;
    }
}

template <class T>
void arrayListType<T>::retrieveAt(int location, T& retItem) const {
    if (location >= 0 && location < length) {
        retItem = list[location];
    }
}

template <class T>
void arrayListType<T>::clearList() {
    length = 0;
}

template <class T>
T arrayListType<T>::min() const {
    if (length == 0) {
        cout << "List is empty, cannot find minimum." << endl;
        return T(); 
    }

    T minVal = list[0];
    for (int i = 1; i < length; i++) {
        if (list[i] < minVal) {
            minVal = list[i];
        }
    }
    return minVal;
}

template class arrayListType<int>;

