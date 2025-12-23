// Prints a few characters by their ASCII codes and labels the output.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string d = "ASCII Values:";
    char a = 65, b = 66, c = 67;

    printf("Characters: %c %c %c\n", a, b, c);
    printf("%s", d.c_str());
    printf("\u20BA\n");
    return 0;
}
