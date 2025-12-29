#include <stdio.h>
using namespace std;
int main() {
int number, divisor,counter=0;
printf("Enter a number: ");
scanf("%d", &number);
printf("Enter a divisor: ");
scanf("%d", &divisor);
while(true){
    if(number % divisor == 0){
        number = number /divisor;
        printf("Current number: %d\n", number);
        counter++;
    }
    else{
        printf("The number was divisible %d times.\n", counter);
        break;
    }
}


}