#include "arrays_strings.hpp"

#include <iostream>

int main() {
    const std::vector<std::string> words = {"cpp", "is", "fast", "cpp"};
    std::cout << "'cpp' count: " << lesson05::count_word(words, "cpp") << "\n";
    for (auto sum : lesson05::prefix_sums({1, 2, 3, 4})) {
        std::cout << sum << ' ';
    }
    std::cout << "\n";
    std::cout << lesson05::concatenate({"modern", "c++", "rocks"}, '-') << "\n";
    for (auto token : lesson05::split_view("a,b,c", ',')) {
        std::cout << '[' << token << ']';
    }
    std::cout << "\n";
    return 0;
}
