#include <cmath>
#include <cstdio>
#include <string>
int main() {
    int time;
    printf("Enter the current hour (0-23): ");
    scanf("%d", &time);
    std::string message = (time < 0 || time > 24) ? "Invalid hour." : (time < 12) ? "Good morning."
    : (time < 18) ? "Good afternoon."
    : "Good evening.";
    printf("%s\n", message.c_str());
    return 0;
}
