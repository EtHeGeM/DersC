// Demonstrates creating a std::string and inspecting its length.
#include <cstdio>
#include <string>

int main() {
    // Build a string from a literal; memory is managed automatically.
    std::string message = "C++ strings handle size for you";

    // Print the string content and its length.
    printf("Message: %s\nLength : %zu\n", message.c_str(), message.size());
    return 0;
}
