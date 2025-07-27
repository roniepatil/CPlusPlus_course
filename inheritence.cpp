#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

class Shape{
    public:
        double area;
        double volume;

        // virtual keyword enables polymorphism 
        virtual void printArea(){
            std::cout << "Area: " << area << '\n';
        };
        void printVolume(){
            std::cout << "Volume: " << volume << '\n';
        };
};

class Cube : public Shape{
    public:
        double side;

        Cube(double side){
            this->side = side;
            this->area = pow(side, 2) * 6;
            this->volume = pow(side, 3); 
        };
        // 'override' is optional but good practice.
        // It tells the compiler you intend to override a base class virtual function.
        void printArea() override{
            std::cout << "Area of cube is: " << area << '\n';
        };
};

class Sphere : public Shape{
    public:
        double radius;

        Sphere(double radius){
            this->radius = radius;
            this->area = 4 * 3.14 * pow(radius, 2);
            this->volume = (4/3.0) * 3.14 * pow(radius, 3); 
        };
};

int main() {

    // Inheritence = A class can receive sttributes and methods from another class
    //               Children classes inherit from a Parent class
    //               Helps to reuse similar code found within multiple classes

    Sphere sphere(2.0);
    Cube cube(4.1);

    sphere.printArea();
    sphere.printVolume();

    cube.printArea();
    cube.printVolume();


    return 0;

}