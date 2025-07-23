#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}

int main() {

    // function template = describes what a function looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using different data types.

    // Since T and U, two different typename is used, arguments can be
    // different data types
    std::cout << max(1, 2.1) << '\n';


    return 0;

}


// template <typename T>

// T max(T x, T y){
//     return (x > y) ? x : y;
// }

// int main() {

//     // function template = describes what a function looks like.
//     //                     Can be used to generate as many overloaded functions
//     //                     as needed, each using different data types.

//     // Both arguments should be same data type
//     std::cout << max(1, 2) << '\n';


//     return 0;

// }