#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    srand(time(0));

    int a = (rand() % 3) + 1;

    switch (a){
        case 1: std::cout << "You win sticker!" << '\n';
            break;
        case 2: std::cout << "You win cash prize!" << '\n';
            break;
        case 3: std::cout << "You win car!" << '\n';
            break;
    }

    return 0;

}