#pragma once

#include <cstddef>

namespace lesson06 {
int sum_raw(const int *data, std::size_t size);
void zero_out(int *start, std::size_t size);
std::size_t count_non_null(int *const *ptrs, std::size_t size);
}
