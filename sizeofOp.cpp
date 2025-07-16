#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // sizeof() = determines the size in bytes of a
    //            variable, data type, class, objects, etc

    std::string name = "John Doe";
    double age = 30;
    char grade = 'A';
    bool student = false;
    char grades[] = {'A', 'B', 'C', 'D'};
    std::string cars[] = {"Challenger", "Mustang", "Camaro"};

    // String is 32 bytes, it size of address reference, changing string length wont change this value
    std::cout << "String has " <<  sizeof(name) << " Bytes" << '\n';
    std::cout << "Double has " << sizeof(age) << " Bytes" << '\n';
    std::cout << "Char has " << sizeof(grade) << " Bytes" << '\n';
    std::cout << "Bool has " << sizeof(student) << " Bytes" << '\n';
    std::cout << "Array of 4 chars' has " << sizeof(grades) << " Bytes" << '\n';
    std::cout << "Array of 3 strings' has " << sizeof(cars) << " Bytes" << '\n';

    std::cout << "Array grades has " << sizeof(grades)/sizeof(char) << " elements" << '\n';
    std::cout << "Array cars has " << sizeof(cars)/sizeof(std::string) << " elements" << '\n';

    return 0;

}