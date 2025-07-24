#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, 
          thrusday = 4, friday = 5, saturday = 6};

int main() {

    // enums = a user-defined data type that consists
    //         of paired named-integer contants.
    //         GREAT if you have a set if potential options

    // Cannnot use string in switch case, it will through error

    Day today = sunday;

    switch (today)
    {
    case sunday: std::cout << "It is Sunday!" << '\n';
        break;
    case monday: std::cout << "It is monday!" << '\n';
        break;
    case tuesday: std::cout << "It is tuesday!" << '\n';
        break;
    case wednesday: std::cout << "It is wednesday!" << '\n';
        break;
    case thrusday: std::cout << "It is thrusday!" << '\n';
        break;
    case friday: std::cout << "It is friday!" << '\n';
        break;
    case saturday: std::cout << "It is saturday!" << '\n';
        break;
    
    default:
        break;
    }

    return 0;

}