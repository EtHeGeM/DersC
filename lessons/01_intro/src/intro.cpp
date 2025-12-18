#include "intro.hpp"

#include <string>

namespace lesson01 {
std::string greeting(const std::string &name) {
    return "Hello, " + name + "! Welcome to C++.";
}

int add(int a, int b) { return a + b; }
}  // namespace lesson01
