#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

void swap(std::string &x, std::string &y);
int main(){

    std::string x = "Water";
    std::string y = "Milk";

    swap(x, y);

    std::cout << "X:" << x << '\n';
    std::cout << "Y:" << y << '\n';

    return 0;
}

// void swap(std::string x, std::string y){...}
// If one uses above without "&" infornt of variable, one is passing by
// value, which creates a copy of original value and not the same variable

// Below with "&" is passing by reference, which passes the memory address
// of the original variable
void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}