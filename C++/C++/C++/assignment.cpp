// Shows how compound assignment operators update a running value.
#include <stdio.h>

int main(){     

    // Demonstrating assignment operators
    int x = 5;            // Simple assignment
    int y = 10;

    x += y;               // Addition assignment
    printf("After x += y, x: %d\n", x);

    x -= 3;               // Subtraction assignment
    printf("After x -= 3, x: %d\n", x);

    x *= 2;               // Multiplication assignment
    printf("After x *= 2, x: %d\n", x);

    x /= 4;               // Division assignment
    printf("After x /= 4, x: %d\n", x);

    x %= 3;               // Modulus assignment
    printf("After x %%= 3, x: %d\n", x);

    return 0;
}
