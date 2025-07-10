#include <iostream>
#include <limits>


int main() {

    //cout << (Insertion operator)
    //cin >> (Extraction operator)

    // std::string name;
    // std::cout << "What is your name ?" << '\n';
    // std::cin >> name;

    /*
    we can use std::getline(std::cin, name) if input has any white space in between,
    
    std::string name;
    std::cout << "What is your name ?" << '\n';
    std::getline(std::cin, name);

    int age;
    std::cout << "What is your age ?" << '\n';
    std::cin >> age;
    
    */

   /*
   Above works fine until std::cin >> age is moved above std::getline()
   For Example:

    int age;
    std::cout << "What is your age ?" << '\n';
    std::cin >> age;

    std::string name;
    std::cout << "What is your name ?" << '\n';
    std::getline(std::cin, name);

    In the line ""std::cin >> age;"" there is input buffer with new line character,
    which we dont pickup, when we reach the getline, it accepts the new line character that
    still within the buffer

    NOW USE TO FIX ABOVE:
    std::getline(std::cin >> std::ws, name);
   
   */
    
    

    // If you hit space in user input it will truncate upto first space
    // So use below method
    std::string fullName;
    int age;


    std::cout << "Whats your age?" << '\n';
    std::cin >> age;
    
    
    std::cout << "What's your full name ?" << '\n';




    // OLD WAY
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining characters in the stream
    // MODERN WAY
    std::getline(std::cin >> std::ws, fullName); // std::ws ignores leading whitespace in fullName

    // std::cout << "Hello " << name << ", How are you doing today?" << "\n";
    std::cout << "Hello " << fullName << ", You are " << age << " years old!"<< '\n';



    return 0;
}