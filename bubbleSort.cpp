#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

void bubbleSort(int array[], int size);

/*
Bubble sort is a simple sorting algorithm that repeatedly steps through 
the list, compares adjacent elements, and swaps them if they are in the 
wrong order. The pass through the list is repeated until the list is 
sorted. The algorithm gets its name because smaller or larger elements 
"bubble" to their correct position in the list.

Completing a pass: After the first full pass, the largest element in the 
array will have "bubbled up" to the very end.

Repeating the process: The algorithm then starts over from the beginning, 
but since the last element is already in its correct place, it only needs to check up to the second-to-last element. This process is repeated for each element in the array.

Each pass through the array places the next largest element in its proper 
place. For an array of n elements, the algorithm will need to perform n-1 
passes to guarantee the array is sorted.

*/

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