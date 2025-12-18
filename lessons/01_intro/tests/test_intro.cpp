#include <catch2/catch_all.hpp>

#include "intro.hpp"

TEST_CASE("greeting formats name") {
    REQUIRE(lesson01::greeting("Ada").find("Ada") != std::string::npos);
}

TEST_CASE("add computes sums") {
    REQUIRE(lesson01::add(2, 3) == 5);
    REQUIRE(lesson01::add(-1, 1) == 0);
}
