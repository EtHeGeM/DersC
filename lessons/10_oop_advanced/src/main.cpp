#include "polymorphism.hpp"

#include <iostream>
#include <memory>

int main() {
    auto processor = lesson10::make_cash();
    if (lesson10::checkout(*processor, 25.0)) {
        std::cout << processor->name() << " succeeded" << "\n";
    }

    lesson10::CardProcessor card("1111222233334444");
    lesson10::checkout(card, 42.0);
    return 0;
}
