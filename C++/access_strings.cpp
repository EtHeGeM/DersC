// Concatenates two std::string values and prints the result.
#include <cstdio>
#include <string>

int main() {
    std::string str1 = "C++ Kursu";
    
    int length = str1.length();
    int size = str1.size();
    printf("String uzunluğu: %d\n", length);
    printf("String boyutu: %d\n", size);

    //change character at index 2
    str1[2] = '-';
    printf("%s\n", str1.c_str());

    // .at function

    printf("Character at index 2: %c\n", str1.at(2));

    //change via at function
    str1.at(2) = '+';
    printf("%s\n", str1.c_str());

    printf("Maksimum string uzunluğu: %c\n", str1[2]);
    return 0;

}