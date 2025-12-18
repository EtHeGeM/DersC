#pragma once

#include <string>
#include <string_view>
#include <vector>

namespace lesson05 {
std::size_t count_word(const std::vector<std::string> &words, const std::string &target);
std::vector<int> prefix_sums(const std::vector<int> &values);
std::string concatenate(const std::vector<std::string> &words, char delimiter);
std::vector<std::string_view> split_view(std::string_view line, char delimiter);
}
