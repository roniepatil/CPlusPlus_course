#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // Pseudo-random = NOT truly random, but close


    // Seed
    srand(time(NULL));

    // Generate random number based on seed
    // % 6 gives random number between 0-5, that we add 1
    // This gives random number between 1-6 like on a dice
    // similarly you can use ( rand() % 100 )  + 1 to random number between 1 -100
    int a = (rand() % 6) + 1;

    std::cout << a << '\n';

    return 0;

}