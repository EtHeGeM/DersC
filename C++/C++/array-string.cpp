#include <stdio.h>
#include <string.h>
int main() {
    // Declare and initialize a string (character array)
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); // Limit input to avoid overflow
    // Print the entered string
    printf("You entered: %c\n", str[2]);
    
    return 0;
}