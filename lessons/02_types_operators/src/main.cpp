#include "types.hpp"

#include <cstdint>
#include <iostream>
#include <limits>

int main() {
    std::cout << "int size: " << sizeof(int) << " bytes\n";
    std::cout << "uint8_t max: " << static_cast<int>(std::numeric_limits<std::uint8_t>::max())
              << "\n";

    std::cout << "weighted_average(10, 20, 0.25) = "
              << lesson02::weighted_average(10, 20, 0.25) << "\n";
    std::cout << "within_byte_range(260) -> " << std::boolalpha
              << lesson02::within_byte_range(260) << "\n";
    std::cout << "saturating_add(INT_MAX, 10) -> "
              << lesson02::saturating_add(std::numeric_limits<int>::max(), 10) << "\n";
    return 0;
}
