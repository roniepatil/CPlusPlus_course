#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything ( null pointer )

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    // When using pointers, be careful that your code isn't
    // deferecing nullptr or pointing to free memory
    // this will cause undefined behaviour

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "The address was not assigned!" << '\n';
        // DONT DO IT !!!
        //  If you comment "pointer = &x;" or never assign previously 
        // assigned null pointer to address and try to deference it.
        // It will crash the program or lead to unexpected behaviour.
        // std::cout << *pointer << '\n';
    }
    else{
        std::cout << "The address was assigned!" << '\n';
        std::cout << *pointer << '\n';
    }

    return 0;

}