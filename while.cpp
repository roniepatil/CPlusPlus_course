#include <iostream>
#include <limits>
#include <cmath>


int main() {

    std::string name;

    while(name.empty()){

        std::cout << "Enter your name: " << '\n';
        std::getline(std::cin, name);

    }

    std::cout << "Hello " << name << '\n';
    
    return 0;

}