#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // fill = Fills a range of elements with a specified value
    //        fill(begin, end, value)
    const int SIZE = 9; 
    std::string foods[SIZE];

    fill(foods, foods + SIZE/3, "Pizza");
    fill(foods + SIZE/3, foods + (SIZE/3)*2, "Pasta");
    fill(foods + (SIZE/3)*2, foods + SIZE, "Gelato");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;

}