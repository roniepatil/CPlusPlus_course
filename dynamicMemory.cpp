#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    /*
        dynamic memory = Memory that is allocated after the program
                         is already compiled & running.
                         Use the 'new' operator to allocate
                         memory in the heap rather than the stack

                         Useful when we don't know how much memory
                         we will need. Makes our programs more fexible
                         especially when accepting user input.
    
    */
    // Create a safe pointer
    char *pGrades = nullptr;
    int *pAge = nullptr;
    std::string *pName = nullptr;
    int size;
    pAge = new int;
    pName = new std::string;

    std::cout << "Enter student's name: " << '\n';
    std::cin >> *pName;

    std::cout << "Enter student's age: " << '\n';
    std::cin >> *pAge;

    std::cout << "How many grades you'd like to enter?: ";
    std::cin >> size;
    // Allocate memory for an array of char of size(user input)
    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << '\n';
        std::cin >> pGrades[i];
    }

    // Use the arrow operator to call a function that modifies the string
    /*
        For objects like string, but with a helpful shortcut for accessing 
        member functions (like .length() or .append()).

        P) To get the whole object's value, you still use *.
        P) To call one of the object's member functions, you use the arrow 
        operator ->.

        The arrow operator -> is just a clean shortcut that both 
        dereferences the pointer and accesses the member function in one step.
    */
    pName->append(" SURNAME");
    std::cout << "Student's name is: " << *pName << '\n';


    std::cout << "Student's age is: " << *pAge << '\n';

    for(int i = 0; i < size; i++){
        // The expression pGrades[i] is used because the array subscript 
        // operator [] is essentially a convenient shortcut that already 
        // includes dereferencing.
        // In C++, when you use the array subscript operator [] with a 
        // pointer, pGrades[i] is interpreted by the compiler 
        // as *(pGrades + i).
        std::cout << pGrades[i] << ' ';
    }

    // Deallocate the memory for the entire array
    // At this moment, pGrades becomes a dangling pointer.
    delete[] pGrades;
    delete pAge;
    delete pName;

    // BEST PRACTICE: Set the pointer to nullptr to prevent reuse.
    pGrades = nullptr;
    pAge = nullptr;
    pName = nullptr;


    return 0;

}