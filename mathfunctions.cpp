#include <iostream>
#include <limits>
#include <cmath>


int main() {

    double x = 3.14;
    double y = 4;
    double z = std::max(x, y);
    double a = std::min(x, y);
    int b = pow(2, 3);
    int c = sqrt(25);
    int d = abs(-10);
    int e = round(x);
    int f = ceil(x);
    int g = floor(x);
    double hype = sqrt(pow(x, 2) + pow(y, 2));

    std::cout << z << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << e << '\n';
    std::cout << f << '\n';
    std::cout << g << '\n';
    std::cout << hype << '\n';
    
    return 0;

}