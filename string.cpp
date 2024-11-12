#include <iostream>
#include <limits>
#include <cmath>


int main() {

    std::string name;
    std::cout << "Enter your name" << '\n';
    std::getline(std::cin, name);
    
    // empty - boolean, checks if string is empty
    if(name.empty()){
        std::cout << "Please enter at least one character" << '\n';
    }
    // length() gives number of characters
    else if (name.length() > 12){
        std::cout << "Your name is longer than 12 characters" << '\n';
    }
    else{
        std::cout << "Hello " << name << '\n';
    }

    // append characters
    name.append("@gmail.com");
    std::cout << name << '\n';
    // at() - provides character at given index
    std::cout << name.at(0) << '\n';
    std::cout << name.at(1) << '\n';
    // insert - can add characters at given index
    name.insert(0, "Sir ");
    std::cout << name << '\n';
    // find() - returns the index of a given character
    std::cout << name.find('@') << '\n';
    // erase(ind1, ind2) - Erases characters between two indices. Exclusive of last index.
    std::cout << name.erase(0, 4) << '\n';
    // clear() - clears the string buffer
    name.clear();
    std::cout << "Hello " << name << '\n';


    return 0;

}