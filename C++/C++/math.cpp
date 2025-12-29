#include <cmath>
#include <cstdio>
int main() {

    float maximum = std::fmax(3.5, 2.5);
    double minimum = std::fmin(3.5, 2.5);
    int power = std::pow(2.0, 3.0);
    double squareRoot = std::sqrt(16.0);
    double absolute = std::fabs(-5.5);
    double rounded = std::round(4.3);
    printf("Maximum: %.2f\n", maximum);
    printf("Minimum: %.2f\n", minimum);
    printf("Power: %i\n", power);
    printf("Square Root: %.2f\n", squareRoot);
    printf("Absolute: %.2f\n", absolute);
    printf("Rounded: %.2f\n", rounded);

    float sineValue = std::sin(3.14159 / 4); // sin(90 degrees)
    float cosineValue = std::cos(0);         // cos(0 degrees)

    printf("Sine of 90 degrees: %.2f\n", sineValue);
    printf("Cosine of 0 degrees: %.2f\n", cosineValue);
    return 0;
}
