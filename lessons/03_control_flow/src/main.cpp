#include "flow.hpp"

#include <iostream>

int main() {
    for (const auto &entry : lesson03::fizzbuzz(15)) {
        std::cout << entry << ' ';
    }
    std::cout << "\nEven count: " << lesson03::count_even({1, 2, 3, 4, 5, 6}) << "\n";
    std::cout << "Above freezing? " << std::boolalpha << lesson03::classify_temperature(10)
              << "\n";
    return 0;
}
