#include "intro.hpp"

#include <iostream>

int main(int argc, char **argv) {
    const std::string name = (argc > 1) ? argv[1] : "Student";
    std::cout << lesson01::greeting(name) << "\n";
    std::cout << "2 + 3 = " << lesson01::add(2, 3) << "\n";
    return 0;
}
