// Evaluates relational operators on two constants and prints the results.
#include <stdio.h>

using namespace std;



int main(){

    //comparison of two constant values
    int A = 50;
    int B = 100;
    printf("A>B: %d\n", A > B);  // Outputs 0 (false)
    printf("A<B: %d\n", A < B);  // Outputs 1 (true)
    printf("A==B: %d\n", A == B); // Outputs 0 (false) 
    printf("A!=B: %d\n", A != B); // Outputs 1 (true)
    printf("A>=B: %d\n", A >= B); // Outputs 0 (false)
    printf("A<=B: %d\n", A <= B); // Outputs 1 (true)
    return 0;

}
