#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

int factorial(int num);

int main() {

    /*
        recursion = a programming technique where a function
                    invokes itself from within
                    break a complex concept into a repeatable single step


        (iterative vs recursive)

        advantage = less code and is cleaner
                    useful for sorting and searching algorithms

        disadvantages = uses more memory
                        slower
    */
    int num;
    std::cout << "Enter a number to find it's factorial: " << '\n';
    std::cin >> num;
    std::cout << factorial(num) << '\n';

    return 0;

}

int factorial(int num){
    if(num > 1){
        return num * factorial(num-1);
    }
    else{
        return 1;
    }
}