#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

void bubbleSort(int array[], int size);

int main() {

    int array[] = {9, 5, 8, 4, 6, 2, 1, 3, 7, 10};
    int size = sizeof(array)/sizeof(array[0]);

    bubbleSort(array, size);

    for(int i : array){
        std::cout << i << ' ';
    }

    return 0;

}

void bubbleSort(int array[], int n){

    int temp;
    // Loop for each pass through the array
    for(int i = 0; i < n - 1; i++){
        // Loop to compare adjacent elements in each pass
        // The '- i' is because the last 'i' elements are already sorted
        for(int j = 0; j < n - i - 1; j++){
            // Compare the adjacent elements
            if(array[j] > array[j + 1]){
                // Swap them if they are in the wrong order
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        std::cout << i << '\n';
    }
}