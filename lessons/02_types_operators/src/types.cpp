#include "types.hpp"

#include <algorithm>
#include <limits>

namespace lesson02 {
double weighted_average(int a, int b, double weight_b) {
    const double clamped_weight = std::clamp(weight_b, 0.0, 1.0);
    return (static_cast<double>(a) * (1.0 - clamped_weight)) +
           (static_cast<double>(b) * clamped_weight);
}

bool within_byte_range(int value) {
    return value >= std::numeric_limits<std::uint8_t>::min() &&
           value <= std::numeric_limits<std::uint8_t>::max();
}

int saturating_add(int lhs, int rhs) {
    const long long sum = static_cast<long long>(lhs) + static_cast<long long>(rhs);
    if (sum > std::numeric_limits<int>::max()) {
        return std::numeric_limits<int>::max();
    }
    if (sum < std::numeric_limits<int>::min()) {
        return std::numeric_limits<int>::min();
    }
    return static_cast<int>(sum);
}
}  // namespace lesson02
