#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // foreach loop = loop that eases the traversal over  an
    //                iterable data set

    std::string names[] = {"Tom", "Henry", "Ford"};

    // for each goes from start to end of array
    // Syntax
    // for(datatype   curr ele : iterable dataset){}
    for(std::string name : names){
        std::cout << name << '\n';
    }

    return 0;

}