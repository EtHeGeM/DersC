#include "stl_examples.hpp"

#include <iostream>

int main() {
    const std::vector<int> scores = {90, 80, 70, 100};
    std::cout << "Average: " << lesson11::average_score(scores) << "\n";

    const std::vector<std::string> words = {"cpp", "is", "fast", "cpp"};
    for (const auto &pair : lesson11::word_histogram(words)) {
        std::cout << pair.first << ": " << pair.second << '\n';
    }

    std::set<int> a = {1, 2, 3};
    std::set<int> b = {2, 3, 4};
    for (int value : lesson11::intersection(a, b)) {
        std::cout << value << ' ';
    }
    std::cout << "\n";

    for (const auto &word : lesson11::filter_prefix({"apple", "banana", "apricot"}, 'a')) {
        std::cout << word << ' ';
    }
    std::cout << "\n";
    return 0;
}
