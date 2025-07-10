#include <iostream>
#include <limits>
#include <cmath>


int main() {

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true.
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: " << '\n';
    std::cin >> temp;

    if (temp >= 0 && temp < 30){
        std::cout << "It is a good temperature" << '\n';
    }
    else{
        std::cout << "It is a bad temperature" << '\n';
    }

    if (temp < 0 || temp >= 30){
        std::cout << "It is a bad temperature" << '\n';
    }
    else{
        std::cout << "It is a good temperature" << '\n';
    }

    if(!sunny){
        std::cout << "It is cloudy" << '\n';
    }
    else{
        std::cout << "It is sunny" << '\n';
    }

    
    return 0;

}