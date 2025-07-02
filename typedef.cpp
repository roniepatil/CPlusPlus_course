#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef variables end with _t to denote type definition
typedef std::string text_t;
// typedef bool bool_t;
// typedef int number_t;
using number_t = int;
using bool_t = bool;

int main(){

    // typedef =   Reserved keyword used to create an additional name (alias) for another data type.
    //             New identifier for an existing type
    //             Helps with readability and reduces typos.
    //             Use when there is a clear benefit
    //             Replaced with 'using' (work better w/ templates)

    pairlist_t pair;
    text_t name = "rob";
    bool_t student = false;

    number_t age = 23; 

    std::cout << name << " is " << age << '\n';
    std::cout << "Is he a student: " << std::boolalpha << student << '\n';
    


    return 0;
}