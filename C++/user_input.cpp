#include <stdio.h>

int main() { 
    // user input

    int a, b,sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b); // read two integers from user  
    sum = a + b;
    printf("Sum: %d\nValues : %d, %d \n", sum,a,b); // print the sum of the two integers
    return 0;

}