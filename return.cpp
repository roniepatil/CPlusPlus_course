#include <iostream>
#include <cmath>
#include <limits>
#include <ctime>


std::string concatName(std::string fName, std::string lName);

int main(){

    // return = return a value back to the spot where you called
    // the encompassing function

    std::string firstName = "John";
    std::string lastName = "Doe";

    std::cout << "Hello " << concatName(firstName,lastName) << "\n";

    return 0;

}

std::string concatName(std::string fName, std::string lName){
    return fName + " " + lName;
}