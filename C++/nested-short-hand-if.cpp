#include <cmath>
#include <cstdio>
#include <string>
int main() {
    int time = 22;
    std::string message = (time < 12) ? "Good morning."  : (time < 18) ? "Good afternoon."  : "Good evening.";
    printf("%s\n", message.c_str());
    return 0;
}
