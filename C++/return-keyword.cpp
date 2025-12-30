#include <stdio.h>
#include <math.h>
#include <string>

bool isEven(int number) {
    return number % 2 == 0;
}

std::string checkNumber(int number) {
    if (isEven(number)) {
        return "The number is even.";
    } else {
        return "The number is odd.";
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    std::string result = checkNumber(num);
    printf("%s\n", result.c_str());
    
    return 0;
}