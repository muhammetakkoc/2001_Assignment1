#include <iostream>
#include <stdexcept>
#include "Array.h"

template <typename T>
Array<T>::Array(int initialCapacity) : size(0), capacity(initialCapacity) {
    data = new T[capacity];
}

template <typename T>
Array<T>::~Array() {
    delete[] data;
}

template <typename T>
void Array<T>::expand() {
    capacity *= 2;
    T* newData = new T[capacity];
    for (int i = 0; i < size; ++i) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
}

template <typename T>
void Array<T>::push(T value) {
    if (size >= capacity) {
        expand();
    }
    data[size++] = value;
}

template <typename T>
int Array<T>::getSize() const {
    return size;
}

template <typename T>
T& Array<T>::operator[](int index) {
    if (index >= size || index < 0) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T>
void Array<T>::print() const {
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
