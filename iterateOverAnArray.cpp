#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

// void displayArray(std::string array[]);


/*
    Important Note: This method works only when the array is in the 
    same scope where it was declared. If a C-style array is passed to 
    a function, it "decays" into a pointer to its first element, and 
    sizeof on that pointer will return the size of the pointer itself, 
    not the size of the original array.
    You uncomment understand the error thrown
*/

int main() {

    std::string names[] = {"Tom", "Henry", "Ford"};
    std::cout << sizeof(names) << '\n';

    for(int i = 0; i < sizeof(names)/sizeof(names[0]); i++){
        std::cout << names[i] << '\n';
    }
    
    // displayArray(names);
    return 0;


}

// void displayArray(std::string array[]){

//     std::cout << sizeof(array) << '\n';
//     for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
//         std::cout << array[i] << '\n';
//     }

// }