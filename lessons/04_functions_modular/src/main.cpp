#include "modular.hpp"

#include <iostream>

int main() {
    std::cout << "Square area (4): " << lesson04::area_square(4) << "\n";
    std::cout << "Harmonic mean of {1,2,4}: "
              << lesson04::harmonic_mean({1.0, 2.0, 4.0}) << "\n";
    std::cout << lesson04::join({"modular", "design", "wins"}, " ") << "\n";
    return 0;
}
