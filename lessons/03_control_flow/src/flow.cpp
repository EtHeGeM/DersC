#include "flow.hpp"

#include <stdexcept>

namespace lesson03 {
std::vector<std::string> fizzbuzz(int n) {
    if (n < 0) {
        throw std::invalid_argument("n must be non-negative");
    }
    std::vector<std::string> result;
    result.reserve(static_cast<size_t>(n));
    for (int i = 1; i <= n; ++i) {
        if (i % 15 == 0) {
            result.emplace_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.emplace_back("Fizz");
        } else if (i % 5 == 0) {
            result.emplace_back("Buzz");
        } else {
            result.emplace_back(std::to_string(i));
        }
    }
    return result;
}

int count_even(const std::vector<int> &values) {
    int count = 0;
    for (const int value : values) {
        if (value % 2 == 0) {
            ++count;
        }
    }
    return count;
}

bool classify_temperature(int celsius) {
    switch (celsius) {
        case 0:
            return false;  // freezing
        default:
            if (celsius < 0) {
                return false;
            }
            return true;
    }
}
}  // namespace lesson03
