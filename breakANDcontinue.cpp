#include <iostream>
#include <limits>
#include <cmath>


int main() {

    // break = break out of a loop
    // continue = skip current iteration
    
    for(int i = 1; i <= 15; i++){
        if(i==10){
            break;
        }
        std::cout << i << '\n';
    }

    for(int i = 1; i <= 15; i++){
        if(i==10){
            continue;;
        }
        std::cout << i << '\n';
    }

    
    return 0;

}