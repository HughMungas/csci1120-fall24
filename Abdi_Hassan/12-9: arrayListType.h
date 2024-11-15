#ifndef ARRAYLISTTYPE_H
#define ARRAYLISTTYPE_H

#include <iostream>
using namespace std;

template <class T>
class arrayListType {
protected:
    T* list;
    int length;
    int maxSize;

public:
    arrayListType(int size = 100);
    virtual ~arrayListType();

    virtual bool isEmpty() const;
    virtual bool isFull() const;
    virtual int listSize() const;
    virtual int maxListSize() const;
    virtual void print() const;  
    virtual void removeAt(int location);
    virtual void retrieveAt(int location, T& retItem) const;
    virtual void clearList();
    virtual T min() const = 0;  
};

#endif
