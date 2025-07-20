#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

void printInfo(const std::string &name, const int &age);

int main() {

    // const parameter = parameter that is effectively read-only
    //                   code is more secure & conveys intent
    //                   useful for references and pointers

    std::string name = "Krishna";
    int age = 30;
    std::cout << "[main] Address of name: " << &name << '\n';
    std::cout << "[main] Address of age: " << &age << '\n';
    printInfo(name, age);
    return 0;

}

void printInfo(const std::string &name, const int &age){
    // Commented below will throw error 
    // "constParameters.cpp:23:9: error: assignment of read-only reference 'age'"
    //name = " ";
    //age = 40;
    std::cout << "[printInfo] Address of name: " << &name << '\n';
    std::cout << "[printInfo] Address of age: " << &age << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
}