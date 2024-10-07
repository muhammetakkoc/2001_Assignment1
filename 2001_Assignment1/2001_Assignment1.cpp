
#include <iostream>
#include "UnorderedArray.h"
#include "OrderedArray.h"

int main() {
     
    UnorderedArray<int> ua;
    ua.push(5);
    ua.push(3);
    ua.push(8);
    std::cout << "Unordered Array: ";
    ua.print();  

    
    OrderedArray<int> oa(true);
    oa.push(5);
    oa.push(3);
    oa.push(8);
    oa.push(5); 
    std::cout << "Ordered Array (with duplicates): ";
    oa.print();  

    
    OrderedArray<int> oa_no_duplicates(false);
    oa_no_duplicates.push(5);
    oa_no_duplicates.push(3);
    oa_no_duplicates.push(8);
    oa_no_duplicates.push(5); 
    std::cout << "Ordered Array (no duplicates): ";
    oa_no_duplicates.print(); 

    return 0;
}
