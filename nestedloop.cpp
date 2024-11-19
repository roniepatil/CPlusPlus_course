#include <iostream>
#include <limits>
#include <cmath>


int main() {

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            std::cout << "(" << i << "," << j << ") ";
        }
        std::cout << '\n';
    }
    
    return 0;

}