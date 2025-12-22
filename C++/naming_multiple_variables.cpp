#include <stdio.h>

int main() {
    // cases of variables definition
    int firstInt = 10;
    float first_float = 4.7;
    char FirstChar = 'A';
    // easier definition of multiple variables of the same type
    int secondInt = 20, thirdInt = 30, fourthInt = 40;

    secondInt = firstInt = thirdInt = 30;
    printf("Second Integer: %d\n", secondInt);

    return 0;


}