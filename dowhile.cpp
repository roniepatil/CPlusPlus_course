#include <iostream>
#include <limits>
#include <cmath>


int main() {

    // do while loop = do some block of code first,
    //                  THEN, repeat again if condition is true.
    
    int number;

    do{
        std::cout << "Enter a positive number: " << '\n';
        std::cin >> number;
    }while(number < 0);

    std::cout << "The number is: " << number << '\n';
    return 0;

}