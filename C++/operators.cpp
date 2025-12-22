#include <stdio.h>

int main(){
    // Demonstrating basic arithmetic operators
    int a = 10;
    int b = 3;

    int sum = a + b;          // Addition
    int difference = a - b;   // Subtraction
    int product = a * b;      // Multiplication
    int quotient = a / b;     // Division
    int remainder = a % b;    // Modulus
    int newInt = ++a;          // Unary plus
    int oldInt = --a;     // Unary minus

    // Printing the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    printf("New Integer after Unary Plus: %d\n", newInt);
    printf("Old Integer after Unary Minus: %d\n", oldInt);

    return 0; }