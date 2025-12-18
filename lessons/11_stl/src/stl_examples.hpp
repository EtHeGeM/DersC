#pragma once

#include <map>
#include <set>
#include <string>
#include <vector>

namespace lesson11 {
double average_score(const std::vector<int> &scores);
std::map<std::string, int> word_histogram(const std::vector<std::string> &words);
std::set<int> intersection(const std::set<int> &a, const std::set<int> &b);
std::vector<std::string> filter_prefix(const std::vector<std::string> &words, char prefix);
}
