#include "stl_examples.hpp"

#include <algorithm>
#include <numeric>

namespace lesson11 {
double average_score(const std::vector<int> &scores) {
    if (scores.empty()) {
        return 0.0;
    }
    const int total = std::accumulate(scores.begin(), scores.end(), 0);
    return static_cast<double>(total) / static_cast<double>(scores.size());
}

std::map<std::string, int> word_histogram(const std::vector<std::string> &words) {
    std::map<std::string, int> counts;
    for (const auto &word : words) {
        ++counts[word];
    }
    return counts;
}

std::set<int> intersection(const std::set<int> &a, const std::set<int> &b) {
    std::set<int> result;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(),
                          std::inserter(result, result.begin()));
    return result;
}

std::vector<std::string> filter_prefix(const std::vector<std::string> &words, char prefix) {
    std::vector<std::string> filtered;
    std::copy_if(words.begin(), words.end(), std::back_inserter(filtered),
                 [prefix](const std::string &word) {
                     return !word.empty() && word.front() == prefix;
                 });
    return filtered;
}
}  // namespace lesson11
