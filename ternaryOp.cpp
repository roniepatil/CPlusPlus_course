#include <iostream>
#include <limits>
#include <cmath>


int main() {

    // ternary operator ?: = replacement to an if/else statement
    // condition ? experssion1 : experssion2;
    int grade = 65;
    grade >= 60 ? std::cout << "You pass!" << '\n' : std::cout << "You fail!" << '\n';

    int num = 9;
    //num % 2 == 1 ? std::cout << "ODD" << '\n': std::cout << "EVEN" << '\n';
    // Can also be written 
    num % 2 ? std::cout << "ODD" << '\n': std::cout << "EVEN" << '\n';

    bool hungry = true;
    hungry ? std::cout << "You are hungry!" << '\n': std::cout << "You are full" << '\n';
    // Below works as well
    std::cout << (hungry ? "You are hungry!" : "You are full!") << '\n';
    
    return 0;

}