#include "modular.hpp"

#include <numeric>
#include <stdexcept>

namespace lesson04 {
int area_rect(int width, int height) {
    if (width < 0 || height < 0) {
        throw std::invalid_argument("dimensions must be non-negative");
    }
    return width * height;
}

int area_square(int side) { return area_rect(side, side); }

double harmonic_mean(const std::vector<double> &values) {
    if (values.empty()) {
        throw std::invalid_argument("values cannot be empty");
    }
    const double sum = std::accumulate(values.begin(), values.end(), 0.0,
                                       [](double acc, double value) { return acc + 1.0 / value; });
    return static_cast<double>(values.size()) / sum;
}

std::string join(const std::vector<std::string> &parts, const std::string &separator) {
    std::string output;
    for (size_t i = 0; i < parts.size(); ++i) {
        output += parts[i];
        if (i + 1 < parts.size()) {
            output += separator;
        }
    }
    return output;
}
}  // namespace lesson04
