#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

class Car{
    public:
        std::string make = "Dodge";
        std::string model;
        int year;
        std::string color;

        // Classes have functions, unlike struct
        void accelerate(){
            std::cout << "Car is accelerating!" << '\n';
        };

        void brake(){
            std::cout << "Car is braking!" << '\n';
        };

};

int main() {

    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items (ex. Phone, Book, Dog)
    //          Created from a class which acts as a "blue-print"

    Car car1;

    car1.model = "Challenger";
    car1.year = 2023;
    car1.color = "Black";

    Car car2;

    car2.make = "Lambhorghini";
    car2.model = "Huracan";
    car2.year = 2024;
    car2.color = "Grey";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    std::cout << '\n';
    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';

    std::cout << '\n';
    car1.accelerate();
    car1.brake();


    return 0;

}