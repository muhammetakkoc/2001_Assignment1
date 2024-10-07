#ifndef UNORDEREDARRAY_H
#define UNORDEREDARRAY_H

#include "Array.h"

template <typename T>
class UnorderedArray : public Array<T> {
public:
    void push(T value) override;
};

#include "UnorderedArray.cpp"
#endif
