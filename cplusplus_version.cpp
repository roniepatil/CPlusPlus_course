#include <iostream>

int main() {
    long cpp_version = __cplusplus;
    std::cout << "C++ Standard Version: ";
    if (cpp_version == 202302L) {
        std::cout << "C++23";
    } else if (cpp_version == 202002L) {
        std::cout << "C++20";
    } else if (cpp_version == 201703L) {
        std::cout << "C++17";
    } else if (cpp_version == 201402L) {
        std::cout << "C++14";
    } else if (cpp_version == 201103L) {
        std::cout << "C++11";
    } else if (cpp_version == 199711L) {
        std::cout << "C++98/03";
    } else {
        std::cout << "Pre-C++98 or unknown (" << cpp_version << ")";
    }
    std::cout << std::endl;
    return 0;
}