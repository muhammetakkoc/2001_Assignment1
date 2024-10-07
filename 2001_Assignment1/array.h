#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {
protected:
    T* data;
    int size;
    int capacity;
    void expand();  

public:
    Array(int initialCapacity = 2);
    virtual ~Array();
    virtual void push(T value);
    int getSize() const;
    T& operator[](int index);
    void print() const;
};

#include "Array.cpp"  
#endif
