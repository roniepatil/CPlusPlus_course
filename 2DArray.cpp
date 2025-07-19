#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>


int main() {

    // One can also declare std::string cars[][4], as specifying columns
    // is mandatory, but rows is not.
    std::string cars[3][4] = {{"Mustang", "F-150", "Explorer"},
                              {"Corvette", "Silverado", "Traverse"},
                              {"Challenger", "Charger", "Durango"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;

}