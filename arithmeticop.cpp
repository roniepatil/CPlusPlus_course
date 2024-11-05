#include <iostream>


int main(){

    // Arithmetic operators = return the result of a specific arithmetic opeartion (+ - * /)
    // parenthesis > multiplication & division > addition & subtraction
    
    int students = 20;
    int pens = (7 - 5) + 4 * 3 / 2;

    students = students + 1;
    students += 1;
    students++;

    students -= 1;
    students--;

    students *= 2;

    students /= 2;

    int remainder = students % 2;

    std::cout << students << '\n';
    std::cout << remainder << '\n';
    std::cout << pens << '\n';
    
    return 0;
}