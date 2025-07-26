#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    // We need to add this we create an object and not assign values
    Pizza(){}

    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};

int main() {

    // overloaded constructors = multiple constuctors w/ same name but
    //                           different parameters allows for varying
    //                           arguments when instantiating an object

    Pizza pizza1("Mushrooms");
    Pizza pizza2("Mushrooms", "Onions");
    // If Pizza(){} was not written in class definition below line will throw error.
    Pizza pizza3;

    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    return 0;

}