#include <stdio.h>
#include <string>
using namespace std;
void change_certain_element(int arr[], int index, int new_value) {
    arr[index] = new_value;
}
int main() {
    int my_array[] = {1, 2, 3, 4, 5};
    int index_to_change = 2; // Change the element at index 2
    int new_value = 99;

    change_certain_element(my_array, index_to_change, new_value);

    // Print the modified array
    int size = sizeof(my_array) / sizeof(my_array[0]);
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, my_array[i]);
    }

    return 0;
}