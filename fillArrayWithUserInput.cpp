#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter the food you like or 'q' to quit: #" << i+1 << " ";
        std::getline(std::cin, temp);

        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "---------------------------------------" << '\n';
    std::cout << "These are the food you like:P" << '\n';
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }

    return 0;

}