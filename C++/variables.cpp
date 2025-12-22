// Declares variables of several fundamental types and prints them.
#include <stdio.h>
#include <string>
using namespace std;
int main() 

{
    int a = 10;
    double b = 5.565465;
    char c = 'A';
    string name = "John Doe";    
    bool flag = 0;  // boolean defaults to false here
    printf("Integer: %d\n", a);
    printf("Double: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("String: %s\n", name.c_str());
    printf("Boolean: %d\n", flag); // prints 1 for true, 0 for false
    

    
return 0;

}
