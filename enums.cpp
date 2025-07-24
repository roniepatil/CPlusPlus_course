#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, 
          thrusday = 4, friday = 5, saturday = 6};

enum Flavour {vanilla, chocolate, strawberry, mint};

enum Color {black, blue, red, pink, orange, yellow};

enum Planet {mercury = 4880, venus = 12104, earth = 12756,
             mars = 6784, jupiter = 142984, saturn = 108728,
             uranus = 51118, neptune = 49532, pluto = 2320};

int main() {

    // enums = a user-defined data type that consists
    //         of paired named-integer contants.
    //         GREAT if you have a set if potential options

    // Cannnot use string in switch case, it will through error

    Day today = friday;

    switch (today)
    {
    case sunday: std::cout << "It is Sunday!" << '\n';
        break;
    case monday: std::cout << "It is Monday!" << '\n';
        break;
    case tuesday: std::cout << "It is Tuesday!" << '\n';
        break;
    case wednesday: std::cout << "It is Wednesday!" << '\n';
        break;
    case thrusday: std::cout << "It is Thrusday!" << '\n';
        break;
    case friday: std::cout << "It is Friday!" << '\n';
        break;
    case saturday: std::cout << "It is Saturday!" << '\n';
        break;
    
    default:
        break;
    }

    return 0;

}