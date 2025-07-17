#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

int searchArray(int array[], int size, int element);

int main() {

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index;
    int myNum;
    int size = sizeof(numbers)/sizeof(numbers[0]);

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;
    index = searchArray(numbers, size, myNum);
    if(index != -1){
        std::cout << "Your element is at index: " << index << '\n';
    }
    else{
        std::cout << "Your element is not in the dataset!" << '\n';
    }


    return 0;

}

int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;

}