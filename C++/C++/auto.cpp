// Demonstrates type inference with the auto keyword.
#include <stdio.h>

int main() {

    // Using auto to declare variables with type inference
    auto integerVar = 42;               // inferred as int
    auto doubleVar = 3.14;              // inferred as double
    auto charVar = 'A';                 // inferred as char
    auto stringVar = "Hello, World!";   // inferred as const char*
    integerVar = 9.2;                   // narrowing assignment; value becomes 9

    // Printing the values
    printf("Integer: %d\n", integerVar);
    printf("Double: %.2f\n", doubleVar);
    printf("Character: %c\n", charVar);
    printf("String: %s\n", stringVar);

    return 0;
}
