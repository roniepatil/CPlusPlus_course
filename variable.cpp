#include <iostream>

int main() {

    //INTEGER (whole number)
    int x; //Declaration
    x = 5; //Assignment
    int y = 6.9;
    int sum = x + y;
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "sum = " << sum << '\n';


    //DOUBLE (number including decimal)
    double price = 3.99;
    std::cout << price << '\n';

    //CHAR (single character)
    char grade = 'A';
    char curreny = '$';
    std::cout << grade << '\n';

    //BOOLEAN (True or False)
    bool student = true;
    bool forSale = false;
    std::cout << student << '\n';
    std::cout << forSale << '\n';

    //STRING (objects that represent a sequence of texts)
    std::string name = "Bro";
    std::string address = "123 Baker St.";
    std::cout << name << '\n';
    std::cout << address << '\n';


    //CONST (keep variable from being modified - make it read only)
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << "circumference of circle = " << circumference << '\n';



    return 0;
}