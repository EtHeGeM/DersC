#include "raii.hpp"

#include <iostream>

int main() {
    lesson07::ResourceGuard guard(3);
    guard.set(0, 5);
    guard.set(1, 10);
    std::cout << "sum: " << lesson07::sum_buffer(guard) << "\n";

    auto value = lesson07::make_int(42);
    std::cout << "unique_ptr value: " << *value << "\n";

    std::cout << "first or default: " << lesson07::first_or_default({}, -1) << "\n";
    return 0;
}
