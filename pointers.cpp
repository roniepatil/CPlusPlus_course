#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // pointers = variable that store a memory address of another variable
    //            sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "Krishna";
    int age = 30;
    std::string powers[5] = {"Power1", "Power2", "Power3", "Power4", "Power5"};

    std::string *pName = &name;
    int *pAge = &age;
    // For arrays, "&" preceeding variable is not required as variable itself
    // a address, unlike regular string and int as seen above.
    std::string *pPowers = powers;

    // These will give memory addressess
    std::cout << pName << '\n';
    std::cout << pAge << '\n';
    std::cout << pPowers << '\n';

    //  Using "*" deferencing we obtain value at the address
    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pPowers << '\n';

    // If one has to change value, deference and assign
    // This will modify the original variable data, since this pointer is
    // is just pointing to that variable
    *pName = "Bharat";
    std::cout << name << '\n';

    return 0;

}