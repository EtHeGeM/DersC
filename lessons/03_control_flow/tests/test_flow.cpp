#include <catch2/catch_all.hpp>

#include "flow.hpp"

TEST_CASE("fizzbuzz handles multiples") {
    const auto fb = lesson03::fizzbuzz(15);
    REQUIRE(fb[2] == "Fizz");
    REQUIRE(fb[4] == "Buzz");
    REQUIRE(fb[14] == "FizzBuzz");
}

TEST_CASE("count_even counts correctly") {
    REQUIRE(lesson03::count_even({1, 2, 4}) == 2);
    REQUIRE(lesson03::count_even({1, 3, 5}) == 0);
}

TEST_CASE("classify_temperature differentiates freezing") {
    REQUIRE_FALSE(lesson03::classify_temperature(-5));
    REQUIRE(lesson03::classify_temperature(20));
}
