#include <iostream>


int main() {

    // type conversion = conversion a value of data type to another
    // Implicit = automatic
    // Explicit = Precede value with new data type (int)

    // Implicit
    int x = 3.14;
    std::cout << x << "\n";
    char z  = 100;
    std::cout << z << "\n";

    // Explicit
    double y = (int) 3.14;
    std::cout << y << "\n";
    std::cout << (char) 100 << "\n";

    int correctAnswers = 8;
    int totalQuestions = 10;

    double percentage = ((double) correctAnswers/ (double) totalQuestions) * 100;
    std::cout << percentage << "\n";

    return 0;
}