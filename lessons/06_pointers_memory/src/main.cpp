#include "pointers.hpp"

#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4};
    std::cout << "sum_raw: " << lesson06::sum_raw(numbers, 4) << "\n";
    lesson06::zero_out(numbers, 2);
    std::cout << "after zero_out first two: " << numbers[0] << ',' << numbers[1] << "\n";
    int *ptrs[] = {numbers, nullptr, numbers + 2};
    std::cout << "non-null pointers: " << lesson06::count_non_null(ptrs, 3) << "\n";
    return 0;
}
