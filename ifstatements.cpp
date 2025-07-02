#include <iostream>
#include <limits>
#include <cmath>


int main() {
    int age;

    std::cout << "What's your age?" << '\n';
    std::cin >> age;

    // if statements = do something if a condition is true.
    //                 if not, then don't do it.

    if(age >= 18){
        std::cout << "You can enter this site!" << '\n';
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!" << '\n';
    }
    else{
        std::cout << "You can cannot enter this site!" << '\n';
    }

    return 0;

}