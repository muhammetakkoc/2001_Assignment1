#ifndef ORDEREDARRAY_H
#define ORDEREDARRAY_H

#include "Array.h"

template <typename T>
class OrderedArray : public Array<T> {
    bool allowDuplicates;

public:
    OrderedArray(bool allowDuplicates = true);
    void push(T value) override;
};

#include "OrderedArray.cpp"
#endif


