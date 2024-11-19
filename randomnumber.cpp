#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // Pseudo-random = NOT truly random, but close


    // Seed
    srand(time(NULL));

    // Generate random number based on seed
    int a = (rand() % 6) + 1;

    std::cout << a << '\n';

    return 0;

}