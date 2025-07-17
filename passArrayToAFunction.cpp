#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

void displayArray(std::string array[], int size);


int main() {

    std::string names[] = {"Tom", "Henry", "Ford"};
    // We have to pass sizeof array here because as we previously learned
    // in iterateOverAnArray.cpp the secondary function will only know
    // size of pointer pointing to the array and not the actual size of it.
    displayArray(names, sizeof(names)/sizeof(names[0]));
    return 0;


}

void displayArray(std::string array[], int size){

    for(int i = 0; i < size; i++){
        std::cout << array[i] << '\n';
    }

}