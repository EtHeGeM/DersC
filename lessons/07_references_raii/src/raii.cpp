#include "raii.hpp"

#include <stdexcept>

namespace lesson07 {
ResourceGuard::ResourceGuard(std::size_t size) : buffer_(std::make_unique<int[]>(size)), size_(size) {
    for (std::size_t i = 0; i < size_; ++i) {
        buffer_[i] = 0;
    }
}

void ResourceGuard::set(std::size_t index, int value) {
    if (index >= size_) {
        throw std::out_of_range("index out of range");
    }
    buffer_[index] = value;
}

int ResourceGuard::get(std::size_t index) const {
    if (index >= size_) {
        throw std::out_of_range("index out of range");
    }
    return buffer_[index];
}

int sum_buffer(const ResourceGuard &guard) {
    int sum = 0;
    for (std::size_t i = 0; i < guard.size(); ++i) {
        sum += guard.get(i);
    }
    return sum;
}

std::unique_ptr<int> make_int(int value) { return std::make_unique<int>(value); }

int first_or_default(const std::vector<int> &values, int default_value) {
    if (!values.empty()) {
        return values.front();
    }
    return default_value;
}
}  // namespace lesson07
