#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

class AC{
    private:
        int temperature;
    
    public:
        AC(){}
        // constructor using setter
        AC(int temperature){
            setTemperature(temperature);
        }
        int getTemperature(){
            return temperature;
        }
        void setTemperature(int temperature){
            if(temperature < 60){
                temperature = 60;
            }
            else if(temperature >= 80){
                temperature = 80;
            }
            else{
                this->temperature = temperature;
            }
        }
};

int main() {

    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    AC ac1;
    ac1.setTemperature(65);
    std::cout << ac1.getTemperature() << '\n';

    AC ac2(68);
    std::cout << ac2.getTemperature() << '\n';


    return 0;

}