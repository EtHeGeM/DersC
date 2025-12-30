#include <stdio.h>
#include <math.h>
#include <string>

// Function to display multiple parameters of different types
void displayInfo(int id, double score, std::string name) {
    printf("ID: %d\n", id);
    printf("Score: %.2f\n", score);
    name = "Changed Name"; // This change won't affect the original variable
    printf("Name: %s\n", name.c_str());
}
int main() {
    int studentId = 101;
    double studentScore = 95.5;
    std::string studentName = "Alice";
    

    // Call the function with multiple parameters
    displayInfo(studentId, studentScore, studentName);
    
    studentName = "Bob";

    return 0;
}