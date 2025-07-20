#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name = "John Doe";
    int age = 21;
    bool student = false;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;

}