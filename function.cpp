#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


// functions are usally declared and defined at top of main, otherwise program
// will through out-of-scope error

// Some people like to write functions after the main function, for that,
// one has to write "Function Declaration (or Prototype)" at the top and 
// write "Function Definition" at bottom of main function

void happyBirthday(std::string name, int age);

int main() {

    // function = a block of reusable code
    std::string name = "John Doe";
    int age = 30;

    happyBirthday(name, age);

    return 0;

}

void happyBirthday(std::string name, int age){

    std::cout << "Happy birthday " << name << "! \n";
    std::cout << "You are " << age << " years old!";
}