#include "OrderedArray.h"

template <typename T>
OrderedArray<T>::OrderedArray(bool allowDuplicates) : allowDuplicates(allowDuplicates) {}

template <typename T>
void OrderedArray<T>::push(T value) {
    
    if (!allowDuplicates) {
        for (int i = 0; i < Array<T>::size; ++i) {
            if (Array<T>::data[i] == value) {
                std::cout << "Duplicate value: " << value << " not added." << std::endl;
                return;
            }
        }
    }

    
    if (Array<T>::size >= Array<T>::capacity) {
        Array<T>::expand();
    }

    int i;
    for (i = Array<T>::size - 1; (i >= 0 && Array<T>::data[i] > value); --i) {
        Array<T>::data[i + 1] = Array<T>::data[i];  
    }
    Array<T>::data[i + 1] = value;
    Array<T>::size++;
}
