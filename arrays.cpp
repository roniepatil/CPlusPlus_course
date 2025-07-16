#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // array =  a data structure that can hold multiple values
    // values are accessed by an index number
    // "kind of like a variable that holds multiple values"

    // 1st way to declare and define values
    std::string cars[] = {"Corvette", "Mustang", "Camaro"};

    cars[0] = "Challenger";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    
    // 2nd way to declare with size and later set values
    std::string suvs[3];

    suvs[0] = "Durango";
    suvs[1] = "Explorer";
    suvs[2] = "Traverse";

    std::cout << suvs[0] << '\n';
    std::cout << suvs[1] << '\n';
    std::cout << suvs[2] << '\n';

    return 0;

}