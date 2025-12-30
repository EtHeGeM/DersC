#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;


void printName(string name="Eren") {
    printf("Name: %s\n", name.c_str());
}

int main() {
    string names[] = {"Alice", "Bob", "Charlie", "Diana", "Ethan"};
    int size = sizeof(names) / sizeof(names[0]);
    for(int i = 0; i < size+1; i++) {
        if (i < size)
            printName(names[i]);
        else{
            printName(); // Default parameter
        }
    }
    return 0;
}