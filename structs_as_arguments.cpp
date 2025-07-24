#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintColor(Car &car, std::string color);

int main() {

    Car car1;
    car1.model = "Challenger";
    car1.year = 2023;
    car1.color = "Black";

    Car car2;
    car2.model = "Mustang";
    car2.year = 2024;
    car2.color = "Grey";

    printCar(car1);
    printCar(car2);

    paintColor(car1, "Red");
    paintColor(car2, "Blue");

    printCar(car1);
    printCar(car2);    


    return 0;

}

void printCar(Car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintColor(Car &car, std::string color){
    car.color = color;
}