#include "model.hpp"

#include <iostream>

int main() {
    lesson08::Point a{0, 0};
    lesson08::Point b{5, 3};
    auto rect = lesson08::make_normalized(a, b);
    std::cout << "area: " << rect.area() << "\n";
    auto moved = lesson08::translate(a, 2, 2);
    std::cout << "contains moved point? " << std::boolalpha << rect.contains(moved) << "\n";
    return 0;
}
