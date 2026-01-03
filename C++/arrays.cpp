#include <stdio.h>

int main() {
    // Declare and initialize an array of integers
    int numbers[] = {10, 20, 30, 40, 50, 60};
    
    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    numbers[size-1] = 100; // Modify the last element of the array
    // Print the elements of the array
    for(int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }
    
    return 0;
}
