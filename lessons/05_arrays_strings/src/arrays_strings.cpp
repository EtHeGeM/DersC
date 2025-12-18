#include "arrays_strings.hpp"

#include <sstream>

namespace lesson05 {
std::size_t count_word(const std::vector<std::string> &words, const std::string &target) {
    std::size_t count = 0;
    for (const auto &word : words) {
        if (word == target) {
            ++count;
        }
    }
    return count;
}

std::vector<int> prefix_sums(const std::vector<int> &values) {
    std::vector<int> sums;
    sums.reserve(values.size());
    int running = 0;
    for (int value : values) {
        running += value;
        sums.push_back(running);
    }
    return sums;
}

std::string concatenate(const std::vector<std::string> &words, char delimiter) {
    std::ostringstream oss;
    for (size_t i = 0; i < words.size(); ++i) {
        oss << words[i];
        if (i + 1 < words.size()) {
            oss << delimiter;
        }
    }
    return oss.str();
}

std::vector<std::string_view> split_view(std::string_view line, char delimiter) {
    std::vector<std::string_view> parts;
    size_t start = 0;
    for (size_t i = 0; i <= line.size(); ++i) {
        if (i == line.size() || line[i] == delimiter) {
            parts.emplace_back(line.substr(start, i - start));
            start = i + 1;
        }
    }
    return parts;
}
}  // namespace lesson05
