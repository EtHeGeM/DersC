// Concatenates two std::string values and prints the result.
#include <cstdio>
#include <string>

int main() {
    std::string str1 = "C++ Kursu";
    
    int length = str1.length();
    int size = str1.size();
    printf("String uzunluğu: %d\n", length);
    printf("String boyutu: %d\n", size);
    return 0;

}