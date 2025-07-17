#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

void bubbleSort(int array[], int size);

/*
Outer loop (for (int i = 0; i < n - 1; ++i)): This loop controls the 
number of passes. It runs n-1 times, ensuring that every element gets 
to its correct position.

Inner loop (for (int j = 0; j < n - 1 - i; ++j)): This loop performs the
comparisons and swaps for a single pass. The n - 1 - i part is an 
optimization; it avoids comparing elements that are already sorted and 
in their final positions at the end of the array.

std::swap(arr[j], arr[j + 1]): If the condition is true, this standard 
library function swaps the two elements.

swapped flag: This boolean is a further optimization. If a full pass is 
completed with no swaps, it means the array is already sorted, and the 
function can exit early without completing unnecessary passes.

Time Complexity: The worst-case and average-case time complexity of 
bubble sort is O(n^2) (read as "O of n squared"), where n is the number 
of items being sorted. This is because of the nested loops. In the 
best-case scenario (an already sorted array), the time complexity can be 
O(n) if the swapped flag optimization is used.

Space Complexity: The space complexity is O(1) because it's an "in-place"
sorting algorithm, meaning it doesn't require any extra memory apart from
the temporary variable used for swapping.
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
    // An optimization to stop early if the array is already sorted
    bool swapped;

    for(int i = 0; i < n - 1; i++){
        swapped = false;
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j + 1]){
                // Swap them if they are in the wrong order
                std::swap(array[j], array[j+1]);
                swapped = true;
            }
            
        }

        // If no two elements were swapped by the inner loop, 
        // then the array is sorted
        std::cout << i << '\n';
        if(!swapped){
            break;
        }
    }
}