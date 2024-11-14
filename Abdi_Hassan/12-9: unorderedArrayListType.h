#ifndef UNORDEREDARRAYLISTTYPE_H
#define UNORDEREDARRAYLISTTYPE_H

#include "arrayListType.h"

template <class T>
class unorderedArrayListType : public arrayListType<T> {
public:
    unorderedArrayListType(int size = 100);
    void insertAt(int location, T insertItem);
    void insertEnd(T insertItem);
    int seqSearch(T searchItem) const;
    void remove(T removeItem);
    T min() const override;
};

#endif
