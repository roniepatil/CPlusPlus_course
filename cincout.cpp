#include <iostream>
#include <limits>


int main() {

    //cout << (Insertion operator)
    //cin >> (Extraction operator)

    std::string name;
    std::cout << "What is your name ?" << '\n';
    std::cin >> name;
    
    

    // If you hit space in user input it will truncate upto first space
    // So use below method
    std::string fullName;
    std::cout << "What's your full name ?" << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining characters in the stream
    std::getline(std::cin >> std::ws, fullName); // std::ws ignores leading whitespace in fullName

    std::cout << "Hello " << name << ", How are you doing today?" << "\n";
    std::cout << "Hello " << fullName << ", How are you doing?" << '\n';



    return 0;
}