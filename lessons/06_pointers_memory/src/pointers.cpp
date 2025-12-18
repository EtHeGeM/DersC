#include "pointers.hpp"

#include <stdexcept>

namespace lesson06 {
int sum_raw(const int *data, std::size_t size) {
    if (data == nullptr && size > 0) {
        throw std::invalid_argument("data pointer is null");
    }
    int sum = 0;
    for (std::size_t i = 0; i < size; ++i) {
        sum += *(data + i);
    }
    return sum;
}

void zero_out(int *start, std::size_t size) {
    if (start == nullptr && size > 0) {
        throw std::invalid_argument("start pointer is null");
    }
    for (std::size_t i = 0; i < size; ++i) {
        *(start + i) = 0;
    }
}

std::size_t count_non_null(int *const *ptrs, std::size_t size) {
    std::size_t count = 0;
    for (std::size_t i = 0; i < size; ++i) {
        if (ptrs[i] != nullptr) {
            ++count;
        }
    }
    return count;
}
}  // namespace lesson06
