#include <iostream>
#include <limits>
#include <cmath>


int main() {

    int month;
    std::cout << "Enter month (1-12)" << '\n';
    std::cin >> month;
    // char grade;
    // std::cout << "Enter the grade (A-F)" << '\n';
    // std::cin >> grade;

    switch(month){
        case 1:
            std::cout << "It is January" << '\n';
            break;
        case 2:
            std::cout << "It is February" << '\n';
            break;
        case 3:
            std::cout << "It is March" << '\n';
            break;
        case 4:
            std::cout << "It is April" << '\n';
            break;

        // So on so forth....
        default:
            std::cout << "Please enter number 1-12" << '\n';

    }

    // switch(grade){
    //     case 'A':
    //         std::cout << "You did great!" << '\n';
    //         break;
    //     case 'B':
    //         std::cout << "You did good" << '\n';
    //         break;
    //     case 'C':
    //         std::cout << "You did okay" << '\n';
    //         break;

    //     // So on so forth
    //     default:
    //         std::cout << "Please enter grade A to F" << '\n';
    // }

    return 0;

}